void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_47 = vScriptParam_0.x;
	Local_47.f_1 = vScriptParam_0.y;
	Local_47.f_4 = vScriptParam_0.z;
	Local_47.f_2 = func_1(Local_47.f_4, Local_47.f_1);
	Local_47.f_7 = Global_40.f_9829[vScriptParam_0.x]->f_3;
	Local_47.f_71 = 0;
	if (func_2())
	{
		_0xed9582b3da8f02b4(1);
	}
	else
	{
		Local_47.f_3 = func_3(Local_47.f_2);
		Local_47.f_71 = 1;
	}
	if (has_force_cleanup_occurred(523))
	{
		func_4();
	}
	func_5(&(Local_47.f_67), 0);
	while (true)
	{
		iVar1 = func_6(&Local_47);
		if (func_7(&Local_47, iVar1))
		{
			func_4();
		}
		if (!Local_47.f_71)
		{
			if (_0x5e420ff293ee5472())
			{
				Local_47.f_3 = func_8(Local_47.f_2, 0, 0, 0, 1, 1);
				Local_47.f_71 = 1;
			}
		}
		if (Local_47.f_71)
		{
			if (func_9(&(Local_47.f_67)) >= 1f)
			{
				if (func_10(Local_47.f_3, Local_47))
				{
					func_11(&Local_47, 2);
				}
				bVar0 = true;
				func_12(&(Local_47.f_67));
			}
			switch (iVar1)
			{
				case 0:
					remove_all_ped_weapons(Local_47.f_3, true, true);
					if (func_13(Local_47, 128))
					{
						if (Local_47.f_7 != 2)
						{
						}
						else
						{
							_set_ped_component_disabled(Local_47.f_3, 98860198, 1);
						}
						func_14(Local_47.f_3, 1, 1);
					}
					if (func_15(Local_47.f_7) > 0)
					{
						set_ped_config_flag(Local_47.f_3, 130, true);
						func_16(Local_47, 4);
						func_17(Local_47, 8);
					}
					func_11(&Local_47, 1);
					break;
				case 1:
					func_18(&Local_47);
					set_ped_reset_flag(Local_47.f_3, 184, true);
					break;
				case 2:
					if (!bVar0)
					{
						func_10(Local_47.f_3, Local_47);
					}
					break;
				default:
					func_4();
					break;
			}
		}
		wait(0);
	}
}

int func_1(int iParam0, int iParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

bool func_2()
{
	if (((Local_47.f_7 == 11 || Local_47.f_7 == 13) || Local_47.f_7 == 12) || Local_47.f_7 == 9)
	{
		return true;
	}
	return false;
}

int func_3(int iParam0)
{
	iVar0 = func_19(iParam0);
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

void func_4()
{
	if (func_2() && Local_47.f_71)
	{
		func_20(Local_47.f_2, 0, 1, 0, 0);
	}
	terminate_this_thread();
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_12(uParam0);
	}
}

int func_6(int iParam0)
{
	return iParam0->f_5;
}

bool func_7(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (iParam0->f_4 != func_22())
		{
			stop_ped_speaking(Global_35, false);
			return true;
		}
	}
	if (iParam0->f_71 && is_ped_injured(iParam0->f_3))
	{
		stop_ped_speaking(Global_35, false);
		return true;
	}
	return false;
}

