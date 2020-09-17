void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	if (!func_2())
	{
		func_3();
	}
	while (!func_2())
	{
		func_4();
		wait(0);
	}
	while (!func_5())
	{
		wait(0);
	}
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_6(Global_1297999);
	func_7(Global_1298536);
	func_8(Global_1298166);
	func_9(0);
	func_10();
}

void func_1()
{
	iVar0 = get_game_timer();
	func_11(32, -1);
	func_12();
	if (func_13())
	{
		func_10();
	}
	func_14();
	func_15(0);
	set_this_script_can_be_paused(false);
}

bool func_2()
{
	if (func_16(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_17(iVar0, 1);
		iVar0++;
	}
}

void func_4()
{
	if (!network_is_session_active() || !func_18())
	{
		return;
	}
	switch (&Global_1298166)
	{
		case 0:
			if (&Global_1298378 != 1)
			{
				return;
			}
			if (network_is_player_active(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
			{
				func_19(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
			}
			else if (network_is_player_active(player_id()))
			{
				func_19(player_id());
			}
			else
			{
				return;
			}
			func_20();
			func_21(1);
			Global_1298166 = 1;
			break;
		case 1:
			if (!network_is_player_active(func_22()))
			{
				func_19(player_id());
			}
			func_23();
			func_24();
			func_25();
			func_26();
			func_27();
			func_28();
			func_29();
			func_30();
			func_31();
			func_32();
			func_33();
			break;
	}
}

bool func_5()
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_34(iVar0, Global_1298166->f_201.f_1[iVar0]))
		{
			bVar1 = true;
		}
		else
		{
			func_35(iVar0, Global_1298166->f_201.f_1[iVar0], 0);
		}
		iVar0++;
	}
	return !bVar1;
}

void func_6(var uParam0)
{
	*uParam0 = uVar0;
}

void func_7(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_36((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_8(var uParam0)
{
	Var0.f_3.f_2 = 32;
	Var0.f_3.f_2.f_1 = 255;
	Var0.f_3.f_2.f_1.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_132 = 32;
	Var0.f_3.f_132.f_1 = 255;
	Var0.f_3.f_132.f_1.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_200 = 255;
	Var0.f_201.f_1 = 2;
	Var0.f_201.f_1.f_1.f_1 = -1;
	Var0.f_201.f_1.f_1.f_2 = -1;
	Var0.f_201.f_1.f_1.f_4.f_1 = -1;
	Var0.f_201.f_1.f_1.f_4.f_2 = -1;
	*uParam0 = { Var0 };
}

void func_9(bool bParam0)
{
	func_37(37, 0);
	func_37(33, 0);
	if (bParam0)
	{
		if (_does_volume_exist(Global_1298378->f_44.f_2))
		{
			_delete_volume(Global_1298378->f_44.f_2);
		}
		if (_does_volume_exist(Global_1298378->f_44.f_3))
		{
			_delete_volume(Global_1298378->f_44.f_3);
		}
	}
}

void func_10()
{
	terminate_this_thread();
}

void func_11(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_10();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_12()
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
			func_10();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_10();
		}
		if (!network_is_game_in_progress())
		{
			func_10();
		}
		if (!network_is_signed_online())
		{
			func_10();
		}
		if (func_38() == 0)
		{
			if (func_39())
			{
				func_10();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_10();
	}
	return 1;
}

bool func_13()
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

bool func_14()
{
	bVar0 = false;
	func_6(Global_1297999);
	func_7(Global_1298536);
	func_8(Global_1298166);
	network_register_host_broadcast_variables(Global_1297999, 1, 45);
	if (!func_40(_0xba24095ea96dfe17(Global_1297999), 1, "g_mpMoonshineHostData"))
	{
		bVar0 = true;
	}
	network_register_player_broadcast_variables(Global_1298536, 2785, 46);
	if (!func_41(_0x690806bc83bc8ca2((*Global_1298536)[0]), 2785, "g_mpMoonshinePlayerData"))
	{
		bVar0 = true;
	}
	func_42();
	return !bVar0;
}

void func_15(bool bParam0)
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
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
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
			func_10();
			return;
		}
		wait(0);
	}
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(int iParam0, bool bParam1)
{
	if (func_43(iParam0))
	{
		if (is_bit_set(Global_1298166->f_201, iParam0))
		{
			clear_bit(&(Global_1298166->f_201), iParam0);
		}
		if (bParam1)
		{
			if (is_thread_active(&(Global_1298166->f_201.f_1[iParam0]), false))
			{
				terminate_thread(&(Global_1298166->f_201.f_1[iParam0]));
				Global_1298166->f_201.f_1[iParam0] = 0;
				Global_1298166->f_201.f_1[iParam0]->f_1 = -1;
				Global_1298166->f_201.f_1[iParam0]->f_3 = 0;
			}
		}
		return func_44(iParam0) == 0;
	}
	return false;
}

bool func_18()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

void func_19(int iParam0)
{
	Global_1298166->f_200 = iParam0;
}

void func_20()
{
	iVar0 = func_45();
	func_46(iVar0);
	if (func_47(6))
	{
		Global_1298378->f_44.f_1 = 1;
	}
	else
	{
		Global_1298378->f_44.f_1 = 0;
	}
	func_49(func_48());
}

void func_21(int iParam0)
{
	Global_1298166->f_1 = iParam0;
}

int func_22()
{
	return Global_1298166->f_200;
}

void func_23()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!func_50(player_id(), 1))
	{
		(*Global_1298536)[iVar0]->f_1 = -1;
		return;
	}
	if (!network_is_player_active(Global_1298166->f_200))
	{
		(*Global_1298536)[iVar0]->f_1 = -1;
		return;
	}
	iVar1 = (*Global_1298536)[Global_1298166->f_200]->f_5.f_12;
	if ((*Global_1298536)[iVar0]->f_1 == iVar1)
	{
		return;
	}
	(*Global_1298536)[iVar0]->f_1 = iVar1;
}

void func_24()
{
	if ((!func_18() || !network_is_session_active()) || !does_entity_exist(Global_34))
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = get_unique_int_for_player(iVar0);
	if (_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		iVar2 = iVar1;
		if (iVar2 != Global_1298536[&Global_1296859])
		{
			(*Global_1298536)[&Global_1296859] = iVar2;
		}
	}
	else if (_0x0f99f6436528a089(Global_1296859->f_15))
	{
		iVar3 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
		if (network_is_player_active(iVar3))
		{
			iVar4 = func_51(iVar3, 1);
			if (Global_1298536[&Global_1296859] != iVar4)
			{
				(*Global_1298536)[&Global_1296859] = iVar4;
			}
		}
	}
	else if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(iVar0)))
	{
		iVar5 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0));
		if (network_is_player_active(iVar5))
		{
			iVar6 = func_51(iVar5, 1);
			if (Global_1298536[&Global_1296859] != iVar6)
			{
				(*Global_1298536)[&Global_1296859] = iVar6;
			}
		}
	}
	func_52();
}

void func_25()
{
	if (!func_53(4096))
	{
		if (func_54(player_id(), 0, 1) == 0)
		{
			if (func_55())
			{
				func_49(7);
				func_56(4096);
			}
		}
	}
}

void func_26()
{
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
}

void func_27()
{
	if (Global_1298166->f_1 == 4)
	{
		func_62();
	}
	else if (Global_1298166->f_1 == 3)
	{
		func_63();
	}
	else
	{
		iVar1 = func_64(Global_1298166->f_200, 1);
		if (iVar1 == -1)
		{
			fVar0 = 1E+08f;
		}
		else
		{
			fVar0 = func_65(iVar1);
		}
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			func_66(fVar0);
		}
		else
		{
			iVar2 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
			func_67(iVar2, fVar0);
		}
	}
}

void func_28()
{
	if (func_50(player_id(), 1))
	{
		if ((func_44(1) == 0 && !func_68()) && !func_69())
		{
			if (func_53(262144))
			{
				func_70(262144);
			}
			func_71(128);
			func_71(2048);
			func_70(8192);
			func_70(33554432);
			func_72(1);
		}
	}
	else
	{
		switch (func_44(1))
		{
			case 3:
				if (!func_53(8192))
				{
					func_56(8192);
					func_56(262144);
				}
				break;
			case 0:
				if (func_53(262144))
				{
					if (!func_73())
					{
						func_49(7);
						func_70(262144);
					}
				}
				break;
		}
	}
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_75(iVar0, Global_1298166->f_201.f_1[iVar0], func_74(iVar0));
		iVar0++;
	}
}

void func_30()
{
	if (func_76() || func_50(player_id(), 1))
	{
		func_77(1);
		func_78();
	}
}

void func_31()
{
	if (func_50(&(Global_1296859->f_154[&Global_1296859]), 1))
	{
		_0x236905c700fdb54d();
	}
}

void func_32()
{
	func_79();
	func_80();
	func_81();
	func_82();
	func_83();
	func_84();
	func_85();
	iVar0 = func_86(&(Global_1296859->f_154[&Global_1296859]));
	switch (iVar0)
	{
		case 0:
			func_87();
			func_88();
			func_89();
			func_90();
			if (!func_91())
			{
				func_92(1);
			}
			else if (func_93(1065353216))
			{
				func_92(7);
			}
			else if (func_94())
			{
				func_95();
				func_92(4);
			}
			else
			{
				func_92(2);
			}
			break;
		case 1:
			if (func_91())
			{
				func_92(2);
			}
			break;
		case 2:
			if (!func_96(&Global_1296859, 256))
			{
				func_97(256);
			}
			if (func_98(Global_1296859->f_10) > 0)
			{
				func_95();
				func_92(4);
				return;
			}
			if (func_99(Global_1296859->f_10) > 0)
			{
				func_100();
			}
			if (func_101())
			{
				func_92(3);
			}
			break;
		case 3:
			if (func_102(&(Global_1298000->f_9)) != 3)
			{
				return;
			}
			if (func_98(Global_1296859->f_10) == 0)
			{
				func_92(2);
				return;
			}
			func_103();
			func_104(Global_1298000->f_9.f_1, 1);
			func_95();
			func_92(4);
			break;
		case 4:
			func_105();
			if (func_106(&(Global_1298000->f_1)) > Global_1298000->f_4)
			{
				if (func_93(1065353216) || func_107())
				{
					func_92(6);
				}
				else if (func_98(Global_1296859->f_10) == 0)
				{
				}
			}
			break;
		case 6:
			if (func_108(&(Global_1298000->f_9)))
			{
				return;
			}
			if (func_93(1065353216))
			{
				if (func_109())
				{
					func_92(5);
				}
				else
				{
					func_110(&(Global_1298000->f_1));
					func_92(7);
				}
			}
			else
			{
				func_111(&(Global_1298000->f_1));
				func_92(4);
			}
			break;
		case 5:
			func_105();
			if (func_96(&Global_1296859, 64))
			{
				func_110(&(Global_1298000->f_1));
				func_92(7);
			}
			break;
		case 7:
			if (!func_96(&Global_1296859, 524288))
			{
				func_97(524288);
			}
			if (func_96(&Global_1296859, 4))
			{
				func_112(4);
			}
			if (!func_96(&Global_1296859, 128))
			{
				func_113();
				func_114();
				func_97(128);
			}
			if (func_96(&Global_1296859, 8))
			{
				func_112(131072);
				func_112(128);
				func_97(2);
				func_92(8);
			}
			break;
		case 8:
			if (func_96(&Global_1296859, 8))
			{
				func_112(8);
			}
			if (func_96(&Global_1296859, 512))
			{
				func_115();
				func_92(9);
			}
			break;
		case 9:
			if (func_116())
			{
				func_92(2);
			}
			break;
		case 10:
			if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				if (!func_91())
				{
					func_92(1);
				}
				else if (func_93(1065353216))
				{
					func_92(7);
				}
				else if (func_94())
				{
					func_95();
					func_92(4);
				}
				else
				{
					func_92(2);
				}
			}
			break;
	}
}

