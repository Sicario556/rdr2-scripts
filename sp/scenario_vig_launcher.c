void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_6 = -1;
	iLocal_7 = -1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
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
	_0xe7282390542f570d(iLocal_2);
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
	if (iLocal_1 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
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
	switch (iLocal_5)
	{
		case 0:
			if (!_does_scenario_point_exist(iLocal_3))
			{
				iLocal_5 = 6;
				return;
			}
			bLocal_11 = func_12() == func_13();
			iLocal_8 = _get_ped_using_scenario_point(iLocal_3);
			iLocal_9 = _get_scenario_point_type(iLocal_3);
			if (func_14(iLocal_8, 0) && !_0x800df3fc913355f3(_0x32a1e3b83d501096(iLocal_8)))
			{
				iLocal_5 = 6;
				return;
			}
			iLocal_5 = 1;
			break;
		case 1:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				if (is_ped_active_in_scenario(iLocal_8, 0))
				{
					iLocal_5 = 2;
				}
			}
			else if (is_ped_active_in_scenario(iLocal_8, 1))
			{
				iLocal_5 = 2;
			}
			break;
		case 2:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				iLocal_7 = func_16(iLocal_9);
			}
			else
			{
				iLocal_6 = func_17(iLocal_9, iLocal_8);
				iLocal_10 = func_18();
				if (iLocal_10 == -1)
				{
					iLocal_5 = 6;
					return;
				}
			}
			if (func_19(iLocal_6) || func_20(iLocal_7))
			{
				iLocal_5 = 3;
			}
			else
			{
				iLocal_5 = 6;
				return;
			}
			break;
		case 3:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				func_21(iLocal_7, 1, 1, 0, 0);
				iLocal_5 = 6;
			}
			else if (func_22())
			{
				iLocal_5 = 4;
			}
			break;
		case 4:
			if (func_23())
			{
				force_cleanup_for_thread_with_this_id(Global_1415419->f_9721[iLocal_10]->f_1, 523);
				iLocal_5 = 5;
				return;
			}
			if (!is_thread_active((*Global_1425179)[iLocal_10]->f_1, false))
			{
				iLocal_5 = 5;
			}
			break;
		case 5:
			if (!is_thread_active((*Global_1425179)[iLocal_10]->f_1, false))
			{
				func_24();
				iLocal_5 = 6;
			}
			break;
		case 6:
			iLocal_0 = 0;
			return;
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
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_25(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_26(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_27(&iVar0);
	}
}

int func_12()
{
	return Global_1894899->f_2;
}

int func_13()
{
	return Global_40.f_4283.f_1;
}

bool func_14(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_28(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_28(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_28(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_15()
{
	if (func_29() && !func_30())
	{
		return true;
	}
	if (!func_14(Global_35, 0))
	{
		return true;
	}
	if (!func_14(iLocal_8, 0))
	{
		return true;
	}
	if (!_0x9c54041bb66bcf9e(iLocal_8, iLocal_3))
	{
		return true;
	}
	if (!Global_1415419->f_4 && !bLocal_11)
	{
		return true;
	}
	return false;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 573563343:
		case 1340532149:
			iVar0 = get_random_int_in_range(260, 265 + 1);
			return iVar0;
		case 2024871051:
			return 13;
		case 1015352373:
			return 12;
		case 196070706:
			return 18;
		case 492051452:
			return 20;
	}
	return -1;
}

int func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1157205070:
			if (is_ped_male(iParam1))
			{
				return 26;
			}
			else
			{
				return 25;
			}
			break;
	}
	return -1;
}

int func_18()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!(*Global_1425179)[iVar0]->f_2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_19(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

int func_21(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_31(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_32(iVar0))
		{
		}
		else
		{
			Global_1327590->f_19574[iVar0] = iParam0;
			Global_1327590->f_19574[iVar0]->f_7 = iParam1;
			Global_1327590->f_19574[iVar0]->f_3 = iParam2;
			Global_1327590->f_19574[iVar0]->f_1 = iParam3;
			Global_1327590->f_19574[iVar0]->f_2 = iParam4;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_22()
{
	request_script_with_name_hash(&(Global_1415419->f_19[iLocal_6]));
	if (has_script_with_name_hash_loaded(&(Global_1415419->f_19[iLocal_6])))
	{
		func_33(iLocal_6);
		Var0 = -1;
		Var0.f_11 = -1;
		Var0 = iLocal_6;
		Var0.f_1 = { _get_scenario_point_coords(iLocal_3, true) };
		Var0.f_4 = { 0f, 0f, _get_scenario_point_heading(iLocal_3, true) };
		Var0.f_10 = 1;
		Var0.f_8 = iLocal_8;
		(*Global_1425179)[iLocal_10] = iLocal_6;
		(*Global_1425179)[iLocal_10]->f_1 = start_new_script_with_name_hash_and_args(&(Global_1415419->f_19[iLocal_6]), &Var0, 13, 1024);
		(*Global_1425179)[iLocal_10]->f_2 = 1;
		set_script_with_name_hash_as_no_longer_needed(&(Global_1415419->f_19[iLocal_6]));
	}
	else
	{
		return false;
	}
	return true;
}

bool func_23()
{
	if (func_29() && !func_30())
	{
		return true;
	}
	if (!func_14(Global_35, 0))
	{
		return true;
	}
	return false;
}

void func_24()
{
	(*Global_1425179)[iLocal_10] = -1;
	(*Global_1425179)[iLocal_10]->f_1 = 0;
	(*Global_1425179)[iLocal_10]->f_2 = 0;
}

void func_25(int iParam0)
{
}

void func_26(int iParam0)
{
}

void func_27(int iParam0)
{
}

bool func_28(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_29()
{
	return Global_1898164->f_163;
}

bool func_30()
{
	return func_34(Global_1415419->f_3, 1);
}

bool func_31(int iParam0)
{
	if (func_35(iParam0))
	{
		return true;
	}
	if (func_36() == iParam0)
	{
		return true;
	}
	if (func_37(iParam0))
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	return &Global_1327590->f_19574[iParam0] != -1;
}

void func_33(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0]->f_5 = func_39();
	if (iParam0 <= 74)
	{
		Global_1415419->f_7 = get_game_timer();
	}
	else
	{
		Global_1415419->f_8 = get_game_timer();
	}
	func_40(&(Global_32074.f_2697.f_6[iParam0]->f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0]->f_1++;
	Global_32074.f_2697++;
}

bool func_34(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_35(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_41(iVar0) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_36()
{
	return Global_1327590->f_19615;
}

bool func_37(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590->f_19574);
}

var func_39()
{
	return &Global_1899515;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_42(*uParam0);
	iVar1 = func_43(*uParam0);
	iVar2 = func_44(*uParam0);
	iVar3 = func_45(*uParam0);
	iVar4 = func_46(*uParam0);
	iVar5 = func_47(*uParam0);
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
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_48(iVar1, iVar0);
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
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_41(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	return &(Global_1327590->f_19574[iParam0]);
}

var func_42(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_50(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_43(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_44(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_45(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_46(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_47(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1)
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

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_51(uParam0, iParam6);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_54(uParam0, iParam3);
	func_55(uParam0, iParam2);
	func_56(uParam0, iParam1);
}

int func_50(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_53(var uParam0, int iParam1)
{
	iVar0 = func_43(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

