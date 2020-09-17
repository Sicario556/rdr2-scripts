void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	switch (ScriptParam_0)
	{
		case 2:
			if (ScriptParam_0.f_1 == -821438348 || ScriptParam_0.f_1 == -968517323)
			{
				if (!_0x2a8112a974de1ef6())
				{
					return;
				}
				do_screen_fade_out(0);
				func_1(0);
				set_frontend_active(false);
			}
			else if (ScriptParam_0.f_1 == -1214041525 || ScriptParam_0.f_1 == -118730902)
			{
				if (!_0x2a8112a974de1ef6())
				{
					return;
				}
				func_1(1);
				do_screen_fade_out(0);
				set_frontend_active(false);
			}
			else if (ScriptParam_0.f_1 != 745042118)
			{
				if (ScriptParam_0.f_1 == 173068202)
				{
					if (!_0x2a8112a974de1ef6())
					{
						return;
					}
					if (func_2())
					{
						do_screen_fade_out(0);
						set_frontend_active(false);
					}
				}
			}
			else
			{
				do_screen_fade_out(0);
				func_3();
				set_frontend_active(false);
			}
			break;
		default:
			break;
	}
	terminate_this_thread();
}

void func_1(bool bParam0)
{
	func_4(68);
	if (bParam0)
	{
		func_5(-1050153785, 16);
	}
	else
	{
		func_5(-1050153785, 0);
	}
	func_6(3);
}

bool func_2()
{
	if (is_orbis_version())
	{
		if (!_0x595f028698072dd9(-1))
		{
			_0x5c497525f803486b();
			return false;
		}
	}
	func_4(68);
	func_5(1375707186, 2);
	func_6(3);
	return true;
}

void func_3()
{
	func_4(4);
	func_6(2);
	if (_get_launch_param_exists(func_7(-448212099)))
	{
		Global_43893 = 1;
	}
	func_5(1785216189, 0);
}

void func_4(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_5(int iParam0, int iParam1)
{
	Global_1572887->f_282 = iParam0;
	Global_1572887->f_282.f_1 = iParam1;
	func_8(28);
}

void func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

char* func_7(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case -88424047:
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case 133180145:
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case 1433203589:
			sVar0 = "spawn_location";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case -448212099:
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_8(int iParam0)
{
	iVar0 = Global_1572887->f_282.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (is_bit_set(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_282.f_2 != -1)
	{
	}
	if (Global_1572887->f_282.f_3 != -1)
	{
	}
	if (Global_1572887->f_282.f_4 != -1)
	{
	}
	if (Global_1572887->f_282.f_5 != -1)
	{
	}
	if (Global_1572887->f_282.f_6 != -1)
	{
	}
	if (Global_1572887->f_282.f_8 != 0)
	{
	}
}

