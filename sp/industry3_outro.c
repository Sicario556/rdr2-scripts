void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_11 = { 2633.798f, -1288.307f, 51.2586f };
	fLocal_14 = 24.6467f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_114);
	}
	func_2(&Local_114, &uScriptParam_0);
	while (!func_3(&Local_114))
	{
		func_4(&Local_114);
		switch (func_5(Local_114))
		{
			case 0:
				if (func_6(&Local_114))
				{
					func_7(&Local_114, 1);
				}
				break;
			case 1:
				if (func_8(&Local_114))
				{
					func_7(&Local_114, 2);
				}
				break;
			case 2:
				if (func_9(&Local_114))
				{
					func_7(&Local_114, 3);
				}
				break;
			case 3:
				func_1(&Local_114);
				break;
		}
		wait(0);
	}
	func_1(&Local_114);
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
	if (func_21(251, 1))
	{
		iLocal_9 = func_22(251, 1, 0, 1, 1, 1);
	}
	return (does_entity_exist(iLocal_9) && _text_database_has_loaded("IND3AUD"));
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
	return func_23(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	if (!func_24())
	{
		iVar0 = 0;
	}
	if (!func_25(uParam0))
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
			func_26(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_27(&(Global_1359489->f_40), 1);
}

int func_11(var uParam0)
{
	clear_ped_tasks_immediately(iLocal_9, false, true);
	func_28(251, 0, 1, 0, 0);
	func_29(51, 1);
	_delete_scenario_point(iLocal_10);
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
	return func_30(iParam0, 16, 1);
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
		func_26(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_31(iParam0, 0);
	func_32(iParam0, 4, 0);
	func_33(iParam0);
	func_34(iParam0);
	func_35(iParam0, 37, 1);
	bVar0 = func_36(Global_1360165[iParam0], 0);
	iVar1 = func_37(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_38(iParam0, 64, 1))
	{
		func_35(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_35(iParam0, 33, 1);
		func_35(iParam0, 34, 1);
		func_39(iParam0, 1056964608, -1, 1061158912);
		func_40(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_26(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_26(iParam0, 35, 1);
			if (bParam8)
			{
				func_26(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_41(iParam0, 0);
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
		func_35(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_26(iParam0, 33, 1);
		func_40(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_42(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_26(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_43(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_38(iParam0, 45, 1))
	{
		func_35(iParam0, 45, 1);
	}
	func_44(iParam0, 16, 1);
	func_35(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_36(func_45(iParam0), 0))
		{
			func_46(0, iParam0, bParam3, 0, bParam2);
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
	_0xed9582b3da8f02b4(1);
	func_29(51, 0);
	_text_database_request("IND3AUD");
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_48(iParam0, 2))
	{
		return false;
	}
	if (func_48(iParam0, 32) && !bParam1)
	{
		func_50(iParam0, _create_persistent_character(func_49(iParam0)));
		if (func_51() == -1)
		{
			if (func_48(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_52(iParam0));
				func_53(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_52(iParam0));
		}
		return false;
	}
	if (!func_54(iParam0) && func_51() == -1)
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_52(iParam0)))
	{
		func_53(iParam0, 128);
		return true;
	}
	func_50(iParam0, _create_persistent_character(func_49(iParam0)));
	_0x4f81ead1de8fa19b(func_52(iParam0));
	if (func_48(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_52(iParam0));
		func_53(iParam0, 2048);
	}
	return true;
}

int func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_55(iParam0, 1))
	{
		return 0;
	}
	if (func_56(func_49(iParam0)))
	{
		iVar1 = func_52(iParam0);
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
	if ((bParam4 && !func_57(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_58(iParam0, 1);
	func_59(iParam0);
	if (bParam3)
	{
		func_58(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_23(var uParam0)
{
	func_60(iLocal_9, vLocal_11, fLocal_14, 2, 1073741824);
	_text_database_request("BRT3AUD");
	func_61(&uLocal_16, iLocal_9, "IND3_PAPERBOY", 0);
	iLocal_10 = func_62(1951271908, vLocal_11, fLocal_14, 0, -1f, 1);
	_task_use_scenario_point(iLocal_9, iLocal_10, 0, -1, false, true, 0, false, -1f, false);
	set_ped_config_flag(iLocal_9, 130, false);
	func_63((*Global_1835011)[34]->f_1, 1);
	return 1;
}

bool func_24()
{
	iVar0 = 1;
	return iVar0;
}

bool func_25(var uParam0)
{
	if (!bLocal_15 && is_screen_faded_in())
	{
		if (func_64((*Global_1835011)[34]->f_1) == 2)
		{
			StringCopy(&cVar0, "IND3_PAPERBOY", 24);
			if (func_65(&uLocal_16, cVar0, 0, -1, 0, 0))
			{
				bLocal_15 = true;
			}
		}
	}
	if (!func_66(iLocal_9, Global_35, 100f, 1) || is_entity_dead(iLocal_9))
	{
		return true;
	}
	return false;
}

void func_26(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_67(iParam0))
		{
			return;
		}
	}
	func_68(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_69(uParam0))
	{
		func_70(uParam0);
	}
}

void func_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_48(iParam0, 1))
	{
		return;
	}
	if (!func_48(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_57(iParam0)) && func_71(iParam0))
	{
		return;
	}
	func_53(iParam0, 1);
	func_72(iParam0);
	if (func_56(func_49(iParam0)))
	{
		iVar0 = func_52(iParam0);
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
		func_53(iParam0, 16);
	}
	if (func_48(iParam0, 128) && !bParam3)
	{
		func_73(iParam0, 0);
	}
}

void func_29(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_75(iParam0, 1);
	}
	else
	{
		func_76(iParam0, 1);
	}
	func_78(func_77(iParam0), bParam1);
}

bool func_30(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_67(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_31(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_79(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_32(iParam0, 1, 0);
		}
	}
	func_32(iParam0, 16, bParam1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (!func_67(iParam0))
	{
		return;
	}
	func_80(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_33(int iParam0)
{
	func_32(iParam0, 8, 0);
}

void func_34(int iParam0)
{
	func_26(iParam0, 36, 1);
}

void func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_67(iParam0))
		{
			return;
		}
	}
	func_68(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_36(int iParam0, int iParam1)
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
	if (func_81(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_81(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_81(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_37(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_82(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_67(iParam0))
		{
			return false;
		}
	}
	func_68(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_83(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_84(iParam0);
		}
	}
	if (func_38(iParam0, 5, 1))
	{
		set_ped_config_flag(func_83(iParam0), 137, true);
	}
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_67(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_35(iParam0, 50, 1);
		func_35(iParam0, 48, 1);
		func_35(iParam0, 49, 1);
		func_35(iParam0, 51, 1);
		func_35(iParam0, 52, 1);
		func_35(iParam0, 54, 1);
		func_35(iParam0, 55, 1);
	}
	else
	{
		func_26(iParam0, 50, 1);
		func_26(iParam0, 48, 1);
		func_26(iParam0, 49, 1);
		func_26(iParam0, 51, 1);
		if (bParam3)
		{
			func_26(iParam0, 54, 1);
		}
		else
		{
			func_35(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_26(iParam0, 52, 1);
			if (bParam3)
			{
				func_26(iParam0, 55, 1);
			}
		}
		else
		{
			func_35(iParam0, 52, 1);
			if (!bParam3)
			{
				func_35(iParam0, 55, 1);
			}
		}
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_83(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_83(iParam0), 204, false);
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_38(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_37(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_83(iParam0);
	if (((does_entity_exist(iVar1) && func_85(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_26(iParam0, 2, 1);
	}
	else
	{
		func_86(iParam0);
		func_26(iParam0, 1, 1);
	}
}

void func_44(int iParam0, int iParam1, bool bParam2)
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

int func_45(int iParam0)
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

void func_46(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_67(iParam1))
	{
		return;
	}
	iVar0 = func_45(iParam1);
	if (func_87(iParam1))
	{
		if (!func_88(iParam1))
		{
			return;
		}
	}
	func_35(iParam1, 39, 1);
	func_89(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_89(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_89(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_26(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_90(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_48(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_49(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_50(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_51()
{
	return Global_1572887->f_12;
}

int func_52(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_53(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_54(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_48(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if ((func_48(iParam0, 1) && !func_57(iParam0)) && func_71(iParam0))
	{
		return false;
	}
	if (!func_48(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_91(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_56(int iParam0)
{
	return iParam0 != 0;
}

bool func_57(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_58(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_59(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

void func_60(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_92(Global_35) && is_player_teleport_active())
	{
	}
	if (func_93(iParam0))
	{
		if (func_94(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_81(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_60(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_60(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_81(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_81(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_81(iParam5, 129))
	{
		if (func_81(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_81(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_81(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_93(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_81(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_81(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_61(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_95(uParam0, iParam1, sParam2))
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

int func_62(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, iParam5, fParam6, iParam7);
}

void func_63(int iParam0, int iParam1)
{
	if (!func_96(iParam0))
	{
		return;
	}
	func_97(iParam0, iParam1);
}

int func_64(int iParam0)
{
	if (!func_96(iParam0))
	{
		return -1;
	}
	return func_98(iParam0);
}

bool func_65(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_99(cParam1, cParam0);
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

bool func_66(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	return iParam0 > -1;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_69(var uParam0)
{
	return func_100(*uParam0, 1);
}

void func_70(var uParam0)
{
	func_101(uParam0, 0f);
}

bool func_71(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_72(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_102(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_73(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_48(iParam0, 2))
	{
		return 0;
	}
	if (func_49(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_52(iParam0)))
	{
		return 1;
	}
	if (func_48(iParam0, 1) && !bParam1)
	{
		func_58(iParam0, 128);
		return 1;
	}
	func_53(iParam0, 129);
	func_72(iParam0);
	_0xfc77c5b44d5ff7c0(func_52(iParam0));
	func_50(iParam0, 0);
	return 1;
}

bool func_74(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_75(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_76(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_77(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if ((bParam1 && func_104(iParam0, 512)) || (!bParam1 && !func_104(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_105(iParam0, 512);
	}
	else
	{
		func_106(iParam0, 512);
	}
	if (func_107(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_79(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_80(var uParam0, int iParam1, bool bParam2)
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

bool func_81(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_82(int iParam0)
{
	if (!func_67(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_108(iParam0);
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

int func_83(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_84(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_83(iParam0)))
		{
			func_109(iParam0, 67108864, 1);
			func_35(iParam0, 19, 1);
		}
	}
}

float func_85(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_86(int iParam0)
{
	iVar0 = func_83(iParam0);
	iVar1 = func_37(iParam0, 0);
	func_110(iParam0, iVar0);
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

bool func_87(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	if (!func_67(iParam0))
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

int func_90(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	iVar0 = func_45(iParam0);
	if (func_36(iVar0, 0))
	{
		if (func_36(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_87(iParam0)) || func_88(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_111(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_112(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_113(iParam0);
					_0x7b204f88f6c3d287(func_114(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_114(iParam0, 0));
					func_115(iParam0);
				}
			}
			else
			{
				if (func_30(iParam0, 32768, 1))
				{
					iVar2 = func_114(iParam0, 0);
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
		if (func_36((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_30(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_113(iParam0);
				_0x7b204f88f6c3d287(func_114(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_114(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_113(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_116(iParam0, 0);
	return 1;
}

bool func_91(int iParam0, bool bParam1)
{
	if (func_51() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_52(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_102(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_52(iParam0));
}

int func_92(var uParam0)
{
	return uParam0;
}

bool func_93(int iParam0)
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

bool func_94(int iParam0)
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

bool func_95(var uParam0, int iParam1, char* sParam2)
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

bool func_96(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_97(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

int func_98(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

void func_99(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_101(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_117() - fParam1);
	func_118(uParam0, 1);
	func_119(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_102(int iParam0)
{
	iVar0 = func_52(iParam0);
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

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_104(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_105(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_106(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_107(int iParam0)
{
	if (func_120())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_108(int iParam0)
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

void func_109(int iParam0, int iParam1, bool bParam2)
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

void func_110(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_121(iParam1);
	}
}

float func_111(int iParam0, int iParam1, bool bParam2)
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
	return func_122(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_112(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_123(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_113(int iParam0)
{
	iVar0 = func_45(iParam0);
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

int func_114(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_124(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_115(int iParam0)
{
	if (!func_67(iParam0))
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

void func_116(int iParam0, int iParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

float func_117()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_120()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

void func_121(int iParam0)
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

float func_122(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_123(int iParam0)
{
	iVar0 = 0;
	if (!func_67(iParam0))
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
	if (!func_67(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_124(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_112(iParam0, 1);
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

