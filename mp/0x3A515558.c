void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&Local_19);
	}
	while (!bVar0)
	{
		if (func_2(&Local_19))
		{
			bVar0 = true;
		}
		switch (func_3(&Local_19))
		{
			case 0:
				if (func_4(&Local_19))
				{
					func_5(&Local_19, 1);
				}
				else
				{
					bVar0 = true;
				}
				break;
			case 1:
				switch (func_6(&Local_19))
				{
					case 0:
						if (!func_7(&(Local_19.f_1)))
						{
							func_8(&(Local_19.f_1), 0);
						}
						if (func_9(&(Local_19.f_1)) >= 10f)
						{
							bVar0 = true;
						}
						break;
					case 1:
						if (func_7(&(Local_19.f_1)))
						{
							func_10(&(Local_19.f_1));
						}
						func_5(&Local_19, 2);
						break;
					case 2:
						bVar0 = true;
						break;
				}
				break;
			case 2:
				if (func_11(&Local_19))
				{
					func_5(&Local_19, 3);
				}
				break;
			case 3:
				if (!func_12(&Local_19))
				{
					bVar0 = true;
				}
				break;
		}
		wait(0);
	}
	func_1(&Local_19);
}

void func_1(var uParam0)
{
	func_13(&(uParam0->f_4));
	if (_databinding_is_data_id_valid(uParam0->f_9))
	{
		_databinding_remove_data_entry(uParam0->f_9);
	}
	if (_0x9e4ef615e307fbbe())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_2(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (func_3(uParam0) >= 3)
	{
		if (!_0xec7e480ff8bd0bed(player_ped_id()))
		{
			return true;
		}
	}
	return false;
}

int func_3(var uParam0)
{
	return *uParam0;
}

bool func_4(var uParam0)
{
	if (!func_14(&(uParam0->f_4), -980176693, 978408792, 978408792))
	{
		return false;
	}
	return true;
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_6(var uParam0)
{
	switch (func_15(&(uParam0->f_4)))
	{
		case 0:
			return 0;
		case 2:
			return 2;
	}
	return 1;
}

bool func_7(var uParam0)
{
	return func_16(*uParam0, 1);
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1 || !func_7(uParam0))
	{
		func_17(uParam0);
	}
}

float func_9(var uParam0)
{
	if (!func_7(uParam0))
	{
		return 0f;
	}
	if (func_18(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_19() - uParam0->f_1);
}

void func_10(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_11(var uParam0)
{
	if (!func_20(&(uParam0->f_4)))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(uParam0->f_9))
	{
		uParam0->f_9 = _databinding_add_data_container_from_path("", "DynamicAnimalMap");
		if (!_databinding_is_data_id_valid(uParam0->f_9))
		{
			return false;
		}
	}
	iVar2 = 0;
	while (iVar2 < 28)
	{
		func_21(iVar2, &uVar0, &iVar1);
		uParam0->f_10[iVar2] = _databinding_add_data_container(uParam0->f_9, func_23(func_22(iVar2)));
		uParam0->f_10[iVar2]->f_1 = _databinding_add_data_hash(&(uParam0->f_10[iVar2]), func_23(func_24(iVar2)), func_25(&uVar0, iVar1));
		uParam0->f_10[iVar2]->f_2 = _databinding_add_data_bool(&(uParam0->f_10[iVar2]), func_23(func_26(iVar2)), _unlock_is_unlocked(func_27(&uVar0, iVar1)));
		iVar2++;
	}
	_task_item_interaction(player_ped_id(), 17745825, 889797228, 1, 0, -1082130432);
	return true;
}

bool func_12(var uParam0)
{
	return true;
}

void func_13(var uParam0)
{
	_uistatemachine_destroy_and_clear(&(uParam0->f_3));
	if (uParam0->f_4 != 0)
	{
		_uiflowblock_release(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
}

bool func_14(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return false;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = iParam3;
	*uParam0 = 1;
	return true;
}

int func_15(var uParam0)
{
	if (!*uParam0)
	{
		return 2;
	}
	if (uParam0->f_4 == 0)
	{
		uParam0->f_4 = _uiflowblock_request(uParam0->f_1);
		if (uParam0->f_4 == 0)
		{
			return 2;
		}
	}
	if (!_uiflowblock_is_loaded(uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_17(var uParam0)
{
	func_28(uParam0, 0f);
}

bool func_18(var uParam0)
{
	return func_16(*uParam0, 2);
}

float func_19()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_20(var uParam0)
{
	if (_uiflowblock_enter(uParam0->f_4, uParam0->f_2))
	{
	}
	else
	{
		return false;
	}
	if (_uistatemachine_create(uParam0->f_3, uParam0->f_4))
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_21(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 2;
			*uParam2 = 1;
			break;
		case 6:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 5;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 9:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
		case 11:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
		case 12:
			*uParam1 = 8;
			*uParam2 = 1;
			break;
		case 13:
			*uParam1 = 3;
			*uParam2 = 1;
			break;
		case 14:
			*uParam1 = 7;
			*uParam2 = 0;
			break;
		case 15:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
		case 16:
			*uParam1 = 12;
			*uParam2 = 1;
			break;
		case 17:
			*uParam1 = 7;
			*uParam2 = 1;
			break;
		case 18:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 19:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 20:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 21:
			*uParam1 = 5;
			*uParam2 = 1;
			break;
		case 22:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 23:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
		case 24:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 25:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 26:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 27:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	}
}

struct<16> func_22(int iParam0)
{
	StringCopy(&cVar0, "Zone", 128);
	StringIntConCat(&cVar0, iParam0 + 1, 128);
	return cVar0;
}

var func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

struct<16> func_24(int iParam0)
{
	StringCopy(&cVar0, "animalType", 128);
	return cVar0;
}

int func_25(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -317373141;
				case 1:
					return -1632720801;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2046336256;
				case 1:
					return 2085003676;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -110898462;
				case 1:
					return 56059597;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1520433456;
				case 1:
					return 751508871;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1047689404;
				case 1:
					return -768169834;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -617397357;
				case 1:
					return 413253235;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -888046168;
				case 1:
					return 1499142717;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 159901881;
				case 1:
					return -4270809;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 417928156;
				case 1:
					return -1753771781;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1598011864;
				case 1:
					return -1165067836;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2103187059;
				case 1:
					return 1950895318;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1979107230;
				case 1:
					return 2073533311;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -708560898;
				case 1:
					return -1077605376;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1005924273;
				case 1:
					return -1245170742;
				default:
					break;
			}
			break;
	}
	return 0;
}

struct<16> func_26(int iParam0)
{
	StringCopy(&cVar0, "isVisible", 128);
	return cVar0;
}

int func_27(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1089915990;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -773408572;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2082859740;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -889608768;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -909138717;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1835385888;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -771537204;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -366807494;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1843292837;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -804810882;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 189635081;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2001092856;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1371968565;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1114581963;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_28(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_19() - fParam1);
	func_29(uParam0, 1);
	func_30(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_30(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

