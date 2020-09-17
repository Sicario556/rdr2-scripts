void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&ScriptParam_0);
	}
	while (func_2())
	{
		wait(0);
		switch (ScriptParam_0.f_2)
		{
			case 0:
				if (func_3(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 1);
				}
				break;
			case 1:
				func_5(&ScriptParam_0);
				func_4(&ScriptParam_0, 2);
				break;
			case 2:
				if (func_6(&ScriptParam_0) && !func_7())
				{
					func_4(&ScriptParam_0, 3);
				}
				break;
			case 3:
				if (func_8(&ScriptParam_0, 0, 1, 1, 0))
				{
					if (func_9(&ScriptParam_0))
					{
						if (func_10(&ScriptParam_0))
						{
							func_4(&ScriptParam_0, 5);
						}
					}
				}
				break;
			case 5:
				func_11(&ScriptParam_0);
				func_4(&ScriptParam_0, 6);
				break;
			case 6:
				if (func_10(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 4);
				}
				break;
			case 4:
				if (func_12(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 7);
				}
				break;
			case 7:
				if (is_screen_faded_in())
				{
					func_4(&ScriptParam_0, 8);
				}
				break;
			case 8:
				if (is_entity_dead(Global_35))
				{
					func_1(&ScriptParam_0);
					return;
				}
				if (ScriptParam_0.f_48)
				{
					if (!_does_scenario_point_exist(ScriptParam_0.f_56.f_1))
					{
						func_13(&ScriptParam_0);
						func_14(&ScriptParam_0);
						func_4(&ScriptParam_0, 9);
					}
				}
				else if (_does_volume_exist(func_16(func_15())))
				{
					if (!is_entity_in_volume(Global_35, func_16(func_15()), true, 0) || func_17(&ScriptParam_0))
					{
						func_13(&ScriptParam_0);
						func_14(&ScriptParam_0);
						func_4(&ScriptParam_0, 9);
					}
				}
				if (func_18(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 9);
				}
				break;
			case 9:
				func_1(&ScriptParam_0);
				break;
			default:
				break;
		}
	}
	func_1(&ScriptParam_0);
}

void func_1(var uParam0)
{
	func_19(uParam0);
	terminate_this_thread();
}

bool func_2()
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	func_20(uParam0);
	func_21(uParam0);
	func_22(uParam0);
	if (func_23(uParam0))
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_5(var uParam0)
{
	if (uParam0->f_4 > 0)
	{
		_0xf008e0ba1fe1d644(uParam0->f_4);
	}
	func_24(uParam0);
	func_25(uParam0);
	func_26(uParam0, 0);
	func_27(uParam0);
}