int func_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_23(iParam0, 1))
	{
		return 0;
	}
	if (func_25(func_24(iParam0)))
	{
		iVar1 = func_19(iParam0);
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
	if ((bParam4 && !func_26(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_27(iParam0, 1);
	func_28(iParam0);
	if (bParam3)
	{
		func_27(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

float func_9(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_29(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_30() - uParam0->f_1);
}

bool func_10(int iParam0, int iParam1)
{
	iVar0 = &Global_1396116->f_98[iParam1];
	if (func_31(iVar0))
	{
		if (!func_32(iParam0, 518218985))
		{
			task_smart_flee_coord(iParam0, func_33(iVar0), 100f, -1, false, 1077936128);
		}
		return true;
	}
	return false;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0->f_5 != iParam1)
	{
		iParam0->f_5 = iParam1;
	}
}

void func_12(var uParam0)
{
	func_34(uParam0, 0f);
}

bool func_13(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return func_35(Global_40.f_9829[iParam0]->f_2, iParam1);
}

void func_14(int iParam0, int iParam1, bool bParam2)
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

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 3;
		case 14:
			return 3;
		case 15:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_36(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_37(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

void func_18(int iParam0)
{
	if (iLocal_14 == 0)
	{
		func_38();
	}
	func_39(iParam0);
	switch (iLocal_14)
	{
		case 1:
			iLocal_15 = get_random_int_in_range(1, 5);
			StringCopy(&cVar0, "PleadList", 16);
			StringIntConCat(&cVar0, iLocal_15, 16);
			iParam0->f_6 = _create_anim_scene("script@proc@bountyhunting@cell_blackwater", 4, &cVar0, false, true);
			load_anim_scene(iParam0->f_6);
			set_anim_scene_entity(iParam0->f_6, "Bounty", iParam0->f_3, 0);
			iLocal_14 = 2;
			break;
		case 2:
			if (func_40(iParam0->f_3, 1))
			{
				set_anim_scene_bool(iParam0->f_6, "bSeatedLoop", true, false);
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (func_13(*iParam0, 4))
			{
				if (!func_13(*iParam0, 8))
				{
					if (func_40(iParam0->f_3, 1))
					{
						func_41(iParam0);
						func_16(*iParam0, 8);
					}
				}
				else if (func_40(iParam0->f_3, 0))
				{
					func_41(iParam0);
				}
				else
				{
					func_42(iParam0);
				}
			}
			else if (!func_13(*iParam0, 1))
			{
				if (func_40(iParam0->f_3, 1))
				{
					if (func_43(iParam0, -1))
					{
						func_16(*iParam0, 1);
						iLocal_14 = 4;
					}
				}
			}
			else if (!func_40(iParam0->f_3, 1))
			{
				func_17(*iParam0, 1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

int func_19(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_44(iParam0))
	{
		return;
	}
	if (!func_45(iParam0, 1))
	{
		return;
	}
	if (!func_45(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_26(iParam0)) && func_46(iParam0))
	{
		return;
	}
	func_47(iParam0, 1);
	func_48(iParam0);
	if (func_25(func_24(iParam0)))
	{
		iVar0 = func_19(iParam0);
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
		func_47(iParam0, 16);
	}
	if (func_45(iParam0, 128) && !bParam3)
	{
		func_49(iParam0, 0);
	}
}

bool func_21(var uParam0)
{
	return func_50(*uParam0, 1);
}

int func_22()
{
	return Global_1894899->f_2;
}

bool func_23(int iParam0, bool bParam1)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	if ((func_45(iParam0, 1) && !func_26(iParam0)) && func_46(iParam0))
	{
		return false;
	}
	if (!func_45(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_51(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_24(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_25(int iParam0)
{
	return iParam0 != 0;
}

bool func_26(int iParam0)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_27(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return;
	}
	if (!func_44(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_28(int iParam0)
{
	if (!func_44(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_29(var uParam0)
{
	return func_50(*uParam0, 2);
}

float func_30()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_31(int iParam0)
{
	func_53(iParam0, 0, 0);
	if (func_54(iParam0))
	{
		return !is_door_closed(iParam0);
	}
	return false;
}

bool func_32(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_33(int iParam0)
{
	if (does_entity_exist(func_55(iParam0, 0)))
	{
		return get_entity_coords(func_55(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_35(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38()
{
	iLocal_46 = _create_volume_aggregate();
	_0x39816f6f94f385ad(iLocal_46, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
	_0x39816f6f94f385ad(iLocal_46, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
	func_58(&uLocal_17);
	iLocal_14 = 1;
}

void func_39(int iParam0)
{
	if (_is_anim_scene_started(iParam0->f_6, false))
	{
		if (!_0x0df57f86fe71dbe5(iParam0->f_6, "SitToCower") && !_0x23e33cb9f4a3f547(iParam0->f_6, "SitToCower"))
		{
			_0xdf7b5144e25cd3fe(iParam0->f_6, "SitToCower");
		}
		if (!_0x0df57f86fe71dbe5(iParam0->f_6, "StandToCower") && !_0x23e33cb9f4a3f547(iParam0->f_6, "StandToCower"))
		{
			_0xdf7b5144e25cd3fe(iParam0->f_6, "StandToCower");
		}
		if (!_0x0df57f86fe71dbe5(iParam0->f_6, "flinch1") && !_0x23e33cb9f4a3f547(iParam0->f_6, "flinch1"))
		{
			_0xdf7b5144e25cd3fe(iParam0->f_6, "flinch1");
		}
		if (!_0x0df57f86fe71dbe5(iParam0->f_6, "flinch2") && !_0x23e33cb9f4a3f547(iParam0->f_6, "flinch2"))
		{
			_0xdf7b5144e25cd3fe(iParam0->f_6, "flinch2");
		}
	}
	if (_0xf256a75210c5c0eb(iLocal_46, Global_36) && is_ped_shooting(Global_35))
	{
		func_59(iParam0);
		iLocal_16 = 1;
	}
	else if (func_60(iParam0->f_3, 0, &uLocal_17, &uLocal_45, 0, 0))
	{
		func_59(iParam0);
		iLocal_16 = 0;
	}
}

bool func_40(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (get_interior_from_entity(iParam0) == Global_1935630->f_5)
		{
			if (iParam1 == 0)
			{
				return true;
			}
			fVar0 = vdist(Global_36, get_entity_coords(iParam0, true, false));
			if (fVar0 < 4f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_41(int iParam0)
{
	switch (iParam0->f_8)
	{
		case 0:
			if (func_61(iParam0))
			{
				if (!func_13(*iParam0, 16))
				{
					iParam0->f_65 = 0;
				}
				else if (!func_13(*iParam0, 32))
				{
					iParam0->f_65 = 1;
				}
				else if (!func_13(*iParam0, 64))
				{
					iParam0->f_65 = 2;
				}
				else
				{
					iParam0->f_8 = 8;
					return;
				}
				if (iParam0->f_65 < func_15(iParam0->f_7))
				{
					_text_database_request(func_62(iParam0->f_7, 1));
					set_ped_config_flag(iParam0->f_3, 448, true);
					stop_ped_speaking(Global_35, true);
					iParam0->f_8 = 1;
				}
				else
				{
					iParam0->f_8 = 8;
				}
			}
			break;
		case 1:
			if (_text_database_has_loaded(func_62(iParam0->f_7, 1)))
			{
				vVar0 = { func_63(iParam0->f_7, iParam0->f_65, 0) };
				func_64(Global_1396116, iParam0->f_3, func_62(iParam0->f_7, 0), 0);
				if (func_65())
				{
					func_64(Global_1396116, Global_35, "JOHN", 0);
				}
				else
				{
					func_64(Global_1396116, Global_35, "ARTHUR", 0);
				}
				if (func_66(iParam0->f_7, iParam0->f_65))
				{
					func_67(iParam0);
					iParam0->f_8 = 2;
				}
				else if (are_strings_equal(func_68(vVar0), ""))
				{
					iParam0->f_8 = 2;
				}
				else if (func_69(Global_1396116, vVar0, 0, -1, 0, 0))
				{
					func_67(iParam0);
					iParam0->f_8 = 2;
				}
			}
			break;
		case 2:
			if (!func_70(1))
			{
				func_71(iParam0->f_30[0], "INTERACT_GREET", " ", -163964935, 0, 0, 0, 1, 0);
				func_71(iParam0->f_30[1], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
				iParam0->f_66 = -1;
				iParam0->f_8 = 3;
			}
			break;
		case 3:
			if (iParam0->f_66 == -1)
			{
				iParam0->f_66 = func_72(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
				if (iParam0->f_66 == 0)
				{
					func_73(iParam0->f_30[0], 0, 0);
					func_73(iParam0->f_30[1], 0, 0);
					func_72(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_67(iParam0);
				}
				else if (iParam0->f_66 == 1)
				{
					func_73(iParam0->f_30[0], 0, 0);
					func_73(iParam0->f_30[1], 0, 0);
					func_72(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_67(iParam0);
				}
			}
			if (iParam0->f_66 == 0)
			{
				if (func_69(Global_1396116, func_63(iParam0->f_7, iParam0->f_65, 1), 0, -1, 0, 0))
				{
					iParam0->f_8 = 4;
				}
			}
			else if (iParam0->f_66 == 1)
			{
				if (func_69(Global_1396116, func_63(iParam0->f_7, iParam0->f_65, 2), 0, -1, 0, 0))
				{
					iParam0->f_8 = 4;
				}
			}
			break;
		case 4:
			if (!func_70(1))
			{
				if (iParam0->f_66 == 0)
				{
					vVar3 = { func_63(iParam0->f_7, iParam0->f_65, 3) };
					if (are_strings_equal(func_68(vVar3), ""))
					{
						if (func_74(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						func_75(&(iParam0->f_3));
						func_76(&(iParam0->f_30), 0, 0, 1, 0);
						iParam0->f_8 = 8;
					}
					else if (func_69(Global_1396116, vVar3, 0, -1, 0, 0))
					{
						iParam0->f_8 = 5;
					}
				}
				else if (iParam0->f_66 == 1)
				{
					vVar6 = { func_63(iParam0->f_7, iParam0->f_65, 5) };
					if (are_strings_equal(func_68(vVar6), ""))
					{
						if (func_74(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						func_75(&(iParam0->f_3));
						func_76(&(iParam0->f_30), 0, 0, 1, 0);
						iParam0->f_8 = 8;
					}
					else if (func_69(Global_1396116, vVar6, 0, -1, 0, 0))
					{
						iParam0->f_8 = 5;
					}
				}
			}
			break;
		case 5:
			if (!func_70(1))
			{
				if (iParam0->f_66 == 0)
				{
					vVar9 = { func_63(iParam0->f_7, iParam0->f_65, 4) };
					if (are_strings_equal(func_68(vVar9), ""))
					{
						if (func_74(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						func_75(&(iParam0->f_3));
						func_76(&(iParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_69(Global_1396116, vVar9, 0, -1, 0, 0))
					{
						iParam0->f_8 = 6;
					}
				}
				else if (iParam0->f_66 == 1)
				{
					vVar12 = { func_63(iParam0->f_7, iParam0->f_65, 6) };
					if (are_strings_equal(func_68(vVar12), ""))
					{
						if (func_74(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						func_75(&(iParam0->f_3));
						func_76(&(iParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_69(Global_1396116, vVar12, 0, -1, 0, 0))
					{
						iParam0->f_8 = 6;
					}
				}
			}
			break;
		case 6:
			if (!func_70(1))
			{
				if (func_74(iParam0))
				{
					iParam0->f_8 = 7;
				}
				else
				{
					iParam0->f_8 = 8;
				}
				func_75(&(iParam0->f_3));
				func_76(&(iParam0->f_30), 0, 0, 1, 0);
			}
			break;
		case 7:
			if (func_77(iParam0))
			{
				vVar15 = { func_63(iParam0->f_7, iParam0->f_65, 7) };
				if (func_69(Global_1396116, vVar15, 0, -1, 0, 0))
				{
					iParam0->f_8 = 8;
				}
			}
			break;
		case 8:
			set_ped_config_flag(iParam0->f_3, 448, false);
			stop_ped_speaking(Global_35, false);
			break;
	}
}

void func_42(int iParam0)
{
	if (iParam0->f_8 == 3)
	{
		func_75(&(iParam0->f_3));
		func_76(&(iParam0->f_30), 0, 0, 1, 0);
		set_ped_config_flag(iParam0->f_3, 448, false);
		stop_ped_speaking(Global_35, false);
	}
}

bool func_43(int iParam0, int iParam1)
{
	if (func_70(1))
	{
		return false;
	}
	switch (iParam0->f_7)
	{
		case 1:
			func_78(iParam0->f_3, "NPE_PRIS_GREET", -1454469014, 0, 1, 0, 0, 1);
			return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_45(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return false;
	}
	if (!func_44(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_46(int iParam0)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_47(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return;
	}
	if (!func_44(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_48(int iParam0)
{
	if (!func_44(iParam0))
	{
		return;
	}
	iVar0 = func_3(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_49(int iParam0, bool bParam1)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	if (!func_45(iParam0, 2))
	{
		return 0;
	}
	if (func_24(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_19(iParam0)))
	{
		return 1;
	}
	if (func_45(iParam0, 1) && !bParam1)
	{
		func_27(iParam0, 128);
		return 1;
	}
	func_47(iParam0, 129);
	func_48(iParam0);
	_0xfc77c5b44d5ff7c0(func_19(iParam0));
	func_79(iParam0, 0);
	return 1;
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_51(int iParam0, bool bParam1)
{
	if (func_52() != -1)
	{
		return false;
	}
	if (!func_44(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_19(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_3(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_19(iParam0));
}

int func_52()
{
	return Global_1572887->f_12;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
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

bool func_54(int iParam0)
{
	if (func_80(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_55(int iParam0, int iParam1)
{
	func_53(iParam0, 0, 0);
	if (func_54(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_58(var uParam0)
{
	func_81(uParam0, 0);
	func_82(uParam0, 0);
	func_83(uParam0, 1);
	func_84(uParam0, 1);
	func_85(uParam0, 0);
	func_86(uParam0, 1);
	func_87(uParam0, 1, 1, 1);
}

void func_59(int iParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (_0x23e33cb9f4a3f547(iParam0->f_6, "SitToCower") && !_0x1f0e401031e20146(iParam0->f_6, "SitToCower"))
			{
				_set_anim_scene_playback_list_bool(iParam0->f_6, "SitToCower", true);
				iLocal_14 = 5;
			}
			break;
		case 2:
		case 3:
		case 4:
			if (_0x23e33cb9f4a3f547(iParam0->f_6, "StandToCower") && !_0x1f0e401031e20146(iParam0->f_6, "StandToCower"))
			{
				_set_anim_scene_playback_list_bool(iParam0->f_6, "StandToCower", true);
				iLocal_14 = 5;
			}
			break;
		case 5:
			if (iLocal_16 && _0x8d81e7824b7753f7(iParam0->f_6, "Cower", 1))
			{
				if (func_88() == 1)
				{
					if (!_0x1f0e401031e20146(iParam0->f_6, "flinch1"))
					{
						_set_anim_scene_playback_list_bool(iParam0->f_6, "flinch1", true);
						iLocal_16 = 0;
						iLocal_14 = 5;
					}
				}
				else if (!_0x1f0e401031e20146(iParam0->f_6, "flinch2"))
				{
					_set_anim_scene_playback_list_bool(iParam0->f_6, "flinch2", true);
					iLocal_16 = 0;
					iLocal_14 = 5;
				}
			}
			break;
	}
}

bool func_60(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_89(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_90(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_91(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_92(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_93(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_94(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_95(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_91(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_96(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_97(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_98(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_99(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_99(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_91(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_100(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_101(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_102(uParam2, 4000))
				{
					if ((func_103(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_104(uParam2, iParam0)) && func_105(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_103(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_104(uParam2, iParam0)) && func_105(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_106(iParam0, Global_1935630->f_41))
							{
								func_107();
								*uParam3 = 2;
								func_91(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_106(iParam0, Global_1935630->f_41))
						{
							func_107();
							*uParam3 = 2;
							func_91(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_108(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_109() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_107();
						*uParam3 = 2;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_110())
					{
						if (func_106(iParam0, Global_1935630->f_42))
						{
							func_107();
							*uParam3 = 2;
							func_91(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_111(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_91(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_112(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_113(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_114(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_115(uParam2, 4000))
				{
					if (func_116(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_91(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_117(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_91(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_118(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_91(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_61(int iParam0)
{
	if (does_entity_exist(iParam0->f_3))
	{
		iVar0 = get_entity_model(iParam0->f_3);
		iVar1 = func_119(iVar0);
		if (iVar1 == 1)
		{
			return true;
		}
		else if (iVar1 != iParam0->f_7)
		{
			iParam0->f_7 = iVar1;
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
	return false;
}

char* func_62(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "BOU1_BOUNTY";
				case 1:
					return "BOU1AUD";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET5";
				case 1:
					return "BT05AUD";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "RBDU_TARGET";
				case 1:
					return "BDULAUD";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "CAVANAUGH";
				case 1:
					return "BT03AUD";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "RBRA_TARGET";
				case 1:
					return "BRANAUD";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET12";
				case 1:
					return "BT12AUD";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET14";
				case 1:
					return "BT14AUD";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "RBCO_TARGET";
				case 1:
					return "BCONAUD";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET15";
				case 1:
					return "BT15AUD";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET20";
				case 1:
					return "BT20AUD";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET18";
				case 1:
					return "BT18AUD";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET21";
				case 1:
					return "BT21AUD";
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET22";
				case 1:
					return "BT22AUD";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET23";
				case 1:
					return "BT23AUD";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_63(int iParam0, int iParam1, int iParam2)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS1CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS1POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS1NEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS2CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS2POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS2NEG";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "BOU1_PERS3POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS3NEG";
						break;
				}
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL1";
						break;
					case 1:
						sVar0 = func_120("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL2";
						break;
					case 1:
						sVar0 = func_120("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL3";
						break;
					case 1:
						sVar0 = func_120("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
						break;
				}
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_120("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_120("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_120("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL1";
						break;
					case 1:
						sVar0 = "RBT03_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL2";
						break;
					case 1:
						sVar0 = "RBT03_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL3";
						break;
					case 1:
						sVar0 = "RBT03_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL3NEGR";
						break;
				}
			}
			break;
		case 6:
			if (func_121(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = func_120("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
						case 2:
							sVar0 = func_120("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL1PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL1NR_FK";
							break;
					}
				}
				else if (iParam1 == 1)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = func_120("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
						case 2:
							sVar0 = func_120("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL2PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL2NR_FK";
							break;
					}
				}
			}
			else if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = func_120("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
					case 2:
						sVar0 = func_120("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL1PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL1NR_FA";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = func_120("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
					case 2:
						sVar0 = func_120("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL2PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL2NR_FA";
						break;
				}
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL1";
						break;
					case 1:
						sVar0 = func_120("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL2";
						break;
					case 1:
						sVar0 = func_120("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL3";
						break;
					case 1:
						sVar0 = func_120("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL3NREP";
						break;
				}
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_120("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_120("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_120("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
						break;
				}
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_120("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_120("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_120("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
						break;
				}
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL1";
						break;
					case 1:
						sVar0 = "RBT15_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL2";
						break;
					case 1:
						sVar0 = "RBT15_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL3";
						break;
					case 1:
						sVar0 = "RBT15_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL3NEGR";
						break;
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL1POS";
						break;
					case 2:
						sVar0 = "RBT20CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL1PNEG";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL2POS";
						break;
					case 2:
						sVar0 = "RBT20CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL2NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL3POS";
						break;
					case 2:
						sVar0 = "RBT20CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL3NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL1";
						break;
					case 1:
						sVar0 = "RBT18_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL2";
						break;
					case 1:
						sVar0 = "RBT18_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL3";
						break;
					case 1:
						sVar0 = "RBT18_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL3NEGR";
						break;
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL1";
						break;
					case 1:
						sVar0 = "RBT21_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL1POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL1BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL1NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL1BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL2";
						break;
					case 1:
						sVar0 = "RBT21_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL2POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL2BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL2NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL2BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL3";
						break;
					case 1:
						sVar0 = "RBT21_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL3POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL3BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL3NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL3BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL1";
						break;
					case 1:
						sVar0 = "RBT22_CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL2";
						break;
					case 1:
						sVar0 = "RBT22_CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "RBT22_CELL3POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL3NEGJ";
						break;
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL13POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL3NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL3NEGR";
						break;
					case 4:
						sVar0 = "RBT23CELL3POS2J";
						break;
				}
			}
			break;
	}
	StringCopy(&cVar1, sVar0, 24);
	return cVar1;
}

void func_64(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_122(uParam0, iParam1, sParam2))
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

bool func_65()
{
	if (func_52() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 9:
			return true;
	}
	return false;
}

void func_67(int iParam0)
{
	if (iParam0->f_65 == 0)
	{
		func_16(*iParam0, 16);
	}
	else if (iParam0->f_65 == 1)
	{
		func_16(*iParam0, 32);
	}
	else if (iParam0->f_65 == 2)
	{
		func_16(*iParam0, 64);
	}
}

var func_68(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_69(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_123(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_70(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

void func_71(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_124(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_125(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_126(iParam0->f_6, iParam0->f_5, 0);
			}
			func_127(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_128(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

int func_72(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_129(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_130(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_12(&(iParam1->f_13));
		}
		if (func_131(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_132(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_72(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_75(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_133(*uParam0, 1, 1);
						}
					}
					else if (func_134(iParam1, 22))
					{
						func_133(*uParam0, 0, 1);
					}
				}
				if (func_135(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_136(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_137(iParam8);
					if (func_138(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_139(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_140(iParam1, uParam3, fVar8);
					if (func_141(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_76(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_142(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_135(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_143(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_138(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_136(uParam0, func_135(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_137(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_76(uParam3, 0, 0, 1, 1);
					}
					func_144(iParam1, 1);
				}
				func_140(iParam1, uParam3, fVar8);
				if (func_142(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_145(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_73(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_146(iParam0, 13))
	{
		func_147(iParam0, 0);
	}
	else
	{
		func_148(iParam0, 0);
	}
	if (func_124(iParam0->f_6))
	{
		if (bParam2)
		{
			func_149(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_74(int iParam0)
{
	if ((iParam0->f_7 == 4 || iParam0->f_7 == 13) || iParam0->f_7 == 11)
	{
		return true;
	}
	return false;
}

void func_75(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_76(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_124((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_149(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_77(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_70))
	{
		func_150(iParam0->f_4, &(iParam0->f_70));
	}
	else if (!func_151(Global_35, iParam0->f_70, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_152(iParam0, &Var0);
}

void func_79(int iParam0, int iParam1)
{
	if (!func_44(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_80(int iParam0)
{
	return iParam0 != 0;
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 16384);
	}
	else
	{
		func_36(&(uParam0->f_1), 16384);
	}
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 2048);
	}
	else
	{
		func_36(&(uParam0->f_1), 2048);
	}
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 256);
	}
	else
	{
		func_36(&(uParam0->f_1), 256);
	}
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 16);
	}
	else
	{
		func_37(uParam0, 67108864);
		func_37(uParam0, 16);
	}
}

void func_85(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 128);
	}
	else
	{
		func_36(&(uParam0->f_1), 128);
	}
}

void func_86(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 256);
	}
	else
	{
		func_37(uParam0, 256);
	}
}

void func_87(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_36(uParam0, 268435456);
	}
	else
	{
		func_37(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_36(uParam0, 1073741824);
	}
	else
	{
		func_37(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_36(uParam0, 536870912);
	}
	else
	{
		func_37(uParam0, 536870912);
	}
}

int func_88()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, bool bParam1, int iParam2)
{
	func_153(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_154(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_36(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_155(1))
						{
							func_36(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_155(1) || *uParam0 & 8192 != 0))
				{
					func_37(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_156(uParam0))
			{
				uParam0->f_15 = func_109();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_109() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_157(uParam0);
}

bool func_90(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_158(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_159(iParam0, iVar2) <= func_160(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_91(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_161(iParam2, 1, 1, 1, 0))
	{
		func_36(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_162(uParam1, 1);
	func_163();
}

bool func_92(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_164(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_165(uParam1);
			if (func_166(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_167(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_162(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_162(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_93(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_168(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_165(uParam2);
		if (func_166(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_167(uParam2)
				{
					func_162(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_94(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_158(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_167(uParam1)
		{
			fVar3 = func_165(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_169(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_96(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_97(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_170(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_105(uParam2, iParam1))
			{
				func_162(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_98(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_171(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_105(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_162(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_99(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_172(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_162(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_162(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_173(iParam1, vVar0, vVar4))
					{
						func_162(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_162(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_173(iParam1, vVar0, vVar7))
					{
						func_162(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_100(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_158(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_174(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_175(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_176(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_177(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_178(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_101(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_102(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_179(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_180(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_104(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_105(var uParam0, int iParam1)
{
	if (func_181(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_106(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_182(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_107()
{
}

bool func_108(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_183(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_109();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_184(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_109();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_109()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_110()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_109() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_111(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_160(uParam0);
	if (uParam0->f_12 > func_185(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_186(iParam1);
	iVar1 = func_187(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_112(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_188(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_113(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_189(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_190(uParam1, iParam0))
					{
						if (func_184(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_114(int iParam0, var uParam1)
{
	if (!func_191(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_115(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_116(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_117(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_109();
	}
	else if (func_109() - uParam1->f_4) > func_192(uParam1)
	{
		return func_193(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_118(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 722156226:
			return 2;
		case 1361127922:
			return 3;
		case 1726657594:
			return 4;
		case -1694480560:
			return 6;
		case -2044758506:
			return 8;
		case 466209020:
			return 9;
		case -891510636:
			return 10;
		case -1910990966:
			return 11;
		case 1921874948:
			return 12;
		case -1011228908:
			return 14;
		case -1008616424:
			return 15;
		case -872333558:
			return 5;
		case 1697515844:
			return 7;
		case -1397059493:
			return 13;
		default:
			break;
	}
	return 1;
}

char* func_120(char* sParam0, char* sParam1)
{
	if (func_65())
	{
		return sParam0;
	}
	return sParam1;
}

bool func_121(int iParam0, int iParam1)
{
	iVar0 = func_194((*Global_1347702)[iParam0]->f_15);
	if (func_195(iVar0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_122(var uParam0, int iParam1, char* sParam2)
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

void func_123(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_124(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_125(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_126(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_127(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (bParam1)
	{
		func_197(iParam0, 4);
		func_198(iVar0, 1);
		func_199(iVar0, 1);
	}
	else
	{
		func_200(iParam0, 4);
		func_199(iVar0, 0);
	}
}

void func_128(int* iParam0, char* sParam1)
{
	if (func_124(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_126(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_148(iParam0, 1);
}

void func_129(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_130(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_131(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_201(iParam0, iParam1))
		{
			if (!func_35(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_76(uParam2, 0, 0, 1, 0);
				func_36(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_35(iParam1->f_10, 1))
		{
			func_202(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_37(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_132(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_35(iParam4, 32);
		func_203(iParam1, uParam2, 0);
		iVar5 = func_204(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_76(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_35(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_35(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_35(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_35(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_35(iParam4, 8388608) || func_35(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_35(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_35(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_134(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_134(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_35(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_205(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_35(iParam4, 268435456))
			{
				iVar8 = func_206(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_207(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_134(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_35(iParam4, 2) || func_35(iParam4, 16))
			{
				func_133(*uParam0, 1, 1);
			}
			else
			{
				func_133(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_133(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_134(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_135(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_208(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_136(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_209(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_35(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_137(int iParam0)
{
	if (func_35(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_35(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_35(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_138(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_210(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_211(Global_35)) || func_212(Global_35)) || func_213(Global_35));
	fVar12 = -1f;
	if (func_21(&(iParam1->f_13)))
	{
		fVar12 = func_9(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_124((*uParam4)[iVar0]->f_6);
		func_214(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_215(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_216(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_76(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_217(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_203(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_218(iParam1, fParam6, iParam1->f_9))
					{
						func_12(&(iParam1->f_18));
						if (bVar6)
						{
							func_217(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_219(iParam1, fParam2);
	}
	return bVar5;
}

void func_139(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_140(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_220((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_219(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_141(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_221(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_222(iParam1, 0);
				func_203(iParam1, uParam2, func_134(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_142(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_12(&(iParam1->f_18));
			return 0;
		}
		else if (func_21(&(iParam1->f_18)))
		{
			func_223(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_21(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return 0;
		}
	}
	return func_224(&(iParam1->f_18), fParam2);
	return 1;
}

void func_143(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_214(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_144(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_145(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_203(iParam0, uParam1, 1);
	func_76(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_146(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_147(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_148(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_149(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_124(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_196(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_225(iVar0);
	*uParam0 = 0;
}

void func_150(int iParam0, var uParam1)
{
	if (_does_volume_exist(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = _create_volume_box_with_custom_name(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = _create_volume_box_with_custom_name(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = _create_volume_box_with_custom_name(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = _create_volume_box_with_custom_name(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = _create_volume_box_with_custom_name(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = _create_volume_box_with_custom_name(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
		case 78:
			*uParam1 = _create_volume_box_with_custom_name(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

bool func_151(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

bool func_152(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_153(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_226();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_227(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_154(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_155(bool bParam0)
{
	if (func_228(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_156(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_52() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_229(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_229(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_187(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_157(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_230(uParam0);
	}
}

bool func_158(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_187(iParam2);
	}
	else
	{
		iVar1 = func_186(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_187(iParam0);
	}
	else
	{
		iVar0 = func_186(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_35(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_159(int iParam0, int iParam1)
{
	return func_182(iParam0, iParam1, 1, 1);
}

float func_160(var uParam0)
{
	return uParam0->f_26;
}

bool func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_162(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 134217728);
	}
	else
	{
		func_37(uParam0, 134217728);
	}
}

void func_163()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_182(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_231(iVar0, 0)))
		{
			if (func_232(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_165(var uParam0)
{
	return uParam0->f_17;
}

bool func_166(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_35(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_167(var uParam0)
{
	return uParam0->f_18;
}

bool func_168(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_231(iVar0, 0)))
		{
			if (func_233(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_170(var uParam0)
{
	return uParam0->f_23;
}

int func_171(var uParam0)
{
	return uParam0->f_21;
}

int func_172(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_173(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_234(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_174(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_235(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_176(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_236(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_177(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_236(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_178(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_236(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_179(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_237(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_181(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_182(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_183(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_184(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_184(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_185(var uParam0)
{
	return uParam0->f_24;
}

int func_186(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_187(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_188(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_179(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_182(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_182(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_189(int iParam0, var uParam1, bool bParam2)
{
	func_228(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_190(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_190(uParam1, iVar1))
				{
					if (func_184(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_190(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_191(int iParam0)
{
	if (func_65())
	{
		return 0;
	}
	return func_238((*Global_1347702)[58]->f_15, 1);
}

int func_192(var uParam0)
{
	return uParam0->f_20;
}

int func_193(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (!func_239(iParam0))
	{
		return -1;
	}
	return func_240(iParam0);
}

bool func_195(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_198(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_241(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_199(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_201(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_242((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_202(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_220((*uParam0)[iVar0]))
		{
			func_147((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_203(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_149(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_243(iParam0, 0);
		}
	}
}

int func_204(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_244(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_124((*uParam2)[iVar0]->f_6))
		{
			func_147((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_205(var uParam0)
{
	iVar0 = func_245(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_206(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_207(int* iParam0, int* iParam1)
{
	if (!func_134(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_147(iParam1, 19);
			func_222(iParam0, 23);
			func_246(iParam1, 2);
		}
	}
}

bool func_208(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_247(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_248(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_209(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_244(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_210(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_211(int iParam0)
{
	return (func_249(iParam0, 4) || func_249(iParam0, 5));
}

int func_212(int iParam0)
{
	return func_249(iParam0, 7);
}

int func_213(int iParam0)
{
	return func_249(iParam0, 6);
}

void func_214(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_220(iParam1))
		{
			clear_bit(iParam1, 14);
			func_244(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_215(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_250(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_251(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_127(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_127(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_252(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_216(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_253(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_254(iParam1, 1))
	{
		func_255(iParam1, 1);
		return true;
	}
	return false;
}

void func_217(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_218(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_219(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_220(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_221(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_222(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_223(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_224(var uParam0, float fParam1)
{
	if (func_256(uParam0, fParam1))
	{
		func_223(uParam0);
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	if (!func_257(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_226()
{
	if (func_258())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_227(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_228(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_229(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_230(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_37(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_36(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_231(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_232(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_233(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_233(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_234(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_235(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_236(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_237(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_238(int iParam0, bool bParam1)
{
	switch (func_259(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_239(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_240(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_241(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_242(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_243(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_223(&(iParam0->f_18));
}

void func_244(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_124(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_149(&(iParam1->f_6), 0, 1);
	}
	if (!func_124(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_220(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_260(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_124(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_252(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_261(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_262(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_125(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_261(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_127(iParam1->f_6, 0, 1);
				}
				else
				{
					func_127(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_245(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_246(int* iParam0, int iParam1)
{
	if (!func_146(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_147(iParam0, 14);
		}
	}
}

bool func_247(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_248(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_249(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_250(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_251(int iParam0, bool bParam1)
{
	if (bParam1 && !func_124(iParam0))
	{
		return false;
	}
	return !func_241(iParam0, 4);
}

void func_252(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_124(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	func_261(iParam0, 18, 0, 1);
	func_261(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_253(int iParam0, bool bParam1)
{
	if (bParam1 && !func_124(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_254(int iParam0, bool bParam1)
{
	if (bParam1 && !func_124(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_255(int iParam0, bool bParam1)
{
	if (bParam1 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_256(var uParam0, float fParam1)
{
	if (!func_21(uParam0))
	{
		return false;
	}
	if (func_9(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0)
{
	return func_241(iParam0, 2);
}

bool func_258()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_259(int iParam0)
{
	if (!func_239(iParam0))
	{
		return -1;
	}
	return func_263(iParam0);
}

int func_260(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_241(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_264(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_261(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_262(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_263(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_265(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_264(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_198(iParam0, 1);
	func_199(iParam0, 1);
	func_200(iParam0, 128);
}

int func_265(int iParam0)
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

