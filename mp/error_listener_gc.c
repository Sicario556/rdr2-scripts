void __EntryFunction__()
{
	terminate_this_thread();
	if (has_force_cleanup_occurred(2) || !func_1(iScriptParam_0))
	{
		terminate_this_thread();
	}
	network_set_script_is_safe_for_network_game();
	network_set_script_ready_for_events(true);
	iLocal_13 = iScriptParam_0;
	bVar0 = false;
	while (!bVar0)
	{
		if (func_2() == -1)
		{
			bVar0 = _0x9e4ef615e307fbbe();
		}
		else
		{
			bVar0 = func_3(1, 1);
		}
		wait(0);
	}
	terminate_this_thread();
}

bool func_1(int iParam0)
{
	switch (iParam0)
	{
		case -992702923:
		case 397004310:
		case 2004694700:
			return true;
		default:
			break;
	}
	return false;
}

int func_2()
{
	return Global_1572887->f_13;
}

int func_3(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return 0;
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
			return 1;
		}
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

