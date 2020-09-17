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
		if (!is_string_null_or_empty(&(Local_18.f_25)) && !has_script_loaded(&(Local_18.f_25)))
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
				Local_18.f_30 = _get_scenario_point_type_ped_is_using(Local_18);
				StringCopy(&(Local_18.f_25), "doc_treasure_map", 32);
				StringCopy(&(Local_18.f_1), "MAP", 32);
				Local_18.f_6 = _get_scenario_point_ped_is_using(Local_18, false);
				Local_18.f_5 = _get_scenario_point_entity(Local_18.f_6, &(Local_18.f_1));
				if (does_entity_exist(Local_18.f_5))
				{
				}
				iVar0 = get_entity_model(Local_18.f_5);
				switch (iVar0)
				{
					case -764811328:
						break;
					case -1177733273:
						break;
					case 17186352:
						break;
					default:
						break;
				}
				Local_18.f_15.f_1 = Local_18.f_6;
				Local_18.f_15 = Local_18.f_5;
				Local_18.f_15.f_3 = 1;
				Local_18.f_29 = 1024;
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				request_script(&(Local_18.f_25));
				func_18();
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
			if ((has_script_loaded(&(Local_18.f_25)) && is_ped_active_in_scenario(Local_18, 0)) && func_19())
			{
				Local_18.f_31 = start_new_script_with_args(&(Local_18.f_25), &(Local_18.f_15), 10, Local_18.f_29);
				set_script_as_no_longer_needed(&(Local_18.f_25));
				func_17(3);
				fVar1 = 0f;
				if (is_entity_playing_anim(Local_18, "script_re@murder_campfire@knife_note", "enter", 1))
				{
					fVar1 = _get_entity_anim_current_time(Local_18, "script_re@murder_campfire@knife_note", "enter");
				}
				iLocal_77 = _get_scenario_point_entity(Local_18.f_6, "Knife");
				iLocal_78 = _get_scenario_point_entity(Local_18.f_6, "Head");
				if (does_entity_exist(iLocal_77))
				{
					if (_0x6ef4e31b4d5d2da0(Local_18.f_6, "Knife"))
					{
						if (play_entity_anim(iLocal_77, "enter_knife", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
						{
						}
					}
					if (does_entity_exist(iLocal_78))
					{
						if (_0x6ef4e31b4d5d2da0(Local_18.f_6, "Head"))
						{
							if (play_entity_anim(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
				else if (func_20() == 1)
				{
					if (does_entity_exist(iLocal_78))
					{
						if (_0x6ef4e31b4d5d2da0(Local_18.f_6, "Head"))
						{
							if (play_entity_anim(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				disable_all_control_actions(0);
				enable_control_action(1, -1450761377, true);
				enable_control_action(1, -771458680, true);
				enable_control_action(1, -1067115200, true);
				enable_control_action(1, -1898369514, true);
				enable_control_action(1, 150518893, true);
				enable_control_action(1, -1578429613, true);
				if (does_entity_exist(iLocal_78))
				{
					vVar2 = { get_entity_coords(iLocal_78, true, false) };
					Local_52 = { vVar2 };
					Local_52.f_7 = 0;
					_0x66f9eb44342bb4c5(Global_34, &Local_52);
				}
			}
			if (func_15())
			{
				func_16();
			}
			if (does_entity_exist(iLocal_78))
			{
				if (func_20() == 1 || func_20() == 9)
				{
					if ((is_entity_playing_anim(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1) && _get_entity_anim_current_time(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.49f) || (is_entity_playing_anim(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1) && _get_entity_anim_current_time(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.9f))
					{
						if (is_entity_playing_anim(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1))
						{
							stop_entity_anim(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", -1000f);
						}
						else if (is_entity_playing_anim(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1))
						{
							stop_entity_anim(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", -1000f);
						}
						freeze_entity_position(iLocal_78, false);
						activate_physics(iLocal_78);
						set_entity_as_no_longer_needed(&iLocal_78);
					}
				}
			}
			if (!is_ped_using_any_scenario(Local_18) && _get_number_of_references_of_script_with_name_hash(1826025856) == 0)
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
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_23(&iVar0);
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
	return Local_18.f_33;
}

bool func_15()
{
	return Local_18.f_32;
}

void func_16()
{
	Local_18.f_32 = 0;
}

void func_17(int iParam0)
{
	Local_18.f_33 = iParam0;
	func_24();
}

void func_18()
{
	if (Local_18.f_30 == 1220378078)
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@knife_note", 64);
	}
	else if (Local_18.f_30 == 579020276)
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@head_note", 64);
	}
	if (!is_string_null_or_empty(&(Local_18.f_7)))
	{
		request_anim_dict(&(Local_18.f_7));
	}
}

bool func_19()
{
	if (!is_string_null_or_empty(&(Local_18.f_7)))
	{
		if (has_anim_dict_loaded(&(Local_18.f_7)))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_20()
{
	return Global_1896622->f_41;
}

void func_21(int iParam0)
{
	Local_18 = iParam0->f_1;
}

void func_22(int iParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(1826025856) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_23(int iParam0)
{
}

void func_24()
{
	Local_18.f_32 = 1;
}

