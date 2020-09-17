void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iVar0 = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_34, 0));
	func_1(&iVar0);
	bVar1 = func_2();
	if (has_force_cleanup_occurred(523))
	{
		func_3();
	}
	_0x6339c1ea3979b5f7("weapon", "Inspect_Item_Scenes");
	while (func_4())
	{
		_0x000fa7a4a8443af7(ScriptParam_0.f_1);
		if (!_databinding_read_data_bool(Local_15.f_5))
		{
			iVar2 = _get_item_interaction_from_ped(Global_34);
			if (iVar2 == -2097789604 || iVar2 == -1278264229)
			{
				_databinding_write_data_bool(Local_15.f_5, 1);
			}
		}
		if (!_databinding_read_data_bool(Local_15.f_5))
		{
			disable_control_action(0, 2139949496, false);
		}
		switch (func_5())
		{
			case 0:
				if (!bVar1)
				{
					bVar1 = func_2();
				}
				else
				{
					func_6(1);
				}
				break;
			case 1:
				func_7();
				if (_get_item_interaction_from_ped(Global_34) == -1773835 || _get_item_interaction_from_ped(Global_34) == 2092725031)
				{
					func_8(-898386032, 1, 0, 562618531);
					func_10(func_9(1137323725, -1196872246), 1);
					func_6(2);
				}
				break;
			case 2:
				func_6(3);
				break;
			case 3:
				if (_get_item_interaction_from_ped(Global_34) == -437636600 || _get_item_interaction_from_ped(Global_34) == 1104426680)
				{
					func_6(4);
				}
				else
				{
					fVar3 = _0xbc864a70ad55e0c1(Global_34, -473983589);
					if (fVar3 > 0f)
					{
						fVar4 = _0xd56e5f336c675efa(iVar0);
						fVar5 = ((Local_15.f_11 + fVar4) - (fVar3 * Local_15.f_11));
						fVar7 = ((Local_15.f_13 + fVar4) - (fVar3 * Local_15.f_13));
						fVar6 = (Local_15.f_12 - (fVar3 * Local_15.f_12));
						fVar8 = (Local_15.f_14 - (fVar3 * Local_15.f_14));
						_set_weapon_degradation(iVar0, fVar5);
						_set_weapon_damage(iVar0, fVar7, false);
						_set_weapon_dirt(iVar0, fVar6, false);
						_set_weapon_soot(iVar0, fVar8, false);
						func_11(iVar0);
					}
				}
				break;
			case 4:
				func_12(iVar0);
				func_6(1);
				break;
		}
		wait(0);
	}
	func_3();
}

void func_1(int iParam0)
{
	Local_15 = _uiflowblock_request(1069234796);
	if (!_databinding_is_data_id_valid(Local_15.f_1))
	{
		iVar1 = func_13();
		get_current_ped_weapon(iVar1, &iVar0, true, 0, false);
		Var2 = { func_14() };
		if (!func_15(&(Global_1940144->f_66), &Var2))
		{
			Local_15.f_7 = { Global_1940144->f_66 };
		}
		else
		{
			Var6 = { func_16(iVar0, 0, 0) };
			Local_15.f_7 = { func_17(iVar0, Var6, -1591664384, 0) };
		}
		Global_1940144->f_66 = { Var2 };
		Var11 = { Local_15.f_7 };
		Local_15.f_1 = _databinding_add_data_container_from_path("", "ItemInspection");
		Local_15.f_5 = _databinding_add_data_bool(Local_15.f_1, "Visible", 0);
		Local_15.f_2 = _0x46db71883ee9d5af(Local_15.f_1, "stats", &Var11, iVar1);
		Local_15.f_3 = _databinding_add_data_hash(Local_15.f_1, "itemLabel", func_18(iVar0, *iParam0));
		Local_15.f_4 = _databinding_add_data_string(Local_15.f_1, "tipText", func_19(iParam0));
		Local_15.f_11 = func_20((_get_weapon_degradation(*iParam0) - _0xd56e5f336c675efa(*iParam0)), 0f, 1f);
		Local_15.f_13 = func_20((_get_weapon_damage(*iParam0) - _0xd56e5f336c675efa(*iParam0)), 0f, 1f);
		Local_15.f_12 = _get_weapon_dirt(*iParam0);
		Local_15.f_14 = _get_weapon_soot(*iParam0);
	}
	_hide_hud_component(-1847602092);
}

