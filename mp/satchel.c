void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	set_ped_reset_flag(Global_34, 304, true);
	if (!is_entity_dead(Global_34))
	{
		iVar0 = func_2(Global_34, 0);
		if ((iVar0 != -1569615261 && iVar0 != 1742487518) && iVar0 != -1415022764)
		{
			if (Global_17378 == 0)
			{
				_0x6929e22158e52265(Global_34, 0, &Global_17379);
			}
		}
		iVar1 = func_2(Global_34, 1);
		if (_is_weapon_revolver(iVar1) || _is_weapon_pistol(iVar1))
		{
			if (Global_17378 == 0)
			{
				_0x6929e22158e52265(Global_34, 1, &Global_17383);
			}
		}
		_hide_ped_weapons(Global_34, 2, false);
	}
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
	Global_1940311->f_10932 = 0;
	Global_1940311->f_10933 = 0;
	iVar2 = -1723036365;
	if (func_3(0))
	{
		iVar2 = -605765767;
	}
	while (!func_4())
	{
		set_ped_reset_flag(Global_34, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					func_7();
				}
				if (_launch_app_by_hash_with_entry(-4058091, iVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					func_7();
				}
				if (((((!_is_app_active(-4058091) || &Global_1940311 == 2) || Global_13) || is_ped_dead_or_dying(Global_34, true)) || !func_9(255)) || func_10(512))
				{
					func_8(2);
				}
				else
				{
					func_11();
				}
				disable_control_action(0, -1304887797, false);
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
				break;
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	_close_app_by_hash(-4058091);
	if (!func_10(512))
	{
		func_12(0);
	}
	else
	{
		func_12(1);
		func_13(512);
	}
	Global_1940311->f_1 = 0;
	Global_17406 = 0;
	Global_1940311->f_12 = 0;
	terminate_this_thread();
}

int func_2(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_4()
{
	if (func_14(1, 1))
	{
		return true;
	}
	if (Global_1940311->f_12)
	{
		return true;
	}
	return false;
}

int func_5()
{
	return Global_1940311->f_10932;
}

bool func_6()
{
	return Global_1940311->f_10933;
}

void func_7()
{
	Global_1940311->f_10933 = 0;
}

void func_8(int iParam0)
{
	if (Global_1940311->f_10932 != iParam0)
	{
		Global_1940311->f_10932 = iParam0;
		func_15();
	}
}

bool func_9(int iParam0)
{
	return !func_16(iParam0);
}

bool func_10(int iParam0)
{
	return (Global_1940311->f_10866 && iParam0) != 0;
}

void func_11()
{
	disable_control_action(0, 2139949496, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 1291350480, false);
	disable_control_action(0, -417363528, false);
	disable_control_action(0, -1814662593, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -1404316431, false);
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_13(int iParam0)
{
	Global_1940311->f_10866 = (Global_1940311->f_10866 - (Global_1940311->f_10866 && iParam0));
}

bool func_14(bool bParam0, bool bParam1)
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

void func_15()
{
	Global_1940311->f_10933 = 1;
}

bool func_16(int iParam0)
{
	return func_17(1, iParam0);
}

bool func_17(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_18(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_19())
	{
		return func_18(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_18(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_18(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_19()
{
	return Global_1102219->f_3672;
}

