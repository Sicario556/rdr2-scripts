void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1;
	iLocal_31 = 10;
	iLocal_34 = 737910671;
	uScriptParam_0 = uScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1(1);
		terminate_this_thread();
	}
	while ((((!func_2(player_id(), 0, 0, 1) && func_3()) && !func_4()) && !func_5(13)) && func_6())
	{
		func_7();
		wait(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	bLocal_32 = false;
	bLocal_33 = false;
	iLocal_30 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_43)
	{
		if (func_8(&(iLocal_43[iVar0]), 0))
		{
			task_follow_nav_mesh_to_coord(&(iLocal_43[iVar0]), -1728.259f, -2578.3f, 64.1206f, 1.75f, 20000, 0.25f, 4, 40000f);
			if (bParam0)
			{
				func_9(iLocal_43[iVar0], 1, 1, 1);
				func_9(iLocal_51[iVar0], 1, 1, 1);
			}
			else
			{
				if ((func_10(Global_35, &(iLocal_43[iVar0]), 1, 1) > 20f && (!is_entity_on_screen(&(iLocal_43[iVar0])) || is_entity_occluded(&(iLocal_43[iVar0])))) || is_screen_faded_out())
				{
					func_11(iLocal_43[iVar0]);
				}
				else
				{
					func_9(iLocal_43[iVar0], 1, 1, 1);
				}
				if ((func_10(Global_35, &(iLocal_51[iVar0]), 1, 1) > 20f && (!is_entity_on_screen(&(iLocal_51[iVar0])) || is_entity_occluded(&(iLocal_51[iVar0])))) || is_screen_faded_out())
				{
					func_11(iLocal_51[iVar0]);
				}
				else
				{
					func_9(iLocal_51[iVar0], 1, 1, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_12(bParam1, bParam2, bParam3);
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

bool func_3()
{
	if (func_14(func_13(), 1))
	{
		return true;
	}
	if (func_16(func_15(), 1))
	{
		return true;
	}
	if (func_18(func_17()))
	{
		return true;
	}
	if (does_blip_exist(Global_1934266->f_151))
	{
		if (func_19())
		{
			return true;
		}
	}
	return false;
}

bool func_4()
{
	if (func_20() == -1)
	{
		if (func_21() || func_22())
		{
			return true;
		}
	}
	else if (func_23(1, 255))
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_24((*Global_1835011)[iParam0]->f_1);
}

bool func_6()
{
	if (Global_1934266->f_56)
	{
		return false;
	}
	return true;
}

void func_7()
{
	bVar0 = func_25(Global_35, iLocal_39, 1, 0);
	if (bVar0)
	{
		fLocal_27 = 250f;
		fLocal_28 = 150f;
		if (iLocal_14 > 2 && iLocal_14 != 0)
		{
			iLocal_14 = 0;
		}
	}
	else
	{
		fLocal_27 = 120f;
		fLocal_28 = 110f;
		if (iLocal_14 == 0)
		{
			iLocal_14 = 3;
		}
	}
	switch (iLocal_14)
	{
		case 1:
			func_26(&uLocal_40);
			iLocal_35[0] = -1250098797;
			iLocal_35[1] = -1180427609;
			iLocal_35[2] = -1924405794;
			iLocal_29 = get_random_int_in_range(4, 7);
			_0xed9582b3da8f02b4(14);
			if (!func_27(120))
			{
				func_28(120, 0);
			}
			iLocal_14 = 2;
			break;
		case 2:
			request_model(iLocal_34, false);
			request_model(&(iLocal_35[0]), false);
			request_model(&(iLocal_35[1]), false);
			request_model(&(iLocal_35[2]), false);
			if (((((has_model_loaded(iLocal_34) && has_model_loaded(&(iLocal_35[0]))) && has_model_loaded(&(iLocal_35[1]))) && has_model_loaded(&(iLocal_35[2]))) && _0x5e420ff293ee5472()) && func_29(&uLocal_40) > IntToFloat(iLocal_31))
			{
				if (func_30(13))
				{
					iLocal_39 = _create_volume_aggregate();
					_0x39816f6f94f385ad(iLocal_39, -846.6119f, -1065.891f, 54.10397f, 0f, 0f, 12.2577f, 134.1237f, 68.95397f, 53.79238f);
					_0x39816f6f94f385ad(iLocal_39, -957.0787f, -1000.424f, 57.02654f, 0f, 0f, 47.19107f, 141.1471f, 213.5969f, 75.77352f);
					_0x39816f6f94f385ad(iLocal_39, -1165.555f, -1038.077f, 70.67178f, 0f, 0f, 12.46235f, 390.3466f, 336.1672f, 80.72659f);
					iLocal_31 = 20;
				}
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (bVar0)
			{
				if (func_31())
				{
					vVar2 = { -1048.537f, -1182.096f, 58.1195f };
				}
				else
				{
					vVar2 = { -1049.912f, -962.8728f, 61.4584f };
				}
			}
			else
			{
				vVar2 = { Global_36 };
			}
			fVar7 = func_29(&uLocal_40);
			if (fVar7 < 30f)
			{
				fVar6 = 90f;
			}
			else if (fVar7 < 110f)
			{
				fVar6 = 80f;
			}
			else
			{
				fVar6 = 70f;
			}
			if (func_30(13))
			{
				fVar5 = 180f;
			}
			else
			{
				fVar5 = 45f;
			}
			if (func_32(vVar2, &Local_15, &bVar1, 47, 1, fVar5, 1101004800, fVar6, (fLocal_27 - 10f), 0))
			{
				if (((!func_33(Local_15.f_3, 0, 0, 0) && !func_34(iLocal_39, Local_15.f_3)) && (func_35(Local_15.f_3) == 4 || func_35(Local_15.f_3) == 12)) && test_vertical_probe_against_all_water(Local_15.f_3, 0, &(Local_15.f_3.f_2)) != 1)
				{
					bVar9 = get_water_height(Global_36, &fVar8);
					if ((bVar9 && fVar8 < 0.3f) || !bVar9)
					{
						vLocal_24 = { Local_15.f_3 };
						iLocal_14 = 4;
					}
				}
				func_36(&Local_15, 1, 0);
			}
			else if (bVar1)
			{
				func_36(&Local_15, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_32 && !bLocal_33)
			{
				func_37();
			}
			else if (bLocal_32 && !bLocal_33)
			{
				func_38(get_random_int_in_range(0, 3));
			}
			else
			{
				iVar11 = 0;
				while (iVar11 < iLocal_43)
				{
					func_39(iVar11);
					func_40(&(iLocal_43[iVar11]), &(iLocal_51[iVar11]), 0, -1, 1);
					bVar12 = false;
					if (iVar11 == 0)
					{
						if (!does_group_exist(iLocal_59))
						{
							iLocal_59 = create_group(0);
							set_group_formation(iLocal_59, 9);
						}
						bVar12 = true;
					}
					if (func_8(&(iLocal_43[iVar11]), 0))
					{
						if (func_29(&uLocal_40) < fLocal_28 || bVar0)
						{
							if (bVar0)
							{
								vVar13 = { func_41(-1124.641f, -1140.979f, 63.6238f, 30f, 10f) };
							}
							else
							{
								fVar16 = 25f;
								vVar17 = { _get_object_offset_from_coords(Global_36, get_random_float_in_range(-80f, 80f), 0f, fVar16, 0f) };
								vVar13 = { func_41(vVar17, (fVar16 - 10f), 10f) };
							}
							func_42(&vVar13, 50, 10, 0);
							clear_sequence_task(&iVar10);
							open_sequence_task(&iVar10);
							task_follow_nav_mesh_to_coord(0, vVar13, 2.5f, -1, 0.25f, 0, 40000f);
							task_stand_still(0, 3000);
							close_sequence_task(iVar10);
							task_police(&(iLocal_43[iVar11]), true);
							task_perform_sequence(&(iLocal_43[iVar11]), iVar10);
						}
						else if (func_8(Global_35, 0))
						{
							task_combat_ped(&(iLocal_43[iVar11]), Global_35, 0, 0);
						}
						func_43(iLocal_43[iVar11], &iLocal_59, bVar12, 1, 1, 1, 0);
					}
					iVar11++;
				}
				iLocal_14 = 5;
			}
			break;
		case 5:
			iVar22 = 0;
			while (iVar22 < iLocal_43)
			{
				if (func_8(&(iLocal_43[iVar22]), 0))
				{
					if (func_10(Global_35, &(iLocal_43[iVar22]), 1, 1) > (fLocal_27 + 20f))
					{
						iVar20++;
					}
					else
					{
						iVar21 = &iLocal_43[iVar22];
					}
				}
				iVar22++;
			}
			if (iVar20 >= iLocal_29)
			{
				func_1(0);
				iLocal_14 = 3;
				return;
			}
			if (func_29(&uLocal_40) > fLocal_28 && !bVar0)
			{
				if (func_8(iVar21, 0) && func_8(Global_35, 0))
				{
					task_combat_ped(iVar21, Global_35, 0, 0);
				}
			}
			break;
	}
}

bool func_8(int iParam0, int iParam1)
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
	if (func_44(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_44(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_44(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_9(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

float func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_11(int* iParam0)
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

int func_12(bool bParam0, bool bParam1, bool bParam2)
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

int func_13()
{
	return Global_1934266->f_4;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!func_45(iParam0))
	{
		return false;
	}
	if (func_46(iParam0, 1) || (bParam1 && func_46(iParam0, 2)))
	{
		return true;
	}
	return false;
}

int func_15()
{
	return Global_1897952->f_41;
}

bool func_16(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_48(iParam0, 8))
		{
			return false;
		}
	}
	if (func_48(iParam0, 1))
	{
		return true;
	}
	return false;
}

int func_17()
{
	return Global_1894899->f_2;
}

bool func_18(int iParam0)
{
	if (!func_49(iParam0))
	{
		return false;
	}
	return func_50(iParam0, 33554432);
}

bool func_19()
{
	iVar0 = func_13();
	if (!func_45(iVar0))
	{
		return false;
	}
	if (func_51(Global_40.f_358[iVar0]->f_1) || Global_40.f_358[iVar0]->f_4 < 1f)
	{
		return false;
	}
	if (func_52(Global_35, Global_40.f_358[iVar0]->f_1, (Global_40.f_358[iVar0]->f_4 + 10f), 1, 1))
	{
		return true;
	}
	return false;
}

int func_20()
{
	return Global_1572887->f_12;
}

bool func_21()
{
	return func_53(&Global_1935630, 4096);
}

bool func_22()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_54(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_55())
	{
		return func_54(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_54(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_24(int iParam0)
{
	iVar0 = func_56(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_25(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_26(var uParam0)
{
	func_57(uParam0, 0f);
}

bool func_27(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_28(int iParam0, bool bParam1)
{
	func_58(iParam0, &iVar0, &iVar1);
	if (!func_59(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_60(iVar0, iVar1);
}

float func_29(var uParam0)
{
	if (!func_61(uParam0))
	{
		return 0f;
	}
	if (func_62(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_63() - uParam0->f_1);
}

bool func_30(int iParam0)
{
	if (!func_64(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_31()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_32(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = _0x74f0209674864cbd();
			func_65(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_66(&(iParam3->f_1), iParam5);
				if (!func_51(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_67(iParam3->f_6));
				}
				_0x2b8af29a78024bd3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = _0x0365000d8bf86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { _0x865732725536ee39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_33(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_51(vParam0))
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

bool func_34(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_35(vector3 vParam0)
{
	return func_68(_get_map_zone_at_coords(vParam0, 10));
}

void func_36(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && _0x1ac5a8ab50cfaa33(uParam0->f_1))
	{
		_0x0365000d8bf86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_37()
{
	if (!is_sphere_visible(vLocal_24, 5f))
	{
		iLocal_43[iLocal_30] = func_69(iLocal_34, vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			iLocal_30 = 0;
			bLocal_32 = true;
		}
	}
}

void func_38(int iParam0)
{
	if (!is_sphere_visible(vLocal_24, 5f))
	{
		iLocal_51[iLocal_30] = func_69(&(iLocal_35[iParam0]), vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_0x9de63896b176ea94(&(iLocal_51[iLocal_30]), 0);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			bLocal_33 = true;
		}
	}
}

void func_39(int iParam0)
{
	if (!func_8(&(iLocal_43[iParam0]), 0))
	{
		return;
	}
	set_ped_config_flag(&(iLocal_43[iParam0]), 188, true);
	set_ped_config_flag(&(iLocal_43[iParam0]), 527, true);
	_0x9de63896b176ea94(&(iLocal_43[iParam0]), 0);
	_0x819add5ef1742f47(&(iLocal_43[iParam0]), 1);
	set_ped_combat_attributes(&(iLocal_43[iParam0]), 27, true);
	_0x712b2c2b2471b493(&(iLocal_43[iParam0]), -1722884127);
	set_ped_drops_weapons_when_dead(&(iLocal_43[iParam0]), false);
	_give_weapon_to_ped_2(&(iLocal_43[iParam0]), -1212426201, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

int func_40(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

Vector3 func_41(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_70(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_42(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_71(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_43(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!does_group_exist(*iParam1) || is_ped_dead_or_dying(*uParam0, true))
	{
		return;
	}
	set_ped_config_flag(*uParam0, 279, bParam3);
	if (bParam2)
	{
		set_ped_as_group_leader(*uParam0, *iParam1, false);
	}
	else
	{
		set_ped_as_group_member(*uParam0, *iParam1);
		set_ped_config_flag(*uParam0, 280, bParam4);
		_0xbad2a311667a50d7(*uParam0, iParam5);
	}
	_0x97c475212b327666(*iParam1, iParam6);
}

bool func_44(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_45(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_46(int iParam0, int iParam1)
{
	if (!func_45(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_48(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_49(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_50(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_51(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_52(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_72(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_54(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_55()
{
	return Global_1109400->f_245;
}

int func_56(int iParam0)
{
	if (!func_73(iParam0))
	{
		return -1;
	}
	return func_74(iParam0);
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_63() - fParam1);
	func_75(uParam0, 1);
	func_76(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_58(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_59(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_77(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_78(iParam0))
	{
		return false;
	}
	if (func_79(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_80(iParam0, 1)) || func_81(32768))
	{
		if (!func_80(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_82())
	{
		return false;
	}
	return true;
}

void func_60(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_61(var uParam0)
{
	return func_83(*uParam0, 1);
}

bool func_62(var uParam0)
{
	return func_83(*uParam0, 2);
}

float func_63()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_64(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_65(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_51(vParam2))
	{
		_0x2064b33f6e6b92d4(*uParam0, vParam2);
	}
	_0x9b6a58fdb0024f12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			_0xb8e3486d107f4194(*uParam0, 90f);
			_0x827a58ced9d4d5b4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
		default:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				_0xb8e3486d107f4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			_0xff8afca532b500d4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			_0x764db5a48390fbad(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, ((80f - 40f) / 2f));
				_0xb79817db31ff72b9(*uParam0, 0f);
				break;
			case 4:
				_0x954451ea2d2120fb(*uParam0, 0.5f);
				_0x0f4f6c4ce471259d(*uParam0, 2.5f);
				break;
			case 5:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 6:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 7:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 8:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 9:
				_0x954451ea2d2120fb(*uParam0, 12f);
				_0x0f4f6c4ce471259d(*uParam0, 18f);
				break;
			case 10:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 65f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 0:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 55f);
				break;
			case 11:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 15f);
				break;
			case 15:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 40f);
				break;
			case 14:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 16:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 30:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 2:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 18:
				_0x954451ea2d2120fb(*uParam0, 1f);
				_0x0f4f6c4ce471259d(*uParam0, 20f);
				break;
			case 20:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 21:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 22:
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 26:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 27:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 28:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 50f);
				_0xb79817db31ff72b9(*uParam0, 45f);
				break;
			case 29:
				_0x954451ea2d2120fb(*uParam0, 15f);
				_0x0f4f6c4ce471259d(*uParam0, 25f);
				_0xb79817db31ff72b9(*uParam0, 20f);
				break;
			case 31:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 140f);
				break;
			case 32:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 125f);
				break;
			case 33:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 34:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 35:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 36:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_84(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_84(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_84(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_84(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_84(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_84(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_84(50f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(75f, 95f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_84(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_84(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_84(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					_0x954451ea2d2120fb(*uParam0, 1f);
					_0x0f4f6c4ce471259d(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					_0x954451ea2d2120fb(*uParam0, 5f);
					_0x0f4f6c4ce471259d(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					_0x954451ea2d2120fb(*uParam0, 15f);
					_0x0f4f6c4ce471259d(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					_0x4a7d73989f52eb37(*uParam0, 1f);
					_0xb79817db31ff72b9(*uParam0, 65f);
					_0x954451ea2d2120fb(*uParam0, 35f);
					if (iParam5 != 19)
					{
						_0x0f4f6c4ce471259d(*uParam0, 160f);
					}
					else
					{
						_0x0f4f6c4ce471259d(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		_0x954451ea2d2120fb(*uParam0, fParam8);
		_0x0f4f6c4ce471259d(*uParam0, fParam9);
	}
}

void func_66(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 2:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 3:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 7:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 8:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 9:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 10:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			_0xbc3f847ae2c3dc65(*uParam0, 25f);
			_0x450080ddedb91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			_0x19bc99c678fba139(*uParam0, 77, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 15:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 14:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 46:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 9, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			break;
		case 16:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 5, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 17:
			_0x2eb977293923c723(*uParam0, 40f);
			_0x764db5a48390fbad(*uParam0, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 18:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 21:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 22:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 23:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 24:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 25:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 26:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 27:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 74, 0);
			break;
		case 28:
			_0x5d9b0baaf04cf65b(*uParam0, 17, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 77, 1);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 29:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 12, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 31:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 32:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 33:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 3, 0);
			break;
		case 34:
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 35:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			break;
		case 41:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			break;
		case 42:
			_0x19bc99c678fba139(*uParam0, 2, 1);
		case 44:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 47:
			_0x5d9b0baaf04cf65b(*uParam0, 28, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
	}
}

Vector3 func_67(vector3 vParam0)
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

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_69(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_85(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_70(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_71(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_72(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_73(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_74(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_86(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_77(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_78(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_80(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_80(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_79(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_80(iParam0, 65536) && !func_80(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_80(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_80(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_80(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_81(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_82()
{
	return Global_1905944->f_5694;
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_84(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_87(iParam1))
		{
			func_88(iParam0, 41788943);
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
			func_89(iParam0, 0, 1);
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
			func_90(iParam0, 0);
			bVar0 = true;
		}
		func_91(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_86(int iParam0)
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

bool func_87(int iParam0)
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

void func_88(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_92(iParam0, iParam1))
		{
			if (func_93(iParam0, iParam1))
			{
				if (func_94(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_95(iParam0);
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

void func_89(int iParam0, int iParam1, bool bParam2)
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

void func_90(int iParam0, bool bParam1)
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

void func_91(int iParam0, int iParam1)
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

bool func_92(int iParam0, int iParam1)
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

bool func_93(int iParam0, int iParam1)
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

bool func_94(int iParam0, int iParam1)
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
	if (!func_92(iParam0, iVar0))
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

void func_95(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

