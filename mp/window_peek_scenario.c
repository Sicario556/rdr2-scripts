void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_29 = 20;
	iLocal_30 = 10;
	iLocal_31 = 3;
	vLocal_32 = { -287.356f, 818.9039f, 119.8698f };
	vLocal_35 = { -13.3335f, 0.0591f, -170.8708f };
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
	if (is_ped_injured(Global_34))
	{
		iLocal_13 = 0;
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
	switch (iLocal_19)
	{
		case 0:
			iLocal_20 = create_camera_with_params(26379945, -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			func_15(1);
			func_16(1);
			break;
		case 1:
			if (get_entity_speed(Global_34) > 0f)
			{
				return;
			}
			set_cam_active(iLocal_20, true);
			render_script_cams(true, true, 4000, true, false, 0);
			func_16(2);
			break;
		case 2:
			if (is_cam_interpolating(iLocal_20))
			{
				return;
			}
			iLocal_21 = create_camera_with_params(26379945, vLocal_32, vLocal_35, 40f, false, 2);
			set_cam_active_with_interp(iLocal_21, iLocal_20, 4000, 3, 1);
			destroy_cam(iLocal_20, false);
			func_16(3);
			break;
		case 3:
			if (is_cam_interpolating(iLocal_21))
			{
				return;
			}
			func_16(4);
			break;
		case 4:
			if (is_ped_using_any_scenario(Global_34))
			{
				if (!_0x0c3cb2e600c8977d(Global_34, 0))
				{
					func_17(&iLocal_21, 1);
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
	destroy_cam(iLocal_20, false);
	destroy_cam(iLocal_21, false);
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

bool func_12(int iParam0)
{
	return (uLocal_18 && iParam0) != 0;
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
	destroy_cam(iLocal_21, false);
	func_15(2);
}

void func_14()
{
	if (is_ped_using_any_scenario(Global_34))
	{
		if (_0x0c3cb2e600c8977d(Global_34, 0))
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
		clear_ped_tasks(Global_34, 1, 0);
		iLocal_13 = 0;
	}
}

void func_15(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	uLocal_18 = (uLocal_18 || iParam0);
}

void func_16(int iParam0)
{
	iLocal_19 = iParam0;
}

void func_17(int iParam0, bool bParam1)
{
	func_23(uLocal_22[0], uLocal_22[1], uLocal_22[2], uLocal_22[3], 529461124, 1410914475, -1497929239, 665185216, 2);
	if (iLocal_27 == &uLocal_22[2] && iLocal_28 == &uLocal_22[3])
	{
		if (iLocal_38 < get_game_timer())
		{
			iLocal_27 = 0;
			iLocal_28 = 0;
		}
	}
	else
	{
		iLocal_27 = &uLocal_22[2];
		iLocal_28 = &uLocal_22[3];
		iLocal_38 = get_game_timer() + 4000;
	}
	if (bParam1)
	{
		vLocal_39.f_2 = (-(to_float(&(uLocal_22[2])) / 127f) * IntToFloat(iLocal_29));
		vLocal_39.f_1 = ((-vLocal_39.z * IntToFloat(iLocal_31)) / IntToFloat(iLocal_29));
		if (is_look_inverted())
		{
			vLocal_39.x = ((to_float(&(uLocal_22[3])) / 127f) * IntToFloat(iLocal_30));
		}
		else
		{
			vLocal_39.x = (-(to_float(&(uLocal_22[3])) / 127f) * IntToFloat(iLocal_30));
		}
	}
	else
	{
		vLocal_39 = { 0f, 0f, 0f };
		iLocal_27 = 0;
		iLocal_28 = 0;
	}
	fVar0 = (30f * timestep());
	vVar1 = { vLocal_39 + vLocal_45 };
	vLocal_42.x = (vLocal_42.x + func_24((((vVar1.x - vLocal_42.x) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_1 = (vLocal_42.y + func_24((((vVar1.y - vLocal_42.y) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_2 = (vLocal_42.z + func_24((((vVar1.z - vLocal_42.z) * 0.05f) * fVar0), -3f, 3f));
	if (bLocal_48)
	{
		vLocal_42.x = func_24(vLocal_42.x, to_float(-iLocal_30), to_float(iLocal_30));
		vLocal_42.f_1 = func_24(vLocal_42.y, to_float(-iLocal_31), to_float(iLocal_31));
		vLocal_42.f_2 = func_24(vLocal_42.z, to_float(-iLocal_29), to_float(iLocal_29));
	}
	set_cam_params(*iParam0, vLocal_32, vLocal_35 + vLocal_42, 40f, 0, 1, 1, 2, 1, 0);
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

