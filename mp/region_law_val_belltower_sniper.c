void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_46 = 1830978939;
	vLocal_47 = { -230.9494f, 797.3469f, 134.418f };
	if (has_force_cleanup_occurred(514))
	{
		func_1();
		terminate_this_thread();
	}
	func_2();
	while (func_3(uScriptParam_0) && func_4())
	{
		func_5();
		wait(0);
	}
	func_1();
}

void func_1()
{
	if (func_6(iLocal_44, 0))
	{
		func_7(&iLocal_44);
	}
	if (_does_volume_exist(iLocal_45))
	{
		_delete_volume(iLocal_45);
	}
	_0x7ef2a2fe38d74456(func_8(7), 0);
}

void func_2()
{
	iLocal_45 = _create_volume_box(-230.0599f, 797.554f, 134.0912f, 0f, 0f, 29.97786f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_43 = 1;
	_0xed9582b3da8f02b4(1);
}

int func_3(var uParam0)
{
	return 0;
}

int func_4()
{
	if (iLocal_43 >= 7)
	{
		return 0;
	}
	fVar0 = func_9(Global_34, vLocal_47, 1);
	if (fVar0 > 100f)
	{
		return 0;
	}
	if (func_10(&uLocal_50) > 120f)
	{
		return 0;
	}
	return 1;
}

void func_5()
{
	switch (iLocal_43)
	{
		case 1:
			iLocal_43 = 2;
			break;
		case 2:
			request_model(iLocal_46, false);
			if (has_model_loaded(iLocal_46) && _0x5e420ff293ee5472())
			{
				iLocal_43 = 4;
			}
			break;
		case 4:
			func_11();
			func_12(&uLocal_50);
			iLocal_43 = 5;
			break;
		case 5:
			func_13(iLocal_44, -416594956);
			if (!func_6(iLocal_44, 0))
			{
				iLocal_43 = 6;
			}
			break;
		case 6:
			iLocal_43 = 7;
			break;
	}
}

bool func_6(int iParam0, int iParam1)
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
	if (func_14(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int* iParam0)
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

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

float func_9(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_10(var uParam0)
{
	if (!func_15(uParam0))
	{
		return 0f;
	}
	if (func_16(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_17() - uParam0->f_1);
}

void func_11()
{
	iLocal_44 = func_18(iLocal_46, vLocal_47, 101.6932f, 1, 1, 0, 1, 1, 1, 0, 0);
	_give_weapon_to_ped_2(iLocal_44, 1402226560, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	_0xfc3db99c8144cd81(iLocal_44, iLocal_45, 0, 0, 0);
	set_ped_config_flag(iLocal_44, 263, true);
	set_ped_can_ragdoll(iLocal_44, false);
	iVar0 = 160;
	set_entity_max_health(iLocal_44, iVar0);
	_set_entity_health(iLocal_44, iVar0, 0);
	func_19(iLocal_44);
}

void func_12(var uParam0)
{
	func_20(uParam0, 0f);
}

void func_13(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		stop_gameplay_hint(false);
		return;
	}
	else
	{
		if (is_control_pressed(2, iParam1))
		{
			set_gameplay_entity_hint(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (is_control_just_released(2, iParam1))
		{
			stop_gameplay_hint(false);
		}
	}
}

bool func_14(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_15(var uParam0)
{
	return func_21(*uParam0, 1);
}

bool func_16(var uParam0)
{
	return func_21(*uParam0, 2);
}

float func_17()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_18(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_22(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_19(int iParam0)
{
	if (!func_6(iParam0, 0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, false);
	}
	func_23(iParam0);
}

void func_20(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_17() - fParam1);
	func_24(uParam0, 1);
	func_25(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_26(iParam0, 0, 1);
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
			func_27(iParam0, 0);
			bVar0 = true;
		}
		func_28(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_23(int iParam0)
{
	_0x819add5ef1742f47(iParam0, 2);
	_0x819add5ef1742f47(iParam0, 1);
	set_ped_config_flag(iParam0, 188, true);
	_0xbd75500141e4725c(iParam0, 298468673);
	set_ped_combat_attributes(iParam0, 39, true);
	_0x9de63896b176ea94(iParam0, 0);
	set_ped_drops_weapons_when_dead(iParam0, false);
	_give_weapon_to_ped_2(iParam0, -1101297303, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	_give_weapon_to_ped_2(iParam0, -1212426201, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_26(int iParam0, bool bParam1, bool bParam2)
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

void func_27(int iParam0, bool bParam1)
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

void func_28(int iParam0, int iParam1)
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

