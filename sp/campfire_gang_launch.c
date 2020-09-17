void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -1;
	uLocal_16 = ScriptParam_0;
	if (func_1() == -1)
	{
	}
	else
	{
		func_2(0, 0);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_2(0, 0);
	}
	if (has_force_cleanup_occurred(523))
	{
		func_2(0, 0);
	}
	Var8 = -1;
	Var8.f_1 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	Var8.f_4 = _get_scenario_point_heading(ScriptParam_0.f_1, true);
	while (func_3(&Var8))
	{
		wait(0);
	}
	func_4();
	iVar15 = func_6(Var8.f_1, &bVar13, func_5() == 0);
	func_7();
	if (!func_8(Var8.f_1))
	{
		if (func_9() && bVar13)
		{
			func_2(0, 0);
		}
	}
	StringCopy(&cVar0, func_10(&Var8, &bVar14), 64);
	if (func_11(Var8.f_1))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (is_string_null_or_empty(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (func_8(Var8.f_1))
	{
		if (!func_12(Var8))
		{
			if (func_5() != 0)
			{
				Var8 = 0;
			}
			else
			{
				Var8 = 3;
			}
		}
		StringCopy(&cVar0, func_13(func_5()), 64);
		if (!func_14(Var8, 32768))
		{
			func_15(Var8);
			bVar13 = true;
		}
	}
	else if (func_5() == 1)
	{
		if (func_16())
		{
			func_2(iVar15, !bVar14);
		}
		if (func_17())
		{
			func_2(iVar15, 1);
		}
	}
	if (is_string_null_or_empty(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	func_18(Var8.f_1, Var8);
	Var16 = Var8;
	Var16.f_1 = ScriptParam_0.f_1;
	Var16.f_6 = { Var8.f_1 };
	Var16.f_6.f_3 = Var8.f_4;
	Var16.f_4 = !bVar13;
	Var26 = { Var16 };
	MemCopy(&(Var26.f_10), {cVar0}, 4);
	Var26.f_15 = 1;
	if (func_5() == 0)
	{
		Var26.f_14 = 1200;
	}
	else
	{
		Var26.f_14 = 1024;
	}
	func_19(Var26, 2);
	if (does_scenario_group_exist("PROPSET_GANG_CAMP_PLAYER_CRAFTING"))
	{
		set_scenario_group_enabled("PROPSET_GANG_CAMP_PLAYER_CRAFTING", false);
	}
	func_2(0, 0);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(int iParam0, bool bParam1)
{
	_0xe7282390542f570d(uLocal_16);
	if (func_1() != -1)
	{
		terminate_this_thread();
		return;
	}
	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237->f_9 = (Global_1393237->f_9 - 1);
		if (Global_1393237->f_9 < 0)
		{
			Global_1393237->f_9 = 0;
		}
	}
	else if (iVar0 == 0)
	{
		Global_1393237->f_10 = (Global_1393237->f_10 - 1);
		if (Global_1393237->f_10 < 0)
		{
			Global_1393237->f_10 = 0;
		}
	}
	if (bParam1)
	{
		func_15(iParam0);
	}
	terminate_this_thread();
}

bool func_3(var uParam0)
{
	if (&Global_1879534)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (get_clock_hours() >= 18 || get_clock_hours() <= 6)
	{
		Global_1393237->f_6 = 3;
	}
	else
	{
		Global_1393237->f_6 = 2;
	}
}

int func_5()
{
	return 0;
}

int func_6(vector3 vParam0, bool bParam3, bool bParam4)
{
	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (vdist(Global_1393237->f_11[iVar1]->f_3, vParam0) < 10f)
		{
			*bParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !func_20(iVar1)) && (func_21(iVar1) || (!bParam4 && func_22(Global_1393237->f_11[iVar1]->f_3, Global_36) > 2000f)))
		{
			*bParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!func_14(iVar0, 32768))
	{
		func_15(iVar0);
	}
	return iVar0;
}

void func_7()
{
	if (func_1() != -1)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (func_21(iVar0))
		{
			if (!func_23(Global_1393237->f_11[iVar0]->f_3) && !func_14(iVar0, 1))
			{
				func_24(Global_1393237->f_11[iVar0]->f_3, 0);
			}
		}
		else if (func_14(iVar0, 8192))
		{
			if (func_25(iVar0))
			{
				iVar1 = func_26(Global_1393237->f_11[iVar0]->f_3, 0);
				if (iVar1 >= 0)
				{
					if (_0xf6a8a652a6b186cd(Global_1911670[iVar1]))
					{
						if (_0xf6ce6f9c3897804e(Global_1911670[iVar1]) > 45f)
						{
							func_24(Global_1393237->f_11[iVar0]->f_3, 0);
							func_27(Global_1393237->f_11[iVar0]->f_3, 45f, "sCampfireAllDead", 0, 0, 1, 0, -1082130432);
							func_28(iVar0, 4194304, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_8(vector3 vParam0)
{
	if (func_29(vParam0))
	{
		return false;
	}
	if (func_30(vParam0))
	{
		return true;
	}
	return false;
}

bool func_9()
{
	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237->f_9++;
		if (Global_1393237->f_9 > 1)
		{
			return true;
		}
	}
	if (iVar0 == 0)
	{
		Global_1393237->f_10++;
		if (Global_1393237->f_10 > 1)
		{
			return true;
		}
		iVar1 = 3;
		while (iVar1 <= 5)
		{
			if (func_20(iVar1))
			{
				iVar2++;
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			return true;
		}
	}
	return false;
}

char* func_10(var uParam0, bool bParam1)
{
	iVar0 = func_5();
	*uParam0 = func_6(uParam0->f_1, &bVar1, iVar0 == 0);
	if (!func_12(*uParam0))
	{
		return "";
	}
	if (Global_1393237->f_199)
	{
		return "";
	}
	if (func_29(uParam0->f_1))
	{
		*bParam1 = 1;
		return "";
	}
	if (func_8(uParam0->f_1) || func_14(*uParam0, 524288))
	{
		return func_13(iVar0);
	}
	if (bVar1)
	{
		if (func_31(1) > 1 && iVar0 != 0)
		{
			return "";
		}
		if (!func_32(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (func_33(uParam0->f_1))
		{
			return "";
		}
		if (func_34(*uParam0, iVar0 == 0))
		{
			return "";
		}
		if (func_35(uParam0->f_1, 1, 0, 0))
		{
			return "";
		}
		if (func_36(*uParam0))
		{
			return "";
		}
		if (func_37(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (!func_38(uParam0->f_1, *uParam0, iVar0 == 0))
		{
			return "";
		}
	}
	else if (func_21(*uParam0))
	{
		func_15(*uParam0);
		*uParam0 = -1;
		return "";
	}
	else if (func_20(*uParam0))
	{
		*bParam1 = 1;
		*uParam0 = -1;
		return "";
	}
	else
	{
		iVar0 = Global_1393237->f_11[*uParam0]->f_2;
	}
	return func_13(iVar0);
}

bool func_11(vector3 vParam0)
{
	if (func_23(Global_1393237->f_200))
	{
		return false;
	}
	if (func_30(vParam0))
	{
		return false;
	}
	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar0 = func_40(iLocal_14);
	return vdist(Global_1393237->f_200, vParam0) < (func_41(func_5(), iVar0, 0) + 20f);
}

bool func_12(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1393237->f_11)
	{
		return false;
	}
	return true;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "campfire_gang";
		case 1:
			return "campfire_always";
		default:
			break;
	}
	return "";
}

bool func_14(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return func_42(Global_1393237->f_11[iParam0]->f_10, iParam1);
}

void func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!func_23(Global_1393237->f_11[iParam0]->f_3))
	{
		func_24(Global_1393237->f_11[iParam0]->f_3, 0);
		_0x9851de7aec10b4e1(Global_1393237->f_11[iParam0]->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0] = -15;
	Global_1393237->f_11[iParam0]->f_2 = -1;
	Global_1393237->f_11[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_6 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_9 = 0f;
	if (func_14(iParam0, 8388608))
	{
		Global_1393237->f_11[iParam0]->f_10 = 8388608;
	}
	else
	{
		Global_1393237->f_11[iParam0]->f_10 = 0;
		if (Global_1393237->f_11[iParam0]->f_17 != func_43())
		{
		}
		Global_1393237->f_11[iParam0]->f_17 = func_43();
	}
	Global_1393237->f_11[iParam0]->f_11 = -1;
	Global_1393237->f_11[iParam0]->f_12 = 0;
	Global_1393237->f_11[iParam0]->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237->f_11[iParam0]->f_14[iVar0] = 0;
		iVar0++;
	}
	func_44(iParam0, 1);
	Global_1393237->f_11[iParam0]->f_29 = 0;
	if (iParam0 > 2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (does_blip_exist(&(Global_1393237->f_11[iParam0]->f_18[0])))
		{
			remove_blip(Global_1393237->f_11[iParam0]->f_18[0]);
		}
		if (does_blip_exist(&(Global_1393237->f_11[iParam0]->f_18[1])))
		{
			remove_blip(Global_1393237->f_11[iParam0]->f_18[1]);
		}
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	if (_0xf6a8a652a6b186cd(Global_1393237->f_11[iParam0]->f_21))
	{
		func_24(Global_1393237->f_11[iParam0]->f_3, 1);
	}
}

bool func_16()
{
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	switch (iVar3)
	{
		case -1317052143:
		case -1233681761:
		case -273223690:
		case 212278652:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1679686673:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return true;
	}
	return false;
}

bool func_17()
{
	return (Global_1894899 & 1 != 0 && func_45() != -1);
}

void func_18(vector3 vParam0, int iParam3)
{
	Global_1393237->f_11[iParam3]->f_3 = { vParam0 };
	func_28(iParam3, 512, 0);
}

void func_19(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_46(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_47(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_48(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return func_14(iParam0, 512);
}

bool func_21(int iParam0)
{
	if (&Global_1393237->f_11[iParam0] == -15)
	{
		if (!func_14(iParam0, 512))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return func_50(func_49(iParam0));
}

float func_22(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_23(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_24(vector3 vParam0, int iParam3)
{
	if (func_23(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_51(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (func_14(iParam0, 4194304))
	{
		return false;
	}
	if (func_14(iParam0, 1))
	{
		return false;
	}
	if (func_23(Global_1393237->f_11[iParam0]->f_3))
	{
		return false;
	}
	return true;
}

int func_26(vector3 vParam0, int iParam3)
{
	if (func_23(vParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_51(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_27(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_23(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_52(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_53(iVar0, bParam8);
	return iVar0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_29(vector3 vParam0)
{
	iVar0 = func_54(vParam0);
	if (iVar0 < 0)
	{
		return false;
	}
	return func_14(iVar0, 1);
}

bool func_30(vector3 vParam0)
{
	if (!func_23(Global_1393237->f_200))
	{
		return vdist(Global_1393237->f_200, vParam0) < 5f;
	}
	return false;
}

int func_31(bool bParam0)
{
	iVar0 = func_55(1);
	if (bParam0)
	{
		return iVar0 + 1;
	}
	return iVar0;
}

bool func_32(vector3 vParam0, var uParam3)
{
	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	if (func_17())
	{
		return false;
	}
	if (func_56() && (((iLocal_14 == 1 || iLocal_14 == 12) || iLocal_14 == 3) || iLocal_14 == 9))
	{
		return false;
	}
	if (Global_1393237->f_3 > get_game_timer())
	{
		return false;
	}
	if (Global_1327479->f_5 > get_game_timer())
	{
		return false;
	}
	if (!func_58(1, vParam0, -1, func_57(iLocal_14, 0, 0, 0)))
	{
		return false;
	}
	if (does_script_with_name_hash_exist(-777113702) && _get_number_of_references_of_script_with_name_hash(-777113702) > 0)
	{
		if (!func_51(vParam0, -1165.043f, 91.94646f, 43.90535f, 10f, 0))
		{
			return false;
		}
	}
	switch (iLocal_14)
	{
		case 11:
			if (func_51(vParam0, 1504.914f, -1469.925f, 71.38271f, 10f, 0))
			{
				return false;
			}
			break;
		case 9:
			if (func_51(vParam0, -1712.438f, 606.3528f, 117.7065f, 10f, 0))
			{
				return false;
			}
			break;
	}
	if (func_59(Global_40.f_9632.f_192))
	{
		func_61(func_60(), &uVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if ((iVar3 < 1 && iVar4 < 1) && iVar5 < 1)
		{
			if (func_62())
			{
				if (iVar2 >= 3 && iVar1 >= 0)
				{
					return false;
				}
			}
			else if (iVar2 >= 3 && iVar1 >= 0)
			{
				return false;
			}
		}
	}
	if (!func_63(func_5(), vParam0))
	{
		return false;
	}
	if (!func_64(-1))
	{
		return false;
	}
	else if (!func_64(func_57(iLocal_14, 0, 0, 0)))
	{
		return false;
	}
	else if (!func_65(func_57(iLocal_14, 0, 0, 0)))
	{
		return false;
	}
	if (func_67(vParam0, func_66(iLocal_14), 4, 1))
	{
		return false;
	}
	if (func_67(vParam0, func_68(iLocal_14), 2, 1))
	{
		return false;
	}
	if (func_69())
	{
		return false;
	}
	switch (iLocal_14)
	{
		case 10:
			if (func_70())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 12:
			if (!func_71(3))
			{
				return true;
			}
			break;
		case 1:
		case 3:
		case 9:
			if (!func_71(0))
			{
				return true;
			}
			break;
		case 11:
			if (!func_71(2))
			{
				return true;
			}
	}
	return false;
}

bool func_33(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_10991.f_4)
	{
		if (func_51(*Global_40.f_10991.f_4[iVar0], vParam0, 10f, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_34(int iParam0, bool bParam1)
{
	if (func_72(player_id(), 0, 1, 1))
	{
		return true;
	}
	if (func_17())
	{
		return true;
	}
	if (func_14(iParam0, 4096) || func_14(iParam0, 131072))
	{
		return true;
	}
	return false;
}

bool func_35(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_23(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_36(int iParam0)
{
	fVar0 = get_distance_between_coords(Global_36, Global_1393237->f_11[iParam0]->f_3, true);
	bVar1 = func_73(iParam0, fVar0, 1);
	if (bVar1)
	{
		fVar2 = 130f;
	}
	else
	{
		fVar2 = 100f;
	}
	if (fVar0 < fVar2)
	{
		return true;
	}
	return false;
}

bool func_37(vector3 vParam0, int iParam3)
{
	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar2 = func_40(iLocal_14);
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (iVar0 != iParam3)
		{
			if (!func_23(Global_1393237->f_11[iVar0]->f_3))
			{
				fVar1 = get_distance_between_coords(vParam0, Global_1393237->f_11[iVar0]->f_3, true);
				if (fVar1 < func_41(func_5(), iVar2, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_38(vector3 vParam0, int iParam3, bool bParam4)
{
	if (func_30(vParam0) || func_14(iParam3, 524288))
	{
		return true;
	}
	if (func_74(iParam3))
	{
		return true;
	}
	if (bParam4)
	{
		if (Global_1393237->f_8 + 1 > Global_1393237->f_6)
		{
			return false;
		}
	}
	else if (Global_1393237->f_7 + 1 > Global_1393237->f_6)
	{
		return false;
	}
	if (func_75(50, 0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		if (func_16())
		{
			return false;
		}
	}
	return true;
}

int func_39(vector3 vParam0)
{
	return func_76(_get_map_zone_at_coords(vParam0, 10));
}

int func_40(int iParam0)
{
	iVar0 = func_57(iParam0, func_56(), 0, 0);
	return func_77(iVar0);
}

float func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 200f;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return 200f;
				case 0:
					return 220f;
				default:
					return 300f;
			}
			break;
	}
	return 400f;
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_43()
{
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

int func_45()
{
	return Global_1894899->f_2;
}

bool func_46(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_47(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_48(int iParam0)
{
	if (func_46(iParam0, 1))
	{
		func_78(1);
	}
}

int func_49(int iParam0)
{
	uVar0 = &Global_1393237->f_11[iParam0];
	func_79(&uVar0, 0, 0, 0, 1, 0, 0, 0);
	return uVar0;
}

bool func_50(int iParam0)
{
	return &Global_1899515 > iParam0;
}

bool func_51(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_52(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_53(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_54(vector3 vParam0)
{
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_74(iVar0))
		{
			if (func_51(vParam0, Global_1393237->f_11[iVar0]->f_3, 10f, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(bool bParam0)
{
	if (bParam0)
	{
		return func_80(Global_1359489->f_4);
	}
	get_group_size(func_81(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_81(), iVar3);
		if (func_82(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_56()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_57(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bVar0 = (func_56() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

bool func_58(bool bParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = func_39(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237->f_1 != 0 && (get_game_timer() - Global_1393237->f_1) < func_83(iParam5))
			{
				return false;
			}
		}
		else if (Global_1393237->f_1 != 0 && (get_game_timer() - Global_1393237->f_1) < 961920)
		{
			return false;
		}
		if (Global_1393237->f_2 != 0)
		{
			if (get_game_timer() - Global_1393237->f_2) < func_84()
			{
				return false;
			}
		}
	}
	else
	{
		if (&Global_1393237 != 0 && (&Global_1393237 - get_game_timer()) < func_85())
		{
			return false;
		}
		if (Global_1393237->f_2 != 0)
		{
			if (get_game_timer() - Global_1393237->f_2) < func_84()
			{
				return false;
			}
		}
	}
	if (get_game_timer() < Global_1393237->f_4)
	{
		return false;
	}
	return true;
}

bool func_59(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_87(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_88(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_89(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_90(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_91(iParam0);
	if (iVar5 < 1 || iVar5 > func_92(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_60()
{
	return &Global_1899515;
}

void func_61(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(func_60(), iParam0, uParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_62()
{
	if (Global_1392135->f_3 != -1)
	{
		return true;
	}
	return Global_1392135->f_3 != -1;
}

bool func_63(int iParam0, vector3 vParam1)
{
	fVar0 = vParam1.z;
	fVar1 = Global_36.f_2;
	if (fVar1 < (fVar0 - 45f))
	{
		return false;
	}
	return true;
}

bool func_64(int iParam0)
{
	fVar0 = func_94();
	iVar1 = 1;
	if (fVar0 < IntToFloat(Global_1392135->f_4))
	{
		iVar1 = 0;
	}
	if (iParam0 != -1)
	{
		if (fVar0 < IntToFloat(&Global_1392135->f_5[iParam0]))
		{
			iVar1 = 0;
		}
	}
	return iVar1;
}

bool func_65(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		if (&Global_1393237->f_192[iParam0] < (func_96() / 1000))
		{
			return true;
		}
	}
	return false;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 170f;
		default:
			break;
	}
	return 350f;
}

bool func_67(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_23(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

float func_68(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 140f;
		default:
			break;
	}
	return 220f;
}

bool func_69()
{
	return Global_1310750->f_16077 != 0;
}

bool func_70()
{
	return true;
}

bool func_71(int iParam0)
{
	if (!func_95(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0]->f_1 == 5;
}

int func_72(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_97(bParam1, bParam2, bParam3);
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

int func_73(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 180f)
	{
		if (is_screen_faded_in() || is_screen_fading_in())
		{
			if (is_sphere_visible(Global_1393237->f_11[iParam0]->f_3 + Vector(1f, 0f, 0f), 3f))
			{
				return 1;
			}
			if (bParam2)
			{
				if (is_sphere_visible(Global_1393237->f_11[iParam0]->f_3 + Vector(5.5f, 0f, 0f), 3f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return Global_1393237->f_11[iParam0]->f_2 != -1;
}

bool func_75(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_98())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_99(&(Global_1898164->f_1[0]));
		if (func_100(iVar0) && func_101((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_102(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 0:
			return 2;
		case 3:
			return 1;
		case 1:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_78(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_89(*uParam0);
	iVar1 = func_90(*uParam0);
	iVar2 = func_91(*uParam0);
	iVar3 = func_88(*uParam0);
	iVar4 = func_87(*uParam0);
	iVar5 = func_86(*uParam0);
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
	iVar6 = func_92(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_92(iVar1, iVar0);
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
	func_103(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_80(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_104(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_81()
{
	return get_player_group(get_player_index());
}

bool func_82(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_83(int iParam0)
{
	func_105(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237->f_11[iVar0]->f_2 == 0)
		{
			if (func_14(iVar0, iVar2) || func_14(iVar0, iVar3))
			{
				if (iVar1 < 1083240)
				{
					iVar1 = 1083240;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 720720)
				{
					iVar1 = 720720;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 360360;
	}
	if (iParam0 != -1)
	{
		if (iParam0 == Global_1393237->f_209)
		{
			iVar1 = floor((2f * IntToFloat(iVar1)));
		}
	}
	return iVar1;
}

int func_84()
{
	return 240000;
}

int func_85()
{
	func_105(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237->f_11[iVar0]->f_2 != 0)
		{
			if (func_14(iVar0, iVar2))
			{
				iVar1 = 2885760;
			}
			else if (func_14(iVar0, iVar3))
			{
				if (iVar1 < 2882880)
				{
					iVar1 = 2882880;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 2880000)
				{
					iVar1 = 2880000;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 1440000;
	}
	return iVar1;
}

int func_86(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_87(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_88(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_89(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_106(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_90(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_91(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_92(int iParam0, int iParam1)
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

void func_93(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_107(iParam0, iParam1, 1))
	{
		iVar0 = func_90(iParam1);
		iVar1 = func_89(iParam0);
		iVar2 = (func_89(iParam0) - func_89(iParam1));
		iVar3 = (func_90(iParam0) - func_90(iParam1));
		iVar4 = (func_91(iParam0) - func_91(iParam1));
		iVar5 = (func_88(iParam0) - func_88(iParam1));
		iVar6 = (func_87(iParam0) - func_87(iParam1));
		iVar7 = (func_86(iParam0) - func_86(iParam1));
	}
	else
	{
		iVar0 = func_90(iParam0);
		iVar1 = func_89(iParam1);
		iVar2 = (func_89(iParam1) - func_89(iParam0));
		iVar3 = (func_90(iParam1) - func_90(iParam0));
		iVar4 = (func_91(iParam1) - func_91(iParam0));
		iVar5 = (func_88(iParam1) - func_88(iParam0));
		iVar6 = (func_87(iParam1) - func_87(iParam0));
		iVar7 = (func_86(iParam1) - func_86(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_92(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_108(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_94()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_95(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

int func_96()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_97(bool bParam0, bool bParam1, bool bParam2)
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

bool func_98()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_99(int iParam0)
{
	if (!func_102(iParam0))
	{
		return -1;
	}
	return func_110(func_109(iParam0));
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_102(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_111(uParam0, iParam6);
	func_112(uParam0, iParam5);
	func_113(uParam0, iParam4);
	func_114(uParam0, iParam3);
	func_115(uParam0, iParam2);
	func_116(uParam0, iParam1);
}

void func_104(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 9484;
	*iParam1 = 66;
	*iParam2 = 128;
}

int func_106(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_107(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_59(iParam1) || !func_59(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_108(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_109(int iParam0)
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

int func_110(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_111(var uParam0, int iParam1)
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

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_113(var uParam0, int iParam1)
{
	iVar0 = func_90(*uParam0);
	iVar1 = func_89(*uParam0);
	if (iParam1 < 1 || iParam1 > func_92(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_115(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

