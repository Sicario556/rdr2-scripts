void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_16 = 1;
	iLocal_26 = 1455795772;
	iLocal_31 = -1308375373;
	iLocal_32 = 227187597;
	uScriptParam_0 = uScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1();
		terminate_this_thread();
	}
	while ((((!func_2(player_id(), 0, 0, 1) && func_3()) && iLocal_16 < 7) && !func_4()) && !func_5())
	{
		func_6();
		wait(0);
	}
	func_1();
	if (func_7() == 5)
	{
		iVar0 = get_random_int_in_range(25000, 35000);
	}
	else if (func_7() >= 3)
	{
		iVar0 = get_random_int_in_range(35000, 55000);
	}
	else
	{
		iVar0 = get_random_int_in_range(45000, 55000);
	}
	Global_1939161->f_2 = iVar0;
	Global_1939161->f_1 = get_game_timer();
}

void func_1()
{
	destroy_itemset(iLocal_128);
	if (is_incident_valid(iLocal_129))
	{
		delete_incident(iLocal_129);
	}
	func_8(&uLocal_37, 1);
	func_8(&uLocal_38, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_39)
	{
		if (func_9(&(iLocal_39[iVar1]), 0))
		{
			if (iVar1 == 0)
			{
				iVar2 = -1;
			}
			else
			{
				iVar2 = -2;
			}
			open_sequence_task(&iVar0);
			if (is_vehicle_driveable(iLocal_45, false, false))
			{
				task_enter_vehicle(0, iLocal_45, 20000, iVar2, 2f, 1, 0);
			}
			if (iVar1 == 0)
			{
				_task_move_in_traffic(0, -1082130432, 0, 0);
			}
			else
			{
				task_stand_still(0, 5000);
			}
			close_sequence_task(iVar0);
			task_perform_sequence(&(iLocal_39[iVar1]), iVar0);
			func_10(iLocal_39[iVar1], 1, 1, 1);
		}
		iVar1++;
	}
	func_11(vLocal_33, 10f, 5);
	set_vehicle_as_no_longer_needed(&iLocal_45);
	set_object_as_no_longer_needed(&iLocal_46);
}

int func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_12(bParam1, bParam2, bParam3);
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
	if (does_blip_exist(Global_1939161->f_148))
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
	return func_20(1, 255);
}

bool func_5()
{
	return Global_1893587 & 2 != 0;
}

