void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	func_1();
	while (!func_2(0, 0))
	{
		wait(0);
	}
	func_3();
}

void func_1()
{
	network_set_this_script_is_network_script(32, false, -1);
	func_4();
	if (func_5())
	{
	}
	set_this_script_can_be_paused(false);
}

bool func_2(bool bParam0, bool bParam1)
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

void func_3()
{
	terminate_this_thread();
}

int func_4()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_3();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_3();
					break;
				case 2:
					func_3();
					break;
				case 4:
					func_3();
					break;
				case 3:
					func_3();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_3();
		}
		if (!network_is_game_in_progress())
		{
			func_3();
		}
		if (!network_is_signed_online())
		{
			func_3();
		}
		if (func_6() == 0)
		{
			if (func_7())
			{
				func_3();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_3();
	}
	return 1;
}

bool func_5()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

int func_6()
{
	return Global_1572887->f_13;
}

bool func_7()
{
	return Global_1051252->f_8;
}

