void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		if (func_3() == -1)
		{
		}
		else
		{
			Global_1896622->f_51 = _0xfb9eced5b68f3b78(Global_1896622->f_42);
			if (func_4(1, 1))
			{
				bVar0 = false;
			}
		}
		if (!bLocal_19)
		{
			if (func_5() || !func_6())
			{
				func_7(-829158153, 0, 1f, 1, 1, 0, 0, 0);
				func_7(721864151, 0, -1f, 1, 1, 0, 0, 0);
				bLocal_19 = true;
			}
		}
		wait(0);
	}
	func_8();
	terminate_this_thread();
}

void func_1()
{
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		func_8();
		terminate_this_thread();
	}
}

void func_2()
{
	iLocal_15 = _create_volume_aggregate_with_custom_name("m_volTumbleweed_Restriction");
	_0xbce668aaf83608be(iLocal_15, -5534.95f, -2962.377f, 38.52466f, 0f, 0f, 40.25f, 100f, 100f, 50f);
	_0xbce668aaf83608be(iLocal_15, -5620.958f, -2940.959f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	_0xbce668aaf83608be(iLocal_15, -5523.102f, -3041.372f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	_0xbce668aaf83608be(iLocal_15, -5486.511f, -2894.654f, 32.69263f, 0f, 0f, 0f, 75f, 75f, 50f);
	_0xbce668aaf83608be(iLocal_15, -5426.396f, -2936.432f, 32.69263f, 0f, 0f, 0f, 43f, 25f, 50f);
	func_9(iLocal_15);
	iLocal_16 = _create_volume_box_with_custom_name(-5193.5f, -2122f, 17f, 0f, 0f, 45f, 87f, 77f, 25f, "m_volRathskellerFork_Restriction");
	func_10(iLocal_16, 0, 0);
	iLocal_17 = _create_volume_cylinder_with_custom_name(-5409.035f, -3657.266f, -14.49665f, 0f, 0f, -24f, 36f, 30f, 30f, "m_volAbandonedBarn_Restriction");
	func_11(iLocal_17, 0, 0);
	iLocal_18 = _create_volume_box_with_custom_name(-5841.081f, -3740.558f, -25.90157f, 0f, 0f, 119.5362f, 24.82908f, 46.70603f, 12.83437f, "m_volScratchingPostAquatic_Restriction");
	func_12(iLocal_18);
}

int func_3()
{
	return Global_1572887->f_13;
}

bool func_4(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_5()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_6()
{
	return func_14(func_13(0));
}

void func_7(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_15(iParam0, 0, 0);
	if (func_16(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_17(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_18(iParam0, 1);
			}
			else
			{
				func_19(iParam0, 1);
			}
		}
		else
		{
			func_20(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_21())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_8()
{
}

void func_9(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_22(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_22(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_12(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228767, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228767, 0, 0, -1, -1, 0);
	_0x2161278c6322f740(2228767, 0, 0, -1, -1, iParam0);
}

struct<2> func_13(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_14(struct<2> Param0)
{
	return func_23(Param0, 9, 12);
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_16(int iParam0)
{
	if (func_24(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_17(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_16(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_20(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_21()
{
	return true;
}

void func_22(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_23(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_25(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_26(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_24(int iParam0)
{
	return iParam0 != 0;
}

bool func_25(struct<2> Param0)
{
	if (!func_27(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_28(Param0))
	{
		return false;
	}
	return true;
}

int func_26(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_29(Param0);
	}
	return -1;
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

int func_29(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_30(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_30(struct<2> Param0, var uParam2)
{
	if (!func_25(Param0))
	{
		return false;
	}
	func_31(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

void func_31(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

