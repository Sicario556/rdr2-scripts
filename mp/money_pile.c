void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (!_0x9e4ef615e307fbbe() && func_3())
	{
		func_4();
		func_5();
		func_6();
		wait(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	_0xe7282390542f570d(iLocal_15);
	if (network_is_game_in_progress())
	{
		func_8();
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(2))
	{
		switch (get_event_at_index(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (is_ped_injured(Global_34))
	{
		iLocal_13 = 0;
		return;
	}
	if (has_anim_event_fired(Global_34, -1898385492) && !bLocal_18)
	{
		fVar0 = 1f;
		fVar1 = 1f;
		bVar2 = false;
		bLocal_18 = true;
		func_13(floor((fVar0 * to_float(func_12(1871635045)))), bVar2, fVar1, 1, 0, 0, 1);
	}
	if (!is_ped_using_any_scenario(Global_34))
	{
		clear_ped_tasks(Global_34, 1, 0);
		iLocal_13 = 0;
	}
}

void func_7()
{
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_14(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_15(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_16(&iVar0);
	}
}

int func_12(int iParam0)
{
	if (func_17())
	{
		return 0;
	}
	if (!func_18(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (_datafile_get_int(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_13(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (func_19() == 0)
	{
		if (((func_20(iParam0, sParam4, bParam6) == -1 && !bParam6) && func_21(0)) && !func_22())
		{
			func_23(iParam0, sParam4, iParam5, 0);
		}
	}
	else
	{
		if (!bParam1)
		{
			func_23(iParam0, sParam4, iParam5, 0);
		}
		func_24(iParam0, bParam1, fParam2, iParam3);
	}
}

void func_14(int iParam0)
{
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

bool func_17()
{
	return false;
}

bool func_18(int iParam0, var uParam1)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_19()
{
	return Global_1572887->f_13;
}

int func_20(int iParam0, char* sParam1, bool bParam2)
{
	if (func_22())
	{
		bParam2 = true;
	}
	if (!bParam2 && func_21(0))
	{
		func_26(2084597891, iParam0, -334626412);
		return -1;
	}
	return -1;
}

bool func_21(bool bParam0)
{
	if (func_19() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_27(bParam0));
}

bool func_22()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

void func_23(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_28(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_29(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_24(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_30() || func_31())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_29(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_29(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_33(func_32(1644987397), iVar1);
	}
}

bool func_25(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_35(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_36(iParam0, iParam1, iParam2);
	}
	Var1 = { func_37(iParam0, 0, 1) };
	Var6 = { func_38(iParam0, Var1, Var1.f_4, 0) };
	return func_39(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_27(bool bParam0)
{
	if (func_19() == -1)
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

void func_28(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_40())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

var func_29(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_41(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_30()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_31()
{
	return is_dlc_present(-2112896652);
}

struct<2> func_32(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_34(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_35(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_37(iParam0, 0, 0) };
	if (func_42(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_21(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_27(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_37(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_43(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_44(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_38(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_45(bParam1) };
			if (bParam2 && func_46(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_47(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_47(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_48(iParam0, &Var6, 1728382685))
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
			Var0 = { func_49(bParam1) };
			switch (func_50(iParam0))
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
				Var0 = { func_38(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_51(iParam0, -1483207246))
			{
				Var0 = { func_38(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_38(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_51(iParam0, -1653629781))
			{
				Var0 = { func_38(1384535894, Var0, 1784584921, bParam1) };
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
				Var0 = { func_38(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_38(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_34(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_27(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_39(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_42(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_21(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_27(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_40()
{
	return Global_1913504->f_127 == 0;
}

void func_41(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_42(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_53(&iParam0);
	if (!func_34(iParam0, 0) && !func_55(func_54(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_35(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_56(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_45(0) };
		Var4.f_9 = -1591664384;
		if (!func_47(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_48(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_46(iParam0, 1))
		{
			if (!func_47(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_48(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_57(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_58(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

struct<4> func_43(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_27(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_38(1328661203, func_59(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_38(1328661203, func_59(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_38(1328661203, func_59(), -1591664384, bParam0);
}

int func_44(int iParam0)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_45(bool bParam0)
{
	iVar0 = func_27(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_38(923904168, func_43(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_38(923904168, func_43(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_38(923904168, func_43(bParam0), -740156546, 0);
}

bool func_46(int iParam0, bool bParam1)
{
	if (func_50(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_60();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_47(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_58(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_48(int iParam0, var uParam1, int iParam2)
{
	if (func_61(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_49(bool bParam0)
{
	iVar0 = func_27(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_38(271701509, func_43(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_38(271701509, func_43(bParam0), 12999093, 0);
}

int func_50(int iParam0)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_50(iParam0);
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
			if (func_62(iParam0, iParam1, iVar0))
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
	return func_63(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_53(int iParam0)
{
	if (!func_34(*iParam0, 0))
	{
		return 0;
	}
	if (!func_64(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	return iParam0;
}

bool func_55(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_56(int iParam0)
{
	return func_44(iParam0) == -427144552;
}

int func_57(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_34(iParam0, 0) && !func_55(func_54(iParam0), 2))
	{
		return 0;
	}
	if (func_44(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_35(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_27(bParam3), iParam0);
}

int func_58(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_34(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_35(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_38(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_27(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_27(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_59()
{
	return Var0;
}

bool func_60()
{
	return (func_65(-1185145312, 0, 0, 0) > 0 && func_66(func_38(889965687, func_43(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_61(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_27(0);
	*uParam1 = { func_38(iParam0, func_45(0), iParam3, 0) };
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

bool func_62(int iParam0, int iParam1, int iParam2)
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

bool func_63(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_27(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_64(int iParam0)
{
	return func_67(iParam0, 1279601681);
}

int func_65(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_68(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_27(bParam1), iParam0, iParam3);
}

int func_66(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_69(&uParam0, iParam4, bParam5, iParam6);
}

int func_67(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0))
	{
		return func_70(func_54(iParam0), iParam1);
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

bool func_68(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_69(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_71(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	if (!func_55(iParam0, 2))
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

bool func_71(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_27(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_63(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

