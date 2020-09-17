void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&uLocal_14);
	}
	while (true)
	{
		if (func_2(&uLocal_14, &uScriptParam_0))
		{
			func_1(&uLocal_14);
		}
		wait(0);
	}
	func_1(&uLocal_14);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_3(&(uParam0->f_3[iVar0]));
		iVar0++;
	}
	func_3(uParam0->f_6);
	if (_0x91a5f9cbebb9d936(uParam0->f_7))
	{
		remove_scenario_blocking_area(uParam0->f_7, false);
	}
	if (!func_4(Global_1900325->f_3))
	{
		func_5(&(Global_1900325->f_25), 1, 1, 1);
		iVar1 = func_6(Global_1900325->f_2);
		func_5(&iVar1, 1, 0, 1);
		if (_0x62de46f061caa468() > 0)
		{
			_0x7d4e70a67a651c71(uParam0->f_1);
		}
		func_7();
		func_8(0);
		func_9(0);
	}
	remove_anim_dict(func_10(1, 0));
	terminate_this_thread();
}

bool func_2(var uParam0, var uParam1)
{
	if (func_11(uParam0))
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_12(uParam0, uParam1))
			{
				func_13(&uLocal_14, 1);
			}
			break;
		case 1:
			request_anim_dict(func_10(1, 0));
			if (!has_anim_dict_loaded(func_10(1, 0)))
			{
				return false;
			}
			else if (!func_14())
			{
				return false;
			}
			else if (!_0x5e420ff293ee5472())
			{
				return false;
			}
			else
			{
				func_13(uParam0, 2);
				func_15(func_10(1, 0));
			}
			break;
		case 2:
			if (func_16(uParam0) && func_17(uParam0))
			{
				func_18(0);
				func_13(uParam0, 3);
			}
			break;
		case 3:
			if (is_entity_dead(Global_1900325->f_25) || func_19(uParam0))
			{
				func_20(Global_1900325->f_2, 0);
				func_13(uParam0, 4);
			}
			else if (!func_21(Global_1900325->f_2))
			{
				if (!is_entity_dead(Global_1900325->f_25) && _is_ped_using_scenario_hash(Global_1900325->f_25, -1103796964))
				{
					func_22(Global_1900325->f_2);
				}
			}
			break;
		case 4:
			if (!is_entity_dead(Global_1900325->f_25))
			{
				_0xaab050da48b57978(Global_1900325->f_25, "Flee_Panic_With_Glances", Global_35, -1, 4);
				_0xeeed8fafec331a70(Global_1900325->f_25, Global_36, 3);
				set_blocking_of_non_temporary_events(Global_1900325->f_25, false);
				_0x99b2a2e3655deaf1(Global_1900325->f_25, "ClosestScenario");
				task_smart_flee_ped(Global_1900325->f_25, Global_35, 100000f, 100000, 0, 1077936128, 0);
				set_ped_keep_task(Global_1900325->f_25, true);
			}
			func_8(0);
			Global_1900325->f_24 = 0;
			func_20(Global_1900325->f_2, 0);
			if (func_23(Global_1900325->f_2, &iVar0))
			{
				func_24(iVar0);
			}
			func_18(1);
			func_25(&Global_1900325, 256);
			func_25(&Global_1900325, 128);
			Global_1900325->f_25 = 0;
			func_13(uParam0, 5);
			break;
		case 5:
			break;
	}
	return false;
}

