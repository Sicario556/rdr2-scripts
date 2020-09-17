void __EntryFunction__()
{
	if (!_does_scenario_point_exist(ScriptParam_0.f_1) || func_1() != -1)
	{
		_0xe7282390542f570d(ScriptParam_0);
		terminate_this_thread();
	}
	Var0.f_40 = -950200242;
	Var0.f_41 = -227367034;
	Var0 = get_id_of_this_thread();
	Var0.f_1 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	Var0.f_4 = _get_scenario_point_heading(ScriptParam_0.f_1, true);
	Var0.f_43 = get_object_index_from_entity_index(_get_entity_scenario_point_is_attached_to(ScriptParam_0.f_1));
	Var0.f_39 = get_entity_model(Var0.f_43);
	StringCopy(&(Var0.f_22), "Dead_Hanging", 64);
	if (has_force_cleanup_occurred(523))
	{
		func_2(&Var0, 0);
		_0xe7282390542f570d(ScriptParam_0);
		terminate_this_thread();
	}
	if (func_3(&Var0) || func_4(&Var0))
	{
		_0xe7282390542f570d(ScriptParam_0);
		terminate_this_thread();
	}
	while (!func_5(&(ScriptParam_0.f_1)) && !func_6(&Var0))
	{
		wait(0);
	}
	func_2(&Var0, 0);
	_0xe7282390542f570d(ScriptParam_0);
	terminate_this_thread();
}

int func_1()
{
	return Global_1572887->f_13;
}

void func_2(var uParam0, bool bParam1)
{
	if (_does_scenario_point_exist(uParam0->f_49))
	{
		_delete_scenario_point(uParam0->f_49);
	}
	if (bParam1)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_44))
	{
		delete_object(&(uParam0->f_44));
	}
	if (does_entity_exist(uParam0->f_45))
	{
		delete_object(&(uParam0->f_45));
	}
	if (does_rope_exist(uParam0->f_46))
	{
		delete_rope(&(uParam0->f_46));
	}
	if (does_rope_exist(uParam0->f_47))
	{
		delete_rope(&(uParam0->f_47));
	}
	if (does_rope_exist(uParam0->f_48))
	{
		delete_rope(&(uParam0->f_48));
	}
	if (does_entity_exist(uParam0->f_42))
	{
		if (func_7(uParam0, 256))
		{
			if (!func_7(uParam0, 32))
			{
				set_ped_to_ragdoll(uParam0->f_42, 10000, 20000, 0, false, true, false);
			}
			set_ped_as_no_longer_needed(&(uParam0->f_42));
		}
		else
		{
			delete_ped(&(uParam0->f_42));
		}
		_0x7d4e70a67a651c71(1);
	}
	if (does_entity_exist(uParam0->f_43))
	{
		set_object_as_no_longer_needed(&(uParam0->f_43));
	}
}

int func_3(var uParam0)
{
	return 0;
}

