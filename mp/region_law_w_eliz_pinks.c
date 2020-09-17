void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_16 = 1;
	iLocal_33 = 10;
	iLocal_36 = 737910671;
	uScriptParam_0 = uScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1(1);
		terminate_this_thread();
	}
	while (((!func_2(player_id(), 0, 0, 1) && func_3()) && !func_4()) && func_5())
	{
		func_6();
		wait(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	bLocal_34 = false;
	bLocal_35 = false;
	iLocal_32 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_45)
	{
		if (func_7(&(iLocal_45[iVar0]), 0))
		{
			if (bParam0)
			{
				func_8(iLocal_45[iVar0], 1, 1, 1);
				func_8(iLocal_53[iVar0], 1, 1, 1);
			}
			else
			{
				if ((func_9(Global_34, &(iLocal_45[iVar0]), 1, 1) > 20f && (!is_entity_on_screen(&(iLocal_45[iVar0])) || is_entity_occluded(&(iLocal_45[iVar0])))) || is_screen_faded_out())
				{
					func_10(iLocal_45[iVar0]);
				}
				else
				{
					func_8(iLocal_45[iVar0], 1, 1, 1);
				}
				if ((func_9(Global_34, &(iLocal_53[iVar0]), 1, 1) > 20f && (!is_entity_on_screen(&(iLocal_53[iVar0])) || is_entity_occluded(&(iLocal_53[iVar0])))) || is_screen_faded_out())
				{
					func_10(iLocal_53[iVar0]);
				}
				else
				{
					func_8(iLocal_53[iVar0], 1, 1, 1);
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
		return func_11(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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
	if (func_13(func_12(), 1))
	{
		return true;
	}
	if (func_15(func_14(), 1))
	{
		return true;
	}
	if (func_17(func_16()))
	{
		return true;
	}
	if (does_blip_exist(Global_1939161->f_148))
	{
		if (func_18())
		{
			return true;
		}
	}
	return false;
}

bool func_4()
{
	return func_19(1, 255);
}

bool func_5()
{
	if (Global_1939161->f_56)
	{
		return false;
	}
	return true;
}

void func_6()
{
	bVar0 = func_20(Global_34, iLocal_41, 1, 0);
	if (bVar0)
	{
		fLocal_29 = 250f;
		fLocal_30 = 150f;
		if (iLocal_16 > 2 && iLocal_16 != 0)
		{
			iLocal_16 = 0;
		}
	}
	else
	{
		fLocal_29 = 120f;
		fLocal_30 = 110f;
		if (iLocal_16 == 0)
		{
			iLocal_16 = 3;
		}
	}
	switch (iLocal_16)
	{
		case 1:
			func_21(&uLocal_42);
			iLocal_37[0] = -1250098797;
			iLocal_37[1] = -1180427609;
			iLocal_37[2] = -1924405794;
			iLocal_31 = get_random_int_in_range(4, 7);
			_0xed9582b3da8f02b4(14);
			if (!func_22(135))
			{
				func_23(135, 0);
			}
			iLocal_16 = 2;
			break;
		case 2:
			request_model(iLocal_36, false);
			request_model(&(iLocal_37[0]), false);
			request_model(&(iLocal_37[1]), false);
			request_model(&(iLocal_37[2]), false);
			if (((((has_model_loaded(iLocal_36) && has_model_loaded(&(iLocal_37[0]))) && has_model_loaded(&(iLocal_37[1]))) && has_model_loaded(&(iLocal_37[2]))) && _0x5e420ff293ee5472()) && func_24(&uLocal_42) > IntToFloat(iLocal_33))
			{
				iLocal_16 = 3;
			}
			break;
		case 3:
			if (bVar0)
			{
				if (func_25())
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
				vVar2 = { Global_35 };
			}
			fVar7 = func_24(&uLocal_42);
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
			fVar5 = 45f;
			if (func_26(vVar2, &Local_17, &bVar1, 1, 1, fVar5, 1101004800, fVar6, (fLocal_29 - 10f), 0))
			{
				if (((!func_27(Local_17.f_3, 0, 0, 0) && !func_28(iLocal_41, Local_17.f_3)) && (func_29(Local_17.f_3) == 4 || func_29(Local_17.f_3) == 12)) && test_vertical_probe_against_all_water(Local_17.f_3, 0, &(Local_17.f_3.f_2)) != 1)
				{
					vLocal_26 = { Local_17.f_3 };
					iLocal_16 = 4;
				}
				func_30(&Local_17, 1, 0);
			}
			else if (bVar1)
			{
				func_30(&Local_17, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_34 && !bLocal_35)
			{
				func_31();
			}
			else if (bLocal_34 && !bLocal_35)
			{
				func_32(get_random_int_in_range(0, 3));
			}
			else
			{
				iVar9 = 0;
				while (iVar9 < iLocal_45)
				{
					func_33(iVar9);
					func_34(&(iLocal_45[iVar9]), &(iLocal_53[iVar9]), 0, -1, 1);
					bVar10 = false;
					if (iVar9 == 0)
					{
						if (!does_group_exist(iLocal_61))
						{
							iLocal_61 = create_group(0);
							set_group_formation(iLocal_61, 9);
						}
						bVar10 = true;
					}
					if (func_7(&(iLocal_45[iVar9]), 0))
					{
						if (func_24(&uLocal_42) < fLocal_30 || bVar0)
						{
							if (bVar0)
							{
								vVar11 = { func_35(-1124.641f, -1140.979f, 63.6238f, 30f, 10f) };
							}
							else
							{
								fVar14 = 25f;
								vVar15 = { _get_object_offset_from_coords(Global_35, get_random_float_in_range(-80f, 80f), 0f, fVar14, 0f) };
								vVar11 = { func_35(vVar15, (fVar14 - 10f), 10f) };
							}
							func_36(&vVar11, 50, 10, 0, 0);
							clear_sequence_task(&iVar8);
							open_sequence_task(&iVar8);
							task_follow_nav_mesh_to_coord(0, vVar11, 2.5f, -1, 0.25f, 0, 40000f);
							task_stand_still(0, 3000);
							close_sequence_task(iVar8);
							task_police(&(iLocal_45[iVar9]), true);
							task_perform_sequence(&(iLocal_45[iVar9]), iVar8);
						}
						else if (func_7(Global_34, 0))
						{
							task_combat_ped(&(iLocal_45[iVar9]), Global_34, 0, 0);
						}
						func_37(iLocal_45[iVar9], &iLocal_61, bVar10, 1, 1, 1, 0);
					}
					iVar9++;
				}
				iLocal_16 = 5;
			}
			break;
		case 5:
			iVar19 = 0;
			while (iVar19 < iLocal_45)
			{
				if (func_7(&(iLocal_45[iVar19]), 0))
				{
					if (func_9(Global_34, &(iLocal_45[iVar19]), 1, 1) > (fLocal_29 + 20f))
					{
						iVar18++;
					}
				}
				iVar19++;
			}
			if (iVar18 >= iLocal_31)
			{
				func_1(0);
				iLocal_16 = 3;
				return;
			}
			break;
	}
}

bool func_7(int iParam0, int iParam1)
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
	if (func_38(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_38(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_38(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_8(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

float func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_10(int* iParam0)
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

int func_11(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12()
{
	return Global_1939161->f_4;
}

bool func_13(int iParam0, bool bParam1)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	if (func_40(iParam0, 1) || (bParam1 && func_40(iParam0, 2)))
	{
		return true;
	}
	return false;
}

int func_14()
{
	return Global_1896622->f_41;
}

bool func_15(int iParam0, bool bParam1)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_42(iParam0, 8))
		{
			return false;
		}
	}
	if (func_42(iParam0, 1))
	{
		return true;
	}
	return false;
}

int func_16()
{
	return Global_1893587->f_2;
}

bool func_17(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return func_44(iParam0, 33554432);
}

bool func_18()
{
	iVar0 = func_12();
	if (!func_39(iVar0))
	{
		return false;
	}
	if (func_45(Global_39.f_190[iVar0]->f_1) || Global_39.f_190[iVar0]->f_4 < 1f)
	{
		return false;
	}
	if (func_46(Global_34, Global_39.f_190[iVar0]->f_1, (Global_39.f_190[iVar0]->f_4 + 10f), 1, 1))
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_47(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_48())
	{
		return func_47(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_47(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_20(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_21(var uParam0)
{
	func_49(uParam0, 0f);
}

bool func_22(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_23(int iParam0, bool bParam1)
{
	func_50(iParam0, &iVar0, &iVar1);
	if (!func_51(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_52(iVar0, iVar1);
}

float func_24(var uParam0)
{
	if (!func_53(uParam0))
	{
		return 0f;
	}
	if (func_54(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_55() - uParam0->f_1);
}

bool func_25()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_26(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
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
			func_56(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_57(&(iParam3->f_1), iParam5, vParam0);
				if (!func_45(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_58(iParam3->f_6));
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

bool func_27(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_45(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_28(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_29(vector3 vParam0)
{
	return func_59(_get_map_zone_at_coords(vParam0, 10));
}

void func_30(var uParam0, bool bParam1, bool bParam2)
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

void func_31()
{
	if (!is_sphere_visible(vLocal_26, 5f))
	{
		iLocal_45[iLocal_32] = func_60(iLocal_36, vLocal_26, 0, 1, 1, 0, 1, 1, 1, 0, 0);
		iLocal_32++;
		if (iLocal_32 >= iLocal_31)
		{
			iLocal_32 = 0;
			bLocal_34 = true;
		}
	}
}

void func_32(int iParam0)
{
	if (!is_sphere_visible(vLocal_26, 5f))
	{
		iLocal_53[iLocal_32] = func_60(&(iLocal_37[iParam0]), vLocal_26, 0, 1, 1, 0, 1, 1, 1, 0, 0);
		_0x9de63896b176ea94(&(iLocal_53[iLocal_32]), 0);
		iLocal_32++;
		if (iLocal_32 >= iLocal_31)
		{
			bLocal_35 = true;
		}
	}
}

void func_33(int iParam0)
{
	if (!func_7(&(iLocal_45[iParam0]), 0))
	{
		return;
	}
	set_ped_config_flag(&(iLocal_45[iParam0]), 188, true);
	_0x9de63896b176ea94(&(iLocal_45[iParam0]), 0);
	_0x819add5ef1742f47(&(iLocal_45[iParam0]), 1);
	set_ped_combat_attributes(&(iLocal_45[iParam0]), 27, true);
	_0x712b2c2b2471b493(&(iLocal_45[iParam0]), -1722884127);
	set_ped_drops_weapons_when_dead(&(iLocal_45[iParam0]), false);
	_give_weapon_to_ped_2(&(iLocal_45[iParam0]), -1212426201, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

int func_34(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

Vector3 func_35(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_61(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_36(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_62(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

void func_37(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
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

bool func_38(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_39(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_40(int iParam0, int iParam1)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

bool func_41(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_42(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_43(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_44(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

bool func_45(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_46(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_63(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_47(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_48()
{
	return Global_1102219->f_3672;
}

void func_49(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_64(uParam0, 1);
	func_65(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_50(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_51(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_66(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	if (func_68(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_69(iParam0, 1)) || func_70(32768))
	{
		if (!func_69(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_71())
	{
		return false;
	}
	return true;
}

void func_52(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_53(var uParam0)
{
	return func_72(*uParam0, 1);
}

bool func_54(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_55()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_56(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_45(vParam2))
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
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			break;
		case 42:
			_0xb8e3486d107f4194(*uParam0, fParam10);
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
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 8192);
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
				_0x954451ea2d2120fb(*uParam0, func_73(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_73(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_73(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_73(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_73(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_73(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 60f);
				_0x954451ea2d2120fb(*uParam0, func_73(60f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(75f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 50:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_73(30f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(65f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 25f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 51:
				_0x2eb977293923c723(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, func_73(25f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(40f, 50f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 8f);
				_0x450080ddedb91258(*uParam0, 2f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 52:
				_0x2eb977293923c723(*uParam0, 0f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_73(40f, 100f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, func_73(50f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(65f, 85f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 49:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_73(10f, 50f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_73(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_73(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_73(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_74(vParam2, 1);
				iVar1 = func_29(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					_0x2eb977293923c723(*uParam0, func_73(100f, 80f, -5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, func_73(100f, 80f, -5f, iParam1));
					_0x0f4f6c4ce471259d(*uParam0, func_73(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					_0x2eb977293923c723(*uParam0, func_73(100f, 70f, -7.5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, 70f);
					_0x0f4f6c4ce471259d(*uParam0, func_73(80f, 150f, 17.5f, iParam1));
				}
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x19bc99c678fba139(*uParam0, 2, 0);
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 47:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_73(50f, 90f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 48:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, func_73(100f, 70f, -7.5f, iParam1));
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, func_73(150f, 190f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
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

void func_57(var uParam0, int iParam1, vector3 vParam2)
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
		case 53:
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
		case 44:
		case 49:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 50:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 51:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_74(vParam2, 1) == 5)
			{
				_0x5d9b0baaf04cf65b(*uParam0, 53, 1, 0);
				_0x5d9b0baaf04cf65b(*uParam0, 74, 1, 0);
			}
			else
			{
				_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			}
			_0x5d9b0baaf04cf65b(*uParam0, 50, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_58(vector3 vParam0)
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

int func_59(int iParam0)
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

int func_60(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_75(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_61(vector3 vParam0, float fParam3)
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

bool func_62(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_63(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_66(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_67(int iParam0)
{
	if (func_69(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_68(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_69(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_70(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_71()
{
	if (!func_76())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_73(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_74(vector3 vParam0, int iParam3)
{
	iVar0 = func_16();
	if (func_43(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_77(vParam0, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
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
			func_78(iParam0, 0, 1);
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
			func_79(iParam0, 0);
			bVar0 = true;
		}
		func_80(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_76()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_77(vector3 vParam0, bool bParam3)
{
	iVar0 = func_81(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_78(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_79(int iParam0, bool bParam1)
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

void func_80(int iParam0, int iParam1)
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

int func_81(vector3 vParam0)
{
	iVar0 = func_82(vParam0, 0f, 0f, 0, 2);
	return func_82(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_82(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