void func_3(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_4(int iParam0)
{
	iVar0 = func_26(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_5(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

int func_6(int iParam0)
{
	if (func_27() != -1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915->f_121[iVar0]->f_6;
}

void func_7()
{
	_0x4eddd9e9ca5af985(-1103796964);
}

void func_8(int iParam0)
{
	if (Global_1900325->f_23 != iParam0)
	{
		Global_1900325->f_23 = iParam0;
	}
}

void func_9(int iParam0)
{
	iVar0 = func_29(iParam0);
	if (Global_1900325->f_24 != iVar0)
	{
		Global_1900325->f_24 = iVar0;
	}
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return "mini_games@fivefingerfillet_launch";
	}
	else if (iParam1 == 1)
	{
		return "mini_games@fivefingerfillet_female";
	}
	return "mini_games@fivefingerfillet";
}

bool func_11(var uParam0)
{
	if (func_27() != -1)
	{
		return true;
	}
	if (is_entity_dead(Global_35))
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		if (func_4(Global_1900325->f_3))
		{
			return true;
		}
		if (!func_30(&Global_1900325))
		{
			if (!is_entity_dead(Global_1900325->f_25))
			{
				clear_ped_tasks(Global_1900325->f_25, 1, 0);
			}
			return true;
		}
		if (func_31(Global_1900325->f_4, 4194304))
		{
			if (!is_entity_dead(Global_1900325->f_25))
			{
				clear_ped_tasks(Global_1900325->f_25, 1, 0);
			}
			return true;
		}
		if (Global_1935630->f_12 == 0)
		{
			fVar0 = func_32(&Global_1900325);
			if (vdist2(Global_36, Global_1900325->f_5) > (fVar0 * fVar0))
			{
				return true;
			}
		}
	}
	if (func_33())
	{
		if (!is_entity_dead(Global_1900325->f_25))
		{
			clear_ped_tasks(Global_1900325->f_25, 1, 0);
		}
		return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1)
{
	if (uParam1->f_7 == -1)
	{
		return false;
	}
	Global_1900325->f_37 = 0;
	func_34(uParam1->f_1, *uParam1, uParam1->f_2, uParam1->f_8, uParam1->f_7);
	func_35(uParam1->f_3, uParam1->f_6);
	_0xed9582b3da8f02b4(uParam0->f_1);
	func_22(Global_1900325->f_2);
	func_36(&(uParam0->f_8), 1, 1, 1);
	func_37(&(uParam0->f_8));
	func_38(&(uParam0->f_8), 1);
	func_39(&(uParam0->f_8), 1);
	func_40(&(uParam0->f_8), 1);
	func_41(&(uParam0->f_8), 1);
	func_42(&(uParam0->f_8), 5f);
	func_43(&(uParam0->f_8), 5);
	func_44(&(uParam0->f_8), 0);
	func_45(&(uParam0->f_8), 0);
	func_46(&(uParam0->f_8), 0);
	func_47(&(uParam0->f_8), 0);
	func_48(&(uParam0->f_8), 0);
	func_49(&(uParam0->f_8), 0);
	func_50(&(uParam0->f_8), 0);
	func_51(&(uParam0->f_8), 0);
	func_52(&(uParam0->f_8), 0);
	func_53(&(uParam0->f_8), 0);
	func_54(&(uParam0->f_8), 0);
	func_55(&(uParam0->f_8), 0);
	func_56(&(uParam0->f_8), 0);
	func_57(&(uParam0->f_8), 0);
	func_58(&(uParam0->f_8), 0);
	func_59(&(uParam0->f_8), 0);
	if (is_entity_dead(Global_1900325->f_25))
	{
		func_60(&Global_1900325, Global_1900325->f_5, Global_1900325->f_8, 1056964608, 0.12f);
	}
	else
	{
		func_61(&Global_1900325, Global_1900325->f_5, 1073741824, 1);
	}
	Global_1900325->f_19 = { 0f, 0f, 0.5f };
	return true;
}

void func_13(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_14()
{
	_request_scenario_type(-1103796964, 9, 0, 0);
	if (!_has_scenario_type_loaded(-1103796964, false))
	{
		return false;
	}
	return true;
}

void func_15(char* sParam0)
{
	Global_1900325->f_16[0] = (Global_1900325->f_8 - 90f);
	Global_1900325->f_16[1] = (Global_1900325->f_8 + 90f);
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z - 0.8f);
	iVar3 = 0;
	while (iVar3 < 2)
	{
		*Global_1900325->f_9[iVar3] = { get_anim_initial_offset_position(sParam0, "idle_01", vVar0, 0f, 0f, &(Global_1900325->f_16[iVar3]), 0f, 2) };
		Global_1900325->f_9[iVar3]->f_2 = vVar0.z;
		iVar3++;
	}
	if (Global_1900325->f_1 == 1)
	{
		Global_1900325->f_34 = 1;
	}
	else
	{
		Global_1900325->f_34 = 0;
	}
	Global_1900325->f_37 = 1;
}

bool func_16(var uParam0)
{
	fVar0 = (0.25f * 2f);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!_does_volume_exist(&(uParam0->f_3[iVar1])))
		{
			func_62(uParam0->f_3[iVar1], *Global_1900325->f_9[iVar1], 0f, 0f, 0f, fVar0, fVar0, 2.5f);
		}
		iVar1++;
	}
	if (!_does_volume_exist(uParam0->f_6))
	{
		func_63(&(uParam0->f_6), Global_1900325->f_5, 0f, 0f, Global_1900325->f_8, 4.5f, 4.5f, 2.5f);
	}
	if (_does_volume_exist(uParam0->f_6) && !_0x91a5f9cbebb9d936(uParam0->f_7))
	{
		uParam0->f_7 = _0x4c39c95ae5db1329(uParam0->f_6, func_27() == 0, 15);
	}
	if (is_entity_dead(Global_1900325->f_25) && !func_64())
	{
		func_65(uParam0->f_6, 0);
	}
	return (((_does_volume_exist(&(uParam0->f_3[0])) && _does_volume_exist(&(uParam0->f_3[1]))) && _does_volume_exist(uParam0->f_6)) && _0x91a5f9cbebb9d936(uParam0->f_7));
}

bool func_17(var uParam0)
{
	if (is_entity_dead(Global_1900325->f_25) && func_64())
	{
		return false;
	}
	if (is_entity_dead(Global_1900325->f_25))
	{
		request_model(417416138, false);
		if (!has_model_loaded(417416138))
		{
			return false;
		}
		func_65(uParam0->f_6, 0);
		vVar0 = { *Global_1900325->f_9[Global_1900325->f_34] };
		vVar0 = { vVar0 + Global_1900325->f_19 };
		Global_1900325->f_25 = func_66(417416138, vVar0, &(Global_1900325->f_16[Global_1900325->f_34]), 1, 1, 1, 0, 0, 0, 0, 1, 0, 0);
		iVar3 = func_67(&Global_1900325, Global_1900325->f_4, Global_1900325->f_23);
		_set_ped_body_component(Global_1900325->f_25, iVar3);
		_update_ped_variation(Global_1900325->f_25, false, true, true, true, false);
		func_68(Global_1900325->f_25, Global_1900325->f_24);
		_0x6569f31a01b4c097(Global_1900325->f_25, 0, 1);
		_0x6569f31a01b4c097(Global_1900325->f_25, 1, 1);
		remove_all_ped_weapons(Global_1900325->f_25, true, true);
		set_model_as_no_longer_needed(417416138);
		func_9(0);
	}
	if (is_entity_dead(Global_1900325->f_25))
	{
		return false;
	}
	set_blocking_of_non_temporary_events(Global_1900325->f_25, false);
	set_ped_relationship_group_hash(Global_1900325->f_25, -225988669);
	set_ped_config_flag(Global_1900325->f_25, 130, false);
	set_ped_combat_attributes(Global_1900325->f_25, 17, true);
	StringCopy(&(Global_1900325->f_26), func_69(Global_1900325->f_23), 64);
	set_ambient_voice_name(Global_1900325->f_25, &(Global_1900325->f_26));
	func_20(Global_1900325->f_2, Global_1900325->f_25);
	uParam0->f_2 = 1;
	if (func_70(&Global_1900325, 16))
	{
		func_25(&Global_1900325, 16);
	}
	func_71(Global_1900325->f_25);
	return true;
}

void func_18(int iParam0)
{
	if (Global_1900325->f_35 != iParam0)
	{
		Global_1900325->f_35 = iParam0;
	}
}

bool func_19(var uParam0)
{
	if (uParam0->f_2 == 1 && func_72(Global_1900325->f_25, 0, &(uParam0->f_8), &(uParam0->f_36), 0, 0))
	{
		return true;
	}
	if (Global_1935630->f_17 > 0)
	{
		return true;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		return true;
	}
	if (_0x0e99e3bf11bb6367(Global_35) || _0x3bdfcf25b58b0415(Global_35))
	{
		return true;
	}
	uVar0 = func_73(Global_1900325->f_25);
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &uVar0, 1, 1) && is_control_just_pressed(0, 648122183))
	{
		return true;
	}
	if (uParam0->f_2 == 1)
	{
		if (_0x0c3cb2e600c8977d(Global_1900325->f_25, 1) || !_is_ped_using_scenario_hash(Global_1900325->f_25, -1103796964))
		{
			return true;
		}
	}
	return false;
}

