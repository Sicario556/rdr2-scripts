void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
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
	switch (iLocal_26)
	{
		case 0:
			if (_does_scenario_point_exist(iLocal_3))
			{
				iLocal_23 = _get_ped_using_scenario_point(iLocal_3);
				if (!is_entity_dead(iLocal_23) && is_ped_active_in_scenario(iLocal_23, 1))
				{
					iLocal_24 = _0x4d0d2e3d8bc000eb(iLocal_23, "p_fishingPole02x_PH_R_HAND", 0);
					if (does_entity_exist(iLocal_24))
					{
						Local_5.f_4 = "p_fishingPole02x_Bone_tip";
						iLocal_26 = 1;
					}
				}
			}
			break;
		case 1:
			func_12(iLocal_23, iLocal_24);
			if (!bLocal_25)
			{
				if (Local_5 == 1)
				{
					if (has_anim_event_fired(iLocal_23, 1205242210))
					{
						func_13();
						bLocal_25 = true;
					}
					else if (_0x02ebbb3989b7e695(iLocal_23))
					{
						func_13();
						bLocal_25 = true;
					}
				}
			}
			if (is_entity_dead(iLocal_23) || !is_ped_active_in_scenario(iLocal_23, 1))
			{
				iLocal_0 = 0;
			}
			break;
	}
}

void func_7()
{
	func_14();
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
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_17(&iVar0);
	}
}

