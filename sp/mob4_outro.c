void __EntryFunction__()
{
	iLocal_3 = -283162583;
	iLocal_4 = -1119301676;
	fLocal_5 = 0f;
	vLocal_6 = { 2114.573f, -606.6023f, 40.60275f };
	vLocal_9 = { 2098.055f, -756.3578f, 40.55793f };
	vLocal_12 = { 2111.296f, -655.2276f, 41.16518f };
	vLocal_15 = { 2033.488f, -428.7332f, 41.63809f };
	vLocal_18 = { 2404.619f, -522.8186f, 40.49999f };
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_164);
	}
	func_2(&Local_164, &uScriptParam_0);
	while (!func_3(&Local_164))
	{
		func_4(&Local_164);
		switch (func_5(Local_164))
		{
			case 0:
				if (func_6(&Local_164))
				{
					func_7(&Local_164, 1);
				}
				break;
			case 1:
				if (func_8(&Local_164))
				{
					func_7(&Local_164, 2);
				}
				break;
			case 2:
				if (func_9(&Local_164))
				{
					func_7(&Local_164, 3);
				}
				break;
			case 3:
				func_1(&Local_164);
				break;
		}
		wait(0);
	}
	func_1(&Local_164);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			if (does_entity_exist(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
	terminate_this_thread();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (_does_anim_scene_exist(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		take_ownership_of_anim_scene(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((_does_anim_scene_exist(uParam0->f_2) && _is_anim_scene_started(uParam0->f_2, false)) && !is_gameplay_cam_rendering())
		{
			set_bit(&(Global_1956580->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!_does_anim_scene_exist(uParam0->f_2) || !_is_anim_scene_started(uParam0->f_2, false)) || is_gameplay_cam_rendering())
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	if ((!func_21(uParam0) || !func_22()) || !func_23())
	{
		return false;
	}
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && _does_thread_exist(uParam0->f_1)) && is_thread_active(uParam0->f_1, false))
	{
		return false;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	if (!func_25())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_27(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_28(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	func_29();
	func_30();
	func_31();
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_32(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_27(iParam0, 56, 1);
		func_28(&(Global_1359489->f_40), 1);
	}
	func_33(iParam0, 0);
	func_34(iParam0, 4, 0);
	func_35(iParam0);
	func_36(iParam0);
	func_37(iParam0, 37, 1);
	bVar0 = func_38(Global_1360165[iParam0], 0);
	iVar1 = func_39(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_40(iParam0, 64, 1))
	{
		func_37(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_37(iParam0, 33, 1);
		func_37(iParam0, 34, 1);
		func_41(iParam0, 1056964608, -1, 1061158912);
		func_42(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_27(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_27(iParam0, 35, 1);
			if (bParam8)
			{
				func_27(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_43(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_37(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_27(iParam0, 33, 1);
		func_42(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_28(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_44(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_27(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_45(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_40(iParam0, 45, 1))
	{
		func_37(iParam0, 45, 1);
	}
	func_46(iParam0, 16, 1);
	func_37(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_38(func_47(iParam0), 0))
		{
			func_48(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_2))
	{
	}
	_0xed9582b3da8f02b4(2 + 6);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(var uParam0)
{
	if (!does_entity_exist(iLocal_22))
	{
		iLocal_22 = _get_anim_scene_ped(uParam0->f_2, "CreoleCaptain", false);
		set_entity_as_mission_entity(iLocal_22, true, true);
		return false;
	}
	if (!does_entity_exist(iLocal_24))
	{
		iLocal_24 = _get_anim_scene_vehicle(uParam0->f_2, "SKIFF", false);
		set_entity_as_mission_entity(iLocal_24, true, true);
		_0x838c216c2b05a009(iLocal_22, iLocal_24);
		freeze_entity_position(iLocal_24, false);
		return false;
	}
	if (!does_entity_exist(iLocal_25))
	{
		iLocal_25 = _get_anim_scene_object(uParam0->f_2, "p_skiff02x", false);
		set_entity_as_mission_entity(iLocal_25, true, true);
		_0xdfa1237f5228263f(iLocal_25, iLocal_22);
		return false;
	}
	return true;
}

bool func_22()
{
	if (!does_entity_exist(iLocal_23))
	{
		request_model(iLocal_3, false);
		if (has_model_loaded(iLocal_3))
		{
			iLocal_23 = create_vehicle(iLocal_3, vLocal_9, 2.28f, true, true, false, false);
			set_entity_as_mission_entity(iLocal_23, true, true);
		}
		return false;
	}
	if (!does_entity_exist(iLocal_21))
	{
		request_model(iLocal_4, false);
		if (has_model_loaded(iLocal_4))
		{
			iLocal_21 = func_49(iLocal_4, vLocal_9, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_entity_as_mission_entity(iLocal_21, true, true);
		}
		return false;
	}
	return true;
}

bool func_23()
{
	if (!func_50(Local_130[0], 650, "MOB4_CIVMAN2", "MOB4_POSTM2", "MOB4_IDLEM2"))
	{
		return false;
	}
	if (!func_50(Local_130[1], 651, "MOB4_CIVMAN3", "MOB4_POSTM3", "MOB4_IDLEM3"))
	{
		return false;
	}
	if (!func_50(Local_130[2], 644, "MOB4_CIVMAN1", "MOB4_POSTM1", "MOB4_IDLEM1"))
	{
		return false;
	}
	if (!func_50(Local_130[3], 646, "MOB4_CIVWOMAN2", "MOB4_POSTW2", "MOB4_IDLEW2"))
	{
		return false;
	}
	if (!func_50(Local_130[4], 647, "MOB4_CIVWOMAN3", "MOB4_POSTW3", "MOB4_IDLEW3"))
	{
		return false;
	}
	if (!func_50(Local_130[5], 656, "MOB4_CIVWOMAN1", "MOB4_POSTW1", "MOB4_IDLEW1"))
	{
		return false;
	}
	return true;
}

int func_24(var uParam0)
{
	return 1;
}

bool func_25()
{
	iVar0 = 1;
	return iVar0;
}

bool func_26(var uParam0)
{
	func_51();
	func_52();
	func_53();
	func_54();
	return func_55();
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1 || !func_58(uParam0))
	{
		func_59(uParam0);
	}
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_60(Local_130[iVar0]->f_2))
		{
			if (func_61(Local_130[iVar0]->f_2))
			{
				stop_ped_speaking(&(Local_130[iVar0]), false);
				func_62(Local_130[iVar0]->f_2, 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_30()
{
	func_63(&iLocal_21, 1, 0, 1);
	func_64(&iLocal_23);
	iLocal_161 = 2;
}

void func_31()
{
	func_65(iLocal_25, iLocal_22);
	func_63(&iLocal_22, 1, 0, 1);
	func_64(&iLocal_24);
	iLocal_162 = 3;
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_33(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_66(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_34(iParam0, 1, 0);
		}
	}
	func_34(iParam0, 16, bParam1);
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	func_67(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_35(int iParam0)
{
	func_34(iParam0, 8, 0);
}

void func_36(int iParam0)
{
	func_27(iParam0, 36, 1);
}

void func_37(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_38(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_68(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_68(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_68(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_68(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_68(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_68(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_68(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_68(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_39(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_69(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_40(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	func_57(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_70(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_71(iParam0);
		}
	}
	if (func_40(iParam0, 5, 1))
	{
		set_ped_config_flag(func_70(iParam0), 137, true);
	}
}

void func_42(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_37(iParam0, 50, 1);
		func_37(iParam0, 48, 1);
		func_37(iParam0, 49, 1);
		func_37(iParam0, 51, 1);
		func_37(iParam0, 52, 1);
		func_37(iParam0, 54, 1);
		func_37(iParam0, 55, 1);
	}
	else
	{
		func_27(iParam0, 50, 1);
		func_27(iParam0, 48, 1);
		func_27(iParam0, 49, 1);
		func_27(iParam0, 51, 1);
		if (bParam3)
		{
			func_27(iParam0, 54, 1);
		}
		else
		{
			func_37(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_27(iParam0, 52, 1);
			if (bParam3)
			{
				func_27(iParam0, 55, 1);
			}
		}
		else
		{
			func_37(iParam0, 52, 1);
			if (!bParam3)
			{
				func_37(iParam0, 55, 1);
			}
		}
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_70(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_70(iParam0), 204, false);
	}
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_40(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_39(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_70(iParam0);
	if (((does_entity_exist(iVar1) && func_72(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_27(iParam0, 2, 1);
	}
	else
	{
		func_73(iParam0);
		func_27(iParam0, 1, 1);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_47(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_48(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_56(iParam1))
	{
		return;
	}
	iVar0 = func_47(iParam1);
	if (func_74(iParam1))
	{
		if (!func_75(iParam1))
		{
			return;
		}
	}
	func_37(iParam1, 39, 1);
	func_76(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_76(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_76(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_27(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_77(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_49(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_78(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_50(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (uParam0->f_1 <= 0)
	{
		if (!func_38(*uParam0, 0))
		{
			*uParam0 = func_79(iParam1, 1, 0, 0, 1, 1);
			return false;
		}
		func_80(&uLocal_26, *uParam0, sParam2, 1);
		stop_ped_speaking(*uParam0, true);
		uParam0->f_2 = iParam1;
		uParam0->f_3 = sParam3;
		uParam0->f_4 = sParam4;
		uParam0->f_1 = 1;
		return false;
	}
	return true;
}

void func_51()
{
	if (func_38(Global_35, 0))
	{
		switch (iLocal_163)
		{
			case 0:
				func_28(&uLocal_127, 0);
				iLocal_163 = 1;
				break;
			case 1:
				func_81();
				if ((func_82(&uLocal_127) > 20f || is_entity_in_water(Global_35)) || !func_83(Global_35, 2140.869f, -649.5916f, 41.34281f, 18f, 1, 0))
				{
					iLocal_163 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_52()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (does_entity_exist(&(Local_130[iVar0])))
		{
			switch (Local_130[iVar0]->f_1)
			{
				case 1:
					if ((!func_58(&uLocal_124) && !_0xa2cac9def0195e6f(1)) && func_84(&(Local_130[iVar0]), Global_35, 0.5f) == 0)
					{
						if (func_85(Local_130[iVar0], Local_130[iVar0]->f_3))
						{
							task_look_at_entity(&(Local_130[iVar0]), Global_35, 10000, 0, 51, 0);
							Local_130[iVar0]->f_1 = 2;
						}
					}
					break;
				case 2:
					if (!_0x1ecc76792f661cf5(Local_130[iVar0]->f_3))
					{
						func_28(&uLocal_124, 0);
						fLocal_5 = get_random_float_in_range(5f, 10f);
						func_86(&(Local_130[iVar0]));
						Local_130[iVar0]->f_1 = 3;
					}
					break;
				case 3:
					if ((!func_58(&uLocal_124) && !_0xa2cac9def0195e6f(1)) && func_84(&(Local_130[iVar0]), Global_35, 0.5f) == 0)
					{
						if (func_85(Local_130[iVar0], Local_130[iVar0]->f_4))
						{
							task_look_at_entity(&(Local_130[iVar0]), Global_35, 10000, 0, 51, 0);
							Local_130[iVar0]->f_1 = 4;
						}
					}
					break;
				case 4:
					if (!_0x1ecc76792f661cf5(Local_130[iVar0]->f_4))
					{
						func_28(&uLocal_124, 0);
						fLocal_5 = get_random_float_in_range(5f, 10f);
						func_86(&(Local_130[iVar0]));
						Local_130[iVar0]->f_1 = 5;
					}
					break;
			}
		}
		iVar0++;
	}
	func_87();
}

void func_53()
{
	switch (iLocal_161)
	{
		case 0:
			if (!func_88(iLocal_21, iLocal_23, 1))
			{
				func_89(&iLocal_21, &iLocal_23, -1, 1);
			}
			else if (!func_83(iLocal_23, vLocal_12, 5f, 1, 1))
			{
				func_90(iLocal_23, vLocal_12, 2.28f, 2, 1073741824);
			}
			else if (!func_91(iLocal_21, 1199744105))
			{
				_task_vehicle_drive_to_destination(iLocal_21, iLocal_23, vLocal_15, 5f, 524419, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_161 = 1;
			}
			break;
		case 1:
			if (!func_91(iLocal_21, 1199744105))
			{
				func_30();
			}
			break;
		case 2:
			break;
	}
}

void func_54()
{
	switch (iLocal_162)
	{
		case 0:
			if (!func_91(iLocal_22, 1199744105))
			{
				_task_vehicle_drive_to_destination(iLocal_22, iLocal_24, vLocal_18, 1.5f, 524295, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_162 = 1;
			}
			break;
		case 1:
			if (!func_91(iLocal_22, 1199744105))
			{
				iLocal_162 = 2;
			}
			break;
		case 2:
			if (func_88(iLocal_22, iLocal_24, 0))
			{
				if (!func_91(iLocal_22, 451360105))
				{
					task_leave_vehicle(iLocal_22, iLocal_24, 0, 0);
				}
			}
			else
			{
				func_31();
			}
			break;
		case 3:
			break;
	}
}

int func_55()
{
	if (!func_83(Global_35, vLocal_6, 75f, 1, 1) || get_player_wanted_level(get_player_index()) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return iParam0 > -1;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_58(var uParam0)
{
	return func_92(*uParam0, 1);
}

void func_59(var uParam0)
{
	func_93(uParam0, 0f);
}

bool func_60(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_61(int iParam0)
{
	if (!func_60(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_60(iParam0))
	{
		return;
	}
	if (!func_94(iParam0, 1))
	{
		return;
	}
	if (!func_94(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_61(iParam0)) && func_95(iParam0))
	{
		return;
	}
	func_96(iParam0, 1);
	func_97(iParam0);
	if (func_99(func_98(iParam0)))
	{
		iVar0 = func_100(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_96(iParam0, 16);
	}
	if (func_94(iParam0, 128) && !bParam3)
	{
		func_101(iParam0, 0);
	}
}

void func_63(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_64(int* iParam0)
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
	set_vehicle_as_no_longer_needed(iParam0);
}

int func_65(int iParam0, int iParam1)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (!is_ped_injured(iParam1) && does_entity_exist(iParam0))
	{
		add_to_itemset(iParam0, &Global_1396084);
		decor_set_bool(iParam0, "pedRoam_bInPedRoam", true);
		func_102(iParam0, iParam1);
		return 1;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_67(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_68(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_69(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_103(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

int func_70(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_71(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_70(iParam0)))
		{
			func_104(iParam0, 67108864, 1);
			func_37(iParam0, 19, 1);
		}
	}
}

float func_72(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_73(int iParam0)
{
	iVar0 = func_70(iParam0);
	iVar1 = func_39(iParam0, 0);
	func_105(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_74(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_75(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

int func_77(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = func_47(iParam0);
	if (func_38(iVar0, 0))
	{
		if (func_38(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_74(iParam0)) || func_75(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_106(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_107(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_108(iParam0);
					_0x7b204f88f6c3d287(func_109(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_109(iParam0, 0));
					func_110(iParam0);
				}
			}
			else
			{
				if (func_32(iParam0, 32768, 1))
				{
					iVar2 = func_109(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_38((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_32(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_108(iParam0);
				_0x7b204f88f6c3d287(func_109(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_109(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_108(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_111(iParam0, 0);
	return 1;
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_112(iParam1))
		{
			func_113(iParam0, 41788943);
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
			func_114(iParam0, 0, 1);
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
			func_115(iParam0, 0);
			bVar0 = true;
		}
		func_116(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_117(iParam0, 1))
	{
		return 0;
	}
	if (func_99(func_98(iParam0)))
	{
		iVar1 = func_100(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_61(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_118(iParam0, 1);
	func_119(iParam0);
	if (bParam3)
	{
		func_118(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_80(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_120(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

void func_81()
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1618006066, false);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
}

float func_82(var uParam0)
{
	if (!func_58(uParam0))
	{
		return 0f;
	}
	if (func_121(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_122() - uParam0->f_1);
}

bool func_83(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_123(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_84(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_124(iParam0, vVar0, fParam2);
}

bool func_85(var uParam0, char[4] cParam1)
{
	if (func_83(*uParam0, get_entity_coords(Global_35, true, false), 6.5f, 1, 0) && func_125(*uParam0, 0.25f, 0.75f, 0.25f, 0.75f))
	{
		if (func_126(&uLocal_26, cParam1, *uParam0, Global_35, 0, 0, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_86(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

void func_87()
{
	if (func_58(&uLocal_124))
	{
		if (func_82(&uLocal_124) > fLocal_5)
		{
			func_44(&uLocal_124);
		}
	}
}

bool func_88(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*iParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *iParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_127(*iParam1))
			{
				iParam2 = func_128(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*iParam0))
		{
			_remove_ped_from_mount(*iParam0, true, false);
		}
		set_ped_into_vehicle(*iParam0, *iParam1, iParam2);
	}
	return 1;
}

void func_90(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_129(Global_35) && is_player_teleport_active())
	{
	}
	if (func_130(iParam0))
	{
		if (func_131(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_68(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_90(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_90(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_68(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_68(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_68(iParam5, 129))
	{
		if (func_68(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_68(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_68(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_130(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_68(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_68(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_91(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_92(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_122() - fParam1);
	func_132(uParam0, 1);
	func_133(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return false;
	}
	if (!func_60(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_95(int iParam0)
{
	if (!func_60(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_96(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return;
	}
	if (!func_60(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_97(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_98(int iParam0)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_99(int iParam0)
{
	return iParam0 != 0;
}

int func_100(int iParam0)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_101(int iParam0, bool bParam1)
{
	if (!func_60(iParam0))
	{
		return 0;
	}
	if (!func_94(iParam0, 2))
	{
		return 0;
	}
	if (func_98(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_100(iParam0)))
	{
		return 1;
	}
	if (func_94(iParam0, 1) && !bParam1)
	{
		func_118(iParam0, 128);
		return 1;
	}
	func_96(iParam0, 129);
	func_97(iParam0);
	_0xfc77c5b44d5ff7c0(func_100(iParam0));
	func_136(iParam0, 0);
	return 1;
}

void func_102(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_owner", iParam1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_105(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_137(iParam1);
	}
}

float func_106(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_123(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_107(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_138(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_108(int iParam0)
{
	iVar0 = func_47(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_109(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_139(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_110(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_111(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_112(int iParam0)
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

void func_113(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_140(iParam0, iParam1))
		{
			if (func_141(iParam0, iParam1))
			{
				if (func_142(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_143(iParam0);
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

void func_114(int iParam0, int iParam1, bool bParam2)
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

void func_115(int iParam0, bool bParam1)
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

void func_116(int iParam0, int iParam1)
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

bool func_117(int iParam0, bool bParam1)
{
	if (!func_60(iParam0))
	{
		return false;
	}
	if ((func_94(iParam0, 1) && !func_61(iParam0)) && func_95(iParam0))
	{
		return false;
	}
	if (!func_94(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_144(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_118(int iParam0, int iParam1)
{
	if (func_134() != -1)
	{
		return;
	}
	if (!func_60(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_119(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_120(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_121(var uParam0)
{
	return func_92(*uParam0, 2);
}

float func_122()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

float func_123(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_124(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_145(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_146(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_125(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_147(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_126(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_148(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_148(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_59(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_149(sParam1))
			{
				return true;
			}
		}
		else if (func_150(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_127(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

int func_129(var uParam0)
{
	return uParam0;
}

bool func_130(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_131(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_134()
{
	return Global_1572887->f_12;
}

int func_135(int iParam0)
{
	iVar0 = func_100(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

void func_136(int iParam0, int iParam1)
{
	if (!func_60(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_137(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_138(int iParam0)
{
	iVar0 = 0;
	if (!func_56(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_56(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_139(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_107(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

bool func_140(int iParam0, int iParam1)
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

bool func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0, int iParam1)
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
	if (!func_140(iParam0, iVar0))
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

void func_143(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_144(int iParam0, bool bParam1)
{
	if (func_134() != -1)
	{
		return false;
	}
	if (!func_60(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_100(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_135(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_100(iParam0));
}

float func_145(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_146(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_147(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

float func_148(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_149(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_150(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_151(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_151(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