int func_2()
{
	if (!_uiflowblock_is_loaded(Local_15))
	{
		return 0;
	}
	_uiflowblock_enter(Local_15, 0);
	if (!_uistatemachine_exists(-813354801))
	{
		if (!_uistatemachine_create(-813354801, Local_15))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_3()
{
	_0x9428447ded71fc7e("Inspect_Item_Scenes");
	_uiflowblock_release(&Local_15);
	Local_15 = 0;
	_databinding_remove_data_entry(Local_15.f_1);
	_display_hud_component(-1847602092);
	if (!_0x9e4ef615e307fbbe())
	{
		terminate_this_thread();
	}
}

bool func_4()
{
	if (is_entity_dead(Global_34))
	{
		return false;
	}
	if (is_ped_swimming(Global_34))
	{
		clear_ped_tasks(Global_34, 1, 0);
		return false;
	}
	if (!_0x038b1f1674f0e242(Global_34))
	{
		return false;
	}
	if ((!_0x4912dfe492db98cd(Global_34, "isInspecting") && !_0x4912dfe492db98cd(Global_34, "inInspectionMode")) && !Global_1940144->f_8)
	{
		return false;
	}
	if (func_21())
	{
		return false;
	}
	return true;
}

int func_5()
{
	return Local_15.f_6;
}

void func_6(int iParam0)
{
	Local_15.f_6 = iParam0;
}

void func_7()
{
	iVar0 = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_34, 0));
	if (func_22(-898386032, 1) && (_get_weapon_degradation(iVar0) != 0f && _get_weapon_degradation(iVar0) > _0xd56e5f336c675efa(iVar0)))
	{
		if (!_0x4912dfe492db98cd(Global_34, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			_0xcb9401f918cb0f75(Global_34, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", 1, -1);
		}
	}
	else
	{
		if (_0x4912dfe492db98cd(Global_34, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			_0xcb9401f918cb0f75(Global_34, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", 0, -1);
		}
		if ((!func_23(0, 0, 1) && !func_24()) && func_25())
		{
			if ((!Local_15.f_15 && _0xd56e5f336c675efa(iVar0) > 0f) && _get_weapon_degradation(iVar0) <= _0xd56e5f336c675efa(iVar0))
			{
				func_26("WEAPON_PERM_DEGREDATION", 10000, 0, 0, 0, 1);
				Local_15.f_15 = 1;
			}
			if (!Local_15.f_16 && !func_22(-898386032, 1))
			{
				if (_get_weapon_degradation(iVar0) > _0xd56e5f336c675efa(iVar0))
				{
					func_26("NO_GUN_OIL", 10000, 0, 0, 0, 1);
					Local_15.f_16 = 1;
				}
			}
		}
	}
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_28(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_29(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_30(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_22(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_31(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_32(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_32(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_8(iParam0, func_32(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_33(iParam0) == -427144552)
	{
		if (!func_34(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_35(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_16(iParam0, 0, 0) };
		if (func_36(0) && Var7.f_4 == 1084182731)
		{
			func_37(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_36(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_30(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

struct<2> func_9(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_11(int iParam0)
{
	iVar0 = func_13();
	get_current_ped_weapon(iVar0, &iVar1, true, 0, false);
	_0x951847cef3d829ff(Local_15.f_2, &(Local_15.f_7), iVar0);
	_databinding_write_data_hash_string(Local_15.f_3, func_18(iVar1, iParam0));
	_databinding_write_data_string(Local_15.f_4, func_19(&iParam0));
}

void func_12(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	_set_weapon_degradation(iParam0, _0xd56e5f336c675efa(iParam0));
	_set_weapon_damage(iParam0, _0xd56e5f336c675efa(iParam0), false);
	_set_weapon_dirt(iParam0, 0f, false);
	_set_weapon_soot(iParam0, 0f, false);
	func_11(iParam0);
}

int func_13()
{
	return get_player_ped(255);
}

struct<4> func_14()
{
	return Var0;
}

bool func_15(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

struct<5> func_16(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_38(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_33(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_17(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_39(bParam1) };
			if (bParam2 && func_40(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_41(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_41(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_42(iParam0, &Var6, 1728382685))
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
			Var0 = { func_43(bParam1) };
			switch (func_44(iParam0))
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
			if (func_45(iParam0, -1823706425))
			{
				Var0 = { func_17(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_45(iParam0, -1483207246))
			{
				Var0 = { func_17(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_17(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_45(iParam0, -1653629781))
			{
				Var0 = { func_17(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_46(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_45(iParam0, -1653629781))
			{
				Var0 = { func_17(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_17(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_27(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_47(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_18(int iParam0, int iParam1)
{
	StringCopy(&cVar0, _get_weapon_name(iParam0), 64);
	if (_0xd56e5f336c675efa(iParam1) > 0f)
	{
		StringCopy(&cVar0, _0x7a56d66c78d8ef8e(iParam0, _0xd56e5f336c675efa(iParam1)), 64);
	}
	return get_hash_key(&cVar0);
}

char* func_19(int iParam0)
{
	fVar0 = _get_weapon_degradation(*iParam0);
	fVar1 = _0xd56e5f336c675efa(*iParam0);
	if (fVar0 == 0f)
	{
		return _get_label_text_by_hash(1803343570);
	}
	if (fVar1 > 0f && fVar0 == fVar1)
	{
		return _get_label_text_by_hash(-1933427003);
	}
	return _get_label_text_by_hash(-54957657);
}

float func_20(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_21()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

bool func_22(int iParam0, int iParam1)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_33(iParam0);
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
			if (!func_48(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_49(iParam0))
			{
				return true;
			}
			break;
	}
	return func_32(iParam0, 0, 0, 0) >= iParam1;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_50())
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
	if (iParam0 == 0 && func_52(func_51(0)))
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
	switch (func_53(func_51(0)))
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

bool func_24()
{
	if (!func_54())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_25()
{
	if (!func_54())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

var func_26(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_28(int iParam0)
{
	return func_33(iParam0) == 2085633299;
}

int func_29(int iParam0, int iParam1)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_55(iParam0, 1399091007))
	{
		func_56(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_27(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_57() || bParam6)
	{
		func_58(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_59(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_59(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_60(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_33(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_44(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_61(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_55(iParam0, 474910316))
	{
		sVar17 = func_62(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_55(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_63(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_64(iParam0);
	if ((func_65(iVar12) && func_55(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_66(iParam0);
	}
	else if (func_33(iParam0) == -1037537535)
	{
		iVar19 = func_67(iParam0);
		if (func_27(iVar19, 0))
		{
			iVar18 = func_64(iVar19);
		}
	}
	if (func_68(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_69(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_70(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_71(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_72(iParam0, &cVar22))
		{
			sVar21 = func_74(func_73(cVar22), 109029619);
		}
	}
	func_75(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_31(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return Var0;
	}
	if (func_55(iParam0, -305066475))
	{
		if (func_76() == -1)
		{
			if (func_55(iParam0, -537818634))
			{
				return func_77(189951448);
			}
			else
			{
				return func_77(1176172851);
			}
		}
	}
	else if (func_55(iParam0, -537818634))
	{
		return func_77(-963660207);
	}
	if (func_55(iParam0, 2084895747))
	{
		return func_77(1694039471);
	}
	return Var2;
}

int func_32(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_33(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_29(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_78(iParam0, 0);
	}
	if (func_79(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_47(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_80(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_47(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_33(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_34(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_81(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_82(&Var0, func_39(0));
	}
	if (!func_83(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_84(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_85(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_86(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_79(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_87(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_16(iParam0, bParam4, 0) };
	Var6 = { func_17(iParam0, Var1, Var1.f_4, bParam4) };
	return func_85(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_36(bool bParam0)
{
	if (func_76() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_47(bParam0));
}

void func_37(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_88() && iParam2 == 0))
	{
		func_89(1);
		func_90(1);
	}
}

struct<4> func_38(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_47(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_17(1328661203, func_14(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_17(1328661203, func_14(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_17(1328661203, func_14(), -1591664384, bParam0);
}

struct<4> func_39(bool bParam0)
{
	iVar0 = func_47(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_17(923904168, func_38(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_17(923904168, func_38(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_17(923904168, func_38(bParam0), -740156546, 0);
}

bool func_40(int iParam0, bool bParam1)
{
	if (func_44(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_91();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_41(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_92(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_42(int iParam0, var uParam1, int iParam2)
{
	if (func_93(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_43(bool bParam0)
{
	iVar0 = func_47(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_17(271701509, func_38(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_17(271701509, func_38(bParam0), 12999093, 0);
}

int func_44(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_45(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_44(iParam0);
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
			if (func_94(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_46(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_95(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_47(bool bParam0)
{
	if (func_76() == -1)
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

bool func_48(int iParam0, int iParam1)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_29(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_96("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_84(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_97(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_86(iVar1);
				return true;
			}
			iVar3++;
		}
		func_86(iVar1);
	}
	return false;
}

bool func_49(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_44(iParam0);
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
	iVar1 = func_98(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_99(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_100(iParam0);
	iVar2 = func_99(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

bool func_50()
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
	if (!func_52(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_51(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_52(struct<2> Param0)
{
	if (!func_101(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_102(Param0))
	{
		return false;
	}
	return true;
}

int func_53(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_54()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_55(int iParam0, int iParam1)
{
	if (!func_27(iParam0, 0))
	{
		return func_104(func_103(iParam0), iParam1);
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

void func_56(int iParam0, var uParam1, var uParam2)
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

bool func_57()
{
	return !&Global_1913504;
}

void func_58(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_59(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_60(int iParam0, int iParam1)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_61(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_62(int iParam0)
{
	if (func_55(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_55(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_55(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_55(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_55(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_55(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_55(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_55(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_55(iParam0, -352095726) || func_55(iParam0, -2014783736)) || func_55(iParam0, -545064757)) || func_55(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_63(int iParam0)
{
	if (func_55(iParam0, -189374246))
	{
		if (((func_105(iParam0, -1305775593) || func_105(iParam0, 1384151091)) || func_105(iParam0, 2075388272)) || func_105(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_55(iParam0, -753854379) || func_55(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_64(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_65(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_66(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	iVar0 = func_107(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_108(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_109(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_110(iVar14))
			{
				func_111(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_111(iVar11);
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_69(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_27(iParam0, 0) && !func_112(func_103(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_70(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_71(int iParam0, int iParam1)
{
	iVar0 = func_113(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_72(int iParam0, char* sParam1)
{
	if (!func_27(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_114(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_115(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_116(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_74(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_70(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_75(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_117(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_76()
{
	return Global_1572887->f_13;
}

struct<2> func_77(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_78(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_81(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_82(&Var0, func_39(0));
	}
	if (!func_83(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_86(iVar14);
	return uVar15;
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_80(int iParam0, bool bParam1)
{
	Var0 = { func_16(iParam0, bParam1, 0) };
	return func_17(iParam0, Var0, Var0.f_4, bParam1);
}

struct<14> func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_82(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_83(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_47(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_84(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_85(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_118(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_46(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_36(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_76() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_119(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_120(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_47(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_86(int iParam0)
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

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_118(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_79(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_36(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_121(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_122(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_119(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_120(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_47(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_88()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_124(func_123(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_125();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_89(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_90(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

bool func_91()
{
	return (func_126(-1185145312, 0, 0, 0) > 0 && func_127(func_17(889965687, func_38(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_92(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_79(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_17(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_47(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_47(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_93(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_47(0);
	*uParam1 = { func_17(iParam0, func_39(0), iParam3, 0) };
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

bool func_94(int iParam0, int iParam1, int iParam2)
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

bool func_95(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_47(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_96(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_47(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_98(int iParam0)
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

int func_99(var uParam0, int iParam1)
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

int func_100(int iParam0)
{
	iVar0 = func_44(iParam0);
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

bool func_101(int iParam0)
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

int func_102(int iParam0)
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

int func_103(int iParam0)
{
	return iParam0;
}

int func_104(int iParam0, int iParam1)
{
	if (!func_112(iParam0, 2))
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

int func_105(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
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

int func_107(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

struct<10> func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_109(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_110(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
	}
	if (func_55(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_112(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_113(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_114(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_64(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_115(int iParam0)
{
	if (func_44(iParam0) == -126813555 || func_44(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_116(int iParam0)
{
	if (!func_27(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_66(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_117(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_118(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_119(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_128(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_130(func_129(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_131(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_120(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_79(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_132(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_122(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_17(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_123(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_124(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_32(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_133(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_134(iParam1, bParam4));
	}
	return iVar0;
}

void func_125()
{
	if (!func_27(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_135(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

int func_126(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_136(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_47(bParam1), iParam0, iParam3);
}

int func_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_137(&uParam0, iParam4, bParam5, iParam6);
}

bool func_128(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_138(uParam1->f_8, iParam0, uVar0, 2048) || func_138(uParam1->f_8, iParam0, uVar0, 32768)) || func_138(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_138(uParam1->f_8, iParam0, uVar0, 4) || func_138(uParam1->f_8, iParam0, uVar0, 256)) || func_138(uParam1->f_8, iParam0, uVar0, 65536)) || func_138(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_138(uParam1->f_8, iParam0, uVar0, 1) || func_138(uParam1->f_8, iParam0, uVar0, 8)) || func_138(uParam1->f_8, iParam0, uVar0, 65536)) || func_138(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_138(uParam1->f_8, iParam0, uVar0, 1) || func_138(uParam1->f_8, iParam0, uVar0, 16)) || func_138(uParam1->f_8, iParam0, uVar0, 2)) || func_138(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_138(uParam1->f_8, iParam0, uVar0, 8) || func_138(uParam1->f_8, iParam0, uVar0, 4096)) || func_138(uParam1->f_8, iParam0, uVar0, 256)) || func_138(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_129(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_130(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_139(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_139(iParam1, 2, 0, 0);
	return -1;
}

int func_131(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_139(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_132(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_140((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_14() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_133(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_141(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_142(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1)
{
	if (!bParam1 || func_143())
	{
		return func_92(iParam0, func_38(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_136(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_137(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_144(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_138(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_145(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_146(iParam0, iParam1, iParam2, iParam3);
}

bool func_140(var uParam0)
{
	if (!func_147(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_141(int iParam0)
{
	if (!func_68(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_148(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_142(int iParam0, int iParam1)
{
	if (!func_27(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_149(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_143()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_150(iVar0))
	{
		return false;
	}
	return true;
}

bool func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_47(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_95(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_151(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_147(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0, int iParam1)
{
	iVar0 = func_152(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_149(int iParam0, int iParam1)
{
	Var0 = { func_153(iParam0) };
	return func_154(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_150(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

void func_151(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_155(&(uParam0->f_4));
}

int func_152(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_153(int iParam0)
{
	Var0 = { func_154(iParam0, 1328661203, func_14(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_154(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_27(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