int func_4(var uParam0)
{
	*vVar1[0] = { -2844.586f, 133.7118f, 183.6223f };
	*vVar1[1] = { -1008.624f, -544.7607f, 98.21857f };
	*vVar1[2] = { 2074.396f, 996.5762f, 111.6177f };
	*vVar1[3] = { 2832.072f, -1226.912f, 46.65f };
	*vVar1[4] = { -2255.234f, -1914.754f, 116.158f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_8(*vVar1[iVar0], uParam0->f_1, 5f, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_5(var uParam0)
{
	if ((_0x9e4ef615e307fbbe() || !_does_scenario_point_exist(*uParam0)) || func_9())
	{
		return true;
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_57)
	{
		case 0:
			if (func_10(uParam0))
			{
				func_11(uParam0, 1);
			}
			break;
		case 1:
			if (func_12(uParam0))
			{
				func_11(uParam0, 2);
			}
			break;
		case 2:
			if (func_13(uParam0))
			{
				func_11(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(uParam0))
			{
				if (func_15(3, uParam0))
				{
					func_11(uParam0, 5);
				}
				else
				{
					func_11(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_16(uParam0))
			{
				func_11(uParam0, 5);
			}
			break;
		case 5:
			if (func_17(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 6);
			}
			break;
		case 6:
			if (func_19(uParam0))
			{
				func_11(uParam0, 7);
			}
			break;
		case 7:
			if (func_20(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 8);
			}
			break;
		case 8:
			if (func_21(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 9);
			}
			break;
		case 9:
			break;
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0->f_56 && iParam1) != 0;
}

bool func_8(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_9()
{
	return Global_1900736->f_67;
}

bool func_10(var uParam0)
{
	vVar0 = { 799.362f, 1512.22f, 203.6078f };
	vVar3 = { 2558f, 795f, 75f };
	vVar6 = { -754f, -1284.5f, 42.75f };
	if (func_8(uParam0->f_1, vVar3, 60f, 1))
	{
		func_22(uParam0, 128);
		func_22(uParam0, 64);
	}
	if (func_8(uParam0->f_1, vVar6, 10f, 1))
	{
		func_22(uParam0, 64);
	}
	switch (uParam0->f_39)
	{
		case -143853107:
			iVar9 = get_random_int_in_range(0, 2);
			switch (func_23(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					iVar9 = 0;
					break;
			}
			if (func_8(uParam0->f_1, vVar0, 10f, 1))
			{
				iVar9 = 1;
			}
			if (func_7(uParam0, 128))
			{
				iVar9 = 0;
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = 1110710183;
					StringCopy(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = -885451903;
					break;
			}
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
		case -1545270676:
		case -146984653:
			iVar9 = get_random_int_in_range(0, 3);
			if (uParam0->f_39 == -146984653)
			{
				if (func_7(uParam0, 128))
				{
					iVar9 = get_random_int_in_range(0, 2);
				}
				else
				{
					iVar9 = 1;
				}
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = 252669332;
					StringCopy(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = -541762431;
					StringCopy(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 2:
					StringCopy(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = -1003616053;
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
		case 635622754:
			iVar9 = get_random_int_in_range(0, 2);
			switch (iVar9)
			{
				case 0:
					uParam0->f_38 = 490159652;
					break;
				case 1:
					uParam0->f_38 = 41707457;
					break;
			}
			uParam0->f_55 = 3;
			break;
		case 1148808695:
			break;
	}
	return true;
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_57 = iParam1;
}

bool func_12(var uParam0)
{
	request_model(uParam0->f_39, false);
	request_model(uParam0->f_38, false);
	_0xf008e0ba1fe1d644(1);
	if (func_15(0, uParam0))
	{
		request_model(uParam0->f_40, false);
	}
	if (func_15(1, uParam0))
	{
		request_model(uParam0->f_41, false);
	}
	if (!is_string_null_or_empty(&(uParam0->f_14)))
	{
		request_anim_dict(&(uParam0->f_14));
	}
	return true;
}

bool func_13(var uParam0)
{
	if ((!has_model_loaded(uParam0->f_39) || !has_model_loaded(uParam0->f_38)) || !_0x5e420ff293ee5472())
	{
		return false;
	}
	if (func_15(0, uParam0))
	{
		if (!has_model_loaded(uParam0->f_40))
		{
			return false;
		}
	}
	if (func_15(1, uParam0))
	{
		if (!has_model_loaded(uParam0->f_41))
		{
			return false;
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_14)))
	{
		if (!has_anim_dict_loaded(&(uParam0->f_14)))
		{
			return false;
		}
	}
	return true;
}

bool func_14(var uParam0)
{
	fVar0 = -90f;
	vVar1 = { uParam0->f_1 };
	_0xb6cbd40f8ea69e8a(uParam0->f_43);
	if (func_15(3, uParam0))
	{
		vVar1 = { func_24(uParam0) };
	}
	if (func_15(1, uParam0))
	{
		uParam0->f_45 = create_object(uParam0->f_41, vVar1, false, true, false, false, false);
		_0xb6cbd40f8ea69e8a(uParam0->f_45);
		set_entity_collision(uParam0->f_45, false, false);
	}
	uParam0->f_42 = func_25(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0);
	set_blocking_of_non_temporary_events(uParam0->f_42, true);
	_set_ped_scale(uParam0->f_42, 1f);
	set_ped_config_flag(uParam0->f_42, 186, false);
	set_ped_config_flag(uParam0->f_42, 243, true);
	set_entity_no_collision_entity(uParam0->f_42, uParam0->f_42, false);
	set_entity_collision(uParam0->f_42, false, false);
	_0xb6cbd40f8ea69e8a(uParam0->f_43);
	freeze_entity_position(uParam0->f_43, true);
	set_entity_collision(uParam0->f_43, false, false);
	if (func_15(3, uParam0))
	{
		func_26(uParam0->f_42, 1, 1);
		freeze_entity_position(uParam0->f_42, true);
	}
	if (func_7(uParam0, 128))
	{
		if (!is_string_null_or_empty(&(uParam0->f_30)))
		{
			apply_ped_damage_pack(uParam0->f_42, &(uParam0->f_30), 0f, 1f);
		}
	}
	func_27(uParam0, 0);
	return true;
}

bool func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_39 == -143853107;
		case 1:
			return (uParam1->f_39 == -146984653 || uParam1->f_39 == -1545270676);
		case 2:
			return uParam1->f_39 == 1148808695;
		case 3:
			return uParam1->f_39 == 635622754;
		default:
			break;
	}
	return false;
}

bool func_16(var uParam0)
{
	if (!is_string_null_or_empty(&(uParam0->f_14)))
	{
		task_play_anim(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
		freeze_entity_position(uParam0->f_42, true);
	}
	else
	{
		func_26(uParam0->f_42, 1, 1);
	}
	if (func_15(1, uParam0))
	{
		freeze_entity_position(uParam0->f_45, true);
	}
	return true;
}

bool func_17(var uParam0)
{
	if (!func_28(&(uParam0->f_52)))
	{
		func_29(&(uParam0->f_52));
		uParam0->f_5 = get_random_float_in_range(1f, 2f);
	}
	if (func_30(&(uParam0->f_52), uParam0->f_5))
	{
		if (is_entity_dead(uParam0->f_42))
		{
			freeze_entity_position(uParam0->f_42, false);
			set_entity_collision(uParam0->f_42, true, false);
			switch (uParam0->f_55)
			{
				case 0:
					func_31(uParam0);
					break;
				case 1:
				case 2:
				case 3:
					func_32(uParam0);
					break;
			}
			if (func_15(1, uParam0) || func_15(3, uParam0))
			{
				if (func_15(1, uParam0))
				{
					freeze_entity_position(uParam0->f_45, false);
				}
				func_33(uParam0);
			}
			return true;
		}
	}
	return false;
}

void func_18(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_19(var uParam0)
{
	bVar0 = false;
	if (func_7(uParam0, 64))
	{
		bVar0 = true;
	}
	else if (!_does_scenario_point_exist(uParam0->f_49))
	{
		if ((is_entity_attached(uParam0->f_42) || _0x7020839c7302d8ac(uParam0->f_42)) || (does_rope_exist(uParam0->f_46) && !_0x79c2bec82cfd7f7f(uParam0->f_46)))
		{
			func_34(uParam0);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		set_ped_to_ragdoll(uParam0->f_42, 1000, 60000, 0, false, true, false);
	}
	return bVar0;
}

bool func_20(var uParam0)
{
	if (func_15(0, uParam0))
	{
		if (!func_7(uParam0, 256))
		{
			if (_0xba208a8d6399a3ac(uParam0->f_42, 10) || _0xba208a8d6399a3ac(uParam0->f_42, 13))
			{
				_0x5a1a929c8b729b4a(uParam0->f_42);
				set_ped_to_ragdoll(uParam0->f_42, 1000, 60000, 0, false, true, false);
				set_entity_visible(uParam0->f_43, false);
				set_entity_visible(uParam0->f_42, true);
				func_35(uParam0);
				func_2(uParam0, 1);
				func_22(uParam0, 256);
				return true;
			}
		}
	}
	if (_does_scenario_point_exist(uParam0->f_49) && _0x9c54041bb66bcf9e(Global_34, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			task_look_at_coord(Global_34, func_24(uParam0), -1, 0, 21, 0);
			func_22(uParam0, 8);
		}
		if (has_anim_event_fired(Global_34, -1900650591))
		{
			task_look_at_entity(Global_34, uParam0->f_42, 5000, 0, 21, 0);
		}
		if (has_anim_event_fired(Global_34, 1244474073))
		{
			set_entity_visible(uParam0->f_43, false);
			set_entity_visible(uParam0->f_42, true);
			uParam0->f_44 = create_object(-950200242, uParam0->f_1, false, true, false, false, false);
			set_entity_collision(uParam0->f_44, false, false);
			attach_entity_to_entity_physically(uParam0->f_44, Global_34, 4, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216, 1065353216);
			func_22(uParam0, 1);
		}
		if (has_anim_event_fired(Global_34, -2118990041))
		{
			if (func_15(1, uParam0))
			{
				_0x4cfa2b7fae115ecb(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			}
			else if (func_15(3, uParam0))
			{
				_0x4cfa2b7fae115ecb(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			}
			else
			{
				_0x5a1a929c8b729b4a(uParam0->f_42);
			}
			func_22(uParam0, 4);
			return false;
		}
		if (func_7(uParam0, 4) && !func_7(uParam0, 32))
		{
			set_ped_to_ragdoll(uParam0->f_42, 1000, 60000, 0, false, true, false);
			func_27(uParam0, 1);
			func_22(uParam0, 32);
			func_35(uParam0);
		}
		if (has_anim_event_fired(Global_34, 519570738))
		{
			detach_entity(uParam0->f_44, true, true);
			set_entity_collision(uParam0->f_44, true, false);
			set_entity_collision(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		task_clear_look_at(Global_34);
		func_2(uParam0, 1);
		func_22(uParam0, 16);
		func_22(uParam0, 256);
		return true;
	}
	else if ((!_0x7020839c7302d8ac(uParam0->f_42) && !is_entity_attached(uParam0->f_42)) && ((func_15(1, uParam0) || func_15(3, uParam0)) && _0x79c2bec82cfd7f7f(uParam0->f_46)))
	{
		if (func_7(uParam0, 128))
		{
			_0x674b90be1115846d(uParam0->f_42, 1);
			func_27(uParam0, 1);
		}
		if (!func_7(uParam0, 64))
		{
			func_27(uParam0, 1);
		}
		func_22(uParam0, 256);
		func_35(uParam0);
		func_2(uParam0, 1);
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	if (!func_28(&(uParam0->f_52)))
	{
		if (_0x758f081db204ddde(Global_34))
		{
			iVar0 = _0x14169fa823679e41(Global_34);
			if ((does_entity_exist(iVar0) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == uParam0->f_42)
			{
				func_29(&(uParam0->f_52));
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar1) == 1376140891)
			{
				get_event_data(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_34 && get_ped_index_from_entity_index(vVar2.y) == uParam0->f_42)
				{
					if (vVar2.z)
					{
						return true;
					}
					else
					{
						return true;
					}
				}
				else if (vVar2.x == 0 || vVar2.y == 0)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	if (_0x61914209c36efddb(uParam0->f_42) == 5)
	{
		return true;
	}
	return false;
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_56 = (uParam0->f_56 || iParam1);
}

int func_23(vector3 vParam0)
{
	return func_36(_get_map_zone_at_coords(vParam0, 10));
}

Vector3 func_24(var uParam0)
{
	switch (uParam0->f_39)
	{
		case -143853107:
			iVar3 = 4;
			break;
		case -1545270676:
		case -146984653:
		case 635622754:
			iVar3 = 4;
			break;
	}
	vVar0 = { get_world_position_of_entity_bone(uParam0->f_43, iVar3) };
	return vVar0;
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_37(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	_0x6569f31a01b4c097(uParam0->f_42, 0, bParam1);
	_0x18ff3110cf47115d(uParam0->f_42, 7, bParam1);
}

bool func_28(var uParam0)
{
	return func_38(*uParam0, 1);
}

void func_29(var uParam0)
{
	func_39(uParam0, 0f);
}

bool func_30(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_40(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	iVar0 = get_ped_bone_index(uParam0->f_42, uParam0->f_50);
	iVar1 = get_ped_bone_index(uParam0->f_42, uParam0->f_51);
	iVar2 = func_41(uParam0->f_39, 0);
	iVar3 = func_41(uParam0->f_39, 1);
	vVar4 = { get_world_position_of_entity_bone(uParam0->f_43, iVar2) };
	vVar7 = { get_world_position_of_entity_bone(uParam0->f_43, iVar3) };
	_0xe1aadd0055d76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	_0xe1aadd0055d76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_32(var uParam0)
{
	iVar0 = get_ped_bone_index(uParam0->f_42, uParam0->f_50);
	iVar1 = func_41(uParam0->f_39, 2);
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 90f, 0f };
	switch (uParam0->f_38)
	{
		case 252669332:
			vVar5 = { -0.0125f, -0.03f, 0.0125f };
			vVar8 = { 90f, 0f, 90f };
			break;
		case -541762431:
			vVar2 = { -0.0125f, 0f, -0.025f };
			vVar8 = { 0f, 90f, 0f };
			break;
	}
	attach_entity_to_entity_physically(uParam0->f_45, uParam0->f_42, iVar1, iVar0, vVar5, vVar2, vVar8, -1f, 0, 1, 0, 0, 0, 1, 1065353216, 1065353216);
}

void func_33(var uParam0)
{
	if (func_15(3, uParam0))
	{
		iVar0 = 8;
		fVar1 = 0.2f;
	}
	else
	{
		iVar0 = 1;
		fVar1 = 0.3f;
	}
	uParam0->f_46 = _add_rope_2(uParam0->f_1, 0f, 0f, 0f, fVar1, iVar0, false, 1, -1f);
	if (func_15(3, uParam0))
	{
		_0xe9cd9a67834985a7(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	}
	else
	{
		_0xe9cd9a67834985a7(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);
	}
	_0x3c6490d940ff5d0b(uParam0->f_46, 0, 0, fVar1, 1);
	_0xf092b6030d6fd49c(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	_0x7a54d82227a139db(&(uParam0->f_46), 1);
	_0x76bad9d538bca1aa(uParam0->f_46, 0f);
	_0xb40ea9e0d2e2f7f3(uParam0->f_46, 1f);
	_0xdede679ed29dd4e7(uParam0->f_46, 1);
	_0xf1ea2a881eb7f2cd(uParam0->f_46, 1);
	_0x522fa3f490e2f7ac(uParam0->f_46, 1, 1);
	_0x2651ddc0ea269073(uParam0->f_46, 1f);
}

void func_34(var uParam0)
{
	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	switch (uParam0->f_39)
	{
		case -143853107:
			iVar0 = 1669298768;
			vVar1 = { 0.155f, -0.9f, 0f };
			break;
		case -1545270676:
		case 635622754:
			iVar0 = -1091256437;
			vVar1 = { -0.1f, -0.61f, 0f };
			break;
	}
	if (iVar0 != 0)
	{
		uParam0->f_49 = create_scenario_point(iVar0, _get_object_offset_from_coords(uParam0->f_1, uParam0->f_4, vVar1), uParam0->f_4, 0, 0, 0);
	}
}

void func_35(var uParam0)
{
	if (Global_1959343->f_31 > 9 || Global_1959343->f_31 < 0)
	{
		Global_1959343->f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(*(*Global_1959343)[iVar0], uParam0->f_1, 0.1f, 0))
		{
			return;
		}
		iVar0++;
	}
	*(*Global_1959343)[Global_1959343->f_31] = { uParam0->f_1 };
	Global_1959343->f_31++;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_37(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_42(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_43(iParam0, 0);
			bVar0 = true;
		}
		func_44(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_45() - fParam1);
	func_46(uParam0, 1);
	func_47(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_40(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_48(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_45() - uParam0->f_1);
}

int func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -143853107:
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 5;
			}
			break;
		case -1545270676:
		case -146984653:
		case 635622754:
			if (iParam1 == 3)
			{
				return 2;
			}
			if (iParam1 == 2)
			{
				return 4;
			}
			if (iParam1 == 0)
			{
				return 5;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
		case 1148808695:
			if (iParam1 == 2)
			{
				return 6;
			}
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
	}
	return 4;
}

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

float func_45()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_48(var uParam0)
{
	return func_38(*uParam0, 2);
}

