void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
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
	bVar0 = func_12(iLocal_30, 0);
	bVar1 = func_13(iLocal_41);
	bVar2 = does_entity_exist(iLocal_31);
	if (!_does_scenario_point_exist(iLocal_16))
	{
		iLocal_29 = 6;
		return;
	}
	if (iLocal_29 <= 1 && func_14(Global_35, _get_scenario_point_coords(iLocal_16, true)) >= 1600f)
	{
		return;
	}
	if (iLocal_29 <= 1 && get_entity_speed(Global_34) >= 8f)
	{
		return;
	}
	if ((iLocal_29 > 1 && iLocal_29 != 6) && Global_1940018->f_51)
	{
		func_15();
		iLocal_29 = 2;
		bLocal_38 = true;
	}
	if (iLocal_29 > 1 && iLocal_29 != 6)
	{
		if ((iLocal_29 != 5 && iLocal_29 != 2) && !bVar0)
		{
			func_15();
			if (bLocal_33)
			{
				iLocal_29 = 5;
				iLocal_28 = 0;
			}
			else
			{
				iLocal_29 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_29 = 6;
			return;
		}
		if (is_ped_in_combat(iLocal_31, 0))
		{
			iLocal_29 = 6;
			return;
		}
	}
	func_16();
	func_17(bVar0);
	switch (iLocal_29)
	{
		case 0:
			iVar3 = func_18();
			iLocal_52 = func_20(func_19(), iVar3);
			if (iLocal_52 == -1)
			{
				return;
			}
			bLocal_32 = false;
			bLocal_39 = false;
			request_model(-615159064, false);
			bLocal_38 = false;
			iLocal_27 = 0;
			if (iLocal_17 == 817658057)
			{
				request_model(1843407141, false);
				iVar4 = -758981113;
				iLocal_18 = 130648332;
				iLocal_19 = -1003673600;
				iLocal_21 = 817534410;
				iLocal_22 = -425323829;
				iLocal_23 = -79611391;
				iLocal_24 = -1378615306;
				iLocal_25 = -1931194237;
				iLocal_26 = 18806614;
				_request_scenario_type(-758981113, 262144, 0, 0);
			}
			else
			{
				iVar4 = -1208105393;
				iLocal_18 = -766432658;
				iLocal_19 = 391391121;
				iLocal_21 = -226695311;
				iLocal_22 = 1999132356;
				iLocal_23 = -467366400;
				iLocal_24 = 2127356704;
				iLocal_25 = 1054334670;
				iLocal_26 = 1885925117;
				_request_scenario_type(-1208105393, 262144, 0, 0);
				request_model(-911874060, false);
				request_model(-1971689092, false);
			}
			fVar5 = _get_scenario_point_heading(iLocal_16, true);
			iLocal_42 = create_scenario_point(iVar4, _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_16, true), fVar5, func_21()), (fVar5 - 180f), 0, 0, 0);
			_set_scenario_point_heading(iLocal_42, (fVar5 - 180f), true);
			_0xa7479fb665361edb(iLocal_42, 0);
			_0xe69fda40aac3efc0(iLocal_42, 0);
			iLocal_30 = _get_ped_using_scenario_point(iLocal_16);
			iLocal_41 = func_22(iLocal_52);
			if (func_23(iLocal_41))
			{
				iLocal_31 = func_24(iLocal_41);
			}
			iLocal_29 = 1;
			func_25(&uLocal_46, 1);
			break;
		case 2:
			if (((!func_26() && !bVar1) && !Global_1940018->f_51) && bVar0)
			{
				iLocal_28 = 0;
				iLocal_29 = 3;
				if (bLocal_33)
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 1:
			if (!has_model_loaded(-615159064))
			{
				return;
			}
			if (iLocal_17 == 817658057)
			{
				if (!has_model_loaded(1843407141))
				{
					return;
				}
				if (!_has_scenario_type_loaded(-758981113, false))
				{
					return;
				}
			}
			else
			{
				if (!has_model_loaded(-911874060))
				{
					return;
				}
				if (!has_model_loaded(-1971689092))
				{
					return;
				}
				if (!_has_scenario_type_loaded(-1208105393, false))
				{
					return;
				}
			}
			if (!_does_scenario_point_exist(iLocal_42))
			{
				return;
			}
			if (!func_12(iLocal_30, 0))
			{
				iLocal_30 = _get_ped_using_scenario_point(iLocal_16);
				return;
			}
			if (!bVar2)
			{
				if (func_23(iLocal_41))
				{
					iLocal_31 = func_24(iLocal_41);
				}
				return;
			}
			func_25(&uLocal_43, 1);
			iLocal_28 = 0;
			iLocal_29 = 3;
			break;
		case 3:
			func_27(bVar0, bVar1, bVar2);
			break;
		case 4:
			func_28();
			break;
		case 5:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_13 = 0;
			break;
	}
}

