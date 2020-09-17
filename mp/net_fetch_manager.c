void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		wait(0);
	}
	func_4();
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_5();
}

void func_1()
{
	iVar0 = get_game_timer();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	bVar0 = func_12();
	if (!bVar0)
	{
	}
	if (func_13())
	{
		func_14(bVar0);
	}
	func_15(bVar0);
}

void func_4()
{
	func_16();
}

void func_5()
{
	terminate_this_thread();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_7()
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
			func_5();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!network_is_game_in_progress())
		{
			func_5();
		}
		if (!network_is_signed_online())
		{
			func_5();
		}
		if (func_17() == 0)
		{
			if (func_18())
			{
				func_5();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	return 1;
}

bool func_8()
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

void func_9()
{
	func_19(Global_1237665);
	network_register_host_broadcast_variables(Global_1237665, 575, 47);
	func_20(_0xba24095ea96dfe17(Global_1237665), 575, "g_mpFetchManagerHostData");
	if (func_21())
	{
		*Global_1247937 = { *(*Global_1238240)[func_22()] };
	}
	func_23(Global_1238240);
	network_register_player_broadcast_variables(Global_1238240, 9697, 48);
	func_24(_0x690806bc83bc8ca2((*Global_1238240)[0]), 9697, "g_mpFetchManagerPlayerData");
	if (!func_21())
	{
		func_25(Global_1248240);
	}
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		wait(0);
	}
}

bool func_11(bool bParam0, bool bParam1)
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

bool func_12()
{
	if (func_26())
	{
		return false;
	}
	return true;
}

bool func_13()
{
	if (!is_thread_active(&(Global_1051252->f_16[13]), false))
	{
		return false;
	}
	if (!network_is_script_active("net_fetch_manager", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&(Global_1051252->f_16[13]));
}

void func_14(bool bParam0)
{
	switch (Global_1237665->f_571)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29(bParam0);
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1248240->f_8898)
	{
		case 0:
			func_30();
			break;
		case 1:
			func_31();
			break;
		case 2:
			func_32(bParam0);
			break;
	}
}

void func_16()
{
	Global_1248240->f_8898 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_555 != -1)
		{
			func_33(iVar0, 1);
			func_34(iVar0);
		}
		iVar0++;
	}
}

int func_17()
{
	return Global_1572887->f_13;
}

bool func_18()
{
	return Global_1051252->f_8;
}

void func_19(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_15 = 255;
	Var0.f_16 = 255;
	Var0.f_17 = 255;
	Var0.f_21.f_1 = -1;
	iVar27 = 0;
	while (iVar27 <= 12)
	{
		_copy_memory((*uParam0)[iVar27], &Var0, 27);
		iVar27++;
	}
	iVar29 = 0;
	while (iVar29 <= (3 - 1))
	{
		_copy_memory(uParam0->f_352[iVar29], &uVar28, 1);
		iVar29++;
	}
	uVar30 = -1;
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		_copy_memory(uParam0->f_356[iVar32], &uVar30, 2);
		iVar32++;
	}
	Var33.f_2 = 5;
	Var33.f_3 = 5;
	Var33.f_3.f_1 = -1;
	Var33.f_3.f_1.f_1 = -1;
	Var33.f_3.f_1.f_2 = -1;
	Var33.f_3.f_1.f_3 = 255;
	Var33.f_3.f_1.f_4 = -1;
	Var33.f_3.f_1.f_5 = -1;
	Var33.f_3.f_1.f_6 = -1;
	Var33.f_3.f_1.f_8 = 2;
	Var33.f_3.f_1.f_8.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_23.f_4 = -15;
	Var33.f_3.f_1.f_23.f_5 = 255;
	Var33.f_3.f_1.f_23.f_8 = 1;
	Var33.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40 = -1;
	Var33.f_3.f_1.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	_copy_memory(&(uParam0->f_367), &Var33, 204);
	uParam0->f_571 = uVar237;
	uParam0->f_572 = uVar238;
	uParam0->f_574 = 0;
}

