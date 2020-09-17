void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	set_ped_reset_flag(Global_35, 304, true);
	if (!is_entity_dead(Global_35))
	{
		if (!is_ped_in_any_boat(Global_35))
		{
			iVar0 = func_2(Global_35, 0);
			if ((iVar0 != -1569615261 && iVar0 != 1742487518) && iVar0 != -1415022764)
			{
				if (Global_36605 != 0)
				{
				}
				else
				{
					_0x6929e22158e52265(Global_35, 0, &Global_36606);
				}
			}
			iVar1 = func_2(Global_35, 1);
			if (_is_weapon_revolver(iVar1) || _is_weapon_pistol(iVar1))
			{
				if (Global_36605 != 0)
				{
				}
				else
				{
					_0x6929e22158e52265(Global_35, 1, &Global_36610);
				}
			}
			_hide_ped_weapons(Global_35, 2, false);
		}
		else
		{
			Global_36606 = { func_3() };
			Global_36610 = { func_3() };
		}
	}
	Global_1935689->f_10226 = 0;
	Global_1935689->f_10227 = 0;
	iVar2 = -1723036365;
	if (func_4(0))
	{
		iVar2 = -605765767;
	}
	while (true)
	{
		set_ped_reset_flag(Global_35, 304, true);
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
				if (((!_is_app_active(-4058091) || &Global_1935689 == 2) || Global_16) || is_ped_dead_or_dying(Global_35, true))
				{
					func_8(2);
				}
				else if (func_9() != -1)
				{
				}
				else
				{
					func_10();
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
	func_11(0);
	Global_1935689->f_1 = 0;
	Global_36633 = 0;
	terminate_this_thread();
}

int func_2(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

struct<4> func_3()
{
	return Var0;
}

bool func_4(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_5()
{
	return Global_1935689->f_10226;
}

bool func_6()
{
	return Global_1935689->f_10227;
}

void func_7()
{
	Global_1935689->f_10227 = 0;
}

void func_8(int iParam0)
{
	if (Global_1935689->f_10226 != iParam0)
	{
		Global_1935689->f_10226 = iParam0;
		func_12();
	}
}

int func_9()
{
	return Global_1572887->f_12;
}

void func_10()
{
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(2, 130948705, false);
	disable_control_action(0, 1632043089, false);
	disable_control_action(2, 1623727326, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, 648122183, false);
	disable_control_action(0, -163964935, false);
	disable_control_action(0, -1582581421, false);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_12()
{
	Global_1935689->f_10227 = 1;
}