void func_6()
{
	if (func_21(&uLocal_125) > 35f && iLocal_16 <= 4)
	{
		iLocal_16 = 6;
	}
	switch (iLocal_16)
	{
		case 1:
			func_22(&uLocal_125);
			_0xed9582b3da8f02b4(5);
			iLocal_128 = create_itemset(true);
			if (func_7() == 5)
			{
				iLocal_27 = 5;
			}
			else
			{
				iLocal_27 = get_random_int_in_range(2, 4);
			}
			func_23();
			iVar0 = func_13();
			switch (iVar0)
			{
				case 0:
					iLocal_30 = 1830978939;
					break;
				case 1:
					iLocal_30 = 1830978939;
					break;
				case 2:
					iLocal_30 = 1830978939;
					break;
				case 3:
					iLocal_30 = 1830978939;
					break;
				case 5:
					iLocal_30 = -384354290;
					break;
				default:
					iLocal_30 = 1830978939;
					break;
			}
			iLocal_16 = 2;
			break;
		case 2:
			request_model(iLocal_30, false);
			request_model(iLocal_31, false);
			request_model(iLocal_32, false);
			if (((has_model_loaded(iLocal_30) && has_model_loaded(iLocal_31)) && has_model_loaded(iLocal_32)) && _0x5e420ff293ee5472())
			{
				iLocal_16 = 3;
			}
			break;
		case 3:
			if (func_24(Global_35, &Local_17, &bVar1, 16, 1, 45f, 25f, 100f, 180f, 0))
			{
				vLocal_33 = { Local_17.f_3 };
				func_25(&uLocal_38, vLocal_33, 5f, 2, 2, 0);
				func_25(&uLocal_37, vLocal_33, 7f, 1, 61, 0);
				iLocal_16 = 4;
			}
			else if (bVar1)
			{
				func_26(&Local_17, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_29)
			{
				func_27();
			}
			else
			{
				func_28();
				func_29(vLocal_33, 10f, 0, 0, 5, 1);
				_create_incident_with_entities(8, vLocal_33, iLocal_128, -1f, &iLocal_129);
				iVar2 = 0;
				while (iVar2 < iLocal_39)
				{
					if (func_9(&(iLocal_39[iVar2]), 0))
					{
						if (iVar2 <= 1)
						{
							uVar3 = &uLocal_119[iVar2];
						}
						else if (func_30())
						{
							uVar3 = &uLocal_113[iVar2];
						}
						else
						{
							uVar3 = &uLocal_119[iVar2];
						}
						_task_use_scenario_point(&(iLocal_39[iVar2]), uVar3, 0, 0, false, true, 0, false, -1f, false);
					}
					iVar2++;
				}
				iLocal_16 = 5;
			}
			break;
		case 5:
			iVar4 = 0;
			while (iVar4 < iLocal_39)
			{
				if (does_entity_exist(&(iLocal_39[iVar4])))
				{
					set_ped_reset_flag(&(iLocal_39[iVar4]), 116, true);
					if (func_31(Global_34, &(iLocal_39[iVar4]), 1, 1) > 200f)
					{
						iLocal_16 = 6;
						return;
					}
				}
				iVar4++;
			}
			break;
		case 6:
			func_1();
			iLocal_16 = 7;
			break;
	}
}

int func_7()
{
	return func_33(func_32(func_15()));
}

void func_8(var uParam0, int iParam1)
{
	if (func_34(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_9(int iParam0, int iParam1)
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
	if (func_35(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_10(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_11(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_36(vVar0, vVar3, 0f) };
	vVar9 = { func_37(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

int func_12(bool bParam0, bool bParam1, bool bParam2)
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

int func_13()
{
	return Global_1939161->f_4;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	if (func_39(iParam0, 1) || (bParam1 && func_39(iParam0, 2)))
	{
		return true;
	}
	return false;
}

int func_15()
{
	return Global_1896622->f_41;
}

bool func_16(int iParam0, bool bParam1)
{
	if (!func_40(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_41(iParam0, 8))
		{
			return false;
		}
	}
	if (func_41(iParam0, 1))
	{
		return true;
	}
	return false;
}

int func_17()
{
	return Global_1893587->f_2;
}

bool func_18(int iParam0)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	return func_43(iParam0, 33554432);
}

bool func_19()
{
	iVar0 = func_13();
	if (!func_38(iVar0))
	{
		return false;
	}
	if (func_44(Global_39.f_190[iVar0]->f_1) || Global_39.f_190[iVar0]->f_4 < 1f)
	{
		return false;
	}
	if (func_45(Global_34, Global_39.f_190[iVar0]->f_1, (Global_39.f_190[iVar0]->f_4 + 10f), 1, 1))
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_46(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_47())
	{
		return func_46(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_46(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

float func_21(var uParam0)
{
	if (!func_48(uParam0))
	{
		return 0f;
	}
	if (func_49(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_50() - uParam0->f_1);
}

void func_22(var uParam0)
{
	func_51(uParam0, 0f);
}

void func_23()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_80[iVar0] = iLocal_26;
		Local_47[iVar0] = iLocal_26;
		iVar0++;
	}
	Local_80[0] = -22664287;
	Local_80[0]->f_1 = { 1.5f, 0f, 0f };
	Local_80[1] = 421625586;
	Local_80[1]->f_1 = { -1.35f, 0f, 0f };
	Local_80[2] = 2087366558;
	Local_80[2]->f_1 = { 1f, -2.5f, 0f };
	Local_80[3] = 2087366558;
	Local_80[3]->f_1 = { 1f, 6f, 0f };
	Local_80[4] = -1273821262;
	Local_80[4]->f_1 = { 2f, -2.5f, 0f };
	Local_80[5] = 871322766;
	Local_80[5]->f_1 = { 2f, 2.5f, 0f };
	Local_80[6] = -258459266;
	Local_80[6]->f_1 = { -2f, 2.5f, 0f };
	Local_80[7] = -22664287;
	Local_80[7]->f_1 = { -2f, -2.5f, 0f };
	Local_47[0] = -22664287;
	Local_47[1] = 597682689;
	Local_47[2] = 1299323850;
	Local_47[3] = 2087366558;
	Local_47[4] = -1032721003;
	Local_47[5] = 1446817251;
	Local_47[6] = -258459266;
	Local_47[7] = 871322766;
}

bool func_24(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
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
			func_52(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_53(&(iParam3->f_1), iParam5, vParam0);
				if (!func_44(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_54(iParam3->f_6));
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

void func_25(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_34(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_34(uParam0))
		{
		}
	}
}

void func_26(var uParam0, bool bParam1, bool bParam2)
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

void func_27()
{
	if (iLocal_28 < (iLocal_27 / 2))
	{
		vVar0.x = ((vLocal_33.x - 4f) + IntToFloat(iLocal_28));
	}
	else
	{
		vVar0.x = ((vLocal_33.x + 4f) - IntToFloat(iLocal_28));
	}
	vVar0.f_1 = (vLocal_33.y + IntToFloat(get_random_int_in_range(-3, 3)));
	func_55(&vVar0, 50, 10, 0, 0);
	iLocal_39[iLocal_28] = func_56(iLocal_30, vVar0, (fLocal_36 + get_random_float_in_range(-10f, 60f)), 1, 1, 0, 1, 1, 1, 0, 0);
	_0x819add5ef1742f47(&(iLocal_39[iLocal_28]), 2);
	_0x819add5ef1742f47(&(iLocal_39[iLocal_28]), 16384);
	set_ped_combat_attributes(&(iLocal_39[iLocal_28]), 39, true);
	set_ped_config_flag(&(iLocal_39[iLocal_28]), 188, true);
	func_57(&(iLocal_39[iLocal_28]), iLocal_128);
	iLocal_28++;
	if (iLocal_28 >= iLocal_27)
	{
		iLocal_28 = 0;
		bLocal_29 = true;
	}
}

void func_28()
{
	vVar0 = { _get_object_offset_from_coords(vLocal_33, fLocal_36, 2f, 0f, 0f) };
	func_55(&vVar0, 50, 10, 0, 0);
	iLocal_45 = create_vehicle(iLocal_31, vVar0, (fLocal_36 + get_random_float_in_range(15f, 30f)), true, true, false, false);
	iVar11 = 0;
	while (iVar11 < iLocal_27)
	{
		Var7 = { func_58(&Local_80) };
		vVar3 = { get_offset_from_entity_in_world_coords(iLocal_45, Var7.f_1) };
		func_55(&vVar3, 50, 10, 0, 0);
		fVar6 = func_59(vVar0, vVar3);
		uLocal_119[iVar11] = create_scenario_point(Var7, vVar3, fVar6, 0, 0, 0);
		iVar11++;
	}
	vVar0 = { _get_object_offset_from_coords(vLocal_33, fLocal_36, -3f, -3f, 0f) };
	func_55(&vVar0, 50, 10, 0, 0);
	iLocal_46 = create_object(iLocal_32, vVar0, true, true, false, false, true);
	iVar15 = 0;
	while (iVar15 < iLocal_27)
	{
		Var7 = { func_58(&Local_47) };
		fVar16 = 1.5f;
		vVar12 = { func_60(((360f / IntToFloat(iLocal_27)) * IntToFloat(iVar15))) };
		vVar3 = { vVar0 + vVar12 * Vector(fVar16, fVar16, fVar16) };
		fVar6 = func_59(vVar3, vVar0);
		func_55(&vVar3, 50, 10, 0, 0);
		uLocal_113[iVar15] = create_scenario_point(Var7, vVar3, fVar6, 0, 0, 0);
		iVar15++;
	}
}

void func_29(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_36(vVar0, vVar3, 0f) };
	vVar9 = { func_37(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, iParam7, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, iParam7);
	}
}

bool func_30()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_31(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_33(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 0;
	}
	if (func_39(iParam0, 2))
	{
		return 5;
	}
	if (func_61(iParam0) > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_62(func_61(iParam0));
	}
	return 0;
}

bool func_34(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_35(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_36(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_37(vector3 vParam0, vector3 vParam3, float fParam6)
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

bool func_38(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_39(int iParam0, int iParam1)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

bool func_40(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_41(int iParam0, int iParam1)
{
	if (!func_40(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_42(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_43(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

bool func_44(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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

bool func_46(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_47()
{
	return Global_1102219->f_3672;
}

bool func_48(var uParam0)
{
	return func_64(*uParam0, 1);
}

bool func_49(var uParam0)
{
	return func_64(*uParam0, 2);
}

float func_50()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_50() - fParam1);
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_52(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_44(vParam2))
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
				_0x954451ea2d2120fb(*uParam0, func_67(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_67(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_67(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_67(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_67(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_67(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 60f);
				_0x954451ea2d2120fb(*uParam0, func_67(60f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(75f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 50:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_67(30f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(65f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 25f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 51:
				_0x2eb977293923c723(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, func_67(25f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(40f, 50f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 8f);
				_0x450080ddedb91258(*uParam0, 2f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 52:
				_0x2eb977293923c723(*uParam0, 0f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_67(40f, 100f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, func_67(50f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(65f, 85f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 49:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_67(10f, 50f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_67(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_67(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_67(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_68(vParam2, 1);
				iVar1 = func_69(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					_0x2eb977293923c723(*uParam0, func_67(100f, 80f, -5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, func_67(100f, 80f, -5f, iParam1));
					_0x0f4f6c4ce471259d(*uParam0, func_67(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					_0x2eb977293923c723(*uParam0, func_67(100f, 70f, -7.5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, 70f);
					_0x0f4f6c4ce471259d(*uParam0, func_67(80f, 150f, 17.5f, iParam1));
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
				_0x0f4f6c4ce471259d(*uParam0, func_67(50f, 90f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 48:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, func_67(100f, 70f, -7.5f, iParam1));
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, func_67(150f, 190f, 10f, iParam1));
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

void func_53(var uParam0, int iParam1, vector3 vParam2)
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
			if (func_68(vParam2, 1) == 5)
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

Vector3 func_54(vector3 vParam0)
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

int func_55(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_70(*uParam0, 0f, 0f, 0f))
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

int func_56(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_71(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_57(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

struct<4> func_58(int iParam0)
{
	iVar4 = get_random_int_in_range(0, 8);
	iVar5 = 0;
	while (iVar5 < 8)
	{
		if (iParam0[iVar4] != iLocal_26)
		{
			Var0 = { *(*iParam0)[iVar4] };
			(*iParam0)[iVar4] = iLocal_26;
		}
		else
		{
			iVar4++;
			if (iVar4 >= 8)
			{
				iVar4 = 0;
			}
			iVar5++;
		}
	}
	return Var0;
}

float func_59(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_60(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

int func_61(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_72(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

int func_62(int iParam0)
{
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= get_wanted_level_threshold(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

float func_63(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_67(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_68(vector3 vParam0, int iParam3)
{
	iVar0 = func_17();
	if (func_42(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_73(vParam0, iParam3);
}

int func_69(vector3 vParam0)
{
	return func_74(_get_map_zone_at_coords(vParam0, 10));
}

bool func_70(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_75(iParam0, 0, 1);
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
			func_76(iParam0, 0);
			bVar0 = true;
		}
		func_77(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<7> func_72(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_73(vector3 vParam0, bool bParam3)
{
	iVar0 = func_78(vParam0);
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

int func_74(int iParam0)
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

void func_75(int iParam0, bool bParam1, bool bParam2)
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

void func_76(int iParam0, bool bParam1)
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

void func_77(int iParam0, int iParam1)
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

int func_78(vector3 vParam0)
{
	iVar0 = func_79(vParam0, 0f, 0f, 0, 2);
	return func_79(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_79(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

