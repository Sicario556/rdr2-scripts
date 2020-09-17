void __EntryFunction__()
{
	if (has_force_cleanup_occurred(514))
	{
		func_1(&vVar0);
	}
	while (func_2(&vVar0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (func_3(&vVar0))
				{
					iLocal_6 = 1;
				}
				vVar0.x = get_id_of_this_thread();
				break;
			case 1:
				func_4(&vVar0);
				if (func_6(func_5()))
				{
					iLocal_6 = 2;
				}
				if (vVar0.z)
				{
					iLocal_6 = 2;
				}
				break;
			case 2:
				func_1(&vVar0);
				break;
		}
		wait(0);
	}
	func_1(&vVar0);
}

void func_1(var uParam0)
{
	if (uParam0->f_1)
	{
		return;
	}
	func_7(uParam0);
	terminate_this_thread();
}

bool func_2(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	if (func_8() != func_9())
	{
		return false;
	}
	if (func_10(&Global_1935630, 2097152))
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	return true;
}

void func_4(int iParam0)
{
	if (Local_0 == 4)
	{
		if ((func_11(4) || _0x5203038ff8bae577(Local_0.f_1, 25, 5000)) || _0x5203038ff8bae577(Local_0.f_1, 55, 5000))
		{
			if (func_13(func_12(), 262.3945f, 2f))
			{
				func_14(5);
			}
			func_15(4);
			return;
		}
	}
	if (Local_0 >= 3 && Local_0.f_5 <= 200)
	{
		Local_0.f_5++;
		return;
	}
	Local_0.f_5 = 0;
	switch (Local_0)
	{
		case 0:
			func_16();
			func_14(1);
			break;
		case 1:
			if (func_17())
			{
				func_14(2);
			}
			break;
		case 2:
			if (func_18() && func_19())
			{
				if (func_20(func_12(), 0f, 0, 1))
				{
					func_14(3);
				}
			}
			break;
		case 3:
			if (!func_21())
			{
				return;
			}
			if (!is_entity_in_volume(Global_35, &(Local_0.f_2[0]), true, 0))
			{
				return;
			}
			set_entity_visible(Local_0.f_1, true);
			func_14(4);
			break;
		case 4:
			if (!func_11(1) && func_13(1457.186f, 314.9523f, 92.7676f, 85.4782f, 1065353216))
			{
				func_22();
				func_15(1);
			}
			if (func_23())
			{
				func_24();
				func_14(5);
			}
			break;
		case 5:
			if (func_20(func_12(), 262.3945f, 1, 0))
			{
				func_14(6);
			}
			break;
		case 6:
			if (!func_11(2) && func_25())
			{
				func_15(2);
			}
			if (func_21())
			{
				func_14(0);
			}
			break;
	}
}

int func_5()
{
	return 2;
}

bool func_6(int iParam0)
{
	return func_26(iParam0, 2);
}

void func_7(var uParam0)
{
}

int func_8()
{
	return Global_1894899->f_2;
}

int func_9()
{
	return 69;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_11(int iParam0)
{
	return func_27(Local_0.f_4, iParam0);
}

Vector3 func_12()
{
	return 1460.54f, 315.1411f, 92.7676f;
}

bool func_13(vector3 vParam0, float fParam3, float fParam4)
{
	if (is_ped_active_in_scenario(Local_0.f_1, 1))
	{
		_0xa3a9299c4f2adb98(Local_0.f_1);
	}
	if (!func_28(Local_0.f_1, vParam0, fParam3, 2f, 20f, 1))
	{
		if (!func_29(Local_0.f_1, 2106541073))
		{
			task_go_straight_to_coord(Local_0.f_1, vParam0, fParam4, -1, fParam3, 1056964608, 0);
		}
		return false;
	}
	return true;
}

void func_14(int iParam0)
{
	Local_0 = iParam0;
}

void func_15(int iParam0)
{
	if (!func_27(Local_0.f_4, iParam0))
	{
		func_30(&(Local_0.f_4), iParam0);
	}
}

void func_16()
{
	func_31(1);
	func_31(2);
}

bool func_17()
{
	request_model(func_32(), false);
	_0xed9582b3da8f02b4(1);
	if (_0x5c16855277819bbf() == 1 && has_model_loaded(func_32()))
	{
		return true;
	}
	return false;
}

int func_18()
{
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!_does_volume_exist(&(Local_0.f_2[iVar0])))
		{
			iVar1 = iVar0;
			Var2 = { func_33(iVar1) };
			Local_0.f_2[iVar0] = _create_volume_by_hash_with_custom_name(Var2.f_10, Var2, Var2.f_3, Var2.f_6, Var2.f_9);
		}
		iVar0++;
	}
	return 1;
}

