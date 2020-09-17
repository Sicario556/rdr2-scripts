void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
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
	if (bLocal_14)
	{
		_0x8370d34bd2e60b73();
		_disable_first_person_cam_this_frame();
	}
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && _does_thread_exist(uParam0->f_1)) && is_thread_active(uParam0->f_1, false))
	{
		return 0;
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
	if (!bLocal_14)
	{
		set_ped_is_drunk(Global_35, false);
		_0x406ccf555b04fad3(Global_35, 0, 0f);
		_0x437c08db4febe2bd(Global_35, "Drunkness", 0f, -1);
		_0xcb9401f918cb0f75(Global_35, "IsDrunk", 0, -1);
	}
	else
	{
		func_26(iLocal_15);
		func_27(&uLocal_17, iLocal_16, 0);
		func_28(iLocal_16);
	}
	func_29();
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
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489->f_40), 1);
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
		func_24(iParam0, 33, 1);
		func_40(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_25(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_42(&((*Global_1360165)[iParam0]->f_130));
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
	if (func_47((*Global_1835011)[9]->f_1) == 1)
	{
		bLocal_14 = true;
		if (_does_anim_scene_exist(uParam0->f_2))
		{
			iLocal_15 = uParam0->f_2;
			take_ownership_of_anim_scene(iLocal_15);
		}
	}
	if (bLocal_14)
	{
		iLocal_16 = _create_volume_box(-277.092f, 800.382f, 119.1905f, 0f, 0f, 9.954012f, 4.771447f, 2.07305f, 1.824199f);
		uLocal_17 = func_48(iLocal_16, 0, 0, 0);
		_0x8370d34bd2e60b73();
		_disable_first_person_cam_this_frame();
	}
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!bLocal_14)
	{
		set_ped_is_drunk(Global_35, true);
		_0x406ccf555b04fad3(Global_35, 1, 0.75f);
		_0xcb9401f918cb0f75(Global_35, "IsDrunk", 1, -1);
		_0x437c08db4febe2bd(Global_35, "Drunkness", 0.75f, -1);
		fLocal_13 = 0.75f;
		func_49(&uLocal_10);
	}
	if (bLocal_14)
	{
		_0x8370d34bd2e60b73();
		_disable_first_person_cam_this_frame();
	}
	return 1;
}

