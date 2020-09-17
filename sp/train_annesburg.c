void __EntryFunction__()
{
	vLocal_5 = { 2941.792f, 1377.969f, 43.1f };
	vLocal_8 = { 2314.011f, -1512.919f, 44.9053f };
	iLocal_12 = -1;
	iLocal_2 = iScriptParam_0;
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

bool func_1()
{
	func_3(7, 512);
	if (bLocal_11)
	{
		func_4(7);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_3(iVar0, 16384);
		iVar0++;
	}
	return true;
}

bool func_2()
{
	if (iLocal_0 > 0 && iLocal_0 < 6)
	{
		if (func_5())
		{
			iLocal_0 = 6;
		}
	}
	switch (iLocal_0)
	{
		case 0:
			if (!func_6())
			{
				iLocal_0 = 6;
				return false;
			}
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				func_4(iVar0);
				func_7(iVar0, 16384);
				iVar0++;
			}
			if (!does_entity_exist(iLocal_2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!_0xc29996a337bdd099((*Global_1425371)[7]->f_1))
			{
				iLocal_0 = 6;
				return false;
			}
			if (func_8(7, 2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!does_entity_exist(iLocal_3))
			{
				iLocal_3 = _0x6e585a616abb8401((*Global_1425371)[7]->f_1);
				return false;
			}
			iLocal_12 = get_sound_id();
			func_9(iLocal_2, 0, iLocal_12);
			iLocal_1 = 2;
			iLocal_0 = 1;
			break;
		case 1:
			func_9(iLocal_2, 0, iLocal_12);
			if (func_10(iLocal_3, Global_35, 1) < 2500f)
			{
				if (_0x86afc343cf7f0b34(-154412807, 2940.988f, 1374.5f, 43.1838f, &iVar1))
				{
					_0x3abfa128f5bf5a70(-154412807, iVar1, 1);
				}
				set_vehicle_is_considered_by_player(iLocal_3, true);
				_0xa7966807953a18ee((*Global_1425371)[7]->f_1, 0.5f);
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, 0.5f);
				_0xcfe122ec635cc2b2(iLocal_3, "DANGER", 1, 0);
				iLocal_4 = get_train_carriage(iLocal_3, iLocal_1);
				func_7(7, 512);
				bLocal_11 = true;
				iLocal_0 = 2;
			}
			break;
		case 2:
			func_9(iLocal_2, 0, iLocal_12);
			if (!does_entity_exist(iLocal_4))
			{
				_0xcfe122ec635cc2b2(iLocal_3, "ACKNOWLEDGE", 1, 0);
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, func_11(0));
				_0x4182c037aa1f0091(iLocal_3, 0);
				func_12();
				func_3(7, 512);
				iLocal_0 = 4;
				return false;
			}
			if (func_13(iLocal_4, vLocal_5, 1) < 0.25f)
			{
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, 0f);
				_0xcfe122ec635cc2b2(iLocal_3, "ACKNOWLEDGE", 1, 0);
				iLocal_0 = 3;
			}
			break;
		case 3:
			fVar2 = func_9(iLocal_2, 1, iLocal_12);
			if (fVar2 >= 0.999f)
			{
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, 0.5f);
				_0xcfe122ec635cc2b2(iLocal_3, "DANGER", 1, 0);
				iLocal_1++;
				iLocal_4 = get_train_carriage(iLocal_3, iLocal_1);
				iLocal_0 = 2;
			}
			break;
		case 4:
			if (func_13(iLocal_3, vLocal_8, 1) < 160000f)
			{
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, 5f);
				iLocal_0 = 5;
			}
			break;
		case 5:
			if (func_13(iLocal_3, vLocal_8, 1) < 1f)
			{
				_0x15206e88ff7617df((*Global_1425371)[7]->f_1, 0f);
				iLocal_0 = 6;
			}
			break;
		case 6:
			if (func_5())
			{
				if (func_1())
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

int func_4(int iParam0)
{
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
		(*Global_1425371)[iParam0]->f_1 = 0;
	}
	return 1;
}

