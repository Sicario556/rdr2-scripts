void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(514))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (func_3(4, func_2(4), &uLocal_17, iLocal_15))
		{
			func_1();
		}
		switch (iLocal_14)
		{
			case 0:
				func_4(&uLocal_17);
				func_5(1);
				break;
			case 1:
				func_5(2);
				break;
			case 2:
				if (func_6())
				{
					if (!func_7(4, 536870912))
					{
						func_8(4, 536870912, 1);
						func_5(3);
					}
				}
				break;
			case 3:
				if (func_9())
				{
					func_5(4);
				}
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()
{
	if (!is_entity_dead(iLocal_15))
	{
		set_ped_as_no_longer_needed(&iLocal_15);
	}
	func_10(&uLocal_17);
	terminate_this_thread();
}

int func_2(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

bool func_3(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_11(0) == 1 || func_11(0) == 2) || func_11(0) == 8) || func_12(&Global_1935630, 2048))
			{
				func_13(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_11(0) == 11)
			{
				func_13(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_11(0) == 6)
			{
				func_13(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_13(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_14((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_14((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_15();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_14(iVar2) > func_14(iVar1))
				{
					if (func_14(iVar0) > func_14(iVar2) + 1 || func_14(iVar0) < func_14(iVar1))
					{
						func_13(uParam2, 32);
					}
				}
				else if (func_14(iVar0) > func_14(iVar2) + 1 && func_14(iVar0) < func_14(iVar1))
				{
					func_13(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_16(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_16(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_17(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_17(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_18((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_13(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_19(&iParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_20(&iParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_21(&(uParam2->f_13)))
					{
						func_22(&(uParam2->f_13), 0f);
					}
					else if (func_23(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_24(&(uParam2->f_13));
						func_13(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_21(&(uParam2->f_13)))
					{
						func_24(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_25())
			{
				func_13(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_26())
			{
				func_13(uParam2, 2048);
			}
		}
		if (func_12(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_13(uParam2, 128);
		}
		if (func_27(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_13(uParam2, 256);
		}
	}
	if ((((((((((func_28(*uParam2, 2) || func_28(*uParam2, 4)) || func_28(*uParam2, 8)) || func_28(*uParam2, 16)) || func_28(*uParam2, 32)) || func_28(*uParam2, 64)) || func_28(*uParam2, 128)) || func_28(*uParam2, 256)) || func_28(*uParam2, 512)) || func_28(*uParam2, 1024)) || func_28(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_4(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_5(int iParam0)
{
	iLocal_14 = iParam0;
}

bool func_6()
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!is_ped_on_mount(Global_35) || !_is_ped_getting_into_a_mount_seat(Global_35, true))
	{
		return false;
	}
	if (is_entity_dead(get_mount(Global_35)))
	{
		return false;
	}
	if (_0xf103823ffe72bb49(get_mount(Global_35)) == Global_35)
	{
		return false;
	}
	if (func_29(get_mount(Global_35), 1041577989))
	{
		return false;
	}
	if (!does_entity_exist(iLocal_15))
	{
		iLocal_15 = get_mount(Global_35);
		iLocal_16 = get_game_timer() + 2000;
		return false;
	}
	if (get_game_timer() < iLocal_16)
	{
		return false;
	}
	task_horse_action(get_mount(Global_35), 2, 0, 0);
	return true;
}

bool func_7(int iParam0, int iParam1)
{
	return func_30(Global_40.f_11623[iParam0]->f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_31(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
	else
	{
		func_32(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
}

bool func_9()
{
	if (!does_entity_exist(iLocal_15))
	{
		return false;
	}
	if (func_29(get_mount(Global_35), 1041577989))
	{
		return false;
	}
	if (func_29(iLocal_15, 518218985))
	{
		return true;
	}
	_0xbcc76708e5677e1d(iLocal_15, 0);
	_task_smart_flee_style_ped(iLocal_15, Global_35, 3, 0, -1f, -1, 0);
	return false;
}

void func_10(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_21(&(uParam0->f_13)))
	{
		func_24(&(uParam0->f_13));
	}
}

int func_11(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(var uParam0, int iParam1)
{
	func_33(uParam0, iParam1);
}

int func_14(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_15()
{
	return &Global_1899515;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_34((*Global_1835011)[iParam0]->f_1);
}

int func_17(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_35((*Global_1835011)[iParam0]->f_1);
}

bool func_18(int iParam0)
{
	iVar0 = func_36();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

int func_19(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_37(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*iParam0) };
	vVar5 = { get_entity_coords(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_38(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*iParam0, true, false) };
		if (!func_39(iVar1, 0))
		{
			func_40(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

bool func_21(var uParam0)
{
	return func_41(*uParam0, 1);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_42() - fParam1);
	func_43(uParam0, 1);
	func_44(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_23(var uParam0)
{
	if (!func_21(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_45(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_46() - round((uParam0->f_1 * 1000f)));
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_25()
{
	return Global_1392040->f_6;
}

bool func_26()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_27(var uParam0, int iParam1)
{
	return func_30(*uParam0, iParam1);
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_29(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_33(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_34(int iParam0)
{
	iVar0 = func_47(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_35(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_48(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_37(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_38(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		uVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = uVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_49(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_39(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_40(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_29(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_41(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_42()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_45(var uParam0)
{
	return func_41(*uParam0, 2);
}

int func_46()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_47(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_48(iParam0);
}

int func_48(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_51(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_49(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_50(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_51(int iParam0)
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

