void __EntryFunction__()
{
	iLocal_0 = 1;
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
			if (!func_12(3))
			{
				func_13(1);
				func_14();
				func_15(3);
			}
		}
	}
	switch (iLocal_6)
	{
		case 0:
			*vLocal_49[0] = { func_16() };
			*vLocal_49[1] = { func_17() };
			*vLocal_49[2] = { func_18() };
			func_19(Global_35, &vLocal_49, &iVar0);
			iLocal_59 = func_20(iVar0);
			func_15(1);
			break;
		case 1:
			if (!func_21(&uLocal_7))
			{
				_0x276aaf0f1c7f2494(iLocal_59, 1);
				func_22(&uLocal_7, 0);
			}
			else if (func_23(&uLocal_7, 3f))
			{
				lock_minimap_angle(0);
				func_24(&uLocal_7);
				func_25(1);
				func_15(2);
			}
			break;
		case 2:
			if (!func_26())
			{
				return;
			}
			func_27(&uLocal_10, 1, 1, 0, 0);
			if (func_23(&uLocal_7, 3.5f))
			{
				func_14();
				func_13(1);
				func_15(3);
			}
			break;
		case 3:
			break;
	}
	if (!is_ped_using_any_scenario(Global_35))
	{
		unlock_minimap_angle();
		clear_ped_tasks(Global_35, 1, 0);
		_0x276aaf0f1c7f2494(iLocal_59, 0);
		iLocal_0 = 0;
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
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_28(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_29(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_30(&iVar0);
	}
}

bool func_12(int iParam0)
{
	return (uLocal_5 && iParam0) != 0;
}

void func_13(int iParam0)
{
	if (!func_12(iParam0))
	{
		return;
	}
	iParam0 = (iParam0 - (iParam0 && iParam0));
}

void func_14()
{
	func_31(&uLocal_10);
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	_0x276aaf0f1c7f2494(iLocal_59, 0);
	func_25(3);
}

void func_15(int iParam0)
{
	iLocal_6 = iParam0;
}

Vector3 func_16()
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_17()
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_18()
{
	return -281.07f, 815.24f, 118.42f;
}

Vector3 func_19(int iParam0, var uParam1, int iParam2)
{
	iVar5 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		*iParam2 = iVar0;
		fVar6 = func_32(iParam0, *(*uParam1)[iVar0], 1);
		if (func_33(*(*uParam1)[iVar0]))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *(*uParam1)[iVar0] };
		}
		else if (fVar4 > fVar6)
		{
			vVar1 = { *(*uParam1)[iVar0] };
		}
		iVar0++;
	}
	return vVar1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 841127028;
		case 1:
			return 925575409;
		case 2:
			return -855228377;
		default:
			break;
	}
	return 0;
}

bool func_21(var uParam0)
{
	return func_34(*uParam0, 1);
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_24(uParam0);
	}
}

bool func_23(var uParam0, float fParam1)
{
	if (!func_21(uParam0))
	{
		return false;
	}
	if (func_35(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_24(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_25(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	uLocal_5 = (uLocal_5 || iParam0);
}

bool func_26()
{
	if (!func_37(iLocal_59))
	{
		return false;
	}
	iVar0 = func_38(iLocal_59, 0, 0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	vVar1 = { get_offset_from_entity_in_world_coords(iVar0, func_39()) };
	if (func_33(vVar1))
	{
		return false;
	}
	vVar4 = { func_40() };
	switch (iLocal_59)
	{
		case 841127028:
			fVar7 = 115f;
			break;
		case 925575409:
			fVar7 = 10f;
			break;
		case -855228377:
			fVar7 = 100f;
			break;
	}
	fVar7 = (fVar7 + vVar4.z);
	func_41(&uLocal_10, vVar1, vVar4.x, vVar4.y, fVar7, 35f, 20, 10, 1077936128, 1101004800, 1, 0, 0.24f, 0, 0, 1044549468);
	func_25(2);
	return true;
}

void func_27(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = floor((get_disabled_control_unbound_normal(2, 1025725594) * 127f));
		uParam0->f_29[3] = floor((get_disabled_control_unbound_normal(2, -348049185) * 127f));
	}
	else
	{
		uParam0->f_29[2] = floor((get_control_unbound_normal(2, 1025725594) * 127f));
		uParam0->f_29[3] = floor((get_control_unbound_normal(2, -348049185) * 127f));
	}
	if (&uParam0->f_29[2] != 0 || &uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < get_game_timer())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = get_game_timer() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(to_float(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
		if (is_look_inverted())
		{
			uParam0->f_13 = ((to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
		else
		{
			uParam0->f_13 = (-(to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30f * timestep());
	if (!func_42(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + get_frame_time());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_43(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_44((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_44((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_44((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_44(uParam0->f_19, to_float(-uParam0->f_26), to_float(uParam0->f_26));
		uParam0->f_19.f_1 = func_44(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_44(uParam0->f_19.f_2, to_float(-uParam0->f_25), to_float(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (to_float(&(uParam0->f_29[1])) < 0f)
			{
				uParam0->f_22 = (uParam0->f_22 + IntToFloat(round(((to_float(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
			}
		}
		else
		{
			uParam0->f_22 = (uParam0->f_22 + IntToFloat(round(((to_float(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
		}
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * get_frame_time()) * (2.5f / 0.65f)));
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

void func_28(int iParam0)
{
}

void func_29(int iParam0)
{
}

void func_30(int iParam0)
{
}

void func_31(var uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (is_cam_active(*uParam0))
		{
			set_cam_active(*uParam0, false);
		}
		destroy_cam(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		unlock_minimap_angle();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

float func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_33(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_34(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_35(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_45(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_46() - uParam0->f_1);
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_46() - fParam1);
	func_47(uParam0, 1);
	func_48(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_37(int iParam0)
{
	return iParam0 != 0;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_49(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!is_entity_an_object(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

Vector3 func_39()
{
	return 0.537029f, 0.426005f, 1.6552f;
}

Vector3 func_40()
{
	return -7.766f, 0f, 175.2488f;
}

void func_41(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = fParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	set_cam_active(*uParam0, true);
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		shake_cam(*uParam0, "HAND_SHAKE", fParam17);
	}
	render_script_cams(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		set_cam_near_clip(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		lock_minimap_angle(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_42(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_43(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

bool func_45(var uParam0)
{
	return func_34(*uParam0, 2);
}

float func_46()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_48(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_49(int iParam0, int iParam1)
{
	func_50(iParam0, 0, 0);
	if (func_51(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_51(int iParam0)
{
	if (func_37(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

