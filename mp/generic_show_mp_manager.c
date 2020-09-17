void __EntryFunction__()
{
	func_1();
	while (!func_2(0, 0))
	{
		wait(0);
	}
	func_3();
}

void func_1()
{
	func_4(32, -1);
	func_5();
	if (func_6())
	{
		func_3();
	}
	func_7();
	func_8(0);
	set_this_script_can_be_paused(false);
	_0xb711eb4bc8d06013();
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
	func_9();
}

void func_4(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_9();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_5()
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
			func_9();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_9();
		}
		if (!network_is_game_in_progress())
		{
			func_9();
		}
		if (!network_is_signed_online())
		{
			func_9();
		}
		if (func_10() == 0)
		{
			if (func_11())
			{
				func_9();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_9();
	}
	return 1;
}

bool func_6()
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

void func_7()
{
	Var0.f_3 = 4;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_1 = -1;
	Var0.f_3.f_1.f_2 = -1;
	Var0.f_3.f_1.f_5 = -1;
	Var0.f_3.f_1.f_8 = -1;
	Var0.f_3.f_1.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_5 = -1;
	*Global_1291035 = { Var0 };
	network_register_host_broadcast_variables(Global_1291035, 36, 7);
	func_12(_0xba24095ea96dfe17(Global_1291035), 36, "g_mpShowHostData");
	if (func_13())
	{
		(*Global_1291002)[func_14()] = uVar36;
		network_register_player_broadcast_variables(Global_1291002, 33, 8);
		func_15(_0xba24095ea96dfe17((*Global_1291002)[0]), 33, "g_mpShowPlayerData");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1291002, 33, 8);
		func_15(_0xba24095ea96dfe17((*Global_1291002)[0]), 33, "g_mpShowPlayerData");
	}
}

void func_8(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_9();
			return;
		}
		wait(0);
	}
}

void func_9()
{
	terminate_this_thread();
}

int func_10()
{
	return Global_1572887->f_13;
}

bool func_11()
{
	return Global_1051252->f_8;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	return !Global_1572887->f_9;
}

int func_14()
{
	return Global_1102219->f_3672;
}

int func_15(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