void func_7()
{
	func_15();
	_0x4161648394262fdf(_get_scenario_point_coords(iLocal_16, true), 0.15f);
	if (_does_scenario_point_exist(iLocal_42))
	{
		_delete_scenario_point(iLocal_42);
	}
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
		func_30(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_31(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_32(&iVar0);
	}
}

bool func_12(int iParam0, int iParam1)
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
	if (func_33(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_34(iParam0, 1);
}

float func_14(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_15()
{
	if (!Global_1940018->f_51)
	{
		if (Global_1940018->f_50 == get_id_of_this_thread())
		{
			Global_1940018->f_50 = 0;
		}
		iVar0 = func_35(iLocal_41);
		if (_0x800df3fc913355f3(iVar0))
		{
			_0xa2b18ff8d39f6d87(iVar0);
			_0x631cd2d77fdc0316(iVar0);
		}
	}
	else
	{
		Global_1940018->f_50 = 0;
	}
}

void func_16()
{
	if (bLocal_34 && has_anim_event_fired(iLocal_31, -1342079302))
	{
		if (does_entity_exist(iLocal_55))
		{
			delete_object(&iLocal_55);
		}
		bLocal_34 = false;
	}
	if (bLocal_35 && has_anim_event_fired(iLocal_31, 2131322378))
	{
		_0x3bbdd6143ff16f98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
		bLocal_35 = false;
	}
}

void func_17(bool bParam0)
{
	if (bLocal_37 && _0xc488b8c0e52560d8(iLocal_30))
	{
		set_ped_can_play_ambient_anims(iLocal_30, false);
		set_ped_can_play_ambient_base_anims(iLocal_30, false);
		set_ped_can_play_gesture_anims(iLocal_30, 0, 1);
	}
	if ((!bLocal_32 && bLocal_38) && has_anim_event_fired(iLocal_30, 864365833))
	{
		if (iLocal_17 == 817658057)
		{
			if (!does_entity_exist(iLocal_53))
			{
				iLocal_53 = create_object(-911874060, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			}
			if (_0x3bbdd6143ff16f98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!does_entity_exist(iLocal_54))
			{
				iLocal_54 = create_object(-911874060, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			}
			if (_0x3bbdd6143ff16f98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
	}
	if (bLocal_36 && has_anim_event_fired(iLocal_30, 350240706))
	{
		iLocal_54 = _0x4d0d2e3d8bc000eb(iLocal_30, "p_shotGlass01x_PH_L_Hand", 1);
		bLocal_36 = false;
	}
	if (bParam0)
	{
		iVar0 = _0x569f1e1237508deb(iLocal_30);
	}
	if (((bLocal_40 && !bLocal_32) && !bLocal_33) && (iVar0 == -446196418 || iVar0 == 266410079))
	{
		if (iLocal_17 == 817658057)
		{
			if (!does_entity_exist(iLocal_53))
			{
				iLocal_53 = create_object(-911874060, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			}
			if (_0x3bbdd6143ff16f98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!does_entity_exist(iLocal_54))
			{
				iLocal_54 = create_object(-911874060, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			}
			if (_0x3bbdd6143ff16f98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
	}
	if (((bLocal_40 && !bLocal_32) && !_0x68821369a2ceadd5(iLocal_30, iLocal_18)) && !_0x68821369a2ceadd5(iLocal_30, iLocal_19))
	{
		_0x6d07b371e9439019(iLocal_30);
		if (iVar0 == -1265212358)
		{
			_0xd65fdc686a031c83(iLocal_30, iLocal_18, 3f);
			bLocal_37 = true;
		}
		else if (iVar0 == -1488172634)
		{
			_0xd65fdc686a031c83(iLocal_30, iLocal_19, 3f);
			bLocal_37 = true;
		}
	}
}

int func_18()
{
	switch (func_19())
	{
		case 81:
			if (func_37(func_36(0), _get_scenario_point_coords(iLocal_16, true)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 40:
		case 98:
		case 121:
		case 127:
			return 0;
		case 5:
			if (func_37(func_36(2), _get_scenario_point_coords(iLocal_16, true)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 111:
			return 2;
	}
	return -1;
}

int func_19()
{
	return Global_1893587->f_2;
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_21()
{
	return -0.235327f, 1.850775f, 0f;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 437;
		case 0:
			return 502;
		case 4:
			return 345;
		case 7:
			return 426;
		default:
			break;
	}
	return -1;
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_24(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (!func_34(iParam0, 2))
	{
		return 0;
	}
	if (func_39(func_38(iParam0)))
	{
		return func_40(iParam0);
	}
	return _0xe76687023d8c8505(func_41(iParam0), 0);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_42(uParam0))
	{
		func_43(uParam0);
	}
}

bool func_26()
{
	if (Global_1940018->f_50 != get_id_of_this_thread())
	{
		if (Global_1940018->f_50 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (Global_1940018->f_51)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940018->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			bVar0 = _0x9c54041bb66bcf9e(iLocal_30, iLocal_16);
			if (!bVar0 && !_0x0c3cb2e600c8977d(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!does_entity_exist(iLocal_55) && is_ped_active_in_scenario(iLocal_30, 1))
			{
				iLocal_55 = _0x4d0d2e3d8bc000eb(iLocal_30, "p_coin01x", 1);
				if (does_entity_exist(iLocal_55))
				{
					_0x18ff3110cf47115d(iLocal_55, 2, 0);
				}
				bLocal_34 = true;
			}
			if (is_ped_active_in_scenario(iLocal_30, 0) && bVar0)
			{
				if ((bParam1 && !func_44(iLocal_41)) || func_26())
				{
					iLocal_29 = 2;
					return;
				}
				else
				{
					func_45();
				}
				iVar1 = _0x569f1e1237508deb(iLocal_30);
				if ((iVar1 != -1265212358 && iVar1 != -1488172634) && iVar1 != 1164151940)
				{
					iLocal_29 = 5;
					iLocal_28 = 0;
					bLocal_33 = true;
					func_15();
					return;
				}
				if (!Global_1940018->f_51)
				{
					_0xa3a9299c4f2adb98(iLocal_31);
					_task_use_scenario_point(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1f, false);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			bVar2 = _0x9c54041bb66bcf9e(iLocal_31, iLocal_42);
			if (!bVar2 && !func_46(iLocal_31, -76381094))
			{
				iLocal_28 = 0;
			}
			bVar0 = _0x9c54041bb66bcf9e(iLocal_30, iLocal_16);
			if (!bVar0 && !_0x0c3cb2e600c8977d(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!bVar2 || !is_ped_active_in_scenario(iLocal_31, 0))
			{
				return;
			}
			if (!_0x68821369a2ceadd5(iLocal_31, iLocal_21))
			{
				clear_ped_secondary_task(iLocal_31);
				_0xd65fdc686a031c83(iLocal_31, iLocal_21, 3f);
				_0x6d07b371e9439019(iLocal_31);
				iLocal_27++;
			}
			if (iLocal_27 > 5)
			{
				func_15();
				iLocal_28 = 0;
			}
			if (_0xc488b8c0e52560d8(iLocal_31))
			{
				func_25(&uLocal_49, 1);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (func_47())
			{
				_0xd65fdc686a031c83(iLocal_31, iLocal_22, 3f);
				_0x6d07b371e9439019(iLocal_31);
				if (iLocal_17 == 1231068245)
				{
					iLocal_21 = 780205091;
				}
				func_25(&uLocal_49, 1);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (has_anim_event_fired(iLocal_31, 595016159) && !bLocal_39)
			{
				func_48();
			}
			if (func_47())
			{
				if (!bLocal_39)
				{
					func_48();
				}
				if (iLocal_17 == 817658057)
				{
					iLocal_28 = 6;
					iLocal_53 = _0x4d0d2e3d8bc000eb(iLocal_31, "p_bottleBeer01x_PH_R_HAND", 0);
					if (does_entity_exist(iLocal_54))
					{
					}
				}
				else
				{
					iLocal_28 = 5;
					iLocal_54 = _0x4d0d2e3d8bc000eb(iLocal_31, "p_shotGlass01x_PH_L_HAND", 0);
					if (does_entity_exist(iLocal_54))
					{
					}
				}
				if (iLocal_17 == 817658057)
				{
					_0xd65fdc686a031c83(iLocal_31, iLocal_23, 3f);
				}
				else
				{
					_0xd65fdc686a031c83(iLocal_31, iLocal_21, 3f);
				}
				_0x6d07b371e9439019(iLocal_31);
				bLocal_38 = true;
				bLocal_40 = true;
				func_25(&uLocal_49, 1);
			}
			break;
		case 5:
			if (func_47())
			{
				_0xd65fdc686a031c83(iLocal_31, iLocal_23, 3f);
				_0x6d07b371e9439019(iLocal_31);
				func_25(&uLocal_49, 1);
				iLocal_28 = 7;
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
		case 6:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	}
}

void func_28()
{
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940018->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = _0x9c54041bb66bcf9e(iLocal_30, iLocal_16);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !func_44(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				return;
			}
			if (!bLocal_36 && _0x0c3cb2e600c8977d(iLocal_30, 0))
			{
				bLocal_36 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_33)
			{
				iLocal_29 = 0;
				iLocal_28 = 0;
				return;
			}
			if (!bVar0 && !_0x0c3cb2e600c8977d(iLocal_30, 0))
			{
				if (iLocal_17 == 817658057)
				{
					if (!_0xea31f199a73801d3(iLocal_16))
					{
						iLocal_29 = 6;
						return;
					}
				}
				else if (!bLocal_33)
				{
					iLocal_29 = 6;
					return;
				}
				bLocal_35 = true;
				if (!Global_1940018->f_51)
				{
					_0xa3a9299c4f2adb98(iLocal_31);
					_task_use_scenario_point(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1f, false);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !func_44(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				iLocal_28 = 0;
				return;
			}
			if (!_0x9c54041bb66bcf9e(iLocal_31, iLocal_42))
			{
				return;
			}
			if (is_ped_active_in_scenario(iLocal_31, 0) && !_0x68821369a2ceadd5(iLocal_31, iLocal_24))
			{
				func_45();
				_0xd65fdc686a031c83(iLocal_31, iLocal_24, 3f);
				_0x6d07b371e9439019(iLocal_31);
			}
			if (_0xc488b8c0e52560d8(iLocal_31))
			{
				func_25(&uLocal_49, 1);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (func_47())
			{
				_0xd65fdc686a031c83(iLocal_31, iLocal_25, 3f);
				_0x6d07b371e9439019(iLocal_31);
				iLocal_28 = 3;
				func_25(&uLocal_49, 1);
			}
			break;
		case 3:
			if (func_47())
			{
				_0xd65fdc686a031c83(iLocal_31, iLocal_26, 3f);
				_0x6d07b371e9439019(iLocal_31);
				iLocal_28 = 7;
				func_25(&uLocal_49, 1);
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_29 = 6;
			}
			break;
	}
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

void func_32(int iParam0)
{
}

bool func_33(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_34(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return false;
	}
	if (!func_23(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_35(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

int func_36(int iParam0)
{
	switch (func_19())
	{
		case 81:
			if (iParam0 == 0)
			{
				return _create_volume_box(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return _create_volume_box(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			}
			break;
		case 98:
			iVar0 = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
			_0x39816f6f94f385ad(iVar0, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			_0x39816f6f94f385ad(iVar0, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 127:
			return _create_volume_box(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
		case 121:
			return _create_volume_box(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 40:
			iVar0 = _create_volume_aggregate_with_custom_name("Blackwater - m_volSaloonInterior");
			_0x39816f6f94f385ad(iVar0, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			_0x39816f6f94f385ad(iVar0, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			_0x39816f6f94f385ad(iVar0, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = _create_volume_aggregate_with_custom_name("volSaloonFancyInterior");
				_0x39816f6f94f385ad(iVar0, 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				_0x39816f6f94f385ad(iVar0, 2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				_0x39816f6f94f385ad(iVar0, 2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return _create_volume_box(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 111:
			return _create_volume_box(1345.534f, -1375.4f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return _create_volume_box(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

bool func_37(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_38(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

bool func_39(int iParam0)
{
	return iParam0 != 0;
}

int func_40(int iParam0)
{
	iVar0 = func_35(iParam0);
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

int func_41(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1893775[iParam0]);
}

bool func_42(var uParam0)
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0)
{
	func_53(uParam0, 0f);
}

bool func_44(int iParam0)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return (*Global_1893775)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_45()
{
	if (Global_1940018->f_51)
	{
		return;
	}
	Global_1940018->f_50 = get_id_of_this_thread();
	iVar0 = func_35(iLocal_41);
	if (_0x800df3fc913355f3(iVar0))
	{
		_0x406808610220405b(func_35(iLocal_41));
	}
}

bool func_46(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_47()
{
	if (((!Global_1940018->f_51 && func_54(&uLocal_49) > 1250) && !_0x916b8e075abc8b4e(iLocal_31, 1)) && (!_0xc488b8c0e52560d8(iLocal_31) || has_anim_event_fired(iLocal_31, 1004907005)))
	{
		return true;
	}
	return false;
}

void func_48()
{
	if (!bLocal_39)
	{
		if (iLocal_17 == 817658057)
		{
			if (!does_entity_exist(iLocal_53))
			{
				iLocal_53 = create_object(1843407141, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
				_0x3bbdd6143ff16f98(iLocal_31, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
				bLocal_39 = true;
			}
		}
		else if (!does_entity_exist(iLocal_53) && !does_entity_exist(iLocal_54))
		{
			iLocal_53 = create_object(-1971689092, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			iLocal_54 = create_object(-911874060, _get_scenario_point_coords(iLocal_42, true), true, true, false, false, true);
			_0x3bbdd6143ff16f98(iLocal_31, iLocal_53, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			_0x3bbdd6143ff16f98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			bLocal_39 = true;
		}
	}
}

bool func_49()
{
	if ((!_0xc488b8c0e52560d8(iLocal_31) || has_anim_event_fired(iLocal_31, 1004907005)) && func_54(&uLocal_49) > 1250)
	{
		return true;
	}
	return false;
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_51()
{
	return Global_1572887->f_13;
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_54(var uParam0)
{
	if (!func_42(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_58(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_59() - round((uParam0->f_1 * 1000f)));
}

float func_55()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_58(var uParam0)
{
	return func_52(*uParam0, 2);
}

int func_59()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

