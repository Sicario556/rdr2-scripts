void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_25 = 7f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 100f;
	fLocal_29 = 100f;
	fLocal_30 = 0f;
	fLocal_31 = 200f;
	vLocal_42 = { 2590.4f, 151.7f, 56.8f };
	func_1();
	func_2();
	func_3();
	func_4(&uLocal_14, 1);
	_0x187d65f3aec5d679(-402695257, "Roanoke/ROA_Trapper_1");
	if (_0x800df3fc913355f3(_0x112ddf56300bc6e5(-402695257)))
	{
		_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-402695257));
	}
	bVar0 = true;
	while (bVar0)
	{
		func_5(&uLocal_14);
		func_6();
		func_7();
		wait(0);
	}
	func_8();
	terminate_this_thread();
}

void func_1()
{
	if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		func_8();
		terminate_this_thread();
	}
}

void func_2()
{
	vVar0 = { fLocal_25, fLocal_26, fLocal_27 };
	vVar3 = { fLocal_28, fLocal_29, fLocal_30 };
	_0xf2cca7b68cfab2b9(904876610, 2638.8f, 1972.1f, 185.1f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_32 = _create_volume_cylinder_with_custom_name(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_9(iLocal_32, 1);
	iLocal_33 = _create_volume_cylinder_with_custom_name(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	func_10(iLocal_33, 1);
	if (func_11() == 6)
	{
		iLocal_34 = _create_volume_aggregate_with_custom_name("m_volBeaverHollow_Restriction");
		_0xbce668aaf83608be(iLocal_34, 2361.296f, 1344.457f, 123.1171f, 0f, 0f, 22f, 38f, 52f, 35f);
		_0xbce668aaf83608be(iLocal_34, 2326.496f, 1326.393f, 125.5935f, 0f, 0f, 0f, 9f, 7f, 35f);
		func_12(iLocal_34, 0, 0, 1);
	}
	else
	{
		iLocal_34 = _create_volume_cylinder_with_custom_name(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
		func_10(iLocal_34, 1);
	}
	iLocal_35 = _create_volume_cylinder_with_custom_name(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	func_10(iLocal_35, 1);
	iLocal_36 = _create_volume_cylinder_with_custom_name(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	func_9(iLocal_36, 1);
	iLocal_37 = _create_volume_cylinder_with_custom_name(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	func_13(iLocal_37, 0, 0, 1);
	iLocal_38 = _create_volume_cylinder_with_custom_name(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	func_13(iLocal_38, 0, 0, 1);
	iLocal_39 = _create_volume_cylinder_with_custom_name(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	func_13(iLocal_39, 0, 0, 1);
	iLocal_40 = _create_volume_cylinder_with_custom_name(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	func_13(iLocal_40, 0, 0, 1);
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_14(iParam1);
	uParam0->f_5 = { func_15(iParam1) };
}

void func_5(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			fVar0 = func_16(Global_35, uParam0->f_5, 1);
			if (fVar0 > pow(400f, 2f) || fVar0 < pow(100f, 2f))
			{
				return;
			}
			if (func_17(uParam0->f_1))
			{
				func_18(uParam0, 1);
			}
			else
			{
				func_18(uParam0, 6);
			}
			break;
		case 1:
			set_scenario_group_enabled("Special_Ambient_Horse", true);
			request_model(func_19(uParam0->f_1), false);
			_0xed9582b3da8f02b4(1);
			uParam0->f_9 = 1;
			func_18(uParam0, 2);
			break;
		case 2:
			if (!has_model_loaded(func_19(uParam0->f_1)))
			{
				return;
			}
			if (!_0x5e420ff293ee5472())
			{
				return;
			}
			fVar0 = func_16(Global_35, uParam0->f_5, 1);
			if (fVar0 < pow(100f, 2f))
			{
				func_20(uParam0);
				func_18(uParam0, 6);
				return;
			}
			if (!does_entity_exist(uParam0->f_3))
			{
				uParam0->f_3 = func_21(func_19(uParam0->f_1), uParam0->f_5, 0, 0, 1, uParam0->f_2, 0, 0, 0, 0, 1, 0, 0);
				return;
			}
			set_entity_visible(uParam0->f_3, false);
			func_22(uParam0);
			func_18(uParam0, 3);
		case 3:
			func_23(uParam0->f_3);
			_update_ped_variation(uParam0->f_3, false, true, true, true, false);
			set_entity_as_mission_entity(uParam0->f_3, true, false);
			_0xaeb97d84cdf3c00b(uParam0->f_3, 1);
			task_animal_unalerted(uParam0->f_3, -1, uParam0->f_4, 0, 0);
			set_animal_tuning_float_param(uParam0->f_3, 44, 5f);
			set_animal_tuning_float_param(uParam0->f_3, 45, 40f);
			set_animal_tuning_float_param(uParam0->f_3, 35, 5f);
			set_animal_tuning_float_param(uParam0->f_3, 36, 20f);
			set_entity_visible(uParam0->f_3, true);
			_0xa91e6cf94404e8c9(uParam0->f_3);
			set_model_as_no_longer_needed(func_19(uParam0->f_1));
			func_18(uParam0, 4);
			break;
		case 4:
			if (func_24(uParam0))
			{
				func_18(uParam0, 5);
			}
			break;
		case 5:
			func_25(uParam0->f_1);
			uParam0->f_8 = 1;
			func_20(uParam0);
			func_18(uParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_6()
{
	if (func_26() != -1)
	{
		return;
	}
	if ((!func_27(56) || func_27(57)) || func_28(57))
	{
		if (does_entity_exist(iLocal_45))
		{
			func_29();
		}
		return;
	}
	switch (iLocal_24)
	{
		case 0:
			if (func_30(Global_35, vLocal_42, fLocal_31, 0, 1))
			{
				request_model(-283162583, false);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (has_model_loaded(-283162583))
			{
				iLocal_45 = create_vehicle(-283162583, vLocal_42, 22.22f, true, true, false, false);
				set_entity_invincible(iLocal_45, true);
				set_vehicle_is_considered_by_player(iLocal_45, false);
				set_vehicle_doors_locked(iLocal_45, 2);
				set_vehicle_on_ground_properly(iLocal_45, 0f);
				set_entity_proofs(iLocal_45, 6, true);
				iLocal_24 = 2;
			}
			break;
		case 2:
			_0xa19447d83294e29f(iLocal_45, &uVar0, &iVar1);
			if (iVar1 >= _0x5b1a26bb18e7d451(-283162583))
			{
				get_model_dimensions(-283162583, &vVar2, &vVar5);
				vVar8 = { vVar5 - vVar2 };
				vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
				iVar14 = 0;
				while (iVar14 < 6)
				{
					iVar15 = _get_ped_in_draft_seat(iLocal_45, iVar14);
					if (!is_entity_dead(iVar15))
					{
						set_ped_config_flag(iVar15, 301, true);
						set_ped_config_flag(iVar15, 253, true);
						set_entity_proofs(iVar15, 6, true);
						set_ped_can_be_targetted(iVar15, false);
						get_model_dimensions(get_entity_model(iVar15), &vVar2, &vVar5);
						vVar11 = { vVar5 - vVar2 };
						vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
					}
					iVar14++;
				}
				vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
				iLocal_41 = _create_volume_box(get_entity_coords(iLocal_45, true, false), get_entity_rotation(iLocal_45, 2), vVar8);
				_0x7c00cfc48a782dc0(iLocal_41, iLocal_45, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(iLocal_41, 7);
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (!func_30(Global_35, vLocal_42, (fLocal_31 * 1.5f), 0, 1))
			{
				func_29();
				iLocal_24 = 0;
			}
			break;
	}
}

void func_7()
{
	if ((get_frame_count() % 20) != 0)
	{
		return;
	}
	uVar0 = _0x112ddf56300bc6e5(774780778);
	uVar1 = _0x112ddf56300bc6e5(1302603725);
	if (!_0x800df3fc913355f3(uVar0) || !_0x800df3fc913355f3(uVar1))
	{
		return;
	}
	if (_0xeb98b38ca60742d7(uVar0) && _0xeb98b38ca60742d7(uVar1))
	{
		if (!func_31(2024769126))
		{
			if (!_is_position_inside_imap_streaming_extents(516817794, Global_36))
			{
				func_32(2024769126);
			}
		}
	}
	else if (func_31(2024769126))
	{
		if (!_is_position_inside_imap_streaming_extents(516817794, Global_36))
		{
			func_33(2024769126);
		}
	}
}

void func_8()
{
	func_20(&uLocal_14);
	func_29();
	_0xfb16f08f47b83b4c(904876610);
}

void func_9(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

int func_11()
{
	return Global_40.f_4283;
}

void func_12(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_34(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_34(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_14(int iParam0)
{
	iVar0 = 2;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
			if (func_35())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2681.173f, 1935.781f, 101.8587f;
		case 3:
			return -2828.721f, -422.1472f, 186.4498f;
		case 4:
			return 289.5062f, 2288.324f, 313.0248f;
		case 5:
			return -1940.045f, 1743.173f, 234.5481f;
		case 6:
			return -3916.118f, -3672.374f, 47.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_16(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_36(vVar0, vParam1);
}

bool func_17(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_27(15))
	{
		return false;
	}
	iVar0 = func_19(iParam0);
	if (func_37(iVar0))
	{
		if (!func_38())
		{
			return false;
		}
	}
	iVar1 = &Global_40.f_11945[iParam0];
	func_40(&iVar1, 0, 0, 0, func_39(iParam0), 0, 0, 0);
	if (!func_41(iVar1, 1))
	{
		return false;
	}
	if (func_42(iParam0))
	{
		return false;
	}
	return true;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1792770814;
		case 1:
			return 705691988;
		case 2:
			return 604357666;
		case 3:
			return -1523757120;
		case 4:
			return 1576849913;
		case 5:
			return -925223936;
		case 6:
			return 43825738;
		default:
			break;
	}
	return 0;
}

void func_20(var uParam0)
{
	if (does_entity_exist(uParam0->f_3))
	{
		if (uParam0->f_8)
		{
			set_ped_as_no_longer_needed(&(uParam0->f_3));
			uParam0->f_8 = 0;
		}
		else
		{
			delete_ped(&(uParam0->f_3));
		}
		uParam0->f_3 = 0;
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_delete_volume(uParam0->f_4);
	}
	if (uParam0->f_9)
	{
		set_scenario_group_enabled("Special_Ambient_Horse", false);
		_0x7d4e70a67a651c71(1);
		set_model_as_no_longer_needed(func_19(uParam0->f_1));
		uParam0->f_9 = 0;
	}
}

int func_21(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_43(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_22(var uParam0)
{
	fVar0 = func_44(uParam0->f_1);
	vVar1 = { fVar0, fVar0, fVar0 };
	uParam0->f_4 = _create_volume_sphere_with_custom_name(uParam0->f_5, func_45(), vVar1, "Special Ambient Horse Unalerted");
}

void func_23(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
}

bool func_24(var uParam0)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return false;
	}
	if (is_ped_dead_or_dying(uParam0->f_3, true))
	{
		return true;
	}
	if (_0x77525bbf433f2cd6(uParam0->f_3))
	{
		return true;
	}
	if (is_ped_responding_to_event(uParam0->f_3, 1428655956))
	{
		return true;
	}
	if (is_ped_responding_to_event(uParam0->f_3, 1379175797))
	{
		return true;
	}
	if (is_ped_responding_to_event(uParam0->f_3, 1312307149))
	{
		return true;
	}
	if (func_42(uParam0->f_1))
	{
		return true;
	}
	return false;
}

void func_25(int iParam0)
{
	Global_40.f_11945[iParam0] = func_46();
}

int func_26()
{
	return Global_1572887->f_12;
}

bool func_27(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_47((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_28(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_48((*Global_1835011)[iParam0]->f_1);
}

void func_29()
{
	if (does_entity_exist(iLocal_45))
	{
		delete_vehicle(&iLocal_45);
	}
	if (_does_volume_exist(iLocal_41))
	{
		_0x2c87c3e1c7b96ee2(iLocal_41);
		_delete_volume(iLocal_41);
	}
}

bool func_30(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_36(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_31(int iParam0)
{
	iVar0 = func_49(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_32(int iParam0)
{
	iVar0 = func_49(iParam0, 1);
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

void func_33(int iParam0)
{
	iVar0 = func_49(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_34(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_35()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_36(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_37(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_38()
{
	return _unlock_is_unlocked(99890643);
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_50(*iParam0);
	iVar1 = func_51(*iParam0);
	iVar2 = func_52(*iParam0);
	iVar3 = func_53(*iParam0);
	iVar4 = func_54(*iParam0);
	iVar5 = func_55(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_56(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_56(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_57(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_59(func_58(), iParam0, bParam1);
}

bool func_42(int iParam0)
{
	iVar0 = func_19(iParam0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_60(iVar1) == iVar0)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_43(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_61(iParam1))
		{
			func_62(iParam0, 41788943);
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
			func_63(iParam0, 0, 1);
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
			func_64(iParam0, 0);
			bVar0 = true;
		}
		func_65(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_44(int iParam0)
{
	fVar0 = 50f;
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
			fVar0 = 20f;
			break;
	}
	return fVar0;
}

Vector3 func_45()
{
	return 0f, 0f, 0f;
}

var func_46()
{
	return &Global_1899515;
}

int func_47(int iParam0, bool bParam1)
{
	switch (func_66(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_48(int iParam0)
{
	iVar0 = func_66(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_49(int iParam0, int iParam1)
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

int func_50(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_67(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_51(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_52(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_53(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_54(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_55(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_56(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_68(iParam0, iParam6);
	func_69(iParam0, iParam5);
	func_70(iParam0, iParam4);
	func_71(iParam0, iParam3);
	func_72(iParam0, iParam2);
	func_73(iParam0, iParam1);
}

int func_58()
{
	return &Global_1899515;
}

bool func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam1) || !func_74(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_60(int iParam0)
{
	iParam0 = func_75(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

bool func_61(int iParam0)
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

void func_62(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_76(iParam0, iParam1))
		{
			if (func_77(iParam0, iParam1))
			{
				if (func_78(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_79(iParam0);
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

void func_63(int iParam0, int iParam1, bool bParam2)
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

void func_64(int iParam0, bool bParam1)
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

void func_65(int iParam0, int iParam1)
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

int func_66(int iParam0)
{
	if (!func_80(iParam0))
	{
		return -1;
	}
	return func_81(iParam0);
}

int func_67(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_69(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_70(int iParam0, int iParam1)
{
	iVar0 = func_51(*iParam0);
	iVar1 = func_50(*iParam0);
	if (iParam1 < 1 || iParam1 > func_56(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_71(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_72(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_73(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_74(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_54(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_53(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_50(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_51(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_52(iParam0);
	if (iVar5 < 1 || iVar5 > func_56(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_75(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_76(int iParam0, int iParam1)
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
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
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
	if (!func_76(iParam0, iVar0))
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

void func_79(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_80(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_81(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_82(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_82(int iParam0)
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

