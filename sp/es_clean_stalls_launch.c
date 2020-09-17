void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1(&uLocal_0);
	}
	func_2(&uLocal_0, &uScriptParam_0);
	while (true)
	{
		if (func_3(&uLocal_0))
		{
			func_1(&uLocal_0);
		}
		wait(0);
	}
	func_1(&uLocal_0);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	if (!func_4(uParam0->f_2.f_8))
	{
		func_5();
		func_6();
		func_7();
	}
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	terminate_this_thread();
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = 5;
	uParam0->f_2 = { *uParam1 };
	func_8(uParam0, 0);
}

bool func_3(var uParam0)
{
	if (func_9(uParam0))
	{
		return true;
	}
	iVar0 = func_10(uParam0->f_2.f_2);
	switch (*uParam0)
	{
		case 0:
			func_11(uParam0->f_2.f_2);
			func_12();
			if (uParam0->f_2.f_7 == 37)
			{
				if (!func_13())
				{
					return false;
				}
			}
			func_8(uParam0, 1);
			break;
		case 1:
			if (func_14(0, 0, 1))
			{
				func_11(uParam0->f_2.f_2);
				func_8(uParam0, 2);
			}
			func_15(iVar0, Global_1899848->f_15.f_10);
			break;
		case 2:
			if (func_4(uParam0->f_2.f_8))
			{
				func_8(uParam0, 3);
				return false;
			}
			else
			{
				func_11(uParam0->f_2.f_2);
				func_15(iVar0, Global_1899848->f_15.f_10);
			}
			break;
		case 3:
			if (!func_4(uParam0->f_2.f_8))
			{
				func_8(uParam0, 1);
			}
			break;
	}
	return false;
}

bool func_4(int iParam0)
{
	iVar0 = func_16(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_5()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_17(iVar0);
		func_18(&(Global_1899848->f_32[iVar0]->f_3), 0, 1);
		func_18(&(Global_1899848->f_32[iVar0]->f_4), 0, 0);
		iVar0++;
	}
	if (_does_volume_exist(Global_1899848->f_201.f_14))
	{
		_0x74c2b3dc0b294102(Global_1899848->f_201.f_14);
		_0xa1cfb35069d23c23(Global_1899848->f_201.f_14);
		_delete_volume(Global_1899848->f_201.f_14);
	}
	func_19();
	func_18(&(Global_1899848->f_201.f_12), 0, 1);
	func_18(&(Global_1899848->f_15.f_10), 0, 1);
	func_20(0);
	if (Global_1899848->f_217 == 0)
	{
		func_21(1, 1);
	}
	return 1;
}

void func_6()
{
	set_model_as_no_longer_needed(Global_1899848->f_4);
	set_model_as_no_longer_needed(Global_1899848->f_5);
	set_model_as_no_longer_needed(Global_1899848->f_6);
	set_model_as_no_longer_needed(Global_1899848->f_7);
}

void func_7()
{
	Global_1899848 = 0;
	Global_1899848->f_1 = 0;
	Global_1899848->f_2 = 0;
	Global_1899848->f_217 = 0;
	Global_1899848->f_218 = 0;
	Global_1899848->f_220 = 0;
	Global_1899848->f_221 = 0;
	Global_1899848->f_222 = 0;
	Global_1899848->f_223 = 0;
	Global_1899848->f_224 = 0;
	Global_1899848->f_14 = 0;
	func_22();
}

