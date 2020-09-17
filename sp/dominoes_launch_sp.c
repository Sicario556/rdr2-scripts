void __EntryFunction__()
{
	fLocal_0 = 0.8f;
	if (has_force_cleanup_occurred(546))
	{
		func_1(1);
	}
	func_2(&uLocal_217, &uScriptParam_0);
	while (true)
	{
		if (func_3(&uLocal_217))
		{
			func_1(0);
		}
		wait(0);
	}
}

void func_1(bool bParam0)
{
	func_4(&uLocal_217, bParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	terminate_this_thread();
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	if (func_5() == -1)
	{
		func_6(uParam0->f_2);
	}
	StringCopy(&cVar1, func_7(uParam1->f_1), 64);
	StringConCat(&cVar1, "_BlkVol", 64);
	uParam0->f_20 = _create_volume_sphere_with_custom_name(uParam1->f_3, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, &cVar1);
	StringConCat(&cVar1, "_AmbBlockVol", 64);
	uParam0->f_19 = _create_volume_sphere_with_custom_name(uParam1->f_3, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, &cVar1);
	func_8(uParam1->f_3, 1.5f, 0);
	func_9(uParam1->f_3, 2f, 0);
	uParam0->f_22 = _0x4c39c95ae5db1329(uParam0->f_20, 0, 15);
	_0x18262cafebb5fbe1(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (func_10(uParam0->f_2))
	{
		uParam0->f_21 = _0x0eb78c2b156635b1(-432403087, uParam1->f_3, 0f, 0f, 0f, 4f, 4f, 4f);
		_0xbe551c2cc421185d(uParam0->f_21, 1);
		_0x5b23dff8e0948bb2(uParam0->f_21, 0);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_73[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_11(uParam0->f_968[iVar0], iVar0);
		iVar0++;
	}
	func_12(uParam0);
	uParam0->f_80 = func_13(uParam0);
	_0xed9582b3da8f02b4(uParam0->f_80);
	func_14(uParam0, 0);
}

bool func_3(var uParam0)
{
	uParam0->f_15++;
	uParam0->f_1098 = func_15(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_1098 || func_16(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_1098;
	}
	uParam0->f_68 = get_distance_between_coords(Global_36, uParam0->f_3, false);
	uParam0->f_69 = get_distance_between_coords(Global_36, uParam0->f_3, true);
	uParam0->f_1099 = 0;
	uParam0->f_1088 = 0;
	uParam0->f_1089 = (uParam0->f_16 && get_interior_from_entity(Global_35) == uParam0->f_18);
	uParam0->f_1090 = (func_17(uParam0) || uParam0->f_1089);
	uParam0->f_1087 = is_sphere_visible(uParam0->f_3, 2f);
	if (func_10(uParam0->f_2))
	{
		uParam0->f_1088 = uParam0->f_69 < 8f;
	}
	else if (uParam0->f_1089)
	{
		uParam0->f_1088 = uParam0->f_69 < 5f;
	}
	if (func_10(uParam0->f_2))
	{
		uParam0->f_1088 = uParam0->f_68 < 8f;
	}
	else if (uParam0->f_1090)
	{
		uParam0->f_1088 = uParam0->f_68 < 5f;
	}
	uParam0->f_79 = 0;
	if (uParam0->f_10 == 13 && func_18(&(uParam0->f_12)) > 2f)
	{
		func_19(uParam0);
		return func_20(uParam0);
	}
	func_21(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_22(uParam0);
	}
	uParam0->f_79 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_82[iVar0]->f_1 != 0)
		{
			func_23(uParam0, uParam0->f_82[iVar0]);
		}
		iVar0++;
	}
	func_19(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (func_24(uParam0, 0))
		{
			func_25(uParam0->f_1, uParam0->f_3, 1073741824, 0);
			func_6(uParam0->f_2);
			func_14(uParam0, 9);
		}
	}
	if (func_5() == -1)
	{
		if (!func_26(uParam0) || func_27(player_id(), 1, 0, 1))
		{
			func_6(uParam0->f_2);
		}
		else
		{
			func_28(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_29(uParam0) == 1)
			{
				func_14(uParam0, 1);
			}
			break;
		case 1:
			if (!func_30(uParam0->f_3, 2f))
			{
				func_14(uParam0, 2);
			}
			break;
		case 2:
			if (func_31(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_32(uParam0, iVar0);
					iVar0++;
				}
				func_14(uParam0, 3);
			}
			break;
		case 3:
			if (func_33(uParam0) == 1)
			{
				uParam0->f_17 = create_tracked_point();
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					set_tracked_point_info(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_1096 = 0f;
				func_14(uParam0, 4);
			}
			break;
		case 4:
			if (is_screen_faded_out())
			{
				_0x9851de7aec10b4e1(uParam0->f_3, 2f, 1, 0);
				func_14(uParam0, 5);
			}
			else if (uParam0->f_79 > 0)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					destroy_tracked_point(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_14(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_68 > 70f)
			{
				func_14(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_68 > 18f)
			{
				func_14(uParam0, 5);
			}
			else if (uParam0->f_68 > uParam0->f_1095)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					if (is_tracked_point_visible(uParam0->f_17))
					{
						uParam0->f_1096 = 0f;
					}
				}
				else if (would_entity_be_occluded(get_entity_model(Global_35), uParam0->f_3, true))
				{
					uParam0->f_1096 = 0f;
				}
				uParam0->f_1096 = (uParam0->f_1096 + get_frame_time());
				if (uParam0->f_1096 > 1f)
				{
					func_14(uParam0, 5);
				}
				else if (uParam0->f_16 && get_interior_from_entity(Global_35) != uParam0->f_18)
				{
					func_14(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_34(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (_is_tracked_point_valid(uParam0->f_17))
			{
				destroy_tracked_point(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			func_35(uParam0->f_2);
			func_36(uParam0->f_1, 16);
			func_37(uParam0->f_1, 4194304);
			func_14(uParam0, 6);
			break;
		case 6:
			func_38(uParam0->f_2);
			if (uParam0->f_68 < 7f)
			{
				func_39(uParam0);
				func_14(uParam0, 7);
			}
			else if (uParam0->f_68 < 12f && is_ped_on_foot(Global_35))
			{
				func_39(uParam0);
				func_14(uParam0, 7);
			}
			break;
		case 7:
			if (func_40(uParam0))
			{
				func_41(uParam0->f_2);
				func_14(uParam0, 8);
			}
			break;
		case 8:
			func_42(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_71 == 0)
				{
					func_14(uParam0, 11);
				}
			}
			break;
		case 10:
			set_ped_reset_flag(Global_35, 184, true);
			if (!bVar1 || func_43() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_44(uParam0))
					{
						func_45();
						func_14(uParam0, 8);
					}
				}
				else
				{
					func_46(uParam0);
					if (func_44(uParam0))
					{
						func_45();
						func_14(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			func_14(uParam0, 12);
			break;
		case 12:
			func_47(uParam0, 1);
			func_14(uParam0, 13);
			break;
	}
	func_48(uParam0);
	return func_20(uParam0);
}

void func_4(var uParam0, bool bParam1)
{
	func_49(uParam0);
	func_6(uParam0->f_2);
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
		while (iVar0 < 4)
		{
			func_50(uParam0, uParam0->f_82[iVar0]->f_11, 0);
			func_51(uParam0, uParam0->f_82[iVar0], 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_52(uParam0, uParam0->f_82[iVar0]);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_53(uParam0->f_968[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
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
	if (!func_15(uParam0->f_8))
	{
		if (uParam0->f_1093)
		{
			sVar1 = func_54(uParam0);
			if (!is_string_null_or_empty(sVar1))
			{
				_0x531a78d6bf27014b(sVar1);
				uParam0->f_1093 = 0;
			}
		}
	}
	func_55(uParam0);
	_0x7d4e70a67a651c71(uParam0->f_80);
	func_56(uParam0->f_20);
	func_56(uParam0->f_19);
	func_56(uParam0->f_21);
}

int func_5()
{
	return Global_1572887->f_12;
}

void func_6(int iParam0)
{
	if (func_5() != -1)
	{
		return;
	}
	if (!func_57(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

char* func_7(int iParam0)
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

void func_8(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_9(vector3 vParam0, float fParam3, int iParam4)
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

bool func_10(int iParam0)
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

void func_11(var uParam0, int iParam1)
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

void func_12(var uParam0)
{
	iLocal_1 = func_59(func_58());
	func_61(&Local_2, 9535);
	func_62(uParam0);
	func_63(uParam0, -402120378, 0);
	func_64(&Local_2);
}

int func_13(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_bit_set(uParam0->f_72, iVar0) && !is_bit_set(uParam0->f_71, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_14(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	func_65(&(uParam0->f_12));
}

bool func_15(int iParam0)
{
	iVar0 = func_66(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_16(int iParam0)
{
	iVar0 = func_67(iParam0, 0);
	return _get_number_of_references_of_script_with_name_hash(iVar0) > 0;
}

bool func_17(var uParam0)
{
	if (uParam0->f_1089)
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

float func_18(var uParam0)
{
	if (!func_68(uParam0))
	{
		return 0f;
	}
	if (func_69(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_70() - uParam0->f_1);
}

void func_19(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&uParam0->f_968[iVar0] == 2)
		{
			func_71(uParam0->f_968[iVar0], 0);
			Jump @124; //curOff = 42
		}
		else if (&uParam0->f_968[iVar0] == 5)
		{
			uParam0->f_968[iVar0]->f_2 = _get_anim_scene_progress(uParam0->f_968[iVar0]->f_1);
			Jump @124; //curOff = 87
		}
		else if (&uParam0->f_968[iVar0] == 3)
		{
			func_72(uParam0, uParam0->f_968[iVar0]->f_28, 1);
		}
		iVar0++;
	}
}

int func_20(var uParam0)
{
	fVar1 = func_73(uParam0->f_1);
	if (uParam0->f_9 != 0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (is_entity_dead(Global_35) || Global_1935630->f_22)
	{
		if (is_screen_faded_out())
		{
			func_6(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141->f_1328)
	{
		func_6(uParam0->f_2);
		return 1;
	}
	if (func_74(uParam0->f_1, 262144))
	{
		func_55(uParam0);
		func_75(uParam0, 1, 0);
		return 1;
	}
	if (!func_76(uParam0->f_1))
	{
		func_6(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_77(uParam0->f_7, 4194304))
		{
			func_6(uParam0->f_2);
			return 1;
		}
		if (func_58() != uParam0->f_7)
		{
			func_6(uParam0->f_2);
			return 1;
		}
	}
	if (!func_78(uParam0->f_8) && !func_15(uParam0->f_8))
	{
		func_6(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && _get_number_of_references_of_script_with_name_hash(19547436) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_68 > fVar1)
		{
			func_55(uParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_51(uParam0, uParam0->f_82[iVar0], 1);
				iVar0++;
			}
			func_6(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_1098)
	{
		if (func_79())
		{
			if (!func_80(uParam0->f_2))
			{
				if (func_81())
				{
					if (uParam0->f_2 == 0 && get_hash_of_this_script_name() == 1121120602)
					{
						return 0;
					}
					if (uParam0->f_68 < 10f)
					{
						func_75(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_82(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if ((get_frame_count() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_68 < 15f)
	{
		if (uParam0->f_1093 == 0)
		{
			sVar0 = func_54(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0xd9130842d7226045(sVar0, 1);
			uParam0->f_1093 = 1;
		}
		return;
	}
	if (uParam0->f_68 > 25f)
	{
		if (uParam0->f_1093)
		{
			sVar0 = func_54(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0x531a78d6bf27014b(sVar0);
			uParam0->f_1093 = 0;
		}
	}
}

void func_22(var uParam0)
{
	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&uParam0->f_199[iVar0] == 5 && uParam0->f_199[iVar0]->f_22 == 0f)
		{
			Jump @988; //curOff = 57
		}
		else if (&uParam0->f_199[iVar0] == 1)
		{
			if (get_frame_count() > uParam0->f_199[iVar0]->f_2)
			{
				uParam0->f_199[iVar0] = 2;
			}
			Jump @988; //curOff = 101
		}
		else if (&uParam0->f_199[iVar0] == 2)
		{
			request_model(uParam0->f_199[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_199[iVar0]->f_1))
			{
				if (func_83(uParam0->f_199[iVar0]->f_16))
				{
					uParam0->f_199[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_199[iVar0]->f_23 = 255f;
				uParam0->f_199[iVar0]->f_4 = create_object_no_offset(uParam0->f_199[iVar0]->f_1, uParam0->f_199[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_199[iVar0]->f_4, uParam0->f_199[iVar0]->f_19, 2, true);
				uParam0->f_199[iVar0] = 5;
				set_model_as_no_longer_needed(uParam0->f_199[iVar0]->f_1);
				if (uParam0->f_199[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_199[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_199[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_199[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 370
		}
		else if (&uParam0->f_199[iVar0] == 4)
		{
			request_model(uParam0->f_199[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_199[iVar0]->f_1))
			{
				if (does_entity_exist(uParam0->f_199[iVar0]->f_4))
				{
					uParam0->f_199[iVar0]->f_16 = { get_entity_coords(uParam0->f_199[iVar0]->f_4, true, false) };
					uParam0->f_199[iVar0]->f_19 = { get_entity_rotation(uParam0->f_199[iVar0]->f_4, 2) };
					func_84(&(uParam0->f_199[iVar0]->f_4));
				}
				if (func_83(uParam0->f_199[iVar0]->f_16))
				{
					uParam0->f_199[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_199[iVar0]->f_4 = create_object_no_offset(uParam0->f_199[iVar0]->f_1, uParam0->f_199[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_199[iVar0]->f_4, uParam0->f_199[iVar0]->f_19, 2, true);
				uParam0->f_199[iVar0] = 5;
				uParam0->f_199[iVar0]->f_23 = 255f;
				set_model_as_no_longer_needed(uParam0->f_199[iVar0]->f_1);
				if (uParam0->f_199[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_199[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_199[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_199[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 725
		}
		else if (&uParam0->f_199[iVar0] == 5 && uParam0->f_199[iVar0]->f_22 != 0f)
		{
			if (does_entity_exist(uParam0->f_199[iVar0]->f_4))
			{
				fVar1 = (get_frame_time() / uParam0->f_199[iVar0]->f_22);
				uParam0->f_199[iVar0]->f_23 = (uParam0->f_199[iVar0]->f_23 + (fVar1 * 255f));
				if (uParam0->f_199[iVar0]->f_23 <= 0f)
				{
					func_85(uParam0, iVar0);
				}
				else if (uParam0->f_199[iVar0]->f_23 >= 255f)
				{
					uParam0->f_199[iVar0]->f_23 = 255f;
					reset_entity_alpha(uParam0->f_199[iVar0]->f_4);
					uParam0->f_199[iVar0]->f_22 = 0f;
				}
				else if (uParam0->f_199[iVar0]->f_22 < 0f)
				{
					set_entity_alpha(uParam0->f_199[iVar0]->f_4, floor(uParam0->f_199[iVar0]->f_23), true);
				}
				else
				{
					set_entity_alpha(uParam0->f_199[iVar0]->f_4, ceil(uParam0->f_199[iVar0]->f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_23(var uParam0, var uParam1)
{
	uVar0 = 4;
	iVar9 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (is_entity_dead(uParam1->f_11))
		{
			func_86(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = _0x3ab6c7b0bb0df4b1(uParam1->f_11, -1);
		set_ped_reset_flag(uParam1->f_11, 49, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			request_model(uParam1->f_2, false);
			if ((has_model_loaded(uParam1->f_2) && get_frame_count() > uParam1->f_17) && !uParam0->f_1099)
			{
				uParam1->f_11 = func_87(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_entity_heading(uParam1->f_11, uParam1->f_10);
				set_model_as_no_longer_needed(uParam1->f_2);
				uParam1->f_12 = -1;
				func_88(uParam1->f_11, 0);
				iVar6 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (does_entity_exist(uParam1->f_11))
					{
						iVar6 = func_90(uParam0->f_1, func_89(uParam0));
						iVar9 = func_91(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar6);
					}
				}
				func_92(uParam0, &uVar0, &iVar5);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_93(uParam1->f_11, uParam0->f_1, iVar9, &uVar0, iVar5, &iVar7))
					{
						set_ambient_voice_name(uParam1->f_11, func_94(iVar7));
					}
					else if (func_95(uParam1->f_11, uParam0->f_1, &uVar0, iVar5, &iVar7))
					{
						set_ambient_voice_name(uParam1->f_11, func_94(iVar7));
					}
					else
					{
						iVar7 = 92;
					}
				}
				else if (func_95(uParam1->f_11, uParam0->f_1, &uVar0, iVar5, &iVar7))
				{
					set_ambient_voice_name(uParam1->f_11, func_94(iVar7));
				}
				else
				{
					iVar7 = 92;
				}
				func_96(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar6, iVar7);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, &(uParam0->f_23[uParam1->f_12]->f_2), 0, false, true, 0, false, -1f, false);
					}
				}
				uParam0->f_1099 = 1;
			}
			break;
		case 3:
			func_97(uParam0, uParam1);
			break;
		case 4:
			if (func_98(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_99(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_79++;
			if (!is_ped_injured(uParam1->f_11))
			{
				set_ped_can_leg_ik(uParam1->f_11, false);
			}
			bVar8 = func_100(uParam1);
			if (uParam1->f_14 && !bVar8)
			{
				func_101(uParam0, uParam1, 0);
			}
			else
			{
				func_102(uParam0, uParam1);
			}
			uParam1->f_14 = bVar8;
			break;
		case 6:
			func_103(uParam0, uParam1);
			break;
		case 7:
			if (!is_ped_using_any_scenario(uParam1->f_11) || _0x0c3cb2e600c8977d(uParam1->f_11, 0))
			{
				_0xbc781d24aa11f179(uParam1->f_11);
				func_86(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

int func_24(var uParam0, int iParam1)
{
	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return func_104(uParam0->f_3, fVar0, iParam1);
}

void func_25(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_105(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
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
				if (func_106(iParam0, get_entity_model(iVar1)))
				{
					if (!is_entity_attached(iVar1))
					{
						if ((func_5() != -1 && network_has_control_of_entity(iVar1)) || func_5() == -1)
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
	func_56(iVar0);
}

bool func_26(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return func_107(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_107(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_27(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_108(bParam1, bParam2, bParam3);
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

void func_28(int iParam0)
{
	if (func_5() != -1)
	{
		return;
	}
	if (!func_57(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
}

int func_29(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_10(uParam0->f_2))
			{
				return 1;
			}
			if (func_109())
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
			func_110(uParam0);
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

bool func_30(vector3 vParam0, float fParam3)
{
	iVar1 = create_itemset(true);
	if (!is_itemset_valid(iVar1))
	{
		return false;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	func_111(&iVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
	iVar3 = _0x886171a12f400b89(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar4, iVar1));
		if (is_entity_dead(iVar0))
		{
			if (_get_carrier_as_human(iVar0) != Global_35)
			{
				func_56(iVar2);
				_0x20a4bf0e09bee146(iVar1);
				destroy_itemset(iVar1);
				return true;
			}
		}
		iVar4++;
	}
	func_56(iVar2);
	_0x20a4bf0e09bee146(iVar1);
	destroy_itemset(iVar1);
	return false;
}

int func_31(var uParam0)
{
	func_46(uParam0);
	func_25(uParam0->f_1, uParam0->f_3, 3f, 1);
	return 1;
}

void func_32(var uParam0, int iParam1)
{
	iVar9 = func_112(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443);
	func_113(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!does_entity_exist(iVar9))
	{
		set_bit(&(uParam0->f_72), iParam1);
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

int func_33(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			func_114(uParam0);
			func_110(uParam0);
			break;
		case 1:
			func_114(uParam0);
			if (!func_115(uParam0))
			{
				return 2;
			}
			func_110(uParam0);
			break;
		case 2:
			if (_0x5c16855277819bbf() < uParam0->f_80)
			{
				return 2;
			}
			func_110(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_86(uParam0, uParam0->f_82[iParam1], 1, 1, 0, 1);
	if (is_bit_set(uParam0->f_72, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_116(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_117(uParam0->f_7);
	}
	uParam0->f_82[iParam1]->f_2 = iParam2;
	func_118(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -get_random_float_in_range(0.25f, 1.25f), 0f, &(uParam0->f_82[iParam1]->f_7), 0);
	uParam0->f_82[iParam1]->f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_119(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_82[iParam1]->f_10));
	uParam0->f_82[iParam1]->f_13 = iParam1;
	uParam0->f_82[iParam1]->f_15 = 1;
	uParam0->f_82[iParam1]->f_12 = iParam1;
	uParam0->f_73[iParam1] = iParam1;
	uParam0->f_81++;
	set_bit(&(uParam0->f_71), iParam1);
	func_99(uParam0->f_82[iParam1], 1);
	if (iParam3 > 0)
	{
		uParam0->f_82[iParam1]->f_17 = (get_frame_count() + iParam3);
	}
	return 1;
}

int func_35(int iParam0)
{
	if (func_5() != -1)
	{
		return 1;
	}
	if (!func_57(iParam0, &iVar0))
	{
		return 0;
	}
	if ((*Global_1392915)[iVar0]->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
	return Global_1392915->f_121[iVar0]->f_15;
}

void func_36(int iParam0, int iParam1)
{
	if (func_74(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

void func_37(int iParam0, int iParam1)
{
	if (!func_74(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

void func_38(int iParam0)
{
	if (func_5() != -1)
	{
		return;
	}
	if (!func_57(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_16 == 0)
	{
		Global_1392915->f_121[iVar0]->f_16 = 1;
	}
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_120(uParam0, iVar0);
		iVar0++;
	}
	func_121(uParam0);
}

bool func_40(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&uParam0->f_199[iVar0] != 0 && &uParam0->f_199[iVar0] != 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_41(int iParam0)
{
	if (func_5() != -1)
	{
		return;
	}
	if (!func_57(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_16 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_16 = 0;
}

void func_42(var uParam0)
{
	if (Local_2 < 5)
	{
		if (func_15(uParam0->f_8))
		{
			func_122(&Local_2, 5);
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Local_2.f_12[iVar0] != 0)
		{
			if (!func_123(uParam0, iVar0))
			{
				func_124(Local_2.f_12[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
	switch (Local_2)
	{
		case 0:
			func_122(&Local_2, 1);
			break;
		case 1:
			if (func_125(&Local_2, uParam0))
			{
				func_122(&Local_2, 2);
			}
			break;
		case 2:
			func_126(&Local_2, uParam0);
			break;
		case 3:
			if (func_127(Global_35, uParam0->f_3, 1) < 6f)
			{
				if (is_sphere_visible(uParam0->f_3, 1f))
				{
					Local_2.f_6 = func_128(uParam0, &Local_2, -1);
					if (Local_2.f_6 == -1)
					{
						func_122(&Local_2, 4);
						return;
					}
					func_122(&Local_2, 2);
				}
			}
			break;
		case 4:
			if (func_129(&Local_2, uParam0))
			{
				func_122(&Local_2, 1);
			}
			break;
		case 7:
			func_130(&Local_2, uParam0);
			break;
		case 5:
			func_131(&Local_2, uParam0);
			break;
	}
}

int func_43()
{
	return Global_1899528->f_61;
}

bool func_44(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_132(1, (28 + iVar0));
		func_134(1, uParam0->f_3, uParam0->f_6, func_133(iVar0), &vVar2);
		func_135(1, uParam0->f_6, iVar0, &vVar5);
		func_136(uParam0, (0 + iVar0), iVar1, vVar2, vVar5, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar1 = func_132(1, iVar0);
		func_137(uParam0, (4 + iVar0), iVar1);
		iVar0++;
	}
	func_138();
	func_122(&Local_2, 1);
	return true;
}

void func_45()
{
	func_139();
	func_138();
	func_140(-1);
	func_141(-1);
}

bool func_46(var uParam0)
{
	bVar2 = false;
	if (func_142() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!func_143(uParam0->f_82[iVar0]))
			{
				iVar1 = func_144(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!is_entity_dead(iVar1) && !decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_96(uParam0, uParam0->f_82[iVar0], iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_145(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_143(uParam0->f_82[iVar0]))
		{
			if (func_146(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_96(uParam0, uParam0->f_82[iVar0], iVar1, iVar0, 1, 0, -1, 92))
					{
						func_145(uParam0, iVar0, 0);
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
			if (func_123(uParam0, 4))
			{
				func_28(uParam0->f_2);
			}
			else
			{
				func_6(uParam0->f_2);
			}
		}
		else
		{
			func_28(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_47(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&uParam0->f_199[iVar0] != 0)
		{
			func_147(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_48(var uParam0)
{
}

void func_49(var uParam0)
{
}

void func_50(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0))
		{
			if (_0x3ab6c7b0bb0df4b1(iParam1, uParam0->f_968[iVar0]->f_1))
			{
				func_72(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_51(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (does_entity_exist(uParam1->f_11))
	{
		func_149(uParam0, uParam1, 1);
		if (func_150(uParam0->f_2) == uParam1->f_11)
		{
			func_151(uParam0->f_2, 0);
		}
		_0xbc781d24aa11f179(uParam1->f_11);
		freeze_entity_position(uParam1->f_11, false);
		set_ped_config_flag(uParam1->f_11, 26, false);
		_0x949b2f9ed2917f5d(uParam1->f_11, 0);
		clear_ragdoll_blocking_flags(uParam1->f_11, 319488);
		if (bParam2)
		{
			func_152(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_73[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_71), uParam1->f_12);
	}
	uParam0->f_70 = (uParam0->f_70 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_52(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_86(uParam0, uParam1, 0, 1, 0, 1);
	}
}

void func_53(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
	}
	func_11(uParam0, uParam0->f_28);
}

char* func_54(var uParam0)
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

void func_55(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&uParam0->f_199[iVar0] != 0)
		{
			func_85(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_57(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

int func_58()
{
	return Global_1894899->f_2;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			return 0;
		case 98:
			return 1;
		case 5:
			return 2;
		case 9:
			return 3;
		case 69:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_60(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

void func_61(int iParam0, int iParam1)
{
	iParam0->f_11 = iParam1;
}

void func_62(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 4;
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
	uParam0->f_72 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!is_bit_set(iVar0, iVar2))
		{
			set_bit(&(uParam0->f_72), iVar2);
		}
		iVar2++;
	}
}

void func_63(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_153(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

void func_64(int iParam0)
{
	iParam0->f_7 = 0;
	func_122(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_12[iVar0]->f_6 = iVar0;
		func_124(iParam0->f_12[iVar0], 1, 0, 0);
		iParam0->f_12[iVar0]->f_7 = 0;
		iParam0->f_12[iVar0]->f_9 = 0;
		iVar0++;
	}
}

void func_65(var uParam0)
{
	func_154(uParam0, 0f);
}

int func_66(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_156(iParam0);
}

int func_67(int iParam0, int iParam1)
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

bool func_68(var uParam0)
{
	return func_157(*uParam0, 1);
}

bool func_69(var uParam0)
{
	return func_157(*uParam0, 2);
}

float func_70()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_71(var uParam0, bool bParam1)
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
	func_158(uParam0, 4);
	return 1;
}

void func_72(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (&uParam0->f_968[iParam1] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (uParam0->f_199[iVar0]->f_3 == uParam0->f_968[iParam1]->f_1)
			{
				func_159(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		_delete_anim_scene(uParam0->f_968[iParam1]->f_1);
	}
	func_53(uParam0->f_968[iParam1]);
}

float func_73(int iParam0)
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

bool func_74(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_75(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_82)
	{
		if (bParam2)
		{
			func_51(uParam0, uParam0->f_82[iVar0], 0);
		}
		else
		{
			func_86(uParam0, uParam0->f_82[iVar0], 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_968)
	{
		func_53(uParam0->f_968[iVar0]);
		iVar0++;
	}
	if (bParam1)
	{
		func_55(uParam0);
	}
	else
	{
		func_47(uParam0, 0);
	}
}

bool func_76(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	return (!func_161() || is_bit_set(Global_40.f_7854, iParam0));
}

bool func_77(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_78(int iParam0)
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
		iVar0 = func_156(iParam0);
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

bool func_79()
{
	return Global_1898164->f_163;
}

bool func_80(int iParam0)
{
	iVar0 = func_162(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_163(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

bool func_81()
{
	if (func_5() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_15((*Global_1392915)[iVar0]->f_4))
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

bool func_82(int iParam0, bool bParam1)
{
	if (func_164(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_165(5000))
		{
			return true;
		}
	}
	switch (func_166(0))
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

bool func_83(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_84(int* iParam0)
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

void func_85(var uParam0, int iParam1)
{
	uParam0->f_199[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_199[iParam1]->f_5)) && uParam0->f_199[iParam1]->f_3 != -1)
	{
		func_159(uParam0, iParam1, 0);
	}
	uParam0->f_199[iParam1]->f_23 = 0f;
	uParam0->f_199[iParam1]->f_22 = 0f;
	StringCopy(&(uParam0->f_199[iParam1]->f_5), "", 64);
	uParam0->f_199[iParam1]->f_3 = -1;
	uParam0->f_199[iParam1]->f_14 = 0;
	func_84(&(uParam0->f_199[iParam1]->f_4));
	uParam0->f_199[iParam1]->f_4 = 0;
}

void func_86(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (func_150(uParam0->f_2) == uParam1->f_11)
		{
			func_151(uParam0->f_2, 0);
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
				func_152(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_81 = (uParam0->f_81 - 1);
			func_167(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_73[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_71), uParam1->f_12);
	}
	uParam0->f_70 = (uParam0->f_70 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

int func_87(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_168(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_88(int iParam0, int iParam1)
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

int func_89(var uParam0)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_82)
	{
		if (&uParam0->f_82[iVar2])
		{
			iVar1 = uParam0->f_82[iVar2]->f_18;
			if (iVar1 != -1)
			{
				set_bit(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_90(int iParam0, int iParam1)
{
	iVar0 = func_169(iParam0);
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

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_170(iParam1, iParam2, iParam3);
	_set_ped_body_component(iParam0, iVar0);
	_update_ped_variation(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_92(var uParam0, var uParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_82)
	{
		if (&uParam0->f_82[iVar0])
		{
			(*uParam1)[*iParam2] = uParam0->f_82[iVar0]->f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

bool func_93(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	uVar0 = 3;
	iVar4 = 0;
	if (func_171(iParam0))
	{
		return false;
	}
	func_172(get_entity_model(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = uParam3[iVar7];
		if (!func_173(&uVar0, iVar6))
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
			if (func_173(&uVar0, iVar6))
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
		if (func_173(&uVar0, iVar6))
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

char* func_94(int iParam0)
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

bool func_95(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uVar0 = 3;
	iVar4 = 0;
	func_174(get_entity_model(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_173(&uVar0, iVar6))
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
			if (func_173(&uVar0, iVar6))
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
		if (func_173(&uVar0, iVar6))
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

bool func_96(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
		uParam0->f_73[iParam3] = iParam3;
		set_bit(&(uParam0->f_71), iParam3);
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
		func_175(iParam2);
		func_99(uParam1, 4);
	}
	else
	{
		func_99(uParam1, 3);
	}
	uParam0->f_70++;
	return true;
}

int func_97(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			task_follow_nav_mesh_to_coord(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, 0, 40000f);
			func_176(uParam1);
			break;
		case 1:
			if (func_177(uParam1->f_11, 713668775))
			{
				func_176(uParam1);
			}
			break;
		case 2:
			if (!func_177(uParam1->f_11, 713668775))
			{
				func_52(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_1098)
			{
				func_52(uParam0, uParam1);
				return 2;
			}
			if (func_127(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_171(uParam1->f_11))
			{
				iVar0 = 4;
				if (!is_bit_set(uParam0->f_71, iVar0))
				{
					set_bit(&(uParam0->f_71), iVar0);
					uParam0->f_73[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						func_52(uParam0, uParam1);
						return 2;
					}
					_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
					func_176(uParam1);
				}
				else
				{
					func_52(uParam0, uParam1);
					return 2;
				}
			}
			if (func_178(uParam0, get_entity_coords(uParam1->f_11, true, false), &iVar0))
			{
				set_bit(&(uParam0->f_71), iVar0);
				uParam0->f_73[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
				{
					func_52(uParam0, uParam1);
					return 2;
				}
				_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
				func_176(uParam1);
			}
			else
			{
				func_52(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (is_ped_active_in_scenario(uParam1->f_11, 0))
			{
				func_176(uParam1);
			}
			break;
		case 4:
			if (func_5() == -1 && uParam0->f_1 == 0)
			{
				if (func_107(uParam0, 4))
				{
					func_28(uParam0->f_2);
				}
				else
				{
					func_6(uParam0->f_2);
				}
			}
			func_175(uParam1->f_11);
			func_179(uParam1);
			func_99(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_98(var uParam0, var uParam1)
{
	iVar3 = (0 + uParam1->f_12);
	iVar4 = 0;
	switch (uParam1->f_3)
	{
		case 0:
			Local_2.f_12[uParam1->f_12]->f_8 = 0;
			sVar5 = func_180(iVar3);
			_0x99b2a2e3655deaf1(uParam1->f_11, "DominoSeated");
			if (func_182(uParam0, iVar3, sVar5, func_181(iVar4), 2))
			{
				func_176(uParam1);
			}
			break;
		case 1:
			if (func_183(uParam0, iVar3))
			{
				vVar0 = { func_184(uParam0, uParam1->f_12) };
				func_185(uParam0, iVar3, uParam1, "PLAYER");
				if (func_186(uParam0, iVar3, uParam0->f_3, vVar0))
				{
					func_176(uParam1);
				}
			}
			break;
		case 2:
			if (func_40(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_65(&(uParam0->f_4));
}

int func_100(var uParam0)
{
	if (!func_143(uParam0))
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

int func_101(var uParam0, var uParam1, bool bParam2)
{
	if (!func_187(uParam0, uParam1->f_11))
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
	if (!uParam0->f_1098)
	{
		decor_set_bool(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	_0xbc781d24aa11f179(uParam1->f_11);
	func_188(uParam0, uParam1->f_12, 1);
	func_189(uParam0, uParam1->f_20, 1);
	if (is_ped_ragdoll(uParam1->f_11))
	{
		func_86(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_99(uParam1, 7);
	}
	return 1;
}

int func_102(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_12;
	func_190(uParam1, &Local_2);
	switch (&Local_2.f_12[iVar0])
	{
		case 1:
			func_191(uParam0, uParam1, &Local_2);
			break;
		case 4:
			func_192(uParam0, uParam1, &Local_2);
			break;
		case 5:
			func_193(uParam0, uParam1, &Local_2);
			break;
		case 3:
			func_194(uParam0, uParam1, &Local_2);
			break;
		case 6:
			func_195(uParam0, uParam1, &Local_2);
			break;
		case 7:
			func_196(uParam0, uParam1, &Local_2);
			break;
		case 8:
			func_197(uParam0, uParam1, &Local_2);
			break;
		case 10:
			func_198(uParam0, uParam1, &Local_2);
			break;
		case 9:
			func_199(uParam0, uParam1, &Local_2);
			break;
	}
	return 1;
}

int func_103(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			clear_ped_tasks(uParam1->f_11, 1, 0);
			func_188(uParam0, uParam1->f_12, 0);
			func_200(uParam1->f_11);
			func_176(uParam1);
			break;
		case 1:
			func_52(uParam0, uParam1);
			func_176(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_104(vector3 vParam0, float fParam3, bool bParam4)
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

void func_105(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_201());
	}
}

bool func_106(int iParam0, int iParam1)
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

bool func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_82)
	{
		return false;
	}
	if (&uParam0->f_73[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_82[&uParam0->f_73[iParam1]] && uParam0->f_82[&uParam0->f_73[iParam1]]->f_1 == 5);
}

int func_108(bool bParam0, bool bParam1, bool bParam2)
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

bool func_109()
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

void func_110(var uParam0)
{
	func_202(uParam0, uParam0->f_11 + 1);
}

void func_111(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_201());
	}
}

int func_112(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	iVar3 = create_itemset(true);
	if (!is_itemset_valid(iVar3))
	{
		return 0;
	}
	func_203(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_111(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = _0x886171a12f400b89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar3));
		if (!is_entity_dead(iVar4))
		{
			if (func_106(iParam0, get_entity_model(iVar4)))
			{
				if (get_entity_upright_value(iVar4) > 0.95f)
				{
					func_56(iVar2);
					_0x20a4bf0e09bee146(iVar3);
					destroy_itemset(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_56(iVar2);
	_0x20a4bf0e09bee146(iVar3);
	destroy_itemset(iVar3);
	return 0;
}

int func_113(int iParam0, vector3 vParam1, var uParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	if (!func_205(iParam0, vParam1, uParam4, iParam5, fParam6, iParam7, 0))
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

void func_114(var uParam0)
{
	request_anim_dict("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
	request_anim_dict("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@00");
	_0x2b6529c54d29037a("SCRIPT_MINI_GAME_DOMINOES");
	request_clip_set("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	request_clip_set("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	request_clip_set("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	request_clip_set("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
}

bool func_115(var uParam0)
{
	if (!_0x2c04d89a0fb4e244("SCRIPT_MINI_GAME_DOMINOES"))
	{
		return false;
	}
	if (!has_clip_set_loaded("MINI_GAMES@DOMINOES@GAME@PLAYER_00"))
	{
		return false;
	}
	if (!has_clip_set_loaded("MINI_GAMES@DOMINOES@GAME@PLAYER_01"))
	{
		return false;
	}
	if (!has_clip_set_loaded("MINI_GAMES@DOMINOES@GAME@PLAYER_02"))
	{
		return false;
	}
	if (!has_clip_set_loaded("MINI_GAMES@DOMINOES@GAME@PLAYER_03"))
	{
		return false;
	}
	if (!has_anim_dict_loaded("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES"))
	{
		return false;
	}
	if (!has_anim_dict_loaded("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@00"))
	{
		return false;
	}
	return true;
}

int func_116(int iParam0, int iParam1, int iParam2)
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

int func_117(int iParam0)
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

int func_118(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_205(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { _get_object_offset_from_coords(vVar0, fVar3, vParam6) };
	return 1;
}

int func_119(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_206(iParam0, iParam2, &fVar0))
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

void func_120(var uParam0, int iParam1)
{
	func_134(1, uParam0->f_3, uParam0->f_6, func_133(iParam1), &vVar1);
	func_135(1, uParam0->f_6, iParam1, &vVar4);
	iVar0 = (0 + iParam1);
	func_207(uParam0, iVar0, 369752501, vVar1, vVar4, 0, 0);
}

void func_121(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar1 = (4 + iVar0);
		func_207(uParam0, iVar1, func_208(0, iLocal_1), vVar10, vVar13, (iVar0 / 2), 0);
		if (iVar0 < 10)
		{
			StringCopy(&cVar2, "PLAYER_00_PIECE_0", 64);
		}
		else
		{
			StringCopy(&cVar2, "PLAYER_00_PIECE_", 64);
		}
		StringIntConCat(&cVar2, iVar0, 64);
		StringConCat(&cVar2, "_CLEAR_BOARD", 64);
		func_209("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar2, uParam0->f_3, 0f, 0f, uParam0->f_6, &vVar10, &vVar13, 0f);
		if (does_entity_exist(uParam0->f_199[iVar1]->f_4))
		{
			func_210(uParam0->f_199[iVar1]->f_4, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar2, uParam0->f_3, 0f, 0f, uParam0->f_6, 0f);
		}
		iVar0++;
	}
}

void func_122(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_65(&(iParam0->f_1));
}

bool func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_82)
	{
		return false;
	}
	if (&uParam0->f_73[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_82[&uParam0->f_73[iParam1]]->f_1 != 0;
}

void func_124(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam2;
	func_65(&(uParam0->f_1));
}

bool func_125(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iParam0->f_12[iVar0]->f_7 = 0;
				iParam0->f_12[iVar0]->f_9 = 0;
				iVar0++;
			}
			if (!func_123(uParam1, iParam0->f_5))
			{
				iParam0->f_5 = (iParam0->f_5 + 1 % 4);
				return false;
			}
			if (func_211(uParam1, 5) < 2)
			{
				return false;
			}
			iParam0->f_7 = 0;
			iParam0->f_9++;
			if (iParam0->f_9 > 3)
			{
				iParam0->f_9 = 0;
			}
			switch (iParam0->f_9)
			{
				case 0:
					func_61(iParam0, 47956);
					break;
				case 1:
					func_61(iParam0, 48801);
					break;
				case 2:
					func_61(iParam0, 49424);
					break;
				case 3:
					func_61(iParam0, 49978);
					break;
				default:
					func_61(iParam0, 47956);
					break;
			}
			func_124(iParam0->f_12[iParam0->f_5], 4, 0, 0);
			func_216(iParam0);
			break;
		case 1:
			if (!func_217(iParam0->f_12[iParam0->f_5]))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					iParam0->f_12[iVar0]->f_7 = 1;
					func_124(iParam0->f_12[iVar0], 6, 0, 0);
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					if (!func_217(iParam0->f_12[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (func_211(uParam1, 5) == 4)
			{
				return true;
			}
			func_216(iParam0);
			break;
		case 3:
			func_124(iParam0->f_12[iParam0->f_5], 5, 0, 0);
			func_216(iParam0);
			break;
		case 4:
			if (!func_217(iParam0->f_12[iParam0->f_5]))
			{
				return false;
			}
			iParam0->f_6 = iParam0->f_5;
			return true;
	}
	return false;
}

int func_126(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			Stack.Push(iParam0->f_7);
			Stack.Push(&uVar0);
			Stack.Push(&uVar5);
			Call_Loc(iParam0->f_11);
			if (!StackVal)
			{
				func_122(iParam0, 4);
				return 1;
			}
			func_124(iParam0->f_12[iParam0->f_6], 8, get_random_float_in_range(0f, 2f), 0);
			func_216(iParam0);
			break;
		case 1:
			if (!func_217(iParam0->f_12[iParam0->f_6]))
			{
				return 0;
			}
			if (iParam0->f_12[iParam0->f_6]->f_9 == 0)
			{
				func_122(iParam0, 4);
			}
			else
			{
				func_122(iParam0, 3);
			}
			return 1;
	}
	return 0;
}

float func_127(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_128(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = iParam1->f_6;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam2 = (iParam2 + 1 % 4);
		if (iParam1->f_12[iParam2]->f_7 && func_107(uParam0, iParam2))
		{
			return iParam2;
		}
		iVar0++;
	}
	return -1;
}

bool func_129(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					if (!func_217(iParam0->f_12[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					func_124(iParam0->f_12[iVar0], 7, 0, 0);
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					if (!func_217(iParam0->f_12[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 3:
			if (!func_123(uParam1, iParam0->f_5))
			{
				iParam0->f_5 = (iParam0->f_5 + 1 % 4);
				return false;
			}
			func_124(iParam0->f_12[iParam0->f_5], 3, 0, 0);
			func_216(iParam0);
			break;
		case 4:
			if (!func_217(iParam0->f_12[iParam0->f_5]))
			{
				return false;
			}
			return true;
	}
	return false;
}

int func_130(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			uParam1->f_1092 = 1;
			if (!func_123(uParam1, iParam0->f_5))
			{
				iParam0->f_5 = (iParam0->f_5 + 1 % 4);
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_123(uParam1, iVar0))
				{
					if (!func_217(iParam0->f_12[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 28)
			{
				vVar2 = { uParam1->f_3 + Vector(0.8f, get_random_float_in_range(-0.25f, 0.25f), get_random_float_in_range(-0.25f, 0.25f)) };
				iVar1 = (4 + iVar0);
				func_159(uParam1, iVar1, 0);
				set_entity_coords(uParam1->f_199[iVar1]->f_4, vVar2, true, false, false, true);
				set_entity_rotation(uParam1->f_199[iVar1]->f_4, 0f, 0f, get_random_float_in_range(0f, 360f), 2, true);
				freeze_entity_position(uParam1->f_199[iVar1]->f_4, true);
				set_entity_collision(uParam1->f_199[iVar1]->f_4, false, false);
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 2:
			func_124(iParam0->f_12[iParam0->f_5], 3, 0, 0);
			func_216(iParam0);
			break;
		case 3:
			if (!func_217(iParam0->f_12[iParam0->f_5]))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_131(int iParam0, var uParam1)
{
	func_6(uParam1->f_2);
	switch (iParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_146(uParam1->f_1, uParam1->f_3, uParam1->f_6, iVar0, &iVar2, 1, 0))
				{
					set_ped_config_flag(iVar2, 113, true);
				}
				iVar0++;
			}
			func_218(Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			func_140(1);
			func_219(1);
			func_216(iParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (uParam1->f_82[iVar0]->f_12 != -1)
				{
					func_220(Global_1899750, uParam1->f_82[iVar0]->f_11, iVar0, 0);
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_107(uParam1, iVar0))
				{
					if (!func_217(Local_2.f_12[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			if (func_43() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (uParam1->f_82[iVar0]->f_12 != -1)
					{
						func_220(Global_1899750, uParam1->f_82[iVar0]->f_11, iVar0, 0);
						func_221(uParam1->f_1, uParam1->f_82[iVar0]->f_11, iVar0, 0, 0, uParam1->f_82[iVar0]->f_18, uParam1->f_82[iVar0]->f_19);
					}
					else
					{
						func_221(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					iVar1 = (0 + iVar0);
					if (does_entity_exist(uParam1->f_199[iVar1]->f_4))
					{
						func_222(uParam1->f_1, uParam1->f_199[iVar1]->f_4, iVar0, 0, 0);
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 28)
				{
					iVar1 = (4 + iVar0);
					if (does_entity_exist(uParam1->f_199[iVar1]->f_4))
					{
						func_222(uParam1->f_1, uParam1->f_199[iVar1]->f_4, iVar0 + 4, 0, 0);
					}
					iVar0++;
				}
				func_216(iParam0);
			}
			break;
		case 2:
			func_219(3);
			func_216(iParam0);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_107(uParam1, iVar0))
				{
					if (!func_217(Local_2.f_12[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_107(uParam1, iVar0))
				{
					func_124(Local_2.f_12[iVar0], 7, 0, 0);
				}
				iVar0++;
			}
			func_216(iParam0);
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_107(uParam1, iVar0))
				{
					if (!func_217(Local_2.f_12[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_107(uParam1, Local_2.f_5))
			{
				Local_2.f_5 = (Local_2.f_5 + 1 % 4);
				return;
			}
			func_124(Local_2.f_12[Local_2.f_5], 3, 0, 0);
			func_216(iParam0);
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_107(uParam1, iVar0))
				{
					if (!func_217(Local_2.f_12[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_15(uParam1->f_8))
			{
				func_122(&Local_2, 0);
				return;
			}
			func_216(iParam0);
			break;
		case 6:
			if (!func_15(uParam1->f_8))
			{
				func_122(&Local_2, 0);
				return;
			}
			func_219(4);
			func_216(iParam0);
			break;
		case 7:
			if (func_43() == 5)
			{
				func_75(uParam1, 1, 0);
				func_14(uParam1, 10);
				func_64(iParam0);
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
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

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0.382f, fLocal_0;
		case 1:
			return 0f, -0.382f, fLocal_0;
		case 2:
			return 0.382f, 0f, fLocal_0;
		case 3:
			return -0.382f, 0f, fLocal_0;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_134(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, var uParam8)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	*uParam8 = { _get_object_offset_from_coords(vParam1, fParam4, vParam5) };
	return 1;
}

int func_135(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_206(iParam0, iParam2, &fVar0))
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

void func_136(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, bool bParam9)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		uParam0->f_199[iParam1]->f_4 = iParam2;
	}
	if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		uParam0->f_199[iParam1] = 5;
		uParam0->f_199[iParam1]->f_13 = 0;
		uParam0->f_199[iParam1]->f_1 = get_entity_model(uParam0->f_199[iParam1]->f_4);
		uParam0->f_199[iParam1]->f_16 = { vParam3 };
		uParam0->f_199[iParam1]->f_19 = { vParam6 };
		set_entity_coords(uParam0->f_199[iParam1]->f_4, vParam3, true, false, false, true);
		set_entity_rotation(uParam0->f_199[iParam1]->f_4, vParam6, 2, true);
		if (!decor_exist_on(uParam0->f_199[iParam1]->f_4, "MinigameObject"))
		{
			decor_set_bool(uParam0->f_199[iParam1]->f_4, "MinigameObject", true);
		}
		if (bParam9)
		{
			freeze_entity_position(uParam0->f_199[iParam1]->f_4, true);
			set_entity_collision(uParam0->f_199[iParam1]->f_4, false, false);
		}
	}
}

void func_137(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		uParam0->f_199[iParam1]->f_4 = iParam2;
	}
	if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		uParam0->f_199[iParam1] = 5;
		uParam0->f_199[iParam1]->f_13 = 0;
		uParam0->f_199[iParam1]->f_1 = get_entity_model(uParam0->f_199[iParam1]->f_4);
		uParam0->f_199[iParam1]->f_16 = { get_entity_coords(uParam0->f_199[iParam1]->f_4, true, false) };
		uParam0->f_199[iParam1]->f_19 = { get_entity_rotation(uParam0->f_199[iParam1]->f_4, 2) };
		uParam0->f_199[iParam1]->f_23 = to_float(get_entity_alpha(uParam0->f_199[iParam1]->f_4));
		if (!decor_exist_on(uParam0->f_199[iParam1]->f_4, "MinigameObject"))
		{
			decor_set_bool(uParam0->f_199[iParam1]->f_4, "MinigameObject", true);
		}
	}
}

void func_138()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528->f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_139()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528->f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_140(int iParam0)
{
	Global_1899528->f_61.f_1 = iParam0;
}

void func_141(int iParam0)
{
	Global_1899528->f_61.f_2 = iParam0;
}

int func_142()
{
	return Global_1899528->f_61.f_1;
}

bool func_143(var uParam0)
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

int func_144(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

void func_145(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		set_bit(&(uParam0->f_72), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_72), iParam1);
	}
}

bool func_146(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	fVar8 = (0.25f * 2f);
	if (!func_203(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = create_itemset(true);
	if (!is_itemset_valid(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_111(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = _0x886171a12f400b89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar7, iVar4));
		if (func_223(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !is_ped_a_player(iVar3)))
			{
				func_56(iVar5);
				_0x20a4bf0e09bee146(iVar4);
				destroy_itemset(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	func_56(iVar5);
	_0x20a4bf0e09bee146(iVar4);
	destroy_itemset(iVar4);
	return false;
}

void func_147(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_199[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_199[iParam1]->f_5)) && uParam0->f_199[iParam1]->f_3 != -1)
	{
		func_159(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_224(uParam0, iParam1);
	}
	StringCopy(&(uParam0->f_199[iParam1]->f_5), "", 64);
	uParam0->f_199[iParam1]->f_3 = -1;
	uParam0->f_199[iParam1]->f_23 = 0f;
	if (uParam0->f_199[iParam1]->f_15)
	{
		if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
		{
			_0xc1193521e3b9fadd(uParam0->f_199[iParam1]->f_4, 0);
		}
	}
	uParam0->f_199[iParam1]->f_15 = 0;
	uParam0->f_199[iParam1]->f_14 = 0;
	func_225(&(uParam0->f_199[iParam1]->f_4), 1, 1);
	uParam0->f_199[iParam1]->f_4 = 0;
}

bool func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return &uParam0->f_968[iParam1] >= 4;
}

void func_149(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (is_string_null_or_empty(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && _does_anim_scene_exist(uParam0->f_968[uParam1->f_20]->f_1))
	{
		remove_anim_scene_entity(uParam0->f_968[uParam1->f_20]->f_1, &(uParam1->f_21), uParam1->f_11);
	}
	freeze_entity_position(uParam1->f_11, false);
	clear_bit(&(uParam0->f_968[uParam1->f_20]->f_3), uParam1->f_13);
	if (uParam0->f_968[uParam1->f_20]->f_3 == 0)
	{
		func_158(uParam0->f_968[uParam1->f_20], 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

int func_150(int iParam0)
{
	if (func_5() != -1)
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915->f_121[iVar0]->f_6;
}

void func_151(int iParam0, int iParam1)
{
	if (func_5() != -1)
	{
		return;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915->f_121[iVar0]->f_6 = iParam1;
}

void func_152(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_23[iParam1]->f_1 = iParam2;
	uParam0->f_23[iParam1]->f_2 = { func_226(sParam3) };
}

void func_154(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_70() - fParam1);
	func_227(uParam0, 1);
	func_228(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_155(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_156(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_229(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_157(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_158(var uParam0, int iParam1)
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

void func_159(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (is_string_null_or_empty(&(uParam0->f_199[iParam1]->f_5)))
	{
		return;
	}
	if (uParam0->f_199[iParam1]->f_3 == -1)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		vVar0 = { get_entity_coords(uParam0->f_199[iParam1]->f_4, true, false) };
		vVar3 = { get_entity_rotation(uParam0->f_199[iParam1]->f_4, 2) };
		if (_does_anim_scene_exist(uParam0->f_199[iParam1]->f_3))
		{
			remove_anim_scene_entity(uParam0->f_199[iParam1]->f_3, &(uParam0->f_199[iParam1]->f_5), uParam0->f_199[iParam1]->f_4);
		}
		if (uParam0->f_199[iParam1]->f_15)
		{
			_0xc1193521e3b9fadd(uParam0->f_199[iParam1]->f_4, 0);
			uParam0->f_199[iParam1]->f_15 = 0;
		}
		if (bParam2)
		{
			func_224(uParam0, iParam1);
		}
		else if (!is_entity_attached(uParam0->f_199[iParam1]->f_4))
		{
			freeze_entity_position(uParam0->f_199[iParam1]->f_4, true);
			set_entity_coords(uParam0->f_199[iParam1]->f_4, vVar0, true, false, false, true);
			set_entity_rotation(uParam0->f_199[iParam1]->f_4, vVar3, 2, true);
			set_entity_collision(uParam0->f_199[iParam1]->f_4, false, false);
		}
	}
	uParam0->f_199[iParam1]->f_3 = -1;
	StringCopy(&(uParam0->f_199[iParam1]->f_5), "", 64);
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

int func_162(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

var func_163(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_164(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_165(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_166(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_167(int* iParam0)
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

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_230(iParam1))
		{
			func_231(iParam0, 41788943);
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
			func_232(iParam0, 0, 1);
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
			func_233(iParam0, 0);
			bVar0 = true;
		}
		func_234(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_169(int iParam0)
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

int func_170(int iParam0, int iParam1, int iParam2)
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

bool func_171(int iParam0)
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

int func_172(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
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
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 45);
				*iParam4++;
				func_235(uParam3, 46);
				*iParam4++;
				func_235(uParam3, 47);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				if (iParam2 == 316456870)
				{
					func_235(uParam3, 63);
					*iParam4++;
					func_235(uParam3, 64);
					*iParam4++;
				}
				func_235(uParam3, 75);
				*iParam4++;
				break;
			case -1043092861:
			case -855293722:
			case -216756988:
			case 368759504:
			case 1321911407:
			case 1633413521:
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 45);
				*iParam4++;
				func_235(uParam3, 46);
				*iParam4++;
				func_235(uParam3, 47);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				func_235(uParam3, 56);
				*iParam4++;
				if (iParam2 == -855293722)
				{
					func_235(uParam3, 63);
					*iParam4++;
					func_235(uParam3, 64);
					*iParam4++;
				}
				func_235(uParam3, 66);
				*iParam4++;
				func_235(uParam3, 67);
				*iParam4++;
				func_235(uParam3, 68);
				*iParam4++;
				func_235(uParam3, 71);
				*iParam4++;
				func_235(uParam3, 75);
				*iParam4++;
				break;
			case 68127406:
			case 629329300:
			case 1371088384:
			case 2106064285:
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 41);
				*iParam4++;
				func_235(uParam3, 50);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				break;
			case 912158539:
			case 1263868216:
				func_235(uParam3, 34);
				*iParam4++;
				func_235(uParam3, 58);
				*iParam4++;
				func_235(uParam3, 61);
				*iParam4++;
				func_235(uParam3, 73);
				*iParam4++;
				func_235(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 3);
				*iParam4++;
				func_235(uParam3, 4);
				*iParam4++;
				func_235(uParam3, 5);
				*iParam4++;
				func_235(uParam3, 6);
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
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 18);
				*iParam4++;
				func_235(uParam3, 26);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
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
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 18);
				*iParam4++;
				func_235(uParam3, 26);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
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
				func_235(uParam3, 3);
				*iParam4++;
				func_235(uParam3, 4);
				*iParam4++;
				func_235(uParam3, 5);
				*iParam4++;
				func_235(uParam3, 6);
				*iParam4++;
				func_235(uParam3, 7);
				*iParam4++;
				func_235(uParam3, 8);
				*iParam4++;
				func_235(uParam3, 9);
				*iParam4++;
				func_235(uParam3, 10);
				*iParam4++;
				func_235(uParam3, 11);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 45);
				*iParam4++;
				func_235(uParam3, 46);
				*iParam4++;
				func_235(uParam3, 47);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				func_235(uParam3, 56);
				*iParam4++;
				func_235(uParam3, 63);
				*iParam4++;
				func_235(uParam3, 64);
				*iParam4++;
				func_235(uParam3, 66);
				*iParam4++;
				func_235(uParam3, 67);
				*iParam4++;
				func_235(uParam3, 68);
				*iParam4++;
				func_235(uParam3, 71);
				*iParam4++;
				func_235(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_235(uParam3, 7);
				*iParam4++;
				func_235(uParam3, 8);
				*iParam4++;
				func_235(uParam3, 9);
				*iParam4++;
				func_235(uParam3, 10);
				*iParam4++;
				func_235(uParam3, 11);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 14);
				*iParam4++;
				func_235(uParam3, 17);
				*iParam4++;
				func_235(uParam3, 34);
				*iParam4++;
				func_235(uParam3, 58);
				*iParam4++;
				func_235(uParam3, 73);
				*iParam4++;
				func_235(uParam3, 76);
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
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 3);
				*iParam4++;
				func_235(uParam3, 4);
				*iParam4++;
				func_235(uParam3, 5);
				*iParam4++;
				func_235(uParam3, 6);
				*iParam4++;
				func_235(uParam3, 7);
				*iParam4++;
				func_235(uParam3, 8);
				*iParam4++;
				func_235(uParam3, 9);
				*iParam4++;
				func_235(uParam3, 10);
				*iParam4++;
				func_235(uParam3, 11);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 18);
				*iParam4++;
				func_235(uParam3, 29);
				*iParam4++;
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 45);
				*iParam4++;
				func_235(uParam3, 46);
				*iParam4++;
				func_235(uParam3, 47);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				func_235(uParam3, 56);
				*iParam4++;
				func_235(uParam3, 63);
				*iParam4++;
				func_235(uParam3, 64);
				*iParam4++;
				func_235(uParam3, 66);
				*iParam4++;
				func_235(uParam3, 67);
				*iParam4++;
				func_235(uParam3, 68);
				*iParam4++;
				func_235(uParam3, 71);
				*iParam4++;
				func_235(uParam3, 75);
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
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 18);
				*iParam4++;
				func_235(uParam3, 26);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
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
				func_235(uParam3, 26);
				*iParam4++;
				func_235(uParam3, 28);
				*iParam4++;
				func_235(uParam3, 37);
				*iParam4++;
				func_235(uParam3, 38);
				*iParam4++;
				func_235(uParam3, 41);
				*iParam4++;
				func_235(uParam3, 50);
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
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 7);
				*iParam4++;
				func_235(uParam3, 8);
				*iParam4++;
				func_235(uParam3, 9);
				*iParam4++;
				func_235(uParam3, 10);
				*iParam4++;
				func_235(uParam3, 11);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 15);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				func_235(uParam3, 56);
				*iParam4++;
				func_235(uParam3, 63);
				*iParam4++;
				func_235(uParam3, 64);
				*iParam4++;
				func_235(uParam3, 66);
				*iParam4++;
				func_235(uParam3, 67);
				*iParam4++;
				func_235(uParam3, 68);
				*iParam4++;
				func_235(uParam3, 71);
				*iParam4++;
				func_235(uParam3, 75);
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
				func_235(uParam3, 1);
				*iParam4++;
				func_235(uParam3, 2);
				*iParam4++;
				func_235(uParam3, 3);
				*iParam4++;
				func_235(uParam3, 4);
				*iParam4++;
				func_235(uParam3, 5);
				*iParam4++;
				func_235(uParam3, 6);
				*iParam4++;
				func_235(uParam3, 7);
				*iParam4++;
				func_235(uParam3, 8);
				*iParam4++;
				func_235(uParam3, 9);
				*iParam4++;
				func_235(uParam3, 10);
				*iParam4++;
				func_235(uParam3, 11);
				*iParam4++;
				func_235(uParam3, 12);
				*iParam4++;
				func_235(uParam3, 16);
				*iParam4++;
				func_235(uParam3, 18);
				*iParam4++;
				func_235(uParam3, 29);
				*iParam4++;
				func_235(uParam3, 35);
				*iParam4++;
				func_235(uParam3, 36);
				*iParam4++;
				func_235(uParam3, 39);
				*iParam4++;
				func_235(uParam3, 45);
				*iParam4++;
				func_235(uParam3, 46);
				*iParam4++;
				func_235(uParam3, 47);
				*iParam4++;
				func_235(uParam3, 48);
				*iParam4++;
				func_235(uParam3, 50);
				*iParam4++;
				func_235(uParam3, 51);
				*iParam4++;
				func_235(uParam3, 52);
				*iParam4++;
				func_235(uParam3, 53);
				*iParam4++;
				func_235(uParam3, 56);
				*iParam4++;
				func_235(uParam3, 63);
				*iParam4++;
				func_235(uParam3, 64);
				*iParam4++;
				func_235(uParam3, 66);
				*iParam4++;
				func_235(uParam3, 67);
				*iParam4++;
				func_235(uParam3, 68);
				*iParam4++;
				func_235(uParam3, 71);
				*iParam4++;
				func_235(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case 1839440580:
			case 1934601404:
				func_235(uParam3, 14);
				*iParam4++;
				func_235(uParam3, 17);
				*iParam4++;
				func_235(uParam3, 34);
				*iParam4++;
				func_235(uParam3, 58);
				*iParam4++;
				func_235(uParam3, 73);
				*iParam4++;
				func_235(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_173(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(uParam0, iParam1);
}

int func_174(int iParam0, int iParam1, var uParam2, int iParam3)
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
				func_235(uParam2, 43);
				*iParam3++;
				func_235(uParam2, 44);
				*iParam3++;
				func_235(uParam2, 54);
				*iParam3++;
				func_235(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_235(uParam2, 43);
				*iParam3++;
				func_235(uParam2, 44);
				*iParam3++;
				func_235(uParam2, 54);
				*iParam3++;
				func_235(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -951746023:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				func_235(uParam2, 7);
				*iParam3++;
				func_235(uParam2, 8);
				*iParam3++;
				func_235(uParam2, 9);
				*iParam3++;
				func_235(uParam2, 10);
				*iParam3++;
				func_235(uParam2, 11);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 13);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 35);
				*iParam3++;
				func_235(uParam2, 36);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 55);
				*iParam3++;
				func_235(uParam2, 56);
				*iParam3++;
				func_235(uParam2, 58);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 63);
				*iParam3++;
				func_235(uParam2, 64);
				*iParam3++;
				func_235(uParam2, 65);
				*iParam3++;
				func_235(uParam2, 66);
				*iParam3++;
				func_235(uParam2, 67);
				*iParam3++;
				func_235(uParam2, 68);
				*iParam3++;
				func_235(uParam2, 71);
				*iParam3++;
				func_235(uParam2, 73);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				func_235(uParam2, 82);
				*iParam3++;
				func_235(uParam2, 84);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 28);
				*iParam3++;
				func_235(uParam2, 41);
				*iParam3++;
				break;
			case -2087759666:
			case -1789856687:
			case 1124384604:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				func_235(uParam2, 7);
				*iParam3++;
				func_235(uParam2, 8);
				*iParam3++;
				func_235(uParam2, 9);
				*iParam3++;
				func_235(uParam2, 10);
				*iParam3++;
				func_235(uParam2, 11);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 13);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 35);
				*iParam3++;
				func_235(uParam2, 36);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 55);
				*iParam3++;
				func_235(uParam2, 56);
				*iParam3++;
				func_235(uParam2, 58);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 63);
				*iParam3++;
				func_235(uParam2, 64);
				*iParam3++;
				func_235(uParam2, 65);
				*iParam3++;
				func_235(uParam2, 66);
				*iParam3++;
				func_235(uParam2, 67);
				*iParam3++;
				func_235(uParam2, 68);
				*iParam3++;
				func_235(uParam2, 71);
				*iParam3++;
				func_235(uParam2, 73);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				func_235(uParam2, 82);
				*iParam3++;
				func_235(uParam2, 84);
				*iParam3++;
				break;
			case -1144663425:
				func_235(uParam2, 84);
				*iParam3++;
				break;
			case 1901354405:
				func_235(uParam2, 82);
				*iParam3++;
				break;
			case 1022365451:
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case 1471623370:
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case 1767420034:
				func_235(uParam2, 86);
				*iParam3++;
				break;
			case 1536283262:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 7);
				*iParam3++;
				func_235(uParam2, 8);
				*iParam3++;
				func_235(uParam2, 9);
				*iParam3++;
				func_235(uParam2, 10);
				*iParam3++;
				func_235(uParam2, 11);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 13);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case -1938511850:
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 28);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 41);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				break;
			case -1345652903:
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 28);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				break;
			case -1796561521:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 28);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 63);
				*iParam3++;
				func_235(uParam2, 64);
				*iParam3++;
				break;
			case -1684080969:
				func_235(uParam2, 80);
				*iParam3++;
				break;
			case -956061568:
			case 918972034:
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 35);
				*iParam3++;
				func_235(uParam2, 36);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 55);
				*iParam3++;
				func_235(uParam2, 56);
				*iParam3++;
				func_235(uParam2, 58);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 62);
				*iParam3++;
				func_235(uParam2, 63);
				*iParam3++;
				func_235(uParam2, 64);
				*iParam3++;
				func_235(uParam2, 65);
				*iParam3++;
				func_235(uParam2, 66);
				*iParam3++;
				func_235(uParam2, 67);
				*iParam3++;
				func_235(uParam2, 68);
				*iParam3++;
				func_235(uParam2, 71);
				*iParam3++;
				func_235(uParam2, 73);
				*iParam3++;
				func_235(uParam2, 79);
				*iParam3++;
				break;
			case -989220241:
			case -607723543:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				func_235(uParam2, 7);
				*iParam3++;
				func_235(uParam2, 8);
				*iParam3++;
				func_235(uParam2, 9);
				*iParam3++;
				func_235(uParam2, 10);
				*iParam3++;
				func_235(uParam2, 11);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 13);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 35);
				*iParam3++;
				func_235(uParam2, 36);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case 549598920:
			case 1854820959:
			case 2133848994:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 26);
				*iParam3++;
				func_235(uParam2, 28);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 34);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 39);
				*iParam3++;
				func_235(uParam2, 41);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				break;
			case -439429058:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				func_235(uParam2, 7);
				*iParam3++;
				func_235(uParam2, 8);
				*iParam3++;
				func_235(uParam2, 9);
				*iParam3++;
				func_235(uParam2, 10);
				*iParam3++;
				func_235(uParam2, 11);
				*iParam3++;
				func_235(uParam2, 12);
				*iParam3++;
				func_235(uParam2, 13);
				*iParam3++;
				func_235(uParam2, 14);
				*iParam3++;
				func_235(uParam2, 15);
				*iParam3++;
				func_235(uParam2, 16);
				*iParam3++;
				func_235(uParam2, 17);
				*iParam3++;
				func_235(uParam2, 18);
				*iParam3++;
				func_235(uParam2, 29);
				*iParam3++;
				func_235(uParam2, 30);
				*iParam3++;
				func_235(uParam2, 31);
				*iParam3++;
				func_235(uParam2, 35);
				*iParam3++;
				func_235(uParam2, 36);
				*iParam3++;
				func_235(uParam2, 37);
				*iParam3++;
				func_235(uParam2, 38);
				*iParam3++;
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 55);
				*iParam3++;
				func_235(uParam2, 56);
				*iParam3++;
				func_235(uParam2, 58);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 65);
				*iParam3++;
				func_235(uParam2, 66);
				*iParam3++;
				func_235(uParam2, 67);
				*iParam3++;
				func_235(uParam2, 68);
				*iParam3++;
				func_235(uParam2, 71);
				*iParam3++;
				func_235(uParam2, 73);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case 480011144:
			case 966958492:
				func_235(uParam2, 45);
				*iParam3++;
				func_235(uParam2, 46);
				*iParam3++;
				func_235(uParam2, 47);
				*iParam3++;
				func_235(uParam2, 48);
				*iParam3++;
				func_235(uParam2, 49);
				*iParam3++;
				func_235(uParam2, 50);
				*iParam3++;
				func_235(uParam2, 51);
				*iParam3++;
				func_235(uParam2, 52);
				*iParam3++;
				func_235(uParam2, 53);
				*iParam3++;
				func_235(uParam2, 55);
				*iParam3++;
				func_235(uParam2, 56);
				*iParam3++;
				func_235(uParam2, 58);
				*iParam3++;
				func_235(uParam2, 61);
				*iParam3++;
				func_235(uParam2, 63);
				*iParam3++;
				func_235(uParam2, 64);
				*iParam3++;
				func_235(uParam2, 65);
				*iParam3++;
				func_235(uParam2, 66);
				*iParam3++;
				func_235(uParam2, 67);
				*iParam3++;
				func_235(uParam2, 68);
				*iParam3++;
				func_235(uParam2, 71);
				*iParam3++;
				func_235(uParam2, 73);
				*iParam3++;
				func_235(uParam2, 74);
				*iParam3++;
				func_235(uParam2, 75);
				*iParam3++;
				func_235(uParam2, 76);
				*iParam3++;
				break;
			case -1766535683:
			case -669394275:
				func_235(uParam2, 87);
				*iParam3++;
				func_235(uParam2, 89);
				*iParam3++;
				func_235(uParam2, 90);
				*iParam3++;
				func_235(uParam2, 91);
				*iParam3++;
				break;
			case 964905443:
				func_235(uParam2, 62);
				*iParam3++;
				func_235(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_235(uParam2, 1);
				*iParam3++;
				func_235(uParam2, 2);
				*iParam3++;
				func_235(uParam2, 3);
				*iParam3++;
				func_235(uParam2, 4);
				*iParam3++;
				func_235(uParam2, 5);
				*iParam3++;
				func_235(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_175(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "PedSeatedForMinigame", true);
}

void func_176(var uParam0)
{
	func_236(uParam0, uParam0->f_3 + 1);
}

bool func_177(int iParam0, int iParam1)
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

bool func_178(var uParam0, vector3 vParam1, var uParam4)
{
	fVar2 = -1f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_bit_set(uParam0->f_72, iVar0) && !is_bit_set(uParam0->f_71, iVar0))
		{
			func_203(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_237(vParam1, vVar3);
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

void func_179(var uParam0)
{
	uParam0->f_3 = 100;
}

char* func_180(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@DOMINOES@PREPOSTGAME_POSE_00";
		case 1:
			return "SCRIPT@MINI_GAME@DOMINOES@PREPOSTGAME_POSE_01";
		case 2:
			return "SCRIPT@MINI_GAME@DOMINOES@PREPOSTGAME_POSE_02";
		case 3:
			return "SCRIPT@MINI_GAME@DOMINOES@PREPOSTGAME_POSE_03";
		default:
			break;
	}
	return "";
}

char* func_181(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "PBL_Idle";
		case 1:
			return "PBL_IdleA";
		case 2:
			return "PBL_IdleB";
		case 3:
			return "PBL_IdleC";
		case 4:
			return "PBL_IdleD";
		case 5:
			return "PBL_IdleE";
		case 6:
			return "PBL_Shuffle";
		case 7:
			return "PBL_ClearBoard";
		case 10:
			return "PBL_FlipRack";
		case 9:
			return "PBL_PopulateRack";
		case 8:
			return "PBL_Collect";
		default:
			break;
	}
	return "";
}

bool func_182(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_158(uParam0->f_968[iParam1], 1);
	if (uParam0->f_968[iParam1]->f_1 == -1 || !_does_anim_scene_exist(uParam0->f_968[iParam1]->f_1))
	{
		uParam0->f_968[iParam1]->f_1 = _create_anim_scene(sParam2, iParam4, sParam3, false, true);
		if (!_does_anim_scene_exist(uParam0->f_968[iParam1]->f_1))
		{
			return false;
		}
		if (is_string_null_or_empty(sParam3))
		{
		}
		load_anim_scene(uParam0->f_968[iParam1]->f_1);
	}
	StringCopy(&(uParam0->f_968[iParam1]->f_12), sParam3, 64);
	if (_does_anim_scene_exist(uParam0->f_968[iParam1]->f_1))
	{
		if (is_string_null_or_empty(sParam3))
		{
		}
		StringCopy(&(uParam0->f_968[iParam1]->f_4), sParam2, 64);
		func_158(uParam0->f_968[iParam1], 2);
		return true;
	}
	return false;
}

bool func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return &uParam0->f_968[iParam1] == 4;
}

Vector3 func_184(var uParam0, int iParam1)
{
	vVar0 = { 0f, 0f, (uParam0->f_6 + func_238(iParam1)) };
	if (vVar0.z > 360f)
	{
		vVar0.f_2 = (vVar0.z - 360f);
	}
	if (vVar0.z < -360f)
	{
		vVar0.f_2 = (vVar0.z + 360f);
	}
	return vVar0;
}

int func_185(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (is_entity_dead(uParam2->f_11))
	{
		return 0;
	}
	if (!func_239(uParam0, iParam1, uParam2->f_11) && _0x3ab6c7b0bb0df4b1(uParam2->f_11, -1))
	{
		func_149(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	set_bit(&(uParam0->f_968[uParam2->f_20]->f_3), uParam2->f_13);
	if (_get_anim_scene_ped(uParam0->f_968[iParam1]->f_1, sParam3, false) != uParam2->f_11)
	{
		set_anim_scene_entity(uParam0->f_968[iParam1]->f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_186(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (!_is_anim_scene_started(uParam0->f_968[iParam1]->f_1, false))
	{
		set_anim_scene_origin(uParam0->f_968[iParam1]->f_1, vParam2, vParam5, 2);
		start_anim_scene(uParam0->f_968[iParam1]->f_1);
		uParam0->f_968[iParam1]->f_20 = { uParam0->f_968[iParam1]->f_12 };
		StringCopy(&(uParam0->f_968[iParam1]->f_12), "", 64);
		uParam0->f_968[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (uParam0->f_199[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_199[iVar0]->f_4, 1);
				uParam0->f_199[iVar0]->f_14 = 0;
				uParam0->f_199[iVar0]->f_15 = 1;
			}
			iVar0++;
		}
		func_158(uParam0->f_968[iParam1], 5);
		return true;
	}
	if (!is_string_null_or_empty(&(uParam0->f_968[iParam1]->f_12)))
	{
		if (!_0xdf7b5144e25cd3fe(uParam0->f_968[iParam1]->f_1, &(uParam0->f_968[iParam1]->f_12)))
		{
			return false;
		}
		if (!_0x23e33cb9f4a3f547(uParam0->f_968[iParam1]->f_1, &(uParam0->f_968[iParam1]->f_12)))
		{
			return false;
		}
		if (!is_string_null_or_empty(&(uParam0->f_968[iParam1]->f_20)))
		{
			_0xae6ada8fe7e84acc(uParam0->f_968[iParam1]->f_1, &(uParam0->f_968[iParam1]->f_20));
		}
		_set_anim_scene_playback_list_bool(uParam0->f_968[iParam1]->f_1, &(uParam0->f_968[iParam1]->f_12), true);
		uParam0->f_968[iParam1]->f_20 = { uParam0->f_968[iParam1]->f_12 };
		StringCopy(&(uParam0->f_968[iParam1]->f_12), "", 64);
		uParam0->f_968[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (uParam0->f_199[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_199[iVar0]->f_4, 1);
				uParam0->f_199[iVar0]->f_14 = 0;
			}
			iVar0++;
		}
		func_158(uParam0->f_968[iParam1], 5);
		return true;
	}
	return false;
}

bool func_187(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_82)
	{
		if (uParam0->f_82[iVar0] && uParam0->f_82[iVar0]->f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_188(var uParam0, var uParam1, bool bParam2)
{
	if (Local_2 == 7)
	{
		uParam0->f_1092 = 1;
		uParam0->f_1094 = 0;
		return;
	}
	if (func_240(uParam0, &Local_2) && bParam2)
	{
		uParam0->f_1094 = 1;
	}
}

void func_189(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (uParam0->f_199[iVar0]->f_3 == uParam0->f_968[iParam1]->f_1)
		{
			func_159(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

int func_190(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_12;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = uParam0->f_11;
	if (!func_241(iVar1))
	{
		return 0;
	}
	iParam1->f_12[iVar0]->f_10.f_21 = _0x844ceee428ea35b0(iVar1, "CLIP_PHASE");
	if (get_task_move_network_event(iVar1, "IntroFinished"))
	{
		iParam1->f_12[iVar0]->f_10.f_20 = 1;
	}
	if (get_task_move_network_event(iVar1, "IdleClipFinished"))
	{
		iParam1->f_12[iVar0]->f_10.f_1 = 0;
	}
	if (get_task_move_network_event(iVar1, "MainIdleClipFinished") && iParam1->f_12[iVar0]->f_10.f_19 == 0)
	{
		iParam1->f_12[iVar0]->f_10.f_1 = 1;
		iParam1->f_12[iVar0]->f_10.f_11 = get_random_float_in_range(0f, 1f);
	}
	if (iParam1->f_12[iVar0]->f_10)
	{
		iParam1->f_12[iVar0]->f_10 = 0;
		return 1;
	}
	set_task_move_network_signal_float(iVar1, "X", iParam1->f_12[iVar0]->f_10.f_5);
	set_task_move_network_signal_float(iVar1, "Y", iParam1->f_12[iVar0]->f_10.f_6);
	set_task_move_network_signal_float(iVar1, "ANGLE_OF_PIECE", iParam1->f_12[iVar0]->f_10.f_10);
	set_task_move_network_signal_float(iVar1, "RACK_TILE_INDEX", to_float(iParam1->f_12[iVar0]->f_10.f_22));
	set_task_move_network_signal_float(iVar1, "ANIM_VARIATION", iParam1->f_12[iVar0]->f_10.f_11);
	set_task_move_network_signal_float(iVar1, "CLIP_RATE", iParam1->f_12[iVar0]->f_10.f_12);
	set_task_move_network_signal_bool(iVar1, "CHANGE_IDLE", iParam1->f_12[iVar0]->f_10.f_1);
	if (!func_83(iParam1->f_12[iVar0]->f_10.f_7))
	{
		_0x4662bfe01938d98d(iVar1, "HAND_POS", iParam1->f_12[iVar0]->f_10.f_7);
	}
	return 1;
}

void func_191(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	vVar3 = { 0f, 0f, (uParam0->f_6 + func_242(iVar0)) };
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			func_243(uParam2->f_12[iVar0]);
			if (Local_2.f_12[uParam1->f_12]->f_8 == -1)
			{
				Local_2.f_12[uParam1->f_12]->f_8 = get_random_int_in_range(0, 6);
			}
			break;
		case 1:
			_0x99b2a2e3655deaf1(uParam1->f_11, "DominoSeated");
			iVar2 = (0 + get_random_int_in_range(0, 6));
			sVar6 = func_180(iVar1);
			if (func_182(uParam0, iVar1, sVar6, func_181(iVar2), 2))
			{
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 2:
			if (func_183(uParam0, iVar1))
			{
				func_185(uParam0, iVar1, uParam1, "Player");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar3))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 3:
			if (func_244(uParam0, iVar1) >= 1f)
			{
				iVar7 = get_random_int_in_range(0, 6);
				if (iVar7 == Local_2.f_12[uParam1->f_12]->f_8)
				{
					return;
				}
				Local_2.f_12[uParam1->f_12]->f_8 = iVar7;
				func_245(uParam2->f_12[iVar0], 1);
			}
			break;
	}
}

void func_192(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + uParam1->f_12);
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				sVar8 = func_180(iVar1);
				if (func_182(uParam0, iVar1, sVar8, "PBL_Shuffle", 2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			if (func_183(uParam0, iVar1))
			{
				vVar5 = { 0f, 0f, (uParam0->f_6 + func_238(iVar0)) };
				iVar2 = 0;
				while (iVar2 < 28)
				{
					func_247(uParam0, iVar1, (4 + iVar2), func_246((4 + iVar2)), 0);
					iVar2++;
				}
				func_185(uParam0, iVar1, uParam1, "Player");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar5))
				{
					uParam0->f_1092 = 1;
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_244(uParam0, iVar1) < 1f)
			{
				return;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				vVar5 = { func_184(uParam0, iVar4) };
				iVar2 = 0;
				while (iVar2 < 7)
				{
					iVar3 = (iVar4 * 7 + iVar2) + 4;
					StringCopy(&cVar9, "PIECE_0", 64);
					StringIntConCat(&cVar9, iVar2, 64);
					StringConCat(&cVar9, "_POP_RACK", 64);
					func_159(uParam0, iVar3, 0);
					func_210(uParam0->f_199[iVar3]->f_4, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@00", &cVar9, uParam0->f_3, vVar5, 0f);
					iVar2++;
				}
				iVar4++;
			}
			func_124(uParam2->f_12[iVar0], 1, 0, 0);
			break;
	}
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + uParam1->f_12);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				sVar10 = func_180(iVar1);
				if (func_182(uParam0, iVar1, sVar10, "PBL_Collect", 2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			if (func_183(uParam0, iVar1))
			{
				vVar2 = { 0f, 0f, (uParam0->f_6 + func_242(iVar0)) };
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (!func_107(uParam0, iVar6))
					{
						iVar7 = func_248(iVar6, uParam1->f_12);
						iVar5 = 0;
						while (iVar5 < 7)
						{
							iVar8 = ((4 + iVar6 * 7) + iVar5);
							iVar9 = ((4 + iVar7) + iVar5);
							func_247(uParam0, iVar1, iVar8, func_246(iVar9), 0);
							iVar5++;
						}
					}
					iVar6++;
				}
				func_185(uParam0, iVar1, uParam1, "PLAYER");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_244(uParam0, iVar1) == 1f)
			{
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (uParam0->f_1092 == 0)
			{
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
				return;
			}
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				sVar2 = func_180(iVar1);
				func_249(uParam0, 0);
				func_250(&(uParam2->f_173));
				if (func_182(uParam0, iVar1, sVar2, "PBL_ClearBoard", 2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			if (func_183(uParam0, iVar1))
			{
				vVar3 = { 0f, 0f, (uParam0->f_6 + func_238(iVar0)) };
				func_185(uParam0, iVar1, uParam0->f_82[iVar0], "Player");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar3))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_251(uParam0, iVar1, "ClearBoard"))
			{
				func_252(uParam0, uParam2, uParam0->f_82[iVar0]->f_11);
			}
			if (func_244(uParam0, iVar1) == 1f)
			{
				func_121(uParam0);
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 3:
			func_124(uParam2->f_12[iVar0], 1, 0, 0);
			break;
	}
}

void func_195(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				sVar5 = func_180(iVar1);
				if (func_182(uParam0, iVar1, sVar5, "PBL_PopulateRack", 2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			if (func_183(uParam0, iVar1))
			{
				uParam2->f_12[iVar0]->f_9 = 0;
				vVar2 = { func_184(uParam0, iVar0) };
				iVar6 = 0;
				while (iVar6 < 7)
				{
					StringCopy(&cVar8, func_246((4 + iVar6)), 64);
					iVar7 = (iVar0 * 7 + iVar6);
					func_247(uParam0, iVar1, (4 + iVar7), &cVar8, 0);
					iVar6++;
				}
				func_185(uParam0, iVar1, uParam1, "Player");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			iVar6 = 0;
			while (iVar6 < 7)
			{
				if (has_anim_event_fired(uParam1->f_11, func_253(iVar6)))
				{
					set_bit(&(uParam2->f_12[iVar0]->f_9), iVar6);
				}
				iVar6++;
			}
			if (func_244(uParam0, iVar1) == 1f)
			{
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 3:
			uParam2->f_12[iVar0]->f_10.f_22 = 0;
			iVar6 = 0;
			while (iVar6 < 7)
			{
				set_bit(&(uParam2->f_12[iVar0]->f_9), iVar6);
				iVar6++;
			}
			func_124(uParam2->f_12[iVar0], 1, 0, 0);
			break;
	}
}

void func_196(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	vVar2 = { 0f, 0f, (uParam0->f_6 + func_242(iVar0)) };
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (uParam2->f_12[iVar0]->f_9 == 0)
			{
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
				return;
			}
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				sVar15 = func_180(iVar1);
				if (func_182(uParam0, iVar1, sVar15, "PBL_FlipRack", 2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			if (func_183(uParam0, iVar1))
			{
				iVar5 = 0;
				while (iVar5 < 7)
				{
					if (is_bit_set(uParam2->f_12[iVar0]->f_9, iVar5))
					{
						StringCopy(&cVar7, func_246((4 + iVar5)), 64);
						iVar6 = (iVar0 * 7 + iVar5);
						func_247(uParam0, iVar1, (4 + iVar6), &cVar7, 0);
					}
					iVar5++;
				}
				func_185(uParam0, iVar1, uParam1, "Player");
				if (func_186(uParam0, iVar1, uParam0->f_3, vVar2))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (has_anim_event_fired(uParam1->f_11, -1921404755))
			{
				uParam2->f_12[iVar0]->f_8 = 0;
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
			}
			else if (func_244(uParam0, iVar1) == 1f)
			{
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_197(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar4 = ((4 + uParam2->f_12[iVar0]->f_10.f_22) + iVar0 * 7);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	vVar1 = { uParam0->f_3 + Vector(fLocal_0, 0f, 0f) };
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (uParam0->f_68 > 10f)
			{
				return;
			}
			if (!is_sphere_visible(uParam0->f_3, 2f))
			{
				return;
			}
			uParam2->f_12[iVar0]->f_10.f_13 = 0;
			Stack.Push(uParam2->f_7);
			Stack.Push(&(uParam2->f_12[iVar0]->f_34));
			Stack.Push(&(uParam2->f_12[iVar0]->f_39));
			Call_Loc(uParam2->f_11);
			if (!StackVal)
			{
				func_124(uParam2->f_12[iVar0], 1, 0, 0);
				return;
			}
			iVar7 = (4 + uParam2->f_12[iVar0]->f_39);
			iVar6 = func_254(iVar7, 0);
			request_model(iVar6, false);
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				func_50(uParam0, uParam1->f_11, 0);
				if (is_task_move_network_active(uParam1->f_11))
				{
					func_245(uParam2->f_12[iVar0], 2);
				}
				else
				{
					func_255(uParam1, uParam2, 0, 1);
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 1:
			Stack.Push(uParam2->f_7);
			Stack.Push(&(uParam2->f_12[iVar0]->f_34));
			Stack.Push(&(uParam2->f_12[iVar0]->f_39));
			Call_Loc(uParam2->f_11);
			iVar7 = (4 + uParam2->f_12[iVar0]->f_39);
			iVar6 = func_254(iVar7, 0);
			if (func_256(uParam1->f_11))
			{
				if (func_257(uParam1, "Idle"))
				{
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_256(uParam1->f_11))
			{
				if (func_258(uParam2->f_12[iVar0]->f_10.f_22))
				{
					func_259(uParam1, uParam2, "GET_TILE_RACK_LH");
				}
				else
				{
					func_259(uParam1, uParam2, "GET_TILE_RACK_RH");
				}
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 3:
			if (func_260(uParam1, "Pickup"))
			{
				func_261(uParam0->f_199[iVar4]->f_4, uParam1->f_11, !func_258(uParam2->f_12[iVar0]->f_10.f_22), 0);
				if (does_entity_exist(uParam0->f_199[iVar4]->f_4))
				{
					_play_sound_from_position("COLLECT", get_entity_coords(uParam0->f_199[iVar4]->f_4, true, false), "MGDOM_Sounds", false, 0, true, 0);
				}
			}
			if ((func_257(uParam1, "GET_TILE_RACK_LH_ClipFinished") || func_257(uParam1, "GET_TILE_RACK_RH_ClipFinished")) || func_262(uParam2->f_12[iVar0]))
			{
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 4:
			Stack.Push(uParam2->f_7);
			Stack.Push(&(uParam2->f_12[iVar0]->f_34));
			Stack.Push(&(uParam2->f_12[iVar0]->f_39));
			Call_Loc(uParam2->f_11);
			vVar1 = { func_263(uParam0, &(uParam2->f_12[iVar0]->f_34)) };
			uParam2->f_12[iVar0]->f_10.f_10 = func_264(iVar0, uParam2->f_12[iVar0]->f_34.f_3);
			func_265(uParam1, uParam2, vVar1);
			if (func_258(uParam2->f_12[iVar0]->f_10.f_22))
			{
				func_259(uParam1, uParam2, "LH_MOVE");
			}
			else
			{
				func_259(uParam1, uParam2, "RH_MOVE");
			}
			func_243(uParam2->f_12[iVar0]);
			break;
		case 5:
			bVar5 = func_258(uParam2->f_12[iVar0]->f_10.f_22);
			if (uParam2->f_12[iVar0]->f_10.f_13 == 0 && uParam2->f_12[iVar0]->f_10.f_21 >= 0.75f)
			{
				if (func_266(iVar0, iVar0, uParam2->f_12[iVar0]->f_34.f_3, bVar5))
				{
					func_261(uParam0->f_199[iVar4]->f_4, uParam1->f_11, !bVar5, 0);
					uParam2->f_12[iVar0]->f_10.f_13 = 1;
				}
			}
			if ((func_257(uParam1, "LH_MOVE_ClipFinished") || func_257(uParam1, "RH_MOVE_ClipFinished")) || func_262(uParam2->f_12[iVar0]))
			{
				func_267(uParam0, uParam0->f_199[iVar4]->f_4, uParam2->f_12[iVar0]->f_10.f_7, uParam2->f_12[iVar0]->f_34.f_3);
				if (does_entity_exist(uParam0->f_199[iVar4]->f_4))
				{
					_play_sound_from_position("PLACE", get_entity_coords(uParam0->f_199[iVar4]->f_4, true, false), "MGDOM_Sounds", false, 0, true, 0);
				}
				iVar7 = (4 + uParam2->f_12[iVar0]->f_39);
				iVar6 = func_254(iVar7, 0);
				func_268(uParam0, iVar4, iVar6);
				if (func_258(uParam2->f_12[iVar0]->f_10.f_22))
				{
					func_259(uParam1, uParam2, "LH_MOVE_TO_IDLE");
				}
				else
				{
					func_259(uParam1, uParam2, "RH_MOVE_TO_IDLE");
				}
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 6:
			if ((func_257(uParam1, "LH_MOVE_TO_IDLE_ClipFinished") || func_257(uParam1, "RH_MOVE_TO_IDLE_ClipFinished")) || func_262(uParam2->f_12[iVar0]))
			{
				clear_bit(&(uParam2->f_12[iVar0]->f_9), uParam2->f_12[iVar0]->f_10.f_22);
				uParam2->f_12[iVar0]->f_10.f_22++;
				uParam2->f_7++;
				func_259(uParam1, uParam2, "Idle");
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 7:
			if (func_257(uParam1, "Idle"))
			{
				func_124(uParam2->f_12[iVar0], 2, 0, 0);
			}
			break;
	}
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				func_50(uParam0, uParam1->f_11, 0);
				func_255(uParam1, uParam2, 0, 1);
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 1:
			if (func_256(uParam0->f_82[iVar0]->f_11))
			{
				if (func_257(uParam1, "Idle"))
				{
					func_259(uParam1, uParam2, "Lose");
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_257(uParam1, "Lose_ClipFinished"))
			{
				func_259(uParam1, uParam2, "Idle");
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 3:
			if (func_257(uParam1, "Idle"))
			{
				func_124(uParam2->f_12[iVar0], 2, 0, 0);
			}
			break;
	}
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_12[iVar0]->f_4)
	{
		case 0:
			if (func_18(&(uParam2->f_12[iVar0]->f_1)) > uParam2->f_12[iVar0]->f_5)
			{
				func_50(uParam0, uParam1->f_11, 0);
				func_255(uParam1, uParam2, 0, 1);
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 1:
			if (func_256(uParam0->f_82[iVar0]->f_11))
			{
				if (func_257(uParam1, "Idle"))
				{
					func_259(uParam1, uParam2, "Win");
					func_243(uParam2->f_12[iVar0]);
				}
			}
			break;
		case 2:
			if (func_257(uParam1, "WIN_ClipFinished"))
			{
				func_259(uParam1, uParam2, "Idle");
				func_243(uParam2->f_12[iVar0]);
			}
			break;
		case 3:
			if (func_257(uParam1, "Idle"))
			{
				func_124(uParam2->f_12[iVar0], 2, 0, 0);
			}
			break;
	}
}

void func_200(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_remove(iParam0, "PedSeatedForMinigame");
}

char* func_201()
{
	return "unnamed";
}

void func_202(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_65(&(uParam0->f_12));
}

bool func_203(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	if (!func_269(iParam0, iParam5, &vVar0))
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

bool func_204(int iParam0)
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

bool func_205(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	if (!func_269(iParam0, iParam5, &vVar0))
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
	if (!func_206(iParam0, iParam5, &fVar3))
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

bool func_206(int iParam0, int iParam1, float fParam2)
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

void func_207(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_199[iParam1] = 2;
	uParam0->f_199[iParam1]->f_16 = { vParam3 };
	uParam0->f_199[iParam1]->f_19 = { vParam6 };
	uParam0->f_199[iParam1]->f_1 = iParam2;
	uParam0->f_199[iParam1]->f_13 = iParam10;
	if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		if (get_entity_model(uParam0->f_199[iParam1]->f_4) == iParam2)
		{
			if (!func_270(uParam0->f_199[iParam1]->f_16, get_entity_coords(uParam0->f_199[iParam1]->f_4, true, false)))
			{
				set_entity_coords(uParam0->f_199[iParam1]->f_4, uParam0->f_199[iParam1]->f_16, true, false, false, true);
			}
			set_entity_rotation(uParam0->f_199[iParam1]->f_4, uParam0->f_199[iParam1]->f_19, 2, true);
			uParam0->f_199[iParam1] = 5;
		}
		else
		{
			uParam0->f_199[iParam1] = 4;
		}
		if (uParam0->f_199[iParam1]->f_13)
		{
			set_entity_visible(uParam0->f_199[iParam1]->f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_199[iParam1] = 1;
		uParam0->f_199[iParam1]->f_2 = (get_frame_count() + iParam9);
	}
}

int func_208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 28:
			return 369752501;
		default:
			break;
	}
	switch (iParam1)
	{
		case -1:
			switch (iParam0)
			{
				case 0:
					return -1934115794;
				case 1:
					return 2004521396;
				case 2:
					return 1629611267;
				case 3:
					return 1545591551;
				case 4:
					return 1171009112;
				case 5:
					return 801440330;
				case 6:
					return 438720265;
				case 7:
					return -804985870;
				case 8:
					return 691657413;
				case 9:
					return 2071509723;
				case 10:
					return 1677036501;
				case 11:
					return -1874598799;
				case 12:
					return 242180298;
				case 13:
					return 1124938328;
				case 14:
					return 827002580;
				case 15:
					return 1022043656;
				case 16:
					return 749241731;
				case 17:
					return 1520591222;
				case 18:
					return -776317714;
				case 19:
					return -492112173;
				case 20:
					return -1123243113;
				case 21:
					return -1373237814;
				case 22:
					return -1735894975;
				case 23:
					return 212091003;
				case 24:
					return -18569988;
				case 25:
					return 1928673943;
				case 26:
					return 325188454;
				case 27:
					return 688766176;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1650298060;
				case 1:
					return 1845077008;
				case 2:
					return 1606354843;
				case 3:
					return -845192354;
				case 4:
					return -1151385890;
				case 5:
					return -1487857982;
				case 6:
					return 354251353;
				case 7:
					return -426222586;
				case 8:
					return -173999589;
				case 9:
					return -463612011;
				case 10:
					return -1081700889;
				case 11:
					return -1386288748;
				case 12:
					return -1699167160;
				case 13:
					return 525958562;
				case 14:
					return -1658848979;
				case 15:
					return -1914611024;
				case 16:
					return 2073310742;
				case 17:
					return 1786680299;
				case 18:
					return 2103947699;
				case 19:
					return -613519937;
				case 20:
					return 300243632;
				case 21:
					return 1586966;
				case 22:
					return -1875666030;
				case 23:
					return -367734953;
				case 24:
					return -1949625659;
				case 25:
					return -1866332367;
				case 26:
					return -104015571;
				case 27:
					return -705957257;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -597664228;
				case 1:
					return -358417759;
				case 2:
					return 2027493111;
				case 3:
					return -2037206422;
				case 4:
					return -1432749428;
				case 5:
					return 1880130938;
				case 6:
					return 1192670087;
				case 7:
					return 260259554;
				case 8:
					return 565338944;
				case 9:
					return 2062390709;
				case 10:
					return -1954597160;
				case 11:
					return 1449053336;
				case 12:
					return 1762521590;
				case 13:
					return 130472898;
				case 14:
					return 420773469;
				case 15:
					return -360373953;
				case 16:
					return 1880075350;
				case 17:
					return 1120686544;
				case 18:
					return 1452557947;
				case 19:
					return -1414500174;
				case 20:
					return 1121558278;
				case 21:
					return 136030603;
				case 22:
					return -2034063146;
				case 23:
					return -661992339;
				case 24:
					return -484646511;
				case 25:
					return -2000451214;
				case 26:
					return -161258316;
				case 27:
					return -1283297102;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 961876323;
				case 1:
					return 370330335;
				case 2:
					return 1262630201;
				case 3:
					return 627698057;
				case 4:
					return 1774678595;
				case 5:
					return 1545197288;
				case 6:
					return -2070304785;
				case 7:
					return 643524426;
				case 8:
					return 521099442;
				case 9:
					return -777175577;
				case 10:
					return -1158279047;
				case 11:
					return -666416357;
				case 12:
					return -1970720864;
				case 13:
					return -1873758946;
				case 14:
					return -1455724837;
				case 15:
					return 1995735630;
				case 16:
					return -1917997120;
				case 17:
					return -613495995;
				case 18:
					return -262815733;
				case 19:
					return -441931087;
				case 20:
					return -722597572;
				case 21:
					return -1662510827;
				case 22:
					return -211702888;
				case 23:
					return 745643447;
				case 24:
					return 1308614867;
				case 25:
					return 413362460;
				case 26:
					return 1658420615;
				case 27:
					return 2131173159;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 724299316;
				case 1:
					return 430787383;
				case 2:
					return 106636435;
				case 3:
					return 1915747315;
				case 4:
					return 109585569;
				case 5:
					return 346079442;
				case 6:
					return 722922942;
				case 7:
					return 642537026;
				case 8:
					return 707485192;
				case 9:
					return 417708925;
				case 10:
					return -961800441;
				case 11:
					return 878211682;
				case 12:
					return -514339746;
				case 13:
					return -440924611;
				case 14:
					return 334815926;
				case 15:
					return 1547236157;
				case 16:
					return -92262451;
				case 17:
					return 1018016807;
				case 18:
					return 998469921;
				case 19:
					return -787178427;
				case 20:
					return -550160250;
				case 21:
					return 153947257;
				case 22:
					return 1279976916;
				case 23:
					return 1224073002;
				case 24:
					return 2005122105;
				case 25:
					return 1192806219;
				case 26:
					return 215667408;
				case 27:
					return -992835524;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -260936393;
				case 1:
					return 1877929006;
				case 2:
					return 1520025988;
				case 3:
					return -2021057690;
				case 4:
					return -1240008575;
				case 5:
					return 1502986112;
				case 6:
					return 1114018082;
				case 7:
					return -933595078;
				case 8:
					return 1590142230;
				case 9:
					return -1405403140;
				case 10:
					return -1167401893;
				case 11:
					return 129595127;
				case 12:
					return -1786834300;
				case 13:
					return -2143634101;
				case 14:
					return 1293178623;
				case 15:
					return 1540813956;
				case 16:
					return 697634817;
				case 17:
					return -1181470723;
				case 18:
					return 2017166080;
				case 19:
					return -1909346580;
				case 20:
					return 1544997559;
				case 21:
					return 1247455043;
				case 22:
					return -1115821791;
				case 23:
					return -847279836;
				case 24:
					return -616389462;
				case 25:
					return 1974786094;
				case 26:
					return -1476805445;
				case 27:
					return -1016611348;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -241620807;
				case 1:
					return 2143634703;
				case 2:
					return 1770264717;
				case 3:
					return 510493281;
				case 4:
					return 775102956;
				case 5:
					return -758289634;
				case 6:
					return -1534357861;
				case 7:
					return -1837144637;
				case 8:
					return -2097428804;
				case 9:
					return 1966713656;
				case 10:
					return 1501819853;
				case 11:
					return 1234523120;
				case 12:
					return 992524055;
				case 13:
					return -666661475;
				case 14:
					return 1910751455;
				case 15:
					return -2086312862;
				case 16:
					return -1656875117;
				case 17:
					return -1359201521;
				case 18:
					return -1892870104;
				case 19:
					return -454179928;
				case 20:
					return -693098707;
				case 21:
					return -934737313;
				case 22:
					return 1575190948;
				case 23:
					return -1876269519;
				case 24:
					return -646383411;
				case 25:
					return 1262169183;
				case 26:
					return -1709225430;
				case 27:
					return -1146190748;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return -1934115794;
		case 1:
			return 2004521396;
		case 2:
			return 1629611267;
		case 3:
			return 1545591551;
		case 4:
			return 1171009112;
		case 5:
			return 801440330;
		case 6:
			return 438720265;
		case 7:
			return -804985870;
		case 8:
			return 691657413;
		case 9:
			return 2071509723;
		case 10:
			return 1677036501;
		case 11:
			return -1874598799;
		case 12:
			return 242180298;
		case 13:
			return 1124938328;
		case 14:
			return 827002580;
		case 15:
			return 1022043656;
		case 16:
			return 749241731;
		case 17:
			return 1520591222;
		case 18:
			return -776317714;
		case 19:
			return -492112173;
		case 20:
			return -1123243113;
		case 21:
			return -1373237814;
		case 22:
			return -1735894975;
		case 23:
			return 212091003;
		case 24:
			return -18569988;
		case 25:
			return 1928673943;
		case 26:
			return 325188454;
		case 27:
			return 688766176;
		default:
			break;
	}
	return 0;
}

int func_209(char* sParam0, char* sParam1, vector3 vParam2, vector3 vParam5, float fParam8, var uParam9, float fParam10)
{
	*fParam8 = { get_anim_initial_offset_position(sParam0, sParam1, vParam2, vParam5, fParam10, 2) };
	*uParam9 = { get_anim_initial_offset_rotation(sParam0, sParam1, vParam2, vParam5, fParam10, 2) };
	return 1;
}

void func_210(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vVar0 = { get_anim_initial_offset_position(sParam1, sParam2, vParam3, vParam6, fParam9, 2) };
	vVar3 = { get_anim_initial_offset_rotation(sParam1, sParam2, vParam3, vParam6, fParam9, 2) };
	set_entity_coords(iParam0, vVar0, true, false, true, true);
	set_entity_rotation(iParam0, vVar3, 2, true);
	freeze_entity_position(iParam0, true);
	set_entity_collision(iParam0, true, false);
}

int func_211(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_82)
	{
		if (uParam0->f_82[iVar1] && uParam0->f_82[iVar1]->f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_212(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 28;
	func_271(uParam1);
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = 2;
			uParam1->f_3 = 0;
			*uParam2 = 27;
			break;
		case 1:
			uParam1->f_1 = -5;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 21;
			break;
		case 2:
			uParam1->f_1 = 1;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 6;
			break;
		case 3:
			uParam1->f_1 = -7;
			uParam1->f_1.f_1 = 2;
			uParam1->f_3 = 0;
			*uParam2 = 18;
			break;
		case 4:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = -2;
			uParam1->f_3 = 2;
			*uParam2 = 24;
			break;
		case 5:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = -6;
			uParam1->f_3 = 2;
			*uParam2 = 19;
			break;
		case 6:
			uParam1->f_1 = -11;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 20;
			break;
		case 7:
			uParam1->f_1 = -15;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 26;
			break;
		case 8:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = 6;
			uParam1->f_3 = 0;
			*uParam2 = 12;
			break;
		case 9:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = 10;
			uParam1->f_3 = 2;
			*uParam2 = 9;
			break;
		case 10:
			uParam1->f_1 = 5;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 4;
			break;
		case 11:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = -10;
			uParam1->f_3 = 2;
			*uParam2 = 14;
			break;
		case 12:
			uParam1->f_1 = 9;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 10;
			break;
		case 13:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = 14;
			uParam1->f_3 = 0;
			*uParam2 = 3;
			break;
		case 14:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = -14;
			uParam1->f_3 = 0;
			*uParam2 = 16;
			break;
		case 15:
			uParam1->f_1 = -2;
			uParam1->f_1.f_1 = 16;
			uParam1->f_3 = 1;
			*uParam2 = 0;
			break;
		case 16:
			uParam1->f_1 = -2;
			uParam1->f_1.f_1 = -18;
			uParam1->f_3 = 1;
			*uParam2 = 25;
			break;
		case 17:
			uParam1->f_1 = -1;
			uParam1->f_1.f_1 = 20;
			uParam1->f_3 = 2;
			*uParam2 = 1;
			break;
		case 18:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 17;
			break;
		case 19:
			uParam1->f_1 = -5;
			uParam1->f_1.f_1 = 20;
			uParam1->f_3 = 1;
			*uParam2 = 8;
			break;
		case 20:
			uParam1->f_1 = 2;
			uParam1->f_1.f_1 = -18;
			uParam1->f_3 = 1;
			*uParam2 = 11;
			break;
		case 21:
			uParam1->f_1 = -7;
			uParam1->f_1.f_1 = 21;
			uParam1->f_3 = 0;
			*uParam2 = 13;
			break;
		case 22:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -1;
			uParam1->f_3 = 0;
			*uParam2 = 15;
			break;
		case 23:
			uParam1->f_1 = -11;
			uParam1->f_1.f_1 = 20;
			uParam1->f_3 = 3;
			*uParam2 = 2;
			break;
		case 24:
			uParam1->f_1 = -15;
			uParam1->f_1.f_1 = 20;
			uParam1->f_3 = 1;
			*uParam2 = 5;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_213(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 28;
	func_271(uParam1);
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = -2;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 24;
			break;
		case 1:
			uParam1->f_1 = -6;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 12;
			break;
		case 2:
			uParam1->f_1 = 2;
			uParam1->f_1.f_1 = 2;
			uParam1->f_3 = 0;
			*uParam2 = 22;
			break;
		case 3:
			uParam1->f_1 = -10;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 9;
			break;
		case 4:
			uParam1->f_1 = -14;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 19;
			break;
		case 5:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 15;
			break;
		case 6:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -1;
			uParam1->f_3 = 0;
			*uParam2 = 17;
			break;
		case 7:
			uParam1->f_1 = 4;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 4;
			break;
		case 8:
			uParam1->f_1 = 8;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 1;
			break;
		case 9:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -5;
			uParam1->f_3 = 1;
			*uParam2 = 27;
			break;
		case 10:
			uParam1->f_1 = 12;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 8;
			break;
		case 11:
			uParam1->f_1 = 16;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 14;
			break;
		case 12:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -7;
			uParam1->f_3 = 2;
			*uParam2 = 26;
			break;
		case 13:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 5;
			uParam1->f_3 = 0;
			*uParam2 = 3;
			break;
		case 14:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -11;
			uParam1->f_3 = 1;
			*uParam2 = 25;
			break;
		case 15:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 9;
			uParam1->f_3 = 2;
			*uParam2 = 5;
			break;
		case 16:
			uParam1->f_1 = 2;
			uParam1->f_1.f_1 = -2;
			uParam1->f_3 = 0;
			*uParam2 = 23;
			break;
		case 17:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -13;
			uParam1->f_3 = 2;
			*uParam2 = 20;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_214(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 28;
	func_271(uParam1);
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = -2;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 24;
			break;
		case 1:
			uParam1->f_1 = -6;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 12;
			break;
		case 2:
			uParam1->f_1 = 2;
			uParam1->f_1.f_1 = 2;
			uParam1->f_3 = 0;
			*uParam2 = 22;
			break;
		case 3:
			uParam1->f_1 = -10;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 9;
			break;
		case 4:
			uParam1->f_1 = -14;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 19;
			break;
		case 5:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 15;
			break;
		case 6:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -1;
			uParam1->f_3 = 0;
			*uParam2 = 17;
			break;
		case 7:
			uParam1->f_1 = 4;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 4;
			break;
		case 8:
			uParam1->f_1 = 8;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 1;
			break;
		case 9:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -5;
			uParam1->f_3 = 1;
			*uParam2 = 27;
			break;
		case 10:
			uParam1->f_1 = 12;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 8;
			break;
		case 11:
			uParam1->f_1 = 16;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 14;
			break;
		case 12:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -7;
			uParam1->f_3 = 2;
			*uParam2 = 26;
			break;
		case 13:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 5;
			uParam1->f_3 = 0;
			*uParam2 = 3;
			break;
		case 14:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -11;
			uParam1->f_3 = 1;
			*uParam2 = 25;
			break;
		case 15:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 9;
			uParam1->f_3 = 2;
			*uParam2 = 5;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_215(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 28;
	func_271(uParam1);
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = -2;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 24;
			break;
		case 1:
			uParam1->f_1 = -6;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 12;
			break;
		case 2:
			uParam1->f_1 = 2;
			uParam1->f_1.f_1 = 2;
			uParam1->f_3 = 0;
			*uParam2 = 22;
			break;
		case 3:
			uParam1->f_1 = -10;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 9;
			break;
		case 4:
			uParam1->f_1 = -14;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 19;
			break;
		case 5:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 15;
			break;
		case 6:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -1;
			uParam1->f_3 = 0;
			*uParam2 = 17;
			break;
		case 7:
			uParam1->f_1 = 4;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 1;
			*uParam2 = 4;
			break;
		case 8:
			uParam1->f_1 = 8;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 1;
			break;
		case 9:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -5;
			uParam1->f_3 = 1;
			*uParam2 = 27;
			break;
		case 10:
			uParam1->f_1 = 12;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 8;
			break;
		case 11:
			uParam1->f_1 = 16;
			uParam1->f_1.f_1 = 1;
			uParam1->f_3 = 3;
			*uParam2 = 14;
			break;
		case 12:
			uParam1->f_1 = -18;
			uParam1->f_1.f_1 = -7;
			uParam1->f_3 = 2;
			*uParam2 = 26;
			break;
		case 13:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 5;
			uParam1->f_3 = 0;
			*uParam2 = 3;
			break;
		case 14:
			uParam1->f_1 = -19;
			uParam1->f_1.f_1 = -11;
			uParam1->f_3 = 1;
			*uParam2 = 25;
			break;
		case 15:
			uParam1->f_1 = 18;
			uParam1->f_1.f_1 = 9;
			uParam1->f_3 = 2;
			*uParam2 = 5;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_216(int iParam0)
{
	func_272(iParam0, iParam0->f_4 + 1);
}

bool func_217(var uParam0)
{
	return ((uParam0->f_4 == 100 || *uParam0 == 1) || *uParam0 == 2);
}

void func_218(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

void func_219(int iParam0)
{
	Global_1899528->f_61 = iParam0;
}

int func_220(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_223(int iParam0, int iParam1)
{
	if (func_273(iParam1))
	{
		return false;
	}
	if (func_274(iParam1))
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
		if (func_275(iParam1))
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
		return func_275(iParam1);
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
		return func_275(iParam1);
	}
	return true;
}

void func_224(var uParam0, int iParam1)
{
	set_entity_collision(uParam0->f_199[iParam1]->f_4, true, false);
	if (is_entity_attached(uParam0->f_199[iParam1]->f_4))
	{
		func_276(uParam0->f_199[iParam1]->f_4, 1, 1);
	}
	freeze_entity_position(uParam0->f_199[iParam1]->f_4, false);
	set_entity_dynamic(uParam0->f_199[iParam1]->f_4, true);
	activate_physics(uParam0->f_199[iParam1]->f_4);
	set_entity_has_gravity(uParam0->f_199[iParam1]->f_4, true);
}

void func_225(int* iParam0, bool bParam1, bool bParam2)
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

struct<8> func_226(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_229(int iParam0)
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

bool func_230(int iParam0)
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

void func_231(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_277(iParam0, iParam1))
		{
			if (func_278(iParam0, iParam1))
			{
				if (func_279(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_280(iParam0);
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

void func_232(int iParam0, int iParam1, bool bParam2)
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

void func_233(int iParam0, bool bParam1)
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

void func_234(int iParam0, int iParam1)
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

void func_235(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(uParam0, iParam1);
}

void func_236(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_65(&(uParam0->f_4));
}

float func_237(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

float func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 180f;
		case 2:
			return 270f;
		case 3:
			return 90f;
		default:
			break;
	}
	return 0f;
}

bool func_239(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_968[iParam1] > 4)
	{
		if (is_entity_dead(iParam2))
		{
			return false;
		}
		return _0x3ab6c7b0bb0df4b1(iParam2, uParam0->f_968[iParam1]->f_1);
	}
	return false;
}

bool func_240(var uParam0, int iParam1)
{
	if (!uParam0->f_1092)
	{
		return false;
	}
	return (*iParam1 >= 1 && *iParam1 <= 4);
}

bool func_241(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	else if (is_ped_injured(iParam0))
	{
		return false;
	}
	else if (!is_task_move_network_active(iParam0))
	{
		return false;
	}
	return true;
}

float func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 180f;
		case 2:
			return 270f;
		case 3:
			return 90f;
		default:
			break;
	}
	return 0f;
}

void func_243(var uParam0)
{
	func_245(uParam0, uParam0->f_4 + 1);
}

float func_244(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0f;
	}
	if (&uParam0->f_968[iParam1] == 5)
	{
		return uParam0->f_968[iParam1]->f_2;
	}
	if (&uParam0->f_968[iParam1] == 6)
	{
		return 1f;
	}
	return 0f;
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
	func_65(&(uParam0->f_1));
}

char* func_246(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Rack_01";
		case 1:
			return "Rack_02";
		case 2:
			return "Rack_03";
		case 3:
			return "Rack_04";
		case 4:
			return "Domino00";
		case 5:
			return "Domino01";
		case 6:
			return "Domino02";
		case 7:
			return "Domino03";
		case 8:
			return "Domino04";
		case 9:
			return "Domino05";
		case 10:
			return "Domino06";
		case 11:
			return "Domino07";
		case 12:
			return "Domino08";
		case 13:
			return "Domino09";
		case 14:
			return "Domino10";
		case 15:
			return "Domino11";
		case 16:
			return "Domino12";
		case 17:
			return "Domino13";
		case 18:
			return "Domino14";
		case 19:
			return "Domino15";
		case 20:
			return "Domino16";
		case 21:
			return "Domino17";
		case 22:
			return "Domino18";
		case 23:
			return "Domino19";
		case 24:
			return "Domino20";
		case 25:
			return "Domino21";
		case 26:
			return "Domino22";
		case 27:
			return "Domino23";
		case 28:
			return "Domino24";
		case 29:
			return "Domino25";
		case 30:
			return "Domino26";
		case 31:
			return "Domino27";
		default:
			break;
	}
	return "";
}

void func_247(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if (&uParam0->f_968[iParam1] < 4)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_199[iParam2]->f_4))
	{
		return;
	}
	if (uParam0->f_199[iParam2]->f_3 != -1 && uParam0->f_199[iParam2]->f_3 != uParam0->f_968[iParam1]->f_1)
	{
		func_159(uParam0, iParam2, 0);
	}
	uParam0->f_199[iParam2]->f_3 = uParam0->f_968[iParam1]->f_1;
	StringCopy(&(uParam0->f_199[iParam2]->f_5), sParam3, 64);
	set_entity_collision(uParam0->f_199[iParam2]->f_4, false, false);
	if (!is_entity_attached(uParam0->f_199[iParam2]->f_4))
	{
		freeze_entity_position(uParam0->f_199[iParam2]->f_4, true);
	}
	if (bParam4)
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_968[iParam1]->f_1, sParam3, &Var0, false, 0, 2))
		{
			set_entity_coords(uParam0->f_199[iParam2]->f_4, Var0, true, false, false, true);
			set_entity_rotation(uParam0->f_199[iParam2]->f_4, Var0.f_3, 2, true);
		}
	}
	uParam0->f_199[iParam2]->f_14 = 1;
	set_anim_scene_entity(uParam0->f_968[iParam1]->f_1, sParam3, uParam0->f_199[iParam2]->f_4, 0);
	set_entity_visible(uParam0->f_199[iParam2]->f_4, true);
}

int func_248(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 7;
			case 2:
				return 14;
			case 3:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			case 0:
				return 7;
			case 3:
				return 14;
			case 2:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 2)
	{
		switch (iParam0)
		{
			case 2:
				return 0;
			case 3:
				return 7;
			case 1:
				return 14;
			case 0:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 3:
				return 0;
			case 2:
				return 7;
			case 0:
				return 14;
			case 1:
				return 21;
			default:
				break;
		}
	}
	return 0;
}

void func_249(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_159(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

void func_250(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_8)
	{
		uParam0->f_8[iVar0] = -1;
		iVar0++;
	}
}

bool func_251(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (&uParam0->f_968[iParam1] == 5)
	{
		return _0x8d81e7824b7753f7(uParam0->f_968[iParam1]->f_1, sParam2, 1);
	}
	return false;
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 41308;
	iVar1 = 16732;
	uParam1->f_173.f_41 = iParam2;
	vVar2 = { get_ped_bone_coords(iParam2, iVar0, 0f, 0f, 0f) };
	vVar2.f_2 = (uParam0->f_3.f_2 + fLocal_0);
	vVar5 = { get_ped_bone_coords(iParam2, iVar1, 0f, 0f, 0f) };
	vVar5.f_2 = (uParam0->f_3.f_2 + fLocal_0);
	iVar18 = 0;
	while (iVar18 < 28)
	{
		iVar17 = (4 + iVar18);
		if (func_281(uParam0->f_199[iVar17]->f_4, iVar18, &(uParam1->f_173), vVar2, vVar5))
		{
			iVar19 = func_282(uParam0->f_199[iVar17]->f_4, iVar18, &(uParam1->f_173), uParam0->f_3, 0f, 0f, uParam0->f_6);
			if (func_283())
			{
				_play_sound_from_position("TILE_SLIDE_SHORT", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
			else
			{
				_play_sound_from_position("TILE_SLIDE_LONG", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
		}
		iVar19 = &uParam1->f_173.f_8[iVar18];
		if (iVar19 != -1)
		{
			if (!is_bit_set(uParam1->f_173.f_5, iVar19))
			{
				func_284(iVar19, uParam0->f_3, 0f, 0f, uParam0->f_6, &vVar8, &vVar11, 0);
				vVar14 = { func_285(get_entity_coords(uParam0->f_199[iVar17]->f_4, true, false), vVar8, uParam1->f_173.f_37) };
				if (!func_286(vVar14, vVar8, 0.0125f, 0))
				{
					set_entity_coords(uParam0->f_199[iVar17]->f_4, vVar14, true, false, false, true);
					set_entity_rotation(uParam0->f_199[iVar17]->f_4, vVar11, 2, true);
				}
				else
				{
					set_bit(&(uParam1->f_173.f_5), iVar19);
					set_entity_coords(uParam0->f_199[iVar17]->f_4, vVar8, true, false, false, true);
					set_entity_rotation(uParam0->f_199[iVar17]->f_4, vVar11, 2, true);
					_play_sound_from_position("TILE_SLIDE_STOP", vVar8, "MGDOM_Sounds", false, 0, true, 0);
				}
			}
		}
		iVar18++;
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1733902500;
		case 1:
			return 2018632345;
		case 2:
			return 1780106794;
		case 3:
			return 1549544110;
		case 4:
			return 1324191697;
		case 5:
			return 1121613735;
		case 6:
			return 826594428;
		default:
			break;
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 369752501;
		case 4:
			return func_208(0, iLocal_1);
		case 5:
			return func_208(1, iLocal_1);
		case 6:
			return func_208(2, iLocal_1);
		case 7:
			return func_208(3, iLocal_1);
		case 8:
			return func_208(4, iLocal_1);
		case 9:
			return func_208(5, iLocal_1);
		case 10:
			return func_208(6, iLocal_1);
		case 11:
			return func_208(7, iLocal_1);
		case 12:
			return func_208(8, iLocal_1);
		case 13:
			return func_208(9, iLocal_1);
		case 14:
			return func_208(10, iLocal_1);
		case 15:
			return func_208(11, iLocal_1);
		case 16:
			return func_208(12, iLocal_1);
		case 17:
			return func_208(13, iLocal_1);
		case 18:
			return func_208(14, iLocal_1);
		case 19:
			return func_208(15, iLocal_1);
		case 20:
			return func_208(16, iLocal_1);
		case 21:
			return func_208(17, iLocal_1);
		case 22:
			return func_208(18, iLocal_1);
		case 23:
			return func_208(19, iLocal_1);
		case 24:
			return func_208(20, iLocal_1);
		case 25:
			return func_208(21, iLocal_1);
		case 26:
			return func_208(22, iLocal_1);
		case 27:
			return func_208(23, iLocal_1);
		case 28:
			return func_208(24, iLocal_1);
		case 29:
			return func_208(25, iLocal_1);
		case 30:
			return func_208(26, iLocal_1);
		case 31:
			return func_208(27, iLocal_1);
		default:
			break;
	}
	return 0;
}

int func_255(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	iVar0 = uParam0->f_12;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1.f_6 = -1082130432;
	Var1.f_9 = -1082130432;
	iVar35 = uParam0->f_11;
	switch (iVar0)
	{
		case 0:
			iVar36 = -1234506246;
			break;
		case 1:
			iVar36 = -677236632;
			break;
		case 2:
			iVar36 = -908487461;
			break;
		case 3:
			iVar36 = -619759802;
			break;
		default:
			iVar36 = -1234506246;
			break;
	}
	Var1 = iVar36;
	Var1.f_1 = -455129387;
	Var1.f_4 = "ANGLE_OF_PIECE";
	Var1.f_5 = 0f;
	Var1.f_32 = "CURRENT_CLIP";
	Var1.f_33 = "CLIP_PHASE";
	if (!is_string_null_or_empty(sParam2))
	{
		Var1.f_29 = sParam2;
	}
	else
	{
		Var1.f_29 = "IdleRequest";
	}
	if (is_ped_active_in_scenario(iVar35, 0) || _0x3ab6c7b0bb0df4b1(iVar35, -1))
	{
		_0xbc781d24aa11f179(iVar35);
		_0xf1c03a5352243a30(iVar35);
		clear_ped_tasks(iVar35, 1, 0);
	}
	set_ped_can_leg_ik(iVar35, false);
	task_move_network_by_name_with_init_params(iVar35, "SCRIPT_MINI_GAME_DOMINOES", &Var1, 0.125f, 0, 0, 128);
	_0x99b2a2e3655deaf1(iVar35, "DominoSeated");
	uParam1->f_12[iVar0]->f_10.f_11 = get_random_float_in_range(0f, 1f);
	uParam1->f_12[iVar0]->f_10.f_20 = 0;
	if (bParam3)
	{
		if (!is_entity_dead(iVar35))
		{
			_0x2208438012482a1a(iVar35, false, false);
		}
	}
	return 1;
}

bool func_256(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	else if (!is_task_move_network_active(iParam0))
	{
		return false;
	}
	if (_0xcacc2f9d994504b7(iParam0) != -672963996)
	{
		return false;
	}
	return is_task_move_network_ready_for_transition(iParam0);
}

bool func_257(var uParam0, char* sParam1)
{
	if (uParam0->f_12 == -1)
	{
		return false;
	}
	if (is_entity_dead(uParam0->f_11))
	{
		return false;
	}
	else if (is_ped_injured(uParam0->f_11))
	{
		return false;
	}
	else if (!is_task_move_network_active(uParam0->f_11))
	{
		return false;
	}
	return get_task_move_network_event(uParam0->f_11, sParam1);
}

bool func_258(int iParam0)
{
	return (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 5) || iParam0 == 6) || iParam0 == 10) || iParam0 == 11);
}

int func_259(var uParam0, var uParam1, char* sParam2)
{
	iVar0 = uParam0->f_12;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!func_241(uParam0->f_11))
	{
		return 0;
	}
	if (!func_256(uParam0->f_11))
	{
		return 0;
	}
	request_task_move_network_state_transition(uParam0->f_11, sParam2);
	func_65(&(uParam1->f_12[iVar0]->f_10.f_14));
	return 1;
}

bool func_260(var uParam0, char* sParam1)
{
	if (is_entity_dead(uParam0->f_11))
	{
		return false;
	}
	return has_anim_event_fired(uParam0->f_11, get_hash_key(sParam1));
}

int func_261(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	fVar0 = 0f;
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_0x0b7cb1300cbfe19c(iParam0, 1))
	{
		stop_anim_playback(iParam0, 0, false);
	}
	freeze_entity_position(iParam0, false);
	func_276(iParam0, 1, 1);
	if (bParam3)
	{
		fVar0 = 180f;
	}
	if (bParam2 == 1)
	{
		attach_entity_to_entity(iParam0, iParam1, get_ped_bone_index(iParam1, 7966), 0f, 0f, 0f, 0f, 0f, (0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	else
	{
		attach_entity_to_entity(iParam0, iParam1, get_ped_bone_index(iParam1, 37709), 0f, 0f, 0f, 0f, 0f, (0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	return 1;
}

bool func_262(var uParam0)
{
	return uParam0->f_10.f_21 >= 1f;
}

Vector3 func_263(var uParam0, var uParam1)
{
	Var0 = { uParam1->f_1 };
	if (func_287(uParam1->f_3))
	{
		Var0++;
		Var0.f_1 = (Var0.f_1 - 2);
	}
	else
	{
		Var0 += 2;
		Var0.f_1 = (Var0.f_1 - 1);
	}
	return func_288(uParam0, Var0);
}

float func_264(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (iParam1 == 3 || iParam1 == 1)
			{
				return 0f;
			}
			return 1f;
		default:
			break;
	}
	if (iParam1 == 3 || iParam1 == 1)
	{
		return 1f;
	}
	return 0f;
}

void func_265(var uParam0, var uParam1, vector3 vParam2)
{
	if (uParam0->f_12 == -1)
	{
		return;
	}
	vVar0 = { -0.325f, (0.66f - 0.325f), fLocal_0 };
	vVar3 = { get_offset_from_entity_given_world_coords(uParam0->f_11, vParam2) };
	vVar6 = { vVar0 - vVar3 };
	uParam1->f_12[uParam0->f_12]->f_10.f_5 = ((vVar6.x / (0.325f * 2f)) * -1f);
	uParam1->f_12[uParam0->f_12]->f_10.f_6 = ((vVar6.y / (0.325f * 2f)) * -1f);
	uParam1->f_12[uParam0->f_12]->f_10.f_7 = { vParam2 };
}

bool func_266(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_289(iParam0, iParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (bParam3 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 1 || iVar0 == 0)
				{
					return false;
				}
				return true;
			}
			break;
		case 2:
		case 3:
			if (bParam3 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 3 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			break;
	}
	return false;
}

int func_267(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	func_276(iParam1, 1, 1);
	if (_0x0b7cb1300cbfe19c(iParam1, 1))
	{
		stop_anim_playback(iParam1, 0, false);
	}
	vParam2.f_2 = (uParam0->f_3.f_2 + (fLocal_0 + (0.01f / 2f)));
	set_entity_coords(iParam1, vParam2, true, false, false, true);
	vVar0 = { 0f, 0f, (uParam0->f_6 + IntToFloat(func_290(iParam5))) };
	set_entity_rotation(iParam1, vVar0, 2, true);
	freeze_entity_position(iParam1, true);
	return 1;
}

void func_268(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_199[iParam1] = 4;
	if (does_entity_exist(uParam0->f_199[iParam1]->f_4))
	{
		uParam0->f_199[iParam1]->f_16 = { get_entity_coords(uParam0->f_199[iParam1]->f_4, true, false) };
		uParam0->f_199[iParam1]->f_19 = { get_entity_rotation(uParam0->f_199[iParam1]->f_4, 2) };
	}
	uParam0->f_199[iParam1]->f_1 = iParam2;
}

bool func_269(int iParam0, int iParam1, var uParam2)
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

bool func_270(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_271(var uParam0)
{
	uParam0->f_3 = -1;
	uParam0->f_1 = 0;
	uParam0->f_1.f_1 = 0;
}

void func_272(int iParam0, var uParam1)
{
	iParam0->f_4 = uParam1;
	func_65(&(iParam0->f_1));
}

bool func_273(int iParam0)
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

bool func_274(int iParam0)
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

bool func_275(int iParam0)
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
	fVar13 = func_291(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_291(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

void func_276(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

bool func_277(int iParam0, int iParam1)
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

bool func_278(int iParam0, int iParam1)
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

bool func_279(int iParam0, int iParam1)
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
	if (!func_277(iParam0, iVar0))
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

void func_280(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_281(int iParam0, int iParam1, int* iParam2, vector3 vParam3, vector3 vParam6)
{
	fVar0 = 1E+10f;
	fVar1 = 1E+10f;
	fVar2 = (iParam2->f_7 + iParam2->f_6);
	vVar3 = { get_entity_coords(iParam0, true, false) };
	if (is_bit_set(*iParam2, iParam1))
	{
		return false;
	}
	fVar0 = vdist(vVar3, vParam3);
	fVar1 = vdist(vVar3, vParam6);
	if (fVar0 < fVar1)
	{
		if (fVar0 <= fVar2)
		{
			set_bit(&(iParam2->f_1), iParam1);
			set_bit(iParam2, iParam1);
			return true;
		}
	}
	if (fVar1 <= fVar0)
	{
		if (fVar1 <= fVar2)
		{
			set_bit(&(iParam2->f_2), iParam1);
			set_bit(iParam2, iParam1);
			return true;
		}
	}
	return false;
}

int func_282(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6)
{
	uParam2->f_38 = { vParam3 };
	if (is_bit_set(uParam2->f_4, iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_292(iVar0, vParam3, vParam6, vVar2[iVar0], 0);
		iVar0++;
	}
	fVar88 = -1f;
	vVar89 = { get_entity_coords(iParam0, true, false) };
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!is_bit_set(uParam2->f_3, iVar0))
		{
			fVar87 = vdist(*vVar2[iVar0], vVar89);
			if (fVar87 < fVar88 || fVar88 == -1f)
			{
				fVar88 = fVar87;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	set_bit(&(uParam2->f_3), iVar1);
	set_bit(&(uParam2->f_4), iParam1);
	uParam2->f_8[iParam1] = iVar1;
	return iVar1;
}

bool func_283()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_284(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, var uParam8, float fParam9)
{
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_0", 64);
	}
	else
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_", 64);
	}
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_CLEAR_BOARD", 64);
	*iParam7 = { get_anim_initial_offset_position("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) };
	*uParam8 = { get_anim_initial_offset_rotation("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) };
}

Vector3 func_285(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_286(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_287(int iParam0)
{
	return (iParam0 == 0 || iParam0 == 2);
}

Vector3 func_288(var uParam0, struct<2> Param1)
{
	vVar0 = { (to_float(Param1) * 0.013125f), (to_float(Param1.f_1) * 0.013125f), 0f };
	vVar0.f_2 = (fLocal_0 + (0.01f / 2f));
	return _get_object_offset_from_coords(uParam0->f_3, uParam0->f_6, vVar0);
}

int func_289(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 0:
				return 2;
			case 2:
				return 0;
			case 1:
				return 3;
			case 3:
				return 1;
			default:
				break;
		}
	}
	if (iParam0 == 1)
	{
		return iParam1;
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 3;
			case 1:
				return 2;
			case 3:
				return 0;
			default:
				break;
		}
	}
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 2:
				return 1;
			case 1:
				return 0;
			case 3:
				return 2;
			default:
				break;
		}
	}
	return -1;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -90;
		case 2:
			return 180;
		case 3:
			return 90;
		default:
			break;
	}
	return 0;
}

float func_291(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_292(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_0", 64);
	}
	else
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_", 64);
	}
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_CLEAR_BOARD", 64);
	*uParam7 = { get_anim_initial_offset_position("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam8, 2) };
}

