void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1();
		terminate_this_thread();
	}
	while (!func_2())
	{
		wait(0);
	}
	terminate_this_thread();
}

int func_1()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_3(iVar0, 16384);
		iVar0++;
	}
	if (iLocal_18 != -1)
	{
		func_4(iLocal_18);
		func_3(iLocal_18, 1024);
	}
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	return 1;
}

int func_2()
{
	if (func_5())
	{
		func_6(6);
	}
	switch (iLocal_0)
	{
		case 0:
			iLocal_1 = func_7();
			if (!func_8(iLocal_1))
			{
				func_6(6);
				return 0;
			}
			iLocal_18 = func_9(iLocal_1);
			func_10(iLocal_18);
			func_11(iLocal_18, 1024);
			func_3(iLocal_18, 2);
			if (func_12(iLocal_1, &uLocal_2, &cLocal_3, &vLocal_11, &uLocal_17, &iLocal_20))
			{
				do_screen_fade_out(500);
				func_6(1);
			}
			else
			{
				func_6(6);
				return 0;
			}
			break;
		case 1:
			if (!is_screen_faded_out())
			{
				return 0;
			}
			if (!_does_scenario_point_exist(iLocal_19))
			{
				iLocal_19 = create_scenario_point(uLocal_2, vLocal_11, uLocal_17, 0, 0, 0);
				_set_scenario_point_flag(iLocal_19, 23, true);
				_set_scenario_point_flag(iLocal_19, 25, true);
				return 0;
			}
			if (!func_13(Global_35, -76381094))
			{
				clear_area(vLocal_11, 2f, 2442122);
				_task_use_scenario_point(Global_35, iLocal_19, &cLocal_3, 0, false, true, 0, false, -1f, false);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (iVar0 != iLocal_18)
					{
						func_14(iVar0);
						func_11(iVar0, 16384);
					}
					iVar0++;
				}
				set_clock_time(iLocal_20, 0, 0);
				func_15(vLocal_11, 150f, 0);
				_0x4759cc730f947c81();
				func_6(2);
			}
			break;
		case 2:
			if (_0x0ee3f0d7feccc54f())
			{
				func_6(3);
			}
			break;
		case 3:
			vLocal_14 = { func_16(iLocal_1) };
			if (func_17(vLocal_14))
			{
				func_6(6);
				return 0;
			}
			if (!_0xc29996a337bdd099((*Global_1425371)[iLocal_18]->f_1))
			{
				func_6(6);
				return 0;
			}
			_0xd0ba1853d76683c8((*Global_1425371)[iLocal_18]->f_1, vLocal_14, func_18(iLocal_1));
			iLocal_21 = get_game_timer() + 15000;
			func_6(4);
			break;
		case 4:
			if (!does_entity_exist(_0x6e585a616abb8401((*Global_1425371)[iLocal_18]->f_1)))
			{
				if (iLocal_21 > get_game_timer())
				{
					_0xd0ba1853d76683c8((*Global_1425371)[iLocal_18]->f_1, vLocal_14, func_18(iLocal_1));
					return 0;
				}
			}
			_0xa7966807953a18ee((*Global_1425371)[iLocal_18]->f_1, 4f);
			_0x34bcf6209b9668a7((*Global_1425371)[iLocal_18]->f_1, 1);
			set_gameplay_cam_relative_heading(func_19(iLocal_1), 1f);
			if (is_screen_faded_out())
			{
				do_screen_fade_in(500);
			}
			func_20(1870112085, 1, -142743235, 0, 0);
			func_6(5);
			break;
		case 5:
			if (_does_scenario_point_exist(iLocal_19))
			{
				if (_0x9c54041bb66bcf9e(Global_35, iLocal_19))
				{
					return 0;
				}
			}
			if (does_entity_exist(_0x6e585a616abb8401((*Global_1425371)[iLocal_18]->f_1)))
			{
				return 0;
			}
			func_6(6);
			break;
		case 6:
			return func_1();
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

void func_4(int iParam0)
{
	func_3(iParam0, 16);
}

bool func_5()
{
	if (func_22() != -1)
	{
		return true;
	}
	if (func_23(0, 0, 1))
	{
		return true;
	}
	if (is_entity_dead(Global_35))
	{
		return true;
	}
	return false;
}

void func_6(int iParam0)
{
	iLocal_0 = iParam0;
}

int func_7()
{
	return Global_1894899->f_2;
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return true;
		case 23:
			return true;
		case 28:
			return true;
		case 69:
			return true;
		case 75:
			return true;
		case 76:
			return true;
		case 78:
			return true;
		case 105:
			return true;
		default:
			break;
	}
	return false;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (!_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		return 0;
	}
	func_11(iParam0, 16);
	return _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
}