void func_12(int iParam0, int iParam1)
{
	switch (Local_5)
	{
		case 0:
			if (((func_18() != 0 && does_entity_exist(iParam1)) && func_19()) && func_20(iParam1))
			{
				func_21(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (func_22(iParam0))
			{
				func_21(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (func_23())
			{
				func_21(1);
			}
			break;
		case 5:
			func_14();
			break;
	}
	if (((Local_5 == 1 || Local_5 == 2) || Local_5 == 3) || Local_5 == 4)
	{
		if (does_entity_exist(Local_5.f_5))
		{
			activate_physics(Local_5.f_5);
		}
		if (does_entity_exist(Local_5.f_6))
		{
			activate_physics(Local_5.f_6);
		}
	}
}

void func_13()
{
	if (Local_5 == 1)
	{
		func_21(2);
	}
}

void func_14()
{
	if (Local_5 == 0)
	{
		return;
	}
	set_model_as_no_longer_needed(Local_5.f_1);
	set_model_as_no_longer_needed(Local_5.f_2);
	set_model_as_no_longer_needed(Local_5.f_3);
	if (does_rope_exist(Local_5.f_8))
	{
		delete_rope(&(Local_5.f_8));
	}
	if (does_rope_exist(Local_5.f_9))
	{
		delete_rope(&(Local_5.f_9));
	}
	func_24(&(Local_5.f_5));
	func_24(&(Local_5.f_6));
	func_24(&(Local_5.f_7));
	func_21(0);
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

int func_18()
{
	return Global_1572887->f_12;
}

bool func_19()
{
	request_model(Local_5.f_1, false);
	request_model(Local_5.f_2, false);
	request_model(Local_5.f_3, false);
	if ((has_model_loaded(Local_5.f_1) && has_model_loaded(Local_5.f_2)) && has_model_loaded(Local_5.f_3))
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(Local_5.f_4))
	{
		Local_5.f_4 = "line_attach";
	}
	iVar0 = get_entity_bone_index_by_name(iParam0, Local_5.f_4);
	vVar1 = { get_world_position_of_entity_bone(iParam0, iVar0) };
	if (!does_entity_exist(Local_5.f_5))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - Local_5.f_10);
		Local_5.f_5 = create_object(Local_5.f_1, vVar4, false, true, false, false, true);
		set_damping(Local_5.f_5, 0, Local_5.f_15);
		_0x978aa2323ed32209(Local_5.f_5, 0f);
		force_entity_ai_and_animation_update(Local_5.f_5, true);
	}
	if (!does_entity_exist(Local_5.f_6))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - (Local_5.f_10 + Local_5.f_11));
		Local_5.f_6 = create_object(Local_5.f_2, vVar4, false, true, false, false, true);
		set_damping(Local_5.f_6, 0, Local_5.f_15);
		_0x978aa2323ed32209(Local_5.f_6, 0f);
		force_entity_ai_and_animation_update(Local_5.f_6, true);
	}
	if (does_entity_exist(Local_5.f_5) && does_entity_exist(Local_5.f_6))
	{
		if (!does_rope_exist(Local_5.f_8))
		{
			vVar4 = { vVar1 };
			Local_5.f_8 = _add_rope_2(vVar4, 0f, 0f, 0f, Local_5.f_12, 8, false, -1, -1f);
			_0xd699e688b49c0fd2(Local_5.f_8, 0.5f, Local_5.f_10, Local_5.f_10, 1);
			_0x462ff2a432733a44(Local_5.f_8, iParam0, Local_5.f_5, 0f, 0f, 0f, 0f, 0f, 0f, Local_5.f_4, "rod_attach");
			_0x3c6490d940ff5d0b(Local_5.f_8, 0, 0, -1082130432, 1);
			_0xbb3e9b073e66c3c9(Local_5.f_8, 1, 1, 1, 0);
			_0x423c6b1f3786d28b(Local_5.f_8, 1);
			rope_set_update_order(Local_5.f_8, 1);
			_0xc89e7410a93ac19a(Local_5.f_8, 2f);
			_0x1d97da8acb5d2582(Local_5.f_8, 15);
		}
		if (!does_rope_exist(Local_5.f_9))
		{
			vVar4 = { get_entity_coords(Local_5.f_5, true, false) };
			Local_5.f_9 = _add_rope_2(vVar4, 0f, 0f, 0f, Local_5.f_11, 10, false, -1, -1f);
			_0xd699e688b49c0fd2(Local_5.f_9, 0.5f, Local_5.f_11, Local_5.f_11, 1);
			_0x462ff2a432733a44(Local_5.f_9, Local_5.f_5, Local_5.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			_0x3c6490d940ff5d0b(Local_5.f_9, 0, 0, -1082130432, 1);
			_0xbb3e9b073e66c3c9(Local_5.f_9, 1, 1, 1, 0);
			rope_set_update_order(Local_5.f_9, 1);
			_0xc89e7410a93ac19a(Local_5.f_9, 0f);
		}
	}
	return (does_rope_exist(Local_5.f_8) && does_rope_exist(Local_5.f_9));
}

void func_21(int iParam0)
{
	if (Local_5 != iParam0)
	{
		Local_5 = iParam0;
	}
}

bool func_22(int iParam0)
{
	if (!does_entity_exist(iParam0) || !does_rope_exist(Local_5.f_8))
	{
		return false;
	}
	if (Local_5.f_17 == 0)
	{
		_0x1fc92bdba1106bd2(Local_5.f_8, Local_5.f_13);
		start_rope_unwinding_front(Local_5.f_8);
		Local_5.f_17 = 1;
		func_25(iParam0);
	}
	else if (_0x3d69537039f8d824(Local_5.f_8) >= Local_5.f_12)
	{
		stop_rope_unwinding_front(Local_5.f_8);
		Local_5.f_17 = 0;
		return true;
	}
	return false;
}

bool func_23()
{
	if ((!does_rope_exist(Local_5.f_8) || !does_entity_exist(Local_5.f_5)) || !does_entity_exist(Local_5.f_6))
	{
		return false;
	}
	if (Local_5.f_17 == 0)
	{
		_0x1fc92bdba1106bd2(Local_5.f_8, Local_5.f_14);
		start_rope_winding(Local_5.f_8);
		Local_5.f_17 = 1;
	}
	else if (_0x3d69537039f8d824(Local_5.f_8) <= Local_5.f_10)
	{
		stop_rope_unwinding_front(Local_5.f_8);
		Local_5.f_17 = 0;
		set_damping(Local_5.f_5, 0, Local_5.f_15);
		set_damping(Local_5.f_6, 0, Local_5.f_15);
		return true;
	}
	return false;
}

void func_24(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

void func_25(int iParam0)
{
	if ((!does_entity_exist(iParam0) || !does_entity_exist(Local_5.f_5)) || !does_entity_exist(Local_5.f_6))
	{
		return;
	}
	vVar0 = { get_entity_coords(Local_5.f_5, true, false) };
	fVar3 = get_entity_heading(iParam0);
	vVar4 = { _get_object_offset_from_coords(vVar0, fVar3, 0f, 10f, 0f) };
	vVar7 = { func_26(vVar4 - vVar0) };
	fVar10 = 1f;
	fVar11 = 0f;
	func_27(&fVar10, &fVar11, 45f);
	vVar12 = { func_26(vVar7.x, vVar7.y, fVar11) };
	vVar15 = { vVar12 * FtoV((Local_5.f_12 * 5f)) };
	set_damping(Local_5.f_5, 0, Local_5.f_16);
	set_damping(Local_5.f_6, 0, Local_5.f_16);
	apply_force_to_entity(Local_5.f_5, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	apply_force_to_entity(Local_5.f_6, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	force_entity_ai_and_animation_update(Local_5.f_5, true);
	force_entity_ai_and_animation_update(Local_5.f_6, true);
}

Vector3 func_26(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_27(float fParam0, float fParam1, float fParam2)
{
	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * cos(fParam2)) - (fVar1 * sin(fParam2)));
	*fParam1 = ((fVar0 * sin(fParam2)) + (fVar1 * cos(fParam2)));
}

