void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (!_0x9e4ef615e307fbbe() && func_3())
	{
		func_4();
		func_5();
		func_6();
		wait(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	_0xe7282390542f570d(iLocal_15);
	if (network_is_game_in_progress())
	{
		func_8();
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(2))
	{
		switch (get_event_at_index(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (!does_entity_exist(Local_18))
	{
		return;
	}
	if (is_ped_injured(Local_18))
	{
		iLocal_13 = 0;
		if (!is_string_null_or_empty(&(Local_18.f_18)) && !has_script_loaded(&(Local_18.f_18)))
		{
			if (func_12())
			{
				func_13(0);
			}
		}
		return;
	}
	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				Local_18.f_7 = _get_scenario_point_type_ped_is_using(Local_18);
				if (Local_18.f_7 == -630818830)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER_CHAIN_GANG", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_chain_gang", 32);
					Local_18.f_8.f_2 = 0;
				}
				else if (Local_18.f_7 == -1325774943)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_player", 32);
					Local_18.f_8.f_2 = 0;
				}
				else
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster", 32);
					Local_18.f_8.f_2 = 0;
				}
				Local_18.f_6 = _get_scenario_point_ped_is_using(Local_18, false);
				Local_18.f_5 = _get_scenario_point_entity(Local_18.f_6, &(Local_18.f_1));
				Local_18.f_8.f_1 = Local_18.f_6;
				Local_18.f_8 = Local_18.f_5;
				Local_18.f_8.f_3 = 1;
				Local_18.f_22 = 1024;
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				request_script(&(Local_18.f_18));
				func_13(1);
				func_16();
			}
			func_17(2);
			break;
		case 2:
			if (func_15())
			{
				func_16();
			}
			if (has_script_loaded(&(Local_18.f_18)) && is_ped_active_in_scenario(Local_18, 0))
			{
				Local_18.f_23 = start_new_script_with_args(&(Local_18.f_18), &(Local_18.f_8), 10, Local_18.f_22);
				set_script_as_no_longer_needed(&(Local_18.f_18));
				func_17(3);
			}
			break;
		case 3:
			if (func_15())
			{
				func_16();
			}
			if ((!is_ped_using_any_scenario(Local_18) && _get_number_of_references_of_script_with_name_hash(493105444) == 0) && _get_number_of_references_of_script_with_name_hash(2124539575) == 0)
			{
				iLocal_13 = 0;
			}
			break;
	}
}

void func_7()
{
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_18(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_20(&iVar0);
	}
}

bool func_12()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_34))
	{
		return true;
	}
	return false;
}

void func_13(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

int func_14()
{
	return Local_18.f_25;
}

bool func_15()
{
	return Local_18.f_24;
}

void func_16()
{
	Local_18.f_24 = 0;
}

void func_17(int iParam0)
{
	Local_18.f_25 = iParam0;
	func_21();
}

void func_18(int iParam0)
{
	Local_18 = iParam0->f_1;
}

void func_19(int iParam0)
{
	if ((Local_18.f_25 >= 3 && _get_number_of_references_of_script_with_name_hash(493105444) == 0) && _get_number_of_references_of_script_with_name_hash(2124539575) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_20(int iParam0)
{
}

void func_21()
{
	Local_18.f_24 = 1;
}

