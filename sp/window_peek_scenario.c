void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_16 = 20;
	iLocal_17 = 10;
	iLocal_18 = 3;
	vLocal_19 = { -287.356f, 818.9039f, 119.8698f };
	vLocal_22 = { -13.3335f, 0.0591f, -170.8708f };
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
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
	_0xe7282390542f570d(iLocal_2);
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
	if (iLocal_1 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
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
	if (is_ped_injured(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (func_12(1))
	{
		if (is_control_pressed(2, -416594956) || is_disabled_control_pressed(2, -416594956))
		{
			if (!func_12(2))
			{
				func_13();
			}
		}
	}
	func_14();
	switch (iLocal_6)
	{
		case 0:
			iLocal_7 = create_camera_with_params(26379945, -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			func_15(1);
			func_16(1);
			break;
		case 1:
			if (get_entity_speed(Global_35) > 0f)
			{
				return;
			}
			set_cam_active(iLocal_7, true);
			render_script_cams(true, true, 4000, true, false, 0);
			func_16(2);
			break;
		case 2:
			if (is_cam_interpolating(iLocal_7))
			{
				return;
			}
			iLocal_8 = create_camera_with_params(26379945, vLocal_19, vLocal_22, 40f, false, 2);
			set_cam_active_with_interp(iLocal_8, iLocal_7, 4000, 3, 1);
			destroy_cam(iLocal_7, false);
			func_16(3);
			break;
		case 3:
			if (is_cam_interpolating(iLocal_8))
			{
				return;
			}
			func_16(4);
			break;
		case 4:
			if (is_ped_using_any_scenario(Global_35))
			{
				if (!_0x0c3cb2e600c8977d(Global_35, 0))
				{
					func_17(&iLocal_8, 1);
				}
				else
				{
					func_16(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_7()
{
	destroy_cam(iLocal_7, false);
	destroy_cam(iLocal_8, false);
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_18(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_20(&iVar0);
	}
}

bool func_12(int iParam0)
{
	return (uLocal_5 && iParam0) != 0;
}

void func_13()
{
	if (func_12(2))
	{
		return;
	}
	func_21();
	disable_all_control_actions(0);
	func_22(0, 0);
	render_script_cams(false, true, 2000, true, false, 0);
	destroy_cam(iLocal_8, false);
	func_15(2);
}

void func_14()
{
	if (is_ped_using_any_scenario(Global_35))
	{
		if (_0x0c3cb2e600c8977d(Global_35, 0))
		{
			func_13();
		}
		return;
	}
	if (!func_12(2))
	{
		func_13();
	}
	else if (_0x251241caec707106())
	{
		func_21();
		disable_all_control_actions(0);
	}
	else
	{
		clear_ped_tasks(Global_35, 1, 0);
		iLocal_0 = 0;
	}
}

void func_15(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	uLocal_5 = (uLocal_5 || iParam0);
}

void func_16(int iParam0)
{
	iLocal_6 = iParam0;
}

void func_17(int iParam0, bool bParam1)
{
	func_23(uLocal_9[0], uLocal_9[1], uLocal_9[2], uLocal_9[3], 529461124, 1410914475, -1497929239, 665185216, 2);
	if (iLocal_14 == &uLocal_9[2] && iLocal_15 == &uLocal_9[3])
	{
		if (iLocal_25 < get_game_timer())
		{
			iLocal_14 = 0;
			iLocal_15 = 0;
		}
	}
	else
	{
		iLocal_14 = &uLocal_9[2];
		iLocal_15 = &uLocal_9[3];
		iLocal_25 = get_game_timer() + 4000;
	}
	if (bParam1)
	{
		vLocal_26.f_2 = (-(to_float(&(uLocal_9[2])) / 127f) * IntToFloat(iLocal_16));
		vLocal_26.f_1 = ((-vLocal_26.z * IntToFloat(iLocal_18)) / IntToFloat(iLocal_16));
		if (is_look_inverted())
		{
			vLocal_26.x = ((to_float(&(uLocal_9[3])) / 127f) * IntToFloat(iLocal_17));
		}
		else
		{
			vLocal_26.x = (-(to_float(&(uLocal_9[3])) / 127f) * IntToFloat(iLocal_17));
		}
	}
	else
	{
		vLocal_26 = { 0f, 0f, 0f };
		iLocal_14 = 0;
		iLocal_15 = 0;
	}
	fVar0 = (30f * timestep());
	vVar1 = { vLocal_26 + vLocal_32 };
	vLocal_29.x = (vLocal_29.x + func_24((((vVar1.x - vLocal_29.x) * 0.05f) * fVar0), -3f, 3f));
	vLocal_29.f_1 = (vLocal_29.y + func_24((((vVar1.y - vLocal_29.y) * 0.05f) * fVar0), -3f, 3f));
	vLocal_29.f_2 = (vLocal_29.z + func_24((((vVar1.z - vLocal_29.z) * 0.05f) * fVar0), -3f, 3f));
	if (bLocal_35)
	{
		vLocal_29.x = func_24(vLocal_29.x, to_float(-iLocal_17), to_float(iLocal_17));
		vLocal_29.f_1 = func_24(vLocal_29.y, to_float(-iLocal_18), to_float(iLocal_18));
		vLocal_29.f_2 = func_24(vLocal_29.z, to_float(-iLocal_16), to_float(iLocal_16));
	}
	set_cam_params(*iParam0, vLocal_19, vLocal_22 + vLocal_29, 40f, 0, 1, 1, 2, 1, 0);
}

void func_18(int iParam0)
{
}

void func_19(int iParam0)
{
}

void func_20(int iParam0)
{
}

void func_21()
{
	disable_control_action(1, -1450761377, false);
	disable_control_action(1, -771458680, false);
}

void func_22(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_unbound_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_unbound_normal(iParam8, iParam5) * 127f));
	*uParam2 = floor((get_control_unbound_normal(iParam8, iParam6) * 127f));
	*uParam3 = floor((get_control_unbound_normal(iParam8, iParam7) * 127f));
}

float func_24(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

