void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_19 = -1;
	vLocal_22 = { -1338.12f, 2434.522f, 307.2562f };
	func_1();
	iLocal_15 = iScriptParam_0;
	while (true)
	{
		if (func_2())
		{
			func_3();
		}
		switch (iLocal_14)
		{
			case 0:
				if (7 != iLocal_15)
				{
				}
				else
				{
					sLocal_20 = "DONT_LEAVE_CAMP";
					func_4(1);
					iLocal_17 = func_5(sLocal_20, 0, 0, 1);
				}
				iLocal_14 = 1;
				break;
			case 1:
				func_6();
				if (func_7(Global_35, Global_1897952->f_38, 1, 0))
				{
					iLocal_14 = 2;
				}
				break;
			case 2:
				if (func_8())
				{
					func_3();
				}
				if (!func_7(Global_35, Global_1897952->f_38, 1, 0))
				{
					iLocal_14 = 1;
				}
				break;
		}
		wait(0);
	}
	func_3();
}

void func_1()
{
	if (has_force_cleanup_occurred(523))
	{
		func_3();
	}
}

bool func_2()
{
	if (is_ped_injured(Global_35))
	{
		return true;
	}
	if (func_9(0, 0, 1))
	{
		return true;
	}
	if (func_10(128))
	{
		return true;
	}
	if (7 == iLocal_15)
	{
		if (func_11(3))
		{
			return true;
		}
	}
	else if (8 == iLocal_15)
	{
		if (!func_11(38) || func_11(43))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	Global_1897952->f_40 = 0;
	if (iLocal_19 != -1)
	{
		func_12(iLocal_19, 128);
	}
	func_4(1);
	set_wind_speed(-1f);
	set_wind_direction(-1f);
	_set_snow_level(-1f);
	terminate_this_thread();
}

void func_4(int iParam0)
{
	func_13(1);
}

int func_5(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_6()
{
	if (is_screen_faded_out())
	{
		return;
	}
	if (8 == iLocal_15)
	{
		if (is_ped_in_any_boat(Global_35))
		{
			iVar0 = get_vehicle_ped_is_in(Global_35, false);
			if (!is_entity_dead(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, false);
				set_boat_sinks_when_wrecked(iVar0, true);
				explode_vehicle(iVar0, false, false, 0);
			}
		}
		if (!does_entity_exist(iLocal_18))
		{
			if (is_ped_on_mount(Global_35))
			{
				iLocal_18 = get_mount(Global_35);
				set_entity_as_mission_entity(iLocal_18, true, false);
			}
		}
		else if (!is_entity_dead(iLocal_18))
		{
			func_15(iLocal_18, 0, 0);
		}
	}
	else if (7 == iLocal_15)
	{
		if (!func_16(iLocal_17))
		{
			func_4(1);
			iLocal_17 = func_5(sLocal_20, 0, 0, 1);
		}
		fVar1 = func_17(vLocal_22, Global_36);
		if (fVar1 < 0f)
		{
			fVar1 = (fVar1 + 360f);
		}
		set_wind_direction(fVar1);
		fLocal_25 = get_wind_speed();
		fLocal_25 = func_18(fLocal_25 < 100f, (fLocal_25 + 1f), 100f);
		set_wind_speed(fLocal_25);
		fLocal_26 = get_snow_level();
		fLocal_26 = func_18(fLocal_26 < 1f, (fLocal_26 + 0.01f), 1f);
		_set_snow_level(fLocal_26);
		if (iLocal_16 < get_game_timer())
		{
			_set_entity_health(Global_35, (get_entity_health(Global_35) - 1), 0);
			iLocal_16 = get_game_timer() + 200;
			if (is_ped_on_mount(Global_35))
			{
				if (get_mount(Global_35) != iLocal_18)
				{
					iLocal_18 = get_mount(Global_35);
					iLocal_19 = func_19(iLocal_18);
					if (iLocal_19 != -1)
					{
						func_20(iLocal_19, 128);
					}
				}
			}
			if (does_entity_exist(iLocal_18))
			{
				if (is_entity_dead(iLocal_18))
				{
					if (!bLocal_21)
					{
						func_4(1);
						sLocal_20 = "DONT_LEAVE_CAMP_HORSE_DIED";
						bLocal_21 = true;
					}
				}
				else
				{
					_set_entity_health(iLocal_18, (get_entity_health(iLocal_18) - 3), 0);
				}
			}
		}
	}
}

bool func_7(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

bool func_8()
{
	if (func_16(iLocal_17))
	{
		func_4(1);
	}
	if (7 == iLocal_15)
	{
		fLocal_25 = get_wind_speed();
		fLocal_25 = func_18(fLocal_25 > 0f, (fLocal_25 - 0.5f), 0f);
		set_wind_speed(fLocal_25);
		fLocal_26 = get_snow_level();
		fLocal_26 = func_18(fLocal_26 > 0f, (fLocal_26 - 0.01f), 0f);
		_set_snow_level(fLocal_26);
		if (fLocal_25 > 5f)
		{
			return false;
		}
	}
	return true;
}

bool func_9(int iParam0, bool bParam1, bool bParam2)
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
		if (func_21())
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
		iVar0 = func_22(&(Global_1898164->f_1[0]));
		if (func_23(iVar0) && func_24((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_25(&(Global_1898164->f_1[0])))
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

bool func_10(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_11(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_26((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_12(int iParam0, int iParam1)
{
	iParam0 = func_27(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_13(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

var func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_16(int iParam0)
{
	iVar0 = 6;
	if (func_28(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

float func_17(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

float func_18(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_19(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_20(int iParam0, int iParam1)
{
	iParam0 = func_27(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_21()
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

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_30(func_29(iParam0));
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_25(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_26(int iParam0, bool bParam1)
{
	switch (func_31(iParam0))
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

int func_27(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 != 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_31(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_33(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_33(int iParam0)
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

