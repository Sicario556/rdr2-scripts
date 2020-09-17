void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_87 = 5;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
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
	switch (iLocal_18)
	{
		case 0:
			if (!_does_scenario_point_exist(iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_85 = _get_ped_using_scenario_point(iLocal_16);
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			bLocal_92 = _0x800df3fc913355f3(_0x32a1e3b83d501096(iLocal_85));
			if (!bLocal_92)
			{
				_0xe7bbc4e56b989449(iLocal_16, &uLocal_93, 1);
				if (!_does_scenario_point_exist(&(uLocal_93[0])))
				{
					iLocal_18 = 7;
					return;
				}
			}
			iVar0 = floor(_0x6718f40313a2b5a6(iLocal_16));
			if (!func_13(iVar0, iLocal_17))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_18 = 1;
			break;
		case 1:
			if (!func_12(Global_34, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!_0x9c54041bb66bcf9e(iLocal_85, iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			if (func_14(Global_34, iLocal_85, 1) > 1225f)
			{
				return;
			}
			else if (get_entity_speed(Global_34) < 9.5f)
			{
				iLocal_18 = 2;
				return;
			}
			else
			{
				iLocal_18 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Local_19[iVar1]->f_1 == 0)
				{
					iLocal_87 = iVar1;
				}
				else
				{
					if (!_does_scenario_point_exist(&(Local_19[iVar1])))
					{
						if (iVar1 > 0)
						{
							Local_19[iVar1]->f_7 = { _get_object_offset_from_coords(_get_scenario_point_coords(&(Local_19[(iVar1 - 1)]), true), _get_scenario_point_heading(&(Local_19[(iVar1 - 1)]), true), Local_19[iVar1]->f_4) };
							Local_19[iVar1]->f_11 = (_get_scenario_point_heading(&(Local_19[(iVar1 - 1)]), true) + Local_19[iVar1]->f_10);
						}
						else
						{
							Local_19[iVar1]->f_7 = { _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_16, true), _get_scenario_point_heading(iLocal_16, true), Local_19[iVar1]->f_4) };
							Local_19[iVar1]->f_11 = (_get_scenario_point_heading(iLocal_16, true) + Local_19[iVar1]->f_10);
						}
						Local_19[iVar1] = create_scenario_point(Local_19[iVar1]->f_1, Local_19[iVar1]->f_7, Local_19[iVar1]->f_11, 0, 0, 0);
						_0xe69fda40aac3efc0(&(Local_19[iVar1]), 0);
						_0xa7479fb665361edb(&(Local_19[iVar1]), 0);
					}
					iVar1++;
				}
			}
			iLocal_18 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, fLocal_91) && _0x02ebbb3989b7e695(iLocal_85))
			{
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (_0x79197f7d2bb5e73a(iLocal_85, &(Local_19[iLocal_86]), Local_19[iLocal_86]->f_2, Local_19[iLocal_86]->f_3, 0, 0))
			{
				if (_0x9c54041bb66bcf9e(iLocal_85, &(Local_19[iLocal_86])))
				{
					fLocal_91 = Local_19[iLocal_86]->f_12;
					iLocal_86++;
					func_19(&uLocal_88);
					if (iLocal_86 < iLocal_87)
					{
						iLocal_18 = 3;
					}
					else
					{
						iLocal_18 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, fLocal_91) && _0x02ebbb3989b7e695(iLocal_85))
			{
				iLocal_18 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!bLocal_92)
			{
				if (!func_20(iLocal_85, -76381094))
				{
					clear_ped_tasks(iLocal_85, 1, 0);
					_task_use_scenario_point(iLocal_85, &(uLocal_93[0]), 0, 0, true, false, 0, false, -1f, false);
					set_ped_keep_task(iLocal_85, true);
				}
				if (_0x9c54041bb66bcf9e(iLocal_85, &(uLocal_93[0])))
				{
					iLocal_18 = 7;
				}
			}
			else
			{
				iLocal_18 = 7;
			}
			break;
		case 7:
			iLocal_13 = 0;
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
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_23(&iVar0);
	}
}

bool func_12(int iParam0, int iParam1)
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
	if (func_24(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2147443548:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					if (is_ped_male(iLocal_85))
					{
						func_25(Local_19[0], 1287994422, 4, 10f);
						func_25(Local_19[1], 1287994422, 4, 10f);
						func_25(Local_19[2], 1287994422, 4, 10f);
					}
					else
					{
						func_25(Local_19[0], 1287994422, 5, 10f);
						func_25(Local_19[1], 1287994422, 5, 10f);
						func_25(Local_19[2], 1287994422, 5, 10f);
					}
					return true;
				case 1:
					fLocal_91 = 10f;
					if (is_ped_male(iLocal_85))
					{
						func_25(Local_19[0], 1287994422, 1, 10f);
						func_25(Local_19[1], 1287994422, 1, 10f);
					}
					else
					{
						func_25(Local_19[0], 1287994422, 0, 10f);
						func_25(Local_19[1], 1287994422, 0, 10f);
					}
					return true;
			}
			break;
		case -1101156650:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					func_25(Local_19[0], -688785322, 3, 10f);
					func_25(Local_19[1], -688785322, 3, 10f);
					func_25(Local_19[2], -688785322, 3, 10f);
					func_25(Local_19[3], -688785322, 3, 10f);
					return true;
				case 1:
					fLocal_91 = 10f;
					func_25(Local_19[0], -688785322, 4, 10f);
					func_25(Local_19[1], -688785322, 4, 10f);
					func_25(Local_19[2], -688785322, 4, 10f);
					return true;
			}
			break;
	}
	return false;
}

