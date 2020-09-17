void __EntryFunction__()
{
	Local_13.f_1 = { ScriptParam_0 };
	func_1();
	while (!func_2(0, 0) && Local_13 != 5)
	{
		func_3(&Local_13);
		wait(0);
	}
	func_4();
}

void func_1()
{
	network_set_script_is_safe_for_network_game();
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

void func_3(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (_0x72b2e00c9bac6789(&(iParam0->f_1.f_1), iVar0))
		{
			if (!network_is_player_active(int_to_playerindex(iVar0)))
			{
				_0xd426e2e3288469d6(&(iParam0->f_1.f_1), iVar0);
			}
		}
		iVar0++;
	}
	if (*iParam0 > 0)
	{
		if ((get_game_timer() - iParam0->f_6) > 15000)
		{
			func_5(5, iParam0);
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (_0xe404bff0aba23cdc(&(iParam0->f_1.f_1)))
			{
				func_5(1, iParam0);
				iParam0->f_6 = get_game_timer();
				_0xc505036a35afd01b(iParam0->f_1.f_3);
			}
			break;
		case 1:
			if (_0xc223d299c670413d(1, iParam0->f_1.f_4, 0, -1))
			{
				func_5(2, iParam0);
			}
			break;
		case 2:
			if (_0xa021095c983f20d8())
			{
			}
			else
			{
				func_5(3, iParam0);
			}
			break;
		case 3:
			if (_0x6d87ba8ef15226cd())
			{
				func_5(4, iParam0);
			}
			else
			{
				func_5(1, iParam0);
			}
			break;
		case 4:
			if (_0x277865a734918ae6())
			{
				if (!_0x0b6b4507ac5ea8b8())
				{
					if (!_0x1bb50cd340a996e6())
					{
						_0x101f538c25abb39a(0, 0);
					}
				}
				func_5(5, iParam0);
			}
			else
			{
				func_5(1, iParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_4()
{
	terminate_this_thread();
}

void func_5(int iParam0, int iParam1)
{
	*iParam1 = iParam0;
}

