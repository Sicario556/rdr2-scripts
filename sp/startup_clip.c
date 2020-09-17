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
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		shutdown_loading_screen();
		do_screen_fade_in(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1();
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
	func_1();
	func_2();
	if (_0x9eeb007317fa3b9c())
	{
		_0xceec64bd27a59312(1);
	}
	_game_transition_manager_shutdown();
	func_3(0);
	terminate_this_thread();
}

void func_1()
{
	if (network_is_in_session())
	{
		if (!_0x424b17a7dc5c90bc(player_id()))
		{
			return;
		}
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_252)))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887->f_252 = { Var0 };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887->f_164.f_61 = 0;
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

void func_3(int iParam0)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, -1);
	}
	func_8(4);
	func_9(1);
}

void func_4()
{
	Global_1572887->f_164.f_60 = get_game_timer();
}

void func_5(int iParam0)
{
	Global_1572887->f_164.f_1 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887->f_164 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	Global_1572864->f_16 = iParam0;
	Global_1572864->f_17 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

