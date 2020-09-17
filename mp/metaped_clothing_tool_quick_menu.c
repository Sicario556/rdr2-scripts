void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(-1);
	bVar0 = false;
	while (!bVar0 && iLocal_60 < 3)
	{
		if (func_2() != -1)
		{
			bVar0 = func_3(0, 0);
		}
		else
		{
			bVar0 = func_4(1);
		}
		func_5(&iLocal_60, &uLocal_19);
		wait(0);
	}
	func_6();
}

void func_1(int iParam0)
{
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	network_set_script_is_safe_for_network_game();
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

int func_4(bool bParam0)
{
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
	return 0;
}

void func_5(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			func_7(iParam0, 1);
			break;
		case 1:
			func_7(iParam0, 2);
			break;
		case 2:
			if (iParam0->f_27)
			{
				func_7(iParam0, 3);
			}
			break;
		case 3:
			break;
	}
}

void func_6()
{
	terminate_this_thread();
}

void func_7(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

