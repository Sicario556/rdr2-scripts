void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_18 = 1f;
	fLocal_19 = 1f;
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
	if (is_ped_injured(Global_34) || func_12() != 0)
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_20 && has_anim_event_fired(Global_34, 442509369))
	{
		_0xeb8886e1065654cd(Global_34, 4, "ALL", 0.5f);
		_0xeb8886e1065654cd(Global_34, 6, "ALL", 0.5f);
		_0xeb8886e1065654cd(Global_34, 1, "ALL", 0.5f);
		_0xa7a806677f8de138(Global_34);
		bLocal_20 = true;
		iLocal_13 = 0;
		if (func_13(1))
		{
			func_14(-0.3f, 0);
		}
	}
	if (!is_ped_using_any_scenario(Global_34))
	{
		iLocal_13 = 0;
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
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_17(&iVar0);
	}
}

int func_12()
{
	return Global_1572887->f_13;
}

bool func_13(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_14(float fParam0, bool bParam1)
{
	func_18((Global_1940085->f_9 + fParam0), bParam1);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

void func_18(float fParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_34) || is_ped_in_any_vehicle(Global_34, false))
	{
		if (fParam0 >= func_19())
		{
			Global_1940085->f_9 = (func_19() - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1940085->f_9 = 0f;
		_0x06d26a96ca1bca75(Global_34, 10, Global_1940085->f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940085->f_14)
	{
		Global_1940085->f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940085->f_9 = 1f;
	}
	else
	{
		Global_1940085->f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1940085->f_12 = 1;
	}
}

float func_19()
{
	return 0.75f;
}

