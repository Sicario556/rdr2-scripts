void __EntryFunction__()
{
	func_1(-1);
	func_2();
}

void func_1(int iParam0)
{
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	network_set_script_is_safe_for_network_game();
}

void func_2()
{
	terminate_this_thread();
}

