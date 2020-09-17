void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	bLocal_69 = true;
	iLocal_43 = iScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1();
		terminate_this_thread();
	}
	func_2();
	while (func_3(iLocal_43) && iLocal_44 != 7)
	{
		func_4();
		wait(0);
	}
	func_1();
}

void func_1()
{
	_0x29cd4896ecb66c12();
	set_police_radar_blips(false);
	enable_dispatch_service(8, false);
	_delete_volume(iLocal_58);
	iVar0 = 0;
	while (iVar0 < iLocal_48)
	{
		if (func_5(&(iLocal_48[iVar0]), 0))
		{
			func_6(iLocal_48[iVar0], 1, 0, 1);
		}
		iVar0++;
	}
	if (does_group_exist(iLocal_47))
	{
		remove_group(iLocal_47);
	}
}

void func_2()
{
	iLocal_44 = 1;
	_0xed9582b3da8f02b4(9);
	switch (iLocal_43)
	{
		case 81:
			vLocal_62 = { -297.8979f, 783.4763f, 117.3506f };
			iVar0 = _create_volume_cylinder_with_custom_name(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = _create_volume_box_with_custom_name(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_58 = _create_volume_aggregate_with_custom_name("m_volTownMob Valentine Agg");
			_0x6e0d3c3f828da773(iLocal_58, iVar0);
			_0x6e0d3c3f828da773(iLocal_58, iVar1);
			break;
		case 26:
			vLocal_62 = { -1791.522f, -395.2781f, 159.2376f };
			iLocal_58 = _create_volume_cylinder_with_custom_name(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 111:
			vLocal_62 = { 1323.98f, -1305.5f, 75.625f };
			iLocal_58 = _create_volume_cylinder_with_custom_name(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_58 = func_7(iLocal_43);
			vLocal_62 = { func_8(iLocal_43, 1) };
			break;
	}
	iVar2 = 0;
	func_9(&iVar2, 0);
	func_9(&iVar2, 29);
	_0x3caad93fa5b9579a(iLocal_58, 2, iVar2);
}

bool func_3(int iParam0)
{
	return false;
}

void func_4()
{
	switch (iLocal_44)
	{
		case 1:
			if (func_10(Global_34, vLocal_62, 1) < 100f)
			{
				iLocal_46 = func_11(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_43)
				{
					case 81:
						iLocal_45 = 1671223501;
						break;
					case 26:
						iLocal_45 = -264790543;
						break;
					case 111:
						iLocal_45 = 190553496;
						break;
					default:
						iLocal_45 = 1671223501;
						break;
				}
				iLocal_44 = 2;
			}
			else
			{
				iLocal_44 = 6;
			}
			break;
		case 2:
			request_model(iLocal_46, false);
			request_model(iLocal_45, false);
			if ((has_model_loaded(iLocal_46) && has_model_loaded(iLocal_45)) && _0x5e420ff293ee5472())
			{
				iLocal_44 = 4;
			}
			break;
		case 4:
			if (func_12())
			{
				func_13();
				func_14(&uLocal_59);
				iLocal_44 = 5;
			}
			else
			{
				iLocal_44 = 6;
			}
			break;
		case 5:
			if (bLocal_69)
			{
				_0x7ef2a2fe38d74456(func_15(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_48)
			{
				if (func_5(&(iLocal_48[iVar3]), 0))
				{
					iVar2++;
					fVar1 = func_10(&(iLocal_48[iVar3]), Global_35, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_69 = false;
				_0x7ef2a2fe38d74456(func_15(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_48)
				{
					if (func_5(&(iLocal_48[iVar3]), 0))
					{
						func_16(&(iLocal_48[iVar3]));
					}
					iVar3++;
				}
				iLocal_44 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_48)
			{
				if (func_5(&(iLocal_48[iVar4]), 0))
				{
					func_6(iLocal_48[iVar4], 1, 1, 1);
				}
				iVar4++;
			}
			_0x7ef2a2fe38d74456(func_15(1), 0);
			iLocal_44 = 7;
			break;
	}
}

bool func_5(int iParam0, int iParam1)
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
	if (func_17(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
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

int func_7(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

Vector3 func_8(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_18(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
		if (bParam1)
		{
			if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_9(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

float func_10(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_19(iParam0))
	{
		return 0;
	}
	if (func_20(iParam0) == -1)
	{
		return 0;
	}
	return get_random_model_from_population_set(func_20(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_12()
{
	if (!func_21(iLocal_43, &vLocal_65, iLocal_45))
	{
		return false;
	}
	fVar0 = vdist2(Global_35, vLocal_65);
	if (fVar0 > 10000f)
	{
		return false;
	}
	if (fVar0 < 1225f)
	{
		return false;
	}
	if (is_sphere_visible(vLocal_65, 2f) || !would_entity_be_occluded(iLocal_45, vLocal_65, true))
	{
		return false;
	}
	iLocal_68 = _create_volume_cylinder(vLocal_65, 0f, 0f, 0f, 3f, 3f, 3f);
	func_22(iLocal_68, 0, 0, 0, 0, 0);
	func_23(iLocal_68, 0);
	return true;
}

void func_13()
{
	if (!does_group_exist(iLocal_47))
	{
		iLocal_47 = create_group(1);
		set_group_formation_spacing(iLocal_47, 5f, 1f, 2f);
		set_group_formation(iLocal_47, 8);
		_0x89e59dbd15e21177(iLocal_47, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_48)
	{
		vVar1 = { func_24(vLocal_65, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_48[iVar0] = func_25(iLocal_45, vVar1, get_random_float_in_range(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			set_ped_combat_attributes(&(iLocal_48[iVar0]), 1, false);
			set_combat_float(&(iLocal_48[iVar0]), 48, 8f);
			if (_unlock_is_unlocked(1845102363))
			{
				_give_weapon_to_ped_2(&(iLocal_48[iVar0]), 1845102363, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				_give_weapon_to_ped_2(&(iLocal_48[iVar0]), -183018591, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_48[iVar0] = func_25(iLocal_46, vVar1, get_random_float_in_range(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			if (func_5(&(iLocal_48[iVar0]), 0))
			{
				if ((iVar0 % 4) == 0 && (func_27(func_26()) >= 22 || func_27(func_26()) <= 4))
				{
					_give_weapon_to_ped_2(&(iLocal_48[iVar0]), 379542007, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					_give_weapon_to_ped_2(&(iLocal_48[iVar0]), 1742487518, 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					_give_weapon_to_ped_2(&(iLocal_48[iVar0]), -183018591, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (func_5(&(iLocal_48[iVar0]), 0))
		{
			_0xfc3db99c8144cd81(&(iLocal_48[iVar0]), iLocal_58, 0, 0, 0);
			set_ped_combat_attributes(&(iLocal_48[iVar0]), 0, true);
			set_ped_combat_attributes(&(iLocal_48[iVar0]), 58, true);
			_0x815c0074a1bc0d93(&(iLocal_48[iVar0]), 0);
			set_ped_relationship_group_hash(&(iLocal_48[iVar0]), 1622308690);
			register_target(&(iLocal_48[iVar0]), Global_34, 1);
			set_ped_accuracy(&(iLocal_48[iVar0]), 60);
			set_ped_config_flag(&(iLocal_48[iVar0]), 279, true);
			if (iVar0 == 0)
			{
				set_ped_as_group_leader(&(iLocal_48[iVar0]), iLocal_47, false);
				set_ped_config_flag(&(iLocal_48[iVar0]), 155, true);
				_0xcbd9ec60495c728c(iLocal_47);
				_0x0f1cd8ca9e65d5f6(iLocal_47, -1327202964);
			}
			else
			{
				set_ped_as_group_member(&(iLocal_48[iVar0]), iLocal_47);
				set_ped_config_flag(&(iLocal_48[iVar0]), 156, true);
				set_ped_config_flag(&(iLocal_48[iVar0]), 152, true);
			}
			iVar4 = _blip_add_for_entity(831283580, &(iLocal_48[iVar0]));
			_blip_set_modifier(iVar4, 2096805056);
			_blip_set_modifier(iVar4, 1086257954);
			_0x1e017404784aa6a3(&(iLocal_48[iVar0]), 1005019729);
			set_ped_combat_movement(&(iLocal_48[iVar0]), 2);
			set_ped_combat_range(&(iLocal_48[iVar0]), 1);
			_0x9238a3d970bbb0a9(&(iLocal_48[iVar0]), 2018638702);
			iVar5 = 0;
			func_28(&iVar5, 15);
			func_28(&iVar5, 16);
			_0xdeb369f6ad168c58(&(iLocal_48[iVar0]), iVar5);
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	func_29(uParam0, 0f);
}

int func_15(int iParam0)
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

void func_16(int iParam0)
{
	if (!func_5(Global_34, 0))
	{
		return;
	}
	if (!func_5(iParam0, 0))
	{
		return;
	}
	task_smart_flee_ped(iParam0, Global_34, 500f, -1, 0, 1077936128, 0);
	func_30(iParam0);
	func_6(&iParam0, 1, 1, 1);
}

bool func_17(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_18(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_19(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_20(int iParam0)
{
	if (!func_19(iParam0))
	{
		return -1;
	}
	iVar0 = func_32(func_31());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1900719[iParam0];
	}
	return Global_1900702[iParam0];
}

bool func_21(int iParam0, var uParam1, int iParam2)
{
	bVar13 = false;
	switch (iParam0)
	{
		case 81:
			*vVar0[0] = { -344.5539f, 730.0873f, 116.3921f };
			*vVar0[1] = { -281.1094f, 847.3516f, 118.6537f };
			*vVar0[2] = { -361.3619f, 809.3384f, 114.9999f };
			*vVar0[3] = { -236.5398f, 702.7105f, 112.5291f };
			break;
		case 26:
			*vVar0[0] = { -1761.082f, -398.9954f, 154.8396f };
			*vVar0[1] = { -1795.016f, -366.7957f, 160.3465f };
			*vVar0[2] = { -1834.661f, -433.5942f, 158.4428f };
			*vVar0[3] = { -1796.619f, -448.2619f, 156.146f };
			break;
		case 111:
			*vVar0[0] = { 1308.71f, -1258.847f, 76.3559f };
			*vVar0[1] = { 1317.515f, -1303.441f, 75.2424f };
			*vVar0[2] = { 1346.54f, -1354.946f, 77.4856f };
			*vVar0[3] = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { func_8(iParam0, 1) };
			return false;
	}
	*uParam1 = { *vVar0[0] };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!is_sphere_visible(*vVar0[iVar15], 2f) && would_entity_be_occluded(iParam2, *vVar0[iVar15], true))
		{
			fVar16 = vdist2(Global_35, *vVar0[iVar15]);
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { *vVar0[iVar15] };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1225f)
			{
				*uParam1 = { *vVar0[iVar15] };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return true;
}

void func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_23(int iParam0, int iParam1)
{
	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

Vector3 func_24(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_33(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_34(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_26()
{
	return &Global_1902818;
}

int func_27(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_28(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

void func_29(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_35() - fParam1);
	func_36(uParam0, 1);
	func_37(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_30(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_38(&iVar0);
}

int func_31()
{
	return Global_1893587->f_2;
}

int func_32(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_21;
}

Vector3 func_33(vector3 vParam0, float fParam3)
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

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_39(iParam0, 0, 1);
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
			func_40(iParam0, 0);
			bVar0 = true;
		}
		func_41(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_35()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_39(int iParam0, bool bParam1, bool bParam2)
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

void func_40(int iParam0, bool bParam1)
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

void func_41(int iParam0, int iParam1)
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

