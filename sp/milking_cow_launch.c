void __EntryFunction__()
{
	vLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.7721f;
	vLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.2319f;
	vLocal_8 = { 0.7006f, 0.094f, 1.076f };
	vLocal_11 = { -49.5998f, 0f, -107.2854f };
	vLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	vLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	iLocal_20 = -50684386;
	iLocal_21 = -1937484496;
	iLocal_22 = -861474402;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	func_2(&Local_23, &uScriptParam_0);
	while (true)
	{
		if (func_3(&Local_23))
		{
			func_1();
		}
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	iVar0 = func_4(Local_23.f_1.f_2);
	func_5(iVar0, 0);
	func_6(&(Local_23.f_15), 1, 0, 1);
	func_7(647863662);
	func_8(&Local_23);
	func_9(Local_23.f_17);
	func_10();
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	terminate_this_thread();
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = { *uParam1 };
	func_11(uParam0, 0);
	func_12(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, &(uParam0->f_21), &(uParam0->f_24));
	if (func_13(&(uParam0->f_15), uParam0->f_21))
	{
		set_entity_as_mission_entity(uParam0->f_15, true, true);
		set_ped_can_leg_ik(uParam0->f_15, false);
		set_ped_leg_ik_mode(uParam0->f_15, 0);
	}
	iVar0 = func_4(uParam1->f_2);
	func_5(iVar0, uParam0->f_15);
}

bool func_3(var uParam0)
{
	iVar0 = func_4(uParam0->f_1.f_2);
	if (func_14(uParam0))
	{
		return true;
	}
	switch (uParam0->f_11)
	{
		case 0:
			func_15();
			func_11(uParam0, 1);
			break;
		case 1:
			if (func_16())
			{
				func_11(uParam0, 2);
			}
			break;
		case 2:
			if (!func_17(&(uParam0->f_15), uParam0->f_1.f_2 == 21))
			{
				return false;
			}
			if (!does_entity_belong_to_this_script(uParam0->f_15, true))
			{
				set_entity_as_mission_entity(uParam0->f_15, true, true);
			}
			vVar2 = { func_18(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, 0) };
			uParam0->f_14 = func_19(vVar2);
			freeze_entity_position(uParam0->f_14, true);
			set_entity_collision(uParam0->f_14, false, false);
			if (does_entity_exist(uParam0->f_14))
			{
				stop_anim_playback(uParam0->f_14, 0, false);
			}
			vVar2 = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			uParam0->f_13 = func_21(vVar2);
			func_22(647863662);
			if (does_entity_exist(uParam0->f_15))
			{
				func_11(uParam0, 3);
				func_23(uParam0->f_1.f_2);
				func_9(uParam0->f_16);
				if (!_does_volume_exist(uParam0->f_16))
				{
					uParam0->f_16 = _0x0eb78c2b156635b1(-1612834106, uParam0->f_1.f_3, 0f, 0f, 0f, 1.2f, 2.4f, 2f);
					_0x7c00cfc48a782dc0(uParam0->f_16, uParam0->f_15, 0f, 0.2f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			vVar2 = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			if (!_does_volume_exist(uParam0->f_17))
			{
				if (uParam0->f_1.f_2 == 21)
				{
					uParam0->f_17 = _0x0eb78c2b156635b1(-1612834106, vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 7.5f, 3.5f, 4f);
				}
				else
				{
					uParam0->f_17 = _0x0eb78c2b156635b1(-1612834106, vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 3.5f, 3.5f, 4f);
				}
				_0x5b23dff8e0948bb2(uParam0->f_17, 0);
				_0xbe551c2cc421185d(uParam0->f_17, 1);
			}
			uParam0->f_19 = _create_volume_sphere_with_custom_name(vVar2, 0f, 0f, 0f, 4f, 4f, 4f, "MilkAvoidVol");
			_0xb56d41a694e42e86(uParam0->f_19, 266209, 0, 0, -1, -1, 12);
			func_24(&(uParam0->f_18), vVar2, 0f, 0f, 0f, 2f, 2f, 2f, "MilkVignetteBlockVol");
			uParam0->f_20 = func_25(uParam0->f_18, "RestrictVignette", 1, 0, 2048, 0, -1082130432);
			func_5(iVar0, uParam0->f_15);
			break;
		case 3:
			if (Global_1899528->f_215)
			{
				return true;
			}
			if (!does_entity_exist(uParam0->f_15) || is_ped_injured(uParam0->f_15))
			{
				func_26(uParam0->f_1.f_2);
				func_5(iVar0, 0);
				func_11(uParam0, 5);
			}
			else
			{
				func_5(iVar0, uParam0->f_15);
				fVar1 = func_27(uParam0->f_15, uParam0->f_21, 0);
				if (fVar1 > 1.25f)
				{
					func_26(uParam0->f_1.f_2);
				}
				else
				{
					func_23(uParam0->f_1.f_2);
				}
			}
			if (func_28(uParam0->f_1.f_8))
			{
				func_8(uParam0);
				func_11(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (!func_28(uParam0->f_1.f_8))
			{
				func_11(uParam0, 2);
			}
			break;
	}
	return false;
}

int func_4(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_5(int iParam0, int iParam1)
{
	Global_1392915->f_121[iParam0]->f_13 = iParam1;
}

void func_6(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_7(int iParam0)
{
	if (!func_29(iParam0))
	{
		func_30(iParam0, 0, 0);
	}
	func_31(iParam0, 0, 1f, 0, 1, 0, 0, 0);
}

void func_8(var uParam0)
{
	if (_does_volume_exist(uParam0->f_18))
	{
		func_32(uParam0->f_18);
		func_9(uParam0->f_18);
		uParam0->f_20 = 0;
	}
	if (_does_volume_exist(uParam0->f_19))
	{
		_0x74c2b3dc0b294102(uParam0->f_19);
	}
	func_9(uParam0->f_16);
	func_9(uParam0->f_19);
	func_9(uParam0->f_17);
	func_9(uParam0->f_18);
}

void func_9(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_10()
{
	set_model_as_no_longer_needed(iLocal_20);
	set_model_as_no_longer_needed(iLocal_21);
	set_model_as_no_longer_needed(iLocal_22);
	remove_clip_set("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	_0x57a197ad83f66bbf("script_mar5_milkcow_cow");
	remove_anim_dict("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	_0x7d4e70a67a651c71(1);
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

void func_12(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7)
{
	vVar0 = { _get_object_offset_from_coords(vParam0, vParam3.z, vLocal_0) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false);
	*uParam6 = { vVar0 };
	*uParam7 = { vParam3 };
	uParam7->f_2 = (uParam7->f_2 + fLocal_3);
}

bool func_13(var uParam0, vector3 vParam1)
{
	func_33(&iVar1, vParam1, 0f, 0f, 0f, 3f, 3f, 3f);
	iVar0 = create_itemset(true);
	if (!is_itemset_valid(iVar0))
	{
		return false;
	}
	iVar2 = _0x886171a12f400b89(iVar1, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar3, iVar0));
		if ((does_entity_exist(iVar4) && !is_ped_injured(iVar4)) && get_entity_model(iVar4) == -50684386)
		{
			*uParam0 = iVar4;
			func_9(iVar1);
			_0x20a4bf0e09bee146(iVar0);
			destroy_itemset(iVar0);
			return true;
		}
		iVar3++;
	}
	func_9(iVar1);
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return false;
}

bool func_14(var uParam0)
{
	fVar0 = func_34(*uParam0);
	if (func_35() != -1)
	{
		return true;
	}
	if (!func_36(*uParam0))
	{
		return true;
	}
	if (Global_1899528->f_215)
	{
		return true;
	}
	if (func_37(uParam0->f_1.f_7, 4194304))
	{
		return true;
	}
	if (func_38(&Global_1935630, 8388608))
	{
		func_39(&(Local_23.f_15));
		return true;
	}
	if (!is_entity_dead(Global_35))
	{
		if (vdist2(get_entity_coords(Global_35, true, false), uParam0->f_1.f_3) > (fVar0 * fVar0))
		{
			func_39(&(Local_23.f_15));
			return true;
		}
	}
	return false;
}

void func_15()
{
	request_model(iLocal_20, false);
	request_model(iLocal_21, false);
	request_model(iLocal_22, false);
	request_clip_set("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	_0x2b6529c54d29037a("script_mar5_milkcow_cow");
	request_anim_dict("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	_0xed9582b3da8f02b4(1);
}

bool func_16()
{
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	if (!has_model_loaded(iLocal_20))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_21))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_22))
	{
		return false;
	}
	if (!has_anim_dict_loaded("CREATURES_MAMMAL@COW@NORMAL@IDLE"))
	{
		return false;
	}
	if (!has_clip_set_loaded("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
	{
		return false;
	}
	if (!_0x2c04d89a0fb4e244("script_mar5_milkcow_cow"))
	{
		return false;
	}
	return true;
}

bool func_17(var uParam0, bool bParam1)
{
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	if (bParam1)
	{
		func_40(21, &Var8, 1);
	}
	else
	{
		func_40(22, &Var8, 1);
	}
	func_12(Var8.f_5, 0f, 0f, Var8.f_8, &vVar0, &uVar3);
	if (!func_13(uParam0, vVar0))
	{
		*uParam0 = func_41(-50684386, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!does_entity_exist(*uParam0))
		{
			return false;
		}
		_set_ped_scale(*uParam0, 1f);
	}
	set_ped_can_leg_ik(*uParam0, false);
	set_ped_leg_ik_mode(*uParam0, 0);
	set_decision_maker(*uParam0, -1143637011);
	freeze_entity_position(*uParam0, true);
	set_blocking_of_non_temporary_events(*uParam0, true);
	if (!is_task_move_network_active(*uParam0))
	{
		Var18.f_6 = -1082130432;
		Var18.f_9 = -1082130432;
		Var18.f_30 = "Milking";
		Var18.f_1 = -455129387;
		Var18 = 325037696;
		task_move_network_advanced_by_name_with_init_params(*uParam0, "script_mar5_milkcow_cow", &Var18, Var8.f_5, 0f, 0f, Var8.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}
	vVar0 = { func_18(Var8.f_5, 0f, 0f, Var8.f_8, 0) };
	iVar7 = func_19(vVar0);
	if (does_entity_exist(iVar7))
	{
		if (_0x0b7cb1300cbfe19c(iVar7, 1))
		{
			stop_anim_playback(iVar7, 0, false);
		}
		freeze_entity_position(iVar7, true);
	}
	vVar0 = { func_20(Var8.f_5, 0f, 0f, Var8.f_8) };
	iVar6 = func_21(vVar0);
	if (does_entity_exist(iVar6))
	{
		freeze_entity_position(iVar6, true);
	}
	return true;
}

Vector3 func_18(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		vVar0 = { _get_object_offset_from_coords(vParam0, vParam3.z, vLocal_17 + Vector(0f, -0.2f, 0f)) };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(vParam0, vParam3.z, vLocal_17) };
	}
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false);
	return vVar0;
}

int func_19(vector3 vParam0)
{
	if (func_42(61))
	{
		iVar0 = func_43(vParam0, -861474402, 0.2f, 1);
	}
	else
	{
		iVar0 = func_43(vParam0, -861474402, 4f, 1);
	}
	if (!does_entity_exist(iVar0))
	{
		iVar0 = create_object(-861474402, vParam0, true, true, false, false, false);
	}
	set_entity_coords(iVar0, vParam0, true, false, true, true);
	freeze_entity_position(iVar0, true);
	return iVar0;
}

Vector3 func_20(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { _get_object_offset_from_coords(vParam0, vParam3.z, vLocal_14) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false);
	return vVar0;
}

int func_21(vector3 vParam0)
{
	iVar0 = func_43(vParam0, -1937484496, 4f, 1);
	if (!does_entity_exist(iVar0))
	{
		iVar0 = create_object(-1937484496, vParam0, true, true, false, false, false);
	}
	set_entity_coords(iVar0, vParam0, true, false, true, true);
	freeze_entity_position(iVar0, true);
	return iVar0;
}

void func_22(int iParam0)
{
	if (!func_29(iParam0))
	{
		func_30(iParam0, 0, 0);
	}
	func_31(iParam0, 0, 1f, 0, 0, 0, 0, 0);
}

void func_23(int iParam0)
{
	if (func_35() != -1)
	{
		return;
	}
	if (!func_44(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
}

void func_24(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

int func_25(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_45(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_26(int iParam0)
{
	if (func_35() != -1)
	{
		return;
	}
	if (!func_44(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

float func_27(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_28(int iParam0)
{
	iVar0 = func_46(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_29(int iParam0)
{
	if (func_47(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
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

void func_31(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_30(iParam0, 0, 0);
	if (func_29(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_48(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_49(iParam0, 1);
			}
			else
			{
				func_50(iParam0, 1);
			}
		}
		else
		{
			func_51(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_52())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_32(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_53(vVar0, 0);
}

void func_33(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_54());
	}
}

float func_34(int iParam0)
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

int func_35()
{
	return Global_1572887->f_12;
}

bool func_36(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_55(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_37(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_39(int* iParam0)
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

int func_40(int iParam0, var uParam1, int iParam2)
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

int func_41(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_56(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_42(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_28((*Global_1835011)[iParam0]->f_1);
}

int func_43(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	fVar2 = (fParam4 * 2f);
	func_57(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
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
				func_9(iVar0);
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
	func_9(iVar0);
	return 0;
}

bool func_44(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

int func_45(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_58(vParam0))
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
		if (func_59(vParam0))
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
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_60(iVar0, bParam8);
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_62(iParam0);
}

bool func_47(int iParam0)
{
	return iParam0 != 0;
}

void func_48(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_29(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_49(int iParam0, bool bParam1)
{
	if (func_29(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (func_29(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_51(int iParam0, bool bParam1)
{
	if (func_29(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_52()
{
	return true;
}

void func_53(vector3 vParam0, int iParam3)
{
	if (func_58(vParam0))
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
			if (func_63(vVar2, vParam0, 2f, 1))
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

char* func_54()
{
	return "unnamed";
}

int func_55(int iParam0)
{
	if (func_64(iParam0) != 4)
	{
		return -1;
	}
	return func_65(iParam0);
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_66(iParam1))
		{
			func_67(iParam0, 41788943);
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
			func_68(iParam0, 0, 1);
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
			func_69(iParam0, 0);
			bVar0 = true;
		}
		func_70(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_57(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_54());
	}
}

bool func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_59(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_60(int iParam0, bool bParam1)
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

bool func_61(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_62(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_71(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_63(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_64(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return func_73(func_72(iParam0));
}

int func_65(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_74(func_72(iParam0));
}

bool func_66(int iParam0)
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

void func_67(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_75(iParam0, iParam1))
		{
			if (func_76(iParam0, iParam1))
			{
				if (func_77(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_78(iParam0);
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

void func_68(int iParam0, int iParam1, bool bParam2)
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

void func_69(int iParam0, bool bParam1)
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

void func_70(int iParam0, int iParam1)
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

int func_71(int iParam0)
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

int func_72(int iParam0)
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

int func_73(int iParam0)
{
	return iParam0 & 31;
}

int func_74(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_75(int iParam0, int iParam1)
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

bool func_76(int iParam0, int iParam1)
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

bool func_77(int iParam0, int iParam1)
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
	if (!func_75(iParam0, iVar0))
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

void func_78(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

