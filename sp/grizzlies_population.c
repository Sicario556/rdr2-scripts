void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	bVar0 = true;
	while (bVar0)
	{
		wait(0);
	}
	func_2();
	terminate_this_thread();
}

void func_1()
{
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		func_2();
		terminate_this_thread();
	}
}

void func_2()
{
}