void func_20(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915->f_121[iVar0]->f_6 = iParam1;
}

bool func_21(int iParam0)
{
	if (func_27() != -1)
	{
		return true;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return false;
	}
	if ((*Global_1392915)[iVar0]->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
	return Global_1392915->f_121[iVar0]->f_15;
}

void func_22(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
}

bool func_23(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

int func_24(int iParam0)
{
	if (func_74(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_75(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

void func_25(int iParam0, int iParam1)
{
	if (func_70(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

int func_26(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_77(iParam0);
}

int func_27()
{
	return Global_1572887->f_12;
}

int func_28(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_29(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 3)
	{
		iParam0 = 0;
	}
	if (Global_1900325->f_4 == 76)
	{
		if (iParam0 == 0)
		{
			iVar0 = 50;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 200;
		}
		else
		{
			iVar0 = 400;
		}
	}
	else if (Global_1900325->f_4 == 26)
	{
		if (iParam0 == 0)
		{
			iVar0 = 75;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 150;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 300;
		}
		else
		{
			iVar0 = 600;
		}
	}
	else if (Global_1900325->f_4 == 92)
	{
		if (iParam0 == 0)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 200;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 400;
		}
		else
		{
			iVar0 = 800;
		}
	}
	else if (iParam0 == 0)
	{
		iVar0 = 10;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 20;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 80;
	}
	return iVar0;
}

bool func_30(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_78(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_31(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_33()
{
	return Global_1898164->f_163;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1900325 = uParam0;
	Global_1900325->f_1 = uParam1;
	Global_1900325->f_2 = uParam2;
	Global_1900325->f_3 = uParam3;
	Global_1900325->f_4 = uParam4;
}

void func_35(vector3 vParam0, var uParam3)
{
	Global_1900325->f_5 = { vParam0 };
	Global_1900325->f_8 = uParam3;
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z + 0.1f);
	iVar5 = _0xbbe5b63effb08e68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
	if (iVar5 == 1)
	{
		fVar6 = (Global_1900325->f_5.f_2 - vVar0.z);
		if (fVar6 > 0.1f || fVar6 < -0.1f)
		{
		}
		else
		{
			Global_1900325->f_5.f_2 = vVar0.z;
		}
	}
}

void func_36(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_79(uParam0, 268435456);
	}
	else
	{
		func_80(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_79(uParam0, 1073741824);
	}
	else
	{
		func_80(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_79(uParam0, 536870912);
	}
	else
	{
		func_80(uParam0, 536870912);
	}
}

void func_37(var uParam0)
{
	func_82(uParam0, (func_81(uParam0) - 6f));
	func_83(uParam0, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 4);
	}
	else
	{
		func_79(&(uParam0->f_1), 4);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2);
	}
	else
	{
		func_79(&(uParam0->f_1), 2);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 8);
	}
	else
	{
		func_79(&(uParam0->f_1), 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16);
	}
	else
	{
		func_79(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 256);
	}
	else
	{
		func_79(&(uParam0->f_1), 256);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2048);
	}
	else
	{
		func_79(&(uParam0->f_1), 2048);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1024);
	}
	else
	{
		func_79(&(uParam0->f_1), 1024);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16384);
	}
	else
	{
		func_79(&(uParam0->f_1), 16384);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 524288);
	}
	else
	{
		func_79(&(uParam0->f_1), 524288);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1);
	}
	else
	{
		func_79(&(uParam0->f_1), 1);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 128);
	}
	else
	{
		func_79(&(uParam0->f_1), 128);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 131072);
	}
	else
	{
		func_79(&(uParam0->f_1), 131072);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 4);
	}
	else
	{
		func_80(uParam0, 4);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1048576);
	}
	else
	{
		func_80(uParam0, 1048576);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 262144);
	}
	else
	{
		func_80(uParam0, 262144);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 8);
	}
	else
	{
		func_80(uParam0, 8);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 32);
	}
	else
	{
		func_80(uParam0, 32);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 16);
	}
	else
	{
		func_80(uParam0, 67108864);
		func_80(uParam0, 16);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 64);
	}
	else
	{
		func_80(uParam0, 64);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1024);
	}
	else
	{
		func_80(uParam0, 1024);
	}
}

