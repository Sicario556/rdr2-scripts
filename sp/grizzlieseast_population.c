void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	func_4(&uLocal_14, 4);
	iVar4 = 0;
	iVar0[0] = _create_volume_cylinder(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = _create_volume_cylinder(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = _create_volume_cylinder(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		func_5(&uLocal_14);
		wait(0);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (_does_volume_exist(&(iVar0[iVar4])))
		{
			_delete_volume(&(iVar0[iVar4]));
		}
		iVar4++;
	}
	func_6();
	terminate_this_thread();
}

void func_1()
{
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		func_6();
		terminate_this_thread();
	}
}

void func_2()
{
	iLocal_34 = _create_volume_aggregate_with_custom_name("m_volLawSpawn_Blocking Agg");
	_0x39816f6f94f385ad(iLocal_34, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	_0x39816f6f94f385ad(iLocal_34, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_35 = _0xa2d5a26208421426(iLocal_34);
}

void func_3()
{
	iLocal_26 = _create_volume_cylinder_with_custom_name(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	func_7(iLocal_26, 1);
	iLocal_27 = func_8(iLocal_27);
	func_9(iLocal_27, 0, 0, 1);
	iLocal_28 = _create_volume_cylinder_with_custom_name(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	func_7(iLocal_28, 1);
	iLocal_29 = _create_volume_cylinder_with_custom_name(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	func_10(iLocal_29, 0, 0, 1);
	iLocal_30 = _create_volume_cylinder_with_custom_name(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	func_11(iLocal_30, 0, 0, 1);
	iLocal_31 = _create_volume_cylinder_with_custom_name(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_7(iLocal_31, 1);
	iLocal_32 = _create_volume_box_with_custom_name(615.3494f, 2147.322f, 222.6459f, 0f, 0f, -47.56889f, 19.68541f, 7.633937f, 7.877471f, "m_volAquatic_Restriction");
	func_12(iLocal_32, 1);
	iLocal_33 = _create_volume_aggregate_with_custom_name("m_volCotorraSprings_Restriction");
	_0xbce668aaf83608be(iLocal_33, 176.0662f, 1810.708f, 197.5317f, 0f, 0f, 0f, 8.206045f, 8.641531f, 7.990109f);
	_0xbce668aaf83608be(iLocal_33, 144.9528f, 1867.019f, 197.9786f, 0f, 0f, 0f, 6.17023f, 6.166595f, 6.148633f);
	_0xbce668aaf83608be(iLocal_33, 234.8607f, 1943.437f, 199.2335f, 0f, 0f, 0f, 13.36673f, 12.17811f, 11.10495f);
	func_13(iLocal_33, 0, 0, 0);
	if (func_14() == -1)
	{
		func_15();
	}
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_16(iParam1);
	uParam0->f_5 = { func_17(iParam1) };
}

void func_5(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			fVar0 = func_18(Global_35, uParam0->f_5, 1);
			if (fVar0 > pow(400f, 2f) || fVar0 < pow(100f, 2f))
			{
				return;
			}
			if (func_19(uParam0->f_1))
			{
				func_20(uParam0, 1);
			}
			else
			{
				func_20(uParam0, 6);
			}
			break;
		case 1:
			set_scenario_group_enabled("Special_Ambient_Horse", true);
			request_model(func_21(uParam0->f_1), false);
			_0xed9582b3da8f02b4(1);
			uParam0->f_9 = 1;
			func_20(uParam0, 2);
			break;
		case 2:
			if (!has_model_loaded(func_21(uParam0->f_1)))
			{
				return;
			}
			if (!_0x5e420ff293ee5472())
			{
				return;
			}
			fVar0 = func_18(Global_35, uParam0->f_5, 1);
			if (fVar0 < pow(100f, 2f))
			{
				func_22(uParam0);
				func_20(uParam0, 6);
				return;
			}
			if (!does_entity_exist(uParam0->f_3))
			{
				uParam0->f_3 = func_23(func_21(uParam0->f_1), uParam0->f_5, 0, 0, 1, uParam0->f_2, 0, 0, 0, 0, 1, 0, 0);
				return;
			}
			set_entity_visible(uParam0->f_3, false);
			func_24(uParam0);
			func_20(uParam0, 3);
		case 3:
			func_25(uParam0->f_3);
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
			set_model_as_no_longer_needed(func_21(uParam0->f_1));
			func_20(uParam0, 4);
			break;
		case 4:
			if (func_26(uParam0))
			{
				func_20(uParam0, 5);
			}
			break;
		case 5:
			func_27(uParam0->f_1);
			uParam0->f_8 = 1;
			func_22(uParam0);
			func_20(uParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_6()
{
	func_22(&uLocal_14);
	func_28();
	if (func_14() == -1)
	{
		func_29();
	}
}

void func_7(int iParam0, bool bParam1)
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

int func_8(int iParam0)
{
	iParam0 = _create_volume_aggregate_with_custom_name("RIVER_RESTRICTION_GRZ_EAST");
	_0x39816f6f94f385ad(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	_0x39816f6f94f385ad(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	_0x39816f6f94f385ad(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	_0x39816f6f94f385ad(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	_0x39816f6f94f385ad(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_11(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228767, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228767, 0, 0, -1, -1, iParam0);
	}
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_14()
{
	return Global_1572887->f_12;
}

void func_15()
{
	iVar0 = 7;
	uLocal_24[0] = _0x00bbf7ceae8c666a(1989.044f, 1799.889f, 193.131f, 20f, iVar0, 16384);
}

int func_16(int iParam0)
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
			if (func_31())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

Vector3 func_17(int iParam0)
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

float func_18(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_32(vVar0, vParam1);
}

bool func_19(int iParam0)
{
	if (func_14() != -1)
	{
		return false;
	}
	if (!func_33(15))
	{
		return false;
	}
	iVar0 = func_21(iParam0);
	if (func_34(iVar0))
	{
		if (!func_35())
		{
			return false;
		}
	}
	iVar1 = &Global_40.f_11945[iParam0];
	func_37(&iVar1, 0, 0, 0, func_36(iParam0), 0, 0, 0);
	if (!func_38(iVar1, 1))
	{
		return false;
	}
	if (func_39(iParam0))
	{
		return false;
	}
	return true;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_21(int iParam0)
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

void func_22(var uParam0)
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
		set_model_as_no_longer_needed(func_21(uParam0->f_1));
		uParam0->f_9 = 0;
	}
}

int func_23(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_40(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_24(var uParam0)
{
	fVar0 = func_41(uParam0->f_1);
	vVar1 = { fVar0, fVar0, fVar0 };
	uParam0->f_4 = _create_volume_sphere_with_custom_name(uParam0->f_5, func_42(), vVar1, "Special Ambient Horse Unalerted");
}

void func_25(int iParam0)
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

bool func_26(var uParam0)
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
	if (func_39(uParam0->f_1))
	{
		return true;
	}
	return false;
}

void func_27(int iParam0)
{
	Global_40.f_11945[iParam0] = func_43();
}

void func_28()
{
	if (_does_volume_exist(iLocal_34))
	{
		remove_dispatch_spawn_blocking_area(uLocal_35);
	}
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (_0xf6a8a652a6b186cd(&(uLocal_24[iVar0])))
		{
			_0xfdfecc6ee4491e11(&(uLocal_24[iVar0]));
		}
		iVar0++;
	}
}

void func_30(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_31()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_32(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_33(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_44((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_34(int iParam0)
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

bool func_35()
{
	return _unlock_is_unlocked(99890643);
}

int func_36(int iParam0)
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

void func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_45(*iParam0);
	iVar1 = func_46(*iParam0);
	iVar2 = func_47(*iParam0);
	iVar3 = func_48(*iParam0);
	iVar4 = func_49(*iParam0);
	iVar5 = func_50(*iParam0);
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
	iVar6 = func_51(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_51(iVar1, iVar0);
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
	func_52(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_38(int iParam0, bool bParam1)
{
	return func_54(func_53(), iParam0, bParam1);
}

bool func_39(int iParam0)
{
	iVar0 = func_21(iParam0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_55(iVar1) == iVar0)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_40(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_56(iParam1))
		{
			func_57(iParam0, 41788943);
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
			func_58(iParam0, 0, 1);
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
			func_59(iParam0, 0);
			bVar0 = true;
		}
		func_60(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_41(int iParam0)
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

Vector3 func_42()
{
	return 0f, 0f, 0f;
}

var func_43()
{
	return &Global_1899515;
}

int func_44(int iParam0, bool bParam1)
{
	switch (func_61(iParam0))
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

int func_45(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_62(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_46(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_47(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_48(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_49(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_50(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_51(int iParam0, int iParam1)
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

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_63(iParam0, iParam6);
	func_64(iParam0, iParam5);
	func_65(iParam0, iParam4);
	func_66(iParam0, iParam3);
	func_67(iParam0, iParam2);
	func_68(iParam0, iParam1);
}

int func_53()
{
	return &Global_1899515;
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_69(iParam1) || !func_69(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_55(int iParam0)
{
	iParam0 = func_70(iParam0);
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

bool func_56(int iParam0)
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

void func_57(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_71(iParam0, iParam1))
		{
			if (func_72(iParam0, iParam1))
			{
				if (func_73(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_74(iParam0);
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

void func_58(int iParam0, int iParam1, bool bParam2)
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

void func_59(int iParam0, bool bParam1)
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

void func_60(int iParam0, int iParam1)
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

int func_61(int iParam0)
{
	if (!func_75(iParam0))
	{
		return -1;
	}
	return func_76(iParam0);
}

int func_62(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_63(int iParam0, int iParam1)
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

void func_64(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_65(int iParam0, int iParam1)
{
	iVar0 = func_46(*iParam0);
	iVar1 = func_45(*iParam0);
	if (iParam1 < 1 || iParam1 > func_51(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_66(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_67(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_69(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_49(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_48(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_45(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_46(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_47(iParam0);
	if (iVar5 < 1 || iVar5 > func_51(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_70(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_71(int iParam0, int iParam1)
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

bool func_72(int iParam0, int iParam1)
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

bool func_73(int iParam0, int iParam1)
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
	if (!func_71(iParam0, iVar0))
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

void func_74(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_76(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_77(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_77(int iParam0)
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