void func_11(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

bool func_12(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 2682.599f, -1458.432f, 45.757f };
			*uParam4 = -155f;
			*iParam5 = 20;
			return true;
		case 23:
			*uParam1 = -781832595;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_RAILING_MALE_C", 64);
			*uParam3 = { -1099.38f, -578.48f, 81.4f };
			*uParam4 = 138.954f;
			*iParam5 = 11;
			return true;
		case 28:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -1304.61f, 402.07f, 94.88f };
			*uParam4 = -155f;
			*iParam5 = 16;
			return true;
		case 69:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1520.34f, 437.09f, 90.18f };
			*uParam4 = -90f;
			*iParam5 = 8;
			return true;
		case 75:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -346.205f, -368.456f, 87.519f };
			*uParam4 = -65.272f;
			*iParam5 = 22;
			return true;
		case 76:
			*uParam1 = 421625586;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", 64);
			*uParam3 = { -167.44f, 638.81f, 113.03f };
			*uParam4 = -126.192f;
			*iParam5 = 6;
			return true;
		case 78:
			*uParam1 = 421625586;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D", 64);
			*uParam3 = { 2941.49f, 1274.77f, 43.64f };
			*uParam4 = 156.696f;
			*iParam5 = 14;
			return true;
		case 105:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1214.081f, -1293.024f, 76.372f };
			*uParam4 = 90.766f;
			*iParam5 = 2;
			return true;
		default:
			break;
	}
	return false;
}

bool func_13(int iParam0, int iParam1)
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

int func_14(int iParam0)
{
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
		(*Global_1425371)[iParam0]->f_1 = 0;
	}
	return 1;
}

void func_15(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

Vector3 func_16(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 2613.5f, -1477.1f, 45.1f;
		case 23:
			return -1154.2f, -535.7f, 86.4f;
		case 28:
			return -1276.9f, 486.7f, 92.7f;
		case 69:
			return 1529.7f, 530.7f, 89.4f;
		case 75:
			return -353f, -356.1f, 86.4f;
		case 76:
			return -200.5f, 562.7f, 112.8f;
		case 78:
			return 2886.5f, 1213.8f, 44.1f;
		case 105:
			return 1192.5f, -1277.5f, 75.6f;
	}
	return 0f, 0f, 0f;
}

bool func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 75:
		case 76:
		case 78:
		case 105:
			return 0;
		case 69:
			return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -67.5789f;
		case 23:
			return -80.0869f;
		case 28:
			return -61.4596f;
		case 69:
			return 0.5378f;
		case 75:
			return 138.6132f;
		case 76:
			return -85f;
		case 78:
			return 13.9649f;
		case 105:
			return -10f;
	}
	return 0f;
}

bool func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_24(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_25(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_26(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var5 = { func_27(iParam0, Var0, Var0.f_4, bParam4) };
	return func_28(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_21(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_22()
{
	return Global_1572887->f_12;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_29())
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
		iVar0 = func_30(&(Global_1898164->f_1[0]));
		if (func_31(iVar0) && func_32((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_33(&(Global_1898164->f_1[0])))
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

bool func_24(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<5> func_25(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_34(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_35(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_27(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_36(bParam1) };
			if (bParam2 && func_37(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_38(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_38(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_39(iParam0, &Var5, 1728382685))
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
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_40(bParam1) };
			switch (func_41(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_42(iParam0, -1823706425))
			{
				Var0 = { func_27(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_42(iParam0, -1483207246))
			{
				Var0 = { func_27(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_43(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
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

bool func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_44(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_45(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_46(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_27(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_24(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_46(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_28(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_44(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_43(*uParam1, &Var0, bParam6, 0))
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
	if (!func_45(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_46(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_29()
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

int func_30(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_48(func_47(iParam0));
}

bool func_31(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_33(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

struct<4> func_34(bool bParam0)
{
	return func_27(1328661203, func_49(), -1591664384, bParam0);
}

int func_35(int iParam0)
{
	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_36(bool bParam0)
{
	iVar0 = func_46(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_27(923904168, func_34(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_27(923904168, func_34(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_27(923904168, func_34(bParam0), -740156546, 0);
}

bool func_37(int iParam0, bool bParam1)
{
	if (func_41(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_50(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_38(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_51(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_39(int iParam0, var uParam1, int iParam2)
{
	if (func_52(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_40(bool bParam0)
{
	iVar0 = func_46(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_27(271701509, func_34(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_27(271701509, func_34(bParam0), 12999093, 0);
}

int func_41(int iParam0)
{
	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_42(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_41(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_43(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_46(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_44(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_45(bool bParam0)
{
	if (func_22() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_46(bParam0));
}

int func_46(bool bParam0)
{
	if (func_22() == -1)
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

int func_47(int iParam0)
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

int func_48(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

struct<4> func_49()
{
	return Var0;
}

bool func_50(int iParam0)
{
	if (!func_53(iParam0))
	{
		return false;
	}
	return func_54(iParam0);
}

int func_51(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_27(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_46(bParam6), &Var0, 0);
	return uVar4;
}

bool func_52(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_46(0);
	*uParam1 = { func_27(iParam0, func_36(0), iParam3, 0) };
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

bool func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_54(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

