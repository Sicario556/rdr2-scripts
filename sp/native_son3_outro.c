void __EntryFunction__()
{
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_18);
	}
	func_2(&Local_18, &uScriptParam_0);
	while (!func_3(&Local_18))
	{
		func_4(&Local_18);
		switch (func_5(Local_18))
		{
			case 0:
				if (func_6(&Local_18))
				{
					func_7(&Local_18, 1);
				}
				break;
			case 1:
				if (func_8(&Local_18))
				{
					func_7(&Local_18, 2);
				}
				break;
			case 2:
				if (func_9(&Local_18))
				{
					func_7(&Local_18, 3);
				}
				break;
			case 3:
				func_1(&Local_18);
				break;
		}
		wait(0);
	}
	func_1(&Local_18);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_12(&(uLocal_5[iVar0])))
		{
			func_13(&(uLocal_5[iVar0]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (func_14(iVar2) && func_12(iVar2))
		{
			iVar3 = Global_1360165[iVar1];
			if (does_entity_exist(iVar3))
			{
				if (func_15(iVar2))
				{
					func_13(iVar2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
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
	bVar0 = true;
	_disable_first_person_cam_this_frame_2();
	switch (iLocal_4)
	{
		case 0:
			if (func_16(uParam0, 1))
			{
				iLocal_8 = uParam0->f_2;
			}
			else if (!_does_anim_scene_exist(iLocal_8))
			{
				iLocal_8 = _create_anim_scene("script@story@NTS3@leadout@ext@leadout", 0, 0, false, true);
				bVar0 = false;
			}
			else if (!_is_anim_scene_loaded(iLocal_8, true, false))
			{
				if (!_is_anim_scene_loading(iLocal_8, true))
				{
					load_anim_scene(iLocal_8);
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(iLocal_8, "pbl_Cough_A"))
			{
				if (!_0x0df57f86fe71dbe5(iLocal_8, "pbl_Cough_A"))
				{
					_0xdf7b5144e25cd3fe(iLocal_8, "pbl_Cough_A");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(iLocal_8, "pbl_Cough_B"))
			{
				if (!_0x0df57f86fe71dbe5(iLocal_8, "pbl_Cough_B"))
				{
					_0xdf7b5144e25cd3fe(iLocal_8, "pbl_Cough_B");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(iLocal_8, "pbl_Labored_Breath"))
			{
				if (!_0x0df57f86fe71dbe5(iLocal_8, "pbl_Labored_Breath"))
				{
					_0xdf7b5144e25cd3fe(iLocal_8, "pbl_Labored_Breath");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(iLocal_8, "pbl_Wipe_Face"))
			{
				if (!_0x0df57f86fe71dbe5(iLocal_8, "pbl_Wipe_Face"))
				{
					_0xdf7b5144e25cd3fe(iLocal_8, "pbl_Wipe_Face");
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_4 = 1;
			}
			break;
		case 1:
			if (!does_entity_exist(Global_35))
			{
			}
			if (bVar0)
			{
				iLocal_4 = 2;
			}
			break;
		case 2:
			set_anim_scene_entity(iLocal_8, "arthur", Global_35, 0);
			if (bVar0)
			{
				iLocal_4 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
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
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_22(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!func_23())
	{
		iVar0 = 0;
	}
	if (!func_24(uParam0))
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
		if (func_14(iVar0) && func_15(iVar0))
		{
			func_25(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_26(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	if (_does_anim_scene_exist(iLocal_8))
	{
		_delete_anim_scene(iLocal_8);
	}
}

bool func_12(int iParam0)
{
	return func_27(iParam0, 16, 1);
}

void func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_25(iParam0, 56, 1);
		func_26(&(Global_1359489->f_40), 1);
	}
	func_28(iParam0, 0);
	func_29(iParam0, 4, 0);
	func_30(iParam0);
	func_31(iParam0);
	func_32(iParam0, 37, 1);
	bVar0 = func_33(Global_1360165[iParam0], 0);
	iVar1 = func_34(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_35(iParam0, 64, 1))
	{
		func_32(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_32(iParam0, 33, 1);
		func_32(iParam0, 34, 1);
		func_36(iParam0, 1056964608, -1, 1061158912);
		func_37(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_25(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_25(iParam0, 35, 1);
			if (bParam8)
			{
				func_25(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_38(iParam0, 0);
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
		func_32(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_25(iParam0, 33, 1);
		func_37(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_26(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_39(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_25(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_40(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_35(iParam0, 45, 1))
	{
		func_32(iParam0, 45, 1);
	}
	func_41(iParam0, 16, 1);
	func_32(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_33(func_42(iParam0), 0))
		{
			func_43(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_15(int iParam0)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	if (!func_12(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
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
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	_disable_first_person_cam_this_frame_2();
	func_44(&uLocal_12);
	return 1;
}

bool func_22(int iParam0)
{
	return true;
}

bool func_23()
{
	iVar0 = 1;
	return iVar0;
}

bool func_24(var uParam0)
{
	if (iLocal_3 == 0 || iLocal_3 == 1)
	{
		_disable_first_person_cam_this_frame_2();
	}
	func_45(1);
	switch (iLocal_3)
	{
		case 0:
			if (_is_anim_scene_started(iLocal_8, false))
			{
				func_44(&uLocal_15);
				iLocal_3 = 1;
			}
			break;
		case 1:
			if (func_46())
			{
				iLocal_3 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_finished(iLocal_8, false))
			{
				iLocal_3 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_25(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_44(uParam0);
	}
}

bool func_27(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_28(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_50(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_29(iParam0, 1, 0);
		}
	}
	func_29(iParam0, 16, bParam1);
}

void func_29(int iParam0, int iParam1, bool bParam2)
{
	if (!func_47(iParam0))
	{
		return;
	}
	func_51(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_30(int iParam0)
{
	func_29(iParam0, 8, 0);
}

void func_31(int iParam0)
{
	func_25(iParam0, 36, 1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_33(int iParam0, int iParam1)
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
	if (func_52(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_52(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_52(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_52(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_52(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_52(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_52(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_52(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_34(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_53(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return false;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_14(iParam0))
	{
		iVar1 = func_54(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_55(iParam0);
		}
	}
	if (func_35(iParam0, 5, 1))
	{
		set_ped_config_flag(func_54(iParam0), 137, true);
	}
}

void func_37(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_32(iParam0, 50, 1);
		func_32(iParam0, 48, 1);
		func_32(iParam0, 49, 1);
		func_32(iParam0, 51, 1);
		func_32(iParam0, 52, 1);
		func_32(iParam0, 54, 1);
		func_32(iParam0, 55, 1);
	}
	else
	{
		func_25(iParam0, 50, 1);
		func_25(iParam0, 48, 1);
		func_25(iParam0, 49, 1);
		func_25(iParam0, 51, 1);
		if (bParam3)
		{
			func_25(iParam0, 54, 1);
		}
		else
		{
			func_32(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_25(iParam0, 52, 1);
			if (bParam3)
			{
				func_25(iParam0, 55, 1);
			}
		}
		else
		{
			func_32(iParam0, 52, 1);
			if (!bParam3)
			{
				func_32(iParam0, 55, 1);
			}
		}
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_54(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_54(iParam0), 204, false);
	}
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (!func_15(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_35(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_34(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_54(iParam0);
	if (((does_entity_exist(iVar1) && func_56(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_25(iParam0, 2, 1);
	}
	else
	{
		func_57(iParam0);
		func_25(iParam0, 1, 1);
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_42(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_43(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_47(iParam1))
	{
		return;
	}
	iVar0 = func_42(iParam1);
	if (func_58(iParam1))
	{
		if (!func_59(iParam1))
		{
			return;
		}
	}
	func_32(iParam1, 39, 1);
	func_60(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_60(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_60(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_25(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_61(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_44(var uParam0)
{
	func_62(uParam0, 0f);
}

void func_45(bool bParam0)
{
	disable_all_control_actions(0);
	if (bParam0)
	{
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
	else
	{
		disable_all_control_actions(1);
	}
	func_63();
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	enable_control_action(0, -1461455769, true);
	enable_control_action(0, -39308912, true);
}

bool func_46()
{
	if (!bLocal_11)
	{
		if (func_64(&uLocal_15) > 3000)
		{
			bLocal_11 = true;
		}
	}
	if (func_65())
	{
		if (!func_49(&uLocal_12))
		{
			func_44(&uLocal_12);
		}
	}
	if (func_64(&uLocal_12) > 3000 && !bLocal_10)
	{
		iVar0 = iLocal_9 + 1;
		if (iVar0 > 3)
		{
			iVar0 = 0;
		}
		if (func_67(func_66(iVar0), 0))
		{
			iLocal_9++;
			if (iLocal_9 > 3)
			{
				iLocal_9 = 0;
			}
			func_39(&uLocal_12);
		}
	}
	if (bLocal_11 == 1)
	{
		fVar1 = get_control_normal(0, -39308912);
		if (((fVar1 >= 0.5f || fVar1 <= -0.5f) || is_control_just_pressed(0, -1879280170)) || bLocal_10)
		{
			if (!bLocal_10)
			{
				bLocal_10 = true;
			}
			if (func_67("pbl_Exit", 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_47(int iParam0)
{
	return iParam0 > -1;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_49(var uParam0)
{
	return func_68(*uParam0, 1);
}

bool func_50(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1, bool bParam2)
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

bool func_52(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_53(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_69(iParam0);
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

int func_54(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_55(int iParam0)
{
	if (func_14(iParam0))
	{
		if (does_entity_exist(func_54(iParam0)))
		{
			func_70(iParam0, 67108864, 1);
			func_32(iParam0, 19, 1);
		}
	}
}

float func_56(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_57(int iParam0)
{
	iVar0 = func_54(iParam0);
	iVar1 = func_34(iParam0, 0);
	func_71(iParam0, iVar0);
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

bool func_58(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_59(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	if (!func_47(iParam0))
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

int func_61(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	iVar0 = func_42(iParam0);
	if (func_33(iVar0, 0))
	{
		if (func_33(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_58(iParam0)) || func_59(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_72(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_73(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_74(iParam0);
					_0x7b204f88f6c3d287(func_75(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_75(iParam0, 0));
					func_76(iParam0);
				}
			}
			else
			{
				if (func_27(iParam0, 32768, 1))
				{
					iVar2 = func_75(iParam0, 0);
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
		if (func_33((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_27(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_74(iParam0);
				_0x7b204f88f6c3d287(func_75(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_75(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_74(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_77(iParam0, 0);
	return 1;
}

void func_62(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_78() - fParam1);
	func_79(uParam0, 1);
	func_80(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_63()
{
	disable_control_action(0, 1287709438, false);
	func_81(0);
	Global_1935689->f_6 = 1;
}

int func_64(var uParam0)
{
	if (!func_49(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_82(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_83() - round((uParam0->f_1 * 1000f)));
}

bool func_65()
{
	if (!_does_anim_scene_exist(iLocal_8))
	{
		return false;
	}
	if (!_is_anim_scene_started(iLocal_8, false))
	{
		return false;
	}
	if (_0x8d81e7824b7753f7(iLocal_8, "Idle", 1))
	{
		return true;
	}
	return false;
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_Cough_A";
		case 1:
			return "pbl_Cough_B";
		case 2:
			return "pbl_Labored_Breath";
		case 3:
			return "pbl_Wipe_Face";
	}
	return "pbl_Cough_A";
}

bool func_67(char* sParam0, int iParam1)
{
	if (!_0x23e33cb9f4a3f547(iLocal_8, sParam0))
	{
		if (!_0x0df57f86fe71dbe5(iLocal_8, sParam0))
		{
			_0xdf7b5144e25cd3fe(iLocal_8, sParam0);
		}
	}
	else if (func_84() || iParam1)
	{
		_set_anim_scene_playback_list_bool(iLocal_8, sParam0, true);
		if (!_is_anim_scene_started(iLocal_8, false))
		{
			start_anim_scene(iLocal_8);
		}
		return true;
	}
	return false;
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_69(int iParam0)
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

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_71(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_85(iParam1);
	}
}

float func_72(int iParam0, int iParam1, bool bParam2)
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
	return func_86(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_73(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_87(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_74(int iParam0)
{
	iVar0 = func_42(iParam0);
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

int func_75(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_88(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_76(int iParam0)
{
	if (!func_47(iParam0))
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

void func_77(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

float func_78()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_82(var uParam0)
{
	return func_68(*uParam0, 2);
}

int func_83()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_84()
{
	if (!_does_anim_scene_exist(iLocal_8))
	{
		return 1;
	}
	if (!_is_anim_scene_started(iLocal_8, false))
	{
		return 1;
	}
	if (_get_anim_scene_progress(iLocal_8) >= 0.98f)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
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

float func_86(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_87(int iParam0)
{
	iVar0 = 0;
	if (!func_47(iParam0))
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
	if (!func_47(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_88(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_73(iParam0, 1);
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

