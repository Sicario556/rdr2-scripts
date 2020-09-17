void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	network_set_script_ready_for_events(false);
	if (has_force_cleanup_occurred(4))
	{
		func_1();
	}
	while (true)
	{
		while (_event_manager_is_event_pending(iScriptParam_0))
		{
			if (_event_manager_peek_event(iScriptParam_0, &vVar0))
			{
				switch (vVar0.x)
				{
					case -493190640:
						if (vVar0.z == 1535628899)
						{
							Global_20 = 1;
						}
						break;
				}
				_event_manager_pop_event(iScriptParam_0);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	network_set_script_ready_for_events(true);
	terminate_this_thread();
}

