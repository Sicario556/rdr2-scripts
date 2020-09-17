void __EntryFunction__()
{
	iVar0 = Local_13.f_1;
	bVar1 = Local_13.f_3;
	bVar2 = Local_13.f_4;
	iVar5 = func_1(iVar0);
	bVar6 = false;
	if (has_force_cleanup_occurred(523))
	{
		func_2(&Var3, 3);
	}
	if (!is_entity_dead(Global_34))
	{
		if (func_3(Global_34, 0) != -1569615261)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		}
	}
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
	while (true)
	{
		if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
		{
			func_2(&Var3, 3);
		}
		switch (func_4(&Var3))
		{
			case 0:
				if (func_3(Global_34, 0) != -1569615261)
				{
				}
				else
				{
					func_2(&Var3, 1);
				}
				break;
			case 1:
				func_5(iVar5);
				func_6(iVar0);
				Var3.f_1 = get_game_timer();
				func_7(iVar5, 1);
				func_2(&Var3, 2);
				break;
			case 2:
				if (bVar2)
				{
					if ((get_game_timer() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(Local_13);
						func_9(iVar5, 1, !bVar6);
						if (bVar1)
						{
							func_10(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							func_12(238, func_11(iVar5), 1);
						}
						func_2(&Var3, 3);
					}
				}
				else
				{
					func_2(&Var3, 3);
				}
				break;
			case 3:
				func_13();
				break;
		}
		wait(0);
	}
}

int func_1(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_3(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_4(var uParam0)
{
	return *uParam0;
}

void func_5(int iParam0)
{
	uVar0 = func_16(_create_var_string(10, "ITEM_TASTED_PUMP_MULT", _create_var_string(0, func_15(func_14(iParam0))), 1), "", 0, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	(*Global_1915280)[iParam0] = uVar0;
}

void func_6(int iParam0)
{
	if (!func_17(iParam0, 0))
	{
	}
}

void func_7(int iParam0, int iParam1)
{
	Var0 = { func_18(-372368982, func_11(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_20(func_19(106002964), iParam1);
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	iVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = func_1(iVar0);
	if (!bVar2 || func_21(iVar3))
	{
		return 0;
	}
	iVar4 = func_22(iVar3);
	if ((!bVar1 || !func_17(iVar4, 0)) || func_23(iVar4))
	{
		return 0;
	}
	return 1;
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_14(iParam0);
	iVar1 = func_1(iVar0);
	if (iVar1 != iParam0)
	{
		func_24(iVar1, 4);
	}
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_21(iParam0))
	{
		return;
	}
	func_24(iParam0, 4);
	func_26(iParam0, bParam1);
	if (!func_27(iParam0))
	{
		func_28(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

void func_10(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0))
	{
		return;
	}
	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return 1516353659;
		case 20:
			return -1040706491;
		case 21:
			return -1910627346;
		case 24:
			return -1812487593;
		case 27:
			return 1983971282;
		case 28:
			return 1561519041;
		case 29:
			return -980496853;
		case 30:
			return -1738887126;
		case 32:
			return 424771379;
		case 34:
			return 787316814;
		case 35:
			return 984616481;
		case 38:
			return 1078285403;
		case 39:
			return -262897007;
		case 49:
			return -1727702531;
		case 50:
			return 1783324404;
		case 51:
			return 1288848815;
		case 52:
			return 918090738;
		case 53:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 22:
			return -819513569;
		case 23:
			return 1906968775;
		case 25:
			return -135434663;
		case 26:
			return 920123680;
		case 31:
			return 150470908;
		case 33:
			return -1665125257;
		case 36:
			return 1587928307;
		case 37:
			return -1738925422;
		case 40:
			return 656594395;
		case 42:
			return -1174738785;
		case 43:
			return 1073505629;
		case 41:
			return -658674894;
		case 44:
			return -1504155535;
		case 45:
			return -1917345716;
		case 46:
			return 1823406682;
		case 47:
			return -1003637772;
		case 48:
			return -1571524081;
	}
	return 0;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_34(iParam0, 1024))
	{
		return;
	}
	func_35(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_13()
{
	terminate_this_thread();
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -241666815;
		case 20:
			return -1781387050;
		case 21:
			return -597058368;
		case 24:
			return 128702355;
		case 27:
			return -2051332199;
		case 28:
			return 546981776;
		case 29:
			return -2013384490;
		case 30:
			return 228922461;
		case 32:
			return -746674788;
		case 34:
			return 599861917;
		case 35:
			return -1781387050;
		case 38:
			return 2006811763;
		case 39:
			return -90546043;
		case 49:
			return 1216456215;
		case 50:
			return 746300881;
		case 51:
			return -435006002;
		case 52:
			return -624139784;
		case 53:
			return -529638012;
		case 40:
			return 1338475089;
		case 41:
			return 2605459;
		case 42:
			return 1071702353;
		case 43:
			return -1183422860;
		case 44:
			return -1957546791;
		case 45:
			return -589542533;
		case 46:
			return -1776738559;
		case 47:
			return 1602215994;
		case 48:
			return -396757268;
		default:
			break;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_16(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_37(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_17(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<2> func_18(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_19(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_20(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_21(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 4, 1);
}

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779;
		case 3:
			return -755485480;
		case 6:
			return 747460826;
		case 7:
			return 1627068364;
		case 13:
			return -1067476102;
		case 15:
			return -1080874779;
		case 18:
			return -801397594;
		case 20:
			return 730856618;
		case 21:
			return -486559882;
		case 24:
			return -1976480343;
		case 27:
			return 2036955137;
		case 30:
			return -1067476102;
		case 35:
			return 1566032147;
		case 39:
			return 2036955137;
		case 50:
			return 1566032147;
		case 53:
			return -755485480;
	}
	return 0;
}

bool func_23(int iParam0)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_39(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

void func_24(int iParam0, int iParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_40() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

bool func_25(int iParam0)
{
	return !iParam0 <= 0;
}

void func_26(int iParam0, bool bParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_41(iParam0))
	{
		return;
	}
	func_24(iParam0, 2);
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			if (func_40() == -1)
			{
				func_30(1, 6);
			}
			else
			{
				func_42(1, 1017438712);
			}
		}
	}
}

bool func_27(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 1, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_27(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_43(iParam0);
	}
	if (!bParam1)
	{
		func_44(iParam0);
	}
	func_24(iParam0, 1);
	func_26(iParam0, 1);
	if (bParam2)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

bool func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_45())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_47(func_46(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_48(func_46(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

void func_30(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_49(&Global_0, 8);
	}
	if (!func_50() || func_40() != -1)
	{
		return;
	}
	func_49(&Global_0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_39(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_39(iParam0, Var2, 1))
				{
					if (func_51(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_51(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if (func_40() != -1)
			{
				func_52(573, 1);
			}
			else
			{
				func_52(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_53(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_54(iParam0))
	{
		return false;
	}
	if (func_55(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_34(iParam0, 1)) || func_56(32768))
	{
		if (!func_34(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_57())
	{
		return false;
	}
	return true;
}

bool func_34(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_37(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_25(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_39(int iParam0, int iParam1, bool bParam2)
{
	if (!func_17(iParam0, 0))
	{
		return func_59(func_58(iParam0), iParam1, bParam2);
	}
	if (func_60(iParam0))
	{
		return func_62(func_61(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_40() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_63(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_40()
{
	return Global_1572887->f_13;
}

bool func_41(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 2, 1);
}

int func_42(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_64())
	{
		return 0;
	}
	if (!func_65())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_49(&Global_0, 8);
	}
	func_49(&Global_0, 1);
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_44(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_52(239, 0);
			break;
		case 16:
			func_52(240, 0);
			break;
		case 34:
			func_52(241, 0);
			break;
		case 52:
			func_52(242, 0);
			break;
		case 2:
			func_52(243, 0);
			break;
		case 3:
			func_52(244, 0);
			break;
		case 53:
			func_52(245, 0);
			break;
		case 15:
			func_52(246, 0);
			break;
		case 24:
			func_52(247, 0);
			break;
		case 38:
			func_52(248, 0);
			break;
		case 27:
			func_52(249, 0);
			break;
		case 13:
			func_52(250, 0);
			break;
		case 19:
			func_52(251, 0);
			break;
		case 20:
			func_52(252, 0);
			break;
		case 35:
			func_52(253, 0);
			break;
		case 39:
			func_52(254, 0);
			break;
		case 50:
			func_52(255, 0);
			break;
		case 7:
			func_52(256, 0);
			break;
		case 21:
			func_52(257, 0);
			break;
		case 18:
			func_52(258, 0);
			break;
		case 6:
			func_52(259, 0);
			break;
		case 30:
			func_52(260, 0);
			break;
		case 49:
			func_52(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_52(263, 0);
			break;
		case 8:
			func_52(264, 0);
			break;
		case 29:
			func_52(265, 0);
			break;
		case 32:
			func_52(266, 0);
			break;
		case 12:
			func_52(267, 0);
			break;
		case 28:
			func_52(268, 0);
			break;
		case 51:
			func_52(269, 0);
			break;
	}
}

bool func_45()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_47(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_46(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_47(struct<2> Param0)
{
	if (!func_66(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_67(Param0))
	{
		return false;
	}
	return true;
}

int func_48(var uParam0, var uParam1)
{
	return uParam0;
}

void func_49(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_50()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_51(int iParam0, int iParam1)
{
	if (func_40() != -1)
	{
		return false;
	}
	if (func_63(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_52(int iParam0, bool bParam1)
{
	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_35(iVar0, iVar1);
}

bool func_53(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_54(int iParam0)
{
	if (func_34(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_56(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_57()
{
	if (!func_65())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_58(int iParam0)
{
	return iParam0;
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_40() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_69(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_60(int iParam0)
{
	if (func_70(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_61(int iParam0, bool bParam1)
{
	if (!func_17(iParam0, 0))
	{
		return func_71(func_58(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_62(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_5 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_8 < iScriptParam_5)
	{
		if (&Var0[iScriptParam_8] == iParam1)
		{
			iVar473 = Var0[iScriptParam_8]->f_35;
			iVar475 = 0;
			while (iScriptParam_9 < iScriptParam_7)
			{
				uVar472 = &Var0[iScriptParam_8]->f_36[iScriptParam_9];
				if (iScriptParam_6 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_6))
				{
					return 1;
				}
				iVar475 = iScriptParam_9 + 1;
			}
		}
		iVar474 = iScriptParam_8 + 1;
	}
	return 0;
}

bool func_63(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_17(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_64()
{
	return !Global_1572887->f_9;
}

bool func_65()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_69(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_68(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_72(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_70(int iParam0, int iParam1)
{
	if (!func_17(iParam0, 0))
	{
		return func_73(func_58(iParam0), iParam1);
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

int func_71(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_72(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_73(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 2))
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

