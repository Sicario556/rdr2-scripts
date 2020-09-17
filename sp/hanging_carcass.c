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
	return Global_1572887->f_12;
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
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(uParam0->f_1, *(*Global_1425196)[iVar0], 0.1f, 0))
		{
			return 1;
		}
		iVar0++;
	}
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
	return Global_1898164->f_163;
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
	uParam0->f_42 = func_25(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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
	if (_does_scenario_point_exist(uParam0->f_49) && _0x9c54041bb66bcf9e(Global_35, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			task_look_at_coord(Global_35, func_24(uParam0), -1, 0, 21, 0);
			func_22(uParam0, 8);
		}
		if (has_anim_event_fired(Global_35, -1900650591))
		{
			task_look_at_entity(Global_35, uParam0->f_42, 5000, 0, 21, 0);
		}
		if (has_anim_event_fired(Global_35, 1244474073))
		{
			set_entity_visible(uParam0->f_43, false);
			set_entity_visible(uParam0->f_42, true);
			uParam0->f_44 = create_object(-950200242, uParam0->f_1, false, true, false, false, false);
			set_entity_collision(uParam0->f_44, false, false);
			attach_entity_to_entity_physically(uParam0->f_44, Global_35, 4, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216, 1065353216);
			func_22(uParam0, 1);
		}
		if (has_anim_event_fired(Global_35, -2118990041))
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
		if (has_anim_event_fired(Global_35, 519570738))
		{
			detach_entity(uParam0->f_44, true, true);
			set_entity_collision(uParam0->f_44, true, false);
			set_entity_collision(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		task_clear_look_at(Global_35);
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
		if (_0x758f081db204ddde(Global_35))
		{
			iVar0 = _0x14169fa823679e41(Global_35);
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
				if (vVar2.x == Global_35 && get_ped_index_from_entity_index(vVar2.y) == uParam0->f_42)
				{
					if (vVar2.z)
					{
						func_36(2, 530833824, 0, 0, 0, 0, 1065353216, 0);
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
		func_36(2, 530833824, 0, 0, 0, 0, 1065353216, 0);
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
	return func_37(_get_map_zone_at_coords(vParam0, 10));
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

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_38(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
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
		if (Global_35 == iParam0)
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
	return func_39(*uParam0, 1);
}

void func_29(var uParam0)
{
	func_40(uParam0, 0f);
}

bool func_30(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_41(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	iVar0 = get_ped_bone_index(uParam0->f_42, uParam0->f_50);
	iVar1 = get_ped_bone_index(uParam0->f_42, uParam0->f_51);
	iVar2 = func_42(uParam0->f_39, 0);
	iVar3 = func_42(uParam0->f_39, 1);
	vVar4 = { get_world_position_of_entity_bone(uParam0->f_43, iVar2) };
	vVar7 = { get_world_position_of_entity_bone(uParam0->f_43, iVar3) };
	_0xe1aadd0055d76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	_0xe1aadd0055d76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_32(var uParam0)
{
	iVar0 = get_ped_bone_index(uParam0->f_42, uParam0->f_50);
	iVar1 = func_42(uParam0->f_39, 2);
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
	if (Global_1425196->f_31 > 9 || Global_1425196->f_31 < 0)
	{
		Global_1425196->f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(*(*Global_1425196)[iVar0], uParam0->f_1, 0.1f, 0))
		{
			return;
		}
		iVar0++;
	}
	*(*Global_1425196)[Global_1425196->f_31] = { uParam0->f_1 };
	Global_1425196->f_31++;
}

void func_36(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_43(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_44(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_45(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_46(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_45(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_47(iParam1))
		{
			func_48(iParam0, 41788943);
		}
		else if (bParam5)
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
			func_49(iParam0, 0, 1);
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
			func_50(iParam0, 0);
			bVar0 = true;
		}
		func_51(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_52() - fParam1);
	func_53(uParam0, 1);
	func_54(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_41(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_55(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_52() - uParam0->f_1);
}

int func_42(int iParam0, int iParam1)
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

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_45(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_56();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_57(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_58(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_59())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_60(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_56();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_61(iVar1);
		func_63(func_62(), 0, 4000);
		func_64(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_65(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_67(func_66(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_44(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_68(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_69(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_69(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_67(func_66(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_44(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_68(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_69(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_69(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_66(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_70(10, 1);
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_47(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_48(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_71(iParam0, iParam1))
		{
			if (func_72(iParam0, iParam1))
			{
				if (func_73(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_74(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_49(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_50(int iParam0, bool bParam1)
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

void func_51(int iParam0, int iParam1)
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

float func_52()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_55(var uParam0)
{
	return func_39(*uParam0, 2);
}

int func_56()
{
	iVar0 = func_75();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_1() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_76(absf(fVar1) < 1f, func_76(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_58(int iParam0)
{
	if (!func_77(iParam0))
	{
		return false;
	}
	return func_78(iParam0);
}

bool func_59()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_62()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_63(int iParam0, bool bParam1, int iParam2)
{
	func_79((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_80(iParam0);
}

void func_64(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_81(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_65(bool bParam0)
{
	bVar3 = false;
	if (func_82(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_83(iVar5, &iVar2, &iVar0))
			{
				if (!func_84(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_85(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_86(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_56() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_56() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_87();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_66(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_67(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_69(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_88(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_70(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (!func_91(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

bool func_71(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_72(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_73(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_71(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_74(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_75()
{
	return Global_40.f_11095.f_35;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_77(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_78(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_79(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_92(bParam1);
	}
}

void func_80(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_81(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_82(int iParam0)
{
	if (!func_93(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	if (!func_93(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_84(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_85(int iParam0)
{
	return iParam0;
}

int func_86(int iParam0)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_87()
{
	iVar0 = func_56();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_88(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_89(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_90()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_91(int iParam0, int iParam1, var uParam2)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_92(bool bParam0)
{
	func_94(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_93(int iParam0, var uParam1)
{
	if (!func_95(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

void func_94(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_95(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