int func_20(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_21()
{
	return !Global_1572887->f_9;
}

int func_22()
{
	return Global_1102219->f_3672;
}

void func_23(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_35((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_542 = 4;
	Var0.f_555 = -1;
	Var0.f_560 = 23;
	Var0.f_584 = -1;
	Var0.f_584.f_1 = -1;
	Var0.f_587 = -1082130432;
	Var0.f_590 = -1;
	Var0.f_596 = 255;
	Var0.f_603 = 9;
	Var0.f_634 = 6;
	Var0.f_643 = 6;
	Var0.f_643.f_1.f_1 = -1;
	Var0.f_643.f_1.f_2 = -1;
	Var0.f_643.f_1.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_38 = -1;
	Var683 = -1;
	Var683.f_1 = -1;
	Var688.f_2 = -1;
	Var688.f_9 = 1;
	Var688.f_16 = 10;
	Var688.f_104 = 11;
	Var688.f_116 = 255;
	Var811.f_3 = 2;
	uParam0->f_9026 = { Var811 };
	iVar819 = 0;
	while (iLocal_822 <= (3 - 1))
	{
		uParam0->f_8899[iLocal_822] = 0;
		iVar819 = iLocal_822 + 1;
	}
	uParam0->f_8903 = { Var688 };
	iVar820 = 0;
	while (iLocal_823 <= 12)
	{
		*(*uParam0)[iLocal_823] = { Var0 };
		iVar820 = iLocal_823 + 1;
	}
	iVar819 = 0;
	while (iLocal_822 <= 3)
	{
		*uParam0->f_8880[iLocal_822] = { Var683 };
		iVar819 = iLocal_822 + 1;
	}
	uParam0->f_8897 = uLocal_690;
	uParam0->f_8898 = 0;
	uParam0->f_9294 = -1;
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
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_36(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (_0x603ac35fd4602c76(Global_1257541->f_8863))
	{
		func_37(2);
	}
}

void func_29(bool bParam0)
{
	func_38(bParam0);
	func_39(&(Global_1237665->f_367), &(Global_1248240->f_8897));
}

void func_30()
{
	if (Global_1237665->f_571 > 0)
	{
		if (func_21())
		{
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				if (func_40(iVar0, 4))
				{
					*(*(*Global_1238240)[network_player_id_to_int()])[iVar0] = { *(*Global_1247937)[iVar0] };
				}
				iVar0++;
			}
		}
		func_41(1);
	}
}

void func_31()
{
	if ((_0x603ac35fd4602c76(Global_1257541->f_8863) && Global_1237665->f_571 > 1) && Global_1257541->f_8861 > 1)
	{
		func_42("FETCH", 30, -1, 0, 0);
		func_41(2);
	}
}

void func_32(bool bParam0)
{
	func_43(bParam0);
	func_44(bParam0);
	func_45();
	if (bParam0)
	{
		func_46();
		func_47();
		func_48();
	}
}

bool func_33(int iParam0, bool bParam1)
{
	iVar0 = (*Global_1248240)[iParam0]->f_590;
	if (func_49(iVar0))
	{
		if (bParam1)
		{
			_0x7de4643157ad646c(Global_1248240->f_8880[iVar0]->f_3);
		}
		return false;
	}
	return true;
}

void func_34(int iParam0)
{
	func_50(iParam0);
	func_51(iParam0);
	if ((*Global_1248240)[iParam0]->f_590 != -1)
	{
		func_52((*Global_1248240)[iParam0]->f_590, iParam0, 0, 0);
	}
	func_53(iParam0);
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_5 = 16;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_77 = -1;
	Var0.f_19.f_1.f_87.f_87.f_87.f_87.f_87.f_82 = -1;
	Var0.f_542 = 4;
	Var0.f_555 = -1;
	Var0.f_560 = 23;
	Var0.f_584 = -1;
	Var0.f_584.f_1 = -1;
	Var0.f_587 = -1082130432;
	Var0.f_590 = -1;
	Var0.f_596 = 255;
	Var0.f_603 = 9;
	Var0.f_634 = 6;
	Var0.f_643 = 6;
	Var0.f_643.f_1.f_1 = -1;
	Var0.f_643.f_1.f_2 = -1;
	Var0.f_643.f_1.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_643.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_643.f_38 = -1;
	*(*Global_1248240)[iParam0] = { Var0 };
	func_54(iParam0);
	iVar683 = player_id();
	if (((iLocal_686 >= 0 && iLocal_686 < 32) && network_is_game_in_progress()) && network_is_in_session())
	{
		iVar684 = network_player_id_to_int();
		if (iLocal_687 >= 0 && iLocal_687 < network_get_max_num_participants())
		{
			Var685 = 6;
			Var685.f_21 = -1;
			Var685.f_22 = -1;
			*(*(*Global_1238240)[iLocal_687])[iParam0] = { Var685 };
		}
	}
}

void func_35(var uParam0)
{
	Var0 = 13;
	Var0.f_1 = 6;
	Var0.f_1.f_21 = -1;
	Var0.f_1.f_22 = -1;
	Var0.f_1.f_23 = 6;
	Var0.f_1.f_23.f_21 = -1;
	Var0.f_1.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_300.f_1 = 255;
	*uParam0 = { Var0 };
}

bool func_36(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return false;
	}
	return true;
}

void func_37(int iParam0)
{
	if (Global_1237665->f_571 != iParam0)
	{
		Global_1237665->f_571 = iParam0;
	}
}

void func_38(bool bParam0)
{
	if (Global_1237665->f_574 <= 0)
	{
		return;
	}
	iVar1 = &Global_1248240->f_8899[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar1 || ((*Global_1237665)[iVar0]->f_2 > -1 && (*Global_1237665)[iVar0]->f_2 < 2))
		{
			func_57(&(Global_1248240->f_8899[0]), bParam0);
		}
		iVar0++;
	}
	func_58(&(Global_1248240->f_8899[1]));
}

void func_39(var uParam0, var uParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	if (uParam0->f_3[iVar0]->f_2 != -1)
	{
		Var1 = { func_59(&(Global_1198046->f_28), *uParam0->f_3[iVar0]) };
		func_60(Var1, uParam0, uParam0->f_3[iVar0]);
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62((*Global_1248240)[iParam0]->f_556, iParam1));
}

void func_41(int iParam0)
{
	if (Global_1248240->f_8898 != iParam0)
	{
		Global_1248240->f_8898 = iParam0;
	}
}

int func_42(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!_does_text_database_exist(sParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((_text_database_request(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!_text_database_has_loaded(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_43(bool bParam0)
{
	if (!func_63(2))
	{
		return;
	}
	if (bParam0 && Global_1237665->f_574 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			if (func_64(iVar1, 8192, 255))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (bVar0)
	{
		if (!func_65(1, 255))
		{
			_0x4b52bf96e225d230(1);
			func_66(1, 1);
		}
	}
	else if (func_65(1, 255))
	{
		_0x4b52bf96e225d230(0);
		func_67(1, 1);
	}
}

void func_44(bool bParam0)
{
	if (Global_1237665->f_574 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = &Global_1248240->f_8899[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar2 || ((*Global_1237665)[iVar0]->f_2 > -1 && !func_64(iVar0, 1048576, 255)))
		{
			func_68(iVar0, bParam0);
		}
		func_69(iVar0);
		func_70(iVar0);
		func_71(iVar0);
		func_72(iVar0, (*Global_1248240)[iVar0]->f_559);
		if ((*Global_1237665)[iVar0]->f_2 < 3)
		{
			func_73(iVar0);
		}
		if (((*Global_1237665)[iVar0]->f_2 > 0 && func_74((*Global_1248240)[iVar0]->f_559)) && func_75(iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_1248240->f_8899[0] = &Global_1248240->f_8899[0] + 1;
	Global_1248240->f_8899[1] = &Global_1248240->f_8899[1] + 1;
	if (&Global_1248240->f_8899[0] >= 13)
	{
		Global_1248240->f_8899[0] = 0;
	}
	if (&Global_1248240->f_8899[1] >= 5)
	{
		Global_1248240->f_8899[1] = 0;
	}
	if (iVar1 != -1)
	{
		func_76(iVar1);
	}
	else
	{
		func_77();
	}
}

void func_45()
{
	if (!func_78(1))
	{
		func_79();
	}
	if (Global_1248240->f_8903.f_97 <= 0)
	{
		return;
	}
	iVar0 = Global_1248240->f_8903.f_98;
	if (func_80(iVar0))
	{
		func_81(iVar0);
		iVar0 = (iVar0 + 1 % 10);
		Global_1248240->f_8903.f_98 = iVar0;
		Global_1248240->f_8903.f_97 = (Global_1248240->f_8903.f_97 - 1);
	}
}

void func_46()
{
	if (func_13())
	{
		func_82(Global_1248240->f_8903.f_122);
		Global_1248240->f_8903.f_122 = (Global_1248240->f_8903.f_122 + 1 % 32);
	}
	iVar0 = player_id();
	func_83();
	Global_1248240->f_8903.f_6 = func_84(iVar0);
	if (Global_1248240->f_8903.f_6 == -1154721830)
	{
		Global_1248240->f_8903.f_6 = func_85();
		if (!func_86(2, 255) && Global_1248240->f_8903.f_6 == -1154721830)
		{
			func_87(2);
		}
		else if (func_86(2, 255) && Global_1248240->f_8903.f_6 != -1154721830)
		{
			func_88(2);
		}
		func_89(Global_1248240->f_8903.f_121, iVar0);
	}
	else if (func_86(2, 255))
	{
		func_88(2);
	}
	if (network_is_player_active(iVar0))
	{
		func_90(Global_1248240->f_8903.f_121, iVar0);
		func_91(Global_1248240->f_8903.f_121, iVar0);
	}
	if (func_92() && (!func_86(5, (*Global_1238240)[network_player_id_to_int()]->f_300.f_1) || !network_is_player_active((*Global_1238240)[network_player_id_to_int()]->f_300.f_1)))
	{
		func_93();
	}
	Global_1248240->f_8903.f_121 = (Global_1248240->f_8903.f_121 + 1 % 32);
}

void func_47()
{
	func_94();
	func_95();
}

void func_48()
{
	Var0 = { func_96(538649369) };
	bVar2 = func_97(Var0);
	if (!bVar2)
	{
		return;
	}
	if (!func_98(Var0))
	{
		return;
	}
	func_99(Var0);
	func_100();
	if (Global_1248240->f_9026.f_6 == 0)
	{
		return;
	}
	iVar3 = func_101();
	if (!func_102(iVar3))
	{
		return;
	}
	func_103(iVar3);
}

bool func_49(int iParam0)
{
	return ((func_104(iParam0) && _does_thread_exist(Global_1248240->f_8880[iParam0]->f_3)) && is_thread_active(Global_1248240->f_8880[iParam0]->f_3, false));
}

void func_50(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1717788883)
	{
		return;
	}
	if (func_40(iParam0, 128))
	{
		func_105(0);
		func_106(iParam0, 128);
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { (*Global_1248240)[iParam0]->f_584 };
	bVar2 = func_40(iParam0, 33554432);
	func_106(iParam0, 33554432);
	func_51(iParam0);
	func_107(iParam0);
	if (!func_108(Var0) && !func_109(Var0))
	{
		return;
	}
	iVar3 = func_110((*Global_1248240)[iParam0]->f_559);
	if (iVar3 != 0 && iVar3 != 6)
	{
		func_111(0);
	}
	func_106(iParam0, 16);
	func_112(iParam0, 32);
	func_112(iParam0, 16);
	if ((!bVar2 && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), &Global_1296859)) && !func_40(iParam0, 65536))
	{
		iVar4 = 1;
	}
	func_113(Var0, 0, 2, iVar4, 0);
	Var5.f_1 = -1;
	Var5.f_1.f_1 = -1;
	func_114((*Global_1248240)[iParam0]->f_584, &Var5);
	if ((*Global_1248240)[iParam0]->f_559 == -468635158)
	{
		func_115(0);
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1427578635)
	{
		if (*Global_1237665)[iParam0]->f_16 == player_id()
		{
			func_88(4);
		}
		func_116(1, 0, 0);
	}
	if (func_117((*Global_1248240)[iParam0]->f_559))
	{
		func_118(1, 0, 0);
	}
	func_119((*Global_1248240)[iParam0]->f_559);
}

void func_51(int iParam0)
{
	if (!func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = (*Global_1237665)[iParam0]->f_5;
	if (!func_120(iVar0))
	{
		return;
	}
	func_121(iVar0);
	func_106(iParam0, 134217728);
}

void func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (!func_122(iParam0, iParam1))
	{
		(*Global_1248240)[iParam1]->f_590 = -1;
		return;
	}
	if (&Global_1248240->f_8880[iParam0] != -1)
	{
		(*Global_1248240)[&Global_1248240->f_8880[iParam0]]->f_590 = -1;
		if (bParam3 && network_is_session_active())
		{
			func_112(&(Global_1248240->f_8880[iParam0]), 2);
		}
	}
	if (bParam2)
	{
		Global_1248240->f_8880[iParam0]->f_1 = -1;
	}
	Global_1248240->f_8880[iParam0] = -1;
	Global_1248240->f_8880[iParam0]->f_2 = 0;
}

void func_53(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (&(*Global_1248240)[iParam0]->f_560[iVar0] == 0)
		{
		}
		else
		{
			remove_relationship_group(&((*Global_1248240)[iParam0]->f_560[iVar0]));
		}
		iVar0++;
	}
}

void func_54(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1248240->f_9297)
	{
		Global_1248240->f_9297 = -1;
		Global_1248240->f_9298 = -1;
	}
}

bool func_55(int iParam0)
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

int func_56(int iParam0)
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

void func_57(int iParam0, bool bParam1)
{
	if ((*Global_1237665)[iParam0]->f_2 == -1)
	{
		return;
	}
	if ((*Global_1237665)[iParam0]->f_2 != 3)
	{
		if (!bParam1)
		{
			func_123(iParam0, 3);
		}
		else if ((*Global_1248240)[iParam0]->f_559 != 0 && !func_124((*Global_1248240)[iParam0]->f_559))
		{
			func_123(iParam0, 3);
		}
	}
	func_125(iParam0);
	func_126(iParam0);
	switch ((*Global_1237665)[iParam0]->f_2)
	{
		case 0:
			func_127(iParam0);
			break;
		case 1:
			func_128(iParam0);
			break;
		case 2:
			func_129(iParam0);
			break;
		case 3:
			func_130(iParam0);
			break;
	}
}

void func_58(int iParam0)
{
	if ((Global_1237665->f_356[iParam0]->f_1 && &Global_1237665->f_356[iParam0] != -1) && !network_is_script_active(func_131(), iParam0, false, 0))
	{
		func_132(iParam0);
	}
}

struct<40> func_59(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	if (Param1.f_1 != -1)
	{
		return *uParam0->f_2[Param1.f_1];
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if (uParam0->f_2[iVar41]->f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41]->f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41]->f_4 != Param1.f_4)
		{
		}
		else
		{
			return *uParam0->f_2[iVar41];
		}
		iVar40++;
	}
	return Var0;
}

void func_60(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_133(uParam41))
	{
		case -1:
			func_134(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_135(&Param0, uParam41))
			{
				if ((get_network_time_accurate() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_136(uParam41, 3);
				}
				return;
			}
			if (func_137(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_136(uParam41, 1);
			break;
		case 1:
			if (!func_135(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_136(uParam41, 3);
				return;
			}
			if (func_137(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_136(uParam41, 2);
			break;
		case 2:
			if (!func_135(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_136(uParam41, 3);
				return;
			}
			if (func_137(&Param0) < 3)
			{
				return;
			}
			func_136(uParam41, 3);
			break;
		case 3:
			func_136(uParam41, -1);
			break;
	}
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_62(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_63(int iParam0)
{
	if (&Global_1248240->f_8899[iParam0] < func_138(iParam0))
	{
		Global_1248240->f_8899[iParam0] = &Global_1248240->f_8899[iParam0] + 1;
		return false;
	}
	Global_1248240->f_8899[iParam0] = 0;
	return true;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_61(iParam0) && func_62((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return func_62((*Global_1238240)[iParam1]->f_302, iParam0);
}

void func_66(int iParam0, bool bParam1)
{
	if (!func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_139(&((*Global_1238240)[network_player_id_to_int()]->f_302), iParam0);
	}
}

void func_67(int iParam0, bool bParam1)
{
	if (func_65(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_140(&((*Global_1238240)[network_player_id_to_int()]->f_302), iParam0);
	}
}

void func_68(int iParam0, bool bParam1)
{
	bVar0 = (*Global_1248240)[iParam0]->f_555 == -1;
	bVar1 = (*Global_1237665)[iParam0]->f_2 == -1;
	if (bVar0 && bVar1)
	{
		return;
	}
	if (!func_141(iParam0, -2147483648))
	{
		if (func_142())
		{
			if (func_64(iParam0, 32, 255))
			{
				if (!func_40(iParam0, 1073741824) && !func_143())
				{
					func_144(iParam0, 1073741824);
					func_145(2);
					return;
				}
			}
		}
	}
	if ((*Global_1237665)[iParam0]->f_4 != -1)
	{
		func_146((*Global_1237665)[iParam0]->f_4, -1);
	}
	func_147(iParam0);
	func_148(iParam0);
	func_149(iParam0);
	func_150(iParam0);
	if (func_151(iParam0, bParam1))
	{
		if ((*Global_1248240)[iParam0]->f_555 != 3 && (*Global_1248240)[iParam0]->f_555 != -1)
		{
			func_152(iParam0, 3);
		}
	}
	else if (func_153(iParam0, bVar0, bVar1))
	{
		func_152(iParam0, 0);
	}
	switch ((*Global_1248240)[iParam0]->f_555)
	{
		case 0:
			func_154(iParam0);
			break;
		case 1:
			func_155(iParam0);
			break;
		case 2:
			func_156(iParam0);
			break;
		case 3:
			func_157(iParam0);
			break;
	}
}

void func_69(int iParam0)
{
	switch ((*Global_1248240)[iParam0]->f_559)
	{
		case -260420884:
		case 850213441:
		case 1427578635:
		case 1918154385:
			if (_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()))
			{
				func_158();
			}
			break;
	}
}

void func_70(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*Global_1248240)[iParam0]->f_542[iVar0]->f_2 == 0)
		{
		}
		else
		{
			func_159(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	if (func_64(iParam0, 32, 255) && !func_40(iParam0, 4194304))
	{
		func_160();
	}
}

void func_72(int iParam0, int iParam1)
{
	if (func_64(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case -1165569262:
				if (func_40(iParam0, 4194304))
				{
					func_162(func_161(), (*Global_1248240)[iParam0]->f_584, 1, 1);
				}
				break;
			case 1427578635:
				if (func_40(iParam0, 4194304) && func_64(iParam0, 32, func_161()))
				{
					func_162(func_161(), (*Global_1248240)[iParam0]->f_584, 1, 0);
				}
				break;
			case 1918154385:
				if (func_40(iParam0, 4194304))
				{
					func_162(func_161(), (*Global_1248240)[iParam0]->f_584, 1, 1);
				}
				break;
		}
	}
}

void func_73(int iParam0)
{
	if (((*Global_1248240)[iParam0]->f_559 == 1427578635 && (*Global_1237665)[iParam0]->f_16 == player_id()) && func_164(func_163(Global_1237665[iParam0]), (*Global_1248240)[iParam0]->f_589) == 948632731)
	{
		func_165(4);
	}
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
		case 1539023636:
			return true;
	}
	return false;
}

bool func_75(int iParam0)
{
	fVar0 = (*Global_1248240)[iParam0]->f_641;
	fVar1 = func_167(Global_35, func_166(iParam0));
	iVar2 = 4000;
	(*Global_1248240)[iParam0]->f_641 = fVar1;
	if (fVar1 < 100f)
	{
		return true;
	}
	else if (fVar1 < 250f)
	{
		if (fVar1 < fVar0)
		{
			if (!func_40(iParam0, 1024))
			{
				if (!func_40(iParam0, 2048))
				{
					func_168(&((*Global_1248240)[iParam0]->f_642));
					func_144(iParam0, 2048);
				}
				if (func_169((*Global_1248240)[iParam0]->f_642) < iVar2)
				{
					return false;
				}
			}
			func_144(iParam0, 1024);
			return true;
		}
		else
		{
			if (func_40(iParam0, 1024))
			{
				if (func_40(iParam0, 2048))
				{
					func_168(&((*Global_1248240)[iParam0]->f_642));
					func_106(iParam0, 2048);
				}
				if (func_169((*Global_1248240)[iParam0]->f_642) < iVar2)
				{
					return true;
				}
			}
			func_106(iParam0, 1024);
			return false;
		}
	}
	return false;
}

void func_76(int iParam0)
{
	if (Global_1248240->f_9296 != iParam0)
	{
		Global_1248240->f_9296 = iParam0;
	}
}

void func_77()
{
	if (Global_1248240->f_9296 != -1)
	{
		Global_1248240->f_9296 = -1;
	}
}

bool func_78(int iParam0)
{
	return (Global_1248240->f_8903 && iParam0) != 0;
}

void func_79()
{
	if (!func_170(255))
	{
		return;
	}
	if (_unlock_is_unlocked(1444561974))
	{
		Var2 = { func_171(player_id()) };
		_0x4ef23e04a0c8ff51(&Var2, &iVar0);
		if (func_172(iVar0))
		{
			func_173(_create_var_string(2, "JAIL_BOUNTY_REMOVE", iVar0), 10000, 0, 0, 0, 1);
		}
		else if (func_172(1))
		{
			func_173(_create_var_string(2, "JAIL_BOUNTY_REMOVE", func_174()), 10000, 0, 0, 0, 1);
		}
		func_175(-896348601, 0, 0);
	}
	func_165(1);
}

bool func_80(int iParam0)
{
	bVar0 = false;
	if (!func_176(iParam0, 64))
	{
		func_177(iParam0, 64);
	}
	if (func_176(iParam0, 32))
	{
		bVar1 = false;
		switch (&Global_1248240->f_8903.f_16[iParam0])
		{
			case 509970874:
				bVar1 = func_178(8, 16);
				break;
			case -1141463485:
				bVar1 = func_179(16, 8);
				break;
			case -649633548:
				bVar1 = func_178(32, 64);
				break;
			case 504244707:
				bVar1 = func_179(64, 32);
				break;
		}
		if (bVar1)
		{
			func_180(iParam0, 32);
		}
	}
	if (!func_181(iParam0))
	{
		switch (&Global_1248240->f_8903.f_16[iParam0])
		{
			case 355060119:
				bVar0 = func_182(iParam0);
				break;
			case 1393257577:
				bVar0 = func_183(iParam0);
				break;
			case -896348601:
				bVar0 = func_184(iParam0);
				break;
			case -179235043:
				bVar0 = func_185(iParam0);
				break;
			case 509970874:
				bVar0 = func_186(iParam0);
				break;
			case -1141463485:
				bVar0 = func_187(iParam0);
				break;
			case -1454491980:
				bVar0 = func_188(iParam0);
				break;
			case -649633548:
				bVar0 = func_189(iParam0, Global_1248240->f_8903.f_16[iParam0]->f_6);
				break;
			case 504244707:
				bVar0 = func_190(iParam0);
				break;
			case -1473321380:
				bVar0 = func_191(iParam0, Global_1248240->f_8903.f_16[iParam0]->f_6);
				break;
			case 1265908607:
				bVar0 = func_192(iParam0);
				break;
			case -1729966722:
				bVar0 = func_193(iParam0);
				break;
			case -1228177771:
				bVar0 = func_194(iParam0, Global_1248240->f_8903.f_16[iParam0]->f_6);
				break;
			case -506555739:
				bVar0 = func_195(iParam0);
				break;
			case 1244342493:
				bVar0 = func_196(iParam0);
				break;
			case -1303136:
				bVar0 = func_197(iParam0);
				break;
			case -1555147881:
				bVar0 = func_198(iParam0);
				break;
			case 607258092:
				bVar0 = func_199(iParam0);
				break;
		}
		if (bVar0)
		{
			func_177(iParam0, 1);
		}
		else
		{
			func_177(iParam0, 1);
			func_177(iParam0, 4);
		}
	}
	return func_176(iParam0, 24);
}

void func_81(int iParam0)
{
	switch (&Global_1248240->f_8903.f_16[iParam0])
	{
		case 509970874:
			func_88(8);
			break;
		case -1141463485:
			func_88(16);
			break;
		case -649633548:
			func_88(32);
			break;
		case 504244707:
			func_88(64);
			break;
	}
	*Global_1248240->f_8903.f_16[iParam0] = { Var0 };
}

void func_82(int iParam0)
{
	if (func_86(1, iParam0))
	{
		if (func_86(4, iParam0))
		{
			if (!func_200(iParam0))
			{
				func_201(iParam0);
				return;
			}
		}
		else
		{
			if (!func_202(iParam0))
			{
				func_203(iParam0);
				return;
			}
			func_201(iParam0);
		}
	}
	else
	{
		func_203(iParam0);
	}
}

void func_83()
{
	if (func_78(2) && (get_game_timer() - Global_1248240->f_8903.f_15) > 600000)
	{
		func_204(2);
	}
	if (Global_1248240->f_8903.f_14 <= 0)
	{
		return;
	}
	iVar0 = (Global_1248240->f_8903.f_14 - 1);
	while (iVar0 >= 0)
	{
		if (!func_205(Global_1248240->f_8903.f_9[iVar0], &uVar1))
		{
			if (Global_1248240->f_8903.f_9[iVar0]->f_3 || uVar1)
			{
				func_165(2);
				Global_1248240->f_8903.f_15 = get_game_timer();
				Var4 = { func_171(&(Global_1248240->f_8903.f_9[iVar0])) };
				_0x4ef23e04a0c8ff51(&Var4, &iVar2);
				func_206(&(Global_1248240->f_8903.f_9[iVar0]), iVar2);
			}
			if (Global_1248240->f_8903.f_14 > 1)
			{
				_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_8), &(Global_1248240->f_8903.f_9[iVar0]));
				*Global_1248240->f_8903.f_9[iVar0] = { *(Global_1248240->f_8903.f_9[(Global_1248240->f_8903.f_14 - 1)]) };
			}
			else
			{
				_0xde544b7ec0c187cc(&(Global_1248240->f_8903.f_8));
				Global_1248240->f_8903.f_9[iVar0]->f_1 = 0;
				Global_1248240->f_8903.f_9[iVar0] = 255;
				Global_1248240->f_8903.f_9[iVar0]->f_2 = 0;
				Global_1248240->f_8903.f_9[iVar0]->f_3 = 0;
				Global_1248240->f_8903.f_14 = 0;
				return;
			}
			if (Global_1248240->f_8903.f_14 > 0)
			{
				Global_1248240->f_8903.f_14 = (Global_1248240->f_8903.f_14 - 1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

int func_84(int iParam0)
{
	if (!func_170(255))
	{
		return 1742861621;
	}
	if (func_207(255))
	{
		return 1742861621;
	}
	if (_0x8faf4d262faba99c(&vVar0))
	{
		Global_1257541->f_8852.f_4 = vVar0.z;
	}
	if (Global_1296859->f_21 < Global_1257541->f_8852.f_4)
	{
		return -232718588;
	}
	if (Global_1257541->f_8852.f_5 == -1)
	{
		Global_1257541->f_8852.f_5 = Global_1296859->f_21 + 30;
	}
	if (Global_1296859->f_21 < Global_1257541->f_8852.f_5)
	{
		return -855374237;
	}
	if (func_208(iParam0, 1, 0, 1))
	{
		return -1826994236;
	}
	if (func_209(1114112, iParam0))
	{
		return 458635662;
	}
	if (is_screen_faded_out())
	{
		return -86457213;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		return -189894459;
	}
	return -1154721830;
}

int func_85()
{
	if (!_unlock_is_unlocked(-133260350))
	{
		return 2138128745;
	}
	if (func_78(2))
	{
		return 1348664310;
	}
	if (func_212())
	{
		return -77347729;
	}
	return -1154721830;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (network_is_player_active(int_to_playerindex(iParam1)) && ((*Global_1238240)[iParam1]->f_300 && iParam0) != 0);
}

void func_87(int iParam0)
{
	(*Global_1238240)[network_player_id_to_int()]->f_300 = ((*Global_1238240)[network_player_id_to_int()]->f_300 || iParam0);
}

void func_88(int iParam0)
{
	(*Global_1238240)[network_player_id_to_int()]->f_300 = ((*Global_1238240)[network_player_id_to_int()]->f_300 - ((*Global_1238240)[network_player_id_to_int()]->f_300 && iParam0));
}

void func_89(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	Global_1248240->f_8903.f_7 = func_213(iVar0, iParam1);
	iVar1 = 0;
	switch (func_214(&uVar2, iVar0, 1))
	{
		case 4:
			iVar1 = get_hash_key(&uVar2);
			break;
		case 1:
			iVar1 = 0;
			break;
		case 2:
			iVar1 = 0;
			break;
		case 0:
		case 3:
			Global_1248240->f_8903.f_7 = 726443182;
			return;
	}
	if (Global_1248240->f_8903.f_7 != -605318450)
	{
		return;
	}
	func_215(iVar0, iVar1);
}

void func_90(int iParam0, int iParam1)
{
	if (!func_86(2, iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_120), iParam0);
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (iParam1 == iVar0)
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_120), iParam0);
		return;
	}
	if (_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9(iParam1), iVar0))
	{
		_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_120), iParam0);
		return;
	}
	if (vdist(func_216(iVar0), func_216(iParam1)) <= (Global_1901947->f_166.f_23 * (*Global_1145091)[iParam0]->f_34))
	{
		_0x31010318ba9897ac(&(Global_1248240->f_8903.f_120), iParam0);
	}
	else
	{
		_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_120), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	if (func_92())
	{
		return;
	}
	if (!network_is_player_active(int_to_playerindex(iParam0)))
	{
		return;
	}
	if (!_0x3f59fe6f37869576(iParam1, int_to_playerindex(iParam0)))
	{
		return;
	}
	iVar0 = (*Global_1238240)[iParam0]->f_300.f_1;
	if (iVar0 == 255)
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!func_86(4, iVar0))
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if ((*Global_1237665)[iVar1]->f_16 == iVar0 && (*Global_1248240)[iVar1]->f_559 == 1427578635)
		{
			if (!func_36((*Global_1248240)[iVar1]->f_584))
			{
				Jump @214; //curOff = 178
			}
			else
			{
				_0x6b1044fdc2b09101((*Global_1248240)[iVar1]->f_584.f_1, get_player_ped(iVar0));
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
			if (!bVar2)
			{
				return;
			}
			func_217(iVar0);
		}
	}
}

bool func_92()
{
	return (*Global_1238240)[network_player_id_to_int()]->f_300.f_1 != 255;
}

void func_93()
{
	(*Global_1238240)[network_player_id_to_int()]->f_300.f_1 = 255;
	Global_1257541->f_8852.f_5 = -1;
}

void func_94()
{
	switch (Global_1248240->f_8903.f_1)
	{
		case 0:
			if (func_218())
			{
				func_219(1);
			}
			break;
		case 1:
			if (func_176(Global_1248240->f_8903.f_100, 32))
			{
				if (func_176(Global_1248240->f_8903.f_100, 2))
				{
					func_219(2);
				}
				else if (func_176(Global_1248240->f_8903.f_100, 4))
				{
					if (func_220(Global_1248240->f_8903.f_100))
					{
						func_221(1);
						func_219(0);
						func_222();
					}
				}
				func_180(Global_1248240->f_8903.f_100, 32);
			}
			break;
		case 2:
			iVar0 = func_224(Global_1248240->f_8903.f_2, func_223(func_163(Global_1248240->f_8903.f_2), Global_1248240->f_8903.f_3), 1427578635, get_entity_coords(Global_34, true, false), 1, 0, 0, -1082130432);
			if (iVar0 != 0 || func_225(player_id(), 1))
			{
				func_221(1);
				func_219(0);
				func_222();
				return;
			}
			func_87(4);
			func_226(Global_1248240->f_8903.f_2, Global_1248240->f_8903.f_3, 0);
			func_221(0);
			func_219(0);
			break;
	}
}

void func_95()
{
	iVar0 = Global_1257541->f_8852.f_6;
	iVar1 = func_227();
	iVar2 = func_228(0);
	Global_1257541->f_8852.f_6 = iVar1;
	Global_1248240->f_8903.f_5 = func_229(iVar2, iVar0, iVar1, &bVar3);
	if (Global_1248240->f_8903.f_5 != 1519094052)
	{
		if (bVar3)
		{
			func_230();
		}
		return;
	}
	if (!func_231(iVar2))
	{
		func_230();
		return;
	}
	iVar5 = -1;
	if (!func_232(1427578635, iVar2, &uVar4, &iVar5, 1, Global_1901947->f_166.f_24))
	{
		func_230();
		return;
	}
	func_226(uVar4, iVar5, 0);
	func_230();
}

struct<2> func_96(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_97(var uParam0, var uParam1)
{
	if ((Global_1296859->f_21 - Global_1257541->f_8859) > 60)
	{
		stat_id_get_int(&uParam0, &iVar0);
		stat_id_set_int(&uParam0, iVar0 + 1, true);
		Global_1257541->f_8859 = Global_1296859->f_21;
		return 1;
	}
	return 0;
}

bool func_98(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &iVar0);
	return iVar0 >= 600;
}

void func_99(var uParam0, var uParam1)
{
	stat_id_set_int(&uParam0, 0, true);
}

void func_100()
{
	func_233();
	Global_1248240->f_9026.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_234(iVar0))
		{
			Global_1248240->f_9026.f_3[iVar0] = 0;
		}
		else
		{
			func_235(&(Global_1248240->f_9026.f_6), iVar0);
			switch (iVar0)
			{
				case 0:
					Global_1248240->f_9026.f_3[iVar0] = func_236();
					break;
				case 1:
					Global_1248240->f_9026.f_3[iVar0] = func_237();
					break;
			}
		}
		iVar0++;
	}
}

int func_101()
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 + func_238(iVar1));
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar2 = get_random_int_in_range(1, iVar0 + 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_238(iVar1) == 0)
		{
		}
		else
		{
			iVar2 = (iVar2 - func_238(iVar1));
			if (iVar2 <= 0)
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_239();
		case 1:
			return func_240();
	}
	return false;
}

void func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_232(1884341302, 0, &uVar0, &iVar1, 0, -1082130432);
			func_226(uVar0, iVar1, 0);
			func_241(1048576);
			func_241(524288);
			break;
		case 1:
			func_243(-1784925006, 0, &uVar0, &iVar1, func_242((*Global_1298536)[network_player_id_to_int()]->f_5.f_12), 0, Global_1901947->f_166.f_42);
			func_226(uVar0, iVar1, 0);
			break;
	}
	Var2 = { func_96(-617150375) };
	stat_id_set_int(&Var2, iParam0, true);
}

bool func_104(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

int func_105(bool bParam0)
{
	if (!func_244(-931834499, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_106(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_40(iParam0, iParam1))
	{
		func_140(&((*Global_1248240)[iParam0]->f_556), iParam1);
	}
}

void func_107(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != -1777724963)
	{
		return;
	}
	if (!func_40(iParam0, 268435456))
	{
		return;
	}
	if (func_40(iParam0, 536870912))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	func_175(607258092, 0, 0);
}

bool func_108(struct<2> Param0)
{
	iVar0 = func_245(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_109(struct<2> Param0)
{
	iVar0 = func_245(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case -1165569262:
		case -260420884:
		case 850213441:
		case 1539023636:
			return 6;
		case -468635158:
			return 5;
	}
	return 0;
}

void func_111(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_246(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_247();
		Global_1900688->f_9 = func_248(Global_1893587->f_2);
		Global_1900688->f_11 = func_249(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_250(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_250(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_250(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_112(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_64(iParam0, iParam1, 255))
	{
		func_140(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

void func_113(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_36(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_108(Param0) && !func_109(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_251(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_245(Param0) == 3)
		{
			func_252(1, -1706799532);
		}
		else if (func_245(Param0) == 4)
		{
			func_252(0, -1706799532);
		}
	}
	if ((func_245(Param0) == 3 || func_245(Param0) == 1) || ((bParam5 && func_245(Param0) == 4) && _0x01f4d242765c6b24(func_251(Param0))))
	{
		if (iParam3 != -1)
		{
			func_253(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_253(Param0, 2, iParam4, 255, 0);
		}
	}
	func_254(Param0, 0);
	if (func_256(func_255(0), Param0))
	{
		func_257(1);
		func_258(0);
		func_259(0);
		func_260(1);
	}
	func_261(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_262(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_114(struct<2> Param0, var uParam2)
{
	iVar0 = func_263(Param0);
	if (func_263(Param0) < 0)
	{
		return 0;
	}
	func_264(iVar0, uParam2);
	return 1;
}

void func_115(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = 0;
	_0xc684ff658b2e55da(iParam0);
}

void func_116(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_228(0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = func_265(bParam2);
	if (bParam2)
	{
		iVar3 = (Global_1901947->f_166.f_18 / 1000);
		bVar2 = true;
	}
	else if (bVar1)
	{
		iVar3 = (func_266(iVar0) / 1000);
	}
	else if (bParam1)
	{
		iVar3 = (func_267(iVar0) / 1000);
	}
	else
	{
		iVar3 = (func_268(iVar0) / 1000);
	}
	if (bParam0 || bParam2)
	{
		Global_1257541->f_8852.f_1 = (Global_1296859->f_21 + iVar3);
		func_269(2, 1);
	}
	else
	{
		Global_1257541->f_8852.f_1 = 0;
		func_270(2, 1);
	}
	if (bVar2 && Global_1257541->f_8852 > Global_1296859->f_21)
	{
		Global_1257541->f_8852 = (Global_1257541->f_8852 + iVar3);
	}
	else
	{
		Global_1257541->f_8852 = (Global_1296859->f_21 + iVar3);
	}
}

bool func_117(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case 1884341302:
			return true;
		default:
			break;
	}
	return false;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	Var0 = { func_96(538649369) };
	stat_id_set_int(&Var0, 0, true);
}

void func_119(int iParam0)
{
	if (func_271(iParam0))
	{
		func_272(1);
	}
	if (func_273(iParam0))
	{
		func_272(2);
	}
}

bool func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_121(int iParam0)
{
	if (!func_120(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

bool func_122(int iParam0, int iParam1)
{
	return (func_104(iParam0) && (&Global_1248240->f_8880[iParam0] == -1 || &Global_1248240->f_8880[iParam0] == iParam1));
}

void func_123(int iParam0, int iParam1)
{
	if ((*Global_1237665)[iParam0]->f_2 != iParam1)
	{
		(*Global_1237665)[iParam0]->f_2 = iParam1;
	}
}

bool func_124(int iParam0)
{
	iVar0 = func_274(iParam0);
	if (iVar0 != 0 && func_275(iVar0))
	{
		return false;
	}
	if (iParam0 == 1717788883)
	{
		return func_276();
	}
	return true;
}

void func_125(int iParam0)
{
	if (!func_141(iParam0, 1073741824))
	{
		if (_0xd6f6acf4392187fb((*Global_1237665)[iParam0]->f_13))
		{
			if (_0x149a2751ab66ac02((*Global_1237665)[iParam0]->f_13) > 0)
			{
				iVar1 = _0x4be6c13a45cca8ec((*Global_1237665)[iParam0]->f_13);
				if ((*Global_1237665)[iParam0]->f_15 != iVar1)
				{
					(*Global_1237665)[iParam0]->f_15 = iVar1;
				}
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				iVar1 = int_to_playerindex(iVar2);
				if (network_is_player_active(iVar1))
				{
					if (_0x9be7dcb22d32ccbe((*Global_1237665)[iParam0]->f_13, iVar1))
					{
						_0x31010318ba9897ac(&uVar0, iVar2);
					}
					else if ((*Global_1248240)[iParam0]->f_559 == 1427578635 && (*Global_1237665)[iParam0]->f_16 == iVar1)
					{
						(*Global_1237665)[iParam0]->f_13 = _0x901e0dc25080c8b9(iVar1);
						(*Global_1237665)[iParam0]->f_15 = iVar1;
						_0xde544b7ec0c187cc(&uVar0);
						_0x31010318ba9897ac(&uVar0, iVar2);
					}
				}
				iVar2++;
			}
		}
		else if ((*Global_1248240)[iParam0]->f_559 == 1427578635 && func_277((*Global_1237665)[iParam0]->f_16, 0, 1))
		{
			(*Global_1237665)[iParam0]->f_13 = _0x901e0dc25080c8b9((*Global_1237665)[iParam0]->f_16);
			(*Global_1237665)[iParam0]->f_15 = (*Global_1237665)[iParam0]->f_16;
			_0x31010318ba9897ac(&uVar0, (*Global_1237665)[iParam0]->f_16);
		}
	}
	(*Global_1237665)[iParam0]->f_14 = uVar0;
}

void func_126(int iParam0)
{
	iVar0 = func_278(iParam0);
	iVar1 = (*Global_1237665)[iParam0]->f_1;
	if (iVar1 != iVar0)
	{
		if (iVar1 != -1)
		{
			Global_1237665->f_352[iVar1] = (&Global_1237665->f_352[iVar1] - 1);
		}
		if (iVar0 != -1)
		{
			Global_1237665->f_352[iVar0] = &Global_1237665->f_352[iVar0] + 1;
		}
		(*Global_1237665)[iParam0]->f_1 = iVar0;
	}
}

void func_127(int iParam0)
{
	if (func_40(iParam0, 1))
	{
		func_123(iParam0, 2);
	}
}

void func_128(int iParam0)
{
	if (func_279(iParam0, &bVar1))
	{
		bVar0 = true;
	}
	if (!func_280((*Global_1237665)[iParam0]->f_10))
	{
		func_168(&((*Global_1237665)[iParam0]->f_10));
	}
	else if (func_169((*Global_1237665)[iParam0]->f_10) > 45000 && !bVar0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_281((*Global_1248240)[iParam0]->f_559, 0) && !func_141(iParam0, 524288))
		{
			func_282((*Global_1237665)[iParam0]->f_13, (*Global_1248240)[iParam0]->f_584, func_40(iParam0, 67108864));
		}
		func_283(&((*Global_1237665)[iParam0]->f_10));
		func_123(iParam0, 3);
	}
	else if (bVar0)
	{
		func_283(&((*Global_1237665)[iParam0]->f_10));
		func_123(iParam0, 2);
	}
}

void func_129(int iParam0)
{
	if (!func_141(iParam0, 32) && func_284(iParam0, 32, 0))
	{
		func_285(iParam0);
		func_286(iParam0, 32);
	}
	else if (!func_141(iParam0, 16) && func_284(iParam0, 16, 0))
	{
		func_285(iParam0);
		func_286(iParam0, 16);
	}
	if (!func_141(iParam0, 4096) && func_284(iParam0, 4096, 0))
	{
		func_286(iParam0, 4096);
	}
	if (func_287(iParam0))
	{
		func_123(iParam0, 3);
	}
}

void func_130(int iParam0)
{
	if (func_288(iParam0))
	{
		func_289(iParam0);
	}
}

char* func_131()
{
	return "net_fetch_hideout_leader";
}

void func_132(int iParam0)
{
	Var0 = -1;
	*Global_1237665->f_356[iParam0] = { Var0 };
}

int func_133(var uParam0)
{
	return *uParam0;
}

struct<40> func_134(var uParam0, int iParam1)
{
	Var0 = { func_290(uParam0, iParam1) };
	func_291(uParam0, iParam1);
	return Var0;
}

bool func_135(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_256(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_256(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_137(var uParam0)
{
	return *uParam0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10;
		default:
			break;
	}
	return 1;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_141(int iParam0, int iParam1)
{
	return (func_61(iParam0) && func_62((*Global_1237665)[iParam0]->f_3, iParam1));
}

bool func_142()
{
	return (func_292() != 0 || func_293(1));
}

bool func_143()
{
	return func_294() != 0;
}

void func_144(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_40(iParam0, iParam1))
	{
		func_139(&((*Global_1248240)[iParam0]->f_556), iParam1);
	}
}

int func_145(int iParam0)
{
	if (func_143())
	{
		return 0;
	}
	if (!func_142())
	{
		return 0;
	}
	if (func_295())
	{
		func_296(2);
	}
	else
	{
		func_296(1);
	}
	func_297(iParam0);
	return 1;
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(iParam0, 1))
	{
		return;
	}
	bVar0 = func_299();
	func_300(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_301(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_301(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_302(iParam0);
	}
}

void func_147(int iParam0)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = int_to_playerindex(iVar2);
		if (network_is_player_active(iVar3) && (*(*Global_1238240)[iVar2])[iParam0]->f_22 == (*Global_1237665)[iParam0]->f_9)
		{
			uVar0 = (uVar0 || (*(*Global_1238240)[iVar2])[iParam0]->f_19);
			if (_0x901e0dc25080c8b9(iVar3) == _0x901e0dc25080c8b9(player_id()))
			{
				uVar1 = (uVar1 || (*(*Global_1238240)[iVar2])[iParam0]->f_19);
			}
		}
		iVar2++;
	}
	(*Global_1248240)[iParam0]->f_557 = uVar0;
	(*Global_1248240)[iParam0]->f_558 = uVar1;
}

void func_148(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_555 < 0 || (*Global_1248240)[iParam0]->f_555 >= 3)
	{
		return;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return;
	}
	if (func_304(func_303(Global_1237665[iParam0])) && (*Global_1248240)[iParam0]->f_555 < 2)
	{
		return;
	}
	iVar0 = func_305(iParam0);
	func_306(iParam0, iVar0);
	switch (iVar0)
	{
		case 2:
			iVar1 = (*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_21;
			if (iVar1 != -1)
			{
				iVar2 = (*Global_1248240)[iParam0]->f_597;
			}
			func_307(iParam0, iVar2);
			break;
		case 1:
			func_308(iParam0);
			break;
		case 17:
			break;
		case 3:
			if (_0x424b17a7dc5c90bc(player_id()))
			{
				if (func_109((*Global_1248240)[iParam0]->f_584) || func_108((*Global_1248240)[iParam0]->f_584))
				{
					func_50(iParam0);
				}
			}
			else
			{
				func_307(iParam0, iVar2);
			}
			break;
		default:
			if (func_109((*Global_1248240)[iParam0]->f_584) || func_108((*Global_1248240)[iParam0]->f_584))
			{
				func_50(iParam0);
			}
			break;
	}
}

void func_149(int iParam0)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	if (func_284(iParam0, 8388608, 0))
	{
		return;
	}
	if (func_141(iParam0, 131072))
	{
		func_309(iParam0, 134217728);
		return;
	}
	if ((func_284(iParam0, 67108864, 1) && !func_284(iParam0, 2, 1)) && !func_284(iParam0, 134217728, 1))
	{
		func_310(81846499, 0, 1);
		func_309(iParam0, 134217728);
	}
}

void func_150(int iParam0)
{
	if ((*Global_1237665)[iParam0]->f_2 == 3 || (*Global_1248240)[iParam0]->f_555 == 3)
	{
		return;
	}
	if ((*Global_1237665)[iParam0]->f_12 != 0 && (*Global_1237665)[iParam0]->f_12 != (*Global_1248240)[iParam0]->f_591)
	{
		(*Global_1248240)[iParam0]->f_591 = (*Global_1237665)[iParam0]->f_12;
	}
	if ((*Global_1248240)[iParam0]->f_591 == (*Global_1248240)[iParam0]->f_592)
	{
		return;
	}
	(*Global_1248240)[iParam0]->f_592 = (*Global_1248240)[iParam0]->f_591;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (!is_bit_set((*Global_1248240)[iParam0]->f_591, iVar0))
		{
		}
		else
		{
			iVar1 = iVar2;
			Var3 = { func_311(iParam0, iVar0) };
			if (add_relationship_group(&Var3, &iVar1))
			{
				func_312(iParam0, iVar0, iVar1);
				func_313(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

bool func_151(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	iVar0 = (*Global_1237665)[iParam0]->f_2;
	if (iVar0 == 3 || iVar0 == -1)
	{
		return true;
	}
	if ((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_22 != -1 && (*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_22 != (*Global_1237665)[iParam0]->f_9)
	{
		return true;
	}
	return false;
}

void func_152(int iParam0, int iParam1)
{
	if ((*Global_1248240)[iParam0]->f_555 != iParam1)
	{
		(*Global_1248240)[iParam0]->f_555 = iParam1;
	}
}

bool func_153(int iParam0, bool bParam1, bool bParam2)
{
	if (func_141(iParam0, 64))
	{
		return false;
	}
	return (bParam1 && !bParam2);
}

void func_154(int iParam0)
{
	if (!func_40(iParam0, 1))
	{
		iVar0 = Global_1237665[iParam0];
		iVar1 = func_163(iVar0);
		iVar2 = (*Global_1237665)[iParam0]->f_6;
		(*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_22 = (*Global_1237665)[iParam0]->f_9;
		(*Global_1248240)[iParam0]->f_588 = func_314(iVar1, iVar2);
		(*Global_1248240)[iParam0]->f_589 = func_223(iVar1, iVar2);
		(*Global_1248240)[iParam0]->f_559 = func_303(iVar0);
		(*Global_1248240)[iParam0]->f_584 = { func_315(iParam0) };
		(*Global_1248240)[iParam0]->f_598 = func_316(iVar0, iVar2);
		(*Global_1248240)[iParam0]->f_599 = func_317(iVar0, iVar2);
		(*Global_1248240)[iParam0]->f_595 = _0x901e0dc25080c8b9(player_id());
		iVar4 = func_318(iVar1, iVar2);
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			(*Global_1248240)[iParam0]->f_542[iVar3] = func_319(iVar1, iVar2, iVar3);
			(*Global_1248240)[iParam0]->f_542[iVar3]->f_1 = func_320(iVar1, iVar2, iVar3);
			(*Global_1248240)[iParam0]->f_542[iVar3]->f_2 = func_321(iVar1, iVar2, iVar3);
			iVar3++;
		}
		if ((*Global_1248240)[iParam0]->f_559 == 1884341302)
		{
			(*Global_1248240)[iParam0]->f_600 = { (*Global_1237665)[iParam0]->f_18 };
		}
		else
		{
			(*Global_1248240)[iParam0]->f_600 = { func_322(iVar0, iVar2) };
		}
		if ((*Global_1237665)[iParam0]->f_21 != 0)
		{
			func_323(&((*Global_1237665)[iParam0]->f_21), &((*Global_1248240)[iParam0]->f_643), 0);
		}
		iVar5 = func_324(iVar0, iVar2);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				*(*Global_1248240)[iParam0]->f_603[iVar6] = { func_325(iVar1, iVar2, iVar6) };
				iVar6++;
			}
		}
		if (func_326(iVar1, iVar2))
		{
			func_144(iParam0, 4096);
		}
		if (func_327(iVar1, iVar2))
		{
			func_144(iParam0, 8192);
		}
		if (func_328(iVar1, iVar2))
		{
			func_144(iParam0, 16384);
		}
		if (func_329(iVar1, iVar2) && player_id() != (*Global_1237665)[iParam0]->f_16)
		{
			func_144(iParam0, 32768);
		}
		if (func_330(iVar1, iVar2))
		{
			func_144(iParam0, 131072);
		}
		if (func_331(iVar1, iVar2))
		{
			func_144(iParam0, 262144);
		}
		if (func_332(iVar1, iVar2))
		{
			func_144(iParam0, 67108864);
		}
		func_144(iParam0, 1);
	}
	if ((*Global_1237665)[iParam0]->f_2 == 3)
	{
		func_152(iParam0, 3);
	}
	else if ((*Global_1237665)[iParam0]->f_2 > 0 && (*Global_1237665)[iParam0]->f_2 <= 1)
	{
		func_152(iParam0, 1);
	}
	else if ((*Global_1237665)[iParam0]->f_2 >= 2)
	{
		func_152(iParam0, 2);
	}
}

void func_155(int iParam0)
{
	if (!func_304((*Global_1248240)[iParam0]->f_559))
	{
		func_333(iParam0);
		func_334(iParam0);
	}
	if ((*Global_1237665)[iParam0]->f_2 != 1)
	{
		func_152(iParam0, (*Global_1237665)[iParam0]->f_2);
	}
}

void func_156(int iParam0)
{
	if (!func_40(iParam0, 131072) && (func_141(iParam0, 4096) || func_141(iParam0, 16)))
	{
		func_335((*Global_1248240)[iParam0]->f_584);
	}
	func_333(iParam0);
	func_334(iParam0);
	func_336(iParam0);
}

void func_157(int iParam0)
{
	if (func_337(iParam0))
	{
		func_34(iParam0);
	}
}

void func_158()
{
	func_338(1);
}

void func_159(int iParam0, int iParam1)
{
	switch ((*Global_1248240)[iParam0]->f_542[iParam1]->f_1)
	{
		case -476186606:
			if (!func_40(iParam0, 16))
			{
				return;
			}
		case 566765743:
			switch (&(*Global_1248240)[iParam0]->f_542[iParam1])
			{
				case -605765767:
					func_340(func_339((*Global_1248240)[iParam0]->f_542[iParam1]->f_2), 1, 50f);
					break;
				case 452572720:
					func_342(func_341((*Global_1248240)[iParam0]->f_542[iParam1]->f_2), 1, 50f);
					break;
				case 1495295997:
					func_344(func_343((*Global_1248240)[iParam0]->f_542[iParam1]->f_2));
					break;
			}
			break;
		case 141980177:
			if (func_141(iParam0, 1))
			{
				switch (&(*Global_1248240)[iParam0]->f_542[iParam1])
				{
					case -605765767:
						func_340(func_339((*Global_1248240)[iParam0]->f_542[iParam1]->f_2), 2, 50f);
						break;
					case 452572720:
						func_342(func_341((*Global_1248240)[iParam0]->f_542[iParam1]->f_2), 2, 50f);
						break;
					case 1495295997:
						break;
				}
			}
			break;
	}
}

void func_160()
{
	Global_1139381->f_5560.f_22 = get_frame_count();
}

int func_161()
{
	return Global_1108365->f_34.f_772;
}

void func_162(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!func_36(Param1))
		{
			return;
		}
		if (func_345(Param1, 1))
		{
			return;
		}
		if (func_346(Param1))
		{
			return;
		}
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return;
	}
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_347(iVar0);
	if (Global_1108365->f_34.f_353[iVar0] && Global_1108365->f_34.f_353[iVar0]->f_5 == -1)
	{
		return;
	}
	if (!func_108(Param1) || !bParam3)
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_5 = 5;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		}
		*Global_1108365->f_34.f_546[iVar0] = { func_171(iParam0) };
	}
	else
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		Global_1108365->f_34.f_353[iVar0]->f_5 = -1;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		*Global_1108365->f_34.f_546[iVar0] = { func_171(iParam0) };
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
	}
	if (Global_1108365->f_34[iVar0]->f_6)
	{
		func_348(iVar0);
	}
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

int func_164(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, uParam1))
	{
		func_351(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

void func_165(int iParam0)
{
	Global_1248240->f_8903 = (Global_1248240->f_8903 || iParam0);
}

Vector3 func_166(int iParam0)
{
	return (*Global_1248240)[iParam0]->f_600;
}

float func_167(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_168(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_169(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_170(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

struct<7> func_171(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_172(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		return func_352(iParam0);
	}
	return iParam0 <= func_174();
}

var func_173(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_174()
{
	if (func_17() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	return func_353(iParam0, iParam1, iParam2);
}

bool func_176(int iParam0, int iParam1)
{
	return (Global_1248240->f_8903.f_16[iParam0]->f_5 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1)
{
	Global_1248240->f_8903.f_16[iParam0]->f_5 = (Global_1248240->f_8903.f_16[iParam0]->f_5 || iParam1);
}

int func_178(int iParam0, int iParam1)
{
	if (func_86(iParam0, 255))
	{
		if (!_0x424b17a7dc5c90bc(player_id()))
		{
			return 1;
		}
		iVar1 = 1;
		iVar3 = func_354();
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar2 = func_355(iVar0);
			if (!network_is_player_active(iVar2))
			{
			}
			else if (!func_86(iParam1, iVar2))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		return iVar1;
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
{
	if (func_86(iParam0, 255))
	{
		iVar0 = func_356();
		if (!network_is_player_active(iVar0))
		{
			return true;
		}
		return !func_86(iParam1, iVar0);
	}
	return false;
}

void func_180(int iParam0, int iParam1)
{
	Global_1248240->f_8903.f_16[iParam0]->f_5 = (Global_1248240->f_8903.f_16[iParam0]->f_5 - (Global_1248240->f_8903.f_16[iParam0]->f_5 && iParam1));
}

bool func_181(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		if (func_176(iParam0, 32))
		{
			return true;
		}
		if (func_176(iParam0, 2))
		{
			if (func_176(iParam0, 128))
			{
				func_180(iParam0, 128);
			}
			else
			{
				func_177(iParam0, 8);
			}
		}
		else if (func_176(iParam0, 4))
		{
			if (!func_220(iParam0))
			{
				func_180(iParam0, 4);
				func_180(iParam0, 1);
				Global_1248240->f_8903.f_16[iParam0]->f_7 = 0;
				return false;
			}
			else if (func_176(iParam0, 128))
			{
				func_180(iParam0, 128);
			}
			else
			{
				func_177(iParam0, 8);
			}
		}
		return true;
	}
	return false;
}

int func_182(int iParam0)
{
	if (!_unlock_is_unlocked(1444561974))
	{
		func_357(741331401, 0, 255, 0, 0);
	}
	return _0xb096547d61868254(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_183(int iParam0)
{
	_0xe4abe20dce7c7cfe(&(Global_1248240->f_8903.f_118), &(Global_1248240->f_8903.f_119), &uVar0);
	_0x64f765d9a1f8f02c(&uVar0, &(Global_1248240->f_8903.f_118), &uVar1);
	if (_0x179a6f0ee2e79026(&uVar1))
	{
		if (_0x27d3a0e1fe090a43(&uVar1))
		{
			_0xffddf802279be128(&uVar1, &uVar0, &(Global_1248240->f_8903.f_119));
			func_177(iParam0, 8);
			return 1;
		}
	}
	else
	{
		func_177(iParam0, 8);
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	if (_unlock_is_unlocked(1444561974))
	{
		func_357(1265622586, 0, 255, 0, 0);
	}
	return _0xb462d69d406a2602(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_185(int iParam0)
{
	if (_unlock_is_unlocked(1444561974))
	{
		func_357(1265622586, 0, 255, 0, 0);
	}
	_0xde544b7ec0c187cc(&(Global_1248240->f_8903.f_119));
	func_177(iParam0, 8);
	return 1;
}

int func_186(int iParam0)
{
	return _0x2d874ba20e8e1f20(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_187(int iParam0)
{
	iVar0 = func_356();
	if (!network_is_player_active(iVar0))
	{
		func_177(iParam0, 8);
		return 0;
	}
	if (!func_86(8, iVar0))
	{
		return 0;
	}
	return _0x8521c2e235558278(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_188(int iParam0)
{
	return _0x12e981d53b07bf48(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_189(int iParam0, var uParam1)
{
	return _0x5b53ca0e2ac3ff45(&(Global_1248240->f_8903.f_16[iParam0]->f_1), uParam1, &(Global_1248240->f_8903.f_104));
}

int func_190(int iParam0)
{
	iVar0 = func_356();
	if (!network_is_player_active(iVar0))
	{
		func_177(iParam0, 8);
		return 0;
	}
	if (!func_86(32, iVar0))
	{
		return 0;
	}
	return _0x22d3a61ce053270c(&(Global_1248240->f_8903.f_16[iParam0]->f_1), &(Global_1248240->f_8903.f_104));
}

int func_191(int iParam0, var uParam1)
{
	return _0xa9c3b0f746375162(&(Global_1248240->f_8903.f_16[iParam0]->f_1), uParam1, &(Global_1248240->f_8903.f_104));
}

int func_192(int iParam0)
{
	_0xa59d1997ecd99f0a();
	func_177(iParam0, 8);
	return 1;
}

int func_193(int iParam0)
{
	_0x932db3c05a7465d1();
	func_177(iParam0, 8);
	return 1;
}

int func_194(int iParam0, var uParam1)
{
	return _0x28717806d3bdd0d0(&(Global_1248240->f_8903.f_16[iParam0]->f_1), uParam1);
}

int func_195(int iParam0)
{
	return _0x3f73aed12a5ef0ff(&(Global_1248240->f_8903.f_16[iParam0]->f_1));
}

int func_196(int iParam0)
{
	func_177(iParam0, 8);
	return _0xffa13742e43507e3(&(Global_1248240->f_8903.f_16[iParam0]->f_1), &(Global_1248240->f_8903.f_101));
}

int func_197(int iParam0)
{
	iVar0 = Global_1248240->f_8903.f_16[iParam0]->f_6;
	func_177(iParam0, 8);
	if (func_358(iVar0))
	{
		return _0x81847c2134039bdc(&((*Global_1237665)[iVar0]->f_14));
	}
	return 0;
}

bool func_198(int iParam0)
{
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1)
	{
		bVar0 = _0xfbd137bf0ec50fc9(&(Global_1248240->f_8903.f_16[iParam0]->f_1), &(Global_1248240->f_8903.f_104));
	}
	else
	{
		bVar0 = _0x727ab6f008bb9f29(&(Global_1248240->f_8903.f_16[iParam0]->f_1), &(Global_1248240->f_8903.f_104));
	}
	if (!bVar0)
	{
		func_175(607258092, 0, 0);
	}
	return bVar0;
}

int func_199(int iParam0)
{
	func_177(iParam0, 8);
	_0x6a9df0fcd0c87ff9();
	return 1;
}

bool func_200(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1237665->f_573), iParam0);
}

void func_201(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1237665->f_573), iParam0);
}

bool func_202(int iParam0)
{
	iVar2 = int_to_playerindex(iParam0);
	vVar3 = { func_216(iVar2) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (!func_200(iVar0) || func_86(4, iParam0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (_0x3f59fe6f37869576(iVar2, iVar1))
			{
				return false;
			}
			if (vdist(vVar3, func_216(iVar1)) <= Global_1901947->f_166.f_25)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_203(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	_0xd426e2e3288469d6(&(Global_1237665->f_573), iParam0);
}

void func_204(int iParam0)
{
	Global_1248240->f_8903 = (Global_1248240->f_8903 - (Global_1248240->f_8903 && iParam0));
}

bool func_205(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_212())
	{
		return false;
	}
	if (!network_is_player_active(*uParam0))
	{
		return false;
	}
	if ((get_game_timer() - uParam0->f_1) > 300000)
	{
		*uParam1 = 1;
		return false;
	}
	if (uParam0->f_2)
	{
		return false;
	}
	return true;
}

void func_206(int iParam0, int iParam1)
{
	Var0 = { func_359(1151156158, 4) };
	func_360(Var0);
	func_253(Var0, -1, 0, iParam0, iParam1);
}

bool func_207(int iParam0)
{
	return func_361(1, iParam0);
}

int func_208(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_362(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_209(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

struct<2> func_210()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_211(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	if (!bParam4)
	{
		if (func_26())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_36(Param2))
	{
		Var0 = { func_363() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_36(Var0)) && !func_256(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_364() };
	if (func_36(Var2) && (!func_36(Var2) || !func_256(Param0, Var2)))
	{
		return true;
	}
	return false;
}

bool func_212()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_213(int iParam0, int iParam1)
{
	if (func_78(2))
	{
		return 332948762;
	}
	if (func_92())
	{
		return -1033490187;
	}
	if (!func_86(2, 255))
	{
		return 1842743312;
	}
	if (func_365(iParam0))
	{
		return -1109051462;
	}
	if (Global_1248240->f_8903.f_14 >= 1)
	{
		return 769298471;
	}
	if (!network_is_player_active(iParam0))
	{
		return -267458266;
	}
	if (iParam0 == iParam1)
	{
		return -1688739386;
	}
	if (_0x3f59fe6f37869576(iParam1, iParam0))
	{
		return -1435119901;
	}
	if (vdist(func_216(iParam0), func_216(iParam1)) > (Global_1901947->f_166.f_23 * Global_1139381->f_4778))
	{
		return -619167961;
	}
	return -605318450;
}

int func_214(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_366(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_367(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					func_369(iParam1, iParam2, iVar1);
					func_368(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_368(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_368(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_368(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_370(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_368(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_215(int iParam0, int iParam1)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 1105014447;
	Var0.f_19 = 1105014447;
	Var0.f_23 = 300;
	Var0.f_31.f_8 = 1105014447;
	Var0.f_31.f_11 = 1105014447;
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_24 = 21;
	Var0.f_25 = iParam0;
	Var0.f_16 = _create_var_string(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var53 = { func_171(iParam0) };
	_0x4ef23e04a0c8ff51(&Var53, &sVar60);
	Var0.f_17 = _create_var_string(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	Var0.f_31.f_2 = _create_var_string(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var0.f_31.f_3 = _create_var_string(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	if (iParam1 != 0)
	{
		Var0.f_31.f_6 = iParam1;
		Var0.f_31.f_7 = iParam1;
		Var0.f_31.f_21 = 0;
		Var0.f_20 = iParam1;
		Var0.f_21 = iParam1;
	}
	else
	{
		Var0.f_31.f_6 = 1700592256;
		Var0.f_31.f_7 = 1434360011;
		Var0.f_20 = 1700592256;
		Var0.f_21 = 1434360011;
	}
	Var0.f_31.f_17 = "HUD_Toast_Soundset";
	Var0.f_31.f_18 = "Toast_On";
	func_371(Var0);
	_0x31010318ba9897ac(&(Global_1248240->f_8903.f_8), iParam0);
	Global_1248240->f_8903.f_9[Global_1248240->f_8903.f_14] = iParam0;
	Global_1248240->f_8903.f_9[Global_1248240->f_8903.f_14]->f_1 = get_game_timer();
	Global_1248240->f_8903.f_14++;
}

Vector3 func_216(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_217(int iParam0)
{
	func_372(iParam0, 0);
	(*Global_1238240)[network_player_id_to_int()]->f_300.f_1 = iParam0;
}

bool func_218()
{
	iVar1 = func_228(1);
	Global_1248240->f_8903.f_4 = func_373(iVar1, &bVar0);
	if (Global_1248240->f_8903.f_4 != 1519094052)
	{
		if (bVar0)
		{
			func_221(!func_86(4, 255));
		}
		return false;
	}
	if (!func_86(1, 255))
	{
		func_87(1);
	}
	if (!func_374())
	{
		Global_1248240->f_8903.f_4 = -84140073;
		return false;
	}
	if (!func_232(1427578635, iVar1, &(Global_1248240->f_8903.f_2), &(Global_1248240->f_8903.f_3), 1, Global_1901947->f_166.f_24))
	{
		func_221(1);
		return false;
	}
	Global_1248240->f_8903.f_4 = -888342148;
	Global_1248240->f_8903.f_100 = func_175(355060119, 0, 0);
	return true;
}

void func_219(int iParam0)
{
	Global_1248240->f_8903.f_1 = iParam0;
}

bool func_220(int iParam0)
{
	return Global_1248240->f_8903.f_16[iParam0]->f_7 != -1307093097;
}

void func_221(bool bParam0)
{
	if (Global_1257541->f_8852.f_2 != 0)
	{
		Global_1257541->f_8852.f_2 = 0;
	}
	if (bParam0)
	{
		if (func_86(1, 255))
		{
			func_88(1);
		}
	}
}

void func_222()
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 108;
	iVar20 = 0;
	while (iVar20 < 32)
	{
		if (!network_is_player_active(int_to_playerindex(iVar20)))
		{
		}
		else if (func_375(iVar20) == player_id())
		{
			_0x31010318ba9897ac(&uVar19, iVar20);
		}
		iVar20++;
	}
	if (_0x179a6f0ee2e79026(&uVar19))
	{
		func_376(Var0, uVar19, 0, 0);
	}
}

int func_223(int iParam0, var uParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, uParam1))
	{
		func_351(Var1, -1775150615, &uVar0, 0);
	}
	return uVar0;
}

int func_224(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_12())
	{
		return 2;
	}
	iVar1 = func_163(iParam0);
	iVar2 = func_378(iVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_379(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_380(iVar1, iParam1))
	{
		vVar4 = { func_381(iVar1, iParam1) };
		iVar7 = func_382(iVar1, iVar2);
		if (!func_383(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_384(iParam2) == -1)
	{
		return 6;
	}
	if (bParam9 >= 0f && !func_385(vParam3))
	{
		vVar8 = { func_322(iParam0, iVar2) };
		if (vdist(vParam3, vVar8) > bParam9)
		{
			return 12;
		}
	}
	if (func_386(iParam2))
	{
		iVar11 = func_387(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		if (!func_120(iVar11))
		{
			return 13;
		}
		if (func_388(iVar11))
		{
			return 14;
		}
	}
	if (func_389(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_211(func_210(), func_210(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_316(iParam0, iVar2);
			if (!_unlock_is_unlocked(iVar13))
			{
				return 8;
			}
			if (!_unlock_is_visible(iVar13))
			{
				return 7;
			}
			iVar14 = func_317(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!_unlock_is_unlocked(iVar14))
				{
					return 10;
				}
				if (!_unlock_is_visible(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_225(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_390((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_391(&Var0, uParam0, iParam1, iParam2, -1);
	func_392(&Var0);
}

var func_227()
{
	return Global_1939161->f_4;
}

int func_228(bool bParam0)
{
	Var0 = { func_171(player_id()) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	iVar9 = iVar7;
	if (bParam0)
	{
		if (iVar9 >= _0xf8bcc5eca33ac9c1())
		{
			return 948632731;
		}
		return 0;
	}
	if (iVar9 >= Global_1901947->f_166.f_4)
	{
		return 977420264;
	}
	else if (iVar9 >= Global_1901947->f_166.f_3)
	{
		return 1960865708;
	}
	else if (iVar9 >= Global_1901947->f_166.f_2)
	{
		return 209722732;
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = func_393(iParam0, uParam3);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (Global_1257541->f_8852 == 0)
	{
		func_116(0, 0, 0);
	}
	if (Global_1257541->f_8852.f_1 != 0 && Global_1296859->f_21 > Global_1257541->f_8852.f_1)
	{
		func_270(2, 1);
		Global_1257541->f_8852.f_1 = 0;
	}
	if ((((func_394(iParam0) && !func_395(2)) && iParam1 != iParam2) && iParam1 != -1) && iParam2 != -1)
	{
		return 1519094052;
	}
	if (Global_1296859->f_21 > Global_1257541->f_8852)
	{
		return 1519094052;
	}
	else
	{
		return 1918714710;
	}
	return -919889546;
}

void func_230()
{
	if (func_395(2))
	{
		return;
	}
	if (Global_1257541->f_8852 != 0 || Global_1257541->f_8852.f_6 != -1)
	{
		Global_1257541->f_8852 = 0;
		Global_1257541->f_8852.f_6 = -1;
	}
}

bool func_231(int iParam0)
{
	return get_random_float_in_range(0f, 1f) <= func_396(iParam0);
}

bool func_232(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, float fParam5)
{
	*uParam2 = func_397(iParam0);
	if (*uParam2 == -1)
	{
		return false;
	}
	iVar56 = func_398(func_163(*uParam2));
	vVar63 = { get_entity_coords(get_player_ped(player_id()), false, false) };
	fVar68 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_399(func_163(*uParam2), iVar58) == iParam1 && func_400(*uParam2, iVar58, -1) == -1) && func_224(*uParam2, func_316(*uParam2, iVar58), iParam0, vVar63, 1, 0, 0, -1082130432) == 0)
		{
			if (bParam4)
			{
				vVar60 = { func_401(func_163(*uParam2), iVar58, &bVar66) };
				if (bVar66)
				{
					if (func_385(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						fVar59 = vdist(vVar60, vVar63);
						if (fParam5 != -1f && fVar59 > fParam5)
						{
						}
						else
						{
							if (fVar59 < fVar68)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								fVar68 = fVar59;
								iVar0[0] = iVar58;
								bVar67 = true;
							}
							Jump @308; //curOff = 291
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam4)
							{
								if (bVar67)
								{
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[get_random_int_in_range(1, iVar57)];
								}
								else
								{
									return false;
								}
							}
							else
							{
								*iParam3 = &iVar0[get_random_int_in_range(0, iVar57)];
							}
						}
						else
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
}

void func_233()
{
	Var1 = { func_96(-617150375) };
	stat_id_get_int(&Var1, &uVar0);
	Global_1248240->f_9026.f_2 = uVar0;
}

bool func_234(int iParam0)
{
	if (!func_170(255))
	{
		return false;
	}
	if (func_207(255))
	{
		return false;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (func_209(65536, player_id()))
	{
		return false;
	}
	if (func_402(Global_35))
	{
		return false;
	}
	if (func_208(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		return false;
	}
	if (func_403())
	{
		return false;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1237665)[iVar0]->f_13 == Global_1296859->f_15)
		{
			return false;
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_404())
			{
				return false;
			}
			break;
		case 1:
			if (!func_405())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_235(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_236()
{
	iVar0 = Global_1901947->f_166.f_38;
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947->f_166.f_49)
	{
		iVar0 = (iVar0 + Global_1901947->f_166.f_45);
	}
	if (Global_1248240->f_9026.f_2 == 0)
	{
		iVar0 = (iVar0 - Global_1901947->f_166.f_37);
	}
	return iVar0;
}

int func_237()
{
	iVar0 = Global_1901947->f_166.f_39;
	if ((func_407(-545779394, func_406(1), 1784584921, 1, 0, 0) > Global_1901947->f_166.f_41 || func_407(1532695640, func_406(1), 1784584921, 1, 0, 0) > Global_1901947->f_166.f_41) || func_407(1847740267, func_406(1), 1784584921, 1, 0, 0) > Global_1901947->f_166.f_41)
	{
		iVar0 = (iVar0 + Global_1901947->f_166.f_45);
	}
	if (Global_1248240->f_9026.f_2 == 1)
	{
		iVar0 = (iVar0 - Global_1901947->f_166.f_37);
	}
	return iVar0;
}

int func_238(int iParam0)
{
	return &(Global_1248240->f_9026.f_3[iParam0]);
}

bool func_239()
{
	return get_random_float_in_range(0.01f, 1f) <= func_408();
}

bool func_240()
{
	return get_random_float_in_range(0.01f, 1f) <= func_409();
}

void func_241(int iParam0)
{
	if (func_410(iParam0))
	{
		func_411(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

Vector3 func_242(int iParam0)
{
	return *Global_1298378->f_6.f_1[iParam0];
}

int func_243(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	*uParam2 = func_397(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = func_398(func_163(*uParam2));
	bVar65 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_399(func_163(*uParam2), iVar58) == iParam1 && func_400(*uParam2, iVar58, -1) == -1) && func_224(*uParam2, func_316(*uParam2, iVar58), iParam0, vParam4, 1, 0, 0, bParam8) == 0)
		{
			if (bParam7)
			{
				vVar60 = { func_401(func_163(*uParam2), iVar58, &bVar63) };
				if (bVar63)
				{
					if (func_385(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						bVar59 = vdist(vVar60, vParam4);
						if (bParam8 != -1f && bVar59 > bParam8)
						{
						}
						else
						{
							if (bVar59 < bVar65)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								bVar65 = bVar59;
								iVar0[0] = iVar58;
								bVar64 = true;
							}
							Jump @287; //curOff = 270
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam7)
							{
								if (bVar64)
								{
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[get_random_int_in_range(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = &iVar0[get_random_int_in_range(0, iVar57)];
							}
						}
						else
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
}

bool func_244(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_412(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_413(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_414(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

int func_245(struct<2> Param0)
{
	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = func_415(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_246(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_247()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_250(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_251(struct<2> Param0)
{
	return func_416(Param0);
}

int func_252(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_417())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_418(&Global_0, 8);
	}
	func_418(&Global_0, 1);
	return 1;
}

void func_253(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_419(func_262(Param0));
	iVar1 = func_251(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_17() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_420(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_254(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_421(Param0);
	}
	else
	{
		func_422(Param0, iParam2);
	}
	func_423();
}

struct<2> func_255(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_256(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_257(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_424(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_425(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_258(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_426(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_427(cVar2);
			}
			else
			{
				func_428();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_259(bool bParam0)
{
	if (!bParam0 && func_429(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_260(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_261(struct<2> Param0)
{
	return func_431(func_430(Param0));
}

int func_262(var uParam0, var uParam1)
{
	return uParam0;
}

int func_263(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_256((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_264(int iParam0, var uParam1)
{
	func_432(uParam1, iParam0);
	if (Global_1196205->f_129 > 0)
	{
		if (Global_1196205->f_130 == iParam0)
		{
			func_433(0);
		}
	}
	func_434();
}

bool func_265(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	Var0 = { func_171(player_id()) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	if (iVar7 < Global_1901947->f_166.f_2)
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 <= 32)
	{
		iVar11 = int_to_playerindex(iVar9);
		if (network_is_player_active(iVar11) && _0x81fb74c83c2ed69f(iVar11))
		{
			if (iVar11 == player_id())
			{
				iVar10++;
			}
			else
			{
				Var0 = { func_171(iVar11) };
				_0x4ef23e04a0c8ff51(&Var0, &iVar7);
				if (iVar7 >= Global_1901947->f_166.f_2)
				{
					iVar10++;
				}
			}
		}
		iVar9++;
	}
	return iVar10 > 1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_14;
		case 1960865708:
			return Global_1901947->f_166.f_15;
		case 977420264:
			return Global_1901947->f_166.f_16;
		case 948632731:
			return Global_1901947->f_166.f_17;
		default:
			break;
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_10;
		case 1960865708:
			return Global_1901947->f_166.f_11;
		case 977420264:
			return Global_1901947->f_166.f_12;
		case 948632731:
			return Global_1901947->f_166.f_13;
		default:
			break;
	}
	return 0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_6;
		case 1960865708:
			return Global_1901947->f_166.f_7;
		case 977420264:
			return Global_1901947->f_166.f_8;
		case 948632731:
			return Global_1901947->f_166.f_9;
		default:
			break;
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_395(iParam0))
	{
		if (bParam1)
		{
		}
		func_139(&(Global_1257541->f_8862), iParam0);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (func_395(iParam0))
	{
		if (bParam1)
		{
		}
		func_140(&(Global_1257541->f_8862), iParam0);
	}
}

bool func_271(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return true;
		default:
			break;
	}
	return false;
}

void func_272(int iParam0)
{
	if (!func_417())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_435(iParam0) };
	if (!_stat_id_is_valid(&Var0))
	{
		return;
	}
	iVar2 = Global_1296859->f_21;
	if (!stat_id_set_int(&Var0, iVar2, true))
	{
	}
}

bool func_273(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1427578635:
		case 1532822440:
		case 1539023636:
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_275(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_276()
{
	return func_436(func_255(0));
}

bool func_277(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!is_player_playing(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (network_is_in_session())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!&Global_1051215->f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

int func_278(int iParam0)
{
	if ((*Global_1237665)[iParam0]->f_2 == -1 || (*Global_1237665)[iParam0]->f_2 == 3)
	{
		return -1;
	}
	iVar0 = func_303(Global_1237665[iParam0]);
	if (func_74(iVar0) && !func_141(iParam0, 131072))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, var uParam1)
{
	if (!func_304((*Global_1248240)[iParam0]->f_559))
	{
		return true;
	}
	if (!func_437(iParam0, uParam1))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	iVar25 = func_438(func_303(Global_1237665[iParam0]));
	func_439(iParam0, &Var0);
	iVar26 = func_440(&Var0);
	if (func_441(iVar26))
	{
		Var10 = { func_442(iVar26) };
		if (Var10 == iVar25)
		{
			(*Global_1237665)[iParam0]->f_4 = iVar26;
			return true;
		}
		else
		{
			*uParam1 = 1;
			return true;
		}
	}
	return false;
}

bool func_280(int iParam0)
{
	return iParam0 != 0;
}

bool func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_282(int iParam0, struct<2> Param1, bool bParam3)
{
	if (!Global_1901947->f_308.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_0x93a91a351a07360e(iParam0))
	{
		return 0;
	}
	if (!func_36(Param1))
	{
		return 0;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = player_id();
	Var0.f_11 = iParam0;
	Var0.f_4 = 12;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_443(iParam0);
	if (count_player_bits(&uVar31) <= 0)
	{
		return 0;
	}
	func_444(&Var0, uVar31);
	Var0.f_4 = 13;
	func_445(&Var0);
	return 1;
}

void func_283(var uParam0)
{
	*uParam0 = 0;
}

bool func_284(int iParam0, int iParam1, bool bParam2)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		return func_62((*Global_1248240)[iParam0]->f_558, iParam1);
	}
	return func_62((*Global_1248240)[iParam0]->f_557, iParam1);
}

void func_285(int iParam0)
{
	iVar0 = func_446(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_447(iVar0);
}

void func_286(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_141(iParam0, iParam1))
	{
		func_139(&((*Global_1237665)[iParam0]->f_3), iParam1);
	}
}

bool func_287(int iParam0)
{
	if ((!network_is_script_active("net_fetch", iParam0, false, 0) && func_448(iParam0, 1048576)) && func_448(iParam0, 512))
	{
		if (!func_280((*Global_1248240)[iParam0]->f_593))
		{
			func_168(&((*Global_1248240)[iParam0]->f_593));
		}
		else if (func_169((*Global_1248240)[iParam0]->f_593) > 4000)
		{
			return true;
		}
	}
	if (func_284(iParam0, 8388608, 0))
	{
		return true;
	}
	else if (((*Global_1248240)[iParam0]->f_559 != 1717788883 && (!func_74((*Global_1248240)[iParam0]->f_559) || func_141(iParam0, 131072))) && !func_449(iParam0))
	{
		return true;
	}
	else if (func_74((*Global_1248240)[iParam0]->f_559) && func_450(iParam0))
	{
		return true;
	}
	else if (func_141(iParam0, 32) && !func_284(iParam0, 32, 0))
	{
		func_286(iParam0, 33554432);
		return true;
	}
	return false;
}

bool func_288(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && (*(*Global_1238240)[iVar0])[iParam0]->f_22 != -1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_289(int iParam0)
{
	if (Global_1237665->f_574 == 0)
	{
	}
	else
	{
		Global_1237665->f_574 = (Global_1237665->f_574 - 1);
	}
	if (func_304(func_303(Global_1237665[iParam0])))
	{
		func_451(iParam0);
	}
	iVar0 = func_452(iParam0);
	if (iVar0 != -1)
	{
		func_453(iVar0);
	}
	(*Global_1237665)[iParam0]->f_2 = -1;
	func_126(iParam0);
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_9 = -1;
	Var1.f_15 = 255;
	Var1.f_16 = 255;
	Var1.f_17 = 255;
	Var1.f_21.f_1 = -1;
	*(*Global_1237665)[iParam0] = { Var1 };
}

struct<40> func_290(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_454(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *uParam0->f_3[iParam1] };
	*uParam0->f_3[iParam1] = { Var0 };
	return Var40;
}

void func_291(var uParam0, int iParam1)
{
	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3]->f_4 != -1)
				{
					func_290(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4] != -1)
			{
			}
			else
			{
				func_290(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_292()
{
	return Global_1301323->f_150;
}

bool func_293(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

int func_294()
{
	return Global_1301323->f_288;
}

bool func_295()
{
	iVar0 = func_455();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_296(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_297(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

bool func_298(int iParam0, int iParam1)
{
	return (Global_1198046->f_231.f_1066[iParam0]->f_6 && iParam1) != 0;
}

bool func_299()
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (!network_is_in_session() || func_18())
	{
		return false;
	}
	if (!is_thread_active(&Global_1210161, false))
	{
		return false;
	}
	if (!network_is_script_active("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&Global_1210161);
}

void func_300(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar4 = player_id();
	iVar5 = func_456(iParam0);
	if (!func_457(iParam0, &Var0))
	{
		if (iVar5 < 5)
		{
			func_458(iParam0, 5);
		}
	}
	switch (iVar5)
	{
		case 1:
			break;
		case 2:
			if (!func_298(iParam0, 2))
			{
				return;
			}
			if (!func_459(iParam0))
			{
				func_460(iParam0, 0);
				return;
			}
			bVar3 = func_109(Var0);
			bVar2 = func_108(Var0);
			if (!bVar3 && !bVar2)
			{
				if (!func_461(iParam0, iVar4, 2) && !func_461(iParam0, iVar4, 3))
				{
					if (func_462(iParam0, 3) || func_463(iParam0) == Global_1296859->f_15)
					{
						func_464(iParam0);
					}
				}
			}
			else if (!func_462(iParam0, 3) && func_463(iParam0) != Global_1296859->f_15)
			{
				func_460(iParam0, 0);
			}
			break;
		case 4:
			if (!func_298(iParam0, 2))
			{
				if (func_298(iParam0, 2048))
				{
					func_465(iParam0);
				}
				return;
			}
			if (func_109(Var0))
			{
				if (func_462(iParam0, 4))
				{
					func_466(iParam0, 0, 1, 1);
					func_467(iParam0, 0, 0);
				}
				else
				{
					func_466(iParam0, 0, 1, 1);
					func_468(iParam0, 0);
				}
			}
			else if (func_108(Var0))
			{
				func_468(iParam0, 0);
			}
			else
			{
				func_469(iParam0, 6);
			}
			if (func_470(iParam0))
			{
				func_465(iParam0);
			}
			break;
		case 5:
		case 6:
			if ((!func_36(Var0) || func_461(iParam0, iVar4, 0)) || func_471(iParam0, iVar4))
			{
				func_472(iParam0);
			}
			break;
	}
}

void func_301(int iParam0, int iParam1, bool bParam2)
{
	func_473(iParam0, iParam1);
	if (!bParam2)
	{
		func_474(iParam0, iParam1);
	}
	else
	{
		func_475(iParam0, iParam1);
		func_476(iParam0, iParam1);
	}
}

void func_302(int iParam0)
{
	iVar0 = func_456(iParam0);
	if (func_477(iParam0, iVar0))
	{
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_36(func_478(iParam0)))
			{
				return;
			}
			if (func_298(iParam0, 32))
			{
				Global_1198046->f_231.f_1066[iParam0]->f_8[0]->f_1 = iParam0;
			}
			if (Global_1198046->f_231.f_1066[iParam0]->f_5 != 255)
			{
				func_479(iParam0, Global_1198046->f_231.f_1066[iParam0]->f_5);
				func_458(iParam0, 2);
			}
			else
			{
				func_458(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_480(iParam0) != 255)
			{
				func_458(iParam0, 2);
				return;
			}
			if (func_481(iParam0, 3))
			{
				func_458(iParam0, 2);
				return;
			}
			if (func_482(iParam0))
			{
				func_458(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_480(iParam0) == 255 && !func_481(iParam0, 3))
			{
				func_458(iParam0, 4);
				return;
			}
			if (func_483(iParam0))
			{
				func_458(iParam0, 5);
				return;
			}
			if (func_481(iParam0, 4) || func_481(iParam0, 5))
			{
				func_458(iParam0, 3);
				return;
			}
			func_484(iParam0);
			break;
		case 3:
			if (func_485(iParam0))
			{
				return;
			}
			func_458(iParam0, 4);
			break;
		case 4:
			if (func_486(iParam0, 7))
			{
				func_458(iParam0, 5);
			}
			else
			{
				return;
			}
			func_458(iParam0, 5);
			break;
		case 5:
			if (func_486(iParam0, 7))
			{
				if (func_487(iParam0) > 1)
				{
					func_488(iParam0, 1);
				}
				func_458(iParam0, 6);
			}
			else
			{
				return;
			}
			break;
		case 6:
			break;
	}
}

int func_303(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_304(int iParam0)
{
	return false;
}

int func_305(int iParam0)
{
	iVar0 = func_489(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (func_74((*Global_1248240)[iParam0]->f_559) && !func_141(iParam0, 131072))
	{
		iVar0 = func_490(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	else if (!_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), network_player_id_to_int()))
	{
		iVar0 = func_491(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return 1;
}

void func_306(int iParam0, int iParam1)
{
	if (func_492(iParam0, 255) != iParam1)
	{
		(*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_20 = iParam1;
	}
}

void func_307(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (iParam1 != 0 && !func_40(iParam0, 128))
	{
		func_244(iParam1, 0);
		func_144(iParam0, 128);
	}
	if (func_64(iParam0, 32, 255))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	func_493(iParam0, &uVar0);
	func_494(iParam0);
	bVar1 = (*Global_1248240)[iParam0]->f_559 != 1717788883;
	Var2 = { (*Global_1248240)[iParam0]->f_584 };
	if (bVar1)
	{
		if (!func_109(Var2) && !func_108(Var2))
		{
			func_308(iParam0);
		}
	}
	func_309(iParam0, 32);
	func_144(iParam0, 16);
	iVar4 = func_110((*Global_1248240)[iParam0]->f_559);
	if (iVar4 != 0)
	{
		func_495(iVar4);
	}
	if (func_386((*Global_1248240)[iParam0]->f_559) && _0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()))
	{
		func_496(iParam0);
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1918154385 && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()))
	{
		func_497();
	}
	if ((((*Global_1248240)[iParam0]->f_559 == 78055447 || (*Global_1248240)[iParam0]->f_559 == 974227447) || (*Global_1248240)[iParam0]->f_559 == -232478158) || (*Global_1248240)[iParam0]->f_559 == 1532822440)
	{
		func_66(2, 1);
	}
	if (bVar1)
	{
		if (func_108(Var2))
		{
			return;
		}
		bVar5 = !func_498(func_163(Global_1237665[iParam0]), (*Global_1237665)[iParam0]->f_6);
		func_499(Var2, 1, bVar5, 0);
		func_500((*Global_1248240)[iParam0]->f_584, 1, 0, -1);
		if ((*Global_1248240)[iParam0]->f_559 == -468635158)
		{
			func_501(4);
		}
	}
}

void func_308(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1717788883)
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { (*Global_1248240)[iParam0]->f_584 };
	if (func_108(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	func_502(Var0);
	if (!func_281((*Global_1248240)[iParam0]->f_559, 0))
	{
		iVar2 = func_503(Var0);
		if (iVar2 != -1)
		{
			func_504(iVar2);
		}
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_64(iParam0, iParam1, 255))
	{
		func_139(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

void func_310(int iParam0, bool bParam1, bool bParam2)
{
	if (func_17() != 0)
	{
		return;
	}
	if (func_505())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_414(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_414(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_506(&Var0, uVar7);
}

struct<8> func_311(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			StringCopy(&cVar0, "fetch_friend", 64);
			break;
		case 2:
			StringCopy(&cVar0, "fetch_fake_friend", 64);
			break;
		case 3:
			StringCopy(&cVar0, "fetch_vip", 64);
			break;
		case 4:
			StringCopy(&cVar0, "fetch_friend_primary", 64);
			break;
		case 5:
			StringCopy(&cVar0, "fetch_friend_secondary", 64);
			break;
		case 6:
			StringCopy(&cVar0, "fetch_friend_secondary_and_inactive", 64);
			break;
		case 20:
			StringCopy(&cVar0, "fetch_friend_to_all", 64);
			break;
		case 13:
			StringCopy(&cVar0, "fetch_prisoner_vip_friendly", 64);
			break;
		case 14:
			StringCopy(&cVar0, "fetch_prisoner_vip_enemy", 64);
			break;
		case 7:
			StringCopy(&cVar0, "fetch_law_friendly_to_primary", 64);
			break;
		case 8:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary", 64);
			break;
		case 9:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary_none_to_inactive", 64);
			break;
		case 10:
			StringCopy(&cVar0, "fetch_law_hate_secondary_pvp_active", 64);
			break;
		case 11:
			StringCopy(&cVar0, "fetch_enemy_team_1", 64);
			break;
		case 12:
			StringCopy(&cVar0, "fetch_enemy_team_2", 64);
			break;
		case 15:
			StringCopy(&cVar0, "fetch_enemy_vip_killer", 64);
			break;
		case 16:
			StringCopy(&cVar0, "fetch_enemy_to_active_players", 64);
			break;
		case 17:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_likes_inactive_aggro", 64);
			break;
		case 18:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active", 64);
			break;
		case 19:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active_dislike_inactive", 64);
			break;
		case 21:
			StringCopy(&cVar0, "fetch_objective_draft_horse", 64);
			break;
		case 22:
			StringCopy(&cVar0, "fetch_hostile_animal", 64);
			break;
	}
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	return cVar0;
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (!func_507(iParam1))
	{
		return;
	}
	(*Global_1248240)[iParam0]->f_560[iParam1] = iParam2;
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			break;
		case 2:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			break;
		case 3:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			break;
		case 4:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 5:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 3);
			break;
		case 6:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 3);
			break;
		case 7:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			break;
		case 8:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 9:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 10:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			break;
		case 11:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			break;
		case 12:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 11);
			break;
		case 13:
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			break;
		case 14:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_514(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			break;
		case 15:
			func_508(0, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 3);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 0, iParam2, 7);
			func_513(iParam0, 0, iParam2, 8);
			func_513(iParam0, 0, iParam2, 9);
			func_513(iParam0, 0, iParam2, 10);
			break;
		case 16:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			break;
		case 17:
			func_508(6, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 6, iParam2, 1);
			func_513(iParam0, 6, iParam2, 2);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			break;
		case 18:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			break;
		case 19:
			func_508(0, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			func_513(iParam0, 6, iParam2, 15);
			break;
		case 20:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(2, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 13);
			func_513(iParam0, 2, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			func_513(iParam0, 2, iParam2, 17);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 2, iParam2, 10);
			break;
		case 21:
			func_508(2, iParam2);
			func_509(2, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(2, iParam2);
			func_513(iParam0, 2, iParam2, 11);
			func_513(iParam0, 2, iParam2, 12);
			func_513(iParam0, 2, iParam2, 1);
			func_513(iParam0, 2, iParam2, 2);
			func_513(iParam0, 2, iParam2, 3);
			func_513(iParam0, 2, iParam2, 4);
			func_513(iParam0, 2, iParam2, 5);
			func_513(iParam0, 2, iParam2, 6);
			func_513(iParam0, 2, iParam2, 13);
			func_513(iParam0, 2, iParam2, 14);
			func_513(iParam0, 2, iParam2, 16);
			func_513(iParam0, 2, iParam2, 17);
			func_513(iParam0, 2, iParam2, 7);
			func_513(iParam0, 2, iParam2, 8);
			func_513(iParam0, 2, iParam2, 9);
			func_513(iParam0, 2, iParam2, 10);
			break;
		case 22:
			func_508(6, iParam2);
			func_509(0, iParam2);
			func_510(0, iParam2);
			func_511(0, iParam2);
			func_512(0, iParam2);
			func_513(iParam0, 6, iParam2, 11);
			func_513(iParam0, 6, iParam2, 12);
			func_513(iParam0, 0, iParam2, 1);
			func_513(iParam0, 0, iParam2, 2);
			func_513(iParam0, 6, iParam2, 3);
			func_513(iParam0, 6, iParam2, 4);
			func_513(iParam0, 6, iParam2, 5);
			func_513(iParam0, 6, iParam2, 6);
			func_513(iParam0, 6, iParam2, 13);
			func_513(iParam0, 6, iParam2, 14);
			func_513(iParam0, 6, iParam2, 16);
			func_513(iParam0, 6, iParam2, 17);
			func_513(iParam0, 6, iParam2, 7);
			func_513(iParam0, 6, iParam2, 8);
			func_513(iParam0, 6, iParam2, 9);
			func_513(iParam0, 6, iParam2, 10);
			break;
	}
}

var func_314(int iParam0, var uParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, uParam1))
	{
		func_351(Var1, -1303506050, &uVar0, 1);
	}
	return uVar0;
}

struct<2> func_315(int iParam0)
{
	iVar0 = Global_1237665[iParam0];
	uVar1 = (*Global_1237665)[iParam0]->f_6;
	return func_515(iVar0, uVar1);
}

int func_316(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

int func_317(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_1;
}

int func_318(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&vVar1, iParam0) && func_377(&vVar1, iParam1))
	{
		vVar1.f_2 = -1052194144;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

var func_319(int iParam0, int iParam1, int iParam2)
{
	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, 1609846533, &uVar0, 0);
	}
	return uVar0;
}

var func_320(int iParam0, int iParam1, int iParam2)
{
	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, -1702365423, &uVar0, 0);
	}
	return uVar0;
}

var func_321(int iParam0, int iParam1, int iParam2)
{
	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_517(&Var1, iParam2))
	{
		func_351(Var1, -1303506050, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_322(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

int func_323(var uParam0, var uParam1, int iParam2)
{
	return func_518(uParam1, *uParam0, uParam0->f_1, iParam2, 1);
}

int func_324(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_516(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_6;
}

Vector3 func_325(int iParam0, int iParam1, int iParam2)
{
	if ((func_349(&Var3, iParam0) && func_377(&Var3, iParam1)) && func_519(&Var3, iParam2))
	{
		func_520(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

bool func_326(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 1172354913, &uVar0, 0);
	}
	return uVar0;
}

bool func_327(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -542588664, &uVar0, 0);
	}
	return uVar0;
}

bool func_328(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -666510715, &uVar0, 0);
	}
	return uVar0;
}

bool func_329(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -1530051112, &uVar0, 0);
	}
	return uVar0;
}

bool func_330(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, -1755519071, &uVar0, 0);
	}
	return uVar0;
}

bool func_331(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 311522483, &uVar0, 0);
	}
	return uVar0;
}

bool func_332(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		func_521(Var1, 521215940, &iVar0, 0);
	}
	return iVar0;
}

void func_333(int iParam0)
{
	fVar6 = 425f;
	bVar7 = func_141(iParam0, 16);
	if (!bVar7)
	{
		fVar6 = Global_1901947->f_236.f_62;
	}
	if (func_64(iParam0, 2, 255))
	{
		fVar6 = (fVar6 + 50f);
	}
	switch ((*Global_1248240)[iParam0]->f_559)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			if (!_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()) && !func_64(iParam0, 32, 255))
			{
				if (!bVar7 || func_40(iParam0, 4096))
				{
					iVar1 = 1;
				}
				bVar0 = true;
				iVar2 = 1;
			}
			break;
		case 1884341302:
			if (!_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()) && !func_64(iParam0, 32, 255))
			{
				bVar0 = true;
				iVar5 = 1;
			}
			break;
		case 1539023636:
			bVar0 = true;
			iVar2 = 1;
			if (!func_141(iParam0, 131072))
			{
				iVar1 = 1;
				bVar4 = true;
			}
			break;
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
			bVar0 = true;
			iVar1 = 1;
			bVar4 = true;
			fVar6 = (Global_1901947->f_236.f_62 + 50f);
			break;
		case 1427578635:
			if ((!_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()) && !func_64(iParam0, 32, 255)) && !func_86(4, 255))
			{
				bVar0 = true;
				iVar3 = 1;
			}
			break;
	}
	if (bVar0)
	{
		(*Global_1248240)[iParam0]->f_586 = fVar6;
		func_144(iParam0, 524288);
		if (func_522(iParam0, 255, 0, 0) && func_40(iParam0, 512))
		{
			bVar8 = true;
		}
		if (!bVar8 && !func_523(iParam0, fVar6, iVar1, iVar2, iVar3, bVar4, iVar5))
		{
			func_309(iParam0, 1024);
		}
		else
		{
			func_112(iParam0, 1024);
		}
		func_309(iParam0, 512);
	}
	else
	{
		func_106(iParam0, 524288);
		func_112(iParam0, 1024);
		func_309(iParam0, 512);
	}
}

void func_334(int iParam0)
{
	iVar0 = func_524(iParam0);
	if (iVar0 == 0)
	{
		func_525(iParam0);
	}
	else
	{
		iVar1 = (*Global_1248240)[iParam0]->f_590;
		if (iVar1 == -1)
		{
			iVar1 = func_526(iVar0);
		}
		if (iVar1 != -1)
		{
			if ((*Global_1248240)[iParam0]->f_590 != iVar1)
			{
				if ((*Global_1248240)[iParam0]->f_590 == -1)
				{
					func_112(iParam0, 2);
				}
				(*Global_1248240)[iParam0]->f_590 = iVar1;
			}
			if (&Global_1248240->f_8880[iVar1] != -1 && &Global_1248240->f_8880[iVar1] != iParam0)
			{
				func_527(iVar1, iParam0);
				return;
			}
			if (Global_1248240->f_8880[iVar1]->f_1 != -1 && Global_1248240->f_8880[iVar1]->f_1 != iParam0)
			{
				func_525(iParam0);
				return;
			}
			func_528(iVar1, iParam0, iParam0);
			func_529(iVar1, iParam0, iVar0);
			if (func_530(iParam0, iVar1, &bVar2))
			{
				if (bVar2)
				{
					func_309(iParam0, 1048576);
				}
				func_309(iParam0, 2);
			}
		}
		else
		{
			func_525(iParam0);
		}
	}
}

void func_335(struct<2> Param0)
{
	iVar1 = player_id();
	if (!func_256(Param0, func_363()))
	{
		return;
	}
	iVar0 = func_531(iVar1);
	if (!func_532(iVar0))
	{
		return;
	}
	func_533(iVar0);
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (func_534(1) && func_535(iVar0, 1))
		{
			func_536();
		}
		if (func_534(0) && _0x51f33dbc1a41cbfd() & 9 != 0)
		{
			func_537();
		}
	}
}

void func_336(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != -1777724963)
	{
		return;
	}
	if (!func_64(iParam0, 4096, 255) && !func_141(iParam0, 4096))
	{
		return;
	}
	if (!func_64(iParam0, 32, 255))
	{
		return;
	}
	if (func_64(iParam0, 64, 255))
	{
		return;
	}
	func_538(iParam0);
}

bool func_337(int iParam0)
{
	if (!func_33(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_338(int iParam0)
{
	func_539(&(Global_1132288->f_2040), iParam0);
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 443958153:
			return 6;
		case 1035357148:
			return 7;
		case -990591911:
			return 8;
		case 1434435999:
			return 19;
		case 914613127:
			return 13;
		case 277114628:
			return 14;
		case -441298053:
			return 15;
		case -2008988392:
			return 12;
		case 1866591384:
			return 122;
		case -810797676:
			return 123;
		case 1591504033:
			return 5;
		case -1481022983:
			return 9;
		case -200160067:
			return 10;
		case -906556724:
			return 11;
		case 882729775:
			return 16;
		case 1957450109:
			return 17;
		case 1826386989:
			return 18;
		case -809040070:
			return 132;
		case 213861089:
			return 23;
		case 187124199:
			return 24;
		case -1639286351:
			return 25;
		case 1244472740:
			return 22;
		case -184950877:
			return 26;
		case 187784199:
			return 42;
		case 156869848:
			return 43;
		case 959980967:
			return 44;
		case -922179383:
			return 45;
		case 327042733:
			return 46;
		case 877339314:
			return 48;
		case -1159824322:
			return 49;
		case -605457855:
			return 50;
		case -967272484:
			return 51;
		case 253446434:
			return 52;
		case -24930371:
			return 53;
		case -491616406:
			return 63;
		case 1428271505:
			return 56;
		case 509242725:
			return 55;
		case -2132681852:
			return 60;
		case 1479356600:
			return 124;
		case -1608228131:
			return 125;
		case 1700741106:
			return 54;
		case -404449802:
			return 57;
		case -1243693278:
			return 59;
		case 106026254:
			return 58;
		case -1340467914:
			return 61;
		case -2128099513:
			return 62;
		case -768596287:
			return 27;
		case -1789795772:
			return 28;
		case 986912071:
			return 33;
		case 312948291:
			return 31;
		case 770563571:
			return 34;
		case 288839560:
			return 35;
		case 399352507:
			return 30;
		case -1241147617:
			return 39;
		case 1576805996:
			return 126;
		case -1427623397:
			return 29;
		case 305555540:
			return 36;
		case -697751457:
			return 37;
		case -994915577:
			return 38;
		case 2080716288:
			return 68;
		case 922959422:
			return 69;
		case 1948709075:
			return 70;
		case 599204508:
			return 71;
		case -362796541:
			return 74;
		case -176953214:
			return 127;
		case -1992095599:
			return 75;
		case -553046416:
			return 72;
		case 1410537143:
			return 73;
		case 646741747:
			return 83;
		case -773037432:
			return 84;
		case 1444751354:
			return 85;
		case 709943351:
			return 78;
		case 731746260:
			return 87;
		case 405856312:
			return 86;
		case 1124822890:
			return 81;
		case 1618521465:
			return 91;
		case -1749578899:
			return 82;
		case -442258411:
			return 90;
		case 1665083003:
			return 120;
		case 810431028:
			return 121;
		case 1581089825:
			return 88;
		case -406930559:
			return 79;
		case -1850308061:
			return 80;
		case 1161446575:
			return 77;
		case 787686374:
			return 89;
		case 1523596125:
			return 41;
		case -1985767496:
			return 129;
		case 1117878254:
			return 0;
		case 622553269:
			return 1;
		case -1934358691:
			return 2;
		case -372049939:
			return 98;
		case 226213668:
			return 97;
		case 1437804895:
			return 93;
		case -1254552445:
			return 96;
		case 1526480524:
			return 94;
		case 470861506:
			return 95;
		case 644508980:
			return 128;
		case 94750187:
			return 101;
		case 545745902:
			return 99;
		case 1875117241:
			return 100;
		case -1861588330:
			return 119;
		case -1079912632:
			return 133;
		case -1624899219:
			return 152;
		case 1712034773:
			return 176;
		case 1084233913:
			return 177;
		case -1628307596:
			return 178;
		case 1244193358:
			return 179;
		case 1109728466:
			return 153;
		case 191185611:
			return 147;
		case 1689047337:
			return 135;
		case 631237697:
			return 136;
		case 1309294228:
			return 137;
		case -1862366064:
			return 138;
		case -708893514:
			return 139;
		case -61253253:
			return 140;
		case -1674694281:
			return 141;
		case 14391281:
			return 142;
		case -869603674:
			return 143;
		case 2081857521:
			return 144;
		case 526646992:
			return 145;
		case 1672297313:
			return 146;
		case 151142181:
			return 154;
		case -765151559:
			return 134;
		case 1025033373:
			return 20;
		case -268420964:
			return 155;
		case -283845926:
			return 156;
		case 76731659:
			return 157;
		case 2141489518:
			return 158;
		case 1529797091:
			return 67;
		case 1120323763:
			return 159;
		case -1951530479:
			return 160;
		case 2034257465:
			return 161;
		case 278587369:
			return 162;
		case 1388932648:
			return 65;
		case 1467401843:
			return 164;
		case -1049737591:
			return 165;
		case 1175719437:
			return 166;
		case 2115547696:
			return 167;
		case 878376253:
			return 64;
		case -508879537:
			return 168;
		case -654369397:
			return 169;
		case 1573058547:
			return 170;
		case 1753151614:
			return 171;
		case -2113647360:
			return 172;
		case 1337275619:
			return 173;
		case -237650722:
			return 174;
		case 283754781:
			return 175;
		case -2076086367:
			return 66;
		case -487054121:
			return 163;
		case -1769964380:
			return 108;
		case -1464928880:
			return 110;
		case -812483303:
			return 109;
		case 1315212395:
			return 111;
		case 450843655:
			return 112;
		case -1477315484:
			return 113;
		case -1132316597:
			return 114;
		case -1495157302:
			return 102;
		case -2140031237:
			return 105;
		case -375350:
			return 106;
		case -1829807698:
			return 103;
		case 186603357:
			return 104;
		case -1575817877:
			return 107;
		case 1087483310:
			return 116;
		case -552506176:
			return 130;
		case 441769767:
			return 117;
		case 1318049946:
			return 118;
		case 548657065:
			return 3;
		case 243086140:
			return 4;
		case -305029900:
			return 40;
		case 1008537949:
			return 76;
		case 1239556700:
			return 148;
		case 1968750441:
			return 149;
		case 317019665:
			return 150;
		case 1421441577:
			return 151;
		default:
			break;
	}
	return -1;
}

void func_340(int iParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Global_1051439->f_4682[iVar0] == iParam0 || Global_1051439->f_4682[iVar0]->f_3 < (get_frame_count() - 1))
		{
			Global_1051439->f_4682[iVar0] = iParam0;
			Global_1051439->f_4682[iVar0]->f_1 = -1;
			Global_1051439->f_4682[iVar0]->f_2 = iParam1;
			Global_1051439->f_4682[iVar0]->f_4 = (fParam2 * fParam2);
			Global_1051439->f_4682[iVar0]->f_3 = get_frame_count();
			return;
		}
		iVar0++;
	}
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case -1391860027:
			return 0;
		case -2049683567:
			return 3;
		case -1639750081:
			return 4;
		case -395929392:
			return 33;
		case -543306319:
			return 6;
		case 93160283:
			return 7;
		case -1838611891:
			return 8;
		case 1619762084:
			return 1;
		case -2104053099:
			return 2;
		case -1431073983:
			return 9;
		case 887432345:
			return 10;
		case -238320361:
			return 11;
		case -1433937760:
			return 22;
		case -681691620:
			return 23;
		case -706234936:
			return 24;
		case -282099500:
			return 25;
		case 1450105278:
			return 26;
		case 2128397741:
			return 12;
		case -924263120:
			return 14;
		case 1915478031:
			return 30;
		case -1816941102:
			return 31;
		case 1350021532:
			return 32;
		case 379756162:
			return 5;
		case 1442571063:
			return 15;
		case -997221403:
			return 16;
		case 1489861748:
			return 17;
		case -2132712788:
			return 27;
		case -995716959:
			return 28;
		case 1414815075:
			return 29;
		case 1427539511:
			return 34;
		case -967055532:
			return 19;
		case 662159626:
			return 20;
		case 1743191502:
			return 21;
		case -830712656:
			return 18;
		case 1570650502:
			return 35;
		case -1980461700:
			return 36;
		case -486915945:
			return 38;
		case -1023568458:
			return 37;
		case 374439621:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_342(int iParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1051439->f_4682[iVar0]->f_1 == iParam0 || Global_1051439->f_4682[iVar0]->f_3 < (get_frame_count() - 1))
		{
			Global_1051439->f_4682[iVar0]->f_1 = iParam0;
			Global_1051439->f_4682[iVar0] = -1;
			Global_1051439->f_4682[iVar0]->f_2 = iParam1;
			Global_1051439->f_4682[iVar0]->f_4 = (fParam2 * fParam2);
			Global_1051439->f_4682[iVar0]->f_3 = get_frame_count();
			return;
		}
		iVar0++;
	}
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case -433978575:
			return 0;
		case 810683509:
			return 1;
		case -1293620534:
			return 2;
		case -2117035556:
			return 3;
		case -1966120787:
			return 4;
		default:
			break;
	}
	return 4;
}

void func_344(int iParam0)
{
	Global_1138962->f_1[iParam0]->f_26 = get_frame_count();
}

bool func_345(struct<2> Param0, bool bParam2)
{
	iVar0 = func_245(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_346(struct<2> Param0)
{
	return func_245(Param0) == 7;
}

void func_347(int iParam0)
{
	if (!_network_is_player_index_valid(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		return;
	}
	if (!&Global_1108365->f_34.f_353[iParam0])
	{
		return;
	}
	if (!network_is_player_active(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		func_540(iParam0);
		return;
	}
	if (Global_1108365->f_34.f_353[iParam0]->f_5 != -1)
	{
		if ((Global_1296859->f_21 - Global_1108365->f_34.f_353[iParam0]->f_4) > Global_1108365->f_34.f_353[iParam0]->f_5)
		{
			func_540(iParam0);
		}
		return;
	}
	if (func_108(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		return;
	}
	if (!func_36(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_540(iParam0);
		return;
	}
	if (!func_108(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_540(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != Global_1108365->f_34.f_353[iParam0]->f_1)
	{
		func_540(iParam0);
		return;
	}
}

void func_348(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		func_347(iParam0);
	}
	if (!Global_1108365->f_34[iParam0]->f_6)
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_541(iParam0);
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		func_541(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != iVar0)
	{
		func_541(iParam0);
		return;
	}
	if (_0x81fb74c83c2ed69f(iVar0))
	{
		func_542(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		func_542(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[iParam0]->f_66)
	{
		func_542(iVar0, 0);
		return;
	}
	if (func_543(iParam0))
	{
		func_542(iVar0, 0);
		return;
	}
	if (get_time_difference(Global_1108365->f_34[iParam0]->f_7, get_network_time_accurate()) >= 600000)
	{
		func_542(iVar0, 0);
		return;
	}
}

bool func_349(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_350(var uParam0, int iParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_351(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_352(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_354()
{
	return Global_1102219->f_3673;
}

int func_355(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

var func_356()
{
	return Global_1102219->f_3674;
}

int func_357(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_544(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_358(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

struct<2> func_359(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636), func_56(iParam1));
			break;
		case 3:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_602), func_56(iParam1));
			break;
		case 4:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_2104), func_56(iParam1));
			break;
		case 5:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_12606), func_56(iParam1));
			break;
		case 6:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_12908), func_56(iParam1));
			break;
		case 7:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_15910), func_56(iParam1));
			break;
		case 8:
			Var0.f_1 = func_545(iParam0, &(Global_1071686->f_636.f_16512), func_56(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_210();
	}
	return Var0;
}

void func_360(struct<2> Param0)
{
	if (func_251(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_251(Param0)))
	{
		_0x99230691875fc218(func_262(Param0), func_251(Param0), Global_35);
	}
}

bool func_361(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_546(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_22())
	{
		return func_546(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_546(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_362(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<2> func_363()
{
	return *Global_1051213;
}

struct<2> func_364()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_255(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_255(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_365(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1248240->f_8903.f_8), iParam0);
}

int func_366(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_368(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_369(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_370(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

var func_371(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	iVar0 = func_547();
	iVar1 = get_cloud_time_as_int();
	iVar2 = (iVar1 + Param0.f_23);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1940311->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311->f_242.f_1188, 64);
	func_548(Global_1940311->f_242.f_14[iVar0], Global_1940311->f_242.f_4, cVar3, Param0);
	Global_1940311->f_242.f_14[iVar0]->f_35 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(84), Global_1940311->f_242.f_1188);
	Global_1940311->f_242.f_14[iVar0]->f_37 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_549(85), 1);
	Global_1940311->f_242.f_14[iVar0]->f_38 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_549(86), 0);
	Global_1940311->f_242.f_14[iVar0]->f_33 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_549(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311->f_242.f_14[iVar0]->f_32 = _databinding_add_data_string(&(Global_1940311->f_242.f_14[iVar0]), func_549(72), Param0.f_29);
		Global_1940311->f_242.f_14[iVar0]->f_31 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(75), Param0.f_28);
	}
	Global_1940311->f_242.f_14[iVar0]->f_26 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311->f_242.f_14[iVar0]->f_34 = _databinding_add_data_bool_by_hash(&(Global_1940311->f_242.f_14[iVar0]), 707094655, iVar15);
	Global_1940311->f_242.f_14[iVar0]->f_27 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(50), Param0.f_25);
	Global_1940311->f_242.f_14[iVar0]->f_28 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(51), Param0.f_25.f_1);
	Global_1940311->f_242.f_14[iVar0]->f_29 = _databinding_add_data_gang_id(&(Global_1940311->f_242.f_14[iVar0]), func_549(88), Param0.f_25.f_2);
	Global_1940311->f_242.f_14[iVar0]->f_25 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(89), iVar2);
	Global_1940311->f_242.f_14[iVar0]->f_24 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(90), Param0.f_22);
	func_550(Global_1940311->f_242.f_1186 + 1);
	if (Global_1940311->f_242.f_1188 == 2147483647)
	{
		Global_1940311->f_242.f_1188 = 0;
	}
	if (func_551(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1940311->f_242.f_14[iVar0];
		iVar16 = func_552(&(Param0.f_31));
		Global_1940311->f_242.f_14[iVar0]->f_36 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_549(91), iVar16);
	}
	iVar17 = func_553();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311->f_242.f_1187++;
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, 0, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar0]));
	}
	return &(Global_1940311->f_242.f_14[iVar0]);
}

void func_372(int iParam0, int iParam1)
{
	_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_8), iParam0);
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1248240->f_8903.f_14)
	{
		if (&Global_1248240->f_8903.f_9[iVar1] == iVar0)
		{
			Global_1248240->f_8903.f_9[iVar1]->f_2 = 1;
			Global_1248240->f_8903.f_9[iVar1]->f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

int func_373(int iParam0, var uParam1)
{
	iVar0 = func_393(iParam0, uParam1);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (_0x8faf4d262faba99c(&Var1))
	{
		Global_1257541->f_8852.f_3 = Var1.f_1;
	}
	if (Global_1296859->f_21 < Global_1257541->f_8852.f_3)
	{
		return 590089107;
	}
	if (!_unlock_is_unlocked(1124430142))
	{
		return -580253866;
	}
	if (func_389(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 1421345077;
	}
	if (Global_1257541->f_8852.f_2 == 0)
	{
		iVar4 = ((func_268(iParam0) / 1000) + func_554(60));
		Global_1257541->f_8852.f_2 = (Global_1296859->f_21 + iVar4);
	}
	if (!_0x179a6f0ee2e79026(&(Global_1248240->f_8903.f_120)))
	{
		return -828578368;
	}
	if (Global_1296859->f_21 > Global_1257541->f_8852.f_2)
	{
		return 1519094052;
	}
	return 1918714710;
}

bool func_374()
{
	iVar1 = player_id();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!network_is_player_active(int_to_playerindex(iVar0)))
		{
		}
		else if ((*Global_1238240)[iVar0]->f_300.f_1 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_375(int iParam0)
{
	return (*Global_1238240)[iParam0]->f_300.f_1;
}

void func_376(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_555(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 11, &uParam19);
}

bool func_377(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_378(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		iVar0 = ((func_398(iParam0) - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = func_556(iParam0, iParam1, 2);
	if (func_557(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_322(iParam0, iParam1) };
	if (func_385(vVar1))
	{
		return false;
	}
	uVar4 = func_558(func_163(iParam0), iParam1);
	if ((bParam2 && func_556(iParam0, iParam1, 1)) && func_559(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_560(vVar1, uVar4, bVar0);
}

bool func_380(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_350(&Var1, iParam1))
	{
		func_521(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_381(int iParam0, int iParam1)
{
	if (func_349(&Var3, iParam0) && func_350(&Var3, iParam1))
	{
		func_520(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_382(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0))
	{
		if (func_377(&Var1, iParam1))
		{
			func_351(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_561(iVar0);
	}
	return iVar6;
}

bool func_383(int iParam0, vector3 vParam1)
{
	if (func_385(vParam1))
	{
		return false;
	}
	if (func_562(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_563(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (is_sphere_visible_to_player(player_id(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (is_sphere_visible_to_another_machine(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = int_to_playerindex(iVar5);
		if (network_is_player_active(iVar2))
		{
			iVar3 = get_player_ped(iVar2);
			if (does_entity_exist(iVar3))
			{
				fVar4 = vdist(get_entity_coords(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_564(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_384(int iParam0)
{
	if (!func_124(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_565(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_385(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_386(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return true;
		default:
			break;
	}
	return false;
}

int func_387(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_388(int iParam0)
{
	if (!func_120(iParam0))
	{
		return false;
	}
	return (func_566(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

bool func_389(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_209(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_390(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = _0x901e0dc25080c8b9(player_id());
	*uParam0->f_21[0] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_392(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[13] == 0 || !_does_thread_exist(&(Global_1051252->f_16[13])))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 40, 5, &(Global_1051252->f_16[13]));
	func_567(uParam0, uParam0->f_1);
}

int func_393(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		*uParam1 = 1;
		return -863629719;
	}
	iVar0 = player_id();
	if (func_225(iVar0, 1))
	{
		*uParam1 = 1;
		return -1365133205;
	}
	if (func_568())
	{
		return -744198205;
	}
	if (!func_170(255))
	{
		return 1419392741;
	}
	if (func_207(255))
	{
		return 56985339;
	}
	if (func_208(iVar0, 1, 0, 1))
	{
		return -1208627562;
	}
	if (func_209(65536, iVar0))
	{
		return 1340027376;
	}
	if (is_screen_faded_out())
	{
		return -429228396;
	}
	if (func_402(Global_35))
	{
		return 736245819;
	}
	if (func_211(func_210(), func_210(), 0, 0))
	{
		*uParam1 = 1;
		return -590391633;
	}
	if (func_212())
	{
		*uParam1 = 1;
		return -1892967971;
	}
	return 1519094052;
}

bool func_394(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_27;
		case 1960865708:
			return Global_1901947->f_166.f_28;
		case 977420264:
			return Global_1901947->f_166.f_29;
		case 948632731:
			return Global_1901947->f_166.f_30;
		default:
			break;
	}
	return false;
}

bool func_395(int iParam0)
{
	return func_62(Global_1257541->f_8862, iParam0);
}

float func_396(int iParam0)
{
	switch (iParam0)
	{
		case 209722732:
			return Global_1901947->f_166.f_19;
		case 1960865708:
			return Global_1901947->f_166.f_20;
		case 977420264:
			return Global_1901947->f_166.f_21;
		case 948632731:
			return Global_1901947->f_166.f_22;
		default:
			break;
	}
	return 0f;
}

int func_397(int iParam0)
{
	iVar92 = 0;
	while (iVar92 <= 89)
	{
		if (func_303(iVar92) == iParam0)
		{
			iVar0[iVar91] = iVar92;
			iVar91++;
		}
		iVar92++;
	}
	if (iVar91 > 0)
	{
		return &(iVar0[get_random_int_in_range(0, iVar91)]);
	}
	return -1;
}

int func_398(int iParam0)
{
	iVar0 = 0;
	if (func_349(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, -2045057259, &iVar0, 0);
	}
	return iVar0;
}

int func_400(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((Global_1237665[iVar0] == iParam0 && (*Global_1237665)[iVar0]->f_6 == iParam1) && (iParam2 == -1 || (*Global_1237665)[iVar0]->f_9 == iParam2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_401(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = 0;
	if (func_349(&Var3, iParam0) && func_377(&Var3, iParam1))
	{
		if (func_520(Var3, 1702777600, &vVar0, 1))
		{
			*bParam2 = 1;
		}
	}
	return vVar0;
}

bool func_402(vector3 vParam0)
{
	fVar0 = 150f;
	fVar1 = (fVar0 * 1.5f);
	fVar1 = (fVar1 + 0.1f);
	vVar2.x = (vParam0.x - fVar1);
	vVar2.f_1 = (vParam0.y - fVar1);
	vVar2.f_2 = (vParam0.z - fVar1);
	vVar5.x = (vParam0.x + fVar1);
	vVar5.f_1 = (vParam0.y + fVar1);
	vVar5.f_2 = (vParam0.z + fVar1);
	iVar8 = _0x01708e8dd3ff8c65(vVar2, vVar5);
	if (iVar8 < 16)
	{
		return true;
	}
	return false;
}

bool func_403()
{
	iVar0 = func_387(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	if (func_388(iVar0))
	{
		return true;
	}
	return false;
}

bool func_404()
{
	if (!func_569(-428390721, 1))
	{
		return false;
	}
	iVar0 = func_387(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	if (!func_120(iVar0))
	{
		return false;
	}
	vVar1 = { func_570(iVar0) };
	if (func_385(vVar1))
	{
		return false;
	}
	if (func_167(Global_35, vVar1) > Global_1901947->f_166.f_58)
	{
		return false;
	}
	if (func_387(get_player_index()) == -1)
	{
		return false;
	}
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) < Global_1901947->f_166.f_48)
	{
		return false;
	}
	return true;
}

bool func_405()
{
	if ((*Global_1298536)[network_player_id_to_int()]->f_5.f_12 == -1)
	{
		return false;
	}
	vVar0 = { func_242((*Global_1298536)[network_player_id_to_int()]->f_5.f_12) };
	if (func_167(Global_35, vVar0) > Global_1901947->f_166.f_58)
	{
		return false;
	}
	return true;
}

struct<4> func_406(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_571(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_573(1328661203, func_572(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_573(1328661203, func_572(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_573(1328661203, func_572(), -1591664384, bParam0);
}

int func_407(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_575(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_573(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_571(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_571(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

float func_408()
{
	fVar0 = 0f;
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947->f_166.f_48)
	{
		fVar0 = (Global_1901947->f_166.f_50 * (1f - func_576()));
	}
	if (func_407(-735397297, func_406(1), 1784584921, 1, 0, 0) >= Global_1901947->f_166.f_48)
	{
		fVar0 = (Global_1901947->f_166.f_51 * (1f - func_576()));
	}
	return fVar0;
}

float func_409()
{
	fVar0 = 0f;
	iVar1 = 0;
	if (func_407(-545779394, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(-545779394, func_406(1), 1784584921, 1, 0, 0);
	}
	else if (func_407(1532695640, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(1532695640, func_406(1), 1784584921, 1, 0, 0);
	}
	else if (func_407(1847740267, func_406(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = func_407(1847740267, func_406(1), 1784584921, 1, 0, 0);
	}
	if (iVar1 >= Global_1901947->f_166.f_40)
	{
		fVar0 = (Global_1901947->f_166.f_43 * (1f - func_577()));
	}
	if (iVar1 >= Global_1901947->f_166.f_41)
	{
		fVar0 = (Global_1901947->f_166.f_44 * (1f - func_577()));
	}
	return fVar0;
}

bool func_410(int iParam0)
{
	return func_390((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_411(var uParam0, int iParam1)
{
	func_578(uParam0, iParam1);
}

int func_412(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_413(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_414(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_579(iParam0);
	}
	Global_1139381->f_3876.f_2[func_414(iParam0, 1)] = bParam1;
}

int func_414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_415(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_580(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_580(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_416(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_580(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_417()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_418(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_420(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_262(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_582(func_581(Param0));
			iVar5 = func_303(iVar4);
			if (!func_281(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_421(struct<2> Param0)
{
	iVar0 = func_415(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_583(iVar0);
}

int func_422(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_580(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_580(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_584(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_423()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_580(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_424(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_426(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_427(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_428()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_429(int iParam0)
{
	iVar0 = func_585(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_586(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_587(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_430(struct<2> Param0)
{
	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_256(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_431(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_588(Global_1900736->f_1[0]);
		return 1;
	}
	func_588(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_589(iParam0, Global_1900736->f_66);
	return 1;
}

void func_432(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 <= 0)
	{
		Global_1196205->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205->f_129 == 1)
	{
		*uParam0 = { *(*Global_1196205)[0] };
		*(*Global_1196205)[0] = { Var0 };
		Global_1196205->f_129 = 0;
		return;
	}
	*uParam0 = { *(*Global_1196205)[iParam1] };
	Global_1196205->f_129 = (Global_1196205->f_129 - 1);
	iVar4 = (Global_1196205->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*(*Global_1196205)[iVar5] = { *((*Global_1196205)[iVar5 + 1]) };
		*((*Global_1196205)[iVar5 + 1]) = { Var0 };
		iVar5++;
	}
}

void func_433(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_434()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_590(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

struct<2> func_435(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_96(-495896359);
		case 2:
			return func_96(-1122351331);
	}
	return Var0;
}

bool func_436(struct<2> Param0)
{
	return func_591(Param0, 1, 4);
}

bool func_437(int iParam0, var uParam1)
{
	if (func_141(iParam0, 536870912))
	{
		return true;
	}
	if (func_592(&(Global_1237665->f_367)))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = func_303(Global_1237665[iParam0]);
	iVar41 = func_438(iVar40);
	iVar42 = get_network_time_accurate();
	if (&Global_1198046->f_13[iVar41] >= &Global_1198046->f_3[iVar41])
	{
		*uParam1 = 1;
		return false;
	}
	Var0.f_2 = 2;
	Var0.f_5 = 0;
	Var0.f_7 = iVar42;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_438(iVar40);
	Var0.f_8.f_5.f_9 = iVar41;
	Var0.f_8.f_5 = { func_315(iParam0) };
	Var0.f_8.f_2 = { func_322(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6) };
	func_593(&Var0);
	func_594(&(Global_1237665->f_367), &Var0, 1, 15, 6, 24, 0);
	func_286(iParam0, 536870912);
	return true;
}

int func_438(int iParam0)
{
	return 2;
}

void func_439(int iParam0, var uParam1)
{
	iVar0 = func_303(Global_1237665[iParam0]);
	*uParam1 = { func_315(iParam0) };
	uParam1->f_9 = func_438(iVar0);
}

int func_440(var uParam0)
{
	if (!func_595(uParam0))
	{
		return -1;
	}
	iVar0 = func_596(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_596(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_441(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_442(int iParam0)
{
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_441(iParam0))
	{
		return Var0;
	}
	return *Global_1198046->f_231[iParam0];
}

var func_443(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_444(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 24, &uParam1);
}

void func_445(var uParam0)
{
	if (&Global_1051252->f_16[0] == 0 || !_does_thread_exist(&(Global_1051252->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 31, 24, &(Global_1051252->f_16[0]));
}

int func_446(int iParam0, int iParam1)
{
	iVar0 = func_597(iParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return func_598(iVar0, iParam1);
}

void func_447(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_599(&Var0);
}

bool func_448(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && ((*(*Global_1238240)[iVar0])[iParam0]->f_22 != (*Global_1237665)[iParam0]->f_9 || !func_64(iParam0, iParam1, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_449(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && ((*(*Global_1238240)[iVar0])[iParam0]->f_22 != (*Global_1237665)[iParam0]->f_9 || func_522(iParam0, iVar0, 1, 0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_450(int iParam0)
{
	return func_448(iParam0, 1024);
}

void func_451(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = func_303(Global_1237665[iParam0]);
	Var0.f_2 = 2;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_438(iVar40);
	Var0.f_8.f_5.f_9 = func_438(iVar40);
	Var0.f_8.f_5 = { func_315(iParam0) };
	Var0.f_8.f_2 = { func_322(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6) };
	func_594(&(Global_1237665->f_367), &Var0, 0, 0, 0, 0, 0);
}

int func_452(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1237665->f_356[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_453(int iParam0)
{
	Global_1237665->f_356[iParam0]->f_1 = 1;
}

bool func_454(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_455()
{
	return Global_1301323->f_150.f_4;
}

int func_456(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_13;
}

bool func_457(int iParam0, var uParam1)
{
	iVar0 = player_id();
	*uParam1 = { func_478(iParam0) };
	if (func_487(iParam0) <= 0)
	{
		*uParam1 = { func_600(iParam0) };
		if (func_36(*uParam1))
		{
			func_472(iParam0);
		}
		return false;
	}
	else if (!func_36(*uParam1))
	{
		*uParam1 = { func_600(iParam0) };
		if (func_36(*uParam1))
		{
			func_472(iParam0);
			return false;
		}
	}
	else if (func_36(*uParam1))
	{
		if (func_456(iParam0) < 4)
		{
			if (!func_461(iParam0, iVar0, 0))
			{
				func_601(iParam0, *uParam1);
				func_469(iParam0, 0);
				if (func_298(iParam0, 256))
				{
					func_469(iParam0, 1);
				}
			}
		}
		if (func_108(*uParam1))
		{
			if (func_462(iParam0, 4))
			{
				func_467(iParam0, 0, 0);
				return false;
			}
			else if (func_462(iParam0, 5))
			{
				func_468(iParam0, 0);
				return false;
			}
		}
	}
	return true;
}

void func_458(int iParam0, int iParam1)
{
	Global_1198046->f_231.f_1066[iParam0]->f_13 = iParam1;
}

bool func_459(int iParam0)
{
	if (!func_602(iParam0))
	{
		return false;
	}
	if (func_456(iParam0) >= 5)
	{
		return false;
	}
	if (func_456(iParam0) <= 0)
	{
		return false;
	}
	if (!func_461(iParam0, player_id(), 0))
	{
		return false;
	}
	return true;
}

void func_460(int iParam0, int iParam1)
{
	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_109(Var0) && !func_108(Var0))
	{
		return;
	}
	func_603(iParam0, 2);
	func_603(iParam0, 3);
	func_469(iParam0, 6);
	func_113(Var0, 0, 2, iParam1, 0);
}

bool func_461(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

bool func_462(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < func_354())
	{
		iVar0 = func_355(iVar1);
		if (func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_461(iParam0, player_id(), iParam1);
}

int func_463(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_4;
}

void func_464(int iParam0)
{
	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	func_469(iParam0, 2);
	func_603(iParam0, 3);
	func_603(iParam0, 6);
	func_502(Var0);
}

void func_465(int iParam0)
{
	iVar0 = get_player_index();
	(*(*Global_1207784)[iVar0])[iParam0] = 0;
}

void func_466(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_109(Var0))
	{
		return;
	}
	if (func_108(Var0))
	{
		return;
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	func_469(iParam0, 3);
	func_499(Var0, 1, bParam2, bParam3);
}

void func_467(int iParam0, bool bParam1, int iParam2)
{
	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (!func_108(Var0))
	{
		return;
	}
	if (func_461(iParam0, player_id(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_113(Var0, 0, bVar2, iParam2, 0);
	func_469(iParam0, 4);
}

void func_468(int iParam0, int iParam1)
{
	Var0 = { func_600(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_109(Var0))
	{
		return;
	}
	if (!func_108(Var0))
	{
		return;
	}
	if (func_461(iParam0, player_id(), 5))
	{
		return;
	}
	func_113(Var0, 0, 1, iParam1, 0);
	func_469(iParam0, 5);
}

void func_469(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_461(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

bool func_470(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_354())
	{
		iVar0 = func_355(iVar1);
		if (func_461(iParam0, iVar0, 2) && !((func_461(iParam0, iVar0, 4) || func_461(iParam0, iVar0, 5)) || func_461(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_600(iParam0) };
	return !(func_109(Var2) || func_108(Var2));
}

bool func_471(int iParam0, int iParam1)
{
	return (*Global_1207784)[iParam1][iParam0] == 0;
}

void func_472(int iParam0)
{
	iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_604(iParam0, iVar0);
		func_605(iParam0, iVar0);
		iVar0++;
	}
	func_460(iParam0, 0);
	func_606(iParam0);
	func_465(iParam0);
}

void func_473(int iParam0, int iParam1)
{
	iVar0 = func_607(iParam0);
	iVar1 = func_608(iParam0, iParam1);
	iVar2 = func_609(iParam0, iParam1);
	iVar3 = func_456(iParam0);
	switch (func_610(iParam0, iParam1))
	{
		case -1:
			if (!func_459(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_611(iParam0, iParam1, 6);
				}
				return;
			}
			func_611(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_459(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_611(iParam0, iParam1, 6);
				}
				return;
			}
			func_611(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			func_611(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_611(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			if (!func_613(iParam0, iParam1))
			{
				return;
			}
			func_614(iParam0, iParam1, 0);
			func_611(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_459(iParam0))
			{
				func_612(iParam0, iParam1);
				func_611(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_611(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_611(iParam0, iParam1, 6);
				return;
			}
			if (!func_615(iParam0, iParam1))
			{
				return;
			}
			func_611(iParam0, iParam1, 4);
			break;
		case 4:
			if (!_0x1b89bc43b6e69107(iVar0, iVar1, 1, 0))
			{
				if (!func_616(iParam0, iParam1))
				{
					func_617(iParam0, iParam1, 0);
					func_618(iParam0, iParam1, 0);
					func_611(iParam0, iParam1, 2);
				}
				return;
			}
			func_611(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_487(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_604(iParam0, iParam1);
			}
			if (func_619(iParam0, iParam1))
			{
				func_604(iParam0, iParam1);
			}
			if (_0x1b89bc43b6e69107(iVar0, iVar1, 1, 0))
			{
				return;
			}
			if (func_616(iParam0, iParam1))
			{
				return;
			}
			func_617(iParam0, iParam1, 0);
			if ((func_481(iParam0, 4) || func_481(iParam0, 5)) || (func_456(iParam0) > 2 && iVar2 == 3))
			{
				func_611(iParam0, iParam1, 6);
			}
			else
			{
				func_618(iParam0, iParam1, 0);
				func_611(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_470(iParam0))
			{
				return;
			}
			func_611(iParam0, iParam1, 7);
			break;
		case 7:
			func_612(iParam0, iParam1);
			func_611(iParam0, iParam1, 8);
			break;
		case 8:
			func_469(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_611(iParam0, iParam1, 1);
			func_603(iParam0, 7);
			break;
	}
}

bool func_474(int iParam0, int iParam1)
{
	iVar0 = func_620(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_0xa4a4359320345b34(iVar0))
	{
		func_621(iParam0, iParam1, 0);
		return true;
	}
	func_621(iParam0, iParam1, 0);
	return true;
}

void func_475(int iParam0, int iParam1)
{
	if (!func_298(iParam0, 8))
	{
		return;
	}
	iVar0 = func_487(iParam0);
	iVar1 = func_622(iParam0, iParam1);
	iVar2 = func_456(iParam0);
	iVar3 = func_609(iParam0, iParam1);
	bVar4 = func_602(iParam0);
	if (!bVar4 || iVar2 >= 5)
	{
		if (iVar1 != 1)
		{
			func_623(iParam0, iParam1);
			func_624(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar1)
	{
		case -2:
			break;
		case -1:
			if (!func_36(func_478(iParam0)))
			{
			}
			else if (func_625(iParam0, iParam1) <= 0)
			{
				func_624(iParam0, iParam1, 0);
			}
			else if (iVar0 == 1)
			{
				func_624(iParam0, iParam1, 5);
			}
			else
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 0:
			if (func_625(iParam0, iParam1) > 0)
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 1:
			func_624(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_626(iParam0, iParam1) != 0)
			{
				func_624(iParam0, iParam1, 4);
				return;
			}
			func_627(iParam0, iParam1, 0);
			func_624(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_620(iParam0, iParam1) == 0)
			{
				func_624(iParam0, iParam1, 2);
				return;
			}
			if (func_628(iParam0, iParam1))
			{
				func_624(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar0 == 1)
			{
				_0xd4fa73fe628fec63(func_626(iParam0, iParam1), 160);
				func_624(iParam0, iParam1, 7);
			}
			else if (!_0xf6a8a652a6b186cd(func_626(iParam0, iParam1)))
			{
				func_629(iParam0, iParam1);
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 5:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				func_624(iParam0, iParam1, 2);
			}
			break;
		case 6:
			break;
		case 7:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				_0xd4fa73fe628fec63(func_626(iParam0, iParam1), 32);
				func_624(iParam0, iParam1, 4);
			}
			else if (!_0xf6a8a652a6b186cd(func_626(iParam0, iParam1)))
			{
				func_629(iParam0, iParam1);
				func_624(iParam0, iParam1, 5);
			}
			break;
	}
}

void func_476(int iParam0, int iParam1)
{
	if (!func_298(iParam0, 16))
	{
		return;
	}
	iVar0 = func_607(iParam0);
	iVar1 = func_608(iParam0, iParam1);
	iVar3 = func_609(iParam0, iParam1);
	if (iVar3 > 0 && !func_602(iParam0))
	{
		func_630(iParam0, iParam1, 0);
		return;
	}
	switch (iVar3)
	{
		case -1:
			if (!func_36(func_478(iParam0)))
			{
				return;
			}
			if (func_631(iParam0, iParam1) <= 0)
			{
				func_630(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_630(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_602(iParam0))
			{
				return;
			}
			if (func_631(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_632(iParam0);
			if (iVar2 != -15 && func_633(iVar2))
			{
				return;
			}
			func_630(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_634(iParam0, iParam1, 0))
			{
			}
			else
			{
				func_630(iParam0, iParam1, 2);
				func_488(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_634(iParam0, iParam1, 0))
			{
				if (!_0x1b89bc43b6e69107(iVar0, iVar1, 0, 0))
				{
					func_630(iParam0, iParam1, 3);
					return;
				}
			}
			if (func_456(iParam0) >= 3)
			{
				func_630(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_456(iParam0) >= 3)
			{
				return;
			}
			if (!func_635(iParam0, iParam1))
			{
				func_630(iParam0, iParam1, 2);
				return;
			}
			if (func_480(iParam0) != 255)
			{
				func_488(iParam0, 2);
			}
			else
			{
				func_488(iParam0, 1);
			}
			iVar2 = func_632(iParam0);
			if (iVar2 != -15 && func_633(iVar2))
			{
				func_630(iParam0, iParam1, 0);
				return;
			}
			if (func_456(iParam0) >= 4)
			{
				return;
			}
			if (func_636(iParam0, 7))
			{
				return;
			}
			func_630(iParam0, iParam1, 1);
			break;
	}
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 5)
	{
		if (!func_36(func_478(iParam0)))
		{
			func_458(iParam0, 5);
			return true;
		}
	}
	if (!func_602(iParam0) && iParam1 < 5)
	{
		func_637(iParam0);
		func_458(iParam0, 5);
		return true;
	}
	return false;
}

struct<2> func_478(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_210();
	}
	return Global_1198046->f_231[iParam0]->f_5;
}

void func_479(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Global_1198046->f_2505[iParam0]->f_4 = _0x901e0dc25080c8b9(iParam1);
	Global_1198046->f_2505[iParam0]->f_5 = iParam1;
}

int func_480(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_5;
}

bool func_481(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_482(int iParam0)
{
	if (!func_298(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_638(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_640(func_639(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return count_player_bits(&uVar1) <= 0;
}

bool func_483(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_471(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_484(int iParam0)
{
	if (Global_1198046->f_231.f_1066[iParam0]->f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1198046->f_2505[iParam0]->f_5;
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (network_is_player_active(iVar0))
	{
		iVar2 = _0x901e0dc25080c8b9(iVar0);
		if (Global_1198046->f_2505[iParam0]->f_4 != iVar2)
		{
			if ((_0xd6f6acf4392187fb(Global_1198046->f_2505[iParam0]->f_4) && _0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4)) && _0x149a2751ab66ac02(Global_1198046->f_2505[iParam0]->f_4) > 0)
			{
				iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
				func_479(iParam0, iVar1);
			}
			else if (_0x4be6c13a45cca8ec(iVar2) == iVar0)
			{
				Global_1198046->f_2505[iParam0]->f_4 = iVar2;
			}
			else
			{
				func_641(iParam0);
			}
		}
		return;
	}
	if (Global_1198046->f_2505[iParam0]->f_4 == 0)
	{
		func_641(iParam0);
		return;
	}
	if (!_0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4))
	{
		func_641(iParam0);
		return;
	}
	iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
	if (!_network_is_player_index_valid(iVar1))
	{
		func_641(iParam0);
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		func_641(iParam0);
		return;
	}
	func_479(iParam0, iVar1);
}

bool func_485(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if ((*Global_1207784)[iVar0][iParam0] > 255)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_486(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_461(iParam0, iVar0, iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

int func_487(int iParam0)
{
	if (!func_441(iParam0))
	{
		return -1;
	}
	return Global_1198046->f_231[iParam0]->f_1;
}

void func_488(int iParam0, int iParam1)
{
	Global_1198046->f_231[iParam0]->f_1 = iParam1;
}

int func_489(int iParam0)
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked((*Global_1248240)[iParam0]->f_598))
	{
		return 4;
	}
	if (func_64(iParam0, 8, 255))
	{
		return 5;
	}
	if (func_212())
	{
		return 26;
	}
	if (func_64(iParam0, 64, 255) && (func_492(iParam0, 255) == 16 || !func_40(iParam0, 32)))
	{
		return 16;
	}
	if (func_211((*Global_1248240)[iParam0]->f_584, func_210(), 0, 0) && (*Global_1248240)[iParam0]->f_559 != 1717788883)
	{
		return 7;
	}
	if (!_0x424b17a7dc5c90bc(player_id()) && func_642((*Global_1248240)[iParam0]->f_584))
	{
		if (func_64(iParam0, 32, 255) && !func_40(iParam0, 256))
		{
			func_643();
			func_144(iParam0, 256);
		}
		return 8;
	}
	if ((*Global_1248240)[iParam0]->f_559 != 1427578635 || (*Global_1237665)[iParam0]->f_16 != player_id())
	{
		if (func_40(iParam0, 8388608) || (func_64(iParam0, 32, 255) && func_493(iParam0, &bVar1)))
		{
			func_144(iParam0, 8388608);
			if (bVar1)
			{
				func_144(iParam0, 16777216);
			}
			return 17;
		}
	}
	bVar2 = func_644(iParam0, 255);
	if (_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), network_player_id_to_int()))
	{
		if (func_117((*Global_1248240)[iParam0]->f_559))
		{
			if (!func_64(iParam0, 16, 255) && !func_141(iParam0, 16))
			{
				return 21;
			}
		}
		if (bVar2 && func_40(iParam0, 262144))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	iVar3 = func_645(iParam0);
	if (iVar3 != 255)
	{
		if (iVar3 != player_id())
		{
			func_309(iParam0, 16777216);
		}
		return 2;
	}
	if (func_389(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 23;
	}
	if ((*Global_1248240)[iParam0]->f_599 != 0 && !_unlock_is_unlocked((*Global_1248240)[iParam0]->f_599))
	{
		return 24;
	}
	if (bVar2)
	{
		return 15;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (func_646(Global_1237665[iParam0]))
	{
		return 12;
	}
	if (func_208(player_id(), 1, 0, 1))
	{
		return 13;
	}
	return 0;
}

int func_491(int iParam0)
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_visible((*Global_1248240)[iParam0]->f_598))
	{
		return 4;
	}
	bVar1 = func_522(iParam0, 255, 0, 0);
	bVar2 = func_40(iParam0, 512);
	fVar3 = Global_1901947->f_308.f_164;
	if ((*Global_1248240)[iParam0]->f_559 == 1918154385)
	{
		fVar3 = (fVar3 + (fVar3 * func_647()));
	}
	if ((*Global_1248240)[iParam0]->f_559 != 1427578635 && !func_648((*Global_1248240)[iParam0]->f_587, bVar1, bVar2, fVar3))
	{
		return 9;
	}
	if (!func_141(iParam0, 2097152) && !func_64(iParam0, 32, 255))
	{
		return 10;
	}
	if ((*Global_1248240)[iParam0]->f_559 == 1918154385)
	{
		if (!_unlock_is_unlocked(-1607036473))
		{
			return 18;
		}
		iVar4 = func_649();
		if (func_280(iVar4) && func_169(iVar4) < Global_1901947->f_166.f_59)
		{
			return 19;
		}
		if (func_650(iParam0, 1))
		{
			return 20;
		}
	}
	else if ((*Global_1248240)[iParam0]->f_559 == 1427578635)
	{
		if (network_is_player_active((*Global_1237665)[iParam0]->f_16) && (*Global_1237665)[iParam0]->f_16 == (*Global_1238240)[network_player_id_to_int()]->f_300.f_1)
		{
			return 2;
		}
		else
		{
			return 22;
		}
	}
	if (func_141(iParam0, 1073741824))
	{
		return 25;
	}
	if (func_651(player_id(), 1, 1))
	{
		return 11;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (*(*Global_1238240)[iParam1])[iParam0]->f_20;
}

bool func_493(int iParam0, bool bParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iVar0 != (*Global_1248240)[iParam0]->f_595)
	{
		bVar1 = _0xd6f6acf4392187fb((*Global_1248240)[iParam0]->f_595);
		if ((((*Global_1248240)[iParam0]->f_594 > 1 && _0x149a2751ab66ac02((*Global_1248240)[iParam0]->f_595) > 0) && _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595) != 255) && _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595) == (*Global_1248240)[iParam0]->f_596)
		{
			*bParam1 = 1;
		}
		(*Global_1248240)[iParam0]->f_595 = iVar0;
		return bVar1;
	}
	(*Global_1248240)[iParam0]->f_594 = _0x149a2751ab66ac02((*Global_1248240)[iParam0]->f_595);
	(*Global_1248240)[iParam0]->f_596 = _0x4be6c13a45cca8ec((*Global_1248240)[iParam0]->f_595);
	return false;
}

void func_494(int iParam0)
{
	iVar0 = func_446(Global_1237665[iParam0], (*Global_1237665)[iParam0]->f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_652(iVar0);
}

void func_495(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_248(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_250(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_250(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_496(int iParam0)
{
	if (func_40(iParam0, 134217728))
	{
		return;
	}
	iVar0 = (*Global_1237665)[iParam0]->f_5;
	if (!func_120(iVar0))
	{
		return;
	}
	switch ((*Global_1248240)[iParam0]->f_559)
	{
		case 1884341302:
			bVar1 = true;
			iVar2 = 3;
			break;
		case -260420884:
		case 850213441:
		case 1918154385:
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	func_653(iVar0, iVar2, bVar1);
	func_144(iParam0, 134217728);
}

void func_497()
{
	Var0 = { func_96(-1136577243) };
	stat_id_set_int(&Var0, Global_1296859->f_21, true);
}

bool func_498(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_521(Var1, 572283279, &iVar0, 0);
	}
	return iVar0;
}

void func_499(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (!func_109(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_654(Param0);
	}
	if (!func_36(func_255(0)))
	{
		func_254(Param0, 3);
		func_257(bParam3);
		func_258(!bParam4);
		func_655(Param0, -1);
		if (bParam2 && !func_656(2))
		{
			func_418(&Global_0, 1024);
		}
		func_260(1);
	}
	else
	{
		func_655(Param0, -1);
		func_254(Param0, 4);
		func_657(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_262(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_658(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_500(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_263(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_416(Param0);
	Var0.f_3 = iParam3;
	func_659(&Var0, bParam2, iParam4);
	return 1;
}

void func_501(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

int func_502(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_660(Param0))
	{
		return -1;
	}
	iVar1 = func_661(Param0);
	if (iVar1 >= 0)
	{
		func_662(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_662(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_503(struct<2> Param0)
{
	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_256(Param0, func_663(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_504(int iParam0)
{
	if (Global_1109804->f_17)
	{
		func_664(iParam0);
	}
	else
	{
		func_665(iParam0);
	}
}

bool func_505()
{
	if (func_17() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

void func_506(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 14, &uParam1);
}

bool func_507(int iParam0)
{
	return iParam0 != -1;
}

void func_508(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, 2097877918, 0);
	func_666(iParam0, iParam1, -1158905413, 0);
	func_666(iParam0, iParam1, 358397622, 0);
	func_666(iParam0, iParam1, 65999835, 0);
	func_666(iParam0, iParam1, 814443795, 0);
	func_666(iParam0, iParam1, 519621102, 0);
	func_666(iParam0, iParam1, -1628223003, 0);
	func_666(iParam0, iParam1, 1278256225, 0);
	func_666(iParam0, iParam1, 2038628101, 0);
	func_666(iParam0, iParam1, 1742494648, 0);
	func_666(iParam0, iParam1, -1010166918, 0);
	func_666(iParam0, iParam1, 660170868, 0);
	func_666(iParam0, iParam1, -1278312096, 0);
	func_666(iParam0, iParam1, -509158128, 0);
	func_666(iParam0, iParam1, -226656579, 0);
	func_666(iParam0, iParam1, 2115868159, 0);
	func_666(iParam0, iParam1, 1495813101, 0);
	func_666(iParam0, iParam1, 1197385818, 0);
	func_666(iParam0, iParam1, 1015780020, 0);
	func_666(iParam0, iParam1, -1286733825, 0);
	func_666(iParam0, iParam1, -1670393277, 0);
	func_666(iParam0, iParam1, -415733461, 0);
	func_666(iParam0, iParam1, -1207924036, 0);
	func_666(iParam0, iParam1, 497702414, 0);
	func_666(iParam0, iParam1, 719188085, 0);
	func_666(iParam0, iParam1, 43753457, 0);
	func_666(iParam0, iParam1, 771290791, 0);
	func_666(iParam0, iParam1, 20356387, 0);
	func_666(iParam0, iParam1, 309149584, 0);
	func_666(iParam0, iParam1, 1613781781, 0);
	func_666(iParam0, iParam1, 1693607065, 0);
	func_666(iParam0, iParam1, 1132176120, 0);
	func_666(iParam0, iParam1, 869270437, 0);
}

void func_509(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, 106566339, 0);
	func_666(iParam0, iParam1, -50399569, 0);
	func_666(iParam0, iParam1, 1222652248, 0);
	func_666(iParam0, iParam1, -350226955, 0);
	func_666(iParam0, iParam1, 1030835986, 0);
	func_666(iParam0, iParam1, -1535431934, 0);
	func_666(iParam0, iParam1, -1448293989, 0);
	func_666(iParam0, iParam1, 266218800, 0);
	func_666(iParam0, iParam1, 555364152, 0);
	func_666(iParam0, iParam1, -1996978098, 0);
	func_666(iParam0, iParam1, 1078461828, 0);
}

void func_510(int iParam0, int iParam1)
{
	set_relationship_between_groups(iParam0, iParam1, -1976316465);
	set_relationship_between_groups(iParam0, iParam1, 841021282);
}

void func_511(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, 889541022, 0);
	func_666(iParam0, iParam1, -989642646, 0);
}

void func_512(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, -767591988, 0);
	func_666(iParam0, iParam1, -1683752762, 0);
	func_666(iParam0, iParam1, 1986610512, 0);
	func_666(iParam0, iParam1, -319516747, 0);
	func_666(iParam0, iParam1, -1329647920, 0);
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_666(iParam1, iParam2, func_667(iParam0, iParam3), 0);
}

void func_514(int iParam0, int iParam1)
{
	func_666(iParam0, iParam1, 707888648, 0);
}

struct<2> func_515(int iParam0, var uParam1)
{
	uVar0 = func_223(func_163(iParam0), uParam1);
	Var1 = { func_668(uVar0, 1, iParam0, uParam1) };
	if (Var1.f_3 != 0)
	{
		Var34 = { func_359(Var1.f_3, 4) };
		if (!func_36(Var34))
		{
			return func_210();
		}
		return Var34;
	}
	return func_210();
}

int func_516(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

bool func_517(var uParam0, int iParam1)
{
	uParam0->f_2 = 1168896522;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_518(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar8 = func_669(iParam1);
	if (iVar8 == -1)
	{
		return 0;
	}
	if (!func_670(&Var0))
	{
		return 0;
	}
	if (!func_671(&Var0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 7, func_672(iVar8), 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_671(&Var0, 9, iParam1, 0, 1))
	{
		return 0;
	}
	uVar7 = Var0.f_1;
	if (iVar8 != 3)
	{
		if (!func_671(&Var0, 19, 0, 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 20, func_673(iParam4), 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 21, func_674(4), 0, 1))
		{
			return 0;
		}
		if (!func_671(&Var0, 22, iParam2, 0, 1))
		{
			return 0;
		}
		uParam0->f_39 = func_675(&Var0);
	}
	Var0.f_1 = uVar7;
	if (func_671(&Var0, 16, 0, 0, 1))
	{
		uParam0->f_37 = func_676(&Var0, 0);
		uVar6 = Var0.f_1;
	}
	uParam0->f_37++;
	iVar9 = 0;
	while (iVar9 <= (uParam0->f_37 - 1))
	{
		Var0.f_1 = uVar6;
		if (iVar9 == 0)
		{
			iVar5 = iParam1;
		}
		else
		{
			if (!func_671(&Var0, 10, (iVar9 - 1), 0, 1))
			{
				return 0;
			}
			iVar5 = func_677(&Var0);
		}
		if (!func_678((*uParam0)[iVar9], iVar5, iParam2, iParam3, iParam4))
		{
			return 0;
		}
		iVar9++;
	}
	return 1;
}

bool func_519(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_520(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_521(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_522(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	iVar0 = func_492(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return true;
	}
	if (bParam3 && iVar0 == 21)
	{
		return true;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

bool func_523(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_679(iParam0, fParam1, bParam5))
	{
		return true;
	}
	if (iParam3 && func_680(iParam0, fParam1))
	{
		return true;
	}
	if (iParam4 && func_681(iParam0, fParam1))
	{
		return true;
	}
	if (iParam6 && func_682(iParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_524(int iParam0)
{
	if (func_36((*Global_1248240)[iParam0]->f_584) && func_683((*Global_1248240)[iParam0]->f_584, func_274((*Global_1248240)[iParam0]->f_559), 0))
	{
		return 0;
	}
	if (func_684())
	{
		return 2;
	}
	if (((*Global_1248240)[iParam0]->f_559 == 1427578635 && func_40(iParam0, 65536)) && func_141(iParam0, 1073741824))
	{
		return 2;
	}
	if ((func_644(iParam0, 255) && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id())) || !func_64(iParam0, 512, 255))
	{
		return 0;
	}
	if (func_64(iParam0, 8388608, 255))
	{
		return 0;
	}
	if (_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), player_id()) || func_64(iParam0, 32, 255))
	{
		return 3;
	}
	if (func_74((*Global_1248240)[iParam0]->f_559) && !func_141(iParam0, 131072))
	{
		return 2;
	}
	return 1;
}

void func_525(int iParam0)
{
	iVar0 = (*Global_1248240)[iParam0]->f_590;
	if (!func_49(iVar0))
	{
		func_112(iParam0, 2);
		if (func_104(iVar0))
		{
			func_52(iVar0, iParam0, 0, 0);
		}
	}
	else
	{
		func_529(iVar0, iParam0, 0);
	}
	func_309(iParam0, 1048576);
}

int func_526(int iParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_685(iVar0))
		{
			return iVar0;
		}
		else if ((iVar1 == -1 && !func_686(iVar0)) && Global_1248240->f_8880[iVar0]->f_2 < iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_527(int iParam0, int iParam1)
{
	if (Global_1248240->f_8880[iParam0]->f_1 != iParam1)
	{
		Global_1248240->f_8880[iParam0]->f_1 = iParam1;
	}
}

void func_528(int iParam0, int iParam1, int iParam2)
{
	if (&Global_1248240->f_8880[iParam0] != iParam2)
	{
		if (!func_122(iParam0, iParam1))
		{
			return;
		}
		Global_1248240->f_8880[iParam0] = iParam2;
		Global_1248240->f_8880[iParam0]->f_1 = -1;
	}
}

void func_529(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8880[iParam0]->f_2 != iParam2)
	{
		if (!func_122(iParam0, iParam1))
		{
			return;
		}
		Global_1248240->f_8880[iParam0]->f_2 = iParam2;
	}
}

bool func_530(int iParam0, int iParam1, var uParam2)
{
	StringCopy(&cVar0, "net_fetch", 64);
	iVar8 = iParam0;
	if (iVar8 != -1)
	{
		if (get_number_of_free_stacks_of_this_size(10000) <= 0)
		{
			return false;
		}
		if (network_is_script_active(&cVar0, iVar8, true, 0))
		{
			*uParam2 = 1;
			return true;
		}
		if (func_64(iParam0, 2, 255))
		{
			return true;
		}
		request_script(&cVar0);
		if (has_script_loaded(&cVar0))
		{
			Var9.f_7 = -1;
			Var9.f_7.f_1 = -1;
			Var9.f_9 = 255;
			Var9.f_7 = { (*Global_1248240)[iParam0]->f_584 };
			Var9.f_6 = iParam0;
			Var9 = iVar8;
			Global_1248240->f_8880[iParam1]->f_3 = start_new_script_with_args(&cVar0, &Var9, 10, 10000);
			set_script_as_no_longer_needed(&cVar0);
			func_687(&cVar0, iVar8);
			return true;
		}
	}
	return false;
}

int func_531(int iParam0)
{
	iVar0 = func_688(iParam0);
	iVar1 = func_689(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_532(iVar1))
		{
			func_690(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_532(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_533(int iParam0)
{
	if (!func_691(player_id(), iParam0, 8))
	{
		return;
	}
	func_692();
	Global_1109804->f_15 = 1;
	func_693(iParam0, 8);
}

bool func_534(int iParam0)
{
	if (!func_694(iParam0))
	{
		return true;
	}
	return (get_game_timer() - func_695(iParam0)) >= func_696(iParam0);
}

bool func_535(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

void func_536()
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = player_id();
	Var0.f_11 = _0x901e0dc25080c8b9(Var0.f_10);
	Var0.f_4 = 11;
	func_697(1);
	func_445(&Var0);
}

void func_537()
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	iVar32 = _network_get_session_host();
	if (!_network_is_player_index_valid(iVar32))
	{
		return;
	}
	if (!network_is_player_active(iVar32))
	{
		return;
	}
	_0x31010318ba9897ac(&uVar31, iVar32);
	Var0.f_10 = player_id();
	Var0.f_11 = _0x901e0dc25080c8b9(Var0.f_10);
	Var0.f_4 = 10;
	func_697(0);
	func_444(&Var0, uVar31);
}

void func_538(int iParam0)
{
	if ((*Global_1248240)[iParam0]->f_559 != -1777724963)
	{
		return;
	}
	if (func_40(iParam0, 268435456))
	{
		return;
	}
	if ((*Global_1237665)[iParam0]->f_7 == -1)
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		func_144(iParam0, 268435456);
		return;
	}
	vVar0.x = func_699(func_698((*Global_1237665)[iParam0]->f_7));
	vVar0.f_1 = (*Global_1237665)[iParam0]->f_21.f_3;
	vVar0.f_2 = (*Global_1237665)[iParam0]->f_21.f_2;
	func_700(1244342493, &vVar0, 0, 0);
	func_144(iParam0, 268435456);
}

void func_539(var uParam0, int iParam1)
{
	func_701(uParam0, iParam1);
}

void func_540(int iParam0)
{
	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*Global_1108365->f_34.f_353[iParam0] = { Var0 };
	(*Global_1288736)[network_player_id_to_int()]->f_66 = 0;
}

void func_541(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	Global_1108365->f_34[iParam0]->f_6 = 0;
	Var0 = 4;
	*Global_1108365->f_34[iParam0] = { Var0 };
	func_702(iParam0);
	Var11 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iParam0] = { Var11 };
	if ((!func_703() || !func_704()) || Global_1572887->f_6)
	{
		func_705(_create_var_string(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_706(&(Global_1108365->f_34[iParam0]->f_8), 256))
	{
		if (func_707(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_708(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_708(&(Global_1108365->f_34.f_773), 32);
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
	}
}

void func_542(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_709(iParam0);
	func_710(iParam0);
	func_711(iParam0);
	func_712(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_702(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_706(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_707(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_708(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_708(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_705(_create_var_string(10, "PARLEY_TICKER_END", func_714(get_player_name(iParam0), func_713(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_715(&Var15, &uVar14);
}

bool func_543(int iParam0)
{
	if ((*Global_1288736)[iParam0]->f_66)
	{
		return (*Global_1288736)[iParam0]->f_66;
	}
	return &(Global_1108365->f_34.f_353[iParam0]);
}

int func_544(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_716(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_717(uParam1, iParam0, Var3);
	return 1;
}

int func_545(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

bool func_546(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_547()
{
	iVar1 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar41 = _databinding_read_data_int(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_718(Var2))
			{
				func_719(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_720();
}

void func_548(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_721(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_549(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_string(*uParam0, func_549(17), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_549(3), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_549(4), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_549(5), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_549(6), Param10.f_21);
}

char* func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_550(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

bool func_551(var uParam0)
{
	return true;
}

int func_552(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738->f_384)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_723(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_724(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_725(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_726(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_727(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_728(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_729(func_722(uParam0->f_2, 109029619), func_722(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_553()
{
	return Global_1940311->f_242.f_1185;
}

int func_554(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_555(var uParam0, struct<21> Param1)
{
	if (!func_730(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_556(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_516(iParam0, iParam1);
	return func_390(Global_1257541->f_451[iVar0]->f_2, iParam2);
}

bool func_557(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= (func_324(iParam0, iParam1) - 1))
	{
		vVar1 = { func_325(func_163(iParam0), iParam1, iVar0) };
		uVar4 = func_731(func_163(iParam0), iParam1, iVar0);
		if (func_385(vVar1))
		{
		}
		else
		{
			if (func_560(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_558(int iParam0, int iParam1)
{
	uVar0 = Global_1901947->f_166.f_34;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_732(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_559(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1) && vdist(get_entity_coords(get_player_ped(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_560(vector3 vParam0, var uParam3, bool bParam4)
{
	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return _0x397769175a7dbb30(vParam0, uParam3, 0, 0, iVar0);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return 0;
		case -910931556:
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

int func_562(int iParam0)
{
	return func_733(iParam0, 4);
}

float func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_564(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1138828->f_2[iParam0]->f_9 == iVar0 || Global_1138828->f_2[iParam0]->f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_565(int iParam0)
{
	return Global_1237665[iParam0] == -1;
}

bool func_566(int iParam0)
{
	if (!func_120(iParam0))
	{
		return false;
	}
	iVar0 = func_734(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_567(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_735(iVar0);
		if (func_62(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_568()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_569(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_737(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_738(iParam0))
			{
				return true;
			}
			break;
	}
	return func_739(iParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_570(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

int func_571(bool bParam0)
{
	if (func_17() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_572()
{
	return Var0;
}

struct<4> func_573(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_574(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_571(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_574(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_575(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

float func_576()
{
	return Global_1146212->f_2169[85]->f_201;
}

float func_577()
{
	return Global_1146212->f_2169[86]->f_201;
}

void func_578(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_579(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_740(Global_1139381->f_3876.f_2[func_414(iParam0, 1)]);
}

bool func_580(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_741(uParam2);
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

int func_581(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_580(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_582(int iParam0)
{
	iVar0 = -1;
	if (func_349(&Var1, iParam0))
	{
		iVar0 = ((func_742() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_583(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_584(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_585(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_586(int iParam0)
{
	iVar0 = func_743(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_588(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_589(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_744((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_744(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_36(*Global_1900736->f_1[0]))
	{
		func_254(*Global_1900736->f_1[0], 3);
	}
}

int func_590(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_591(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_36(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_745(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_592(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

void func_593(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_747(&Var0, func_746(0, 8));
}

int func_594(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_592(uParam0))
	{
		return 0;
	}
	if (!func_748(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = player_id();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_749(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_750(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = get_network_time_accurate();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*uParam0->f_3[iVar1] = { *uParam1 };
	func_136(uParam0->f_3[iVar1], 0);
	*uParam0++;
	return 1;
}

bool func_595(var uParam0)
{
	if (func_36(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_596(var uParam0, int iParam1)
{
	iVar0 = func_751(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_752(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_256(Global_1198046->f_231[iVar6]->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

int func_597(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (&Global_1272030->f_3348[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_598(int iParam0, int iParam1)
{
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_753(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_599(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[16] == 0 || !_does_thread_exist(&(Global_1051252->f_16[16])))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 8, 39, &(Global_1051252->f_16[16]));
	func_754(uParam0, uParam0->f_1);
}

struct<2> func_600(int iParam0)
{
	return Global_1210161->f_1[iParam0]->f_4;
}

void func_601(int iParam0, struct<2> Param1)
{
	Global_1210161->f_1[iParam0]->f_4 = { Param1 };
	Global_1210161->f_1[iParam0]->f_6 = func_416(Param1);
}

bool func_602(int iParam0)
{
	bVar0 = !func_683(func_600(iParam0), func_755(iParam0), 0);
	return bVar0;
}

void func_603(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	clear_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_604(int iParam0, int iParam1)
{
	if (!func_616(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_756(iParam0, iParam1);
	if (!is_thread_active(iVar0, false))
	{
		return;
	}
	_0x7de4643157ad646c(iVar0);
}

void func_605(int iParam0, int iParam1)
{
	func_612(iParam0, iParam1);
	func_611(iParam0, iParam1, -1);
}

void func_606(int iParam0)
{
	func_588(&(Global_1210161->f_1[iParam0]->f_4));
	Global_1210161->f_1[iParam0]->f_6 = 0;
}

int func_607(int iParam0)
{
	return &(Global_1198046->f_231.f_1066[iParam0]);
}

int func_608(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_1;
}

int func_609(int iParam0, int iParam1)
{
	return Global_1198046->f_2505[iParam0][iParam1];
}

int func_610(int iParam0, int iParam1)
{
	return Global_1210161->f_1[iParam0][iParam1];
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1] = iParam2;
}

void func_612(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_618(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_613(int iParam0, int iParam1)
{
	iVar0 = func_631(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_216(player_id()) };
	if (func_385(vVar1))
	{
		return false;
	}
	return func_167(vVar1, func_639(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_614(int iParam0, int iParam1, int iParam2)
{
	func_469(iParam0, func_757(iParam1, iParam2));
}

bool func_615(int iParam0, int iParam1)
{
	iVar0 = func_608(iParam0, iParam1);
	iVar1 = func_607(iParam0);
	if (func_616(iParam0, iParam1))
	{
		return false;
	}
	if (_0x1b89bc43b6e69107(iVar1, iVar0, 1, 0))
	{
		return false;
	}
	if (func_298(iParam0, 8))
	{
		if (func_622(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	request_script_with_name_hash(iVar1);
	if (has_script_with_name_hash_loaded(iVar1))
	{
		if (get_number_of_free_stacks_of_this_size(func_758(iParam0)) <= 0)
		{
			return false;
		}
		if (func_298(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_480(iParam0);
			Var3.f_1 = { func_639(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_600(iParam0) };
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var3, 10, func_758(iParam0));
		}
		else if (func_298(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_759(iVar1);
			Var13.f_2 = Global_1198046->f_231.f_1066[iParam0]->f_14;
			Var13.f_3 = Global_1198046->f_231.f_1066[iParam0]->f_15;
			Var13.f_4 = Global_1198046->f_231.f_1066[iParam0]->f_16;
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var13, 5, func_758(iParam0));
		}
		else
		{
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &uVar18, 1, func_758(iParam0));
		}
		func_617(iParam0, iParam1, iVar2);
		set_script_with_name_hash_as_no_longer_needed(iVar1);
		func_760(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_616(int iParam0, int iParam1)
{
	return _does_thread_exist((*Global_1210161->f_1[iParam0])[iParam1]->f_2);
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1]->f_2 = iParam2;
}

void func_618(int iParam0, int iParam1, int iParam2)
{
	func_603(iParam0, func_757(iParam1, iParam2));
}

bool func_619(int iParam0, int iParam1)
{
	if (!func_298(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_638(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_167(Global_35, func_639(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_620(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_1;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	if (!_0xa4a4359320345b34(iParam2))
	{
		(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = 0;
		return;
	}
	(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = iParam2;
}

int func_622(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_1;
}

void func_623(int iParam0, int iParam1)
{
	func_629(iParam0, iParam1);
	func_474(iParam0, iParam1);
}

void func_624(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_1 = iParam2;
}

int func_625(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_2;
}

int func_626(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_2;
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	if (func_620(iParam0, iParam1) != 0 && !func_761(func_620(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_474(iParam0, iParam1))
	{
		Var1 = { func_639(iParam0, iParam1) };
		Var1.f_4 = to_float(func_625(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_762(iParam0);
		Var10 = { func_600(iParam0) };
		iVar12 = 0;
		if (func_36(Var10))
		{
			iVar12 = func_416(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_621(iParam0, iParam1, _0x183c0b6cfeffcae4(&Var1));
	}
}

bool func_628(int iParam0, int iParam1)
{
	if (func_626(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_763(iParam0, iParam1);
	func_627(iParam0, iParam1, 1);
	iVar0 = func_620(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_764(iVar0))
	{
		return false;
	}
	func_765(iParam0, iParam1, _0x351d71b8b72b858b(func_620(iParam0, iParam1)));
	return true;
}

void func_629(int iParam0, int iParam1)
{
	iVar0 = func_626(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_0xf6a8a652a6b186cd(iVar0))
	{
		func_765(iParam0, iParam1, 0);
		return;
	}
	_0xfdfecc6ee4491e11(iVar0);
	func_765(iParam0, iParam1, 0);
	func_474(iParam0, iParam1);
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1] = iParam2;
}

int func_631(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_3;
}

int func_632(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_4;
}

bool func_633(int iParam0)
{
	return &Global_1902818 > iParam0;
}

bool func_634(int iParam0, int iParam1, int iParam2)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_766(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_635(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_767(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_636(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_461(iParam0, iVar0, 2))
		{
		}
		else if (!func_461(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_637(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *Global_1198046->f_231[iParam0] };
	Var0.f_1 = 0;
	*Global_1198046->f_231[iParam0] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046->f_13[iVar31] = (&Global_1198046->f_13[iVar31] - 1);
	Global_1198046->f_8[iVar30] = (&Global_1198046->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046->f_18[iVar30] = (&Global_1198046->f_18[iVar30] - 1);
	}
	if (func_768(iParam0))
	{
		Global_1198046->f_23[iVar30] = (&Global_1198046->f_23[iVar30] - 1);
	}
	return 1;
}

int func_638(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_2;
}

Vector3 func_639(int iParam0, int iParam1)
{
	return func_769(&(Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]));
}

var func_640(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_770() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_771());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_771());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_771());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_772(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_773(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_774(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_775(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

void func_641(int iParam0)
{
	Global_1198046->f_2505[iParam0]->f_4 = 0;
	Global_1198046->f_2505[iParam0]->f_5 = 255;
}

bool func_642(struct<2> Param0)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (iVar0 == 255)
	{
		return false;
	}
	if (!func_36((*Global_1056141)[iVar0]->f_2))
	{
		return false;
	}
	if (!func_256(Global_1248240->f_9299, (*Global_1056141)[iVar0]->f_2))
	{
		if (!func_55((*Global_1056141)[iVar0]->f_2))
		{
			return false;
		}
		Global_1248240->f_9299 = { (*Global_1056141)[iVar0]->f_2 };
	}
	return func_211(Param0, Global_1248240->f_9299, 1, 0);
}

void func_643()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (iVar0 == 255)
	{
		return;
	}
	func_173(_create_var_string(10, "GFH_HELP_POSSE_LEADER_CANCELLED", func_714(get_player_name(iVar0), -963477619)), 10000, 0, 0, 0, 1);
}

bool func_644(int iParam0, int iParam1)
{
	return func_64(iParam0, 1024, iParam1);
}

int func_645(int iParam0)
{
	if (func_64(iParam0, 32, 255))
	{
		return player_id();
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if ((network_is_player_active(iVar1) && _0x81fb74c83c2ed69f(iVar1)) && func_64(iParam0, 32, iVar0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 255;
}

bool func_646(var uParam0)
{
	return false;
}

float func_647()
{
	return Global_1146212->f_2169[84]->f_201;
}

bool func_648(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901947->f_308.f_164;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901947->f_308.f_164 + 50f);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1109804->f_5729 == 0 || (Global_1296859->f_21 - Global_1109804->f_5729) > Global_1109804->f_5729.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

var func_649()
{
	return func_776(func_96(-1136577243));
}

bool func_650(int iParam0, int iParam1)
{
	return func_62((*Global_1237665)[iParam0]->f_25, iParam1);
}

bool func_651(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

void func_652(int iParam0)
{
	if (func_777(Global_1272030[iParam0]))
	{
		return;
	}
	func_778(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_753(&Var2, iVar0, iVar1, -1, 255);
	func_779((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_96(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_96(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_96(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_96(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

int func_653(int iParam0, int iParam1, bool bParam2)
{
	if (!func_120(iParam0))
	{
		return 0;
	}
	iVar0 = func_780(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_539(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_411(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_654(struct<2> Param0)
{
	if (func_251(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_251(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_251(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_658(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_655(struct<2> Param0, int iParam2)
{
	iVar0 = func_430(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_781(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_589(iVar0, iParam2);
	return iParam2;
}

bool func_656(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_657(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	iVar0 = func_430(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_782(Param0, func_255(0), iParam2))
	{
		func_254(func_255(0), 3);
		func_254(func_255(iVar0), 4);
		return 0;
	}
	func_589(iVar0, 0);
	func_254(func_255(0), 3);
	func_254(func_255(1), 4);
	return 1;
}

bool func_658(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_580(Param0, &vVar0);
	if (func_783(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_659(var uParam0, bool bParam1, int iParam2)
{
	func_784(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_433(func_263(uParam0->f_1));
	}
	else
	{
		func_434();
	}
}

bool func_660(struct<2> Param0)
{
	return func_245(Param0) == 0;
}

int func_661(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_256(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_662(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (!func_660(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_360(Param0);
	}
	func_254(Param0, 1);
	bParam2 = bParam2;
}

struct<2> func_663(int iParam0)
{
	if (!func_785(iParam0))
	{
		return func_210();
	}
	return Global_1107216->f_33[iParam0]->f_3.f_5;
}

void func_664(int iParam0)
{
	iVar0 = player_id();
	iVar1 = func_531(iVar0);
	if (!func_532(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_693(iParam0, 7);
		func_693(iParam0, 8);
	}
	Var2 = { func_786(iVar1) };
	switch (func_787(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_691(iVar0, iVar1, 8) && func_535(iVar1, 1))
				{
					func_788(Var2.f_5);
					func_789(iVar1, 8);
				}
				if (func_108(Var2.f_5))
				{
					func_789(iVar1, 2);
					func_693(iVar1, 5);
				}
				else if (func_109(Var2.f_5))
				{
					func_789(iVar1, 1);
					func_693(iVar1, 6);
				}
				else
				{
					func_790(Var2);
					func_789(iVar1, 4);
					func_693(iVar1, 3);
				}
			}
			else
			{
				func_693(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1109804->f_19)
			{
				if (func_535(iVar1, 4))
				{
				}
				else
				{
					func_791();
				}
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			else
			{
				func_791();
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			break;
	}
}

void func_665(int iParam0)
{
	iVar0 = player_id();
	iVar1 = func_531(iVar0);
	if (!func_532(iVar1))
	{
		return;
	}
	Var2 = { func_786(iParam0) };
	switch (func_787(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_691(iVar0, iParam0, 8) && func_535(iParam0, 1))
				{
					func_788(Var2.f_5);
					func_789(iParam0, 8);
				}
				if (func_108(Var2.f_5))
				{
					func_789(iParam0, 2);
					func_693(iParam0, 5);
				}
				else if (func_109(Var2.f_5))
				{
					func_789(iParam0, 1);
					func_693(iParam0, 6);
				}
				else
				{
					func_790(Var2);
					func_789(iParam0, 4);
					func_693(iParam0, 3);
				}
			}
			else
			{
				func_693(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1109804->f_19)
			{
				if (func_535(iVar1, 4))
				{
				}
				else
				{
					func_791();
				}
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			else
			{
				func_791();
				func_533(iVar1);
				func_792(1);
				func_792(0);
			}
			break;
	}
}

void func_666(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0 || iParam2 == 0)
	{
		return;
	}
	if (get_relationship_between_groups(iParam1, iParam2) != iParam0)
	{
		set_relationship_between_groups(iParam0, iParam1, iParam2);
	}
	if (!bParam3 && get_relationship_between_groups(iParam2, iParam1) != iParam0)
	{
		set_relationship_between_groups(iParam0, iParam2, iParam1);
	}
}

int func_667(int iParam0, int iParam1)
{
	if (!func_507(iParam1))
	{
		return 623901053;
	}
	return &((*Global_1248240)[iParam0]->f_560[iParam1]);
}

struct<33> func_668(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_783(4, iParam0, &Var0))
	{
	}
	return Var0;
}

int func_669(int iParam0)
{
	if (!func_670(&uVar0))
	{
		return -1;
	}
	if (!func_671(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_671(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_793(&uVar0);
}

bool func_670(var uParam0)
{
	uVar5 = Global_1071686->f_28448[31]->f_3;
	if (!_0x7907969497ea92f5(uVar5))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar5))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = uVar5;
	return true;
}

bool func_671(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -323664079;
		case 1:
			return 304473406;
		case 2:
			return 1428568385;
		case 3:
			return -710377432;
		default:
			break;
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -893766361;
		case 1:
			return -2027639951;
		default:
			break;
	}
	return 0;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 259767909;
		case 0:
			return 2063993476;
		case 1:
			return 1007867116;
		case 3:
			return -986826753;
		case 4:
			return 1461677252;
		default:
			break;
	}
	return 0;
}

int func_675(var uParam0)
{
	return func_794(uParam0, 31, 1);
}

var func_676(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uVar0 = _datafile_get_num_nodes(uParam0);
	return uVar0;
}

int func_677(var uParam0)
{
	return func_794(uParam0, 25, 1);
}

bool func_678(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar6 = func_669(iParam1);
	if (iVar6 == -1)
	{
		return false;
	}
	if (!func_670(&Var0))
	{
		return false;
	}
	if (!func_671(&Var0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 7, func_672(iVar6), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 9, iParam1, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	if (!func_671(&Var0, 15, 0, 0, 1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_3 = func_795(&Var0);
	uParam0->f_2 = func_796(&Var0);
	uParam0->f_1 = func_797(&Var0);
	Var0.f_1 = uVar5;
	if (!func_671(&Var0, 19, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 20, func_673(iParam4), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 21, func_674(1), 0, 1))
	{
		return false;
	}
	if (!func_671(&Var0, 22, iParam2, 0, 1))
	{
		return false;
	}
	uParam0->f_5 = func_675(&Var0);
	uVar5 = Var0.f_1;
	if (!func_798(uParam0, iParam3))
	{
		return false;
	}
	return func_799(iVar6, uParam0);
}

int func_679(int iParam0, float fParam1, bool bParam2)
{
	vVar0 = { func_166(iParam0) };
	iVar3 = Global_1237665[iParam0];
	iVar4 = (*Global_1237665)[iParam0]->f_6;
	iVar5 = func_324(iVar3, iVar4);
	if (!func_385(vVar0) && func_167(Global_35, vVar0) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && iVar5 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar5 - 1))
		{
			if (!func_385(*(*Global_1248240)[iParam0]->f_603[iVar6]) && func_167(Global_35, *(*Global_1248240)[iParam0]->f_603[iVar6]) < fParam1)
			{
				return 1;
			}
			iVar6++;
		}
	}
	return 0;
}

int func_680(int iParam0, float fParam1)
{
	if (func_40(iParam0, 1048576))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_385(*(*(*Global_1248240)[iParam0])[iVar0]) && func_167(Global_35, *(*(*Global_1248240)[iParam0])[iVar0]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_681(int iParam0, float fParam1)
{
	iVar0 = (*Global_1237665)[iParam0]->f_16;
	if (iVar0 != 255 && network_is_player_active(iVar0))
	{
		iVar1 = get_player_ped(iVar0);
		if (does_entity_exist(iVar1) && func_167(Global_35, get_entity_coords(iVar1, false, false)) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_682(int iParam0, float fParam1)
{
	if (!func_385((*Global_1237665)[iParam0]->f_18) && func_167(Global_35, (*Global_1237665)[iParam0]->f_18) < fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_683(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_36(*Global_1051213) && !func_256(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_275(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_800(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_26())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

bool func_684()
{
	if (Global_1248240->f_9297 != -1)
	{
		return true;
	}
	return false;
}

bool func_685(int iParam0)
{
	return (&Global_1248240->f_8880[iParam0] == -1 && Global_1248240->f_8880[iParam0]->f_1 == -1);
}

bool func_686(int iParam0)
{
	return Global_1248240->f_8880[iParam0]->f_1 != -1;
}

void func_687(char* sParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_801(sParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051252->f_80[Global_1051252->f_80.f_101], sParam0, 64);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_8 = get_hash_key(sParam0);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_9 = iParam1;
	Global_1051252->f_80.f_101++;
	Global_1051252->f_45.f_1 = 1;
}

int func_688(int iParam0)
{
	return Global_1128574[iParam0];
}

int func_689(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (func_532(iParam1))
	{
		if (iVar0 == func_802(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_802(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_690(int iParam0)
{
	if (!func_532(iParam0))
	{
		return;
	}
	(*Global_1128574)[network_player_id_to_int()] = iParam0;
}

bool func_691(int iParam0, int iParam1, int iParam2)
{
	return ((*Global_1128574)[iParam0]->f_1[iParam1] && iParam2) != 0;
}

void func_692()
{
	if (!func_803())
	{
		return;
	}
	if (!func_36(*Global_1051213))
	{
		return;
	}
	func_588(Global_1051213);
}

void func_693(int iParam0, int iParam1)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_1[iParam0] = (&(*Global_1128574)[iVar0]->f_1[iParam0] - ((*Global_1128574)[iVar0]->f_1[iParam0] && iParam1));
}

bool func_694(int iParam0)
{
	return func_546(Global_1130592, iParam0, 1);
}

int func_695(int iParam0)
{
	return &(Global_1130592->f_2[iParam0]);
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901947->f_308.f_39;
		case 0:
			return Global_1901947->f_308.f_40;
		default:
			break;
	}
	return 0;
}

void func_697(int iParam0)
{
	func_804(iParam0);
	func_805(iParam0, get_game_timer());
}

int func_698(int iParam0)
{
	return Global_1116202[iParam0];
}

int func_699(int iParam0)
{
	return func_806(iParam0);
}

int func_700(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_353(iParam0, iParam2, iParam3);
	if (iVar0 != -1)
	{
		_copy_memory(&(Global_1248240->f_8903.f_101), uParam1, 3);
	}
	return iVar0;
}

void func_701(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_702(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_807(iParam0);
	}
}

bool func_703()
{
	return func_62(Global_1572887->f_7, 1);
}

bool func_704()
{
	return (Global_1572887->f_106.f_75 >= 14 && Global_1572887->f_106.f_75 < 21);
}

var func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_706(var uParam0, int iParam1)
{
	return func_390(*uParam0, iParam1);
}

int func_707(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_708(var uParam0, int iParam1)
{
	if (func_706(uParam0, iParam1))
	{
		return;
	}
	func_539(uParam0, iParam1);
}

void func_709(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_710(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_775(iParam0))
		{
			func_808(iParam0);
		}
	}
}

void func_711(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_712(var uParam0, int iParam1)
{
	func_411(uParam0, iParam1);
}

int func_713(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_108(func_255(0)) && func_262(func_255(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_809(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_810(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_390(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_811(iParam0, 1);
	if (!bVar0)
	{
		if (func_812(iParam0, bParam1))
		{
			return func_810(iParam0);
		}
		else if (func_813(iParam0, bParam1))
		{
			if (func_814(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_809(iParam0);
	}
	else if (func_812(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_815(func_581(func_255(0)), 1) == 395262693)
		{
			return func_810(iParam0);
		}
		else
		{
			return func_810(iParam0);
		}
	}
	else if (func_813(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_714(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_816(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_715(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 17, uParam1);
}

void func_716(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_717(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_817(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

bool func_718(struct<38> Param0, var uParam38)
{
	if (!_databinding_is_data_id_valid(Param0.f_37))
	{
		return _databinding_is_data_id_valid(Param0);
	}
	return _databinding_read_data_bool(Param0.f_37);
}

void func_719(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_818(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_550((Global_1940311->f_242.f_1186 - 1));
}

int func_720()
{
	iVar4 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_25);
	iVar5 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
		iVar2 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_719(&(Global_1940311->f_242.f_14[iVar3]));
	return iVar3;
}

void func_721(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_549(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_549(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_549(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_549(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_549(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_549(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_549(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_549(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_549(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_549(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_549(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_549(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_549(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_549(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_549(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_549(66), Param10.f_15);
}

char* func_722(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_816(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_723(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_724(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _show_notification(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_725(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_726(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _show_notification(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_727(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_728(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _0x3f9fddba79117c69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_729(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_730(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

var func_731(int iParam0, int iParam1, int iParam2)
{
	uVar0 = Global_1901947->f_166.f_35;
	if ((func_349(&Var1, iParam0) && func_377(&Var1, iParam1)) && func_519(&Var1, iParam2))
	{
		func_732(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_732(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_733(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_390((*Global_1138411)[iVar0][iParam0], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

int func_735(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_736(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_737(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_819(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_820("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_821(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_822(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_823(iVar1);
				return true;
			}
			iVar3++;
		}
		func_823(iVar1);
	}
	return false;
}

bool func_738(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_824(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_825(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_826(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_827(iParam0);
	iVar2 = func_826(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_739(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_736(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_819(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_828(iParam0, 0);
	}
	if (func_575(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_571(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_829(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_571(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_740(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_741(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_742()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_743(int iParam0)
{
	return func_830(iParam0) + 30;
}

void func_744(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

int func_745(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_581(Param0);
	}
	return -1;
}

var func_746(int iParam0, int iParam1)
{
	return func_640(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_747(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 45, 37, &uParam1);
}

bool func_748(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_595(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_749(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_831(uParam1, uParam0->f_3[iVar1]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_750(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = -1;
	Var33.f_1 = -1;
	if (func_36(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_36(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_385(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_832(func_416(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = get_num_reserved_mission_peds(1);
		iVar44 = get_num_reserved_mission_vehicles(1);
		iVar45 = get_num_reserved_mission_objects(1);
		iVar46 = _0x62be3ecc79fbd004(1);
	}
	else
	{
		_0x5e71e72a94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!&iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (get_max_num_network_peds() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (get_max_num_network_vehicles() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (get_max_num_network_objects() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (get_max_num_network_pickups() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1198046->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1198046->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1198046->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_753(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	_copy_memory(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = player_id();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			func_833(uParam0, iParam2);
			break;
		case 2:
			func_834(uParam0, iParam2);
			break;
		case 3:
			func_835(uParam0, iParam2);
			break;
		case 4:
			func_836(uParam0, iParam2);
			break;
		case 12:
			func_837(uParam0, iParam2);
			break;
		case 6:
			func_838(uParam0, iParam2, -1);
			break;
		case 7:
			func_839(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_840(uParam0, iParam2);
			break;
		case 11:
			func_841(uParam0, iParam2);
			break;
		case 9:
			func_842(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_843(uParam0, iParam2);
			break;
		case 8:
			func_844(uParam0, iParam2);
			break;
		case 13:
			func_845(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_846(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_847(uParam0, iParam2);
			break;
		case 16:
			func_848(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_849(uParam0, iParam2);
			break;
		case 21:
			func_850(uParam0, iParam2);
			break;
		case 28:
			func_851(uParam0, iParam2);
			break;
		case 25:
			func_852(uParam0, iParam2);
			break;
		case 24:
			func_853(uParam0, iParam2);
			break;
		case 22:
			func_854(uParam0, iParam2);
			break;
		case 23:
			func_855(uParam0, iParam2);
			break;
		case 29:
			func_856(uParam0, iParam2);
			break;
		case 26:
			func_857(uParam0, iParam2);
			break;
		case 30:
			func_858(uParam0, iParam2);
			break;
		case 27:
			func_859(uParam0, iParam2);
			break;
		case 32:
			func_860(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_861(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_862(uParam0, iParam2);
			break;
		case 17:
			func_863(uParam0, iParam2);
			break;
		case 18:
			func_864(uParam0, iParam2);
			break;
		case 19:
			func_865(uParam0, iParam2);
			break;
		case 20:
			func_866(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_867(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_754(var uParam0, var uParam1)
{
}

int func_755(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return Global_1198046->f_231[iParam0]->f_5.f_8;
}

int func_756(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_2;
}

int func_757(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_758(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_1;
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1881122909:
			return 1;
		case 1746254613:
			return 2;
		case -210940392:
			return 3;
		case -337883659:
			return 4;
		case -2127851115:
			return 6;
		case -1515832348:
			return 7;
		case -392050235:
			return 5;
		case -16753530:
			return 11;
		case -1210919694:
			return 8;
		case -1628357986:
			return 9;
		case -1054322328:
			return 10;
		case -1488065830:
			return 12;
		case 1903114091:
			return 13;
		case 1623440542:
			return 14;
		case -726533106:
			return 15;
		case 911021683:
			return 16;
		case 338631142:
			return 17;
		case -1896431036:
			return 18;
		case 1875318885:
			return 19;
		case 518160998:
			return 20;
		case 681896882:
			return 31;
		case 409019465:
			return 21;
		case -1877273045:
			return 28;
		case -510630761:
			return 24;
		case 1558203524:
			return 25;
		case -1347839684:
			return 22;
		case 569695338:
			return 23;
		case 617627179:
			return 29;
		case -721827460:
			return 26;
		case -502572877:
			return 30;
		case 1541283230:
			return 27;
		case 1773252799:
			return 32;
		case -1209093440:
			return 33;
		case 901959776:
			return 34;
		default:
			break;
	}
	return 0;
}

void func_760(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_868(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051252->f_80[Global_1051252->f_80.f_101], "HashOnlyScript", 64);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_8 = iParam0;
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_9 = iParam1;
	Global_1051252->f_80.f_101++;
	Global_1051252->f_45.f_1 = 1;
}

bool func_761(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return true;
	}
	if (_0xb33a604345f58202(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_762(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_3;
}

void func_763(int iParam0, int iParam1)
{
	if (func_620(iParam0, iParam1) != 0)
	{
		if (func_761(func_620(iParam0, iParam1)))
		{
			func_629(iParam0, iParam1);
			func_474(iParam0, iParam1);
		}
	}
}

bool func_764(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return false;
	}
	iVar0 = _0xb33a604345f58202(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_765(int iParam0, int iParam1, int iParam2)
{
	if (!_0xf6a8a652a6b186cd(iParam2))
	{
		(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = 0;
		return;
	}
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = iParam2;
}

bool func_766(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_461(iParam0, iParam2, func_757(iParam1, iParam3));
}

bool func_767(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_766(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_768(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[1] + 3))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35))
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35) + 16)
	{
		return false;
	}
	return true;
}

Vector3 func_769(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_770()
{
	return Global_1051252->f_12;
}

char* func_771()
{
	return "unnamed";
}

int func_772(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_773(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_361(36, iParam0);
}

int func_774(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

bool func_775(int iParam0)
{
	if (func_869(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_870(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

var func_776(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

bool func_777(int iParam0)
{
	return iParam0 != 0;
}

int func_778(int iParam0, var uParam1, var uParam2)
{
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*uParam1 = iVar1;
		func_753(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_779(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_780(int iParam0)
{
	if (!func_120(iParam0))
	{
		return 0;
	}
	if (!func_566(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_781(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		func_588(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_500(Param0, 0, 1, -1);
}

bool func_782(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_36(Param0))
	{
		return false;
	}
	if (!func_36(Param2))
	{
		return true;
	}
	iVar0 = func_262(Param0);
	iVar1 = func_262(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, int iParam1, var uParam2)
{
	if (!func_871(iParam0))
	{
		return false;
	}
	if (func_872(iParam0, iParam1, &uVar0))
	{
		func_873(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_784(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

bool func_785(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return true;
}

struct<13> func_786(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

int func_787(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_874(iParam0);
}

int func_788(struct<2> Param0)
{
	if (func_803())
	{
		return 0;
	}
	if (!func_36(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_789(int iParam0, int iParam1)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_1[iParam0] = ((*Global_1128574)[iVar0]->f_1[iParam0] || iParam1);
}

void func_790(int iParam0)
{
	func_875(iParam0);
}

void func_791()
{
	if (!network_is_host())
	{
		return;
	}
	iVar0 = _0x51f33dbc1a41cbfd();
	iVar1 |= 8;
	if (_0x277865a734918ae6())
	{
		_0xbb51299166b844f3();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		_0x78335e12db0bf961(iVar1);
	}
}

void func_792(int iParam0)
{
	func_876(iParam0);
	func_805(iParam0, 0);
}

int func_793(var uParam0)
{
	return func_877(func_794(uParam0, 34, 1));
}

int func_794(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_795(var uParam0)
{
	return func_794(uParam0, 26, 1);
}

int func_796(var uParam0)
{
	return func_878(func_794(uParam0, 33, 1));
}

int func_797(var uParam0)
{
	return func_879(func_794(uParam0, 32, 1));
}

bool func_798(var uParam0, int iParam1)
{
	iVar5 = func_669(*uParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_670(&uVar0))
	{
		return false;
	}
	if (!func_671(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 7, func_672(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 9, *uParam0, 0, 1))
	{
		return false;
	}
	if (!func_671(&uVar0, 17, 0, 0, 0))
	{
		return false;
	}
	if (!func_671(&uVar0, 18, func_880(iParam1), 0, 1))
	{
		return false;
	}
	uParam0->f_4 = func_881(&uVar0);
	return true;
}

int func_799(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_882(uParam1);
		case 1:
			return func_883(uParam1);
		case 3:
			return func_884(uParam1);
		default:
			break;
	}
	return 0;
}

bool func_800(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

int func_801(char* sParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = get_hash_key(sParam0);
	iVar0 = 0;
	while (iVar0 <= (Global_1051252->f_80.f_101 - 1))
	{
		if (Global_1051252->f_80[iVar0]->f_8 == iVar1 && Global_1051252->f_80[iVar0]->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_802(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

bool func_803()
{
	return func_36(*Global_1051213);
}

void func_804(int iParam0)
{
	if (func_885(Global_1130592, iParam0, 1))
	{
	}
}

void func_805(int iParam0, int iParam1)
{
	Global_1130592->f_2[iParam0] = iParam1;
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case -86207568:
			return 515385649;
		case 1896585330:
			return 391853669;
		case 769966168:
			return -1520322625;
		case 1087736289:
			return 464168739;
		case -2032510574:
			return 1683882639;
		case 860783980:
			return -567552001;
		case -953689515:
			return 1757204629;
		case 1194107589:
			return 1685495859;
		case -233841303:
			return -950321673;
		case 485557528:
			return 664333876;
		case -896565033:
			return -583455445;
		case -979677797:
			return -95879657;
		case 1184730938:
			return 2060758004;
		default:
			break;
	}
	return 0;
}

void func_807(int iParam0)
{
	if (!func_886(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

void func_808(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_887(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

int func_809(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_810(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_26())
	{
		return 636925055;
	}
	return -963477619;
}

int func_811(int iParam0, bool bParam1)
{
	iVar0 = floor(func_888(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_812(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_813(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_889(iParam0))
	{
		return true;
	}
	return !func_812(iParam0, 0);
}

bool func_814(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_869(iParam0))
	{
		return false;
	}
	if (func_889(iParam0))
	{
		return false;
	}
	if (func_890(iParam0))
	{
		return true;
	}
	return func_891(iParam0);
}

int func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_816(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_817(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_818(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_549(91));
	if (func_892(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

int func_819(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_893(iParam0, 1399091007))
	{
		func_894(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_820(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_571(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_821(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_822(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_823(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_824(int iParam0)
{
	if (!func_574(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_826(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_827(int iParam0)
{
	iVar0 = func_824(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_828(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_895(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_897(&Var0, func_896(0));
	}
	if (!func_898(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_823(iVar14);
	return uVar15;
}

struct<4> func_829(int iParam0, bool bParam1)
{
	Var0 = { func_899(iParam0, bParam1, 0) };
	return func_573(iParam0, Var0, Var0.f_4, bParam1);
}

int func_830(int iParam0)
{
	return iParam0 * 31;
}

bool func_831(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_256(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_832(int iParam0, var uParam1)
{
	Var0 = { func_900(iParam0) };
	if (!func_36(Var0))
	{
		return false;
	}
	func_783(Var0, iParam0, uParam1);
	return true;
}

void func_833(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_901(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1808627090;
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = -1563711584;
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = -717510681;
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = -2044065371;
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = -1209537248;
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = 1714342319;
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = 1269971654;
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = 720927063;
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = 1499128142;
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = -1539691586;
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_834(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_835(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			func_904(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_836(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_902(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_837(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_838(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_905(uParam0, 0);
			func_905(uParam0, 1);
			func_905(uParam0, 4);
			func_905(uParam0, 5);
			break;
		case 1:
			func_905(uParam0, 2);
			func_905(uParam0, 3);
			func_905(uParam0, 6);
			func_905(uParam0, 7);
			func_906(uParam0, 2);
			break;
		default:
			func_902(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_904(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_904(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_904(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_904(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_904(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_904(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_904(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_904(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_904(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_904(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_904(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_904(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_839(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 8);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 7);
			func_904(uParam0, 8);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			func_904(uParam0, 6);
			func_904(uParam0, 7);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			func_904(uParam0, 6);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			func_904(uParam0, 5);
			func_904(uParam0, 9);
			func_904(uParam0, 10);
			func_904(uParam0, 11);
			func_907(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_840(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_903(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_902(uParam0);
	func_906(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_842(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_908(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_908(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_908(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_908(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_908(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_843(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_903(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_903(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_903(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_903(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_903(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_903(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_903(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_903(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_844(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_902(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_845(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_902(uParam0);
	func_906(uParam0, 1);
	func_906(uParam0, 4);
	func_906(uParam0, 8);
	func_906(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_570(func_387(iParam2)) };
			break;
	}
}

void func_846(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_909(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_909(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_909(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_909(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_847(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_903(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_848(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_910(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1056712278;
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = -1296614127;
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = -1652223315;
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = -1975325639;
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = 1979237285;
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = 1740187430;
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = -779552060;
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = -1018405301;
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = -1290420770;
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = -1671655316;
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = 1135642784;
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = -1924228133;
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = -1094623305;
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = -782990107;
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = 677294836;
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_849(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_911(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_911(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_911(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_850(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = 1417207314;
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = 1985854092;
	}
	switch (iParam1)
	{
		case 0:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_912(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_912(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_912(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_851(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_852(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_902(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_904(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_904(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_904(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_904(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_904(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_853(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_902(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_904(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_904(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_904(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_904(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_904(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_904(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_904(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_904(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_904(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_904(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_854(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_913(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_913(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			Jump @1337; //curOff = 926
			func_913(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			Jump @1337; //curOff = 984
			func_913(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			Jump @1337; //curOff = 1042
			func_913(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			Jump @1337; //curOff = 1100
			func_913(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			Jump @1337; //curOff = 1159
			func_913(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			Jump @1337; //curOff = 1217
			func_913(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			Jump @1337; //curOff = 1276
			func_913(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
		}

void func_855(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_914(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_914(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_856(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_904(uParam0, 3);
			func_904(uParam0, 4);
			func_904(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_857(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_915(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_915(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_858(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_904(uParam0, 2);
			func_904(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_904(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_904(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_859(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_916(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_916(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_860(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_917(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_861(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = 1985854092;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_918(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_862(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_902(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = -184283233;
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = 48904803;
		uParam0->f_20[1] = -2090512547;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_904(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_904(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_904(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_904(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_904(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_904(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_904(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_904(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_904(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_904(uParam0, 1);
			break;
	}
}

void func_863(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_903(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_903(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_903(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_903(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_903(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_903(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_903(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_865(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_902(uParam0);
	switch (iParam1)
	{
		case 0:
			func_903(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_903(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_903(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_903(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_904(uParam0, 0);
			func_904(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_866(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_919(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_919(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_919(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_867(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = -468635158;
			break;
		case 36:
			uParam0->f_8 = 1112069699;
			break;
		case 37:
			uParam0->f_8 = 661147828;
			break;
		case 38:
			uParam0->f_8 = 899082205;
			break;
		case 39:
			uParam0->f_8 = 987333815;
			break;
		case 40:
			uParam0->f_8 = -315961129;
			break;
		case 41:
			uParam0->f_8 = -139081918;
			break;
		case 42:
			uParam0->f_8 = 1604238189;
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_920(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_921(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_906(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_922(func_163(iVar0), iParam2);
		uParam0->f_15[0] = func_923(func_163(iVar0), iParam2);
		uParam0->f_5 = func_316(iVar0, iParam2);
		uParam0->f_11 = { func_322(iVar0, iParam2) };
	}
}

int func_868(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051252->f_80.f_101 - 1))
	{
		if (Global_1051252->f_80[iVar0]->f_8 == iParam0 && Global_1051252->f_80[iVar0]->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_869(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_870(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_808(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_887(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_871(int iParam0)
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

bool func_872(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_924(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_873(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_925(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_926(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_927(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_928(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_929(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_930(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

var func_874(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_2;
}

void func_875(int iParam0)
{
	if (!func_931(iParam0))
	{
		return;
	}
	func_932(iParam0);
}

void func_876(int iParam0)
{
	if (func_933(Global_1130592, iParam0, 1))
	{
	}
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case -323664079:
			return 0;
		case 304473406:
			return 1;
		case 1428568385:
			return 2;
		case -710377432:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 146345170:
			return 0;
		case -920810745:
			return 1;
		case 1880310113:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 472588819:
			return 0;
		case 1830115867:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -455129387;
		case 1:
			return 2009994498;
		default:
			break;
	}
	return 0;
}

int func_881(var uParam0)
{
	return func_794(uParam0, 27, 1);
}

int func_882(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_934(uParam0->f_2) == 0)
	{
		return 0;
	}
	if (uParam0->f_3 == 0)
	{
		return 0;
	}
	if (uParam0->f_5 == 0)
	{
		return 0;
	}
	return 1;
}

int func_883(var uParam0)
{
	return 1;
}

int func_884(var uParam0)
{
	return 1;
}

bool func_885(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_886(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_887(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

float func_888(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_889(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_890(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_891(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_808(iParam0);
		return false;
	}
	if (func_890(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_935(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_892(int iParam0)
{
	return iParam0 != 0;
}

int func_893(int iParam0, int iParam1)
{
	if (!func_574(iParam0, 0))
	{
		return func_937(func_936(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_894(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_895(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_896(bool bParam0)
{
	iVar0 = func_571(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_573(923904168, func_406(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_573(923904168, func_406(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_573(923904168, func_406(bParam0), -740156546, 0);
}

void func_897(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_898(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_571(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_899(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_406(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_736(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_573(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_896(bParam1) };
			if (bParam2 && func_938(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_939(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_939(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_940(iParam0, &Var6, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_941(bParam1) };
			switch (func_824(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
		case -1962314949:
			if (func_942(iParam0, -1823706425))
			{
				Var0 = { func_573(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_942(iParam0, -1483207246))
			{
				Var0 = { func_573(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_573(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_942(iParam0, -1653629781))
			{
				Var0 = { func_573(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_943(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_942(iParam0, -1653629781))
			{
				Var0 = { func_573(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<2> func_900(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_359(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_359(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_210();
}

void func_901(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_944(uParam0);
			break;
		case 1:
			func_944(uParam0);
			break;
		case 2:
			func_944(uParam0);
			break;
		case 3:
			func_945(uParam0);
			break;
		case 4:
			func_944(uParam0);
			break;
		case 5:
			func_944(uParam0);
			break;
		case 6:
			func_945(uParam0);
			break;
		case 7:
			func_945(uParam0);
			break;
		case 8:
			func_945(uParam0);
			break;
		case 9:
			func_944(uParam0);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_902(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_905(uParam0, iVar0);
		iVar0++;
	}
}

void func_903(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_904(uParam0, iVar0);
		iVar0++;
	}
}

void func_904(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_905(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_906(var uParam0, int iParam1)
{
	func_539(&(uParam0->f_25), iParam1);
}

void func_907(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_905(uParam0, 0);
			break;
		case 1:
		case 2:
			func_905(uParam0, 1);
			func_905(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_905(uParam0, 0);
			func_905(uParam0, 2);
			break;
		case 8:
			func_905(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_905(uParam0, 1);
			break;
		default:
			func_902(uParam0);
			break;
	}
}

void func_908(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_946(uParam0);
			break;
		case 1:
			func_947(uParam0);
			break;
		case 2:
			func_948(uParam0);
			break;
		case 3:
			func_949(uParam0);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_909(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_950(uParam0);
			break;
		case 1:
		case 2:
			func_951(uParam0);
			break;
		case 3:
		case 4:
			func_952(uParam0);
			break;
		default:
			func_902(uParam0);
			break;
	}
	func_903(uParam0);
}

void func_910(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_905(uParam0, 0);
			func_905(uParam0, 2);
			break;
		case 1:
			func_905(uParam0, 1);
			func_905(uParam0, 3);
			break;
		default:
			func_903(uParam0);
			func_902(uParam0);
			break;
	}
}

void func_911(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_904(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 0);
			break;
		default:
			func_904(uParam0, 0);
			break;
	}
	func_902(uParam0);
}

void func_912(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_904(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_904(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_904(uParam0, 2);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_913(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_904(uParam0, 0);
			func_905(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 1);
			func_905(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 2);
			func_905(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_904(uParam0, 3);
			func_905(uParam0, 0);
			break;
	}
}

void func_914(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_904(uParam0, 0);
			func_905(uParam0, 0);
			break;
		case 2:
			func_904(uParam0, 1);
			func_905(uParam0, 0);
			break;
		case 3:
		case 4:
			func_904(uParam0, 2);
			func_905(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			func_905(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_904(uParam0, 4);
			func_905(uParam0, 1);
			break;
	}
}

void func_915(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_916(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_904(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			break;
		default:
			func_903(uParam0);
			break;
	}
	func_902(uParam0);
}

void func_917(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_905(uParam0, 1);
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			func_904(uParam0, 2);
			break;
		default:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
	}
}

void func_918(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_905(uParam0, 1);
			func_904(uParam0, 0);
			func_904(uParam0, 1);
			break;
		default:
			func_905(uParam0, 0);
			func_904(uParam0, 0);
			break;
	}
}

void func_919(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_902(uParam0);
			func_903(uParam0);
			break;
		default:
			func_902(uParam0);
			func_903(uParam0);
			break;
	}
}

var func_920(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_921(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

var func_922(int iParam0, int iParam1)
{
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_923(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_349(&Var1, iParam0) && func_377(&Var1, iParam1))
	{
		func_351(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_924(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_925(int iParam0, var uParam1)
{
	if (func_953(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_928(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_931(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

void func_932(int iParam0)
{
	func_588(&((*Global_1118808)[iParam0]->f_16));
}

bool func_933(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 146345170;
		case 1:
			return -920810745;
		case 2:
			return 1880310113;
		default:
			break;
	}
	return 0;
}

void func_935(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_954(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_808(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_935(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_955(&Var6, uVar4);
		}
	}
}

int func_936(int iParam0)
{
	return iParam0;
}

int func_937(int iParam0, int iParam1)
{
	if (!func_956(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_938(int iParam0, bool bParam1)
{
	if (func_824(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_957();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_939(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_407(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_940(int iParam0, var uParam1, int iParam2)
{
	if (func_958(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_941(bool bParam0)
{
	iVar0 = func_571(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_573(271701509, func_406(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_573(271701509, func_406(bParam0), 12999093, 0);
}

bool func_942(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_824(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_959(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_943(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_960(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_944(var uParam0)
{
	func_904(uParam0, 0);
	func_904(uParam0, 1);
	func_904(uParam0, 3);
	func_902(uParam0);
}

void func_945(var uParam0)
{
	func_903(uParam0);
	func_961(uParam0, 0, 3);
}

void func_946(var uParam0)
{
	func_904(uParam0, 0);
	func_905(uParam0, 0);
	func_905(uParam0, 1);
	func_905(uParam0, 2);
}

void func_947(var uParam0)
{
	func_904(uParam0, 1);
	func_902(uParam0);
}

void func_948(var uParam0)
{
	func_904(uParam0, 2);
	func_905(uParam0, 3);
}

void func_949(var uParam0)
{
	func_904(uParam0, 3);
	func_905(uParam0, 4);
}

void func_950(var uParam0)
{
	func_905(uParam0, 0);
	func_905(uParam0, 1);
}

void func_951(var uParam0)
{
	func_905(uParam0, 2);
	func_905(uParam0, 3);
}

void func_952(var uParam0)
{
	func_905(uParam0, 4);
	func_905(uParam0, 5);
}

bool func_953(int iParam0, var uParam1, var uParam2)
{
	if (func_962(iParam0, uParam1, &uVar0))
	{
		func_963(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_954(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_955(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_964(*uParam0);
}

bool func_956(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_957()
{
	return (func_965(-1185145312, 0, 0, 0) > 0 && func_966(func_573(889965687, func_406(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_958(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_571(0);
	*uParam1 = { func_573(iParam0, func_896(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_959(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_960(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_571(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_961(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_905(uParam0, iVar0);
		iVar0++;
	}
}

bool func_962(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_924(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_963(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

void func_964(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_965(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_967(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_571(bParam1), iParam0, iParam3);
}

int func_966(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_968(&uParam0, iParam4, bParam5, iParam6);
}

bool func_967(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_968(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_969(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_969(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_571(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_960(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