bool func_6(var uParam0)
{
	if ((!func_28(uParam0) || !func_29(uParam0)) || !func_30(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 > 0)
	{
		if (!_0x5c16855277819bbf() == uParam0->f_4)
		{
			return false;
		}
	}
	return true;
}

bool func_7()
{
	return func_31(&Global_1935630, 4096);
}

bool func_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		while (uParam0->f_20 < 6)
		{
			func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
		}
		func_35(&(uParam0->f_21), 2);
		return true;
	}
	else
	{
		switch (uParam0->f_21)
		{
			case 0:
				func_35(&(uParam0->f_21), 1);
				break;
			case 1:
				if (uParam0->f_20 < 6)
				{
					func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
				}
				else
				{
					func_35(&(uParam0->f_21), 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

bool func_9(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_38(uParam0, func_36(uParam0, iVar0), func_37(uParam0, iVar0), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_10(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			if (!is_entity_dead(&(uParam0->f_13[iVar0])))
			{
				if (!_0xa0bc8faed8cfeb3c(&(uParam0->f_13[iVar0])))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_39(uParam0, iVar0) == 41788943)
		{
			if (!is_entity_dead(&(uParam0->f_13[iVar0])))
			{
				func_40(&(uParam0->f_13[iVar0]), func_39(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

bool func_12(var uParam0)
{
	if (func_41(uParam0))
	{
		func_42(uParam0, 2, 0);
		if (!func_43(uParam0->f_3, 8))
		{
			func_42(uParam0, 1, 0);
			set_ped_config_flag(&(uParam0->f_13[1]), 306, true);
			set_ped_config_flag(&(uParam0->f_13[1]), 305, true);
		}
		if (!func_43(uParam0->f_3, 4))
		{
			if (!is_entity_dead(&(uParam0->f_13[0])))
			{
				stop_ped_speaking(&(uParam0->f_13[0]), true);
				set_ped_config_flag(&(uParam0->f_13[0]), 297, true);
				func_44(&(uParam0->f_13[0]), 1);
				_0x18ff3110cf47115d(&(uParam0->f_13[0]), 2, 0);
				_0x18ff3110cf47115d(&(uParam0->f_13[0]), 3, 0);
				_0x18ff3110cf47115d(&(uParam0->f_13[0]), 7, 0);
				_0x18ff3110cf47115d(&(uParam0->f_13[0]), 9, 0);
				_0x6569f31a01b4c097(&(uParam0->f_13[0]), 0, 0);
				_0x6569f31a01b4c097(&(uParam0->f_13[0]), 1, 0);
				_0x6569f31a01b4c097(&(uParam0->f_13[0]), 6, 0);
				set_ped_config_flag(&(uParam0->f_13[0]), 26, true);
				_0xae6004120c18df97(&(uParam0->f_13[0]), 1, 0);
				set_ped_config_flag(&(uParam0->f_13[0]), 277, true);
				remove_all_ped_weapons(&(uParam0->f_13[0]), true, true);
				if (!_0x0e6846476906c9dd(get_player_index(), &(uParam0->f_13[0])))
				{
					_0x543dfe14be720027(get_player_index(), &(uParam0->f_13[0]), 0);
					_0x6ecfc621a168424c(&(uParam0->f_13[0]), &(uParam0->f_13[0]), 0, 0);
				}
			}
		}
		else
		{
			func_42(uParam0, 0, 0);
			func_45(&(uParam0->f_13[0]), 0, 0);
		}
		func_46(uParam0, uParam0->f_36[0], 0);
		if (!func_43(uParam0->f_3, 8))
		{
			func_46(uParam0, uParam0->f_36[1], 1);
		}
		if (!func_43(uParam0->f_3, 4))
		{
			func_46(uParam0, uParam0->f_36[2], 2);
			func_47(uParam0->f_36[2], "pb_callovers");
		}
		if (!func_43(uParam0->f_3, 8))
		{
			uLocal_181 = _0xfa50f79257745e74(func_32(uParam0, 0), 1.5f, 1, -1, 0);
		}
		if (!func_43(uParam0->f_3, 8))
		{
			func_48(&Local_73);
			func_49(1648013752);
		}
		else
		{
			func_50(1648013752);
		}
	}
	return true;
}

void func_13(var uParam0)
{
	if (func_43(uParam0->f_3, 2048) && !func_43(uParam0->f_3, 64))
	{
		func_51(&(uParam0->f_3), 64);
	}
	else if (func_43(uParam0->f_3, 1024) && !func_43(uParam0->f_3, 32))
	{
		func_51(&(uParam0->f_3), 32);
	}
	else if (func_43(uParam0->f_3, 512) && !func_43(uParam0->f_3, 16))
	{
		func_51(&(uParam0->f_3), 16);
	}
	else if (func_43(uParam0->f_3, 256) && !func_43(uParam0->f_3, 8))
	{
		func_51(&(uParam0->f_3), 8);
	}
	else if (func_43(uParam0->f_3, 128) && !func_43(uParam0->f_3, 4))
	{
		func_51(&(uParam0->f_3), 4);
	}
	func_52(&(uParam0->f_5), &(uParam0->f_3));
}

void func_14(var uParam0)
{
}

int func_15()
{
	return 0;
}

int func_16(int iParam0)
{
	if (!func_53(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

bool func_17(var uParam0)
{
	return false;
}

bool func_18(var uParam0)
{
	if (Local_73 > 0 && Local_73 < 22)
	{
		func_54(uParam0);
		if (!func_43(uParam0->f_3, 4))
		{
			if (is_entity_dead(&(uParam0->f_13[0])))
			{
			}
			if (!func_43(uParam0->f_3, 8192))
			{
				if ((_does_volume_exist(uParam0->f_46) && is_entity_in_volume(Global_35, uParam0->f_46, true, 0)) || func_55(Global_35, func_32(uParam0, 0), 6f, 1, 1))
				{
					func_56(uParam0);
				}
			}
			if (!func_43(Local_73.f_62, 8192) && func_57(Global_35, 1))
			{
				func_51(&(Local_73.f_62), 8192);
			}
		}
		else if (Local_73 < 21)
		{
			func_58(&Local_73, 21, 1);
		}
	}
	func_59(&Local_73, func_32(uParam0, 0));
	if (!func_43(uParam0->f_3, 4) && Local_73 > 0)
	{
		func_60(&Local_73, &(uParam0->f_13[0]), func_32(uParam0, 0), &uLocal_187);
		if (Local_73 < 18 && !func_61(&(uParam0->f_13[0]), 75))
		{
			if (does_entity_exist(&(uParam0->f_29[0])))
			{
				delete_object(uParam0->f_29[0]);
			}
			if (!func_43(Local_73.f_62, 32768))
			{
				func_51(&(Local_73.f_62), 32768);
			}
			func_58(&Local_73, 22, 1);
		}
		else
		{
			if (Local_73.f_64 == 0)
			{
				if (!func_43(Local_73.f_62, 1024) && (has_bullet_impacted_in_area(2119.138f, -1835.656f, 40.55209f, 0.5f, true, false) || _0x7a76104cc2cc69e8(&(uParam0->f_29[0]), 1, 0)))
				{
					func_51(&(Local_73.f_62), 4096);
					delete_object(uParam0->f_29[0]);
					func_62(1, 0, 0);
					func_51(&(Local_73.f_62), 1024);
					func_63(-1282804314);
					func_58(&Local_73, 18, 1);
				}
			}
			if (Local_73 != 22 && !func_61(&(uParam0->f_13[0]), 75))
			{
				func_62(1, 0, 0);
				func_58(&Local_73, 22, 1);
			}
		}
	}
	if (func_43(Local_73.f_62, 2))
	{
		func_64(&(Local_73.f_62), 2);
	}
	switch (Local_73)
	{
		case 0:
			func_65(&uLocal_187, &(uParam0->f_13[0]), "OTR1_CONVICT", 0);
			if (func_66())
			{
				func_65(&uLocal_187, Global_35, "JOHN", 0);
			}
			else
			{
				func_65(&uLocal_187, Global_35, "ARTHUR", 0);
			}
			func_51(&(Local_73.f_62), 1);
			func_58(&Local_73, 1, 1);
			Local_285.f_27 = &uParam0->f_13[0];
			Local_285 = iLocal_184;
			break;
		case 1:
			if (func_67(&Local_73, uParam0->f_36[2], 0, &uLocal_187, &Local_285, 0, 0, 0))
			{
				func_68(&Local_73);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 2:
			if (func_67(&Local_73, uParam0->f_36[2], 9, &uLocal_187, &Local_285, 0, 0, 0))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 3:
			if (func_67(&Local_73, uParam0->f_36[2], 10, &uLocal_187, &Local_285, 0, 0, 0))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 4:
			if (func_67(&Local_73, uParam0->f_36[2], 11, &uLocal_187, &Local_285, 0, 0, 0))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 5:
			if (!func_43(Local_73.f_62, 16))
			{
				func_51(&(Local_73.f_62), 16);
			}
			Local_285.f_1 = 1;
			if (func_67(&Local_73, uParam0->f_36[2], 2, &uLocal_187, &Local_285, 0, "SKOTR1_CALLOVER", 1))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 6:
			if (!func_43(Local_73.f_62, 32))
			{
				func_51(&(Local_73.f_62), 32);
			}
			Local_285.f_1 = 1;
			if (func_67(&Local_73, uParam0->f_36[2], 1, &uLocal_187, &Local_285, 0, "SKOTR1_CALLOVER", 1))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				func_70(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 7:
			func_62(1, 0, 0);
			set_anim_scene_bool(&(uParam0->f_36[2]), "COWER_BOOL", false, false);
			func_58(&Local_73, 8, 1);
			break;
		case 8:
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				set_anim_scene_bool(&(uParam0->f_36[2]), "COWER_BOOL", false, false);
				if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "COWER_LOOP", 1))
				{
					func_58(&Local_73, 9, 1);
				}
			}
			else
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "COWER_BOOL", true, false);
			}
			if (func_67(&Local_73, uParam0->f_36[2], 5, &uLocal_187, &Local_285, 0, 0, 0))
			{
				if (Local_73.f_64 == 0)
				{
					func_74(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
				}
				else
				{
					func_58(&Local_73, 1, 1);
				}
			}
			break;
		case 9:
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				set_anim_scene_bool(&(uParam0->f_36[2]), "COWER_BOOL", false, false);
			}
			else
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "COWER_BOOL", true, false);
			}
			if (func_67(&Local_73, uParam0->f_36[2], 8, &uLocal_187, &Local_285, 0, 0, 0))
			{
				if (Local_73.f_64 == 0)
				{
					func_74(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
				}
				else
				{
					func_58(&Local_73, 1, 1);
				}
			}
			break;
		case 10:
			if (!func_43(Local_73.f_62, 256))
			{
				func_51(&(Local_73.f_62), 256);
			}
			Local_285.f_1 = 1;
			if (func_67(&Local_73, uParam0->f_36[2], 3, &uLocal_187, &Local_285, 0, "OTR1_LEA_PLAYER", 1))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				if (Local_73.f_64 == 0)
				{
					func_74(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
				}
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 11:
			if (!func_43(Local_73.f_62, 256))
			{
				func_51(&(Local_73.f_62), 256);
			}
			Local_285.f_1 = 1;
			if (func_67(&Local_73, uParam0->f_36[2], 4, &uLocal_187, &Local_285, 0, "OTR1_LEA_PLAYER", 1))
			{
				func_58(&Local_73, 1, 1);
			}
			func_69(&Local_73, uParam0->f_36[2], func_32(uParam0, 0));
			if (_0x8d81e7824b7753f7(&(uParam0->f_36[2]), "base", 1))
			{
				if (Local_73.f_64 == 0)
				{
					func_74(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
				}
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			if (func_73(&Local_73))
			{
				set_anim_scene_bool(&(uParam0->f_36[2]), "BASE_BOOL", false, false);
				func_58(&Local_73, 12, 1);
			}
			break;
		case 12:
			if (!is_scripted_speech_playing(Global_35))
			{
				func_75(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			break;
		case 13:
			if (!func_43(Local_73.f_62, 16384))
			{
				func_51(&(Local_73.f_62), 16384);
				set_entity_can_be_damaged(&(uParam0->f_29[0]), true);
				set_object_targettable(&(uParam0->f_29[0]), true);
				set_entity_is_target_priority(&(uParam0->f_29[0]), true, 0f);
			}
			if (!func_43(Local_73.f_62, 64))
			{
				func_51(&(Local_73.f_62), 64);
			}
			Local_285.f_1 = 0;
			if (func_67(&Local_73, uParam0->f_36[2], 6, &uLocal_187, &Local_285, 0, "SKOTR_HAPPENED", 1))
			{
				func_58(&Local_73, 15, 1);
			}
			if (Local_73.f_64 != 0)
			{
				func_76(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			break;
		case 14:
			if (!func_43(Local_73.f_62, 16384))
			{
				func_51(&(Local_73.f_62), 16384);
				set_entity_can_be_damaged(&(uParam0->f_29[0]), true);
				set_object_targettable(&(uParam0->f_29[0]), true);
				set_entity_is_target_priority(&(uParam0->f_29[0]), true, 0f);
			}
			if (!func_43(Local_73.f_62, 64))
			{
				func_51(&(Local_73.f_62), 64);
			}
			Local_285.f_1 = 0;
			if (func_67(&Local_73, uParam0->f_36[2], 7, &uLocal_187, &Local_285, 0, "SKOTR_HAPPENED", 1))
			{
				func_58(&Local_73, 16, 1);
			}
			if (Local_73.f_64 != 0)
			{
				func_76(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			break;
		case 15:
			if (!func_43(Local_73.f_62, 128))
			{
				func_51(&(Local_73.f_62), 128);
			}
			Local_285.f_1 = 0;
			if (func_67(&Local_73, uParam0->f_36[2], 12, &uLocal_187, &Local_285, 0, "SKOTR1_IDLE", 1))
			{
				func_58(&Local_73, 17, 1);
			}
			if (Local_73.f_64 != 0)
			{
				func_76(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			break;
		case 16:
			if (!func_43(Local_73.f_62, 128))
			{
				func_51(&(Local_73.f_62), 128);
			}
			Local_285.f_1 = 0;
			if (func_67(&Local_73, uParam0->f_36[2], 13, &uLocal_187, &Local_285, 0, "SKOTR1_IDLE", 1))
			{
				func_58(&Local_73, 17, 1);
			}
			if (Local_73.f_64 != 0)
			{
				func_76(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0));
			}
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_58(&Local_73, 7, 1);
			}
			break;
		case 17:
			if (!func_43(Local_73.f_62, 512))
			{
				func_51(&(Local_73.f_62), 512);
			}
			func_67(&Local_73, uParam0->f_36[2], 0, &uLocal_187, &Local_285, 0, 0, 0);
			if (Local_73.f_64 != 0)
			{
				if (!func_76(&Local_73, func_32(uParam0, 0), func_33(uParam0, 0)))
				{
					func_68(&Local_73);
				}
			}
			break;
		case 18:
			func_67(&Local_73, uParam0->f_36[2], 14, &uLocal_187, &Local_285, 0, 0, 0);
			if (_is_anim_scene_finished(&(uParam0->f_36[2]), false))
			{
				task_turn_ped_to_face_entity(&(uParam0->f_13[0]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				func_78(&uLocal_187, func_77("SKOTR1_FREE"), 0, -1, 0, 0);
				func_58(&Local_73, 19, 1);
			}
			break;
		case 19:
			if (func_71(&(uParam0->f_13[0]), 0, &uLocal_152, &uLocal_180, 0, 0))
			{
				func_72(&uLocal_152, &uLocal_180);
				func_62(1, 0, 0);
				func_58(&Local_73, 20, 1);
			}
			Local_285.f_1 = 0;
			func_79(&Local_285);
			if (!func_80(1))
			{
				func_58(&Local_73, 20, 1);
			}
			break;
		case 20:
			func_81(iLocal_183);
			set_blocking_of_non_temporary_events(&(uParam0->f_13[0]), false);
			_task_move_in_traffic_3(&(uParam0->f_13[0]), Global_35, 2f, 0, 0);
			set_ped_keep_task(&(uParam0->f_13[0]), true);
			func_58(&Local_73, 22, 1);
			break;
		case 21:
			if (!func_43(uParam0->f_3, 8))
			{
				if ((&uLocal_138[1] == 7 && &uLocal_138[2] == 7) && func_55(Global_35, func_32(uParam0, 0), 15f, 1, 1))
				{
					func_82(uParam0, 0);
					if (!func_43(uParam0->f_3, 256))
					{
						func_51(&(uParam0->f_3), 256);
						func_52(&(uParam0->f_5), &(uParam0->f_3));
					}
					func_58(&Local_73, 22, 1);
				}
			}
			break;
		case 22:
			if (!func_43(uParam0->f_3, 128) && !func_43(uParam0->f_3, 4))
			{
				if (!func_43(Local_73.f_62, 1024))
				{
					if (!func_43(Local_73.f_62, 32768))
					{
						func_51(&(Local_73.f_62), 32768);
					}
				}
				func_81(iLocal_183);
				func_51(&(uParam0->f_3), 128);
				func_52(&(uParam0->f_5), &(uParam0->f_3));
			}
			break;
	}
	return false;
}

void func_19(var uParam0)
{
	func_83(uParam0);
	func_84(uParam0);
	func_85(uParam0, 0);
	func_86(uParam0, 0);
	func_87(uParam0);
	func_88(uParam0);
	func_89(uParam0);
	if (is_thread_active(*uParam0, false))
	{
		terminate_thread(*uParam0);
	}
}

void func_20(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_46))
	{
		if (!func_91(func_90(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = _create_volume_cylinder_with_custom_name(func_90(uParam0), func_92(uParam0), func_93(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = _create_volume_box_with_custom_name(func_90(uParam0), func_92(uParam0), func_93(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (_does_volume_exist(uParam0->f_46))
		{
			_0x18262cafebb5fbe1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	func_94(uParam0);
	if (func_95(uParam0))
	{
		if (_does_volume_exist(uParam0->f_46))
		{
			if (!_0x91a5f9cbebb9d936(uParam0->f_45))
			{
				uParam0->f_45 = _0x4c39c95ae5db1329(uParam0->f_46, false, 15);
			}
		}
	}
}

void func_21(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!func_96(uParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_22(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_22[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = -1737978570;
				uParam0->f_6[1] = 1282171014;
				uParam0->f_6[2] = 1282171014;
				uParam0->f_22[0] = -1273905068;
			}
			else if (!func_43(uParam0->f_3, 8))
			{
				if (!func_97(-1282804314))
				{
					uParam0->f_4 = 3;
					uParam0->f_6[0] = -1737978570;
					uParam0->f_6[1] = 1282171014;
					uParam0->f_6[2] = 1282171014;
				}
				else
				{
					uParam0->f_4 = 2;
					uParam0->f_6[1] = 1282171014;
					uParam0->f_6[2] = 1282171014;
				}
			}
			break;
		case 131072:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = -1134756023;
				uParam0->f_6[1] = -1134756023;
				uParam0->f_22[0] = 1605749521;
			}
			else
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = -1134756023;
				uParam0->f_6[1] = -1134756023;
			}
			break;
		case 8192:
			if (!func_43(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_99(func_98(uParam0->f_5), 4) || !func_99(func_98(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!func_99(func_98(uParam0->f_5), 2) && !func_100(128, 0, 1)) && !func_101(get_player_index(), 1, 1, 1)) && !func_102()) && !func_103(20)) && !func_99(func_98(uParam0->f_5), 4)) && !func_99(func_98(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = 1385399145;
							uParam0->f_6[4] = -1038436471;
						}
						if (!func_99(func_98(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = 1282171014;
							uParam0->f_6[2] = -1038436471;
							uParam0->f_6[3] = -1038436471;
						}
						if (!func_99(func_98(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = 1605749521;
						}
					}
				}
				else if (!func_99(func_98(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = 1605749521;
				}
			}
			else if (!func_43(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = 1605749521;
			}
			break;
		case 4096:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = -449588556;
				uParam0->f_6[2] = -449588556;
				uParam0->f_6[3] = 98537260;
				uParam0->f_6[4] = 98537260;
			}
			else if (func_104(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = -449588556;
			}
			break;
		case 256:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = 1282171014;
				uParam0->f_6[2] = 98537260;
				uParam0->f_6[3] = 98537260;
				uParam0->f_6[4] = 98537260;
			}
			break;
		case 64:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 6;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = 1282171014;
				uParam0->f_6[2] = 1282171014;
				uParam0->f_6[3] = 1282171014;
				uParam0->f_6[4] = 1282171014;
				uParam0->f_6[5] = 1282171014;
			}
			break;
		case 16:
			uParam0->f_4 = 1;
			uParam0->f_6[0] = -449588556;
			break;
		case 512:
			uParam0->f_4 = 5;
			uParam0->f_6[0] = 1282171014;
			uParam0->f_6[1] = 1282171014;
			uParam0->f_6[2] = -449588556;
			uParam0->f_6[3] = -449588556;
			uParam0->f_6[4] = 1976314726;
			break;
		case 32:
			if (func_104(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = 1282171014;
			}
			break;
		case 16384:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = 1282171014;
			}
			break;
		case 65536:
			if (!func_43(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = 2062995136;
				if (!func_99(func_98(uParam0->f_5), 2))
				{
					uParam0->f_22[1] = 1605749521;
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
}

bool func_23(var uParam0)
{
	if (!func_43(uParam0->f_3, 4))
	{
		if (!_does_volume_exist(iLocal_182))
		{
			iLocal_182 = _create_volume_box_with_custom_name(func_32(uParam0, 0), 0f, 0f, 0f, 2f, 2f, 3f, "CONVICT_RESTRICTION");
		}
		if (!_0x91a5f9cbebb9d936(uLocal_186))
		{
			uLocal_186 = func_105(iLocal_182, 0, 0, 0);
		}
		if (!_does_volume_exist(iLocal_183))
		{
			iLocal_183 = _0x0eb78c2b156635b1(665633627, 2119.288f, -1836.136f, 41.5868f, 0f, 0f, 0f, 1.5f, 1.16826f, 3f);
		}
		if (!_does_volume_exist(iLocal_184))
		{
			iLocal_184 = _create_volume_cylinder_with_custom_name(2116.253f, -1836.386f, 41.24691f, 0f, 0f, 0f, 20.41009f, 17.88516f, 3.900479f, "CONVICT_LOOK");
		}
		if (!_does_volume_exist(iLocal_185))
		{
			iLocal_185 = _create_volume_sphere_with_custom_name(2079.53f, -1825.873f, 40.55048f, 0f, 0f, 0f, 100f, 100f, 100f, "OTR_RandomEventBlock");
			func_106(iLocal_185, "OTR_REBlock", 1, 0, 0, 0, -1082130432);
		}
	}
	return true;
}

void func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			request_model(&(uParam0->f_6[iVar0]), false);
		}
		iVar0++;
	}
}

void func_25(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			request_model(&(uParam0->f_22[iVar0]), false);
		}
		iVar0++;
	}
}

void func_26(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_107(uParam0, iVar0, 0)))
		{
			if (!_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				if (func_108(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!is_string_null_or_empty(func_107(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_107(uParam0, iVar0, 0), iParam1, func_107(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_107(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				load_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (!func_43(uParam0->f_3, 4))
	{
		_text_database_request("SPDEF");
		_text_database_request("OTRAUD");
	}
}

bool func_28(var uParam0)
{
	if (!func_109(uParam0) || !func_110(uParam0))
	{
		return false;
	}
	return true;
}

bool func_29(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_107(uParam0, iVar0, 0)))
		{
			if (!_is_anim_scene_loaded(&(uParam0->f_36[iVar0]), true, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_30(var uParam0)
{
	if (!func_43(uParam0->f_3, 4))
	{
		if (!_text_database_has_loaded("SPDEF"))
		{
			return false;
		}
		if (!_text_database_has_loaded("OTRAUD"))
		{
			return false;
		}
	}
	return true;
}

bool func_31(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_32(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2119f, -1836.355f, 41.5868f;
				case 1:
					return 2119.727f, -1834.759f, 41.5868f;
				case 2:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -689.3527f, 1046.65f, 134.253f;
				case 1:
					return -689.9694f, 1045.613f, 133.7922f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1607.909f, -202.6873f, 160.0056f;
				case 1:
					return -1597.202f, -194.4726f, 140.2473f;
				case 2:
					return -1605.202f, -191.5559f, 146.978f;
				case 3:
					return -1598.868f, -190.1475f, 142.4308f;
				case 4:
					return -1621.278f, -211.1197f, 159.4808f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1983.052f, 1192.364f, 170.4026f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2037.121f, -1901.752f, 109.4507f;
				case 1:
					return -2031.363f, -1932.45f, 108.5494f;
				case 2:
					return -2038.634f, -1898.968f, 109.3499f;
				case 3:
					return -2079.085f, -1890.234f, 112.6797f;
				case 4:
					return -2031.766f, -1930.215f, 108.6972f;
				case 5:
					return -2062.604f, -1926.374f, 112.3715f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1133.502f, -979.8339f, 68.3721f;
				case 1:
					return 1130.892f, -979.0982f, 69.1826f;
				case 2:
					return 1129.659f, -985.3533f, 67.7327f;
				case 3:
					return 1129.455f, -984.3824f, 67.77183f;
				case 4:
					return 1130.085f, -985.6208f, 67.75238f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.795f, 2192.223f, 323.4134f;
				case 1:
					return 1592.79f, 2194.295f, 323.0721f;
				case 2:
					return 1593.036f, 2193.619f, 323.0598f;
				case 3:
					return 1592.932f, 2194.539f, 323.0347f;
				case 4:
					return 1592.46f, 2195.062f, 323.0381f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 1889.1f, 304.105f, 77.0837f;
				case 1:
					return 1887.51f, 300.0471f, 78.8974f;
				case 2:
					return 1889.929f, 299.6248f, 76.7374f;
				case 3:
					return 1887.172f, 301.2639f, 76.0748f;
				case 4:
					return 1888.521f, 299.7741f, 76.1599f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -155.9291f, 1491.316f, 115.17f;
				case 1:
					return -155.5224f, 1489.777f, 115.1745f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2031.882f, 2082.897f, 331.4405f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0.1f;
				case 1:
					return 124.56f;
				case 2:
					return -111.72f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -143.96f;
				case 1:
					return 125.28f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -74.96f;
				case 1:
					return 155.46f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 117.5512f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return 176.81f;
				case 1:
					return 91.91f;
				case 2:
					return -96.42f;
				case 3:
					return -123.76f;
				case 4:
					return -179.66f;
				case 5:
					return -99.82f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 101.62f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return -155.52f;
				case 1:
					return 146f;
				case 2:
					return -40.99f;
				case 3:
					return 16.8645f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return -33.09f;
				case 1:
					return -48.05f;
				case 2:
					return 182.1318f;
				case 3:
					return 182.1318f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 180f;
				case 1:
					return 12.78f;
				case 2:
					return 72.46f;
				case 3:
					return -148.24f;
				case 4:
					return 55.1f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 99.07f;
				case 1:
					return 166.65f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return 135f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f;
}

void func_34(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!&uParam0->f_6[iParam5] == 0)
	{
		if (!does_entity_exist(&(uParam0->f_13[iParam5])))
		{
			if (!func_111(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = func_112(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = func_112(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = func_112(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
			}
			if (!is_entity_dead(&(uParam0->f_13[iParam5])))
			{
				if (bParam6)
				{
					_0x9587913b9e772d29(&(uParam0->f_13[iParam5]), 0);
				}
				set_blocking_of_non_temporary_events(&(uParam0->f_13[iParam5]), true);
				task_stand_still(&(uParam0->f_13[iParam5]), -1);
				if (!bParam8)
				{
					set_entity_visible(&(uParam0->f_13[iParam5]), false);
				}
				uParam0->f_20++;
			}
		}
		else
		{
			uParam0->f_20++;
		}
	}
	else
	{
		uParam0->f_20++;
	}
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

Vector3 func_36(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2032.043f, 2082.895f, 331.7289f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.606f, 2192.719f, 323.4388f;
				case 1:
					return 1593.214f, 2194.468f, 323.0663f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1724.69f, -86.3643f, 180.7049f;
				case 1:
					return -1590.34f, -182.8431f, 136.87f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 1389.486f, -2079.036f, 51.5495f;
				case 1:
					return 1390.9f, -2086f, 52.375f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1129.4f, -985.02f, 67.78f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -690.8923f, 1044.765f, 134.669f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_37(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -87.6368f, -17.6933f, -68.3214f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				case 1:
					return 90f, 0f, 0f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 7f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 180f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -25f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_38(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!&uParam0->f_22[iParam7] == 0 && !func_91(vParam1))
	{
		if (!does_entity_exist(&(uParam0->f_29[iParam7])))
		{
			uParam0->f_29[iParam7] = create_object(&(uParam0->f_22[iParam7]), vParam1, true, true, false, false, true);
			if (!is_entity_dead(&(uParam0->f_29[iParam7])))
			{
				set_entity_coords(&(uParam0->f_29[iParam7]), vParam1, true, false, true, true);
				set_entity_rotation(&(uParam0->f_29[iParam7]), vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int func_39(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					if (!func_43(uParam0->f_3, 4))
					{
						return -1984759420;
					}
					else
					{
						return 50923185;
					}
					break;
				case 1:
					return 550457596;
				case 2:
					return 855242065;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -183039148;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2089787434;
				case 1:
					return 1908325491;
				case 2:
					return 254342877;
				case 3:
					return -52800960;
				case 4:
					return -1197356488;
				case 5:
					return -1427362099;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 1980915318;
				case 1:
					return 569479591;
				case 2:
					return -937613161;
				case 3:
					return -937613161;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1112811077;
				case 1:
					return 1813871063;
				case 2:
					return 1112811077;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 816323515;
				case 1:
					return 1113964342;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 2058743928;
				case 1:
					return 794165431;
				case 2:
					return 989984119;
				case 3:
					return -565729830;
				case 4:
					return 1022043639;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 1156572673;
				case 1:
					return -938873797;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 1202038884;
				case 1:
					return 1511738703;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -774890814;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 41788943;
}

void func_40(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_113(iParam0, iParam1))
		{
			if (func_114(iParam0, iParam1))
			{
				if (func_115(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_116(iParam0);
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

bool func_41(var uParam0)
{
	if (!func_117(uParam0))
	{
		return false;
	}
	func_118(uParam0, 5);
	return true;
}

void func_42(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(&(uParam0->f_13[iParam1])))
	{
		if (is_entity_dead(&(uParam0->f_13[iParam1])))
		{
		}
		func_119(uParam0->f_13[iParam1], iParam2);
		func_120(uParam0->f_13[iParam1], 0);
		set_ped_config_flag(&(uParam0->f_13[iParam1]), 26, true);
		_0xae6004120c18df97(&(uParam0->f_13[iParam1]), 1, 0);
		remove_all_ped_weapons(&(uParam0->f_13[iParam1]), true, true);
	}
}

bool func_43(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_44(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_45(int iParam0, bool bParam1, bool bParam2)
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

void func_46(var uParam0, var uParam1, int iParam2)
{
	if (!is_string_null_or_empty(func_107(uParam0, iParam2, 0)))
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				func_121(uParam0, uParam1, iParam2);
				start_anim_scene(*uParam1);
			}
		}
	}
}

void func_47(var uParam0, char* sParam1)
{
	if (_0xa9016536015de29d(*uParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(*uParam0, sParam1);
	}
}

void func_48(int iParam0)
{
	Var0 = { func_122(0) };
	func_123(iParam0->f_25[0], Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_122(1) };
	func_123(iParam0->f_25[1], Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
}

void func_49(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_50(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_51(var uParam0, int iParam1)
{
	func_124(uParam0, iParam1);
}

int func_52(var uParam0, var uParam1)
{
	if (func_125(*uParam0))
	{
		func_126(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_54(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		switch (&uLocal_138[iVar0])
		{
			case 0:
				if (!func_43(uParam0->f_3, 4))
				{
					if (iVar0 == 1 || iVar0 == 2)
					{
						func_127(vLocal_142[iVar0]);
						func_128(uLocal_138[iVar0], 2);
					}
					else
					{
						if (does_entity_exist(&(uParam0->f_13[iVar0])))
						{
							set_entity_visible(&(uParam0->f_13[iVar0]), true);
						}
						func_127(vLocal_142[iVar0]);
						func_128(uLocal_138[iVar0], 4);
					}
				}
				else
				{
					func_127(vLocal_142[iVar0]);
					func_128(uLocal_138[iVar0], 2);
				}
				break;
			case 2:
				if (does_entity_exist(&(uParam0->f_13[iVar0])))
				{
					if (is_entity_dead(&(uParam0->f_13[iVar0])))
					{
						func_129(uParam0->f_13[iVar0], iVar0);
						set_entity_visible(&(uParam0->f_13[iVar0]), true);
						func_128(uLocal_138[iVar0], 7);
					}
				}
				break;
			case 4:
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

bool func_55(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_130(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_56(var uParam0)
{
	if (!func_43(uParam0->f_3, 8192))
	{
		switch (uParam0->f_1)
		{
			case 16:
				iVar0 = -727372692;
				break;
			case 32:
				iVar0 = 532503220;
				break;
			case 64:
				iVar0 = 562599937;
				break;
			case 128:
				iVar0 = 1714554710;
				break;
			case 256:
				iVar0 = 1610646968;
				break;
			case 512:
				iVar0 = -1249289544;
				break;
			case 1024:
				iVar0 = -508074447;
				break;
			case 2048:
				iVar0 = -1917132299;
				break;
			case 4096:
				iVar0 = -763271696;
				break;
			case 8192:
				iVar0 = 1116308524;
				break;
			case 16384:
				iVar0 = 379859357;
				break;
			case 32768:
				iVar0 = 1822876181;
				break;
			case 65536:
				iVar0 = 1354284392;
				break;
			case 131072:
				iVar0 = 43681669;
				break;
			case 262144:
				iVar0 = 1871337449;
				break;
		}
		if (iVar0 != 0)
		{
			if (!_map_is_discovery_active(iVar0))
			{
				_0xd8c7162ab2e2af45(iVar0);
			}
		}
		func_51(&(uParam0->f_3), 8192);
		func_132(func_131(1933084904), 1);
	}
}

bool func_57(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_133(iVar0) || func_134(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_127(&(iParam0->f_1));
	}
}

void func_59(int iParam0, vector3 vParam1)
{
	if (func_55(Global_35, vParam1, 20f, 1, 1))
	{
		if (func_55(Global_35, vParam1, 17f, 1, 1))
		{
			if (func_55(Global_35, vParam1, 12.5f, 1, 1))
			{
				iParam0->f_64 = 0;
			}
			else
			{
				iParam0->f_64 = 1;
			}
		}
		else
		{
			iParam0->f_64 = 2;
		}
	}
	else
	{
		iParam0->f_64 = 3;
	}
}

void func_60(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (((func_55(Global_35, vParam2, 17f, 1, 1) && func_43(iParam0->f_62, 1)) && does_entity_exist(iParam1)) && *iParam0 > 0)
	{
		iVar0 = 0;
		if (func_43(iParam0->f_62, 16384))
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 2;
		}
		iVar3 = func_135(iParam0->f_60, 0, 0);
		if (iParam0->f_60 == 0)
		{
			iVar3 |= 1;
		}
		iVar4 = func_136(&iParam1, &(iParam0->f_4), 17f, &(iParam0->f_25), 0f, iVar2, 0, iVar0, iVar3, 0, 0, 2, -1082130432);
		if ((((func_43(iParam0->f_62, 2) && !func_43(iParam0->f_62, 4096)) && *iParam0 > 0) && *iParam0 < 12) && *iParam0 != 7)
		{
			func_137(iParam0, 1);
			func_138(iParam0, 0);
			if (iVar4 != -1)
			{
				if (iVar4 == 0)
				{
					if (func_66())
					{
						func_139(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam1, 1, "JOHN_PLAYER", 2, 1);
					}
					else
					{
						func_139(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam1, 1, "ARTHUR", 6, 1);
					}
					func_51(&(iParam0->f_62), 4);
				}
				else if (iVar4 == 1)
				{
					if (func_43(iParam0->f_62, 8192))
					{
						if (func_66())
						{
							sVar1 = "OTR1_FND_JOHN";
						}
						else
						{
							sVar1 = "OTR1_FND_ARTHUR";
						}
					}
					else if (func_66())
					{
						sVar1 = "SKOTR_APPRCH_J";
					}
					else
					{
						sVar1 = "SKOTR_APPRCH_A";
					}
					if (!func_140(sVar1))
					{
						func_78(uParam5, func_77(sVar1), 0, -1, 0, 0);
					}
					func_51(&(iParam0->f_62), 8);
				}
				func_51(&(iParam0->f_62), 4096);
				func_64(&(iParam0->f_62), 2);
				func_51(&(iParam0->f_62), 64);
				func_137(iParam0, 0);
				func_138(iParam0, 1);
				func_141(&iParam1);
				func_142(&(iParam0->f_25), 0, 0, 1, 0);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
		}
		else
		{
			func_137(iParam0, 0);
			func_138(iParam0, 1);
		}
	}
	else
	{
		func_137(iParam0, 0);
		func_141(&iParam1);
		func_143(&(iParam0->f_4), 0);
		func_142(&(iParam0->f_25), 0, 0, 1, 0);
	}
}

bool func_61(int iParam0, int iParam1)
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
	if (func_43(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_43(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_43(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_43(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_43(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_43(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_43(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_43(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_63(int iParam0)
{
	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_64(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1);
}

void func_65(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_146(uParam0, iParam1, sParam2))
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

bool func_66()
{
	if (func_147() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, char* sParam6, bool bParam7)
{
	if (_does_anim_scene_exist(*uParam1))
	{
		if (!_is_anim_scene_started(*uParam1, false) && !_is_anim_scene_finished(*uParam1, false))
		{
			start_anim_scene(*uParam1);
		}
		if (_is_anim_scene_started(*uParam1, false))
		{
			sVar0 = func_148(iParam2);
			if ((!_0x23e33cb9f4a3f547(*uParam1, sVar0) && !_0x0df57f86fe71dbe5(*uParam1, sVar0)) && !_0x1f0e401031e20146(*uParam1, sVar0))
			{
				_0xdf7b5144e25cd3fe(*uParam1, sVar0);
			}
			if (!_0x1f0e401031e20146(*uParam1, sVar0) && _0x23e33cb9f4a3f547(*uParam1, sVar0))
			{
				_set_anim_scene_playback_list_bool(*uParam1, sVar0, true);
				set_anim_scene_bool(*uParam1, "BASE_BOOL", true, false);
				if (bParam7)
				{
					func_79(iParam4);
				}
				if (!is_string_null_or_empty(sParam6))
				{
					if (!func_140(sParam6))
					{
						func_78(uParam3, func_77(sParam6), 0, -1, 0, 0);
					}
				}
				return false;
			}
			else if (_0x1f0e401031e20146(*uParam1, sVar0))
			{
				if (bParam7)
				{
					func_79(iParam4);
				}
				if (_0x8d81e7824b7753f7(*uParam1, func_149(iParam2), 1))
				{
					set_anim_scene_bool(*uParam1, "BASE_BOOL", false, false);
				}
				if (_get_anim_scene_progress(*uParam1) > 0.9f || (_0x8d81e7824b7753f7(*uParam1, "base", 1) && bParam5))
				{
					if (func_150(uParam1, iParam0->f_63))
					{
						set_anim_scene_bool(*uParam1, "BASE_BOOL", false, false);
						iParam0->f_63 = sVar0;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_68(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
			func_58(iParam0, 2, 1);
			break;
		case 1:
			func_58(iParam0, 3, 1);
			break;
		case 2:
			func_58(iParam0, 4, 1);
			break;
	}
}

int func_69(int iParam0, var uParam1, vector3 vParam2)
{
	if (((!func_43(iParam0->f_62, 8) && !func_43(iParam0->f_62, 4)) && _0x8d81e7824b7753f7(*uParam1, "base", 1)) && func_55(Global_35, vParam2, 6f, 1, 1))
	{
		if (!func_43(iParam0->f_62, 2))
		{
			func_51(&(iParam0->f_62), 2);
		}
		return 1;
	}
	else
	{
		if (func_43(iParam0->f_62, 2))
		{
			func_64(&(iParam0->f_62), 2);
		}
		return 0;
	}
	return 0;
}

void func_70(int iParam0, vector3 vParam1, float fParam4)
{
	if (iParam0->f_64 == 0)
	{
		func_151(iParam0, vParam1, fParam4);
	}
	else if ((iParam0->f_64 == 1 && func_43(iParam0->f_62, 16)) && !func_43(iParam0->f_62, 256))
	{
		if (func_152(Global_35, vParam1, fParam4, 1065353216))
		{
			func_58(iParam0, 11, 1);
		}
		else
		{
			func_58(iParam0, 10, 1);
		}
	}
	else if (iParam0->f_64 == 2)
	{
		if (!func_43(iParam0->f_62, 32))
		{
			func_58(iParam0, 6, 1);
		}
	}
}

bool func_71(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_153(uParam2, 1, iVar0);
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
			if (func_154(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_155(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_156(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_157(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_158(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_101(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_155(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_159(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_160(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_161(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_162(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_162(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_155(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_163(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_164(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_165(uParam2, 4000))
				{
					if ((func_166(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_167(uParam2, iParam0)) && func_168(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_166(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_167(uParam2, iParam0)) && func_168(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_169(iParam0, Global_1935630->f_41))
							{
								func_170();
								*uParam3 = 2;
								func_155(iParam0, uParam2, *uParam3);
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
						if (func_169(iParam0, Global_1935630->f_41))
						{
							func_170();
							*uParam3 = 2;
							func_155(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_171(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_172() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_170();
						*uParam3 = 2;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_173())
					{
						if (func_169(iParam0, Global_1935630->f_42))
						{
							func_170();
							*uParam3 = 2;
							func_155(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_174(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_155(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_175(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_176(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_177(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_178(uParam2, 4000))
				{
					if (func_179(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_155(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_180(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_155(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_181(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_155(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_72(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_172();
		_0xeacebaae0a33fb3f(player_id());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_182(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_73(int iParam0)
{
	if ((func_43(iParam0->f_62, 4) || func_43(iParam0->f_62, 8)) && !func_43(iParam0->f_62, 2048))
	{
		func_51(&(iParam0->f_62), 2048);
		return true;
	}
	return false;
}

void func_74(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_43(iParam0->f_62, 64) && !func_43(iParam0->f_62, 128))
	{
		if (func_152(Global_35, vParam1, fParam4, 1065353216))
		{
			func_58(iParam0, 16, 1);
		}
		else
		{
			func_58(iParam0, 15, 1);
		}
	}
	else if (func_43(iParam0->f_62, 128))
	{
		func_58(iParam0, 17, 1);
	}
	else
	{
		func_58(iParam0, 1, 1);
	}
}

void func_75(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_152(Global_35, vParam1, fParam4, 1065353216))
	{
		func_58(iParam0, 13, 1);
	}
	else
	{
		func_58(iParam0, 14, 1);
	}
}

bool func_76(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_43(iParam0->f_62, 256))
	{
		return false;
	}
	if (func_152(Global_35, vParam1, fParam4, 1065353216))
	{
		func_62(1, 0, 0);
		func_58(iParam0, 11, 1);
		return true;
	}
	else
	{
		func_62(1, 0, 0);
		func_58(iParam0, 10, 1);
		return true;
	}
	return false;
}

Vector3 func_77(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_78(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_183(vParam1, uParam0);
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

void func_79(int iParam0)
{
	if (is_entity_dead(iParam0->f_27))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!_does_volume_exist(*iParam0) && !iParam0->f_1)
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, *iParam0, true, 0) && !iParam0->f_1)
	{
		return;
	}
	else
	{
		iParam0->f_2.f_3 = Global_35;
	}
	iParam0->f_2 = { 0f, 0f, 0f };
	iParam0->f_2.f_4 = 21030;
	iParam0->f_2.f_8 = 4;
	iParam0->f_2.f_19 = 3;
	iParam0->f_2.f_20 = 2;
	iParam0->f_2.f_21 = 3;
	iParam0->f_2.f_22 = 3;
	iParam0->f_2.f_13 = 3;
	iParam0->f_2.f_7 = 0;
	_0x66f9eb44342bb4c5(iParam0->f_27, &(iParam0->f_2));
}

bool func_80(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_81(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_82(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (func_111(uParam0, iVar0))
		{
			func_184(uParam0->f_13[iVar0], iParam1, iVar0);
		}
		iVar0++;
	}
}

void func_83(var uParam0)
{
	if (!func_43(uParam0->f_3, 128) && !func_43(uParam0->f_3, 4))
	{
		if (!func_43(Local_73.f_62, 1024))
		{
			if (!func_43(Local_73.f_62, 32768))
			{
				func_51(&(Local_73.f_62), 32768);
			}
		}
		func_81(iLocal_183);
		func_51(&(uParam0->f_3), 4);
		func_52(&(uParam0->f_5), &(uParam0->f_3));
	}
	func_142(&(Local_73.f_25), 0, 1, 1, 0);
	func_185(&(Local_73.f_4), &(Local_73.f_25));
	_0x9cf1836c03fb67a2(&uLocal_181, 0);
	if (_does_volume_exist(iLocal_182))
	{
		if (_0x91a5f9cbebb9d936(uLocal_186))
		{
			func_186(&uLocal_186, iLocal_182, 0);
		}
		_delete_volume(iLocal_182);
	}
	func_81(iLocal_183);
	func_81(iLocal_184);
	if (_does_volume_exist(iLocal_185))
	{
		func_187(iLocal_185);
		_delete_volume(iLocal_185);
	}
	func_50(1648013752);
}

void func_84(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (_does_scenario_point_exist(&(uParam0->f_41[iVar0])))
		{
			_delete_scenario_point(&(uParam0->f_41[iVar0]));
		}
		iVar0++;
	}
}

void func_85(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_188(uParam0->f_29[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_86(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_189(uParam0->f_13[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_87(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_107(uParam0, iVar0, 0)))
		{
			if (_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				_delete_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_88(var uParam0)
{
	if (_does_volume_exist(uParam0->f_46))
	{
		func_186(&(uParam0->f_45), uParam0->f_46, 0);
		_delete_volume(uParam0->f_46);
	}
	func_190(uParam0);
}

void func_89(var uParam0)
{
	func_191(uParam0);
	func_192(uParam0);
}

Vector3 func_90(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 2089.99f, -1817.414f, 41.9281f;
		case 131072:
			return -689.7184f, 1043.631f, 132.8593f;
		case 256:
			return 1586.992f, 2193.114f, 323.3805f;
		case 16:
			return 1984.216f, 1193.481f, 171.7942f;
		case 512:
			return 1888.297f, 301.679f, 77.312f;
		case 32:
			return -155.657f, 1489.998f, 117.244f;
		case 16384:
			return -1961.747f, 2159.31f, 326.6873f;
		case 64:
			return -2054.997f, -1910.598f, 110.9531f;
		case 128:
			return -2109.321f, 1843.872f, 256.096f;
		case 2048:
			return 1462.616f, 811.213f, 99.923f;
		case 4096:
			return 1134.45f, -979.7036f, 69.06891f;
		case 2:
			return -1553.813f, 257.88f, 110.429f;
		case 4:
			return 1462.772f, -1582.476f, 70.11337f;
		case 8:
			return 1794.212f, 458.8075f, 109.4694f;
		case 8192:
			return -1724.538f, -86.73952f, 180.7049f;
		case 1024:
			return -2370.197f, 472.3461f, 132.259f;
		case 65536:
			return 1389.648f, -2082.044f, 53.0335f;
		case 262144:
			return 1185.428f, -101.4211f, 96.4688f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_91(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_92(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 0f, 0f, 45.54978f;
		case 131072:
			return 0f, 0f, -54.83283f;
		case 256:
			return 0f, 0f, 30.56075f;
		case 16:
			return 0f, 0f, -34.16869f;
		case 512:
			return 0f, 0f, 0f;
		case 32:
			return 0f, 0f, 25f;
		case 16384:
			return 0f, 0f, -4.355095f;
		case 64:
			return 0f, 0f, 0f;
		case 128:
			return 0f, 0f, 49.964f;
		case 2048:
			return 0f, 0f, 45f;
		case 4096:
			return 0f, 0f, -35.58028f;
		case 2:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, -26.22593f;
		case 8:
			return 0f, 0f, -15.84809f;
		case 8192:
			return 0f, 0f, -55.92001f;
		case 1024:
			return 0f, 0f, 0f;
		case 65536:
			return 0f, 0f, 19.96441f;
		case 262144:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_93(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 8.537304f, 6.882811f, 9.092137f;
		case 131072:
			return 7.909408f, 5.245724f, 9.092137f;
		case 256:
			return 4.106579f, 4.25f, 5.262621f;
		case 16:
			return 5.127945f, 9.805676f, 4f;
		case 512:
			return 5.76f, 7.6f, 3f;
		case 32:
			return 4f, 8f, 5f;
		case 16384:
			return 4.966977f, 5.789305f, 4.917263f;
		case 64:
			return 43.91189f, 39.83597f, 14.89902f;
		case 128:
			return 6f, 7f, 5f;
		case 2048:
			return 6.7f, 12.2f, 8f;
		case 4096:
			return 9.60421f, 6.498575f, 5f;
		case 2:
			return 12.61144f, 13.74787f, 21.60371f;
		case 4:
			return 18.62256f, 11.90544f, 36.47224f;
		case 8:
			return 19.32396f, 17.88757f, 40.77715f;
		case 8192:
			return 2f, 2f, 5f;
		case 1024:
			return 5f, 5f, 4f;
		case 65536:
			return 4.720003f, 10.4287f, 3f;
		case 262144:
			return 10.84954f, 5f, 5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_94(var uParam0)
{
}

bool func_95(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32:
		case 128:
		case 256:
		case 512:
		case 16384:
		case 32768:
		case 131072:
			return true;
		case 2:
		case 4:
		case 8:
		case 16:
		case 1024:
		case 2048:
		case 4096:
		case 8192:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return false;
}

bool func_96(var uParam0, int iParam1)
{
	if (!func_193(uParam0, iParam1) == 0 && !_does_scenario_point_exist(&(uParam0->f_41[iParam1])))
	{
		uParam0->f_41[iParam1] = create_scenario_point(func_193(uParam0, iParam1), func_194(uParam0, iParam1), func_195(uParam0, iParam1), func_196(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_97(int iParam0)
{
	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_98(int iParam0)
{
	if (!func_125(iParam0))
	{
		return -1;
	}
	return func_197(iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_100(int iParam0, bool bParam1, bool bParam2)
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
		if (func_198())
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
		iVar0 = func_199(&(Global_1898164->f_1[0]));
		if (func_200(iVar0) && func_201((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_125(&(Global_1898164->f_1[0])))
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

int func_101(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_202(bParam1, bParam2, bParam3);
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

bool func_102()
{
	return Global_1310750->f_16077 != 0;
}

bool func_103(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_104(var uParam0, float fParam1)
{
	fVar1 = func_203();
	if (func_204(uParam0->f_1, &fVar0))
	{
		if (fVar0 > 0f)
		{
			fVar2 = (fVar1 - fVar0);
			if (fVar2 >= fParam1)
			{
				return false;
			}
		}
	}
	return true;
}

var func_105(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_205(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_106(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_206(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

char* func_107(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2";
							case 1:
								return "pb_base";
							default:
								break;
						}
						break;
				}
			}
			else if (!func_43(uParam0->f_3, 8))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@discoverables@shack_starved_children@shack_dead_children";
						case 1:
							return "pl_dead_children";
						default:
							break;
					}
					break;
			}
			break;
		case 8192:
			if (!func_43(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_99(func_98(uParam0->f_5), 4) && !func_99(func_98(uParam0->f_5), 2)) && !func_99(func_98(uParam0->f_5), 8))
							{
								switch (iParam2)
								{
									case 0:
										return "script@ambient@discoverables@missing_husband@action";
									case 1:
										return "PBL_IDLE2";
									default:
										break;
								}
							}
							break;
						case 1:
							if (!func_99(func_98(uParam0->f_5), 4))
							{
								switch (iParam2)
								{
									case 0:
										return "script@beat@wilderness@discoverables@missing_husband@missing_husband";
									case 1:
										return "pl_missing_husband";
									default:
										break;
								}
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@ambient@discoverables@civil_war_bride@civil_war_bride";
						default:
							break;
					}
					break;
			}
			break;
		case 64:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
							case 1:
								return "pl_dead_settler";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 4096:
			if (!func_43(uParam0->f_3, 4) || func_104(uParam0, 1126694912))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_love_triangle@hisandher_pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 256:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_gunfight@pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@shack_happy_family@dead_family";
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			if (func_104(uParam0, 1126694912))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_dead_rivals@shack_dead_rivals";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 16384:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@missingmountainman@missingmountainman";
							case 1:
								return "pl_Base";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

bool func_108(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if (iParam1 == 1)
		{
			return true;
		}
	}
	else if (((((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 4096) || uParam0->f_1 == 256) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

bool func_109(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			if (!has_model_loaded(&(uParam0->f_22[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_110(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			if (!has_model_loaded(&(uParam0->f_6[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_111(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!func_43(uParam0->f_3, 4))
		{
			if (iParam1 == 1 || iParam1 == 2)
			{
				return true;
			}
		}
		else if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 256)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 4096)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

int func_112(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_207(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_113(int iParam0, int iParam1)
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

bool func_114(int iParam0, int iParam1)
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

bool func_115(int iParam0, int iParam1)
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
	if (!func_113(iParam0, iVar0))
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

void func_116(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_117(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_208(uParam0->f_13[iVar0], iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_118(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_209(uParam0->f_13[iVar0], iParam1, iVar0);
		iVar0++;
	}
}

void func_119(var uParam0, int iParam1)
{
	if (does_entity_exist(*uParam0))
	{
		if (is_entity_dead(*uParam0))
		{
		}
		_0x6569f31a01b4c097(*uParam0, 0, iParam1);
		_0x6569f31a01b4c097(*uParam0, 1, iParam1);
		_0x6569f31a01b4c097(*uParam0, 6, iParam1);
		_0x6569f31a01b4c097(*uParam0, 4, iParam1);
	}
}

void func_120(var uParam0, int iParam1)
{
	if (does_entity_exist(*uParam0))
	{
		if (is_entity_dead(*uParam0))
		{
		}
		_0x18ff3110cf47115d(*uParam0, 2, iParam1);
		_0x18ff3110cf47115d(*uParam0, 3, iParam1);
		_0x18ff3110cf47115d(*uParam0, 7, iParam1);
		_0x18ff3110cf47115d(*uParam0, 9, iParam1);
		_0x18ff3110cf47115d(*uParam0, 10, iParam1);
	}
}

void func_121(var uParam0, var uParam1, int iParam2)
{
	if (!is_string_null_or_empty(func_107(uParam0, iParam2, 0)))
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				func_210(uParam0, iParam2);
				if (!is_string_null_or_empty(func_107(uParam0, iParam2, 1)))
				{
					if (_0xa9016536015de29d(*uParam1, func_107(uParam0, iParam2, 1)))
					{
						_set_anim_scene_playback_list_bool(*uParam1, func_107(uParam0, iParam2, 1), true);
					}
				}
			}
		}
	}
}

struct<2> func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = "SPD_UC_ANT";
			Var0.f_1 = 648122183;
			break;
		case 1:
			Var0 = "SPD_UC_GRT";
			Var0.f_1 = -163964935;
			break;
	}
	return Var0;
}

void func_123(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_211(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_212(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_213(iParam0->f_6, iParam0->f_5, 0);
			}
			func_214(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_215(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_124(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_125(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_126(int iParam0, var uParam1)
{
	if (!func_125(iParam0))
	{
		return;
	}
	func_216(iParam0, uParam1);
}

void func_127(var uParam0)
{
	func_217(uParam0, 0f);
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_129(var uParam0, int iParam1)
{
	if (does_entity_exist(*uParam0))
	{
		if (is_entity_dead(*uParam0))
		{
			iVar0 = 1048575;
			set_ragdoll_blocking_flags(*uParam0, iVar0);
		}
	}
}

float func_130(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

struct<2> func_131(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_132(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_133(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_136(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_218(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_219(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_127(&(iParam1->f_13));
		}
		if (func_220(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_221(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_136(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_141(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_222(*iParam0, 1, 1);
						}
					}
					else if (func_223(iParam1, 22))
					{
						func_222(*iParam0, 0, 1);
					}
				}
				if (func_224(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_225(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_226(iParam8);
					if (func_227(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_228(uParam3);
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
					func_229(iParam1, uParam3, fVar8);
					if (func_230(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_142(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_231(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_224(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_232(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_227(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_225(iParam0, func_224(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_226(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_142(uParam3, 0, 0, 1, 1);
					}
					func_233(iParam1, 1);
				}
				func_229(iParam1, uParam3, fVar8);
				if (func_231(iParam0, iParam1, fParam4, bVar6))
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
			func_185(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_137(int iParam0, bool bParam1)
{
	func_234(iParam0->f_25[0], bParam1, 0);
	func_234(iParam0->f_25[1], bParam1, 0);
}

void func_138(int iParam0, bool bParam1)
{
	if (bParam1 && !iParam0->f_61)
	{
		iParam0->f_60 = 3;
		iParam0->f_61 = bParam1;
		func_143(&(iParam0->f_4), 0);
	}
	else if (!bParam1 && iParam0->f_61)
	{
		iParam0->f_60 = 0;
		iParam0->f_61 = bParam1;
		func_143(&(iParam0->f_4), 0);
	}
}

bool func_139(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_235(iParam0, &Var0);
}

bool func_140(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_141(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_142(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_211((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_236(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_143(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_237(&(iParam0->f_18));
}

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_146(var uParam0, int iParam1, char* sParam2)
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

int func_147()
{
	return Global_1572887->f_12;
}

char* func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pb_base";
		case 1:
			return "PB_CALLOVER_FAR";
		case 2:
			return "PB_CALLOVER_MID";
		case 3:
			return "PB_COMBACK_L";
		case 4:
			return "PB_COMBACK_R";
		case 5:
			return "PB_COWER";
		case 6:
			return "PB_EXPLAIN_L";
		case 7:
			return "PB_EXPLAIN_R";
		case 8:
			return "PB_FLINCH";
		case 9:
			return "PB_LOOKFRONT";
		case 10:
			return "PB_LOOKLEFT";
		case 11:
			return "PB_LOOKRIGHT";
		case 12:
			return "PB_NOHARM_L";
		case 13:
			return "PB_NOHARM_R";
		case 14:
			return "PB_SHOOT_FREE";
		default:
			break;
	}
	return "";
}

char* func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "INTERACTBODY";
		case 1:
			return "CALLOVER_FAR";
		case 2:
			return "CALLOVER_MID";
		case 3:
			return "GONNADIE_L";
		case 4:
			return "GONNADIE_R";
		case 5:
			return "COWER_EXIT";
		case 6:
			return "LOOKFOOD_L";
		case 7:
			return "LOOKFOOD_R";
		case 8:
			return "COWER_EXIT";
		case 9:
			return "LOOKFRONT";
		case 10:
			return "LOOKLEFT";
		case 11:
			return "LOOKRIGHT";
		case 12:
			return "WORTH_L";
		case 13:
			return "WORTH_R";
		case 14:
			return "";
		default:
			break;
	}
	return "";
}

bool func_150(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x1f0e401031e20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = _0xa9016536015de29d(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = _0x23e33cb9f4a3f547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = _0x0df57f86fe71dbe5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

void func_151(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_43(iParam0->f_62, 16))
	{
		func_58(iParam0, 5, 1);
	}
	else if (func_43(iParam0->f_62, 64) && !func_43(iParam0->f_62, 128))
	{
		if (func_152(Global_35, vParam1, fParam4, 1065353216))
		{
			func_58(iParam0, 16, 1);
		}
		else
		{
			func_58(iParam0, 15, 1);
		}
	}
	else if (func_43(iParam0->f_62, 128))
	{
		func_58(iParam0, 17, 1);
	}
}

bool func_152(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_238(vParam1, _get_object_offset_from_coords(vParam1, fParam4, 0f, fParam5, 0f), get_entity_coords(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

void func_153(var uParam0, bool bParam1, int iParam2)
{
	func_239(iParam2);
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
		uParam0->f_13 = func_240(0);
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
							func_241(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_242(1))
						{
							func_241(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_242(1) || *uParam0 & 8192 != 0))
				{
					func_243(uParam0, 33554432);
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
			if (func_244(uParam0))
			{
				uParam0->f_15 = func_172();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_172() - uParam0->f_15) > 500)
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
	func_245(uParam0);
}

bool func_154(int iParam0, var uParam1)
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
			if (!func_246(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_247(iParam0, iVar2) <= func_248(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_155(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_249(iParam2, 1, 1, 1, 0))
	{
		func_241(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_182(uParam1, 1);
	func_250();
}

bool func_156(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_251(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_252(uParam1);
			if (func_253(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_254(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_182(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_182(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_157(int iParam0, int iParam1, var uParam2)
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
	if (func_255(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_252(uParam2);
		if (func_253(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_254(uParam2)
				{
					func_182(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_158(int iParam0, var uParam1)
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
	if (func_246(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_254(uParam1)
		{
			fVar3 = func_252(uParam1);
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

bool func_159(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_172();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_160(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_256(uParam2);
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
			if (func_168(uParam2, iParam1))
			{
				func_182(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_161(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_257(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_168(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_182(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_162(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_258(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_182(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_182(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_259(iParam1, vVar0, vVar4))
					{
						func_182(uParam2, 1);
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
					func_182(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_259(iParam1, vVar0, vVar7))
					{
						func_182(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_163(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_246(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_260(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_261(&(Global_1935630->f_34[iVar0])))
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
			if (func_262(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_263(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_264(uParam1, iParam0, fVar1, iVar0))
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

bool func_164(int iParam0, var uParam1)
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

bool func_165(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_172();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_166(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_265(iVar0, &iVar2))
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
	if (func_266(iVar0, iParam0))
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

int func_167(var uParam0, int iParam1)
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

bool func_168(var uParam0, int iParam1)
{
	if (func_267(uParam0))
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

bool func_169(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_268(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_170()
{
}

bool func_171(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_269(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_172();
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
						if (func_270(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_172();
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

int func_172()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_173()
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
	if ((func_172() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_174(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_248(uParam0);
	if (uParam0->f_12 > func_271(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_272(iParam1);
	iVar1 = func_273(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_175(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_274(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_176(int iParam0, var uParam1)
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
		if (func_275(iParam0, uParam1, 1))
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
					if (!func_276(uParam1, iParam0))
					{
						if (func_270(iVar4, Global_36, 1) < 7f)
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

bool func_177(int iParam0, var uParam1)
{
	if (!func_277(0))
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

bool func_178(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_172();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_179(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_180(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_172();
	}
	else if (func_172() - uParam1->f_4) > func_278(uParam1)
	{
		return func_279(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_181(var uParam0, int iParam1)
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

void func_182(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_241(uParam0, 134217728);
	}
	else
	{
		func_243(uParam0, 134217728);
	}
}

void func_183(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_184(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(*uParam0))
	{
		if (!get_ped_config_flag(*uParam0, 186, true))
		{
			set_ped_config_flag(*uParam0, 186, true);
		}
		if (get_ped_config_flag(*uParam0, 223, true))
		{
			set_ped_config_flag(*uParam0, 223, false);
		}
		_0xe225cef1901f6108(*uParam0, iParam1);
	}
}

void func_185(int* iParam0, var uParam1)
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
	func_280(iParam0, uParam1, 1);
	func_142(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_186(var uParam0, int iParam1, bool bParam2)
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

void func_187(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_281(vVar0, 0);
}

void func_188(int* iParam0, bool bParam1, int iParam2)
{
	if (does_entity_exist(*iParam0))
	{
		if (bParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			delete_object(iParam0);
		}
	}
}

void func_189(int* iParam0, bool bParam1, int iParam2)
{
	if (does_entity_exist(*iParam0))
	{
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else if (!get_ped_config_flag(*iParam0, 186, true))
		{
			delete_ped(iParam0);
		}
	}
}

void func_190(var uParam0)
{
}

void func_191(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			set_model_as_no_longer_needed(&(uParam0->f_6[iVar0]));
		}
		iVar0++;
	}
}

void func_192(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			set_model_as_no_longer_needed(&(uParam0->f_22[iVar0]));
		}
		iVar0++;
	}
}

int func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 2048:
			switch (iParam1)
			{
				case 0:
				case 1:
					break;
				case 2:
					break;
				default:
					break;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				if (!func_43(uParam0->f_3, 4))
				{
					return -1206647372;
				}
			}
			break;
		case 262144:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return -2023583790;
					default:
						break;
				}
			}
			break;
		case 65536:
			break;
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
		default:
			break;
	}
	return 0;
}

Vector3 func_194(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return 1984.534f, 1192.017f, 170.403f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 182
			switch (iParam1)
			{
				case 0:
					return 1189.531f, -103.881f, 94.897f;
				default:
					break;
			}
			Jump @255; //curOff = 220
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 246
			return 0f, 0f, 0f;
		}

float func_195(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return -110f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 156
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 180
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 204
			return 0f;
		}

float func_196(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			break;
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 3f;
				default:
					break;
			}
			Jump @150; //curOff = 141
			return 0f;
		}

int func_197(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

bool func_198()
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

int func_199(int iParam0)
{
	if (!func_125(iParam0))
	{
		return -1;
	}
	return func_283(func_282(iParam0));
}

bool func_200(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_201(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_202(bool bParam0, bool bParam1, bool bParam2)
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

float func_203()
{
	iVar6 = func_284();
	iVar4 = func_285(iVar6);
	iVar5 = func_286(iVar6);
	iVar3 = func_287(iVar5, iVar4);
	iVar2 = func_288(iVar6);
	iVar1 = func_289(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

bool func_204(int iParam0, float fParam1)
{
	iVar0 = func_290(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_291(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_205(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_206(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_91(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_292(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_293(iVar0, bParam8);
	return iVar0;
}

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_294(iParam1))
		{
			func_40(iParam0, 41788943);
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
			func_295(iParam0, 0, 1);
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
			func_296(iParam0, 0);
			bVar0 = true;
		}
		func_297(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_208(var uParam0, int iParam1)
{
	if ((does_entity_exist(*uParam0) && !is_entity_dead(*uParam0)) && !has_collision_loaded_around_entity(*uParam0))
	{
		return false;
	}
	return true;
}

void func_209(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
	{
		_0x0eabf182fbb63d72(*uParam0, iParam1, 1);
	}
}

void func_210(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[2], func_298(uParam0, 2), iParam1);
					break;
				case 1:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					break;
				case 2:
					if (!func_43(uParam0->f_3, 4))
					{
						func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
						func_301(uParam0->f_36[iParam1], uParam0->f_29[0], func_300(uParam0, 0), iParam1);
					}
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					break;
			}
			break;
		case 8192:
			if (!func_43(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_99(func_98(uParam0->f_5), 4) && !func_99(func_98(uParam0->f_5), 2)) && !func_99(func_98(uParam0->f_5), 8))
							{
								func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
							}
							break;
						case 1:
							if (!func_99(func_98(uParam0->f_5), 4))
							{
								func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
								func_299(uParam0->f_36[iParam1], uParam0->f_13[2], func_298(uParam0, 2), iParam1);
								func_299(uParam0->f_36[iParam1], uParam0->f_13[3], func_298(uParam0, 3), iParam1);
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[2], func_298(uParam0, 2), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[3], func_298(uParam0, 3), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[4], func_298(uParam0, 4), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[5], func_298(uParam0, 5), iParam1);
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[2], func_298(uParam0, 2), iParam1);
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[2], func_298(uParam0, 2), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[3], func_298(uParam0, 3), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[4], func_298(uParam0, 4), iParam1);
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					func_299(uParam0->f_36[iParam1], uParam0->f_13[1], func_298(uParam0, 1), iParam1);
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					func_299(uParam0->f_36[iParam1], uParam0->f_13[0], func_298(uParam0, 0), iParam1);
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
}

bool func_211(int iParam0)
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

void func_212(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_213(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_214(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (bParam1)
	{
		func_303(iParam0, 4);
		func_304(iVar0, 1);
		func_305(iVar0, 1);
	}
	else
	{
		func_306(iParam0, 4);
		func_305(iVar0, 0);
	}
}

void func_215(int* iParam0, char* sParam1)
{
	if (func_211(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_213(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_307(iParam0, 1);
}

void func_216(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = uParam1;
}

void func_217(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_308() - fParam1);
	func_309(uParam0, 1);
	func_310(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_218(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_219(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_220(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_311(iParam0, iParam1))
		{
			if (!func_312(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_142(uParam2, 0, 0, 1, 0);
				func_241(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_312(iParam1->f_10, 1))
		{
			func_313(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_243(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_221(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_312(iParam4, 32);
		func_280(iParam1, uParam2, 0);
		iVar5 = func_314(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_142(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_312(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_312(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_312(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_312(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_312(iParam4, 8388608) || func_312(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_312(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_312(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_223(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_223(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_312(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_315(iParam0);
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
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_312(iParam4, 268435456))
			{
				iVar8 = func_316(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_317(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_223(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_312(iParam4, 2) || func_312(iParam4, 16))
			{
				func_222(*iParam0, 1, 1);
			}
			else
			{
				func_222(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_222(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_223(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_224(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_318(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_225(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_319(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_312(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_226(int iParam0)
{
	if (func_312(iParam0, 4))
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
	if (func_312(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_312(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_227(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_320(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_321(Global_35)) || func_322(Global_35)) || func_323(Global_35));
	fVar12 = -1f;
	if (func_324(&(iParam1->f_13)))
	{
		fVar12 = func_325(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_211((*uParam4)[iVar0]->f_6);
		func_326(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_327(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_328(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_142(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_329(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_280(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_330(iParam1, fParam6, iParam1->f_9))
					{
						func_127(&(iParam1->f_18));
						if (bVar6)
						{
							func_329(uParam4, 0, 0);
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
		func_331(iParam1, fParam2);
	}
	return bVar5;
}

void func_228(var uParam0)
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

void func_229(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_332((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_331(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_230(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_333(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_334(iParam1, 0);
				func_280(iParam1, uParam2, func_223(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_231(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_127(&(iParam1->f_18));
			return 0;
		}
		else if (func_324(&(iParam1->f_18)))
		{
			func_237(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_324(&(iParam1->f_18)))
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
	return func_335(&(iParam1->f_18), fParam2);
	return 1;
}

void func_232(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_326(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_233(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_234(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_336(iParam0, 13))
	{
		func_337(iParam0, 0);
	}
	else
	{
		func_307(iParam0, 0);
	}
	if (func_211(iParam0->f_6))
	{
		if (bParam2)
		{
			func_236(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_235(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_236(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_211(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_302(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_338(iVar0);
	*uParam0 = 0;
}

void func_237(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_238(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_239(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_339();
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
			func_340(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_240(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_242(bool bParam0)
{
	if (func_341(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

void func_243(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_244(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_147() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_342(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_342(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_273(iVar0) == -1)
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

void func_245(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_343(uParam0);
	}
}

bool func_246(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_273(iParam2);
	}
	else
	{
		iVar1 = func_272(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_273(iParam0);
	}
	else
	{
		iVar0 = func_272(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_312(*uParam1, 8388608))
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

float func_247(int iParam0, int iParam1)
{
	return func_268(iParam0, iParam1, 1, 1);
}

float func_248(var uParam0)
{
	return uParam0->f_26;
}

bool func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_250()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_251(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_268(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_344(iVar0, 0)))
		{
			if (func_345(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_252(var uParam0)
{
	return uParam0->f_17;
}

bool func_253(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_312(*uParam0, 4194304))
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

int func_254(var uParam0)
{
	return uParam0->f_18;
}

bool func_255(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_344(iVar0, 0)))
		{
			if (func_346(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_256(var uParam0)
{
	return uParam0->f_23;
}

int func_257(var uParam0)
{
	return uParam0->f_21;
}

int func_258(var uParam0)
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

bool func_259(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_347(iParam0, vParam4, 0.5f))
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

int func_260(int iParam0)
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
	if (func_348(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_261(int iParam0)
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

bool func_262(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_349(iParam1))
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

bool func_263(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_349(iParam1))
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

bool func_264(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_349(iParam1))
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

bool func_265(int iParam0, int iParam1)
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

bool func_266(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_350(iParam0, 1, 0, 0) != 2055893578)
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

bool func_267(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_268(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_269(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_270(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_270(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_271(var uParam0)
{
	return uParam0->f_24;
}

int func_272(int iParam0)
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

int func_273(int iParam0)
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

int func_274(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_265(Global_35, &iVar1))
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
		fVar2 = func_268(iParam0, player_ped_id(), 0, 1);
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
		if (func_268(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_275(int iParam0, var uParam1, bool bParam2)
{
	func_341(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_276(uParam1, iVar0))
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
				if (!bParam2 || !func_276(uParam1, iVar1))
				{
					if (func_270(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_276(var uParam0, int iParam1)
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

int func_277(int iParam0)
{
	if (func_66())
	{
		return 0;
	}
	return func_351((*Global_1347702)[58]->f_15, 1);
}

int func_278(var uParam0)
{
	return uParam0->f_20;
}

int func_279(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_280(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_236(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_143(iParam0, 0);
		}
	}
}

void func_281(vector3 vParam0, int iParam3)
{
	if (func_91(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_352(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_282(int iParam0)
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

int func_283(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_284()
{
	return &Global_1899515;
}

int func_285(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_353(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_286(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_287(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_354(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_288(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_289(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		default:
			break;
	}
	return 0;
}

float func_291(int iParam0)
{
	iVar0 = func_290(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

bool func_292(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_293(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_294(int iParam0)
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

void func_295(int iParam0, int iParam1, bool bParam2)
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

void func_296(int iParam0, bool bParam1)
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

void func_297(int iParam0, int iParam1)
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

char* func_298(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_43(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return "male";
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return "Starved_Boy_Bed";
				case 1:
					return "Starved_Boy_Floor";
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return "male";
				case 1:
					return "Husband";
				case 2:
					return "Horse01";
				case 3:
					return "Horse01^1";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "Civil_War_Bride";
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return "Settler";
				case 1:
					return "Settler^1";
				case 2:
					return "Settler^2";
				case 3:
					return "Settler^3";
				case 4:
					return "Settler^4";
				case 5:
					return "Settler^5";
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return "A_M_M_UNICORPSE_01";
				case 1:
					return "A_F_M_UNICORPSE_01";
				case 2:
					return "A_F_M_UNICORPSE_01^1";
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return "male01";
				case 1:
					return "male";
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return "Father";
				case 1:
					return "Grandfather";
				case 2:
					return "Grandmother";
				case 3:
					return "Mother";
				case 4:
					return "Son";
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return "Male01";
				case 1:
					return "Male02";
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return "mountainman";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_299(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			if (!is_string_null_or_empty(sParam2))
			{
				if (!is_entity_dead(*uParam1))
				{
					if (_0x6f1f0b17109309da(*uParam0, sParam2))
					{
						set_anim_scene_entity(*uParam0, sParam2, *uParam1, 0);
					}
				}
			}
		}
	}
}

char* func_300(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return "chain";
				default:
					break;
			}
			break;
		case 131072:
			break;
		case 8192:
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return "p_crutchjoe01x";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 256:
		case 512:
		case 1024:
		case 2048:
		case 16384:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_301(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			if (!is_string_null_or_empty(sParam2))
			{
				if (!is_entity_dead(*uParam1))
				{
					if (_0x6f1f0b17109309da(*uParam0, sParam2))
					{
						set_anim_scene_entity(*uParam0, sParam2, *uParam1, 0);
					}
				}
			}
		}
	}
}

int func_302(int iParam0)
{
	return iParam0;
}

void func_303(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_304(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_355(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_306(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_307(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

float func_308()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_311(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_356((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_312(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_313(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_332((*uParam0)[iVar0]))
		{
			func_337((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_314(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_357(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_211((*uParam2)[iVar0]->f_6))
		{
			func_337((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	iVar0 = func_358(*iParam0);
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

int func_316(var uParam0, int iParam1)
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

void func_317(int* iParam0, int* iParam1)
{
	if (!func_223(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_337(iParam1, 19);
			func_334(iParam0, 23);
			func_359(iParam1, 2);
		}
	}
}

bool func_318(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_360(16))
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
					func_361(16);
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

void func_319(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_357(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_320(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_321(int iParam0)
{
	return (func_362(iParam0, 4) || func_362(iParam0, 5));
}

int func_322(int iParam0)
{
	return func_362(iParam0, 7);
}

int func_323(int iParam0)
{
	return func_362(iParam0, 6);
}

bool func_324(var uParam0)
{
	return func_363(*uParam0, 1);
}

float func_325(var uParam0)
{
	if (!func_324(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_364(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_308() - uParam0->f_1);
}

void func_326(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_332(iParam1))
		{
			clear_bit(iParam1, 14);
			func_357(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_327(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_365(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_366(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_214(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_214(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_367(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_328(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_368(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_369(iParam1, 1))
	{
		func_370(iParam1, 1);
		return true;
	}
	return false;
}

void func_329(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_234((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_330(int* iParam0, float fParam1, bool bParam2)
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

void func_331(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_332(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_333(int iParam0)
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

void func_334(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_335(var uParam0, float fParam1)
{
	if (func_371(uParam0, fParam1))
	{
		func_237(uParam0);
		return 1;
	}
	return 0;
}

bool func_336(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_337(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_338(int iParam0)
{
	if (!func_372(iParam0))
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

bool func_339()
{
	if (func_373())
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

void func_340(var uParam0, var uParam1)
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

bool func_341(bool bParam0, int iParam1, int iParam2)
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

int func_342(var uParam0)
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

void func_343(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_243(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_241(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_344(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_345(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_346(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_346(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_347(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_348(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_349(int iParam0)
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

int func_350(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_351(int iParam0, bool bParam1)
{
	switch (func_374(iParam0))
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

bool func_352(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_353(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_354(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

bool func_355(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_356(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_357(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_211(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_236(&(iParam1->f_6), 0, 1);
	}
	if (!func_211(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_332(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_375(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_211(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_367(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_376(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_377(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_212(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_376(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_214(iParam1->f_6, 0, 1);
				}
				else
				{
					func_214(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_358(int iParam0)
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

void func_359(int* iParam0, int iParam1)
{
	if (!func_336(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_337(iParam0, 14);
		}
	}
}

bool func_360(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_361(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_362(int iParam0, int iParam1)
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

bool func_363(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_364(var uParam0)
{
	return func_363(*uParam0, 2);
}

bool func_365(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_366(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	return !func_355(iParam0, 4);
}

void func_367(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	func_376(iParam0, 18, 0, 1);
	func_376(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_368(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_302(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_369(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_302(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_370(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_371(var uParam0, float fParam1)
{
	if (!func_324(uParam0))
	{
		return false;
	}
	if (func_325(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_372(int iParam0)
{
	return func_355(iParam0, 2);
}

bool func_373()
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

int func_374(int iParam0)
{
	if (!func_125(iParam0))
	{
		return -1;
	}
	return func_378(iParam0);
}

int func_375(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_355(iVar0, 2))
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
				func_379(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_376(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_377(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_378(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_379(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_304(iParam0, 1);
	func_305(iParam0, 1);
	func_306(iParam0, 128);
}

int func_380(int iParam0)
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

