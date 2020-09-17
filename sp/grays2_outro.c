void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_17);
	}
	func_2(&Local_17, &uScriptParam_0);
	while (!func_3(&Local_17))
	{
		func_4(&Local_17);
		switch (func_5(Local_17))
		{
			case 0:
				if (func_6(&Local_17))
				{
					func_7(&Local_17, 1);
				}
				break;
			case 1:
				if (func_8(&Local_17))
				{
					func_7(&Local_17, 2);
				}
				break;
			case 2:
				if (func_9(&Local_17))
				{
					func_7(&Local_17, 3);
				}
				break;
			case 3:
				func_1(&Local_17);
				break;
		}
		wait(0);
	}
	func_1(&Local_17);
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
	return _is_anim_scene_loaded(uParam0->f_2, true, false);
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
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	if (!func_22())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
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
			func_24(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_25(&(Global_1359489->f_40), 1);
}

int func_11(var uParam0)
{
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	_delete_anim_scene(uParam0->f_2);
	Global_1956614->f_5 = 1;
	return 1;
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
	return func_26(iParam0, 16, 1);
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
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489->f_40), 1);
	}
	func_27(iParam0, 0);
	func_28(iParam0, 4, 0);
	func_29(iParam0);
	func_30(iParam0);
	func_31(iParam0, 37, 1);
	bVar0 = func_32(Global_1360165[iParam0], 0);
	iVar1 = func_33(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_34(iParam0, 64, 1))
	{
		func_31(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_31(iParam0, 33, 1);
		func_31(iParam0, 34, 1);
		func_35(iParam0, 1056964608, -1, 1061158912);
		func_36(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_24(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_24(iParam0, 35, 1);
			if (bParam8)
			{
				func_24(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_37(iParam0, 0);
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
		func_31(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_24(iParam0, 33, 1);
		func_36(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_25(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_38(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_24(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_39(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_34(iParam0, 45, 1))
	{
		func_31(iParam0, 45, 1);
	}
	func_40(iParam0, 16, 1);
	func_31(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_32(func_41(iParam0), 0))
		{
			func_42(0, iParam0, bParam3, 0, bParam2);
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
		uParam0->f_2 = _create_anim_scene("script@timelapse@gry2_timelapse", 0, "PBL_1", false, true);
		load_anim_scene(uParam0->f_2);
	}
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	do_screen_fade_out(0);
	if (func_43(&uVar0))
	{
		func_44(-1623728698, 0);
	}
	_0x513f8aa5bf2f17cf(646.8f, -1284.6f, 40.4f, 100f, 0);
	set_entity_coords(Global_35, 646.8f, -1284.6f, 40.4f, true, false, true, true);
	_0xc9caeaeec1256e54(-1679307491);
	func_45();
	func_46();
	bVar1 = true;
	if (!func_47(134, 0, 0, 0, 0))
	{
		bVar1 = false;
	}
	if (!func_47(138, 0, 0, 0, 0))
	{
		bVar1 = false;
	}
	if (!func_48(&uLocal_14))
	{
		func_25(&uLocal_14, 1);
	}
	if (!bVar1 && func_49(&uLocal_14) < 3f)
	{
		return 0;
	}
	func_50();
	set_anim_scene_entity(uParam0->f_2, "ARTHUR", Global_35, 0);
	start_anim_scene(uParam0->f_2);
	return 1;
}

bool func_22()
{
	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	if (is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
	_0xc9caeaeec1256e54(-1679307491);
	_uiprompt_enable_prompt_type_this_frame(6);
	func_45();
	func_46();
	if (_0x005e6f28dd7ed58d(uParam0->f_2, "ARTHUR"))
	{
		return true;
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_51(iParam0))
		{
			return;
		}
	}
	func_52(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_48(uParam0))
	{
		func_53(uParam0);
	}
}

bool func_26(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_51(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_27(int iParam0, bool bParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_54(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_28(iParam0, 1, 0);
		}
	}
	func_28(iParam0, 16, bParam1);
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_55(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_29(int iParam0)
{
	func_28(iParam0, 8, 0);
}

void func_30(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_31(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_51(iParam0))
		{
			return;
		}
	}
	func_52(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_32(int iParam0, int iParam1)
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
	if (func_56(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_56(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_56(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_56(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_56(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_56(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_56(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_56(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_33(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_57(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_51(iParam0))
		{
			return false;
		}
	}
	func_52(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_58(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_59(iParam0);
		}
	}
	if (func_34(iParam0, 5, 1))
	{
		set_ped_config_flag(func_58(iParam0), 137, true);
	}
}

void func_36(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_51(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_31(iParam0, 50, 1);
		func_31(iParam0, 48, 1);
		func_31(iParam0, 49, 1);
		func_31(iParam0, 51, 1);
		func_31(iParam0, 52, 1);
		func_31(iParam0, 54, 1);
		func_31(iParam0, 55, 1);
	}
	else
	{
		func_24(iParam0, 50, 1);
		func_24(iParam0, 48, 1);
		func_24(iParam0, 49, 1);
		func_24(iParam0, 51, 1);
		if (bParam3)
		{
			func_24(iParam0, 54, 1);
		}
		else
		{
			func_31(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_24(iParam0, 52, 1);
			if (bParam3)
			{
				func_24(iParam0, 55, 1);
			}
		}
		else
		{
			func_31(iParam0, 52, 1);
			if (!bParam3)
			{
				func_31(iParam0, 55, 1);
			}
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_58(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_58(iParam0), 204, false);
	}
}

void func_38(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_34(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_33(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_58(iParam0);
	if (((does_entity_exist(iVar1) && func_60(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_24(iParam0, 2, 1);
	}
	else
	{
		func_61(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
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

int func_41(int iParam0)
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

void func_42(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_51(iParam1))
	{
		return;
	}
	iVar0 = func_41(iParam1);
	if (func_62(iParam1))
	{
		if (!func_63(iParam1))
		{
			return;
		}
	}
	func_31(iParam1, 39, 1);
	func_64(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_64(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_64(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_65(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_43(int iParam0)
{
	if (-1829635046 == func_66(81053684))
	{
		if (func_67(iParam0))
		{
			return true;
		}
	}
	else if (func_68(-525676072, iParam0))
	{
		if (func_67(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_44(int iParam0, bool bParam1)
{
	if (!func_69())
	{
		return 0;
	}
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		iVar0 = 0;
		if (func_72(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_73(&iVar0, 2);
			}
		}
		return func_74(iParam0, iVar0);
	}
	return 0;
}

void func_45()
{
	Global_1905944->f_5695 = 1;
}

void func_46()
{
	func_75(&(Global_1879514->f_6), 16);
}

bool func_47(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_76(iParam0))
	{
		return true;
	}
	if (!func_77(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_78(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_79((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_80(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_79((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_80(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_79((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_81(iParam0))
	{
		func_82((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_83((*Global_1347702)[iParam0]->f_15))
	{
		func_84((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_79((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_80(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

bool func_48(var uParam0)
{
	return func_85(*uParam0, 1);
}

float func_49(var uParam0)
{
	if (!func_48(uParam0))
	{
		return 0f;
	}
	if (func_86(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_87() - uParam0->f_1);
}

void func_50()
{
	Var1.f_10 = 7;
	Var1 = 0;
	Var1.f_1 = 0;
	Var1.f_2 = 1;
	Var1.f_6 = { 670.11f, -1211.15f, 45.15f };
	Var1.f_9 = 185.857f;
	func_88(&uVar0, &Var1);
}

bool func_51(int iParam0)
{
	return iParam0 > -1;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_53(var uParam0)
{
	func_89(uParam0, 0f);
}

bool func_54(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_55(var uParam0, int iParam1, bool bParam2)
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

bool func_56(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_57(int iParam0)
{
	if (!func_51(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_90(iParam0);
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

int func_58(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_59(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_58(iParam0)))
		{
			func_91(iParam0, 67108864, 1);
			func_31(iParam0, 19, 1);
		}
	}
}

float func_60(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_61(int iParam0)
{
	iVar0 = func_58(iParam0);
	iVar1 = func_33(iParam0, 0);
	func_92(iParam0, iVar0);
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

bool func_62(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_63(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	if (!func_51(iParam0))
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

int func_65(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	if (func_32(iVar0, 0))
	{
		if (func_32(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_62(iParam0)) || func_63(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_93(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_94(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_95(iParam0);
					_0x7b204f88f6c3d287(func_96(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_96(iParam0, 0));
					func_97(iParam0);
				}
			}
			else
			{
				if (func_26(iParam0, 32768, 1))
				{
					iVar2 = func_96(iParam0, 0);
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
		if (func_32((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_26(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_95(iParam0);
				_0x7b204f88f6c3d287(func_96(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_96(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_95(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_98(iParam0, 0);
	return 1;
}

int func_66(int iParam0)
{
	iVar0 = func_100(func_99(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_67(int iParam0)
{
	if (func_68(81053684, iParam0))
	{
		return true;
	}
	if (func_68(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0, int iParam1)
{
	iVar1 = func_100(func_99(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_72(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_69()
{
	return Global_1946804->f_2792;
}

bool func_70(int iParam0)
{
	if (func_101())
	{
		return false;
	}
	if (!func_102(iParam0, 0))
	{
		return false;
	}
	if (!func_103(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_71(int iParam0)
{
	return func_104(iParam0);
}

int func_72(int iParam0)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_73(int iParam0, int iParam1)
{
	func_105(iParam0, iParam1);
}

int func_74(int iParam0, int iParam1)
{
	bVar3 = func_106(iParam0);
	if (func_107(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_43(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_108();
			}
			else
			{
				iVar0 = func_109();
			}
		}
		else if (func_56(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_110();
		}
		else
		{
			iVar0 = func_111();
		}
	}
	else if (func_67(&iVar2))
	{
		if (func_107(iVar2, -1303648999))
		{
			iVar0 = func_108();
		}
		else
		{
			iVar0 = func_109();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_110();
	}
	else
	{
		iVar0 = func_111();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_76(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_77(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_78(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_113((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_114((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_113((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_114((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_115(iParam0);
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_81(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_76(iParam0))
	{
		return false;
	}
	return func_116((*Global_1347702)[iParam0]->f_15);
}

int func_82(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_117(iParam0))
	{
		return -1;
	}
	if (func_112() != -1)
	{
		iVar2 = func_118(iParam0);
		if (iVar2 >= 0)
		{
			func_119(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_120(iVar1, 1);
			func_119(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_118(iParam0);
		if (iVar2 >= 0)
		{
			func_119(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_121(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_120(iVar0, 1);
					func_119(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_83(int iParam0)
{
	return func_122(iParam0) == 2;
}

void func_84(int iParam0)
{
	func_123(iParam0);
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_86(var uParam0)
{
	return func_85(*uParam0, 2);
}

float func_87()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_88(var uParam0, var uParam1)
{
	uParam1->f_10 = func_124(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_125(uParam1->f_6))
		{
		}
	}
	bVar0 = func_126();
	if (*uParam1)
	{
		if (bVar0 && !func_114((*Global_1835011)[4]->f_1, 1))
		{
			if (func_127(5))
			{
				func_128(5);
				func_129(5);
				func_130(0);
				func_131(0);
			}
		}
	}
	if (func_132(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_114((*Global_1835011)[37]->f_1, 1)) && !func_114((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_114((*Global_1835011)[43]->f_1, 1)) && !func_114((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_133(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_134(iVar1))
	{
		bVar3 = true;
		if (func_135(iVar1))
		{
			bVar4 = true;
		}
		if (func_136(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_137(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_127(0) && func_127(1))
			{
				func_138(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_139())
			{
				func_140();
			}
			func_130(0);
			func_131(0);
			func_141(uParam1->f_6);
		}
	}
	if (!func_134(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_142(uParam1->f_10) == 0 || func_143(uParam1->f_10) == 0) || func_144(uParam1->f_10) == 0)
			{
				func_145(uParam1->f_10);
			}
			func_146(uParam1->f_10);
			func_147(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_133(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_134(iVar1))
	{
		bVar3 = true;
		if (func_135(iVar1))
		{
			bVar4 = true;
		}
		if (func_136(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_125(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_148(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_149(uParam1->f_10) };
			Var10 = { func_150() };
			func_151(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_152(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_153(uParam1->f_10);
		if (uParam1->f_2 && !func_125(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_154(uParam1->f_10);
	if (func_152(uParam1->f_10))
	{
		iVar16 = func_155(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_89(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_87() - fParam1);
	func_156(uParam0, 1);
	func_157(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_90(int iParam0)
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

void func_91(int iParam0, int iParam1, bool bParam2)
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

void func_92(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_158(iParam1);
	}
}

float func_93(int iParam0, int iParam1, bool bParam2)
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
	return func_159(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_94(int iParam0, bool bParam1)
{
	if (!func_51(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_160(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_95(int iParam0)
{
	iVar0 = func_41(iParam0);
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

int func_96(int iParam0, bool bParam1)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_161(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_97(int iParam0)
{
	if (!func_51(iParam0))
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

void func_98(int iParam0, int iParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_99(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_162(iVar0);
}

int func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_101()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_163())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_103(int iParam0, int iParam1, bool bParam2)
{
	if (!func_102(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_164(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_165(iParam0, 1))
		{
			return false;
		}
	}
	return func_166(iParam0, 0, bParam2) >= iParam1;
}

int func_104(int iParam0)
{
	iVar0 = func_72(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_106(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_67(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_107(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_108()
{
	iVar0 = 1549701178;
	switch (func_167())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_109()
{
	iVar0 = 614608656;
	switch (func_167())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_110()
{
	iVar0 = -1832677570;
	switch (func_167())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_111()
{
	iVar0 = 1623252156;
	switch (func_167())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_112()
{
	return Global_1572887->f_12;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0, bool bParam1)
{
	switch (func_122(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_115(int iParam0)
{
	if (func_168(iParam0))
	{
		return 0;
	}
	if (func_77(iParam0, 0))
	{
		func_169(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_169(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_116(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_170(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	return func_122(iParam0) == 0;
}

int func_118(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_119(int iParam0, bool bParam1)
{
	if (!func_121(iParam0))
	{
		return;
	}
	if (!func_117(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_171(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_171(iParam0)))
		{
			_0xca41e86545413b5b(func_172(iParam0), func_173(iParam0), func_174(iParam0), func_171(iParam0), Global_36);
		}
	}
	func_175(iParam0, 1);
	bParam1 = bParam1;
}

void func_120(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_176(Global_1898330[iParam0]);
		func_177((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_121(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_122(int iParam0)
{
	if (!func_121(iParam0))
	{
		return -1;
	}
	return func_170(iParam0);
}

void func_123(int iParam0)
{
	if (!func_121(iParam0))
	{
		return;
	}
	if (!func_116(iParam0))
	{
		return;
	}
	func_175(iParam0, 2);
}

int func_124(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_125(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_126()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_127(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_144(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_128(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = func_133(iParam0);
	func_178(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_179(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_180(iParam0, 0);
	func_181(iParam0);
}

void func_129(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_182(&Var0);
	func_183(iParam0, Var0);
	func_184(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_185(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_186(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_187(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_188(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_189(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_190(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_191(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_192(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_130(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_131(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_132(vector3 vParam0)
{
	return func_193(_get_map_zone_at_coords(vParam0, 10));
}

int func_133(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_134(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_135(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	iVar0 = func_133(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_136(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	iVar0 = func_133(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_137(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = func_133(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_138(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_194(iParam0);
	func_194(iParam0);
	func_195(iParam0, iParam1);
	func_196(iParam0, iParam1);
	func_197(iParam0, iParam1);
	iVar1 = func_133(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_198(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_133(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_198(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_199();
}

bool func_139()
{
	iVar0 = func_200();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_140()
{
	iVar0 = func_200();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_201(0);
}

void func_141(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_142(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_143(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_144(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_145(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_202(&uVar0, &uVar1, &uVar2);
	func_203(iParam0, uVar0);
	func_204(iParam0, uVar1);
	func_205(iParam0, uVar2);
	func_206(iParam0, 1);
	func_207(iParam0, 1);
}

void func_146(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_208(iParam0, 1);
}

void func_147(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_148(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_209(iParam0, 1);
}

struct<2> func_149(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_210(iParam0, &uVar2))
	{
	}
	if (!func_211(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_150()
{
	if (func_212(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_212(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_212(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_212(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_212(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_212(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_151(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_213(iParam0);
	func_214(iParam0, uParam1);
	func_215(iParam0);
	func_216(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_217(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_152(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_153(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_154(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_155(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_181(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_181(iParam0);
	}
}

int func_155(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_158(int iParam0)
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

float func_159(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_160(int iParam0)
{
	iVar0 = 0;
	if (!func_51(iParam0))
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
	if (!func_51(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_161(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_94(iParam0, 1);
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

int func_162(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_218(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_163()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_164(int iParam0)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_102(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_219(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_220("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_221(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_222(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_223(iVar1);
				return true;
			}
			iVar3++;
		}
		func_223(iVar1);
	}
	return false;
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_219(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_224(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_225(bParam2), iParam0, 0);
	return uVar2;
}

int func_167()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_226(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_226(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_168(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_76(iParam0))
	{
		return false;
	}
	return func_114((*Global_1347702)[iParam0]->f_15, 1);
}

void func_169(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_12(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_228(&iVar0, func_227(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_80(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_230(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_229()))
			{
				func_80(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_80(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

int func_170(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_231(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_171(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_172(int iParam0)
{
	if (!func_121(iParam0))
	{
		return 0;
	}
	return func_232(func_176(iParam0));
}

int func_173(int iParam0)
{
	if (!func_121(iParam0))
	{
		return -1;
	}
	return func_233(func_176(iParam0));
}

int func_174(int iParam0)
{
	if (!func_121(iParam0))
	{
		return -1;
	}
	return func_234(func_176(iParam0));
}

void func_175(int iParam0, int iParam1)
{
	if (!func_121(iParam0))
	{
		return;
	}
	func_235(iParam0, iParam1);
}

int func_176(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

void func_177(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_232(iParam0);
	*uParam1 = func_233(iParam0);
	*uParam2 = func_234(iParam0);
}

void func_178(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_133(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_236(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_179(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	if (!func_238())
	{
		return true;
	}
	return false;
}

void func_180(int iParam0, int iParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_181(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

void func_182(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_183(int iParam0, struct<2> Param1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_239(iParam0, Param1))
	{
	}
	if (!func_240(iParam0, Param1.f_1))
	{
	}
}

void func_184(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_241((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_185(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_186(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_187(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_188(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_189(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_190(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_191(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_192(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_193(int iParam0)
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

void func_194(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

void func_195(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_196(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_197(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_242(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_242(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_243(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_244(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_245(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_198(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_246(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_247(iParam0))
	{
		iVar3 = func_248(iParam0);
		if (func_249(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

void func_199()
{
	if (func_134(0))
	{
		func_250(0);
	}
	if (func_134(1))
	{
		func_250(1);
	}
	if (func_134(5))
	{
		func_250(5);
	}
	if (func_134(6))
	{
		func_194(6);
	}
}

int func_200()
{
	return Global_1900383->f_393;
}

void func_201(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_202(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_126())
	{
		if (func_251())
		{
			bVar0 = false;
			if (!func_114((*Global_1835011)[15]->f_1, 1) && !func_252(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_253();
				*iParam1 = func_254();
				*uParam2 = func_255();
				return 1;
			}
			else
			{
				*uParam0 = func_256();
				*iParam1 = func_257();
				*uParam2 = func_258();
				return 1;
			}
		}
		else if (func_259())
		{
			if (!func_114((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_260();
				*iParam1 = func_261();
				*uParam2 = func_262();
				return 1;
			}
			else
			{
				*uParam0 = func_263();
				*iParam1 = func_264();
				*uParam2 = func_265();
				return 1;
			}
		}
	}
	else if (func_251())
	{
		*uParam0 = func_266();
		*iParam1 = func_267();
		*uParam2 = func_268();
		return 1;
	}
	else if (func_259())
	{
		*uParam0 = func_269();
		*iParam1 = func_270();
		*uParam2 = func_271();
		return 1;
	}
	return 0;
}

void func_203(int iParam0, var uParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = uParam1;
}

void func_204(int iParam0, var uParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = uParam1;
}

void func_205(int iParam0, var uParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = uParam1;
}

void func_206(int iParam0, int iParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_207(int iParam0, int iParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_142(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_202(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_272(iParam1);
	iVar5 = func_133(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_208(int iParam0, int iParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_209(int iParam0, int iParam1)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

bool func_210(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_242(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_273(Var0, 1415981582, 0);
	if (!func_102(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_211(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_242(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_273(Var0, -2119169513, 0);
	if (!func_102(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_212(int iParam0, var uParam1)
{
	if (!func_274(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_275() };
	*uParam1 = func_273(Var0, iParam0, 0);
	if (!func_102(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_213(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, 0);
}

void func_214(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_276(iParam0, *uParam1);
	func_276(iParam0, uParam1->f_1);
}

void func_215(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
}

void func_216(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_276(iParam0, *uParam1);
	func_276(iParam0, uParam1->f_1);
	func_276(iParam0, uParam1->f_2);
	func_276(iParam0, uParam1->f_3);
	func_276(iParam0, uParam1->f_4);
	func_276(iParam0, uParam1->f_5);
}

int func_217(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_219(int iParam0, int iParam1)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_107(iParam0, 1399091007))
	{
		func_277(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_220(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_225(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_221(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_222(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_223(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_278(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_280(&Var0, func_279(0));
	}
	if (!func_281(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_223(iVar14);
	return uVar15;
}

int func_225(bool bParam0)
{
	if (func_112() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_226(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_227(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_228(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_229()
{
	return Global_40.f_4283.f_1;
}

bool func_230(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_112() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_282(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_283(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_284(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_91(iVar0, 512, 1);
			}
			else
			{
				func_40(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_231(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_232(int iParam0)
{
	return iParam0 & 31;
}

int func_233(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_234(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_235(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_285(iParam0);
	}
	else
	{
		func_286(iParam0, iParam1);
	}
	func_287();
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_237(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_238()
{
	return _unlock_is_unlocked(99890643);
}

bool func_239(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_242(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_288(iParam1, Var0, 1415981582, 0) };
	return func_289(Var29, 1);
}

bool func_240(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_242(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_288(iParam1, Var0, -2119169513, 0) };
	return func_289(Var29, 1);
}

void func_241(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_242(int iParam0, var uParam1)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	iVar0 = func_243(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_291(0) };
	if (!func_292(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_293(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_244(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_294(bParam10))
	{
		return func_295(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_296(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_297(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_225(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_289(Var14, 1))
		{
		}
	}
	return true;
}

bool func_245(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_294(bParam9))
	{
		return func_298(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_297(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_296(Param0, &Var0, bParam9, 1) || !func_296(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_297(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_225(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_246(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_299(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_247(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_248(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_249(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_250(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_133(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_209(iParam0, 64))
	{
		func_194(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_252(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_300(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_194(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_301(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_302(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_209(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_303(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_304(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_305(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_306((*Global_1900383)[iParam0]->f_26);
		func_307((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_308(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_301(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

bool func_251()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_252(int iParam0)
{
	if (!func_309(iParam0))
	{
		return false;
	}
	return func_310(iParam0);
}

int func_253()
{
	return 1342496140;
}

int func_254()
{
	return 446670976;
}

int func_255()
{
	return 1;
}

int func_256()
{
	return -868094182;
}

int func_257()
{
	return 1074477367;
}

int func_258()
{
	return 1;
}

bool func_259()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_260()
{
	return -997197050;
}

int func_261()
{
	return -2063289686;
}

int func_262()
{
	return 2;
}

int func_263()
{
	return -868094182;
}

int func_264()
{
	return 1074477367;
}

int func_265()
{
	return 1;
}

int func_266()
{
	return 1235275977;
}

int func_267()
{
	return 2030804811;
}

int func_268()
{
	return 1;
}

int func_269()
{
	return 1974379573;
}

int func_270()
{
	return 2024948086;
}

int func_271()
{
	return 1;
}

void func_272(int iParam0)
{
	if (func_311() < iParam0)
	{
		func_312(iParam0);
	}
}

int func_273(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_313(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_274(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_72(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_314(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_275()
{
	Var0 = { func_291(0) };
	return func_288(856287005, Var0, -218846335, 0);
}

void func_276(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, false, false);
}

void func_277(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_279(bool bParam0)
{
	iVar0 = func_225(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_288(923904168, func_291(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_288(923904168, func_291(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_288(923904168, func_291(bParam0), -740156546, 0);
}

void func_280(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_281(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_225(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_315())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_173(&(Global_1898164->f_1[0]));
		if (func_76(iVar0) && func_113((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_121(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_283(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_284(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_227(iParam0);
	return (*iParam1 && iVar0) != 0;
}

int func_285(int iParam0)
{
	iVar0 = func_231(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_316(iVar0);
}

int func_286(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_317(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_287()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

struct<4> func_288(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_102(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_225(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_289(struct<4> Param0, int iParam4)
{
	if (!func_294(0))
	{
		return func_318(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_296(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_225(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_290(int iParam0)
{
	iVar0 = func_243(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_291(0) };
	if (func_319(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> func_291(bool bParam0)
{
	return func_288(1328661203, func_320(), -1591664384, bParam0);
}

bool func_292(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_225(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_293(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_225(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_294(bool bParam0)
{
	if (func_112() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_225(bParam0));
}

int func_295(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_296(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_297(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_321(Var0.f_4, Param4, iParam8, 0);
	iVar15 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_322(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_323(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_296(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_225(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_297(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_298(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_297(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_296(Param0, &Var0, 1, 0) || !func_296(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_297(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_322(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_322(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
		{
			if (_cashinventory_transaction_add_item(iVar60, &Var28, 16) && _cashinventory_transaction_add_item(iVar60, &Var44, 16))
			{
				if (_cashinventory_transaction_checkout(iVar60))
				{
					func_324(iVar60, 1);
				}
				else
				{
					_cashinventory_transaction_delete(iVar60);
					return -1;
				}
			}
			else
			{
				_cashinventory_transaction_delete(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_323(1168099063, &Var28, 0);
		iVar60 = func_323(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_299(int iParam0)
{
	switch (iParam0)
	{
		case -1760684159:
		case -1718100160:
		case -1642485146:
		case -1486704931:
		case -1391147923:
		case -1356425746:
		case -1181161469:
		case -1084397164:
		case -1053639984:
		case -941733863:
		case -646460384:
		case -575759638:
		case -548014618:
		case 291878635:
		case 979093383:
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return true;
	}
	return false;
}

void func_300(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_326(func_325(255), 109029619));
	}
	else if (func_251())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_259();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_301(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_302(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_326(func_325(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_251())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_259())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_303(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_304(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_305(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_142(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_301(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_301(iParam0) + 1;
	fVar6 = func_327(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_328(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_306(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_307(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_308(int iParam0)
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

bool func_309(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_311()
{
	return Global_40.f_1095.f_3135;
}

void func_312(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_313(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_225(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_296(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_314(int iParam0)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_72(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_315()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_316(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_317(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_318(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_296(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_164(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_329(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_330(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_331(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_332(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_322(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_323(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_319(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_225(bParam2), uParam0, iParam1);
}

struct<4> func_320()
{
	return Var0;
}

int func_321(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_102(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_288(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_225(bParam6), &Var0, 0);
	return uVar4;
}

struct<16> func_322(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_323(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_324(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_324(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_324(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_324(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_333(iParam0, iParam1);
}

char* func_325(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_334(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_334(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_326(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_335(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_327(int iParam0)
{
	iParam0 = func_124(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_328(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<28> func_329(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_225(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_322(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_330(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_324(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_324(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_324(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_331(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_225(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_322(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_332(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_324(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_324(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_324(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_333(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

bool func_334(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_336(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_337())
	{
		return func_336(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_336(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_335(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_336(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_337()
{
	return Global_1109400->f_245;
}