bool func_5()
{
	if (func_15(0, 0, 1))
	{
		return true;
	}
	if (!_0xc29996a337bdd099((*Global_1425371)[7]->f_1))
	{
		return true;
	}
	if (func_8(7, 2))
	{
		return true;
	}
	if (!does_entity_exist(iLocal_3))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	if (func_15(0, 0, 1))
	{
		return false;
	}
	if ((func_16(54) || func_17(54)) || func_18(54))
	{
		return false;
	}
	if ((func_19(69, 0) || func_20(69)) || func_21(69))
	{
		return false;
	}
	if (func_22(0, 2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			if (does_entity_exist(_0x6e585a616abb8401((*Global_1425371)[iVar0]->f_1)))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_7(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

bool func_8(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0] && iParam1) != 0;
}

float func_9(int iParam0, bool bParam1, int iParam2)
{
	fVar0 = _get_entity_anim_current_time(iParam0, "props_misc@annesburg_coal", "annchute01_full");
	if (bParam1)
	{
		vVar1 = { get_entity_coords(iParam0, true, false) };
		_set_entity_anim_speed(iParam0, "props_misc@annesburg_coal", "annchute01_full", 1.5f);
		if (fVar0 >= 0.125f && fVar0 < 0.21f)
		{
			_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			func_23(iParam2, vVar1);
		}
		else if (fVar0 >= 0.485f && fVar0 < 0.52f)
		{
			_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 1f);
			func_23(iParam2, vVar1);
		}
		else if (fVar0 >= 0.64f && fVar0 < 0.73f)
		{
			_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			func_23(iParam2, vVar1);
		}
		else
		{
			_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
			_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
			func_24(iParam2);
		}
	}
	else
	{
		if (fVar0 != 0f)
		{
			_set_entity_anim_current_time(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
			_set_entity_anim_speed(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
		}
		_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
		_0x4fb67d172c4476f3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
		func_24(iParam2);
		fVar0 = 0f;
	}
	return fVar0;
}

float func_10(int iParam0, int iParam1, bool bParam2)
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
	return func_25(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

float func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 11f;
		case 2:
			return 11f;
		case 3:
			return 11f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0f;
		case 4:
			return 11f;
		default:
			break;
	}
	return 5f;
}

void func_12()
{
	iVar0 = 0;
	iVar1 = -705539859;
	if (_0x86afc343cf7f0b34(iVar1, 2855.288f, -1314.826f, 45.0838f, &iVar0))
	{
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -1242669618;
	if (_0x86afc343cf7f0b34(iVar1, 2748.4f, -1434.3f, 45f, &iVar0))
	{
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -1242669618;
	if (_0x86afc343cf7f0b34(iVar1, 2624.2f, -1477.2f, 45f, &iVar0))
	{
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -705539859;
	if (_0x86afc343cf7f0b34(iVar1, 2520.551f, -1482.221f, 45.2577f, &iVar0))
	{
		_0x3abfa128f5bf5a70(iVar1, iVar0, 0);
	}
}

float func_13(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_25(vVar0, vParam1);
}

bool func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
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
		if (func_26())
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
		iVar0 = func_27(&(Global_1898164->f_1[0]));
		if (func_28(iVar0) && func_29((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_30(&(Global_1898164->f_1[0])))
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

int func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_31((*Global_1835011)[iParam0]->f_1);
}

int func_17(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_18(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_33((*Global_1835011)[iParam0]->f_1);
}

bool func_19(int iParam0, bool bParam1)
{
	if (func_34() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_20(int iParam0)
{
	if (func_34() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_33((*Global_1347702)[iParam0]->f_15)) && !func_35((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!func_19(iParam0, 0))
	{
		return false;
	}
	if (func_35((*Global_1347702)[iParam0]->f_13, 64))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0, int iParam1)
{
	if (!func_36(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0, vector3 vParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (_0xe368e8422c860ba7("Coal_Fall", "Annesburg_Coal_Chute_Sounds", -2) && _0x84848e1c0fc67dbb(iParam0))
	{
		_0xdcf5ba95bbf0faba(iParam0, "Coal_Fall", vParam1, "Annesburg_Coal_Chute_Sounds", 0, 0, 1);
	}
}

void func_24(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!_0x84848e1c0fc67dbb(iParam0))
	{
		_0x3210bcb36af7621b(iParam0);
	}
}

float func_25(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_26()
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

int func_27(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_38(func_37(iParam0));
}

bool func_28(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_30(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_31(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_39(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_32(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_33(int iParam0)
{
	iVar0 = func_40(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_34()
{
	return Global_1572887->f_12;
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_36(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

int func_37(int iParam0)
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

int func_38(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_39(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_41(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_40(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_39(iParam0);
}

int func_41(int iParam0)
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