void func_33()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if ((*Global_1298536)[iVar0]->f_1 == -1)
	{
		return;
	}
	_0xf45e46deecf7df6e(10208, 0, 0, -1, -1);
}

bool func_34(int iParam0, var uParam1)
{
	if (_does_thread_exist(*uParam1))
	{
		if (!_0x30bed53646c86d11(*uParam1))
		{
			_0x7de4643157ad646c(*uParam1);
		}
		return false;
	}
	else
	{
		*uParam1 = 0;
		uParam1->f_1 = -1;
	}
	func_17(iParam0, 1);
	return true;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_3 = iParam2;
}

void func_36(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = 10;
	Var0.f_5.f_12 = -1;
	Var0.f_5.f_13 = -1;
	Var0.f_19.f_1 = 11;
	Var0.f_42 = 8;
	Var0.f_53 = 8;
	Var0.f_53.f_1.f_1 = -1;
	Var0.f_53.f_1.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_37(int iParam0, bool bParam1)
{
	bVar0 = (func_117(iParam0) && !bParam1);
	if (!bVar0 && !func_118(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_119(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_118(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_118(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_118(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_119(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_120(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_121(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_122(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_123(iParam0);
	if (func_118(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_124(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_125(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_126(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_127(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

int func_38()
{
	return Global_1572887->f_13;
}

bool func_39()
{
	return Global_1051252->f_8;
}

bool func_40(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_41(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_42()
{
	iVar0 = func_45();
	func_46(iVar0);
	func_128();
}

bool func_43(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_44(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_1298166->f_201.f_1[iParam0]->f_3;
	}
	return 0;
}

int func_45()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return -1;
	}
	switch (func_130(Global_1298378->f_62, 405591388, 0, 1))
	{
		case 1580598647:
			return 0;
		case 786277441:
			return 1;
		case 1273401170:
			return 3;
		case -127194573:
			return 2;
		case 1480239309:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_46(int iParam0)
{
	(*Global_1298536)[player_id()]->f_5.f_12 = iParam0;
}

bool func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_132(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_48()
{
	if (func_129(&(Global_1298378->f_62)))
	{
		switch (func_133(Global_1298378->f_62, 897456793, 1, -1))
		{
			case -1647055373:
				return 0;
			case -660379727:
				return 2;
			case 729277565:
				return 1;
			case -1262899184:
				return 3;
			case -553448238:
				return 4;
			case 378713226:
				return 5;
			default:
				break;
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	iVar0 = network_player_id_to_int();
	iVar1 = func_134();
	iVar2 = func_135();
	iVar3 = func_136() + 1;
	iVar4 = func_137();
	if (!func_55())
	{
		iVar3 = 0;
	}
	func_138(3, iVar1, 1);
	func_138(1, iVar2, 1);
	func_138(0, iVar3, 1);
	if (iVar3 > 0)
	{
		func_138(5, 1, 1);
	}
	else
	{
		func_138(5, 0, 1);
	}
	if (iVar2 > 0)
	{
		func_138(4, 0, 1);
	}
	else if (iParam0 == 5)
	{
		func_138(4, 3, 1);
	}
	else if (iVar3 > 1)
	{
		func_138(4, 2, 1);
	}
	else
	{
		func_138(4, 1, 1);
	}
	if (iVar3 > 1)
	{
		func_138(2, 1, 1);
	}
	else
	{
		func_138(2, 0, 1);
	}
	if (iParam0 != 7)
	{
		(*Global_1298536)[iVar0]->f_5.f_11 = iParam0;
	}
	if (func_139())
	{
		func_138(6, 1, 1);
	}
	else
	{
		func_138(6, 0, 1);
	}
	func_138(9, iVar4, 1);
	func_140();
}

bool func_50(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_141((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

int func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0];
}

void func_52()
{
	if (Global_1298166->f_211 == 0)
	{
		Global_1298166->f_211 = _get_system_time();
		return;
	}
	else if ((_get_system_time() - Global_1298166->f_211) > 500)
	{
		Global_1298166->f_211 = 0;
	}
	else
	{
		return;
	}
	iVar0 = (*Global_1298536)[&Global_1296859]->f_3;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (network_is_player_active(iVar2) && iVar1 != &Global_1296859)
		{
			iVar3 = get_player_ped(iVar2);
			if (!does_entity_exist(iVar3) || is_entity_dead(iVar3))
			{
			}
			else if ((*Global_1298536)[iVar1]->f_3 == iVar0 && !func_50(iVar2, 256))
			{
				set_entity_visible_in_cutscene(iVar3, 1, 0, iVar0);
			}
			else
			{
				set_entity_visible_in_cutscene(iVar3, 0, 0, 256);
			}
		}
		iVar1++;
	}
}

bool func_53(int iParam0)
{
	return func_141(Global_1298378->f_156, iParam0);
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!network_is_player_active(iParam0))
		{
			return 0;
		}
	}
	return &((*Global_1298536)[iParam0]->f_5[iParam1]);
}

bool func_55()
{
	if (!_unlock_is_unlocked(1212196772) || !_unlock_is_unlocked(-400403560))
	{
		return false;
	}
	return true;
}

void func_56(int iParam0)
{
	func_142(&(Global_1298378->f_156), iParam0);
}

void func_57()
{
	bVar0 = func_50(player_id(), 512);
	if (Global_1298378->f_131.f_5)
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_143(512))
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_144() || func_145())
	{
		if (bVar0)
		{
			func_71(512);
		}
	}
	else if (!bVar0)
	{
		func_146(512);
	}
}

void func_58()
{
	if (Global_1298166->f_1 == 3)
	{
		return;
	}
	if (Global_1298166->f_3.f_1 >= 32)
	{
		return;
	}
	if (Global_1298378->f_131.f_5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1298166->f_3.f_1 - 1))
	{
		if (!func_141(Global_1298166->f_3.f_2[iVar0]->f_3, 8))
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	if (iVar1 < 0 || iVar1 >= 32)
	{
		Global_1298166->f_3.f_1 = 0;
		return;
	}
	iVar3 = &Global_1298166->f_3.f_2[iVar1];
	if (!network_is_player_active(iVar3))
	{
		return;
	}
	if (func_147(255))
	{
		return;
	}
	StringCopy(&cVar4, "", 128);
	switch (func_148(&cVar4, iVar3, 1))
	{
		case 1:
			Global_1298166->f_3.f_2[iVar1]->f_2 = 0;
			bVar20 = true;
			break;
		case 2:
			if (!func_141(Global_1298166->f_3.f_2[iVar1]->f_3, 1))
			{
				func_149(iVar3);
				Global_1298166->f_3.f_2[iVar1]->f_2 = get_game_timer();
				func_150(&(Global_1298166->f_3.f_2[iVar1]->f_3), 1);
			}
			return;
		case 3:
			if (Global_1298166->f_3.f_2[iVar1]->f_2 == 0)
			{
				Global_1298166->f_3.f_2[iVar1]->f_2 = get_game_timer();
				return;
			}
			else if ((get_game_timer() - Global_1298166->f_3.f_2[iVar1]->f_2) > 3000)
			{
				func_142(&(Global_1298166->f_3.f_2[iVar1]->f_3), 2);
				bVar20 = true;
			}
			else
			{
				return;
			}
			break;
		case 4:
			bVar20 = true;
			Global_1298166->f_3.f_2[iVar1]->f_2 = 0;
			break;
	}
	sVar21 = func_151(cVar4);
	if (!is_string_null_or_empty(sVar21))
	{
		iVar22 = get_hash_key(sVar21);
		iVar23 = iVar22;
		iVar24 = 0;
	}
	else
	{
		iVar22 = 1700592256;
		iVar23 = 1434360011;
		iVar24 = 1;
	}
	if (bVar20)
	{
		Var25 = 1;
		Var25.f_1 = 1;
		Var25.f_2 = 1105014447;
		Var25.f_4 = -1;
		Var25.f_5 = -1;
		Var25.f_6 = -1;
		Var25.f_10 = -1;
		Var25.f_11 = -1;
		Var25.f_12 = -1;
		Var25.f_18 = 1105014447;
		Var25.f_19 = 1105014447;
		Var25.f_23 = 300;
		Var25.f_31.f_8 = 1105014447;
		Var25.f_31.f_11 = 1105014447;
		Var25.f_31.f_12 = 8000;
		Var25.f_31.f_13 = 1511356879;
		Var25.f_31.f_15 = 1433015236;
		Var25.f_31.f_21 = 1;
		Var25.f_24 = 9;
		Var25.f_25 = iVar3;
		Var25.f_16 = func_153(get_player_name(iVar3), func_152(iVar3, 1, -1, 0));
		Var25.f_17 = _create_var_string(2, "MS_INVITE_MAIN");
		Var25.f_20 = iVar22;
		Var25.f_21 = iVar23;
		Var25.f_23 = 120;
		Var25.f_30 = _0x9c725d149622bfde(0);
		Var25.f_29 = "IB_GAMERCARD";
		Var25.f_28 = 22;
		Var25.f_31.f_2 = func_153(get_player_name(iVar3), func_152(iVar3, 1, -1, 0));
		Var25.f_31.f_3 = _create_var_string(2, "MS_INVITE_MAIN");
		Var25.f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_NOTIFICATION");
		Var25.f_31.f_6 = iVar22;
		Var25.f_31.f_7 = iVar23;
		Var25.f_31.f_17 = "HUD_Toast_Soundset";
		Var25.f_31.f_18 = "Toast_On";
		Var25.f_22 = 0;
		Var25.f_31.f_21 = iVar24;
		func_142(&(Global_1298166->f_3.f_2[iVar1]->f_3), 8);
		if (!func_155(func_154(Var25), &(Global_1298166->f_3.f_2[iVar1])))
		{
			return;
		}
	}
}

void func_59()
{
	if (Global_1298166->f_3.f_1 > 0)
	{
		if (func_68() || func_69())
		{
			func_156();
		}
	}
}

void func_60()
{
	if (Global_1298166->f_3 == 0)
	{
		Global_1298166->f_3 = get_game_timer();
		return;
	}
	else if ((get_game_timer() - Global_1298166->f_3) < 3000)
	{
		return;
	}
	Global_1298166->f_3 = 0;
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (!_databinding_is_data_id_valid(Global_1298166->f_3.f_2[iVar4]->f_1) && func_141(Global_1298166->f_3.f_2[iVar4]->f_3, 4))
		{
			*Global_1298166->f_3.f_2[iVar4] = { Var0 };
			Global_1298166->f_3.f_1 = (Global_1298166->f_3.f_1 - 1);
		}
		iVar4++;
	}
}

void func_61()
{
	if (Global_1298166->f_3.f_131 == 0)
	{
		Global_1298166->f_3.f_131 = get_game_timer();
		return;
	}
	else if ((get_game_timer() - Global_1298166->f_3.f_131) < 1000)
	{
		return;
	}
	Global_1298166->f_3.f_131 = 0;
	Var0 = 255;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (((&Global_1298166->f_3.f_132[iVar2] != 255 && !network_is_player_active(&(Global_1298166->f_3.f_132[iVar2]))) || (Global_1298166->f_3.f_132[iVar2]->f_1 != 0 && (_get_system_time() - Global_1298166->f_3.f_132[iVar2]->f_1) >= 120000)) || func_157(iVar2))
		{
			*Global_1298166->f_3.f_132[iVar2] = { Var0 };
		}
		iVar2++;
	}
}

void func_62()
{
	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_158(iVar2);
		func_72(iVar0);
		func_146(32);
	}
	else if (!func_50(player_id(), 32))
	{
		func_17(0, 0);
	}
}

void func_63()
{
	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_158(iVar2);
		func_72(iVar0);
	}
	else if (func_53(8) && func_44(iVar0) != 4)
	{
		func_17(0, 0);
	}
}

int func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

float func_65(int iParam0)
{
	return &(Global_1298378->f_6.f_17[iParam0]);
}

void func_66(float fParam0)
{
	iVar0 = 0;
	if ((Global_1298378->f_66 != -1 && func_64(player_id(), 1) == Global_1298378->f_66) || func_53(128))
	{
		if (func_44(iVar0) != 3)
		{
			if (((fParam0 <= 80f && !func_68()) && !func_69()) || func_53(128))
			{
				func_72(0);
				func_21(1);
			}
		}
		else if (func_65(Global_1298378->f_66) > 100f && !func_53(128))
		{
			func_17(0, 0);
		}
	}
	else if (func_44(iVar0) == 3 && !func_50(player_id(), 1))
	{
		func_17(0, 0);
	}
}

void func_67(int iParam0, float fParam1)
{
	iVar0 = 0;
	if (!func_50(player_id(), 8))
	{
		if (func_44(iVar0) != 3)
		{
			if (network_is_player_active(iParam0))
			{
				if (func_50(player_id(), 4) && func_50(iParam0, 2))
				{
					if (func_64(func_22(), 1) == -1)
					{
						return;
					}
					func_19(iParam0);
					func_72(0);
					func_21(2);
					func_158((*Global_1298536)[iParam0]->f_5.f_12);
					func_146(8);
					func_71(4);
					return;
				}
				else if (((((func_64(iParam0, 1) == Global_1298378->f_66 && fParam1 <= 80f) && !func_68()) && !func_69()) && !func_159()) || func_53(128))
				{
					func_72(0);
					func_21(1);
				}
			}
		}
		else
		{
			if ((network_is_player_active(iParam0) && func_50(iParam0, 2)) && func_50(player_id(), 4))
			{
				if (Global_1298166->f_1 == 3)
				{
					return;
				}
				else if (Global_1298166->f_1 != 2)
				{
					func_21(2);
					func_146(8);
					func_71(4);
					return;
				}
			}
			if ((fParam1 > 100f && (Global_1298166->f_1 == 1 || Global_1298166->f_1 == 0)) && !func_50(player_id(), 1))
			{
				func_17(0, 0);
			}
		}
	}
	else
	{
		if ((func_44(iVar0) == 3 && fParam1 > 100f) && (Global_1298166->f_1 == 1 || Global_1298166->f_1 == 0))
		{
			func_17(0, 0);
		}
		if (network_is_player_active(iParam0) && !func_50(iParam0, 2))
		{
			func_71(8);
			func_71(16);
			func_21(1);
		}
	}
}

bool func_68()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_69()
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
	if (!func_160(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_70(int iParam0)
{
	func_161(&(Global_1298378->f_156), iParam0);
}

void func_71(int iParam0)
{
	func_161(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

bool func_72(int iParam0)
{
	if (func_43(iParam0))
	{
		if (!is_bit_set(Global_1298166->f_201, iParam0))
		{
			set_bit(&(Global_1298166->f_201), iParam0);
		}
		else
		{
			return func_44(iParam0) == 3;
		}
	}
	return false;
}

bool func_73()
{
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar1 = func_51(player_id(), 1);
	iVar2 = func_64(player_id(), 1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_162(int_to_playerindex(iVar0), &iVar4, &iVar3, 1))
		{
			if (iVar4 == iVar2 && iVar3 == iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_43(iParam0))
	{
		return is_bit_set(Global_1298166->f_201, iParam0);
	}
	return false;
}

void func_75(int iParam0, var uParam1, bool bParam2)
{
	bVar0 = false;
	if (!func_163(player_id(), 1))
	{
		bVar0 = true;
	}
	else if (!network_is_player_active(func_22()))
	{
		bVar0 = true;
	}
	switch (uParam1->f_3)
	{
		case 0:
			if (bParam2 && !bVar0)
			{
				func_35(iParam0, uParam1, 1);
			}
			break;
		case 1:
			if (bParam2 && !bVar0)
			{
				if (func_164(iParam0))
				{
					func_35(iParam0, uParam1, 2);
				}
			}
			else
			{
				func_165(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 2:
			if (bParam2 && !bVar0)
			{
				if (func_166(iParam0, uParam1))
				{
					func_165(iParam0);
					func_35(iParam0, uParam1, 3);
				}
			}
			else
			{
				func_165(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 3:
			if ((bVar0 || !bParam2) || !_does_thread_exist(*uParam1))
			{
				if (func_34(iParam0, uParam1))
				{
					func_35(iParam0, uParam1, 0);
				}
				else
				{
					func_35(iParam0, uParam1, 4);
				}
			}
			break;
		case 4:
			if (func_34(iParam0, uParam1))
			{
				func_35(iParam0, uParam1, 0);
			}
			break;
	}
}

bool func_76()
{
	if (!_does_volume_exist(Global_1298378->f_29.f_10))
	{
		return false;
	}
	if (!does_entity_exist(player_ped_id()))
	{
		return false;
	}
	return is_entity_in_volume(player_ped_id(), Global_1298378->f_29.f_10, false, 0);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_167(1);
	}
	func_167(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_78()
{
	Global_1896738->f_371.f_5 = 1;
}

void func_79()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		func_168(0);
		func_169(0);
		return;
	}
	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378->f_62, 1039159916, &Var0, 0, 1))
	{
		func_168(Var0.f_11);
	}
	else
	{
		func_168(0);
	}
	if (func_170(Global_1298378->f_62, 1111816631, &Var0, 0, 1))
	{
		func_169(Var0.f_11);
	}
	else
	{
		func_169(0);
	}
	iVar14 = func_171();
	func_172(iVar14);
	iVar15 = func_86(&(Global_1296859->f_154[&Global_1296859]));
	if (((((iVar15 == 4 || iVar15 == 5) || iVar15 == 6) || iVar15 == 7) || iVar15 == 8) || iVar15 == 10)
	{
		func_173();
	}
}

void func_80()
{
	iVar0 = func_86(&(Global_1296859->f_154[&Global_1296859]));
	if (((iVar0 != 10 && iVar0 > 0) && _0x0f99f6436528a089(Global_1296859->f_15)) && !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (func_64(&(Global_1296859->f_154[&Global_1296859]), 1) != -1)
		{
			func_174(898, 1);
		}
		func_92(10);
	}
}

void func_81()
{
	if (func_96(&Global_1296859, 16))
	{
		if (func_96(&Global_1296859, 32))
		{
			Global_1298000->f_8 = 600f;
			Global_1298000->f_33++;
			func_175(&(Global_1298000->f_5), 1);
			func_112(32);
			func_112(64);
		}
	}
	if (!func_96(&Global_1296859, 64))
	{
		if (func_106(&(Global_1298000->f_5)) > Global_1298000->f_8)
		{
			func_110(&(Global_1298000->f_5));
			func_97(64);
		}
	}
	if (!func_96(&Global_1296859, 16))
	{
		if (func_86(&(Global_1296859->f_154[&Global_1296859])) == 4 || func_86(&(Global_1296859->f_154[&Global_1296859])) == 6)
		{
			func_97(16);
		}
	}
	else if (func_86(&(Global_1296859->f_154[&Global_1296859])) != 4 && func_86(&(Global_1296859->f_154[&Global_1296859])) != 6)
	{
		func_112(16);
	}
}

void func_82()
{
	if (!_databinding_is_data_id_valid(Global_1298000->f_20))
	{
		return;
	}
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar3 = (*Global_1298536)[iVar1]->f_19.f_15;
	iVar4 = (*Global_1298536)[iVar1]->f_19.f_16;
	iVar5 = (*Global_1298536)[&Global_1296859]->f_19.f_17;
	if (_databinding_is_data_id_valid(Global_1298000->f_21))
	{
		_databinding_write_data_int(Global_1298000->f_21, iVar3);
	}
	if (_databinding_is_data_id_valid(Global_1298000->f_24))
	{
		_databinding_write_data_int(Global_1298000->f_24, iVar4);
	}
	if (_databinding_is_data_id_valid(Global_1298000->f_23))
	{
		iVar2 = func_176(iVar0);
		_databinding_write_data_int(Global_1298000->f_23, iVar2);
	}
	if (_databinding_is_data_id_valid(Global_1298000->f_26))
	{
		_databinding_write_data_int(Global_1298000->f_26, 100);
	}
	if (_databinding_is_data_id_valid(Global_1298000->f_27))
	{
		iVar6 = func_177(iVar5);
		_databinding_write_data_int(Global_1298000->f_27, iVar6);
	}
	if (func_109())
	{
		if (_databinding_is_data_id_valid(Global_1298000->f_29))
		{
			iVar7 = floor(func_106(&(Global_1298000->f_5)));
			_databinding_write_data_int(Global_1298000->f_29, iVar7);
		}
		if (_databinding_is_data_id_valid(Global_1298000->f_28))
		{
			_databinding_write_data_bool(Global_1298000->f_28, false);
		}
	}
	else if (_databinding_is_data_id_valid(Global_1298000->f_28))
	{
		_databinding_write_data_bool(Global_1298000->f_28, true);
	}
	if (_databinding_is_data_id_valid(Global_1298000->f_31))
	{
		if (func_96(iVar0, 262144))
		{
			_databinding_write_data_bool(Global_1298000->f_31, true);
		}
		else
		{
			_databinding_write_data_bool(Global_1298000->f_31, false);
		}
	}
}

void func_83()
{
	if (func_178() && func_179(Global_34, Global_1051439->f_72[33]->f_25, 1, 0))
	{
		if (!func_96(&Global_1296859, 8192))
		{
			_hide_hud_component(557238883);
			func_97(8192);
		}
	}
	else if (func_96(&Global_1296859, 8192))
	{
		_display_hud_component(557238883);
		func_112(8192);
	}
}

void func_84()
{
	if (&(*Global_1298536)[&Global_1296859]->f_5[3] > 0)
	{
		if (func_96(&Global_1296859, 524288) && func_179(Global_34, (*Global_1298536)[&Global_1296859]->f_19.f_22, 1, 0))
		{
			if (!func_180(897))
			{
				sVar0 = func_181((*Global_1298536)[&Global_1296859]->f_19.f_20);
				func_182(897, sVar0, 0);
			}
		}
	}
}

void func_85()
{
	if (func_91())
	{
		if (func_179(Global_34, (*Global_1298536)[&Global_1296859]->f_19.f_22, 1, 0))
		{
			if (!func_180(899))
			{
				func_174(899, 0);
			}
		}
	}
}

int func_86(int iParam0)
{
	iVar0 = -1;
	if (!network_is_player_active(iParam0))
	{
		return iVar0;
	}
	return &Global_1298000;
}

void func_87()
{
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = (*Global_1298536)[&Global_1296859]->f_19.f_15;
	iVar2 = _0xe80e50bee276a54a(827714260, 1039159916);
	iVar3 = (*Global_1298536)[&Global_1296859]->f_19.f_16;
	iVar4 = _0xe80e50bee276a54a(-545779394, 1111816631);
	iVar5 = (*Global_1298536)[&Global_1296859]->f_19.f_17;
	if (!_databinding_is_data_id_valid(Global_1298000->f_20))
	{
		Global_1298000->f_20 = _databinding_add_data_container_from_path("", "Moonshine_ProgressBars");
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_21))
	{
		Global_1298000->f_21 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineMashValue", iVar1);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_22))
	{
		Global_1298000->f_22 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineMashMaximum", iVar2);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_23))
	{
		iVar7 = func_176(iVar0);
		Global_1298000->f_23 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineMashColorID", iVar7);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_24))
	{
		Global_1298000->f_24 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineBottlesValue", iVar3);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_25))
	{
		Global_1298000->f_25 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineBottlesMaximum", iVar4);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_26))
	{
		Global_1298000->f_26 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineBottlesThresholdValue", 100);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_27))
	{
		iVar6 = func_177(iVar5);
		Global_1298000->f_27 = _databinding_add_data_int(Global_1298000->f_20, "MoonshineFlavor", iVar6);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_28))
	{
		Global_1298000->f_28 = _databinding_add_data_bool(Global_1298000->f_20, "MoonshineFlavorTimeMeterShowLabel", 0);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_29))
	{
		Global_1298000->f_29 = _databinding_add_data_int(Global_1298000->f_20, "FlavoringTimeMeterValue", 0);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_30))
	{
		Global_1298000->f_30 = _databinding_add_data_int(Global_1298000->f_20, "FlavoringTimeMeterMaximum", 600);
	}
	if (!_databinding_is_data_id_valid(Global_1298000->f_31))
	{
		Global_1298000->f_31 = _databinding_add_data_bool(Global_1298000->f_20, "MoonshineShowCash", 0);
	}
}

void func_88()
{
	iVar0 = func_171();
	if (iVar0 != 0)
	{
		func_97(64);
	}
	Global_1298000->f_33 = 0;
}

void func_89()
{
	iVar0 = func_183();
	iVar1 = func_184();
	if (iVar0 == 827714260 || iVar1 == -545779394)
	{
		func_185(827714260);
		func_97(1024);
	}
	else if (iVar0 == -822124724 || iVar1 == 1532695640)
	{
		func_185(-822124724);
		func_97(2048);
	}
	else if (iVar0 == 1269193435 || iVar1 == 1847740267)
	{
		func_185(1847740267);
		func_97(4096);
	}
}

void func_90()
{
	if ((*Global_1298536)[&Global_1296859]->f_19.f_16 == 20)
	{
		func_97(524288);
	}
}

bool func_91()
{
	if (_unlock_is_unlocked(-319651633) && func_129(&(Global_1298378->f_62)))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0)
{
	Global_1298000 = iParam0;
}

bool func_93(float fParam0)
{
	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378->f_62, 1111816631, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * to_float(_0xe80e50bee276a54a(Var0.f_4, 1111816631))))
		{
			return true;
		}
	}
	return false;
}

bool func_94()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return false;
	}
	iVar0 = func_130(Global_1298378->f_62, 1039159916, 0, 1);
	if ((iVar0 == 827714260 || iVar0 == -822124724) || iVar0 == 1269193435)
	{
		return true;
	}
	return false;
}

void func_95()
{
	func_112(256);
	func_97(4);
	func_186();
	Global_1298000->f_33 = 0;
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_141((*Global_1298536)[iParam0]->f_19, iParam1);
}

void func_97(int iParam0)
{
	if (!func_141((*Global_1298536)[&Global_1296859]->f_19, iParam0))
	{
		func_142(&((*Global_1298536)[&Global_1296859]->f_19), iParam0);
	}
}

int func_98(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1298536)[iVar0]->f_19.f_15;
}

int func_99(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1298536)[iVar0]->f_19.f_16;
}

void func_100()
{
	Var0.f_9 = -1591664384;
	if (func_170(Global_1298378->f_62, 1039159916, &Var0, 0, 1))
	{
		return;
	}
	if (func_170(Global_1298378->f_62, 1111816631, &Var0, 0, 1))
	{
		func_187(Var0.f_4, Var0.f_11, 562618531, 1, 1);
	}
}

bool func_101()
{
	if (func_108(&(Global_1298000->f_9)))
	{
		return false;
	}
	iVar0 = func_188();
	if (!func_189(iVar0, 0))
	{
		return false;
	}
	if (!func_129(&(Global_1298378->f_62)))
	{
		return false;
	}
	if (func_190(&(Global_1298378->f_62), 1039159916, 1) > 0)
	{
		return false;
	}
	else if (func_190(&(Global_1298378->f_62), 1111816631, 1) > 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = func_191(iVar0, 0, 1, -1, 1);
	iVar4 = func_192(iVar0, iVar3, 1, 0, 1, 0);
	if (func_193(iVar0, &iVar1, &iVar2, 0) && func_194(iVar1, iVar2, 0, 1) < iVar4)
	{
		Var5.f_9 = 1;
		Var5.f_11 = -1591664384;
		if (!func_195(&(Global_1298000->f_9), iVar1, &Var5, 1, iVar2, -1, 0))
		{
			return false;
		}
		Global_1298000->f_19 = func_194(iVar1, iVar2, 0, 1);
		return true;
	}
	Var22.f_9 = 1;
	Var22.f_11 = -1591664384;
	if (!func_196(&(Global_1298000->f_9), iVar0, Global_1298378->f_62, 1039159916, 1, &Var22, 1, iVar3, -1, 1))
	{
		return false;
	}
	Global_1298000->f_19 = iVar4;
	return true;
}

int func_102(int* iParam0)
{
	return func_197(iParam0->f_1);
}

void func_103()
{
	iVar0 = func_183();
	(*Global_1298536)[&Global_1296859]->f_19.f_19 = iVar0;
}

void func_104(var uParam0, bool bParam1)
{
	func_198(uParam0, &uVar0);
	iVar4 = (*Global_1298536)[&Global_1296859]->f_5.f_12;
	iVar5 = func_199(iVar4);
	if (bParam1)
	{
		iVar6 = 1535463323;
	}
	else
	{
		iVar6 = 733252738;
	}
	if (bParam1)
	{
		uVar7 = Global_1298000->f_19;
	}
	uVar8 = (*Global_1298536)[&Global_1296859]->f_19.f_19;
	uVar9 = (*Global_1298536)[&Global_1296859]->f_19.f_17;
	uVar10 = (*Global_1298536)[&Global_1296859]->f_19.f_18;
	uVar11 = Global_1298000->f_33;
	iVar12 = func_200();
	uVar13 = (*Global_1298536)[&Global_1296859]->f_19.f_16;
	uVar14 = &(*Global_1298536)[&Global_1296859]->f_5[0];
	_0xb5013efbb5516867(&uVar0, iVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, iVar12, uVar13, uVar14);
}

void func_105()
{
	if (!func_96(&Global_1296859, 4))
	{
		func_89();
		func_97(4);
	}
}

float func_106(var uParam0)
{
	if (!func_201(uParam0))
	{
		return 0f;
	}
	return (to_float(func_202(uParam0)) * 0.001f);
}

bool func_107()
{
	if (func_108(&(Global_1298000->f_9)))
	{
		return false;
	}
	if (!func_129(&(Global_1298378->f_62)))
	{
		return false;
	}
	iVar0 = func_130(Global_1298378->f_62, 1039159916, 0, 1);
	iVar1 = 0;
	if (iVar0 == 1269193435)
	{
		iVar1 = 1847740267;
	}
	else if (iVar0 == -822124724)
	{
		iVar1 = 1532695640;
	}
	else if (iVar0 == 827714260)
	{
		iVar1 = -545779394;
	}
	else
	{
		iVar1 = -545779394;
	}
	Var2.f_9 = 1;
	Var2.f_11 = -1591664384;
	if (func_196(&(Global_1298000->f_9), iVar1, Global_1298378->f_62, 1111816631, 1, &Var2, 1, -489628648, -1, 1))
	{
		return true;
	}
	return false;
}

bool func_108(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_102(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_109()
{
	if (func_201(&(Global_1298000->f_5)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_111(var uParam0)
{
	func_203(uParam0, 0);
}

void func_112(int iParam0)
{
	if (func_141((*Global_1298536)[&Global_1296859]->f_19, iParam0))
	{
		func_161(&((*Global_1298536)[&Global_1296859]->f_19), iParam0);
	}
}

void func_113()
{
	iVar0 = func_171();
	if (func_204(iVar0, 1372968408))
	{
		func_206(func_205(-1276738576, -416283678), 1);
	}
	else if (func_204(iVar0, -710171994))
	{
		func_206(func_205(-1276738576, -880881435), 1);
	}
	else if (func_204(iVar0, 956386416))
	{
		func_206(func_205(-1276738576, -98884474), 1);
	}
}

void func_114()
{
	if (func_207())
	{
		return;
	}
	Var0.f_8 = 1105014447;
	Var0.f_11 = 1105014447;
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = 1433015236;
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = _create_var_string(2, "MOONSHINE_TITLE");
	Var0.f_3 = _create_var_string(2, "MOONSHINE_PRODUCTION_COMPLETE");
	Var0.f_7 = 1349568299;
	Var0.f_6 = -1734218699;
	Var0.f_8 = 1105014447;
	Var0.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 2099367966;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_208(&Var0);
}

void func_115()
{
	Global_1298000->f_4 = 0f;
	func_110(&(Global_1298000->f_1));
	func_110(&(Global_1298000->f_5));
	func_112(32);
	func_112(2048);
	func_112(1024);
	func_112(4096);
	func_112(64);
	func_112(128);
	func_112(2);
	func_112(512);
	func_112(65536);
}

bool func_116()
{
	if (func_98(Global_1296859->f_10) == 0 && func_99(Global_1296859->f_10) == 0)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_118(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

bool func_119(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1)
{
	if (func_119(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

int func_121(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

void func_122(int iParam0)
{
	if (func_209(iParam0) && func_210())
	{
		remove_door_from_system(iParam0);
	}
}

void func_123(int iParam0)
{
}

void func_124(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

bool func_125(int iParam0, int iParam1)
{
	return func_211(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_126(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_127(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

void func_128()
{
	iVar0 = func_64(get_player_index(), 1);
	iVar1 = -1;
	iVar4 = _databinding_get_array_count(Global_1940311->f_1433.f_8125.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = _databinding_read_data_int(&(Global_1940311->f_1433.f_8125.f_234[iVar5]));
		iVar1 = iVar6;
		iVar2 = func_212(iVar1);
		iVar3 = func_191(iVar2, 0, 1, -1, 1);
		bVar7 = func_213(iVar2, 1, iVar3, 0);
		if (func_214(iVar3))
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_8, -625835022);
		}
		else
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_8, 1447387479);
		}
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_21, true);
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_9, false);
			}
			else
			{
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_21, false);
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_9, bVar7);
			}
		}
		iVar5++;
	}
}

bool func_129(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_130(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	Var0.f_9 = -1591664384;
	if (func_170(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_215(&uParam0, iParam4, bParam5, iParam6);
}

int func_134()
{
	if (func_129(&(Global_1298378->f_62)))
	{
		if (func_216(-2020197296, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_216(1236975766, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 3;
		}
		else if (func_216(-1334222892, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 3;
		}
	}
	return 0;
}

int func_135()
{
	if (func_129(&(Global_1298378->f_62)))
	{
		if (func_216(-1609310766, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (func_129(&(Global_1298378->f_62)))
	{
		if (func_216(-663241357, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 2;
		}
		else if (func_216(-950723794, &(Global_1298378->f_62), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	if (func_129(&(Global_1298378->f_62)))
	{
		switch (func_133(Global_1298378->f_62, -1565675519, 1, -1))
		{
			case -1832936964:
				return 2;
			case -998343303:
				return 3;
			case -126163595:
				return 4;
			case -589877714:
				return 6;
			case -361084332:
				return 10;
			case -1557841209:
				return 5;
			case -946797662:
				return 7;
			case -380221660:
				return 9;
			case -110172099:
				return 1;
			case -147791143:
				return 8;
			default:
				break;
		}
	}
	return 0;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!network_is_player_active(player_id()))
		{
			return 0;
		}
	}
	(*Global_1298536)[player_id()]->f_5[iParam0] = iParam1;
	return 1;
}

bool func_139()
{
	if (!func_217())
	{
		return false;
	}
	return func_141(Global_1901947->f_44.f_5, 8);
}

void func_140()
{
	if (!func_74(1))
	{
		return;
	}
	Global_1298378->f_44 = 1;
}

bool func_141(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_142(var uParam0, int iParam1)
{
	func_218(uParam0, iParam1);
}

bool func_143(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

int func_144()
{
	if (func_219())
	{
		return 1;
	}
	if (func_220(player_id(), 1, 0, 1))
	{
		return 1;
	}
	if (!func_221())
	{
		return 1;
	}
	if (func_160(func_222(0)))
	{
		return 1;
	}
	if (func_223(0))
	{
		return 1;
	}
	if (network_is_in_mp_cutscene())
	{
		return 1;
	}
	iVar0 = func_224(1427578635, player_id(), 0, 1);
	if (func_225(iVar0))
	{
		return 1;
	}
	if (func_159())
	{
		return 1;
	}
	return 0;
}

var func_145()
{
	return Global_1071686->f_7;
}

void func_146(int iParam0)
{
	func_142(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

bool func_147(int iParam0)
{
	return func_226(1, iParam0);
}

int func_148(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_227(iParam1, iParam2);
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
					iVar10 = func_228(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					func_230(iParam1, iParam2, iVar1);
					func_229(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_229(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_229(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_229(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_231(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_229(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_149(int iParam0)
{
	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), iParam0);
	func_232(&Var0);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_151(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_152(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_233(func_222(0)) && func_234(func_222(0)) == 7)
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
			iVar6 = func_235(iParam0);
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
			return func_236(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_141(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_237(iParam0, 1);
	if (!bVar0)
	{
		if (func_238(iParam0, bParam1))
		{
			return func_236(iParam0);
		}
		else if (func_239(iParam0, bParam1))
		{
			if (func_240(iParam0, bParam1))
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
		return func_235(iParam0);
	}
	else if (func_238(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_242(func_241(func_222(0)), 1) == 395262693)
		{
			return func_236(iParam0);
		}
		else
		{
			return func_236(iParam0);
		}
	}
	else if (func_239(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_153(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_243(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_154(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	iVar0 = func_244();
	iVar1 = get_cloud_time_as_int();
	iVar2 = (iVar1 + Param0.f_23);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1940311->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311->f_242.f_1188, 64);
	func_245(Global_1940311->f_242.f_14[iVar0], Global_1940311->f_242.f_4, cVar3, Param0);
	Global_1940311->f_242.f_14[iVar0]->f_35 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(84), Global_1940311->f_242.f_1188);
	Global_1940311->f_242.f_14[iVar0]->f_37 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_246(85), 1);
	Global_1940311->f_242.f_14[iVar0]->f_38 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_246(86), 0);
	Global_1940311->f_242.f_14[iVar0]->f_33 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_246(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311->f_242.f_14[iVar0]->f_32 = _databinding_add_data_string(&(Global_1940311->f_242.f_14[iVar0]), func_246(72), Param0.f_29);
		Global_1940311->f_242.f_14[iVar0]->f_31 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(75), Param0.f_28);
	}
	Global_1940311->f_242.f_14[iVar0]->f_26 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311->f_242.f_14[iVar0]->f_34 = _databinding_add_data_bool_by_hash(&(Global_1940311->f_242.f_14[iVar0]), 707094655, iVar15);
	Global_1940311->f_242.f_14[iVar0]->f_27 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(50), Param0.f_25);
	Global_1940311->f_242.f_14[iVar0]->f_28 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(51), Param0.f_25.f_1);
	Global_1940311->f_242.f_14[iVar0]->f_29 = _databinding_add_data_gang_id(&(Global_1940311->f_242.f_14[iVar0]), func_246(88), Param0.f_25.f_2);
	Global_1940311->f_242.f_14[iVar0]->f_25 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(89), iVar2);
	Global_1940311->f_242.f_14[iVar0]->f_24 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(90), Param0.f_22);
	func_247(Global_1940311->f_242.f_1186 + 1);
	if (Global_1940311->f_242.f_1188 == 2147483647)
	{
		Global_1940311->f_242.f_1188 = 0;
	}
	if (func_248(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1940311->f_242.f_14[iVar0];
		iVar16 = func_208(&(Param0.f_31));
		Global_1940311->f_242.f_14[iVar0]->f_36 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_246(91), iVar16);
	}
	iVar17 = func_249();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311->f_242.f_1187++;
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, 0, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar0]));
	}
	return &(Global_1940311->f_242.f_14[iVar0]);
}

bool func_155(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1298166->f_3.f_2[iVar0] == iParam1)
		{
			Global_1298166->f_3.f_2[iVar0]->f_1 = uParam0;
			func_150(&(Global_1298166->f_3.f_2[iVar0]->f_3), 4);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_156()
{
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1298166->f_3.f_2 - 1))
	{
		*Global_1298166->f_3.f_2[iVar4] = { Var0 };
		iVar4++;
	}
	Global_1298166->f_3.f_1 = 0;
	Global_1298166->f_3 = 0;
}

bool func_157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (network_is_player_active(&(Global_1298166->f_3.f_132[iParam0])) && func_250(&(Global_1298166->f_3.f_132[iParam0])))
	{
		return true;
	}
	return false;
}

void func_158(int iParam0)
{
	Global_1298378->f_66 = iParam0;
}

bool func_159()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_160(struct<2> Param0)
{
	if (!func_251(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_252(Param0))
	{
		return false;
	}
	return true;
}

void func_161(var uParam0, int iParam1)
{
	func_253(uParam0, iParam1);
}

bool func_162(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if ((*Global_1298536)[iVar0]->f_1 == -1)
	{
		return false;
	}
	*iParam1 = (*Global_1298536)[iVar0]->f_1;
	*iParam2 = (*Global_1298536)[iVar0]->f_3;
	return true;
}

bool func_163(int iParam0, bool bParam1)
{
	return func_51(iParam0, bParam1) != -1;
}

bool func_164(int iParam0)
{
	sVar0 = func_254(iParam0);
	if (_0x375f5870a7b8bec1(sVar0))
	{
		return false;
	}
	if (!does_script_exist(sVar0))
	{
		return false;
	}
	iVar1 = Global_1298166->f_201.f_1[iParam0]->f_2;
	if (network_is_script_active(sVar0, iVar1, true, 0))
	{
		return false;
	}
	request_script(sVar0);
	iVar2 = func_256(func_255(iParam0));
	if (get_number_of_free_stacks_of_this_size(iVar2) <= 0)
	{
		return false;
	}
	if (!has_script_loaded(sVar0))
	{
		return false;
	}
	return true;
}

void func_165(int iParam0)
{
	sVar0 = func_254(iParam0);
	if (_0x375f5870a7b8bec1(sVar0))
	{
		return;
	}
	set_script_as_no_longer_needed(sVar0);
}

bool func_166(int iParam0, var uParam1)
{
	func_257(iParam0, uParam1);
	if (_does_thread_exist(*uParam1))
	{
		set_script_as_no_longer_needed(func_254(iParam0));
		return true;
	}
	return false;
}

void func_167(int iParam0)
{
	if (!func_258(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_168(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947->f_789.f_5)
	{
		iParam0 = Global_1901947->f_789.f_5;
	}
	if ((*Global_1298536)[&Global_1296859]->f_19.f_15 != iParam0)
	{
		(*Global_1298536)[&Global_1296859]->f_19.f_15 = iParam0;
	}
}

void func_169(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if ((*Global_1298536)[&Global_1296859]->f_19.f_16 != iParam0)
	{
		(*Global_1298536)[&Global_1296859]->f_19.f_16 = iParam0;
	}
}

bool func_170(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_259(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_171()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378->f_62, -268973591, 0, 1);
	return iVar0;
}

void func_172(int iParam0)
{
	if ((*Global_1298536)[&Global_1296859]->f_19.f_17 != iParam0)
	{
		(*Global_1298536)[&Global_1296859]->f_19.f_17 = iParam0;
		func_97(1048576);
	}
	if (iParam0 != 0 && (*Global_1298536)[&Global_1296859]->f_19.f_17 != (*Global_1298536)[&Global_1296859]->f_19.f_20)
	{
		(*Global_1298536)[&Global_1296859]->f_19.f_18 = (*Global_1298536)[&Global_1296859]->f_19.f_20;
	}
	if ((iParam0 != 0 && iParam0 != (*Global_1298536)[&Global_1296859]->f_19.f_20) && !func_201(&(Global_1298000->f_5)))
	{
		(*Global_1298536)[&Global_1296859]->f_19.f_20 = iParam0;
	}
}

void func_173()
{
	iVar0 = func_183();
	iVar1 = func_184();
	if (iVar0 == 827714260 || iVar1 == -545779394)
	{
		if (!func_96(&Global_1296859, 1024))
		{
			func_97(1024);
		}
	}
	else if (iVar0 == -822124724 || iVar1 == 1532695640)
	{
		if (!func_96(&Global_1296859, 2048))
		{
			func_97(2048);
		}
	}
	else if (iVar0 == 1269193435 || iVar1 == 1847740267)
	{
		if (!func_96(&Global_1296859, 4096))
		{
			func_97(4096);
		}
	}
}

void func_174(int iParam0, bool bParam1)
{
	func_260(iParam0, &iVar0, &iVar1);
	if (!func_261(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_262(iVar0, iVar1);
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1 || !func_201(uParam0))
	{
		func_111(uParam0);
	}
}

int func_176(int iParam0)
{
	iVar0 = iParam0;
	if (func_96(iVar0, 256))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_177(int iParam0)
{
	if (iParam0 == 1958345007)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 348064119)
	{
		iVar0 = 2;
	}
	else if (iParam0 == -818346432)
	{
		iVar0 = 3;
	}
	else if (iParam0 == -610395813)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2103594888)
	{
		iVar0 = 5;
	}
	else if (iParam0 == -624685730)
	{
		iVar0 = 6;
	}
	else if (iParam0 == 1739830455)
	{
		iVar0 = 7;
	}
	else if (iParam0 == -1498871949)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 447784640)
	{
		iVar0 = 9;
	}
	else if (iParam0 == -1283370018)
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_178()
{
	if (is_hud_hidden())
	{
		return false;
	}
	if (is_cinematic_cam_rendering())
	{
		return false;
	}
	if (func_263())
	{
		return false;
	}
	if (func_264() != 2)
	{
		return false;
	}
	return true;
}

bool func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

bool func_180(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

char* func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1958345007:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
		case 348064119:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
		case -818346432:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
		case -610395813:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
		case 2103594888:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
		case -624685730:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
		case 1739830455:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
		case -1498871949:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
		case 447784640:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
		case -1283370018:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
		default:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}
	return sVar0;
}

void func_182(int iParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	func_265(iParam0, get_hash_key(sParam1), bParam2);
}

int func_183()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378->f_62, 1039159916, 0, 1);
	return iVar0;
}

int func_184()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378->f_62, 1111816631, 0, 1);
	return iVar0;
}

void func_185(int iParam0)
{
	(*Global_1298536)[&Global_1296859]->f_19.f_19 = iParam0;
}

void func_186()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return;
	}
	iVar0 = func_130(Global_1298378->f_62, 1039159916, 0, 1);
	iVar1 = _0xe80e50bee276a54a(iVar0, 1039159916);
	if (iVar0 == 1269193435)
	{
		Global_1298000->f_4 = ((Global_1901947->f_789.f_2 / to_float(iVar1)) * 60f);
	}
	else if (iVar0 == -822124724)
	{
		Global_1298000->f_4 = ((Global_1901947->f_789.f_1 / to_float(iVar1)) * 60f);
	}
	else if (iVar0 == 827714260)
	{
		Global_1298000->f_4 = ((Global_1901947->f_789 / to_float(iVar1)) * 60f);
	}
	else
	{
		Global_1298000->f_4 = ((Global_1901947->f_789 / to_float(iVar1)) * 60f);
	}
	if (func_266(15) >= 15)
	{
		Global_1298000->f_4 = (Global_1298000->f_4 * 0.8f);
	}
	func_175(&(Global_1298000->f_1), 0);
}

bool func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_267(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_268(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_269(iParam0, bParam4, 0) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, bParam4) };
	return func_271(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_188()
{
	if (func_96(&Global_1296859, 1024))
	{
		return 827714260;
	}
	else if (func_96(&Global_1296859, 2048))
	{
		return -822124724;
	}
	else if (func_96(&Global_1296859, 4096))
	{
		return 1269193435;
	}
	return 0;
}

bool func_189(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_190(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_259(bParam2), uParam0, iParam1);
}

int func_191(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (func_272(iParam0))
	{
		return func_275(func_273(iParam0, 0), iParam1, bParam2, iParam3, func_274(iParam0));
	}
	if (func_276(iParam0, bParam4) || func_277(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_274(iParam0) && (func_278(iParam0, &iVar0) || func_279(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_280(iParam0, -570078785);
		bVar2 = func_280(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_281())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_282(15) && func_280(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_192(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_280(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_272(iParam0))
	{
		return func_194(func_273(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_283(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	iVar0 = func_284(831658232, 1, 0, 1);
	iVar1 = func_284(1964703625, 1, 0, 1);
	bVar2 = _unlock_is_unlocked(-577406511);
	if (bParam3)
	{
		iVar0 = 4;
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1770635244;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 1694260085;
			}
			else
			{
				*iParam1 = -2006381587;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -1964533269;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 100166317;
		}
		else
		{
			*iParam1 = 1038106552;
		}
		switch (iVar0)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else if (iVar0 == 0)
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 1455881441;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = -98408876;
			}
			else
			{
				*iParam1 = 136850391;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = 535276374;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 1279048583;
		}
		else
		{
			*iParam1 = 1003713621;
		}
		switch (iVar1)
		{
			case 1:
				*iParam2 = 600942249;
				break;
			case 2:
				*iParam2 = 747826962;
				break;
			case 3:
				*iParam2 = 502256076;
				break;
			case 4:
				*iParam2 = -834227589;
				break;
		}
	}
	else
	{
		if (bVar2)
		{
			if (iParam0 == 1269193435)
			{
				*iParam1 = 683835946;
			}
			else if (iParam0 == -822124724)
			{
				*iParam1 = 129815171;
			}
			else
			{
				*iParam1 = -280792819;
			}
		}
		else if (iParam0 == 1269193435)
		{
			*iParam1 = -61838317;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 185950306;
		}
		else
		{
			*iParam1 = -2110360382;
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 1:
					*iParam2 = 600942249;
					break;
				case 2:
					*iParam2 = 747826962;
					break;
				case 3:
					*iParam2 = 502256076;
					break;
			}
		}
		else if (iVar0 == 2)
		{
			if (iVar1 == 1)
			{
				*iParam2 = -834227589;
			}
			else
			{
				*iParam2 = 1472825031;
			}
		}
		else
		{
			*iParam2 = -489628648;
		}
	}
	if ((iVar0 == 0 && iVar1 == 0) && bVar2)
	{
		if (iParam0 == 1269193435)
		{
			*iParam1 = 683835946;
		}
		else if (iParam0 == -822124724)
		{
			*iParam1 = 129815171;
		}
		else
		{
			*iParam1 = -280792819;
		}
		*iParam2 = -915411861;
	}
	if (!func_285(*iParam1) || *iParam2 == 0)
	{
		return false;
	}
	return true;
}

int func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_195(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_275(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_288(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_289(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

bool func_196(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_191(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_290(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_291(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_292(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_293(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_294(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_197(int iParam0)
{
	iVar0 = func_295(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_296(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_296(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_198(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
		case 0:
			return 1397223979;
		case 1:
			return 677707590;
		case 2:
			return -269277617;
		case 3:
			return -1463831630;
		case 4:
			return 2031672089;
		default:
			break;
	}
	return 2037940248;
}

int func_200()
{
	if (!func_129(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_130(Global_1298378->f_62, -268973591, 0, 1);
	if (func_204(iVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (func_204(iVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (func_204(iVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

bool func_201(var uParam0)
{
	return func_297(*uParam0, 1);
}

int func_202(var uParam0)
{
	if (!func_201(uParam0))
	{
		return 0;
	}
	if (func_298(uParam0))
	{
		return uParam0->f_2;
	}
	return func_299(uParam0->f_1);
}

void func_203(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_300(uParam0, 1);
	func_301(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_204(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return func_303(func_302(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

struct<2> func_205(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_207()
{
	if (is_hud_hidden())
	{
		return false;
	}
	if (is_cinematic_cam_rendering())
	{
		return false;
	}
	if (func_263())
	{
		return false;
	}
	if (_is_app_running(1289756680))
	{
		return false;
	}
	if (Global_1071686->f_28778)
	{
		return false;
	}
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!_unlock_is_unlocked(-319651633))
	{
		return false;
	}
	if (func_304())
	{
		return false;
	}
	return true;
}

int func_208(var uParam0)
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
		return func_306(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_307(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_308(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_309(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_310(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_311(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_312(func_305(uParam0->f_2, 109029619), func_305(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_209(int iParam0)
{
	if (func_313(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_210()
{
	return true;
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1580598647;
		case 1:
			return 786277441;
		case 3:
			return 1273401170;
		case 2:
			return -127194573;
		case 4:
			return 1480239309;
		default:
			break;
	}
	return 0;
}

bool func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_314(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

bool func_214(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_215(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_315(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_216(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_316(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_217()
{
	if (Global_1901947->f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859->f_21;
		if (iVar0 > Global_1901947->f_44.f_3 && iVar0 < Global_1901947->f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_219()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

int func_220(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_317(bParam1, bParam2, bParam3);
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

bool func_221()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

struct<2> func_222(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_223(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_224(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_318(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && (*Global_1237665)[iVar0]->f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_225(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_226(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_320())
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_319(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_227(int iParam0, int iParam1)
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

int func_228(int iParam0)
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

void func_229(int iParam0, int iParam1, int iParam2)
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

void func_230(int iParam0, int iParam1, int iParam2)
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

int func_231(int iParam0, int iParam1)
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

void func_232(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_321(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_321(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_322(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_321(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_322(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_233(struct<2> Param0)
{
	iVar0 = func_323(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_234(var uParam0, var uParam1)
{
	return uParam0;
}

int func_235(int iParam0)
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

int func_236(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_69())
	{
		return 636925055;
	}
	return -963477619;
}

int func_237(int iParam0, bool bParam1)
{
	iVar0 = floor(func_324(iParam0, bParam1));
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

bool func_238(int iParam0, bool bParam1)
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

bool func_239(int iParam0, bool bParam1)
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
	if (func_325(iParam0))
	{
		return true;
	}
	return !func_238(iParam0, 0);
}

bool func_240(int iParam0, bool bParam1)
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
	if (func_326(iParam0))
	{
		return false;
	}
	if (func_325(iParam0))
	{
		return false;
	}
	if (func_327(iParam0))
	{
		return true;
	}
	return func_328(iParam0);
}

int func_241(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_329(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_242(int iParam0, int iParam1)
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

char* func_243(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_244()
{
	iVar1 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar41 = _databinding_read_data_int(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_330(Var2))
			{
				func_331(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_332();
}

void func_245(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_333(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_246(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_string(*uParam0, func_246(17), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_246(3), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_246(4), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_246(5), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_246(6), Param10.f_21);
}

char* func_246(int iParam0)
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

void func_247(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

bool func_248(var uParam0)
{
	return true;
}

int func_249()
{
	return Global_1940311->f_242.f_1185;
}

bool func_250(int iParam0)
{
	bVar2 = func_162(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == (*Global_1298536)[player_id()]->f_1) && iVar1 == Global_1298536[player_id()]);
	return bVar2;
}

bool func_251(int iParam0)
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

int func_252(int iParam0)
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

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "net_moonshine_entrance";
		case 1:
			return "net_moonshine_property";
		default:
			break;
	}
	return "";
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1294698649;
		case 0:
			return 311019464;
		default:
			break;
	}
	return 981881731;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 981881731:
			return 128;
		case -1598299820:
			return 200;
		case 746035441:
			return 400;
		case 311019464:
			return 512;
		case 1567969312:
			return 600;
		case 849942934:
			return 800;
		case -455129387:
			return 1024;
		case 662654967:
			return 1026;
		case -1230526146:
			return 1300;
		case 356437857:
			return 1301;
		case 1444727078:
			return 1400;
		case -1152281542:
			return 1600;
		case -2027482694:
			return 1800;
		case -636209567:
			return 2000;
		case 1371455820:
			return 2024;
		case 1230979482:
			return 2025;
		case -1298200006:
			return 2026;
		case 28140092:
			return 2027;
		case 1497760498:
			return 2047;
		case -346238945:
			return 2048;
		case 627973797:
			return 2549;
		case 1875090462:
			return 2050;
		case -1571441951:
			return 2051;
		case 141976779:
			return 2452;
		case -390588104:
			return 2053;
		case -1156795024:
			return 3000;
		case 1955050002:
			return 3001;
		case 1415704879:
			return 3002;
		case 1168642835:
			return 3081;
		case -1582256496:
			return 3088;
		case 894914127:
			return 3090;
		case -925217315:
			return 3500;
		case 1371039728:
			return 4592;
		case -299117668:
			return 4700;
		case 2134863183:
			return 5000;
		case 1442743587:
			return 5001;
		case -354964017:
			return 5400;
		case 487844664:
			return 5500;
		case -1050991852:
			return 5501;
		case -544337485:
			return 5502;
		case -1084599404:
			return 5503;
		case 46285951:
			return 5504;
		case 838854843:
			return 5505;
		case 2122926971:
			return 5506;
		case -1475898915:
			return 6000;
		case -1644014996:
			return 6001;
		case -45677744:
			return 6002;
		case -605765767:
			return 6005;
		case -192136878:
			return 6010;
		case 1495295997:
			return 6500;
		case 1517073634:
			return 6700;
		case 364255091:
			return 7000;
		case -1330320955:
			return 7001;
		case -901433337:
			return 7002;
		case 1865091110:
			return 7300;
		case 36156066:
			return 7301;
		case -1226137495:
			return 10000;
		case 1524910643:
			return 10001;
		case -1125321488:
			return 10003;
		case 2013232686:
			return 14335;
		case -1181533807:
			return 25500;
		case 1375707186:
			return 40500;
		case -1950263389:
			return 45000;
		case 56269207:
			return 68000;
		case 992915021:
			return 1631;
		case -1294698649:
			return 3982;
		case 31651532:
			return 4088;
		case -1870002137:
			return 4096;
		case -1595584284:
			return 4080;
		case 1166219490:
			return 50000;
		case 708358771:
			return 65536;
		case -800826243:
			return 32768;
		case 1978046393:
			return 129;
		default:
			break;
	}
	return 0;
}

void func_257(int iParam0, var uParam1)
{
	Var0 = { func_334(iParam0) };
	uParam1->f_1 = Var0.f_1;
	uParam1->f_2 = uParam1->f_1;
	*uParam1 = start_new_script_with_args(func_254(iParam0), &Var0, 10, func_256(func_255(iParam0)));
}

bool func_258(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_259(bool bParam0)
{
	if (func_38() == -1)
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

void func_260(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_261(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_335(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_336(iParam0))
	{
		return false;
	}
	if (func_337(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_338(iParam0, 1)) || func_339(32768))
	{
		if (!func_338(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_340())
	{
		return false;
	}
	return true;
}

void func_262(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_263()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_264()
{
	if (!func_211(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

void func_265(int iParam0, int iParam1, bool bParam2)
{
	func_260(iParam0, &iVar0, &iVar1);
	if (!func_261(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_338(iParam0, 1024))
	{
		return;
	}
	func_262(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

int func_266(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	iVar0 = func_342(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_343(iParam0, 1);
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_344(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_267(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_345(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_346(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_347(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_348(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_349(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_259(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_269(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_350(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_292(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_270(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_351(bParam1) };
			if (bParam2 && func_352(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_216(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_216(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_353(iParam0, &Var6, 1728382685))
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
			Var0 = { func_354(bParam1) };
			switch (func_355(iParam0))
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
			if (func_356(iParam0, -1823706425))
			{
				Var0 = { func_270(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_356(iParam0, -1483207246))
			{
				Var0 = { func_270(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_270(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_356(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_357(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_356(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_270(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_189(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_259(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_271(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_344(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_357(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_345(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_38() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_348(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_349(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_259(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_272(int iParam0)
{
	if (func_204(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_273(int iParam0, bool bParam1)
{
	if (!func_189(iParam0, 0))
	{
		return func_358(func_302(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_274(int iParam0)
{
	if (!func_221() && func_359())
	{
		return true;
	}
	return func_204(iParam0, 1435272033);
}

int func_275(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_285(iParam0))
	{
		return 0;
	}
	bVar1 = func_211(iParam3, 2);
	bVar2 = func_360(iParam0, -570078785, bVar1);
	bVar3 = func_360(iParam0, -915411861, bVar1);
	if (func_360(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_361(iParam0, &iVar0) || func_362(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_281())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_282(15) && func_360(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_276(int iParam0, bool bParam1)
{
	return (func_280(iParam0, 997808187) && !func_363(iParam0, 997808187, bParam1));
}

bool func_277(int iParam0)
{
	iVar0 = func_273(iParam0, 1);
	if (iVar0 != 0 && func_360(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, int iParam1)
{
	*iParam1 = func_364(iParam0, 1);
	return *iParam1 != 0;
}

bool func_279(int iParam0, int iParam1)
{
	*iParam1 = func_365(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_280(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_272(iParam0))
	{
		return func_360(func_273(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_281()
{
	return Global_1915715->f_22477;
}

bool func_282(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_223(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_283(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_366(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_367(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_259(bParam1), iParam0, iParam3);
}

bool func_285(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_286(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_285(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @114; //curOff = 102
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_368(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_287(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return false;
		}
	}
	if (func_369(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_360(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_211(iParam2, 2))
	{
		if (func_370(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_211(iParam2, 8))
	{
		return func_371(iParam0, iParam1);
	}
	return 1;
}

bool func_289(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_372(Param1))
	{
		return false;
	}
	if (!func_373(iParam0, iParam18))
	{
		return false;
	}
	if (func_374(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam19);
}

int func_290(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_211(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_357(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_376(iParam1, func_355(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 1))
	{
		if (!func_377(iParam1))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 2))
	{
		if (func_363(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_211(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_316(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_378(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_379(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_380(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_211(iParam9, 8))
	{
		return func_381(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_291(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_270(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_267(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_382() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_292(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_293(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_383(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_373(iParam0, iParam18))
	{
		return false;
	}
	if (func_384(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam19);
}

bool func_294(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_383(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_373(iParam0, iParam17))
	{
		return false;
	}
	if (func_385(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_375(iParam0, bParam18);
}

int func_295(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_386(iParam0, iParam1, iParam2, iParam3);
}

bool func_297(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_298(var uParam0)
{
	return func_297(*uParam0, 2);
}

int func_299(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_302(int iParam0)
{
	return iParam0;
}

int func_303(int iParam0, int iParam1)
{
	if (!func_387(iParam0, 2))
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

bool func_304()
{
	Var0 = { func_222(0) };
	if (func_160(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_305(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_243(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_306(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
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

var func_307(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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

var func_308(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
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

var func_309(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

var func_310(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

var func_311(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

var func_312(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
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

bool func_313(int iParam0)
{
	return iParam0 != 0;
}

bool func_314(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_272(iParam0))
	{
		return func_388(func_273(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_283(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_345(0)) && !func_389());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_390(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_391(iVar32)))
			{
			}
			else
			{
				iVar36 = func_392(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_393(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_394(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_395(&(Var0[iVar34])) || func_396(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_397(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_398(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_399(7, &(Var0[iVar34]))) + func_400(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_315(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_259(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_401(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_316(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_267(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_270(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_259(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_259(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_317(bool bParam0, bool bParam1, bool bParam2)
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

bool func_318(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_402(iParam0) && func_211((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_320()
{
	return Global_1102219->f_3672;
}

void func_321(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_322(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

int func_323(struct<2> Param0)
{
	if (!func_160(Param0))
	{
		return -1;
	}
	iVar0 = func_403(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

float func_324(int iParam0, bool bParam1)
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

bool func_325(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_326(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_327(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_328(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_404(iParam0);
		return false;
	}
	if (func_327(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_405(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_329(struct<2> Param0, var uParam2)
{
	if (!func_160(Param0))
	{
		return false;
	}
	func_406(uParam2);
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

bool func_330(struct<38> Param0, var uParam38)
{
	if (!_databinding_is_data_id_valid(Param0.f_37))
	{
		return _databinding_is_data_id_valid(Param0);
	}
	return _databinding_read_data_bool(Param0.f_37);
}

void func_331(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_407(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_247((Global_1940311->f_242.f_1186 - 1));
}

int func_332()
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
	func_331(&(Global_1940311->f_242.f_14[iVar3]));
	return iVar3;
}

void func_333(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_246(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_246(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_246(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_246(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_246(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_246(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_246(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_246(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_246(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_246(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_246(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_246(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_246(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_246(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_246(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_246(66), Param10.f_15);
}

struct<10> func_334(int iParam0)
{
	iVar0 = func_22();
	Var1.f_1 = func_51(iVar0, 1);
	Var1.f_2 = func_64(iVar0, 1);
	Var1 = iParam0;
	if (network_is_player_active(iVar0))
	{
		Var1.f_3 = { func_408(iVar0) };
	}
	return Var1;
}

bool func_335(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_336(int iParam0)
{
	if (func_338(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_337(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_338(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_339(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_340()
{
	if (!func_221())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_341(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_342(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_343(int iParam0, bool bParam1)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_409(iParam0);
		if (func_189(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_410(255);
			}
			else
			{
				iVar1 = func_316(iVar0, func_350(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_411(iParam0);
		if (func_189(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_316(iVar0, func_350(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_344(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_345(bool bParam0)
{
	if (func_38() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_259(bParam0));
}

bool func_346(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_267(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_412(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_347(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_270(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_348(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_413(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_414(func_385(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_415(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_349(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<4> func_350(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_259(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_270(1328661203, func_382(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_270(1328661203, func_382(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_270(1328661203, func_382(), -1591664384, bParam0);
}

struct<4> func_351(bool bParam0)
{
	iVar0 = func_259(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_270(923904168, func_350(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_270(923904168, func_350(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_270(923904168, func_350(bParam0), -740156546, 0);
}

bool func_352(int iParam0, bool bParam1)
{
	if (func_355(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_416();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_353(int iParam0, var uParam1, int iParam2)
{
	if (func_417(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_354(bool bParam0)
{
	iVar0 = func_259(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_270(271701509, func_350(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_270(271701509, func_350(bParam0), 12999093, 0);
}

int func_355(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_356(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_355(iParam0);
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
			if (func_376(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_357(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_401(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_358(int iParam0, bool bParam1)
{
	if (!func_387(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_359()
{
	return func_418(func_222(0));
}

bool func_360(int iParam0, int iParam1, bool bParam2)
{
	if (!func_285(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_370(iParam0, iParam1);
	}
	return true;
}

bool func_361(int iParam0, int iParam1)
{
	*iParam1 = func_419(iParam0, 1);
	return *iParam1 != 0;
}

bool func_362(int iParam0, int iParam1)
{
	*iParam1 = func_420(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_363(int iParam0, int iParam1, bool bParam2)
{
	if (!func_189(iParam0, 0))
	{
		return func_421(func_302(iParam0), iParam1, bParam2);
	}
	if (func_272(iParam0))
	{
		return func_370(func_273(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_38() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_422(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_364(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_423(iVar0, 1, 0);
		if (!func_283(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_424(&(Var2[iVar34])))
				{
					if (!bParam1 || func_394(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_365(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_423(iVar0, 0, 1);
		if (!func_283(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_425(&(Var9[iVar41])))
				{
					if (!bParam1 || func_394(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_366(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_355(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_367(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_368(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_355(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_369(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_370(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_371(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_194(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_391(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_427(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_426(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_194(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_390(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_427("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_388(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_372(struct<17> Param0)
{
	if (!func_285(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_373(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_428(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_429(iParam0))
		{
			return false;
		}
		if (!func_428(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_374(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_375(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_429(iParam0);
	}
	return true;
}

bool func_376(int iParam0, int iParam1, int iParam2)
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

bool func_377(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_38() == -1)
	{
		if (func_430(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

int func_378(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_189(iParam0, 0) && !func_387(func_302(iParam0), 2))
	{
		return 0;
	}
	if (func_292(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_267(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_259(bParam3), iParam0);
}

bool func_379(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_189(iParam0, 0) && !func_387(func_302(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_380(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_381(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_431(iParam1, 1) && !func_432(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_427(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_192(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_391((iVar1 + func_433(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_427(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_192(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_390((iVar3 + func_433(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_427("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_387(func_302(iParam1), 2))
	{
		if (!func_434(func_302(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_189(iParam1, 0))
	{
		if (!func_314(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_382()
{
	return Var0;
}

bool func_383(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_189(uParam1->f_8, 0) && !func_387(func_302(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_211(iParam2, 128))
	{
		if (func_355(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_211(iParam2, 16))
	{
		if (!func_413(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_384(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_385(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_435(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_387(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_388(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_286(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_390(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_391(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_392(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_393(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_394(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_389()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_390(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_38() == 0)
	{
		return func_436(iParam0);
	}
	return iParam0 <= func_437();
}

bool func_391(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

int func_392(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_204(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_350(0) };
	Var0.f_4 = func_438(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_259(0), &Var5, 0);
	return iVar9;
}

int func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_292(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_439(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_440(iParam0, 0);
	}
	if (func_267(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_259(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_441(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_259(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_395(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_204(iParam0, -887064662))
	{
		return true;
	}
	return func_396(iParam0);
}

bool func_396(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	if (func_204(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_442(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_189(iParam1, 0))
	{
		return 0;
	}
	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_444(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_445(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_398(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (!func_395(iParam0) && !func_396(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_446(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_447(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_448(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_449(iVar15, iVar1);
			if (func_189(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_450(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_393(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_452(iVar16, func_451(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_453(iVar1);
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	iParam0 = func_442(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_189(iParam1, 0))
	{
		return 0;
	}
	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_444(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_400(int iParam0)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_401(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_259(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_402(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_403(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_329(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_329(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_404(int iParam0)
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
	func_454(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_405(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_455(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_404(iParam0);
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
						func_405(iVar3, iParam1, 0, 1, 0, 0);
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
			func_456(&Var6, uVar4);
		}
	}
}

void func_406(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_407(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_246(91));
	if (func_457(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

struct<7> func_408(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_412(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_458((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_382() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_413(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_459(uParam1->f_8, iParam0, uVar0, 2048) || func_459(uParam1->f_8, iParam0, uVar0, 32768)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 4) || func_459(uParam1->f_8, iParam0, uVar0, 256)) || func_459(uParam1->f_8, iParam0, uVar0, 65536)) || func_459(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 1) || func_459(uParam1->f_8, iParam0, uVar0, 8)) || func_459(uParam1->f_8, iParam0, uVar0, 65536)) || func_459(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_459(uParam1->f_8, iParam0, uVar0, 1) || func_459(uParam1->f_8, iParam0, uVar0, 16)) || func_459(uParam1->f_8, iParam0, uVar0, 2)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_459(uParam1->f_8, iParam0, uVar0, 8) || func_459(uParam1->f_8, iParam0, uVar0, 4096)) || func_459(uParam1->f_8, iParam0, uVar0, 256)) || func_459(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_414(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_296(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_296(iParam1, 2, 0, 0);
	return -1;
}

int func_415(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_296(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_416()
{
	return (func_284(-1185145312, 0, 0, 0) > 0 && func_133(func_270(889965687, func_350(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_417(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_259(0);
	*uParam1 = { func_270(iParam0, func_351(0), iParam3, 0) };
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

bool func_418(struct<2> Param0)
{
	return func_460(Param0, 5, 8);
}

int func_419(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_423(iVar0, 1, 0);
		if (!func_286(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_424(&(Var2[iVar34])))
				{
					if (!bParam1 || func_394(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_420(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_423(iVar0, 0, 1);
		if (!func_286(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_425(&(Var9[iVar41])))
				{
					if (!bParam1 || func_394(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_421(int iParam0, int iParam1, bool bParam2)
{
	if (!func_387(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_38() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_461(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_422(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_189(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_423(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_424(int iParam0)
{
	return func_355(iParam0) == 1946043663;
}

bool func_425(int iParam0)
{
	return func_355(iParam0) == -126813555;
}

int func_426(int iParam0)
{
	return (iParam0 / 100);
}

void func_427(char* sParam0)
{
	Global_1915715->f_22470 = func_462(sParam0, 10000, 0, 0, 0, 1);
}

bool func_428(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_429(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_296(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_296(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_296(*iParam0, 2, 0, 0);
		return false;
	}
	func_296(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

bool func_430(int iParam0)
{
	return func_292(iParam0) == -427144552;
}

bool func_431(int iParam0, bool bParam1)
{
	if (!func_204(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_204(iParam0, -1090933859))
		{
			return func_273(iParam0, 1) != 0;
		}
		if ((func_363(iParam0, -915411861, 0) || func_363(iParam0, 600942249, 0)) || func_363(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_432(int iParam0, bool bParam1)
{
	iVar0 = func_463(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_370(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_388(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_433(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_192(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_434(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!func_464(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_345(0)) && !func_389());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_390(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_391(iVar32))
			{
			}
			else
			{
				iVar33 = func_394(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

void func_435(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_465(&(uParam0->f_4));
}

bool func_436(int iParam0)
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

int func_437()
{
	if (func_38() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_439(int iParam0, int iParam1)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_292(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_204(iParam0, 1399091007))
	{
		func_466(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_467(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_468(&Var0, func_351(0));
	}
	if (!func_469(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_470(iVar14);
	return uVar15;
}

struct<4> func_441(int iParam0, bool bParam1)
{
	Var0 = { func_269(iParam0, bParam1, 0) };
	return func_270(iParam0, Var0, Var0.f_4, bParam1);
}

int func_442(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_443(int iParam0)
{
	iParam0 = func_442(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

int func_444(int iParam0)
{
	iParam0 = func_442(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_445(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_446(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_448(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_449(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_450(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_451(int iParam0)
{
	if (func_204(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_204(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_204(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_189(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_453(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_454(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_455(int iParam0, int iParam1, int iParam2)
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

void func_456(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_471(*uParam0);
}

bool func_457(int iParam0)
{
	return iParam0 != 0;
}

bool func_458(var uParam0)
{
	if (!func_129(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_459(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_141(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_460(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_160(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_472(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_461(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_387(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_473(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

var func_462(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_463(int iParam0, bool bParam1)
{
	if (!func_431(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_273(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_273(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_273(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_273(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_273(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_273(-611782825, 1);
	}
	return func_273(iParam0, 1);
}

bool func_464(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_387(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_474(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_465(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

void func_466(int iParam0, var uParam1, var uParam2)
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

struct<14> func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_468(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_469(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_259(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0)
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

void func_471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_472(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_241(Param0);
	}
	return -1;
}

bool func_473(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_474(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_355(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

