void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	func_3();
	iVar4 = 0;
	iVar0[0] = _create_volume_cylinder(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = _create_volume_cylinder(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = _create_volume_cylinder(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		if (func_4() == -1)
		{
		}
		else
		{
			Global_1896622->f_51 = _0xfb9eced5b68f3b78(Global_1896622->f_42);
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				func_5(iVar0[iVar4]);
				iVar4++;
			}
			if (func_6(1, 1))
			{
				bVar5 = false;
			}
		}
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
	func_7();
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
		func_7();
		terminate_this_thread();
	}
}

void func_2()
{
	iLocal_21 = _create_volume_aggregate_with_custom_name("m_volLawSpawn_Blocking Agg");
	_0x39816f6f94f385ad(iLocal_21, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	_0x39816f6f94f385ad(iLocal_21, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_22 = _0xa2d5a26208421426(iLocal_21);
}

void func_3()
{
	iLocal_15 = _create_volume_cylinder_with_custom_name(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	func_8(iLocal_15);
	iLocal_16 = func_9(iLocal_16);
	func_10(iLocal_16, 0, 0);
	iLocal_17 = _create_volume_cylinder_with_custom_name(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	func_8(iLocal_17);
	iLocal_18 = _create_volume_cylinder_with_custom_name(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	func_11(iLocal_18, 0, 0);
	iLocal_19 = _create_volume_cylinder_with_custom_name(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	func_12(iLocal_19, 0, 0);
	iLocal_20 = _create_volume_cylinder_with_custom_name(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_8(iLocal_20);
}

int func_4()
{
	return Global_1572887->f_13;
}

void func_5(var uParam0)
{
	if (is_entity_dead(player_ped_id()))
	{
		return;
	}
	if (!_does_volume_exist(*uParam0))
	{
		return;
	}
	if (!is_entity_in_volume(player_ped_id(), *uParam0, true, 0))
	{
		return;
	}
	func_13(player_ped_id(), -10959621, 0, 0);
}

bool func_6(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_7()
{
	func_14();
}

void func_8(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
}

int func_9(int iParam0)
{
	iParam0 = _create_volume_aggregate_with_custom_name("RIVER_RESTRICTION_GRZ_EAST");
	_0x39816f6f94f385ad(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	_0x39816f6f94f385ad(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	_0x39816f6f94f385ad(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	_0x39816f6f94f385ad(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	_0x39816f6f94f385ad(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x083d497d57b7400f(Global_1296859->f_8))
	{
		return;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		if (bParam2)
		{
			disable_ped_pain_audio(Global_1296859->f_8, true);
		}
		if (bParam3)
		{
			set_ped_config_flag(Global_1296859->f_8, 243, true);
		}
		Var0 = player_ped_id();
		Var0.f_1 = iParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_16(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), iParam0, iParam1);
	}
}

void func_14()
{
	if (_does_volume_exist(iLocal_21))
	{
		remove_dispatch_spawn_blocking_area(uLocal_22);
	}
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_16(var uParam0, var uParam1)
{
	if (func_17(uParam0, uParam1))
	{
		uParam1->f_63 = func_18(uParam1);
	}
}

bool func_17(var uParam0, var uParam1)
{
	func_19(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_20(uParam1);
	if (!func_21(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_22(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == -842959696)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == -10959621)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == 1936677264)
	{
		return true;
	}
	if (!func_21(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_22(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_18(var uParam0)
{
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == -842959696 && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == -10959621 || uParam0->f_30.f_5 == 1936677264) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1940085->f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_23(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_24(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_25(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

void func_19(var uParam0)
{
	func_26(uParam0);
	func_26(&(uParam0->f_6));
	func_26(&(uParam0->f_12));
	func_26(&(uParam0->f_18));
	func_26(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_20(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = player_id();
	uParam0->f_2 = get_player_ped(uParam0->f_3);
	uParam0->f_1 = func_27(uParam0->f_2);
	uParam0->f_4 = get_player_team(uParam0->f_3);
	uParam0->f_5 = get_ped_relationship_group_hash(uParam0->f_2);
	return 1;
}

bool func_21(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 1;
		}
		else if (_is_this_model_a_horse(get_entity_model(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (is_ped_human(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		*uParam1 = 4;
	}
	else if (is_entity_an_object(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = network_get_player_index_from_ped(uParam1->f_2);
			uParam1->f_4 = get_player_team(uParam1->f_3);
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return true;
}

bool func_22(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_21(_get_rider_of_mount(uParam0->f_2, false), uParam1);
		case 4:
			return func_21(get_ped_in_vehicle_seat(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_23(var uParam0)
{
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			case 2:
				return 9;
			case 3:
				return 9;
			case 4:
				return 7;
			case 6:
				return 7;
			case 5:
				return 4;
			case 7:
				return 4;
			case 0:
				return 4;
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_24(var uParam0)
{
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 18;
	}
	if (uParam0->f_18 == 6)
	{
		return 17;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (does_entity_exist(uParam0->f_18.f_1))
	{
		if (_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1)))
		{
			return 19;
		}
	}
	if (_0x40851bcc33acd9ab(uParam0->f_18.f_2))
	{
		return 11;
	}
	if (((!is_ped_human(uParam0->f_18.f_2) && !_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1))) && _0xf8b48a361dc388ae(uParam0->f_18.f_2) == 2) && _0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
	{
		return 16;
	}
	switch (uParam0->f_18.f_5)
	{
		case -1976316465:
			return 10;
		case 841021282:
			return 10;
		case -350651841:
			return 10;
		case -1683752762:
			if (_0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		case -1329647920:
			return 10;
		case 707888648:
			return 11;
		case 106566339:
			return 11;
		case -50399569:
			return 11;
		case -767591988:
			return 14;
		case 1986610512:
			return 14;
		case -989642646:
			return 15;
		case 889541022:
			return 15;
		case -319516747:
			return 15;
		case 1269650476:
			return 12;
		case 1222652248:
			return 12;
		case -350226955:
			return 12;
		case 1030835986:
			return 12;
		case -1448293989:
			return 12;
		case 266218800:
			return 12;
		case 555364152:
			return 12;
		case -1663301869:
			return 12;
		case -1996978098:
			return 12;
		case 1078461828:
			return 12;
		case 1733741057:
			return 20;
		case -2003007004:
			return 20;
		case 1965820175:
			return 20;
		case -1164995627:
			return 20;
		case -1406404850:
			return 20;
		case 892340488:
			return 20;
		case 570352286:
			return 20;
		case 1809249877:
			return 20;
		case 1185197041:
			return 20;
		case -1901478918:
			return 20;
		case 2097877918:
			return 20;
		case -1158905413:
			return 20;
		case 358397622:
			return 20;
		case 65999835:
			return 20;
		case 814443795:
			return 20;
		case 519621102:
			return 20;
		case -1628223003:
			return 20;
		case 1278256225:
			return 20;
		case 2038628101:
			return 20;
		case 1742494648:
			return 20;
		case -1010166918:
			return 20;
		case 660170868:
			return 20;
		case -1278312096:
			return 20;
		case -509158128:
			return 20;
		case -226656579:
			return 20;
		case 2115868159:
			return 20;
		case 1495813101:
			return 20;
		case 1197385818:
			return 20;
		case 1015780020:
			return 20;
		case -1286733825:
			return 20;
		case -1670393277:
			return 20;
		case -415733461:
			return 20;
		case -1207924036:
			return 20;
		case 497702414:
			return 20;
		case 719188085:
			return 20;
		case 43753457:
			return 20;
		case 771290791:
			return 20;
		case 20356387:
			return 20;
		case 309149584:
			return 20;
		case 1613781781:
			return 20;
		case 1693607065:
			return 20;
		case 1132176120:
			return 20;
		case 869270437:
			return 20;
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 12;
		case 6:
			return 12;
		case 5:
			return 13;
		case 7:
			return 13;
		case 0:
			return 13;
		default:
			break;
	}
	return 13;
	return 0;
}

int func_25(var uParam0)
{
	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_12.f_2) && _0x40851bcc33acd9ab(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_6.f_2) && _0x40851bcc33acd9ab(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 22;
	}
	switch (iVar3)
	{
		case -1976316465:
			return 21;
		case 841021282:
			return 21;
		case -350651841:
			return 21;
		case -1683752762:
			return 21;
		case -1329647920:
			return 21;
		case 707888648:
			return 22;
		case 106566339:
			return 22;
		case -50399569:
			return 22;
		case -767591988:
			return 25;
		case 1986610512:
			return 25;
		case -989642646:
			return 26;
		case 889541022:
			return 26;
		case -319516747:
			return 26;
		case 1269650476:
			return 23;
		case 1222652248:
			return 23;
		case -350226955:
			return 23;
		case 1030835986:
			return 23;
		case -1448293989:
			return 23;
		case 266218800:
			return 23;
		case 555364152:
			return 23;
		case -1663301869:
			return 23;
		case -1996978098:
			return 23;
		case 1078461828:
			return 23;
		case 1733741057:
			return 27;
		case -2003007004:
			return 27;
		case 1965820175:
			return 27;
		case -1164995627:
			return 27;
		case -1406404850:
			return 27;
		case 892340488:
			return 27;
		case 570352286:
			return 27;
		case 1809249877:
			return 27;
		case 1185197041:
			return 27;
		case -1901478918:
			return 27;
		case 2097877918:
			return 27;
		case -1158905413:
			return 27;
		case 358397622:
			return 27;
		case 65999835:
			return 27;
		case 814443795:
			return 27;
		case 519621102:
			return 27;
		case -1628223003:
			return 27;
		case 1278256225:
			return 27;
		case 2038628101:
			return 27;
		case 1742494648:
			return 27;
		case -1010166918:
			return 27;
		case 660170868:
			return 27;
		case -1278312096:
			return 27;
		case -509158128:
			return 27;
		case -226656579:
			return 27;
		case 2115868159:
			return 27;
		case 1495813101:
			return 27;
		case 1197385818:
			return 27;
		case 1015780020:
			return 27;
		case -1286733825:
			return 27;
		case -1670393277:
			return 27;
		case -415733461:
			return 27;
		case -1207924036:
			return 27;
		case 497702414:
			return 27;
		case 719188085:
			return 27;
		case 43753457:
			return 27;
		case 771290791:
			return 27;
		case 20356387:
			return 27;
		case 309149584:
			return 27;
		case 1613781781:
			return 27;
		case 1693607065:
			return 27;
		case 1132176120:
			return 27;
		case 869270437:
			return 27;
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 21;
		case 2:
			return 21;
		case 3:
			return 21;
		case 4:
			return 23;
		case 6:
			return 23;
		case 5:
			return 24;
		case 7:
			return 24;
		case 0:
			return 24;
		default:
			break;
	}
	return 24;
	return 0;
}

void func_26(var uParam0)
{
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = 623901053;
	*uParam0 = { Var0 };
}

var func_27(var uParam0)
{
	return uParam0;
}

