void __EntryFunction__()
{
	uLocal_11 = ScriptParam_0;
	iLocal_10 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		network_set_script_is_safe_for_network_game();
		if (func_2(0) != 10)
		{
		}
		else
		{
			func_3(&Local_3);
		}
	}
	if (func_1() == -1)
	{
		if (has_force_cleanup_occurred(523))
		{
			func_3(&Local_3);
		}
	}
	if (!_does_scenario_point_exist(iLocal_10))
	{
		func_3(&Local_3);
	}
	Local_3.f_1 = { _get_scenario_point_coords(iLocal_10, true) };
	if (func_4(&Local_3))
	{
		_set_scenario_point_active(iLocal_10, false);
		func_3(&Local_3);
	}
	else
	{
		_set_scenario_point_active(iLocal_10, true);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_3(&Local_3);
		}
		if (func_7(&Local_3))
		{
			func_3(&Local_3);
		}
		wait(0);
	}
	func_3(&Local_3);
}

int func_1()
{
	return Global_1572887->f_12;
}

int func_2(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_3(var uParam0)
{
	if (does_blip_exist(uParam0->f_5))
	{
		remove_blip(&(uParam0->f_5));
	}
	_0xe7282390542f570d(uLocal_11);
	terminate_this_thread();
}

bool func_4(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(Local_3.f_1, (*Global_1913500)[iVar0]->f_1, 1056964608, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_5()
{
	if (_0x9e4ef615e307fbbe())
	{
		func_3(&Local_3);
		return false;
	}
	return true;
}

bool func_6()
{
	if (Global_1572887->f_12 == -1)
	{
		if (is_ped_injured(Global_35))
		{
			return true;
		}
	}
	else if (Global_1225639->f_12)
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	switch (func_9(uParam0))
	{
		case 0:
			iLocal_12 = func_10();
			func_11(uParam0, 1);
			break;
		case 1:
			if (func_12(uParam0))
			{
				if (does_blip_exist(uParam0->f_5))
				{
					remove_blip(&(uParam0->f_5));
				}
				func_13(uParam0->f_1);
				return true;
			}
			else if (does_blip_exist(uParam0->f_5))
			{
				func_14(uParam0);
			}
			else
			{
				uParam0->f_5 = _blip_add_for_coord(1425226969, uParam0->f_1);
				func_14(uParam0);
			}
			break;
	}
	return false;
}

bool func_8(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_9(var uParam0)
{
	return *uParam0;
}

int func_10()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_16(func_15(iVar0), 1, 0))
		{
			iVar1 = (iVar1 + func_17(func_15(iVar0), 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_12(var uParam0)
{
	if (1.414214f >= vdist(uParam0->f_1, Global_36) && iLocal_12 < func_10())
	{
		return true;
	}
	return false;
}

void func_13(vector3 vParam0)
{
	Global_1913677 = (&Global_1913677 % 10);
	(*Global_1913500)[&Global_1913677]->f_1 = { vParam0 };
	Global_1913677 = &Global_1913677 + 1;
}

void func_14(var uParam0)
{
	_blip_set_modifier(uParam0->f_5, 287065609);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1602657245;
		case 1:
			return -1991037110;
		case 2:
			return -1066874997;
		case 3:
			return 2064962445;
		case 4:
			return -1664530975;
		case 5:
			return 546981776;
		case 6:
			return -2013384490;
		case 7:
			return -746674788;
		case 8:
			return 599861917;
		case 9:
			return -435006002;
		case 10:
			return -624139784;
		default:
			break;
	}
	return 0;
}

bool func_16(int iParam0, int iParam1, bool bParam2)
{
	if (!func_18(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_20(iParam0, 1))
		{
			return false;
		}
	}
	return func_17(iParam0, 0, bParam2) >= iParam1;
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_21(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_22(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_23(bParam2), iParam0, 0);
	return uVar2;
}

bool func_18(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_19(int iParam0)
{
	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_20(int iParam0, int iParam1)
{
	if (!func_18(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_21(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_24("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_25(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_26(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_27(iVar1);
				return true;
			}
			iVar3++;
		}
		func_27(iVar1);
	}
	return false;
}

int func_21(int iParam0, int iParam1)
{
	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_28(iParam0, 1399091007))
	{
		func_29(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_22(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_30(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_32(&Var0, func_31(0));
	}
	if (!func_33(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_27(iVar14);
	return uVar15;
}

int func_23(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_24(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_23(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_25(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_26(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_27(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_29(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_31(bool bParam0)
{
	iVar0 = func_23(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_35(923904168, func_34(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_35(923904168, func_34(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_35(923904168, func_34(bParam0), -740156546, 0);
}

void func_32(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_33(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_23(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_34(bool bParam0)
{
	return func_35(1328661203, func_36(), -1591664384, bParam0);
}

struct<4> func_35(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_18(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_23(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_36()
{
	return Var0;
}

