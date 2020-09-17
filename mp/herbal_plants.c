void __EntryFunction__()
{
	uLocal_21 = ScriptParam_0;
	iLocal_20 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		network_set_script_is_safe_for_network_game();
		if (func_3(func_2(0)) != 7)
		{
		}
		else
		{
			func_4(&Local_13);
		}
	}
	if (func_1() == -1)
	{
		if (has_force_cleanup_occurred(523))
		{
			func_4(&Local_13);
		}
	}
	if (!_does_scenario_point_exist(iLocal_20))
	{
		func_4(&Local_13);
	}
	Local_13.f_1 = { _get_scenario_point_coords(iLocal_20, true) };
	if (func_5(&Local_13))
	{
		_set_scenario_point_active(iLocal_20, false);
		func_4(&Local_13);
	}
	else
	{
		_set_scenario_point_active(iLocal_20, true);
	}
	while (func_6())
	{
		if (func_7())
		{
			func_4(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_4(&Local_13);
		}
		wait(0);
	}
	func_4(&Local_13);
}

int func_1()
{
	return Global_1572887->f_13;
}

struct<2> func_2(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	if (does_blip_exist(uParam0->f_5))
	{
		remove_blip(&(uParam0->f_5));
	}
	_0xe7282390542f570d(uLocal_21);
	terminate_this_thread();
}

bool func_5(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_9(Local_13.f_1, (*Global_1915280)[iVar0]->f_1, 1056964608, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_6()
{
	if (_0x9e4ef615e307fbbe())
	{
		func_4(&Local_13);
		return false;
	}
	return true;
}

bool func_7()
{
	if (Global_1572887->f_13 == -1)
	{
		if (is_ped_injured(Global_34))
		{
			return true;
		}
	}
	else if (Global_1296859->f_12)
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	switch (func_10(uParam0))
	{
		case 0:
			iLocal_22 = func_11();
			func_12(uParam0, 1);
			break;
		case 1:
			if (func_13(uParam0))
			{
				if (does_blip_exist(uParam0->f_5))
				{
					remove_blip(&(uParam0->f_5));
				}
				func_14(uParam0->f_1);
				return true;
			}
			else if (does_blip_exist(uParam0->f_5))
			{
				func_15(uParam0);
			}
			else
			{
				uParam0->f_5 = _blip_add_for_coord(1425226969, uParam0->f_1);
				func_15(uParam0);
			}
			break;
	}
	return false;
}

bool func_9(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_10(var uParam0)
{
	return *uParam0;
}

int func_11()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_17(func_16(iVar0), 1))
		{
			iVar1 = (iVar1 + func_18(func_16(iVar0), 0, 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_13(var uParam0)
{
	if (1.414214f >= vdist(uParam0->f_1, Global_35) && iLocal_22 < func_11())
	{
		return true;
	}
	return false;
}

void func_14(vector3 vParam0)
{
	Global_1915497 = (&Global_1915497 % 10);
	(*Global_1915280)[&Global_1915497]->f_1 = { vParam0 };
	Global_1915497 = &Global_1915497 + 1;
}

void func_15(var uParam0)
{
	_blip_set_modifier(uParam0->f_5, 287065609);
}

int func_16(int iParam0)
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

bool func_17(int iParam0, int iParam1)
{
	if (!func_19(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_20(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_21(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_22(iParam0))
			{
				return true;
			}
			break;
	}
	return func_18(iParam0, 0, 0, 0) >= iParam1;
}

int func_18(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_19(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_20(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_23(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_24(iParam0, 0);
	}
	if (func_25(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_26(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_27(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_26(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_19(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_20(int iParam0)
{
	if (!func_19(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_19(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_23(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_28("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_29(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_30(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_31(iVar1);
				return true;
			}
			iVar3++;
		}
		func_31(iVar1);
	}
	return false;
}

bool func_22(int iParam0)
{
	if (!func_19(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_32(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_33(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_34(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_35(iParam0);
	iVar2 = func_34(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_23(int iParam0, int iParam1)
{
	if (!func_19(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_36(iParam0, 1399091007))
	{
		func_37(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_38(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_40(&Var0, func_39(0));
	}
	if (!func_41(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_31(iVar14);
	return uVar15;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_26(bool bParam0)
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

struct<4> func_27(int iParam0, bool bParam1)
{
	Var0 = { func_42(iParam0, bParam1, 0) };
	return func_43(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_28(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_26(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_29(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_30(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_31(int iParam0)
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

int func_32(int iParam0)
{
	if (!func_19(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_34(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_35(int iParam0)
{
	iVar0 = func_32(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	if (!func_19(iParam0, 0))
	{
		return func_45(func_44(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_37(int iParam0, var uParam1, var uParam2)
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

struct<14> func_38(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_39(bool bParam0)
{
	iVar0 = func_26(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_43(923904168, func_46(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_43(923904168, func_46(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_43(923904168, func_46(bParam0), -740156546, 0);
}

void func_40(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_41(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_26(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_42(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_46(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_20(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_43(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_39(bParam1) };
			if (bParam2 && func_47(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_48(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_48(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_49(iParam0, &Var6, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_50(bParam1) };
			switch (func_32(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
		case -1962314949:
			if (func_51(iParam0, -1823706425))
			{
				Var0 = { func_43(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_51(iParam0, -1483207246))
			{
				Var0 = { func_43(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_43(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_51(iParam0, -1653629781))
			{
				Var0 = { func_43(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_52(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_51(iParam0, -1653629781))
			{
				Var0 = { func_43(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_43(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_19(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_26(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_44(int iParam0)
{
	return iParam0;
}

int func_45(int iParam0, int iParam1)
{
	if (!func_53(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

struct<4> func_46(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_26(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_43(1328661203, func_54(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_43(1328661203, func_54(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_43(1328661203, func_54(), -1591664384, bParam0);
}

bool func_47(int iParam0, bool bParam1)
{
	if (func_32(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_55();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_56(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_49(int iParam0, var uParam1, int iParam2)
{
	if (func_57(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_50(bool bParam0)
{
	iVar0 = func_26(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_43(271701509, func_46(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_43(271701509, func_46(bParam0), 12999093, 0);
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_32(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_58(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_52(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_59(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_54()
{
	return Var0;
}

bool func_55()
{
	return (func_60(-1185145312, 0, 0, 0) > 0 && func_61(func_43(889965687, func_46(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_56(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_19(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_25(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_43(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_26(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_26(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_26(0);
	*uParam1 = { func_43(iParam0, func_39(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_58(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_59(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_26(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_60(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_62(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_26(bParam1), iParam0, iParam3);
}

int func_61(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_63(&uParam0, iParam4, bParam5, iParam6);
}

bool func_62(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_63(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_64(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_26(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_59(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

