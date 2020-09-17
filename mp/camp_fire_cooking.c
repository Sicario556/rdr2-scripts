void __EntryFunction__()
{
	bLocal_13 = true;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
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
			return bLocal_13;
		}
		else
		{
			return true;
		}
	}
	return bLocal_13;
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
	if (!_does_scenario_point_exist(iLocal_16))
	{
		bLocal_13 = false;
	}
	if (bLocal_18)
	{
		if (!does_entity_exist(Local_19.f_3))
		{
			bLocal_13 = false;
		}
		else if (is_ped_dead_or_dying(Local_19.f_3, true))
		{
			bLocal_13 = false;
		}
		else if (!_0x9c54041bb66bcf9e(Local_19.f_3, iLocal_16))
		{
			bLocal_13 = false;
		}
	}
	if (!bLocal_13)
	{
		return;
	}
	switch (Local_19.f_7)
	{
		case 0:
			if (!does_entity_exist(Local_19.f_3))
			{
				Local_19.f_3 = _get_ped_using_scenario_point(iLocal_16);
				bLocal_18 = true;
			}
			else
			{
				Local_19.f_7 = 1;
			}
			break;
		case 1:
			if (has_anim_event_fired(Local_19.f_3, -1134697563))
			{
				if (!does_entity_exist(Local_19.f_2))
				{
					Local_19.f_2 = _0x4d0d2e3d8bc000eb(Local_19.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", 0);
				}
				Local_19.f_7 = 2;
			}
			break;
		case 2:
			if (does_entity_exist(Local_19.f_2))
			{
				Local_19.f_1 = get_object_index_from_entity_index(Local_19.f_2);
				_set_object_burn_level(Local_19.f_1, 0f, true);
				Local_19.f_7 = 3;
			}
			else
			{
				bLocal_13 = false;
			}
			break;
		case 3:
			if (has_anim_event_fired(Local_19.f_3, -1334721097))
			{
				if (does_entity_exist(Local_19.f_2))
				{
					if (!func_12(&(Local_19.f_4)))
					{
						func_13(&(Local_19.f_4));
					}
					Local_19.f_7 = 4;
				}
				else
				{
					bLocal_13 = false;
				}
			}
			break;
		case 4:
			if (does_entity_exist(Local_19.f_2))
			{
				Local_19 = func_14(&(Local_19.f_4));
				if (Local_19 > 0f && Local_19 <= 10f)
				{
					_set_object_burn_level(Local_19.f_1, (Local_19 / 10f), true);
				}
				else
				{
					bLocal_13 = false;
				}
			}
			break;
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
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_17(&iVar0);
	}
}

bool func_12(var uParam0)
{
	return func_18(*uParam0, 1);
}

void func_13(var uParam0)
{
	func_19(uParam0, 0f);
}

float func_14(var uParam0)
{
	if (!func_12(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_20(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_21() - uParam0->f_1);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_19(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_21() - fParam1);
	func_22(uParam0, 1);
	func_23(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_20(var uParam0)
{
	return func_18(*uParam0, 2);
}

float func_21()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

