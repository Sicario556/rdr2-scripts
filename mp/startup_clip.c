void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	if (network_is_in_session())
	{
		_0xfd4272a137703449();
	}
	_game_transition_manager_init(-1329374618);
	set_fade_in_after_load(false);
	set_fade_in_after_death_arrest(false);
	_0x57c6525034e76eb0();
	wait(1000);
	if (!_0x9eeb007317fa3b9c())
	{
		if (_0xb3f2829907403c13())
		{
		}
	}
	if ((!is_screen_faded_in() && !is_screen_fading_in()) && !_0xfc4165c9165c166f())
	{
		shutdown_loading_screen();
		do_screen_fade_in(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1(0);
		func_2();
	}
	while (bVar0)
	{
		bVar0 = _0x9eeb007317fa3b9c();
		if (!bVar0)
		{
		}
		if (_0x9e4ef615e307fbbe())
		{
			bVar0 = false;
		}
		wait(0);
	}
	func_1(0);
	func_2();
	if (_0x9eeb007317fa3b9c())
	{
		_0xceec64bd27a59312(1);
	}
	_game_transition_manager_shutdown();
	func_3(0, -1);
	terminate_this_thread();
}

void func_1(bool bParam0)
{
	iVar0 = player_id();
	bVar1 = false;
	if (network_is_game_in_progress())
	{
		bVar1 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)) == iVar0;
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_360)) && (bParam0 || bVar1))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_360 = { Var2 };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887->f_266.f_63 = 0;
	Global_1572887->f_266.f_90 = 0;
	Global_1572887->f_266.f_1 = -1;
	if (Global_1572887->f_266.f_86 == 2)
	{
		Global_1572887->f_266.f_86 = 0;
	}
}

void func_3(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, iParam1);
	}
	func_8(4);
	func_9();
	func_10(1);
}

void func_4()
{
	Global_1572887->f_266.f_62 = get_game_timer();
}

void func_5(int iParam0)
{
	Global_1572887->f_266.f_2 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887->f_266 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_9()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