bool func_22()
{
	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	if (!bLocal_14)
	{
		if ((!_0x50f124e6ef188b22(Global_35) || _0x6fb76442469abd68(Global_35) != fLocal_13) || _0xa29fd00d45311eb7(Global_35, "Drunkness") != fLocal_13)
		{
			set_ped_is_drunk(Global_35, true);
			_0x406ccf555b04fad3(Global_35, 1, fLocal_13);
			_0x437c08db4febe2bd(Global_35, "Drunkness", fLocal_13, -1);
		}
		switch (iLocal_9)
		{
			case 0:
				if (func_50(&uLocal_10) >= 3f)
				{
					func_49(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 1:
				fVar0 = func_50(&uLocal_10);
				fVar1 = (1f - ((4f - fVar0) / 4f));
				fLocal_13 = (0.75f - (0.75f * fVar1));
				fLocal_13 = func_51(fLocal_13, 0f, 0.75f);
				_0x406ccf555b04fad3(Global_35, 1, fLocal_13);
				_0x437c08db4febe2bd(Global_35, "Drunkness", fLocal_13, -1);
				if (fLocal_13 <= 0f)
				{
					return true;
				}
				break;
		}
	}
	else
	{
		if (!_does_anim_scene_exist(iLocal_15))
		{
			return true;
		}
		switch (iLocal_9)
		{
			case 0:
				_0x8370d34bd2e60b73();
				_disable_first_person_cam_this_frame();
				if (_is_anim_scene_started(iLocal_15, false) && func_52(iLocal_15, "pl_getup"))
				{
					iLocal_9++;
				}
				break;
			case 1:
				_0x8370d34bd2e60b73();
				_disable_first_person_cam_this_frame();
				if (func_53() || _0x8d81e7824b7753f7(iLocal_15, "s_getup", 1))
				{
					if (!_0x8d81e7824b7753f7(iLocal_15, "s_getup", 1))
					{
						_set_anim_scene_playback_list_bool(iLocal_15, "pl_getup", true);
					}
					iLocal_9++;
				}
				break;
			case 2:
				_0x8370d34bd2e60b73();
				_disable_first_person_cam_this_frame();
				if (_0xb89fcff19dafff28(iLocal_15, "ARTHUR"))
				{
					func_49(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 3:
				if (func_50(&uLocal_10) >= 3f)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_56(uParam0))
	{
		func_49(uParam0);
	}
}

void func_26(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

void func_27(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_28(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_29()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

bool func_30(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_31(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_57(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_32(iParam0, 1, 0);
		}
	}
	func_32(iParam0, 16, bParam1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	func_58(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_33(int iParam0)
{
	func_32(iParam0, 8, 0);
}

void func_34(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
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
	if (func_59(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 256))
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
			func_60(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_61(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_62(iParam0);
		}
	}
	if (func_38(iParam0, 5, 1))
	{
		set_ped_config_flag(func_61(iParam0), 137, true);
	}
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
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
			func_35(iParam0, 54, 1);
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
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_61(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_61(iParam0), 204, false);
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
	iVar1 = func_61(iParam0);
	if (((does_entity_exist(iVar1) && func_63(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_64(iParam0);
		func_24(iParam0, 1, 1);
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
	if (!func_54(iParam1))
	{
		return;
	}
	iVar0 = func_45(iParam1);
	if (func_65(iParam1))
	{
		if (!func_66(iParam1))
		{
			return;
		}
	}
	func_35(iParam1, 39, 1);
	func_67(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_67(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_67(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_68(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_47(int iParam0)
{
	if (!func_69(iParam0))
	{
		return -1;
	}
	return func_70(iParam0);
}

var func_48(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_71(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_49(var uParam0)
{
	func_72(uParam0, 0f);
}

float func_50(var uParam0)
{
	if (!func_56(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_74() - uParam0->f_1);
}

float func_51(float fParam0, float fParam1, float fParam2)
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

bool func_52(int iParam0, char* sParam1)
{
	if (!_0x0df57f86fe71dbe5(iParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(iParam0, sParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

bool func_53()
{
	if ((((((((is_control_pressed(0, 1301263553) || is_control_pressed(0, -39308912)) || is_control_pressed(0, 1885667965)) || is_control_pressed(0, -1260100172)) || is_control_pressed(0, -1882188328)) || is_control_pressed(0, -763919645)) || is_control_pressed(0, -1879280170)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -1292666904))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0)
{
	return iParam0 > -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_56(var uParam0)
{
	return func_75(*uParam0, 1);
}

bool func_57(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_58(var uParam0, int iParam1, bool bParam2)
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

bool func_59(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_60(int iParam0)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_76(iParam0);
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

int func_61(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_62(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_61(iParam0)))
		{
			func_77(iParam0, 67108864, 1);
			func_35(iParam0, 19, 1);
		}
	}
}

float func_63(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_64(int iParam0)
{
	iVar0 = func_61(iParam0);
	iVar1 = func_37(iParam0, 0);
	func_78(iParam0, iVar0);
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

bool func_65(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_66(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
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

int func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_54(iParam0))
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
		if ((bParam1 || !func_65(iParam0)) || func_66(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_79(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_80(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_81(iParam0);
					_0x7b204f88f6c3d287(func_82(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_82(iParam0, 0));
					func_83(iParam0);
				}
			}
			else
			{
				if (func_30(iParam0, 32768, 1))
				{
					iVar2 = func_82(iParam0, 0);
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
				func_81(iParam0);
				_0x7b204f88f6c3d287(func_82(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_82(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_81(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_84(iParam0, 0);
	return 1;
}

bool func_69(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_70(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_72(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_74() - fParam1);
	func_85(uParam0, 1);
	func_86(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_73(var uParam0)
{
	return func_75(*uParam0, 2);
}

float func_74()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, bool bParam2)
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

void func_78(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_87(iParam1);
	}
}

float func_79(int iParam0, int iParam1, bool bParam2)
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
	return func_88(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_80(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_89(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_81(int iParam0)
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

int func_82(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_90(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_83(int iParam0)
{
	if (!func_54(iParam0))
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

void func_84(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_87(int iParam0)
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

float func_88(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_89(int iParam0)
{
	iVar0 = 0;
	if (!func_54(iParam0))
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
	if (!func_54(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_90(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_80(iParam0, 1);
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

