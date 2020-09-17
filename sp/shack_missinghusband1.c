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
	if (!func_41(uParam0->f_3, 4))
	{
		if (!uParam0->f_48)
		{
			if (!func_41(Local_73.f_5, 1))
			{
				if (!is_entity_dead(&(uParam0->f_29[0])))
				{
					freeze_entity_position(&(uParam0->f_29[0]), true);
					_0x78b4567e18b54480(&(uParam0->f_29[0]));
				}
			}
			return true;
		}
		else
		{
			if (func_42(uParam0))
			{
				if (!func_41(Local_73.f_4, 1))
				{
					if (!func_41(Local_73.f_5, 4))
					{
						if (func_43(uParam0))
						{
							func_44(uParam0, 1, 1);
							func_44(uParam0, 2, 1);
							func_44(uParam0, 3, 1);
							if (!is_entity_dead(&(uParam0->f_13[1])))
							{
								func_45(&(uParam0->f_13[1]));
								func_46(&(uParam0->f_13[1]), 0);
								func_48(&(uParam0->f_13[1]), func_47(uParam0, 1), 1, 0);
								_0x6569f31a01b4c097(&(uParam0->f_13[1]), 4, 1);
								_0x18ff3110cf47115d(&(uParam0->f_13[1]), 10, 1);
							}
							func_49(uParam0, uParam0->f_36[1], 1);
						}
					}
					if ((!func_41(Local_73.f_5, 2) && !func_41(Local_73.f_5, 4)) && !func_41(Local_73.f_5, 8))
					{
						if (does_entity_exist(&(uParam0->f_13[0])))
						{
							set_entity_visible(&(uParam0->f_13[0]), true);
							set_blocking_of_non_temporary_events(&(uParam0->f_13[0]), false);
							stop_ped_speaking(&(uParam0->f_13[0]), true);
							_0xa3db37edf9a74635(player_id(), &(uParam0->f_13[0]), 7, 1, 1);
							_0xa3db37edf9a74635(player_id(), &(uParam0->f_13[0]), 19, 1, 1);
							_0xa3db37edf9a74635(player_id(), &(uParam0->f_13[0]), 20, 1, 1);
							set_ped_config_flag(&(uParam0->f_13[0]), 330, true);
							set_ped_config_flag(&(uParam0->f_13[0]), 413, true);
							set_ped_config_flag(&(uParam0->f_13[0]), 130, false);
						}
						if (does_entity_exist(&(uParam0->f_13[4])))
						{
							set_entity_visible(&(uParam0->f_13[4]), true);
						}
						if (does_entity_exist(&(uParam0->f_13[0])))
						{
							func_49(uParam0, uParam0->f_36[0], 0);
						}
					}
					func_50(&(Local_73.f_4), 1);
				}
				else
				{
					return true;
				}
			}
			if (!func_41(Local_73.f_5, 8))
			{
				if (does_entity_exist(&(uParam0->f_29[1])) && !is_entity_dead(&(uParam0->f_29[1])))
				{
					freeze_entity_position(&(uParam0->f_29[1]), true);
					_0x78b4567e18b54480(&(uParam0->f_29[1]));
				}
			}
		}
	}
	else if (!func_41(uParam0->f_3, 8))
	{
		if (!func_41(Local_73.f_5, 16))
		{
			if (!is_entity_dead(&(uParam0->f_29[0])))
			{
				freeze_entity_position(&(uParam0->f_29[0]), true);
				_0x78b4567e18b54480(&(uParam0->f_29[0]));
			}
		}
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

void func_13(var uParam0)
{
	if (func_41(uParam0->f_3, 2048) && !func_41(uParam0->f_3, 64))
	{
		func_50(&(uParam0->f_3), 64);
	}
	else if (func_41(uParam0->f_3, 1024) && !func_41(uParam0->f_3, 32))
	{
		func_50(&(uParam0->f_3), 32);
	}
	else if (func_41(uParam0->f_3, 512) && !func_41(uParam0->f_3, 16))
	{
		func_50(&(uParam0->f_3), 16);
	}
	else if (func_41(uParam0->f_3, 256) && !func_41(uParam0->f_3, 8))
	{
		func_50(&(uParam0->f_3), 8);
	}
	else if (func_41(uParam0->f_3, 128) && !func_41(uParam0->f_3, 4))
	{
		func_50(&(uParam0->f_3), 4);
	}
	func_51(&(uParam0->f_5), &(uParam0->f_3));
}

void func_14(var uParam0)
{
}

int func_15()
{
	return 18;
}

int func_16(int iParam0)
{
	if (!func_52(iParam0))
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
	if (Local_73 > 0 && Local_73 < 9)
	{
		func_53(uParam0);
		if (!func_41(uParam0->f_3, 8192))
		{
			if (((_does_volume_exist(uParam0->f_46) && is_entity_in_volume(Global_35, uParam0->f_46, true, 0)) || func_54(Global_35, func_32(uParam0, 0), 10f, 1, 1)) || func_54(Global_35, func_32(uParam0, 1), 10f, 1, 1))
			{
				func_55(uParam0);
			}
		}
	}
	switch (Local_73)
	{
		case 0:
			if (!func_41(uParam0->f_3, 4))
			{
				if (!uParam0->f_48)
				{
					if (!func_41(Local_73.f_5, 1))
					{
						func_56(&Local_73, 1, 1);
					}
					else
					{
						func_56(&Local_73, 8, 1);
					}
				}
				else if (!func_41(Local_73.f_5, 4) || !func_41(Local_73.f_5, 8))
				{
					if ((!func_41(Local_73.f_5, 2) && !func_41(Local_73.f_5, 4)) && !func_41(Local_73.f_5, 8))
					{
						func_57(&(Local_73.f_14), &(uParam0->f_36[0]));
						func_58(&(Local_73.f_14), 1);
						func_59(uParam0, &Local_73);
						func_56(&Local_73, 2, 1);
					}
					else
					{
						func_56(&Local_73, 6, 1);
					}
				}
				else
				{
					func_56(&Local_73, 8, 1);
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				func_56(&Local_73, 7, 1);
			}
			else
			{
				func_56(&Local_73, 8, 1);
			}
			break;
		case 1:
			func_60(uParam0, &Local_73);
			break;
		case 2:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_63(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 3:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_65(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 4:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_66(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 5:
			func_61(uParam0, &Local_73);
			func_67(uParam0, &Local_73);
			func_64(uParam0, &Local_73);
			break;
		case 6:
			func_64(uParam0, &Local_73);
			break;
		case 7:
			func_60(uParam0, &Local_73);
			break;
		case 8:
			break;
		case 9:
			break;
	}
	return false;
}

void func_19(var uParam0)
{
	func_68(uParam0);
	func_69(uParam0);
	func_70(uParam0, 0);
	func_71(uParam0, 0);
	func_72(uParam0);
	func_73(uParam0);
	func_74(uParam0);
	if (is_thread_active(*uParam0, false))
	{
		terminate_thread(*uParam0);
	}
}

void func_20(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_46))
	{
		if (!func_76(func_75(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = _create_volume_cylinder_with_custom_name(func_75(uParam0), func_77(uParam0), func_78(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = _create_volume_box_with_custom_name(func_75(uParam0), func_77(uParam0), func_78(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (_does_volume_exist(uParam0->f_46))
		{
			_0x18262cafebb5fbe1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	func_79(uParam0);
	if (func_80(uParam0))
	{
		if (_does_volume_exist(uParam0->f_46))
		{
			if (!_0x91a5f9cbebb9d936(uParam0->f_45))
			{
				uParam0->f_45 = _0x4c39c95ae5db1329(uParam0->f_46, 0, 15);
			}
		}
	}
}

void func_21(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!func_81(uParam0, iVar0))
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
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = -1737978570;
				uParam0->f_6[1] = 1282171014;
				uParam0->f_6[2] = 1282171014;
				uParam0->f_22[0] = -1273905068;
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				if (!func_82(-1282804314))
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
			if (!func_41(uParam0->f_3, 4))
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
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_84(func_83(uParam0->f_5), 4) || !func_84(func_83(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!func_84(func_83(uParam0->f_5), 2) && !func_85(128, 0, 1)) && !func_86(get_player_index(), 1, 1, 1)) && !func_87()) && !func_88(20)) && !func_84(func_83(uParam0->f_5), 4)) && !func_84(func_83(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = 1385399145;
							uParam0->f_6[4] = -1038436471;
						}
						if (!func_84(func_83(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = 1282171014;
							uParam0->f_6[2] = -1038436471;
							uParam0->f_6[3] = -1038436471;
						}
						if (!func_84(func_83(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = 1605749521;
						}
					}
				}
				else if (!func_84(func_83(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = 1605749521;
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = 1605749521;
			}
			break;
		case 4096:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = -449588556;
				uParam0->f_6[2] = -449588556;
				uParam0->f_6[3] = 98537260;
				uParam0->f_6[4] = 98537260;
			}
			else if (func_89(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = -449588556;
			}
			break;
		case 256:
			if (!func_41(uParam0->f_3, 4))
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
			if (!func_41(uParam0->f_3, 4))
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
			if (func_89(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = 1282171014;
				uParam0->f_6[1] = 1282171014;
			}
			break;
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = 1282171014;
			}
			break;
		case 65536:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = 2062995136;
				if (!func_84(func_83(uParam0->f_5), 2))
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
	if (!func_41(uParam0->f_3, 4))
	{
		if (uParam0->f_48)
		{
			func_90(&(Local_73.f_128));
		}
	}
	func_91(uParam0, &Local_73);
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
		if (!is_string_null_or_empty(func_92(uParam0, iVar0, 0)))
		{
			if (!_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				if (func_93(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!is_string_null_or_empty(func_92(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_92(uParam0, iVar0, 0), iParam1, func_92(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_92(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				load_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
}

bool func_28(var uParam0)
{
	if (!func_94(uParam0) || !func_95(uParam0))
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
		if (!is_string_null_or_empty(func_92(uParam0, iVar0, 0)))
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
			if (!func_96(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
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
	if (!&uParam0->f_22[iParam7] == 0 && !func_76(vParam1))
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
					if (!func_41(uParam0->f_3, 4))
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
		if (func_98(iParam0, iParam1))
		{
			if (func_99(iParam0, iParam1))
			{
				if (func_100(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_101(iParam0);
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

bool func_41(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_42(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_102(uParam0->f_13[iVar0], iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return false;
	}
	func_103(uParam0, 5);
	return true;
}

void func_44(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(&(uParam0->f_13[iParam1])))
	{
		if (is_entity_dead(&(uParam0->f_13[iParam1])))
		{
		}
		func_104(uParam0->f_13[iParam1], iParam2);
		func_105(uParam0->f_13[iParam1], 0);
		set_ped_config_flag(&(uParam0->f_13[iParam1]), 26, true);
		_0xae6004120c18df97(&(uParam0->f_13[iParam1]), 1, 0);
		remove_all_ped_weapons(&(uParam0->f_13[iParam1]), true, true);
	}
}

void func_45(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "scripted_loot_only", true);
		_0x8c03cd6b5e0e85e8(iParam0, -1143637011);
	}
}

void func_46(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_106(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_47(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 4096:
			return -211871734;
		case 8192:
			if (iParam1 == 0)
			{
				return 643954294;
			}
			else if (iParam1 == 1)
			{
				return -1800171607;
			}
			break;
	}
	return 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_107(iParam0);
		func_108(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_49(var uParam0, var uParam1, int iParam2)
{
	if (!is_string_null_or_empty(func_92(uParam0, iParam2, 0)))
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				func_109(uParam0, uParam1, iParam2);
				start_anim_scene(*uParam1);
			}
		}
	}
}

void func_50(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

int func_51(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		func_112(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_52(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_53(var uParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		switch (&uLocal_230[iVar0])
		{
			case 0:
				func_113(uLocal_230[iVar0], 1);
				break;
			case 1:
				if (does_entity_exist(&(uParam0->f_13[iVar0])) && is_entity_dead(&(uParam0->f_13[iVar0])))
				{
					func_114(uParam0->f_13[iVar0], iVar0);
					set_entity_visible(&(uParam0->f_13[iVar0]), true);
					func_113(uLocal_230[iVar0], 7);
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

bool func_54(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_115(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_55(var uParam0)
{
	if (!func_41(uParam0->f_3, 8192))
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
		func_50(&(uParam0->f_3), 8192);
		func_117(func_116(1933084904), 1);
	}
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_118(&(uParam0->f_1));
	}
}

void func_57(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = func_119(iParam1);
	uParam0->f_4 = func_120(iParam1);
	uParam0->f_5 = func_121(iParam1);
	uParam0->f_6 = func_122(iParam1);
	uParam0->f_7 = func_123(iParam1);
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = func_124(iParam1);
}

void func_59(var uParam0, var uParam1)
{
	func_125(&(uParam1->f_14.f_13), &(uParam0->f_13[0]), "MH1_STRANGER", 0);
	if (func_126())
	{
		func_125(&(uParam1->f_14.f_13), Global_35, "JOHN", 0);
	}
	else
	{
		func_125(&(uParam1->f_14.f_13), Global_35, "ARTHUR", 0);
	}
}

void func_60(var uParam0, var uParam1)
{
	if (!func_127(uParam0))
	{
		if (does_entity_exist(&(uParam0->f_29[0])))
		{
			if (!is_entity_dead(&(uParam0->f_29[0])))
			{
				if (func_54(Global_35, func_36(uParam0, 0), 15f, 1, 1))
				{
					if (!func_41(uParam0->f_3, 4))
					{
						_0xa6a76d666a281f2d(&(uParam0->f_29[0]), 1790626285);
					}
					else if (!func_41(uParam0->f_3, 8))
					{
						_0xa6a76d666a281f2d(&(uParam0->f_29[0]), 452635242);
					}
				}
				if (_get_carrier_as_ped(&(uParam0->f_29[0])) == Global_35)
				{
					if (!func_41(uParam0->f_3, 4))
					{
						func_128(uParam0, uParam1, 1);
					}
					else
					{
						func_129(uParam0, uParam1);
					}
					func_56(uParam1, 8, 1);
				}
			}
		}
	}
}

void func_61(var uParam0, var uParam1)
{
	if (((does_entity_exist(&(uParam0->f_13[0])) && !is_entity_dead(&(uParam0->f_13[0]))) && does_entity_exist(Global_35)) && !is_entity_dead(Global_35))
	{
		uParam1->f_6 = func_130(Global_35, &(uParam0->f_13[0]), 0, 0);
	}
	else
	{
		uParam1->f_6 = 1E+07f;
	}
}

bool func_62(var uParam0, var uParam1)
{
	if (func_131(uParam0, uParam1))
	{
		func_132(uParam0, uParam1, 1, 1);
		func_56(uParam1, 5, 1);
		return true;
	}
	return false;
}

void func_63(var uParam0, var uParam1)
{
	if (func_133(&(uParam1->f_14), &(uParam1->f_4), 2))
	{
		iVar0 = func_134(uParam0);
		if (func_135(uParam1, 10f))
		{
			if (func_136())
			{
				func_58(&(uParam1->f_14), 5);
			}
			else if (iVar0 == 2)
			{
				func_58(&(uParam1->f_14), 4);
			}
			else
			{
				func_58(&(uParam1->f_14), 3);
			}
			func_137(uParam0, uParam1);
			func_56(uParam1, 3, 1);
		}
		else if (func_135(uParam1, 17f))
		{
			if (func_136())
			{
				func_58(&(uParam1->f_14), 5);
				func_56(uParam1, 3, 1);
			}
			else if (iVar0 == 2)
			{
				if (func_138(&(uParam1->f_14)) == 7)
				{
					func_58(&(uParam1->f_14), 0);
				}
				else
				{
					func_137(uParam0, uParam1);
					func_58(&(uParam1->f_14), 7);
				}
			}
			else if (func_138(&(uParam1->f_14)) == 6)
			{
				func_58(&(uParam1->f_14), 0);
			}
			else
			{
				func_137(uParam0, uParam1);
				func_58(&(uParam1->f_14), 6);
			}
		}
		else if (func_135(uParam1, 35f) && !func_136())
		{
			if (iVar0 == 2)
			{
				if (func_138(&(uParam1->f_14)) == 9)
				{
					func_58(&(uParam1->f_14), 0);
				}
				else
				{
					func_137(uParam0, uParam1);
					func_58(&(uParam1->f_14), 9);
				}
			}
			else if (func_138(&(uParam1->f_14)) == 8)
			{
				func_58(&(uParam1->f_14), 0);
			}
			else
			{
				func_137(uParam0, uParam1);
				func_58(&(uParam1->f_14), 8);
			}
		}
		else if (func_138(&(uParam1->f_14)) == 1)
		{
			func_58(&(uParam1->f_14), 2);
		}
		else
		{
			func_58(&(uParam1->f_14), 1);
		}
	}
}

void func_64(var uParam0, var uParam1)
{
	if ((!func_41(uParam1->f_4, 4) && !func_41(uParam1->f_5, 4)) && !func_127(uParam0))
	{
		if (does_entity_exist(&(uParam0->f_13[1])) && _0xef2d9ed7ce684f08(&(uParam0->f_13[1])) == Global_35)
		{
			func_50(&(uParam1->f_4), 4);
			func_128(uParam0, uParam1, 4);
			func_139(uParam0, 0);
		}
	}
	if (!func_127(uParam0))
	{
		if (!func_41(uParam1->f_5, 8))
		{
			if (does_entity_exist(&(uParam0->f_29[1])))
			{
				if (!is_entity_dead(&(uParam0->f_29[1])))
				{
					if (func_54(Global_35, func_36(uParam0, 1), 15f, 1, 1))
					{
						_0xa6a76d666a281f2d(&(uParam0->f_29[1]), 643954294);
						if (func_140())
						{
							if (func_141(643954294))
							{
								func_128(uParam0, uParam1, 8);
							}
						}
					}
				}
			}
		}
	}
}

void func_65(var uParam0, var uParam1)
{
	if (func_133(&(uParam1->f_14), &(uParam1->f_4), 2))
	{
		func_132(uParam0, uParam1, 0, 0);
		func_118(&(uParam1->f_8));
		func_56(uParam1, 4, 1);
	}
}

void func_66(var uParam0, var uParam1)
{
	if (!func_135(uParam1, 50f))
	{
		if (func_142(&(uParam1->f_8)))
		{
			func_143(&(uParam1->f_8));
		}
		func_56(uParam1, 6, 1);
	}
	if (uParam1->f_7 < 4)
	{
		if (func_135(uParam1, 9f))
		{
			if (func_142(&(uParam1->f_8)))
			{
				if (func_144(&(uParam1->f_8), 9f))
				{
					uParam1->f_7++;
					cVar0 = func_145(uParam1->f_7);
					if (!is_string_null_or_empty(cVar0))
					{
						func_147(&(uParam1->f_14.f_13), func_146(cVar0), 0, -1, 0, 0);
					}
				}
			}
			else
			{
				func_118(&(uParam1->f_8));
			}
		}
		else if (func_142(&(uParam1->f_8)))
		{
			func_143(&(uParam1->f_8));
		}
	}
}

void func_67(var uParam0, var uParam1)
{
	if (!func_41(uParam1->f_4, 8))
	{
		if (!func_142(&(uParam1->f_11)))
		{
			func_118(&(uParam1->f_11));
		}
		else if (func_144(&(uParam1->f_11), 3.5f))
		{
			func_147(&(uParam1->f_14.f_13), func_146("MH1_AGGRO_FLEE"), 0, -1, 0, 0);
			func_50(&(uParam1->f_4), 8);
		}
	}
	if (!func_135(uParam1, 50f))
	{
		func_56(uParam1, 6, 1);
	}
}

void func_68(var uParam0)
{
	if (does_entity_exist(&(uParam0->f_13[0])))
	{
		set_ped_keep_task(&(uParam0->f_13[0]), true);
		set_ped_as_no_longer_needed(uParam0->f_13[0]);
	}
	if (does_entity_exist(&(uParam0->f_13[4])))
	{
		set_ped_keep_task(&(uParam0->f_13[4]), true);
		set_ped_as_no_longer_needed(uParam0->f_13[4]);
	}
}

void func_69(var uParam0)
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

void func_70(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_148(uParam0->f_29[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_71(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_149(uParam0->f_13[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_92(uParam0, iVar0, 0)))
		{
			if (_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				_delete_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_73(var uParam0)
{
	if (_does_volume_exist(uParam0->f_46))
	{
		func_150(&(uParam0->f_45), uParam0->f_46, 0);
		_delete_volume(uParam0->f_46);
	}
	func_151(uParam0);
}

void func_74(var uParam0)
{
	func_152(uParam0);
	func_153(uParam0);
}

Vector3 func_75(var uParam0)
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

bool func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_77(var uParam0)
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

Vector3 func_78(var uParam0)
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

void func_79(var uParam0)
{
}

bool func_80(var uParam0)
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

bool func_81(var uParam0, int iParam1)
{
	if (!func_154(uParam0, iParam1) == 0 && !_does_scenario_point_exist(&(uParam0->f_41[iParam1])))
	{
		uParam0->f_41[iParam1] = create_scenario_point(func_154(uParam0, iParam1), func_155(uParam0, iParam1), func_156(uParam0, iParam1), func_157(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_82(int iParam0)
{
	iVar0 = func_158(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_83(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_159(iParam0);
}

bool func_84(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_85(int iParam0, bool bParam1, bool bParam2)
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
		if (func_160())
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
		iVar0 = func_161(&(Global_1898164->f_1[0]));
		if (func_162(iVar0) && func_163((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_111(&(Global_1898164->f_1[0])))
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

int func_86(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_164(bParam1, bParam2, bParam3);
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

bool func_87()
{
	return Global_1310750->f_16077 != 0;
}

bool func_88(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_89(var uParam0, float fParam1)
{
	fVar1 = func_165();
	if (func_166(uParam0->f_1, &fVar0))
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

void func_90(var uParam0)
{
	func_167(uParam0, 0);
	func_168(uParam0, 0);
	func_169(uParam0, 1);
	func_170(uParam0, 1);
	func_171(uParam0, 0);
	func_172(uParam0, 1);
	func_173(uParam0, 1, 1, 1);
}

void func_91(var uParam0, var uParam1)
{
	func_174(&(uParam0->f_5), &(uParam1->f_5));
}

char* func_92(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_41(uParam0->f_3, 4))
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
			else if (!func_41(uParam0->f_3, 8))
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
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_84(func_83(uParam0->f_5), 4) && !func_84(func_83(uParam0->f_5), 2)) && !func_84(func_83(uParam0->f_5), 8))
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
							if (!func_84(func_83(uParam0->f_5), 4))
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
			if (!func_41(uParam0->f_3, 4))
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
			if (!func_41(uParam0->f_3, 4) || func_89(uParam0, 1126694912))
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
			if (!func_41(uParam0->f_3, 4))
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
			if (func_89(uParam0, 1126694912))
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
			if (!func_41(uParam0->f_3, 4))
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

bool func_93(var uParam0, int iParam1)
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

bool func_94(var uParam0)
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

bool func_95(var uParam0)
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

bool func_96(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!func_41(uParam0->f_3, 4))
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

int func_97(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_175(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_98(int iParam0, int iParam1)
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

bool func_99(int iParam0, int iParam1)
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

bool func_100(int iParam0, int iParam1)
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
	if (!func_98(iParam0, iVar0))
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

void func_101(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_102(var uParam0, int iParam1)
{
	if ((does_entity_exist(*uParam0) && !is_entity_dead(*uParam0)) && !has_collision_loaded_around_entity(*uParam0))
	{
		return false;
	}
	return true;
}

void func_103(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_176(uParam0->f_13[iVar0], iParam1, iVar0);
		iVar0++;
	}
}

void func_104(var uParam0, int iParam1)
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

void func_105(var uParam0, int iParam1)
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

int func_106(int iParam0)
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

int func_107(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_108(int iParam0, var uParam1, var uParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	if (!is_string_null_or_empty(func_92(uParam0, iParam2, 0)))
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				func_177(uParam0, iParam2);
				if (!is_string_null_or_empty(func_92(uParam0, iParam2, 1)))
				{
					if (_0xa9016536015de29d(*uParam1, func_92(uParam0, iParam2, 1)))
					{
						_set_anim_scene_playback_list_bool(*uParam1, func_92(uParam0, iParam2, 1), true);
					}
				}
			}
		}
	}
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_111(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_112(int iParam0, var uParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_178(iParam0, uParam1);
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_114(var uParam0, int iParam1)
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

float func_115(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

struct<2> func_116(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_118(var uParam0)
{
	func_179(uParam0, 0f);
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 1:
			return "PBL_IDLE2";
		case 2:
			return "PBL_IDLE3";
		case 3:
			return "PBL_ACTION1_L";
		case 4:
			return "PBL_ACTION1_R";
		case 5:
			return "PBL_ACTION2";
		case 6:
			return "PBL_CALLOVER1_L";
		case 7:
			return "PBL_CALLOVER1_R";
		case 8:
			return "PBL_CALLOVER2_L";
		case 9:
			return "PBL_CALLOVER2_R";
		default:
			break;
	}
	return "";
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "IDLE_2";
		case 2:
			return "IDLE_3";
		case 3:
			return "ACTION1_L";
		case 4:
			return "ACTION1_R";
		case 5:
			return "ACTION2";
		case 6:
			return "CALLOVER1_L";
		case 7:
			return "CALLOVER1_R";
		case 8:
			return "CALLOVER2_L";
		case 9:
			return "CALLOVER2_R";
		default:
			break;
	}
	return "";
}

char* func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "base";
		case 2:
			return "base";
		case 3:
			return "ACTION1_L";
		case 4:
			return "ACTION1_R";
		case 5:
			return "ACTION2";
		case 6:
			return "base";
		case 7:
			return "base";
		case 8:
			return "base";
		case 9:
			return "base";
		default:
			break;
	}
	return "";
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		default:
			break;
	}
	return 2;
}

float func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.95f;
		case 1:
			return 0f;
		case 2:
			return 0f;
		case 3:
			return 0f;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 0f;
		case 9:
			return 0f;
		default:
			break;
	}
	return 0f;
}

char[] func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "";
		case 3:
		case 4:
		case 5:
			if (iParam0 == 5)
			{
				if (func_126())
				{
					return "MH1_HLP_ALTJ";
				}
				else
				{
					return "MH1_HLP_ALT";
				}
			}
			else if (func_126())
			{
				return "MH1_HLP_JOHN";
			}
			else
			{
				return "MH1_HLP_ARTHUR";
			}
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			return "MH1_HEY";
	}
	return "";
}

void func_125(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_180(uParam0, iParam1, sParam2))
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

bool func_126()
{
	if (func_181() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_127(var uParam0)
{
	if (!func_41(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 8;
	}
	return func_41(uParam0->f_3, iVar0);
}

void func_128(var uParam0, var uParam1, int iParam2)
{
	func_50(&(uParam1->f_5), iParam2);
	if ((func_41(uParam1->f_5, 1) && func_41(uParam1->f_5, 4)) && func_41(uParam1->f_5, 8))
	{
		func_129(uParam0, uParam1);
	}
	func_182(uParam0, uParam1);
}

void func_129(var uParam0, var uParam1)
{
	if (!func_41(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 8;
	}
	if (!func_41(uParam0->f_3, iVar0))
	{
		func_50(&(uParam0->f_3), iVar0);
		func_51(&(uParam0->f_5), &(uParam0->f_3));
		func_183(uParam0->f_1, &(uParam1->f_127));
	}
}

float func_130(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_131(var uParam0, var uParam1)
{
	if (does_entity_exist(&(uParam0->f_13[0])) && func_184(&(uParam0->f_13[0]), 0, &(uParam1->f_128), &(uParam1->f_156), 0, 0))
	{
		return true;
	}
	if (does_entity_exist(&(uParam0->f_13[4])))
	{
		if (func_185(Global_35, &(uParam0->f_13[4]), 0) || func_184(&(uParam0->f_13[4]), 0, &(uParam1->f_128), &(uParam1->f_156), 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_132(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_128(uParam0, uParam1, 2);
	set_blocking_of_non_temporary_events(&(uParam0->f_13[0]), false);
	if (bParam3)
	{
		func_186(1, 0, 0);
	}
	if (bParam2)
	{
		fVar1 = 1.5f;
	}
	else
	{
		fVar1 = 1f;
	}
	open_sequence_task(&iVar0);
	if (does_entity_exist(&(uParam0->f_13[4])))
	{
		if (!bParam3)
		{
			task_follow_nav_mesh_to_coord(0, get_entity_coords(&(uParam0->f_13[4]), true, false), fVar1, 20000, 3f, 1, 40000f);
			task_mount_animal(0, &(uParam0->f_13[4]), 20000, -1, fVar1, 1, 0, 0);
			_task_move_in_traffic_3(0, Global_35, 1.5f, 0, 0);
		}
		else
		{
			task_smart_flee_ped(0, Global_35, 6000f, -1, 0, 2f, &(uParam0->f_13[4]));
		}
	}
	else if (!bParam3)
	{
		_task_move_in_traffic_3(0, Global_35, 1.5f, 0, 0);
	}
	else
	{
		task_smart_flee_ped(0, Global_35, 6000f, -1, 0, 2f, 0);
	}
	func_187(&(uParam0->f_13[0]), &iVar0, 0, 0, 1, 1);
}

bool func_133(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_8)
	{
		return true;
	}
	if (func_188(uParam0))
	{
		if (func_189(uParam0, func_84(*uParam1, iParam2)))
		{
			func_190(uParam1, iParam2);
			return true;
		}
	}
	return false;
}

int func_134(var uParam0)
{
	return func_191(uParam0->f_13[0]);
}

bool func_135(var uParam0, float fParam1)
{
	if (uParam0->f_6 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_136()
{
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		if (vVar0.z <= 156.7f)
		{
			return true;
		}
	}
	return false;
}

void func_137(var uParam0, var uParam1)
{
	func_192(uParam0->f_13[0], &(uParam1->f_125), 4, 1515458263);
}

int func_138(var uParam0)
{
	return uParam0->f_1;
}

void func_139(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (func_96(uParam0, iVar0))
		{
			func_193(uParam0->f_13[iVar0], iParam1, iVar0);
		}
		iVar0++;
	}
}

bool func_140()
{
	iVar0 = _0xd04241bbf6d03a5e(Global_35);
	if (_does_scenario_point_exist(iVar0))
	{
		return true;
	}
	return false;
}

bool func_141(int iParam0)
{
	if (_0xd04241bbf6d03a5e(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar10) == -1730772208)
			{
				if (get_event_data(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

bool func_142(var uParam0)
{
	return func_194(*uParam0, 1);
}

void func_143(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_144(var uParam0, float fParam1)
{
	if (func_195(uParam0, fParam1))
	{
		func_143(uParam0);
		return true;
	}
	return false;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MH1_FOLLOW1";
		case 2:
			return "MH1_FOLLOW2";
		case 3:
			return "MH1_FOLLOW3";
		case 4:
			return "MH1_FOLLOW_FLEE";
		default:
			break;
	}
	return "";
}

Vector3 func_146(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_147(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_196(vParam1, uParam0);
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

void func_148(int* iParam0, bool bParam1, int iParam2)
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

void func_149(int* iParam0, bool bParam1, int iParam2)
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

void func_150(var uParam0, int iParam1, bool bParam2)
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

void func_151(var uParam0)
{
}

void func_152(var uParam0)
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

void func_153(var uParam0)
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

int func_154(var uParam0, int iParam1)
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
				if (!func_41(uParam0->f_3, 4))
				{
					return -1206647372;
				}
			}
			break;
		case 262144:
			if (!func_41(uParam0->f_3, 4))
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

Vector3 func_155(var uParam0, int iParam1)
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

float func_156(var uParam0, int iParam1)
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

float func_157(var uParam0, int iParam1)
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

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

bool func_160()
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

int func_161(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_198(func_197(iParam0));
}

bool func_162(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
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

float func_165()
{
	iVar6 = func_199();
	iVar4 = func_200(iVar6);
	iVar5 = func_201(iVar6);
	iVar3 = func_202(iVar5, iVar4);
	iVar2 = func_203(iVar6);
	iVar1 = func_204(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

bool func_166(int iParam0, float fParam1)
{
	iVar0 = func_205(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_206(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 16384);
	}
	else
	{
		func_208(&(uParam0->f_1), 16384);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 2048);
	}
	else
	{
		func_208(&(uParam0->f_1), 2048);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 256);
	}
	else
	{
		func_208(&(uParam0->f_1), 256);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 16);
	}
	else
	{
		func_207(uParam0, 67108864);
		func_207(uParam0, 16);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 128);
	}
	else
	{
		func_208(&(uParam0->f_1), 128);
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 256);
	}
	else
	{
		func_207(uParam0, 256);
	}
}

void func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_208(uParam0, 268435456);
	}
	else
	{
		func_207(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_208(uParam0, 1073741824);
	}
	else
	{
		func_207(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_208(uParam0, 536870912);
	}
	else
	{
		func_207(uParam0, 536870912);
	}
}

int func_174(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		*uParam1 = func_83(*uParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_175(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_209(iParam1))
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
			func_210(iParam0, 0, 1);
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
			func_211(iParam0, 0);
			bVar0 = true;
		}
		func_212(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
	{
		_0x0eabf182fbb63d72(*uParam0, iParam1, 1);
	}
}

void func_177(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					break;
				case 1:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
				case 2:
					if (!func_41(uParam0->f_3, 4))
					{
						func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
						func_216(uParam0->f_36[iParam1], uParam0->f_29[0], func_215(uParam0, 0), iParam1);
					}
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_84(func_83(uParam0->f_5), 4) && !func_84(func_83(uParam0->f_5), 2)) && !func_84(func_83(uParam0->f_5), 8))
							{
								func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
							}
							break;
						case 1:
							if (!func_84(func_83(uParam0->f_5), 4))
							{
								func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
								func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
								func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
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
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[4], func_213(uParam0, 4), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[5], func_213(uParam0, 5), iParam1);
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[4], func_213(uParam0, 4), iParam1);
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
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

void func_178(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = uParam1;
}

void func_179(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_217() - fParam1);
	func_218(uParam0, 1);
	func_219(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_180(var uParam0, int iParam1, char* sParam2)
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

int func_181()
{
	return Global_1572887->f_12;
}

void func_182(var uParam0, var uParam1)
{
	func_220(&(uParam0->f_5), &(uParam1->f_5));
}

int func_183(int iParam0, var uParam1)
{
	iVar0 = func_205(iParam0);
	if (iVar0 != 0)
	{
		*uParam1 = func_165();
		func_221(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_184(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_222(uParam2, 1, iVar0);
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
			if (func_223(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_225(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_226(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_227(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_86(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_228(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_229(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_230(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_231(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_231(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_232(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_233(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_234(uParam2, 4000))
				{
					if ((func_235(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_236(uParam2, iParam0)) && func_237(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_235(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_236(uParam2, iParam0)) && func_237(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_238(iParam0, Global_1935630->f_41))
							{
								func_239();
								*uParam3 = 2;
								func_224(iParam0, uParam2, *uParam3);
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
						if (func_238(iParam0, Global_1935630->f_41))
						{
							func_239();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_240(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_241() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_239();
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_242())
					{
						if (func_238(iParam0, Global_1935630->f_42))
						{
							func_239();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_243(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_244(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_245(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_246(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_247(uParam2, 4000))
				{
					if (func_248(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_249(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_250(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_185(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_187(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

bool func_188(var uParam0)
{
	if (uParam0->f_10)
	{
		return true;
	}
	if (func_251(uParam0))
	{
		if (!_0x23e33cb9f4a3f547(*uParam0, uParam0->f_2) && !_0x0df57f86fe71dbe5(*uParam0, uParam0->f_2))
		{
			func_252(uParam0, uParam0->f_2);
		}
		else if (_0x23e33cb9f4a3f547(*uParam0, uParam0->f_2) && !_0x1f0e401031e20146(*uParam0, uParam0->f_2))
		{
			_set_anim_scene_playback_list_bool(*uParam0, uParam0->f_2, true);
		}
		else if (_0x23e33cb9f4a3f547(*uParam0, uParam0->f_2) && _0x1f0e401031e20146(*uParam0, uParam0->f_2))
		{
			if (!uParam0->f_9)
			{
				if (!is_string_null_or_empty(uParam0->f_3) && !are_strings_equal(uParam0->f_3, uParam0->f_2))
				{
					_0xae6ada8fe7e84acc(*uParam0, uParam0->f_3);
				}
				uParam0->f_9 = 1;
			}
			iVar0 = func_253(uParam0->f_1);
			if (!func_84(uParam0->f_12, iVar0))
			{
				func_186(1, 0, 0);
				func_147(&(uParam0->f_13), func_146(func_124(uParam0->f_1)), 0, -1, 0, 0);
				func_110(&(uParam0->f_12), iVar0);
			}
			uParam0->f_10 = 1;
			return true;
		}
	}
	return false;
}

bool func_189(var uParam0, bool bParam1)
{
	if (uParam0->f_8)
	{
		return true;
	}
	if (bParam1)
	{
		uParam0->f_8 = 1;
		return true;
	}
	if (!func_251(uParam0))
	{
		uParam0->f_8 = 1;
		return true;
	}
	if (_0x23e33cb9f4a3f547(*uParam0, uParam0->f_2) && _0x1f0e401031e20146(*uParam0, uParam0->f_2))
	{
		switch (uParam0->f_6)
		{
			case 0:
				if (_0x8d81e7824b7753f7(*uParam0, uParam0->f_5, 1))
				{
					uParam0->f_8 = 1;
					return true;
				}
				break;
			case 1:
				if (_get_anim_scene_progress(*uParam0) >= uParam0->f_7)
				{
					uParam0->f_8 = 1;
					return true;
				}
				break;
		}
	}
	return false;
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_191(var uParam0)
{
	if (((does_entity_exist(*uParam0) && !is_entity_dead(*uParam0)) && does_entity_exist(Global_35)) && !is_entity_dead(Global_35))
	{
		vVar0 = { get_entity_coords(*uParam0, false, false) };
		fVar3 = get_entity_heading(*uParam0);
		if (func_254(Global_35, vVar0, fVar3, 1065353216))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_192(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (*uParam1 <= iParam2)
	{
		if (does_entity_exist(*uParam0))
		{
			force_sonar_blips_this_frame();
			allow_sonar_blips(true);
			_trigger_sonar_blip_2(iParam3, *uParam0);
			*uParam1++;
		}
	}
}

void func_193(var uParam0, int iParam1, int iParam2)
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

bool func_194(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_195(var uParam0, float fParam1)
{
	if (!func_142(uParam0))
	{
		return false;
	}
	if (func_255(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_197(int iParam0)
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

int func_198(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_199()
{
	return &Global_1899515;
}

int func_200(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_256(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_202(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_257(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_203(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_204(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_205(int iParam0)
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

float func_206(int iParam0)
{
	iVar0 = func_205(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_209(int iParam0)
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

void func_210(int iParam0, int iParam1, bool bParam2)
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

void func_211(int iParam0, bool bParam1)
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

void func_212(int iParam0, int iParam1)
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

char* func_213(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_41(uParam0->f_3, 4))
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
			Jump @674; //curOff = 528
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
			Jump @674; //curOff = 604
			switch (iParam1)
			{
				case 0:
					return "Male01";
				case 1:
					return "Male02";
				default:
					break;
			}
			Jump @674; //curOff = 641
			switch (iParam1)
			{
				case 0:
					return "mountainman";
				default:
					break;
			}
			Jump @674; //curOff = 665
			return "";
		}

void func_214(var uParam0, var uParam1, char* sParam2, int iParam3)
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

char* func_215(var uParam0, int iParam1)
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

void func_216(var uParam0, var uParam1, char* sParam2, int iParam3)
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

float func_217()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_220(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		func_258(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_221(int iParam0, var uParam1)
{
	iVar0 = func_205(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959[iVar0] = uParam1;
}

void func_222(var uParam0, bool bParam1, int iParam2)
{
	func_259(iParam2);
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
		uParam0->f_13 = func_260(0);
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
							func_208(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_261(1))
						{
							func_208(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_261(1) || *uParam0 & 8192 != 0))
				{
					func_207(uParam0, 33554432);
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
			if (func_262(uParam0))
			{
				uParam0->f_15 = func_241();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_241() - uParam0->f_15) > 500)
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
	func_263(uParam0);
}

bool func_223(int iParam0, var uParam1)
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
			if (!func_264(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_265(iParam0, iVar2) <= func_266(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_224(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_267(iParam2, 1, 1, 1, 0))
	{
		func_208(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_268(uParam1, 1);
	func_269();
}

bool func_225(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_270(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_271(uParam1);
			if (func_272(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_273(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_268(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_268(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_226(int iParam0, int iParam1, var uParam2)
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
	if (func_274(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_271(uParam2);
		if (func_272(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_273(uParam2)
				{
					func_268(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_227(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
	if (func_264(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_273(uParam1)
		{
			fVar3 = func_271(uParam1);
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

bool func_228(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_275(uParam2);
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
			if (func_237(uParam2, iParam1))
			{
				func_268(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_230(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_276(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_237(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_268(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_231(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_277(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_268(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_268(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_278(iParam1, vVar0, vVar4))
					{
						func_268(uParam2, 1);
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
					func_268(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_278(iParam1, vVar0, vVar7))
					{
						func_268(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_232(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_264(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_279(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_280(&(Global_1935630->f_34[iVar0])))
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
			if (func_281(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_282(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_283(uParam1, iParam0, fVar1, iVar0))
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

bool func_233(int iParam0, var uParam1)
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

bool func_234(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_235(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_284(iVar0, &iVar2))
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
	if (func_285(iVar0, iParam0))
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

int func_236(var uParam0, int iParam1)
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

bool func_237(var uParam0, int iParam1)
{
	if (func_286(uParam0))
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

bool func_238(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_130(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_239()
{
}

bool func_240(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_287(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_241();
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
						if (func_288(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_241();
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

int func_241()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_242()
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
	if ((func_241() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_243(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_266(uParam0);
	if (uParam0->f_12 > func_289(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_290(iParam1);
	iVar1 = func_291(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_244(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_292(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_245(int iParam0, var uParam1)
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
		if (func_293(iParam0, uParam1, 1))
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
					if (!func_294(uParam1, iParam0))
					{
						if (func_288(iVar4, Global_36, 1) < 7f)
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

bool func_246(int iParam0, var uParam1)
{
	if (!func_295(0))
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

bool func_247(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_249(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_241();
	}
	else if (func_241() - uParam1->f_4) > func_296(uParam1)
	{
		return func_297(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_250(var uParam0, int iParam1)
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

bool func_251(var uParam0)
{
	if (!_is_anim_scene_loaded(*uParam0, true, false))
	{
		return false;
	}
	if (_0x34a0671be613d3d0(*uParam0))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(*uParam0, true, false))
	{
		return false;
	}
	if (_is_anim_scene_finished(*uParam0, false))
	{
		return false;
	}
	if (!_is_anim_scene_started(*uParam0, false))
	{
		return false;
	}
	return true;
}

void func_252(var uParam0, char* sParam1)
{
	if (_0xa9016536015de29d(*uParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(*uParam0, sParam1);
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 0;
		case 3:
		case 4:
		case 5:
			return 4;
		case 6:
		case 7:
		case 8:
		case 9:
			return 2;
	}
	return 0;
}

bool func_254(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_298(vParam1, _get_object_offset_from_coords(vParam1, fParam4, 0f, fParam5, 0f), get_entity_coords(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

float func_255(var uParam0)
{
	if (!func_142(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_299(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_217() - uParam0->f_1);
}

int func_256(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_257(int iParam0, int iParam1)
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

void func_258(int iParam0, var uParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_300(iParam0, uParam1);
}

void func_259(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_301();
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
			func_302(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_260(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_261(bool bParam0)
{
	if (func_303(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_262(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_181() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_304(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_304(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_291(iVar0) == -1)
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

void func_263(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_305(uParam0);
	}
}

bool func_264(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_291(iParam2);
	}
	else
	{
		iVar1 = func_290(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_291(iParam0);
	}
	else
	{
		iVar0 = func_290(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_306(*uParam1, 8388608))
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

float func_265(int iParam0, int iParam1)
{
	return func_130(iParam0, iParam1, 1, 1);
}

float func_266(var uParam0)
{
	return uParam0->f_26;
}

bool func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_268(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 134217728);
	}
	else
	{
		func_207(uParam0, 134217728);
	}
}

void func_269()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_270(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_130(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_307(iVar0, 0)))
		{
			if (func_308(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_271(var uParam0)
{
	return uParam0->f_17;
}

bool func_272(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_306(*uParam0, 4194304))
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

int func_273(var uParam0)
{
	return uParam0->f_18;
}

bool func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_307(iVar0, 0)))
		{
			if (func_309(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_275(var uParam0)
{
	return uParam0->f_23;
}

int func_276(var uParam0)
{
	return uParam0->f_21;
}

int func_277(var uParam0)
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

bool func_278(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_310(iParam0, vParam4, 0.5f))
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

int func_279(int iParam0)
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
	if (func_311(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_280(int iParam0)
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

bool func_281(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_312(iParam1))
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

bool func_282(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_312(iParam1))
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

bool func_283(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_312(iParam1))
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

bool func_284(int iParam0, int iParam1)
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

bool func_285(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_313(iParam0, 1, 0, 0) != 2055893578)
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

bool func_286(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_287(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_288(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_288(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_289(var uParam0)
{
	return uParam0->f_24;
}

int func_290(int iParam0)
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

int func_291(int iParam0)
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

int func_292(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_284(Global_35, &iVar1))
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
		fVar2 = func_130(iParam0, player_ped_id(), 0, 1);
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
		if (func_130(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_293(int iParam0, var uParam1, bool bParam2)
{
	func_303(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_294(uParam1, iVar0))
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
				if (!bParam2 || !func_294(uParam1, iVar1))
				{
					if (func_288(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
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

int func_295(int iParam0)
{
	if (func_126())
	{
		return 0;
	}
	return func_314((*Global_1347702)[58]->f_15, 1);
}

int func_296(var uParam0)
{
	return uParam0->f_20;
}

int func_297(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_298(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_299(var uParam0)
{
	return func_194(*uParam0, 2);
}

void func_300(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = uParam1;
}

bool func_301()
{
	if (func_315())
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

void func_302(var uParam0, var uParam1)
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

bool func_303(bool bParam0, int iParam1, int iParam2)
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

int func_304(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
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

void func_305(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_207(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_208(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_306(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_307(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_308(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_309(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_309(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_310(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_311(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_312(int iParam0)
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

int func_313(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_314(int iParam0, bool bParam1)
{
	switch (func_316(iParam0))
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

bool func_315()
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

int func_316(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_317(iParam0);
}

int func_317(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_318(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_318(int iParam0)
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