void func_8(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_9(var uParam0)
{
	if (func_23() != -1)
	{
		return true;
	}
	if (is_entity_dead(Global_35))
	{
		return true;
	}
	if (func_4(uParam0->f_2.f_8))
	{
		return true;
	}
	if (!func_24(uParam0->f_1))
	{
		return true;
	}
	if (!func_25(uParam0->f_2.f_2))
	{
		return true;
	}
	if (Global_1899528->f_215 == 1)
	{
		return true;
	}
	if (func_26(uParam0->f_2.f_7, 4194304))
	{
		return true;
	}
	if (Global_1935630->f_12 == 0)
	{
		fVar0 = func_27(uParam0->f_1);
		if (vdist2(Global_36, uParam0->f_2.f_3) > (fVar0 * fVar0))
		{
			return true;
		}
	}
	return false;
}

int func_10(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_11(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	if (!func_28(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
}

void func_12()
{
	if (&Global_1899848 == 1)
	{
		return;
	}
	func_29();
	Global_1899848->f_2 = 4;
	if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
	{
		Global_1899848->f_3 = get_random_int_in_range(0, 6);
	}
	if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
	{
		Global_1899848->f_201 = { -1604.72f, -1422.11f, 80.76f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 210f };
		Global_1899848->f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848->f_15.f_5 = 330f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
	{
		Global_1899848->f_201 = { -1586.484f, -1411.629f, 80.2817f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 180f };
		Global_1899848->f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848->f_15.f_5 = 330f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else
	{
		Global_1899848->f_201 = { -1603.35f, -1411.84f, 80.95f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 230f };
		Global_1899848->f_15.f_2 = { -1603.35f, -1409f, 80.92f };
		Global_1899848->f_15.f_5 = 60f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1604.202f, -1408.503f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 60f };
	}
	if (Global_1899848->f_3 == 0)
	{
		Global_1899848->f_9 = 3;
		*Global_1899848->f_32[0] = { -1605.069f, -1418.533f, 80.871f };
		*Global_1899848->f_32[1] = { -1603.826f, -1421.34f, 80.7765f };
		*Global_1899848->f_32[2] = { -1608.24f, -1418.22f, 80.96f };
	}
	else if (Global_1899848->f_3 == 1)
	{
		Global_1899848->f_9 = 3;
		*Global_1899848->f_32[0] = { -1603.01f, -1420.13f, 80.84f };
		*Global_1899848->f_32[1] = { -1606.332f, -1421.34f, 80.8483f };
		*Global_1899848->f_32[2] = { -1608.302f, -1417.608f, 80.9513f };
	}
	else if (Global_1899848->f_3 == 2)
	{
		Global_1899848->f_9 = 6;
		*Global_1899848->f_32[0] = { -1581.343f, -1408.958f, 80.2649f };
		*Global_1899848->f_32[1] = { -1585.939f, -1416.165f, 80.3239f };
		*Global_1899848->f_32[2] = { -1576.188f, -1418.922f, 80.6635f };
		*Global_1899848->f_32[3] = { -1565.435f, -1422.183f, 81.0723f };
		*Global_1899848->f_32[4] = { -1588.059f, -1429.491f, 80.3306f };
		*Global_1899848->f_32[5] = { -1596.71f, -1426.369f, 80.4849f };
	}
	else if (Global_1899848->f_3 == 3)
	{
		Global_1899848->f_9 = 5;
		*Global_1899848->f_32[0] = { -1588.511f, -1411.575f, 80.3268f };
		*Global_1899848->f_32[1] = { -1581.747f, -1409.224f, 80.2775f };
		*Global_1899848->f_32[2] = { -1572.328f, -1417.021f, 80.8312f };
		*Global_1899848->f_32[3] = { -1567.363f, -1423.642f, 81.0785f };
		*Global_1899848->f_32[4] = { -1574.739f, -1428.451f, 80.7116f };
	}
	else if (Global_1899848->f_3 == 4)
	{
		Global_1899848->f_9 = 4;
		*Global_1899848->f_32[0] = { -1597.65f, -1412.11f, 80.95f };
		*Global_1899848->f_32[1] = { -1602.31f, -1407.28f, 80.94f };
		*Global_1899848->f_32[2] = { -1599.93f, -1411.69f, 80.95f };
		*Global_1899848->f_32[3] = { -1602.31f, -1414.33f, 80.95f };
	}
	else
	{
		Global_1899848->f_9 = 4;
		*Global_1899848->f_32[0] = { -1600.13f, -1411.14f, 80.95f };
		*Global_1899848->f_32[1] = { -1598.63f, -1414.08f, 80.95f };
		*Global_1899848->f_32[2] = { -1602.22f, -1414.03f, 80.95f };
		*Global_1899848->f_32[3] = { -1600.07f, -1417.74f, 80.93f };
	}
	Global_1899848 = 1;
	Global_1899848->f_1 = 0;
}

bool func_13()
{
	iVar0 = 1703557170;
	if (_get_number_of_references_of_script_with_name_hash(iVar0) > 0)
	{
		return true;
	}
	request_script_with_name_hash(iVar0);
	if (has_script_with_name_hash_loaded(iVar0))
	{
		start_new_script_with_name_hash(iVar0, 256);
		set_script_with_name_hash_as_no_longer_needed(iVar0);
		return true;
	}
	return false;
}

bool func_14(int iParam0, int iParam1, int iParam2)
{
	if (&Global_1899848 == 0)
	{
		return false;
	}
	if (!func_30())
	{
		return false;
	}
	vVar0 = { Global_1899848->f_201 };
	vVar3 = { Global_1899848->f_201.f_3 };
	if (iParam1 == 1)
	{
		vVar0 = { Global_1899848->f_201.f_6 };
		vVar3 = { Global_1899848->f_201.f_9 };
	}
	if (!func_31(&(Global_1899848->f_201.f_12), Global_1899848->f_6, vVar0, vVar3, 1, 1, 1))
	{
		return false;
	}
	if (iParam0 == 0)
	{
		if (((!func_32() || (iParam2 == 0 && !func_33())) || (iParam2 == 0 && !func_34())) || (iParam2 == 1 && !func_31(&(Global_1899848->f_15.f_10), Global_1899848->f_7, Global_1899848->f_15.f_11, Global_1899848->f_15.f_14, 0, 0, 1)))
		{
			return false;
		}
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < Global_1899848->f_9)
	{
		func_35(&(Global_1899848->f_32[iVar6]->f_3));
		iVar6++;
	}
	func_35(&(Global_1899848->f_201.f_12));
	func_36(&(Global_1899848->f_15));
	if (!_does_volume_exist(Global_1899848->f_201.f_14))
	{
		if (does_entity_exist(Global_1899848->f_201.f_12))
		{
			Global_1899848->f_201.f_14 = _create_volume_cylinder(Global_1899848->f_201, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			_0x7c00cfc48a782dc0(Global_1899848->f_201.f_14, Global_1899848->f_201.f_12, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			_0xb56d41a694e42e86(Global_1899848->f_201.f_14, 2016, 0, 0, -1, -1, 2);
			_0x18262cafebb5fbe1(Global_1899848->f_201.f_14, 10208, 0, 0, -1, -1, 0);
		}
	}
	return true;
}

void func_15(int iParam0, var uParam1)
{
	Global_1392915->f_121[iParam0]->f_13 = uParam1;
}

int func_16(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_38(iParam0);
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	if (_does_volume_exist(Global_1899848->f_32[iParam0]->f_9))
	{
		_0x74c2b3dc0b294102(Global_1899848->f_32[iParam0]->f_9);
		_0xa1cfb35069d23c23(Global_1899848->f_32[iParam0]->f_9);
		_delete_volume(Global_1899848->f_32[iParam0]->f_9);
	}
	if (_does_volume_exist(Global_1899848->f_32[iParam0]->f_10))
	{
		_delete_volume(Global_1899848->f_32[iParam0]->f_10);
	}
	if (_does_volume_exist(Global_1899848->f_32[iParam0]->f_11))
	{
		_delete_volume(Global_1899848->f_32[iParam0]->f_11);
	}
}

void func_18(int* iParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(*iParam0))
	{
		func_35(iParam0);
		if (iParam2 == 1 && _0x083d497d57b7400f(*iParam0))
		{
			freeze_entity_position(*iParam0, false);
		}
		if (is_entity_attached(*iParam0))
		{
			detach_entity(*iParam0, true, true);
			activate_physics(*iParam0);
		}
		if (iParam1 == 1)
		{
			delete_object(iParam0);
		}
		else
		{
			set_object_as_no_longer_needed(iParam0);
		}
	}
}

void func_19()
{
	if (_does_volume_exist(Global_1899848->f_201.f_15))
	{
		_delete_volume(Global_1899848->f_201.f_15);
	}
}

void func_20(int iParam0)
{
	if (_does_scenario_point_exist(Global_1899848->f_15.f_1))
	{
		if (iParam0 == 1)
		{
			if (_is_scenario_point_flag_set(Global_1899848->f_15.f_1, 8))
			{
				_set_scenario_point_flag(Global_1899848->f_15.f_1, 8, false);
			}
		}
		else if (!_is_scenario_point_flag_set(Global_1899848->f_15.f_1, 8))
		{
			_set_scenario_point_flag(Global_1899848->f_15.f_1, 8, true);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_39();
	}
	if (does_entity_exist(Global_1899848->f_15))
	{
		if (is_entity_attached(Global_1899848->f_15))
		{
			detach_entity(Global_1899848->f_15, true, true);
			activate_physics(Global_1899848->f_15);
		}
		set_entity_as_no_longer_needed(&(Global_1899848->f_15));
	}
	if (!is_ped_injured(Global_35))
	{
		if (iParam0 == 1)
		{
			if (!func_40(4))
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0x58f7db5bd8fa2288(Global_35);
	}
	Global_1899848->f_15 = 0;
}

void func_22()
{
	Global_1899848->f_10 = 0;
	Global_1899848->f_11 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_1899848->f_32[iVar0]->f_5 = 0;
		iVar0++;
	}
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_41(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_25(int iParam0)
{
	iVar0 = func_10(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_42((*Global_1392915)[iVar0]->f_2))
	{
		return false;
	}
	if (func_43(&((*Global_1392915)[iVar0]->f_3), 60))
	{
		switch (func_44())
		{
			case 1:
				if (!func_43(&((*Global_1392915)[iVar0]->f_3), 4))
				{
					return false;
				}
				break;
			case 2:
				if (!func_43(&((*Global_1392915)[iVar0]->f_3), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_43(&((*Global_1392915)[iVar0]->f_3), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_43(&((*Global_1392915)[iVar0]->f_3), 32))
				{
					return false;
				}
				break;
		}
	}
	return true;
}

bool func_26(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

float func_27(int iParam0)
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

bool func_28(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

void func_29()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_1899848->f_32[iVar0]->f_12 = { 0f, 0f, 0f };
		Global_1899848->f_32[iVar0]->f_15 = { 0f, 0f, 0f };
		Global_1899848->f_32[iVar0]->f_18 = { 0f, 0f, 0f };
		iVar0++;
	}
}

bool func_30()
{
	request_model(Global_1899848->f_4, false);
	request_model(Global_1899848->f_5, false);
	request_model(Global_1899848->f_6, false);
	request_model(Global_1899848->f_7, false);
	if (((!has_model_loaded(Global_1899848->f_4) || !has_model_loaded(Global_1899848->f_5)) || !has_model_loaded(Global_1899848->f_6)) || !has_model_loaded(Global_1899848->f_7))
	{
		return false;
	}
	return true;
}

bool func_31(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (func_45(vParam2))
	{
		return false;
	}
	if (iParam9 == 1 && !does_entity_exist(*uParam0))
	{
		*uParam0 = func_46(vParam2, iParam1, 0.25f, 1);
		if (does_entity_exist(*uParam0))
		{
			set_entity_rotation(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				place_object_on_ground_properly(*uParam0, 0);
			}
			freeze_entity_position(*uParam0, true);
		}
	}
	if (!does_entity_exist(*uParam0))
	{
		request_model(iParam1, false);
		if (has_model_loaded(iParam1))
		{
			if (iParam10 == 1)
			{
				func_47(vParam2, 0.25f, 2);
			}
			*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
			set_entity_rotation(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				place_object_on_ground_properly(*uParam0, 0);
			}
			freeze_entity_position(*uParam0, true);
			set_entity_proofs(*uParam0, 31, false);
		}
	}
	return does_entity_exist(*uParam0);
}

bool func_32()
{
	iVar0 = 0;
	while (iVar0 < Global_1899848->f_9)
	{
		if (!func_48(iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_33()
{
	if (!_does_scenario_point_exist(Global_1899848->f_15.f_1))
	{
		Global_1899848->f_15.f_1 = create_scenario_point(-1478204157, Global_1899848->f_15.f_2, Global_1899848->f_15.f_5, 0f, 0, 1);
		if (Global_1899848->f_2 == 1)
		{
			func_20(0);
		}
		else
		{
			func_20(1);
		}
	}
	return _does_scenario_point_exist(Global_1899848->f_15.f_1);
}

bool func_34()
{
	if (!does_entity_exist(Global_1899848->f_15))
	{
		if (_does_scenario_point_exist(Global_1899848->f_15.f_1))
		{
			Global_1899848->f_15 = _get_scenario_point_entity(Global_1899848->f_15.f_1, "p_pitchfork01x_PH_R_HAND");
			if (does_entity_exist(Global_1899848->f_15))
			{
			}
		}
	}
	return does_entity_exist(Global_1899848->f_15);
}

void func_35(int* iParam0)
{
	if (does_entity_exist(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, true);
	}
}

void func_36(var uParam0)
{
	if (does_entity_exist(*uParam0) && !_0x88ad6cc10d8d35b2(*uParam0))
	{
		set_entity_as_mission_entity(*uParam0, true, true);
	}
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_49(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_39()
{
	if (_does_scenario_point_exist(Global_1899848->f_15.f_1) && does_entity_exist(Global_1899848->f_15))
	{
		if (_0x6ef4e31b4d5d2da0(Global_1899848->f_15.f_1, "p_pitchfork01x_PH_R_HAND"))
		{
		}
	}
}

bool func_40(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

int func_41(int iParam0)
{
	if (func_50(iParam0) != 4)
	{
		return -1;
	}
	return func_51(iParam0);
}

bool func_42(int iParam0)
{
	if (!func_52(iParam0))
	{
		return false;
	}
	return func_26(iParam0, 33554432);
}

bool func_43(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_44()
{
	return &Global_1899516;
}

bool func_45(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_46(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	fVar2 = (fParam4 * 2f);
	func_53(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	if (!_does_volume_exist(iVar0))
	{
		return 0;
	}
	iVar5 = create_itemset(true);
	iVar3 = _0x886171a12f400b89(iVar0, iVar5, 3);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar4, iVar5));
		if (!is_entity_dead(iVar1))
		{
			if (get_entity_model(iVar1) == iParam3)
			{
				destroy_itemset(iVar5);
				func_54(iVar0);
				if (bParam5)
				{
					if (!does_entity_belong_to_this_script(iVar1, true))
					{
						set_entity_as_mission_entity(iVar1, true, true);
					}
				}
				return iVar1;
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar5);
	func_54(iVar0);
	return 0;
}

void func_47(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_48(int iParam0)
{
	if (!func_31(&(Global_1899848->f_32[iParam0]->f_3), Global_1899848->f_4, *Global_1899848->f_32[iParam0], 0f, 0f, get_random_float_in_range(0f, 360f), 1, 1, 1))
	{
		return false;
	}
	if (!func_31(&(Global_1899848->f_32[iParam0]->f_4), Global_1899848->f_5, *Global_1899848->f_32[iParam0], 0f, 0f, get_random_float_in_range(0f, 360f), 1, 1, 0))
	{
		return false;
	}
	if (Global_1899848->f_32[iParam0]->f_5 == 0)
	{
		Global_1899848->f_32[iParam0]->f_5 = 1;
		if (!_does_volume_exist(Global_1899848->f_32[iParam0]->f_9))
		{
			Global_1899848->f_32[iParam0]->f_9 = _create_volume_cylinder(*Global_1899848->f_32[iParam0], 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			_0xb56d41a694e42e86(Global_1899848->f_32[iParam0]->f_9, 2016, 0, 0, -1, -1, 2);
			_0x18262cafebb5fbe1(Global_1899848->f_32[iParam0]->f_9, 10208, 0, 0, -1, -1, 0);
		}
	}
	return true;
}

int func_49(int iParam0)
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

int func_50(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_56(func_55(iParam0));
}

int func_51(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_57(func_55(iParam0));
}

bool func_52(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_53(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_58());
	}
}

void func_54(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_55(int iParam0)
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

int func_56(int iParam0)
{
	return iParam0 & 31;
}

int func_57(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

char* func_58()
{
	return "unnamed";
}

