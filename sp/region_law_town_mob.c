void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_67 = true;
	iLocal_41 = iScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1();
		terminate_this_thread();
	}
	func_2();
	while (func_3(iLocal_41) && iLocal_42 != 7)
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
	_delete_volume(iLocal_56);
	bVar0 = func_5(player_id(), 1, 0, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_46)
	{
		if (func_6(&(iLocal_46[iVar1]), 0))
		{
			if (!bVar0)
			{
				if (iVar1 == 0)
				{
					set_ped_config_flag(&(iLocal_46[iVar1]), 155, false);
				}
				else
				{
					set_ped_config_flag(&(iLocal_46[iVar1]), 156, false);
				}
				set_ped_relationship_group_hash(&(iLocal_46[iVar1]), -1976316465);
			}
			func_7(iLocal_46[iVar1], 1, 0, 1);
		}
		iVar1++;
	}
	if (does_group_exist(iLocal_45))
	{
		remove_group(iLocal_45);
	}
}

void func_2()
{
	iLocal_42 = 1;
	_0xed9582b3da8f02b4(9);
	switch (iLocal_41)
	{
		case 76:
			vLocal_60 = { -297.8979f, 783.4763f, 117.3506f };
			iVar0 = _create_volume_cylinder_with_custom_name(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = _create_volume_box_with_custom_name(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_56 = _create_volume_aggregate_with_custom_name("m_volTownMob Valentine Agg");
			_0x6e0d3c3f828da773(iLocal_56, iVar0);
			_0x6e0d3c3f828da773(iLocal_56, iVar1);
			break;
		case 26:
			vLocal_60 = { -1791.522f, -395.2781f, 159.2376f };
			iLocal_56 = _create_volume_cylinder_with_custom_name(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 105:
			vLocal_60 = { 1323.98f, -1305.5f, 75.625f };
			iLocal_56 = _create_volume_cylinder_with_custom_name(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_56 = func_8(iLocal_41);
			vLocal_60 = { func_9(iLocal_41, 1) };
			break;
	}
	iVar2 = 0;
	func_10(&iVar2, 0);
	func_10(&iVar2, 29);
	_0x3caad93fa5b9579a(iLocal_56, 2, iVar2);
}

bool func_3(int iParam0)
{
	if (func_11() != -1)
	{
		return false;
	}
	if (!func_12(iParam0, 8))
	{
		return false;
	}
	if (!func_13(Global_35, func_8(iParam0), 1, 0))
	{
		return false;
	}
	if (!func_5(player_id(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

void func_4()
{
	switch (iLocal_42)
	{
		case 1:
			if (func_14(Global_35, vLocal_60, 1) < 100f)
			{
				iLocal_44 = func_15(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_41)
				{
					case 76:
						iLocal_43 = 1671223501;
						break;
					case 26:
						iLocal_43 = -264790543;
						break;
					case 105:
						iLocal_43 = 190553496;
						break;
					default:
						iLocal_43 = 1671223501;
						break;
				}
				iLocal_42 = 2;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 2:
			request_model(iLocal_44, false);
			request_model(iLocal_43, false);
			if ((has_model_loaded(iLocal_44) && has_model_loaded(iLocal_43)) && _0x5e420ff293ee5472())
			{
				iLocal_42 = 4;
			}
			break;
		case 4:
			if (func_16())
			{
				func_17();
				func_18(&uLocal_57);
				iLocal_42 = 5;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 5:
			if (bLocal_67)
			{
				_0x7ef2a2fe38d74456(func_19(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_46)
			{
				if (func_6(&(iLocal_46[iVar3]), 0))
				{
					iVar2++;
					fVar1 = func_14(&(iLocal_46[iVar3]), Global_36, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_67 = false;
				_0x7ef2a2fe38d74456(func_19(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_46)
				{
					if (func_6(&(iLocal_46[iVar3]), 0))
					{
						func_20(&(iLocal_46[iVar3]));
					}
					iVar3++;
				}
				iLocal_42 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_46)
			{
				if (func_6(&(iLocal_46[iVar4]), 0))
				{
					func_7(iLocal_46[iVar4], 1, 1, 1);
				}
				iVar4++;
			}
			_0x7ef2a2fe38d74456(func_19(1), 0);
			iLocal_42 = 7;
			break;
	}
}

int func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_21(bParam1, bParam2, bParam3);
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
	if (func_22(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_22(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_22(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_8(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

Vector3 func_9(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_23(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
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

void func_10(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

int func_11()
{
	return Global_1572887->f_12;
}

bool func_12(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_13(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_24(iParam0))
	{
		return 0;
	}
	if (func_25(iParam0) == -1)
	{
		return 0;
	}
	return get_random_model_from_population_set(func_25(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_16()
{
	if (!func_26(iLocal_41, &vLocal_63, iLocal_43))
	{
		return false;
	}
	fVar0 = vdist2(Global_36, vLocal_63);
	if (fVar0 > 10000f)
	{
		return false;
	}
	if (fVar0 < 1225f)
	{
		return false;
	}
	if (is_sphere_visible(vLocal_63, 2f) || !would_entity_be_occluded(iLocal_43, vLocal_63, true))
	{
		return false;
	}
	iLocal_66 = _create_volume_cylinder(vLocal_63, 0f, 0f, 0f, 3f, 3f, 3f);
	func_27(iLocal_66, 0, 0, 0, 0, 0);
	func_28(iLocal_66, 0);
	return true;
}

void func_17()
{
	if (!does_group_exist(iLocal_45))
	{
		iLocal_45 = create_group(1);
		set_group_formation_spacing(iLocal_45, 5f, 1f, 2f);
		set_group_formation(iLocal_45, 8);
		_0x89e59dbd15e21177(iLocal_45, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		vVar1 = { func_29(vLocal_63, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_46[iVar0] = func_30(iLocal_43, vVar1, get_random_float_in_range(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_ped_combat_attributes(&(iLocal_46[iVar0]), 1, false);
			set_combat_float(&(iLocal_46[iVar0]), 48, 8f);
			if (_unlock_is_unlocked(1845102363))
			{
				_give_weapon_to_ped_2(&(iLocal_46[iVar0]), 1845102363, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				_give_weapon_to_ped_2(&(iLocal_46[iVar0]), -183018591, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_46[iVar0] = func_30(iLocal_44, vVar1, get_random_float_in_range(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (func_6(&(iLocal_46[iVar0]), 0))
			{
				if ((iVar0 % 4) == 0 && (func_32(func_31()) >= 22 || func_32(func_31()) <= 4))
				{
					_give_weapon_to_ped_2(&(iLocal_46[iVar0]), 379542007, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					_give_weapon_to_ped_2(&(iLocal_46[iVar0]), 1742487518, 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					_give_weapon_to_ped_2(&(iLocal_46[iVar0]), -183018591, 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (func_6(&(iLocal_46[iVar0]), 0))
		{
			_0xfc3db99c8144cd81(&(iLocal_46[iVar0]), iLocal_56, 0, 0, 0);
			set_ped_combat_attributes(&(iLocal_46[iVar0]), 0, true);
			set_ped_combat_attributes(&(iLocal_46[iVar0]), 58, true);
			_0x815c0074a1bc0d93(&(iLocal_46[iVar0]), 0);
			set_ped_relationship_group_hash(&(iLocal_46[iVar0]), 1622308690);
			register_target(&(iLocal_46[iVar0]), Global_35, 1);
			set_ped_accuracy(&(iLocal_46[iVar0]), 60);
			set_ped_config_flag(&(iLocal_46[iVar0]), 279, true);
			if (iVar0 == 0)
			{
				set_ped_as_group_leader(&(iLocal_46[iVar0]), iLocal_45, false);
				set_ped_config_flag(&(iLocal_46[iVar0]), 155, true);
				_0xcbd9ec60495c728c(iLocal_45);
				_0x0f1cd8ca9e65d5f6(iLocal_45, -1327202964);
			}
			else
			{
				set_ped_as_group_member(&(iLocal_46[iVar0]), iLocal_45);
				set_ped_config_flag(&(iLocal_46[iVar0]), 156, true);
				set_ped_config_flag(&(iLocal_46[iVar0]), 152, true);
			}
			iVar4 = _blip_add_for_entity(831283580, &(iLocal_46[iVar0]));
			_blip_set_modifier(iVar4, 2096805056);
			_blip_set_modifier(iVar4, 1086257954);
			_0x1e017404784aa6a3(&(iLocal_46[iVar0]), 1005019729);
			set_ped_combat_movement(&(iLocal_46[iVar0]), 2);
			set_ped_combat_range(&(iLocal_46[iVar0]), 1);
			_0x9238a3d970bbb0a9(&(iLocal_46[iVar0]), 2018638702);
			iVar5 = 0;
			func_33(&iVar5, 15);
			func_33(&iVar5, 16);
			_0xdeb369f6ad168c58(&(iLocal_46[iVar0]), iVar5);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	func_34(uParam0, 0f);
}

int func_19(int iParam0)
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

void func_20(int iParam0)
{
	if (!func_6(Global_35, 0))
	{
		return;
	}
	if (!func_6(iParam0, 0))
	{
		return;
	}
	task_smart_flee_ped(iParam0, Global_35, 500f, -1, 0, 1077936128, 0);
	func_35(iParam0);
	func_7(&iParam0, 1, 1, 1);
}

int func_21(bool bParam0, bool bParam1, bool bParam2)
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

bool func_22(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_23(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_24(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_25(int iParam0)
{
	if (!func_24(iParam0))
	{
		return -1;
	}
	iVar0 = func_37(func_36());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

bool func_26(int iParam0, var uParam1, int iParam2)
{
	bVar13 = false;
	switch (iParam0)
	{
		case 76:
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
		case 105:
			*vVar0[0] = { 1308.71f, -1258.847f, 76.3559f };
			*vVar0[1] = { 1317.515f, -1303.441f, 75.2424f };
			*vVar0[2] = { 1346.54f, -1354.946f, 77.4856f };
			*vVar0[3] = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { func_9(iParam0, 1) };
			return false;
	}
	*uParam1 = { *vVar0[0] };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!is_sphere_visible(*vVar0[iVar15], 2f) && would_entity_be_occluded(iParam2, *vVar0[iVar15], true))
		{
			fVar16 = vdist2(Global_36, *vVar0[iVar15]);
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

void func_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_28(int iParam0, int iParam1)
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

Vector3 func_29(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_38(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_30(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_39(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_31()
{
	return &Global_1899515;
}

int func_32(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_33(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_40() - fParam1);
	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_43(&iVar0);
}

int func_36()
{
	return Global_1894899->f_2;
}

int func_37(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

Vector3 func_38(vector3 vParam0, float fParam3)
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

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_44(iParam1))
		{
			func_45(iParam0, 41788943);
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
			func_46(iParam0, 0, 1);
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
			func_47(iParam0, 0);
			bVar0 = true;
		}
		func_48(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_40()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_43(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_44(int iParam0)
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

void func_45(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_49(iParam0, iParam1))
		{
			if (func_50(iParam0, iParam1))
			{
				if (func_51(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_52(iParam0);
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

void func_46(int iParam0, int iParam1, bool bParam2)
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

void func_47(int iParam0, bool bParam1)
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

void func_48(int iParam0, int iParam1)
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

bool func_49(int iParam0, int iParam1)
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

bool func_50(int iParam0, int iParam1)
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

bool func_51(int iParam0, int iParam1)
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
	if (!func_49(iParam0, iVar0))
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

void func_52(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