void func_60(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	iVar1 = func_84(iParam0);
	if (!func_85(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_86(iParam0, vParam1, fParam4, iVar0, iParam5);
		if (!is_entity_dead(iVar2) && is_entity_upright(iVar2, 90f))
		{
			vVar3 = { get_entity_coords(iVar2, true, false) };
			uVar7 = vVar3.z;
			if (func_87(iParam0, vParam1, fParam4, iVar0, &vVar3, &fVar6, 0))
			{
				vVar3 = { _get_object_offset_from_coords(vVar3, fVar6, 0f, fParam6, 0f) };
				vVar3.f_2 = uVar7;
				fVar6 = get_entity_heading(iVar2);
				_set_entity_coords_and_heading(iVar2, vVar3, fVar6, true, false, true);
				freeze_entity_position(iVar2, true);
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_88(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!_does_volume_exist(iVar0))
	{
		return;
	}
	iVar5 = create_itemset(true);
	if (is_itemset_valid(iVar5))
	{
		iVar2 = _0x886171a12f400b89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar3, iVar5));
			if (!is_entity_dead(iVar1))
			{
				if (func_89(iParam0, get_entity_model(iVar1)))
				{
					if (!is_entity_attached(iVar1))
					{
						if ((func_27() != -1 && network_has_control_of_entity(iVar1)) || func_27() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && is_entity_upright(iVar1, 90f))
							{
								freeze_entity_position(iVar1, true);
								set_entity_can_be_damaged(iVar1, false);
							}
							else
							{
								freeze_entity_position(iVar1, false);
								set_entity_can_be_damaged(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		_0x20a4bf0e09bee146(iVar5);
		destroy_itemset(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_3(iVar0);
}

void func_62(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_90());
	}
}

void func_63(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_90());
	}
}

bool func_64()
{
	if (!is_screen_faded_in() || func_70(&Global_1900325, 16))
	{
		return false;
	}
	fVar0 = vdist(Global_1900325->f_5, Global_36);
	fVar1 = func_91(&Global_1900325);
	fVar2 = (fVar1 - 10f);
	if (fVar0 < 10f || (fVar0 < fVar2 && is_sphere_visible(Global_1900325->f_5, 1f)))
	{
		return true;
	}
	return false;
}

void func_65(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

int func_66(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_92(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_93(iParam0);
		return func_94(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

char* func_69(int iParam0)
{
	switch (Global_1900325->f_4)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 1:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 2:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 3:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 0:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 1:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 2:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 3:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 1:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 2:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 3:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				default:
					break;
			}
			break;
	}
	uVar0 = 1;
	func_95(Global_1900325->f_25, &Global_1900325, &uVar0, 0, &iVar2);
	return func_96(iVar2);
}

bool func_70(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_71(int iParam0)
{
	if (is_entity_dead(iParam0) || _is_ped_using_scenario_hash(iParam0, -1103796964))
	{
		return;
	}
	vVar0 = { *Global_1900325->f_9[Global_1900325->f_34] };
	vVar0 = { vVar0 + Global_1900325->f_19 };
	clear_ped_tasks(iParam0, 1, 0);
	task_start_scenario_at_position(iParam0, -1103796964, vVar0, &(Global_1900325->f_16[Global_1900325->f_34]), -1, false, true, 0, 0f, false);
	set_ped_keep_task(iParam0, true);
	_0x2208438012482a1a(iParam0, false, false);
}

bool func_72(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_97(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_98(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_99(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_100(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_101(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_102(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_103(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_99(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_104(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_105(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_106(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_107(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_107(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_99(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_108(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_109(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_110(uParam2, 4000))
				{
					if ((func_111(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_112(uParam2, iParam0)) && func_113(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_111(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_112(uParam2, iParam0)) && func_113(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_114(iParam0, Global_1935630->f_41))
							{
								func_115();
								*uParam3 = 2;
								func_99(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_114(iParam0, Global_1935630->f_41))
						{
							func_115();
							*uParam3 = 2;
							func_99(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_116(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_117() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_115();
						*uParam3 = 2;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_118())
					{
						if (func_114(iParam0, Global_1935630->f_42))
						{
							func_115();
							*uParam3 = 2;
							func_99(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_119(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_99(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_120(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_121(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_122(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_123(uParam2, 4000))
				{
					if (func_124(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_99(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_125(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_99(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_126(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_99(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

var func_73(var uParam0)
{
	return uParam0;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_75(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_74(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_127(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_128(iVar0);
	*uParam0 = 0;
}

bool func_76(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_77(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_78(int iParam0)
{
	if (func_130(iParam0) != 4)
	{
		return -1;
	}
	return func_131(iParam0);
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_81(var uParam0)
{
	return uParam0->f_24;
}

void func_82(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1);
	}
	else
	{
		func_80(uParam0, 1);
	}
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 5;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

bool func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_86(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	if (!func_132(iParam0, vParam1, fParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	fVar6 = (fParam6 * 2f);
	iVar8 = 0;
	fVar10 = -1f;
	iVar3 = create_itemset(true);
	if (is_itemset_valid(iVar3))
	{
		func_62(&iVar9, vVar0, 0f, 0f, 0f, fVar6, fVar6, 1.2f);
		iVar5 = _0x886171a12f400b89(iVar9, iVar3, 3);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar7 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar4, iVar3));
			if (does_entity_exist(iVar7))
			{
				if (func_89(iParam0, get_entity_model(iVar7)))
				{
					fVar11 = func_133(vVar0, get_entity_coords(iVar7, true, false));
					if (fVar10 == -1f || fVar11 < fVar10)
					{
						iVar8 = iVar7;
						fVar10 = fVar11;
					}
				}
			}
			iVar4++;
		}
		func_3(iVar9);
		destroy_itemset(iVar3);
	}
	return iVar8;
}

bool func_87(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (get_ground_z_for_3d_coord(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_136(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*fParam7 = (fParam4 + fVar3);
	if (*fParam7 > 360f)
	{
		*fParam7 = (*fParam7 - 360f);
	}
	if (*fParam7 < -360f)
	{
		*fParam7 = (*fParam7 + 360f);
	}
	return true;
}

void func_88(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_90());
	}
}

bool func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 325252933:
					return true;
				case -1740828633:
				case 1609095284:
					return true;
				case -1510839859:
				case 1407600554:
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == -1243444973)
			{
				return true;
			}
			if (iParam1 == -289651159)
			{
				return true;
			}
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == 325252933)
			{
				return true;
			}
			if (iParam1 == -1763848034)
			{
				return true;
			}
			if (iParam1 == 2096698905)
			{
				return true;
			}
			if (iParam1 == 375867283)
			{
				return true;
			}
			if (iParam1 == 1999055955)
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == -1025740342)
			{
				return true;
			}
			if (iParam1 == -1937484496)
			{
				return true;
			}
			if (iParam1 == 463271055)
			{
				return true;
			}
			if (iParam1 == 1186910594)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == 264425748)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == -1618805595)
			{
				return true;
			}
			if (iParam1 == 1230724566)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

char* func_90()
{
	return "unnamed";
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 35f;
		case 0:
			return 30f;
		case 3:
			return 60f;
		case 5:
			return 60f;
		case 4:
			return 60f;
		case 6:
			return 60f;
		default:
			break;
	}
	return 40f;
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_137(iParam1))
		{
			func_138(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_139(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_140(iParam0, 0);
			bVar0 = true;
		}
		func_141(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_93(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_94(int iParam0, int iParam1, var uParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_95(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	uVar0 = 3;
	iVar4 = 0;
	func_142(get_entity_model(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_143(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_143(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = get_random_int_in_range(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_143(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

void func_97(var uParam0, bool bParam1, int iParam2)
{
	func_144(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_145(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_79(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_146(1))
						{
							func_79(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_146(1) || *uParam0 & 8192 != 0))
				{
					func_80(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_147(uParam0))
			{
				uParam0->f_15 = func_117();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_117() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_148(uParam0);
}

bool func_98(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_149(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_150(iParam0, iVar2) <= func_151(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_99(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_152(iParam2, 1, 1, 1, 0))
	{
		func_79(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_153(uParam1, 1);
	func_154();
}

bool func_100(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_155(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_156(uParam1);
			if (func_157(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_158(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_153(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_153(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_101(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_159(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_156(uParam2);
		if (func_157(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_158(uParam2)
				{
					func_153(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_102(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_149(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_158(uParam1)
		{
			fVar3 = func_156(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_103(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_160(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_105(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_161(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_113(uParam2, iParam1))
			{
				func_153(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_106(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_162(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_113(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_153(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_107(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_163(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_164(iParam1, vVar0, vVar4))
					{
						func_153(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_164(iParam1, vVar0, vVar7))
					{
						func_153(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_108(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_149(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_165(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_166(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_167(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_168(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_169(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_109(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_110(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_170(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_171(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_113(var uParam0, int iParam1)
{
	if (func_172(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_114(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_173(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_115()
{
}

bool func_116(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_174(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_117();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_175(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_117();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_117()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_118()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_117() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_119(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_151(uParam0);
	if (uParam0->f_12 > func_81(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_176(iParam1);
	iVar1 = func_177(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_120(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_178(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_121(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_179(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_180(uParam1, iParam0))
					{
						if (func_175(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_122(int iParam0, var uParam1)
{
	if (!func_181(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_123(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_124(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_125(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_117();
	}
	else if (func_117() - uParam1->f_4) > func_182(uParam1)
	{
		return func_183(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_126(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

var func_127(var uParam0)
{
	return uParam0;
}

void func_128(int iParam0)
{
	if (!func_184(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

int func_129(int iParam0)
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

int func_130(int iParam0)
{
	if (!func_76(iParam0))
	{
		return 0;
	}
	return func_186(func_185(iParam0));
}

int func_131(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_187(func_185(iParam0));
}

bool func_132(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*uParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (get_ground_z_for_3d_coord(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return true;
}

float func_133(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_135(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_136(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 120f;
					return true;
				case 2:
					*fParam2 = 60f;
					return true;
				case 3:
					*fParam2 = 0f;
					return true;
				case 4:
					*fParam2 = -60f;
					return true;
				case 5:
					*fParam2 = -120f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return true;
				case 4:
					*fParam2 = 180f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 0f;
					return true;
				case 2:
					*fParam2 = 90f;
					return true;
				case 3:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return true;
				case 1:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

bool func_137(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_138(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_188(iParam0, iParam1))
		{
			if (func_189(iParam0, iParam1))
			{
				if (func_190(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_191(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_140(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_142(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 417416138:
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -951746023:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				break;
			case -2087759666:
			case -1789856687:
			case 1124384604:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case -1144663425:
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case 1901354405:
				func_192(uParam2, 82);
				*iParam3++;
				break;
			case 1022365451:
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case 1471623370:
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case 1767420034:
				func_192(uParam2, 86);
				*iParam3++;
				break;
			case 1536283262:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case -1938511850:
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				break;
			case -1345652903:
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				break;
			case -1796561521:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				break;
			case -1684080969:
				func_192(uParam2, 80);
				*iParam3++;
				break;
			case -956061568:
			case 918972034:
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			case -989220241:
			case -607723543:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case 549598920:
			case 1854820959:
			case 2133848994:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 34);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				break;
			case -439429058:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case 480011144:
			case 966958492:
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 74);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case -1766535683:
			case -669394275:
				func_192(uParam2, 87);
				*iParam3++;
				func_192(uParam2, 89);
				*iParam3++;
				func_192(uParam2, 90);
				*iParam3++;
				func_192(uParam2, 91);
				*iParam3++;
				break;
			case 964905443:
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

bool func_143(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(uParam0, iParam1);
}

void func_144(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_193();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_194(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_145(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_146(bool bParam0)
{
	if (func_195(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_27() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_196(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_196(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_177(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_148(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_197(uParam0);
	}
}

bool func_149(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_177(iParam2);
	}
	else
	{
		iVar1 = func_176(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_177(iParam0);
	}
	else
	{
		iVar0 = func_176(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_198(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_150(int iParam0, int iParam1)
{
	return func_173(iParam0, iParam1, 1, 1);
}

float func_151(var uParam0)
{
	return uParam0->f_26;
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 134217728);
	}
	else
	{
		func_80(uParam0, 134217728);
	}
}

void func_154()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_155(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_173(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_199(iVar0, 0)))
		{
			if (func_200(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_156(var uParam0)
{
	return uParam0->f_17;
}

bool func_157(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_198(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_158(var uParam0)
{
	return uParam0->f_18;
}

bool func_159(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_199(iVar0, 0)))
		{
			if (func_201(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_160(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_161(var uParam0)
{
	return uParam0->f_23;
}

int func_162(var uParam0)
{
	return uParam0->f_21;
}

int func_163(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_164(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_202(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_165(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_203(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_167(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_204(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_204(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_169(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_204(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_170(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_205(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_172(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_173(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_174(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_175(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_175(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_176(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_177(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_178(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_170(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_173(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_173(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_179(int iParam0, var uParam1, bool bParam2)
{
	func_195(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_180(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_180(uParam1, iVar1))
				{
					if (func_175(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_180(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_181(int iParam0)
{
	if (func_206())
	{
		return 0;
	}
	return func_207((*Global_1347702)[58]->f_15, 1);
}

int func_182(var uParam0)
{
	return uParam0->f_20;
}

int func_183(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_184(int iParam0)
{
	return func_208(iParam0, 2);
}

int func_185(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_186(int iParam0)
{
	return iParam0 & 31;
}

int func_187(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_188(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_189(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_188(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_191(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_192(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(uParam0, iParam1);
}

bool func_193()
{
	if (func_209())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_194(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_195(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_196(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_197(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_80(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_79(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_199(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_200(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_201(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_201(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_202(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_203(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_204(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_205(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_206()
{
	if (func_27() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_207(int iParam0, bool bParam1)
{
	switch (func_26(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_208(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_209()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

