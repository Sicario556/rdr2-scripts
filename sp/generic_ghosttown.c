void __EntryFunction__()
{
	func_1(iScriptParam_0);
	uLocal_0 = uLocal_0;
	while (func_2())
	{
		wait(0);
		uLocal_1 = uLocal_1;
	}
	func_3(iScriptParam_0);
}

void func_1(int iParam0)
{
	iParam0 = iParam0;
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		func_3(iParam0);
		if (network_get_this_script_is_network_script())
		{
		}
	}
}

bool func_2()
{
	return true;
}

void func_3(int iParam0)
{
	func_4(iParam0, 4);
	func_4(iParam0, 8);
	if (network_is_game_in_progress())
	{
		func_5();
	}
	else
	{
		terminate_this_thread();
	}
}

void func_4(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_5()
{
	terminate_this_thread();
}