int func_19()
{
	if (!does_entity_exist(Local_0.f_1))
	{
		Local_0.f_1 = func_35(func_32(), func_12(), func_34(), 1, 1, 1, 0);
		return 0;
	}
	set_blocking_of_non_temporary_events(Local_0.f_1, true);
	set_entity_visible(Local_0.f_1, false);
	return 1;
}

bool func_20(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	if (!func_29(Local_0.f_1, -1098463898))
	{
		task_start_scenario_at_position(Local_0.f_1, 1774730608, vParam0, fParam3, 0, bParam4, bParam5, 0, -1f, false);
	}
	if (is_ped_active_in_scenario(Local_0.f_1, 0))
	{
		return true;
	}
	return false;
}

bool func_21()
{
	iVar0 = get_clock_day_of_week();
	if ((iVar0 != 0 && iVar0 != 3) && iVar0 != 5)
	{
		return false;
	}
	iVar1 = get_clock_hours();
	if (!func_36(iVar1, 9, 12) && !func_36(iVar1, 21, 0))
	{
		return false;
	}
	return true;
}

void func_22()
{
	if (!func_29(Local_0.f_1, 150319005))
	{
		task_look_at_entity(Local_0.f_1, Global_35, 0, 0, 51, 1);
	}
}

bool func_23()
{
	if (func_11(1) && !func_21())
	{
		return true;
	}
	return false;
}

void func_24()
{
	if (func_29(Local_0.f_1, 150319005))
	{
		task_clear_look_at(Local_0.f_1);
	}
}

bool func_25()
{
	set_model_as_no_longer_needed(func_32());
	if (does_entity_exist(Local_0.f_1))
	{
		delete_ped(&(Local_0.f_1));
	}
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (_does_volume_exist(&(Local_0.f_2[iVar0])))
		{
			_delete_volume(&(Local_0.f_2[iVar0]));
		}
		iVar0++;
	}
	_0x7d4e70a67a651c71(1);
	return true;
}

bool func_26(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	return (Global_40.f_9020[iParam0] && iParam1) != 0;
}

bool func_27(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_28(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_38(get_entity_heading(iParam0));
	fParam4 = func_38(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
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

void func_30(var uParam0, int iParam1)
{
	func_39(uParam0, iParam1);
}

void func_31(int iParam0)
{
	if (func_27(Local_0.f_4, iParam0))
	{
		func_40(&(Local_0.f_4), iParam0);
	}
}

int func_32()
{
	return -650182355;
}

struct<11> func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1443.915f, 319.475f, 88.464f };
			Var0.f_3 = { 0f, 0f, -0.207f };
			Var0.f_6 = { 20.418f, 27f, 4.659f };
			Var0.f_9 = "TS_ERD_SPAWN_TRIGGER";
			Var0.f_10 = -1612834106;
			break;
	}
	return Var0;
}

float func_34()
{
	return 90.68f;
}

int func_35(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_36(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_37(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

float func_38(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_40(var uParam0, int iParam1)
{
	func_41(uParam0, iParam1);
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