float func_14(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_26(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_15()
{
	if (!func_12(Global_34, 0))
	{
		return true;
	}
	if (!func_12(iLocal_85, 0))
	{
		return true;
	}
	if (iLocal_86 <= 0)
	{
		if (!_0x9c54041bb66bcf9e(iLocal_85, iLocal_16) && !_0x9c54041bb66bcf9e(iLocal_85, &(Local_19[iLocal_86])))
		{
			return true;
		}
	}
	else if (iLocal_86 >= iLocal_87)
	{
		if (!bLocal_92)
		{
			if (!_0x9c54041bb66bcf9e(iLocal_85, &(Local_19[(iLocal_86 - 1)])) && !_0x9c54041bb66bcf9e(iLocal_85, &(uLocal_93[0])))
			{
				return true;
			}
		}
	}
	else if (!_0x9c54041bb66bcf9e(iLocal_85, &(Local_19[(iLocal_86 - 1)])) && !_0x9c54041bb66bcf9e(iLocal_85, &(Local_19[iLocal_86])))
	{
		return true;
	}
	return false;
}

bool func_16(var uParam0)
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, bool bParam1)
{
	if (bParam1 || !func_16(uParam0))
	{
		func_28(uParam0);
	}
}

int func_18(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		return 0;
	}
	if (func_29(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_20(int iParam0, int iParam1)
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

void func_21(int iParam0)
{
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

float func_26(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_27(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_28(var uParam0)
{
	func_34(uParam0, 0f);
}

float func_29(var uParam0)
{
	if (!func_16(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_35(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_36() - uParam0->f_1);
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1287994422:
			if (is_ped_male(iLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case -688785322:
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 0.53823f, 0f, 0f;
				case 2:
					return 0.380574f, -0.380598f, 0f;
				case 3:
					return 0.380598f, 0.380574f, 0f;
				case 5:
					return -0.53823f, 0f, 0f;
				case 6:
					return -0.380574f, -0.380598f, 0f;
				case 7:
					return -0.380598f, 0.380574f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 90f;
				case 1:
					return -90f;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36() - fParam1);
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_35(var uParam0)
{
	return func_27(*uParam0, 2);
}

float func_36()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

