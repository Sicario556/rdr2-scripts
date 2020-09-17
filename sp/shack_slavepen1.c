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
		if (!func_41(Local_73.f_4, 1))
		{
			if (func_42(Global_35, func_36(uParam0, 0), 75f, 1, 1))
			{
				func_43(uParam0->f_29[0], 0, 0);
				if (func_44(uParam0, &(Local_73.f_5), 0, 7))
				{
					if (!is_entity_dead(&(uParam0->f_29[0])))
					{
						if (!_does_scenario_point_exist(&(uParam0->f_41[0])))
						{
							uParam0->f_41[0] = create_scenario_point_attached_to_entity(&(uParam0->f_29[0]), -1441376597, 0f, 0f, 0f, 0, 0, 0, 1);
							return true;
						}
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (!func_41(Local_73.f_4, 2))
		{
		}
	}
	return false;
}

void func_13(var uParam0)
{
	if (func_41(uParam0->f_3, 2048) && !func_41(uParam0->f_3, 64))
	{
		func_45(&(uParam0->f_3), 64);
	}
	else if (func_41(uParam0->f_3, 1024) && !func_41(uParam0->f_3, 32))
	{
		func_45(&(uParam0->f_3), 32);
	}
	else if (func_41(uParam0->f_3, 512) && !func_41(uParam0->f_3, 16))
	{
		func_45(&(uParam0->f_3), 16);
	}
	else if (func_41(uParam0->f_3, 256) && !func_41(uParam0->f_3, 8))
	{
		func_45(&(uParam0->f_3), 8);
	}
	else if (func_41(uParam0->f_3, 128) && !func_41(uParam0->f_3, 4))
	{
		func_45(&(uParam0->f_3), 4);
	}
	func_46(&(uParam0->f_5), &(uParam0->f_3));
}

void func_14(var uParam0)
{
}

int func_15()
{
	return 106;
}

int func_16(int iParam0)
{
	if (!func_47(iParam0))
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
	if (Local_73 > 0 && Local_73 < 2)
	{
	}
	switch (Local_73)
	{
		case 0:
			if (!func_41(uParam0->f_3, 4))
			{
				func_48(&Local_73, 1, 1);
			}
			else
			{
				func_48(&Local_73, 2, 1);
			}
			break;
		case 1:
			if (!func_41(uParam0->f_3, 8192))
			{
				if (_does_volume_exist(uParam0->f_46) && is_entity_in_volume(Global_35, uParam0->f_46, true, 0))
				{
					func_49(uParam0);
				}
			}
			if (!func_41(Local_73.f_4, 1))
			{
				if (_does_scenario_point_exist(&(uParam0->f_41[0])))
				{
					if (_0x9c54041bb66bcf9e(Global_35, &(uParam0->f_41[0])) && is_ped_active_in_scenario(Global_35, 0))
					{
						if (has_anim_event_fired(Global_35, get_hash_key("ObjectExchange")))
						{
							func_45(&(Local_73.f_4), 1);
							func_50(&(uParam0->f_5), &(Local_73.f_4));
							func_51(-671394593, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
				}
			}
			if (!func_41(Local_73.f_4, 2))
			{
				if (!is_entity_dead(&(uParam0->f_29[1])))
				{
					if (func_42(Global_35, func_36(uParam0, 1), 5f, 1, 1))
					{
						_0xa6a76d666a281f2d(&(uParam0->f_29[1]), -1614587680);
					}
				}
				if (func_52(-1614587680))
				{
					func_45(&(Local_73.f_4), 2);
					func_50(&(uParam0->f_5), &(Local_73.f_4));
				}
			}
			if (func_41(Local_73.f_4, 1) && func_41(Local_73.f_4, 2))
			{
				func_48(&Local_73, 2, 1);
			}
			break;
		case 2:
			if (!func_41(uParam0->f_3, 128))
			{
				func_45(&(uParam0->f_3), 128);
				func_46(&(uParam0->f_5), &(uParam0->f_3));
			}
			break;
	}
	return false;
}

void func_19(var uParam0)
{
	func_53(uParam0);
	func_54(uParam0);
	func_55(uParam0, 0);
	func_56(uParam0, 0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);
	if (is_thread_active(*uParam0, false))
	{
		terminate_thread(*uParam0);
	}
}

void func_20(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_46))
	{
		if (!func_61(func_60(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = _create_volume_cylinder_with_custom_name(func_60(uParam0), func_62(uParam0), func_63(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = _create_volume_box_with_custom_name(func_60(uParam0), func_62(uParam0), func_63(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (_does_volume_exist(uParam0->f_46))
		{
			_0x18262cafebb5fbe1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	func_64(uParam0);
	if (func_65(uParam0))
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
		if (!func_66(uParam0, iVar0))
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
				if (!func_67(-1282804314))
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
					if (!func_69(func_68(uParam0->f_5), 4) || !func_69(func_68(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!func_69(func_68(uParam0->f_5), 2) && !func_70(128, 0, 1)) && !func_71(get_player_index(), 1, 1, 1)) && !func_72()) && !func_73(20)) && !func_69(func_68(uParam0->f_5), 4)) && !func_69(func_68(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = 1385399145;
							uParam0->f_6[4] = -1038436471;
						}
						if (!func_69(func_68(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = 1282171014;
							uParam0->f_6[2] = -1038436471;
							uParam0->f_6[3] = -1038436471;
						}
						if (!func_69(func_68(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = 1605749521;
						}
					}
				}
				else if (!func_69(func_68(uParam0->f_5), 1))
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
			else if (func_74(uParam0, 1126694912))
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
			if (func_74(uParam0, 1126694912))
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
				if (!func_69(func_68(uParam0->f_5), 2))
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
	}
	Local_73.f_4 = func_68(uParam0->f_5);
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
		if (!is_string_null_or_empty(func_75(uParam0, iVar0, 0)))
		{
			if (!_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				if (func_76(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!is_string_null_or_empty(func_75(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_75(uParam0, iVar0, 0), iParam1, func_75(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = _create_anim_scene(func_75(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				load_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (_does_streamed_txd_exist(func_77(uParam0)))
	{
		_request_streamed_txd(func_77(uParam0), false);
	}
}

bool func_28(var uParam0)
{
	if (!func_78(uParam0) || !func_79(uParam0))
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
		if (!is_string_null_or_empty(func_75(uParam0, iVar0, 0)))
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
	if (_does_streamed_txd_exist(func_77(uParam0)) && !_has_streamed_txd_loaded(func_77(uParam0)))
	{
		return false;
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
			if (!func_80(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = func_81(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = func_81(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = func_81(&(uParam0->f_6[iParam5]), vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
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
	if (!&uParam0->f_22[iParam7] == 0 && !func_61(vParam1))
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
		if (func_82(iParam0, iParam1))
		{
			if (func_83(iParam0, iParam1))
			{
				if (func_84(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_85(iParam0);
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

bool func_42(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_86(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_43(int* iParam0, bool bParam1, int iParam2)
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

bool func_44(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (*uParam1 == 0)
	{
		*uParam1 = _0x6f3068258a499e52(&(uParam0->f_22[iParam2]), func_36(uParam0, iParam2), iParam3);
	}
	else if (_0x1ff441d7954f8709(*uParam1) && !does_entity_exist(&(uParam0->f_29[iParam2])))
	{
		uParam0->f_29[iParam2] = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(*uParam1));
		if (!is_entity_dead(&(uParam0->f_29[iParam2])))
		{
		}
	}
	if (does_entity_exist(&(uParam0->f_29[iParam2])))
	{
		return true;
	}
	return false;
}

void func_45(var uParam0, int iParam1)
{
	func_87(uParam0, iParam1);
}

int func_46(var uParam0, var uParam1)
{
	if (func_88(*uParam0))
	{
		func_89(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_47(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_90(&(iParam0->f_1));
	}
}

void func_49(var uParam0)
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
		func_45(&(uParam0->f_3), 8192);
		func_92(func_91(1933084904), 1);
	}
}

int func_50(var uParam0, var uParam1)
{
	if (func_88(*uParam0))
	{
		func_93(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (!func_95(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_96(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_97(iParam0, bParam2);
	iVar2 = 0;
	if (func_98(iParam0, 0, 0) == 0)
	{
		if (func_99(iParam0))
		{
			iVar5 = func_100(iParam0);
			iVar6 = func_101(iVar5);
			iVar7 = func_102(iVar6) + 1;
			func_103(iVar5);
			if (func_104(38))
			{
				func_105(483, 0);
			}
			else
			{
				func_105(482, 0);
			}
			if (iVar7 == func_106(iVar6))
			{
				func_51(func_107(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_108() && func_109(4))
				{
					if (func_108() && (func_110(38) || func_104(38)))
					{
						func_112(38, func_107(iVar6), 0, 0, func_111(), 0, -1, 0);
						func_113(2);
					}
					else
					{
						func_112(38, func_107(iVar6), 0, 0, func_111(), 0, -1, 0);
						func_113(1);
					}
				}
			}
			else if (func_108() && func_109(4))
			{
				if (func_108() && (func_110(38) || func_104(38)))
				{
					func_112(38, 0, 0, 0, func_111(), 0, -1, 0);
					func_113(2);
				}
				else
				{
					func_112(38, 0, 0, 0, func_111(), 0, -1, 0);
					func_113(1);
				}
			}
			if (func_108() && func_109(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_108() && (func_110(38) || func_104(38)))
					{
						func_114(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_114(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_115(iParam0) == -1037537535)
	{
		if ((!func_116(iParam0, 866047851) && !func_116(iParam0, -1979000645)) && !func_116(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_117(iParam0, 8388608) && !func_118(28))
	{
		func_119(28);
	}
	if (!bVar3)
	{
		if (func_116(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_120(iParam0) == -1447088266)
			{
				iVar1 = func_122(func_121(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_123() == -1)
					{
						func_124(iVar1);
					}
					if (func_125(0) && func_126(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_127(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_123() == -1)
					{
						func_124(iParam0);
					}
					if (func_125(0) && func_126(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_127(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_115(iParam0) == -427144552)
		{
			if (!func_128(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_115(iParam0) == 307971639 && func_129(iParam0))
		{
			if (!func_130(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_116(iParam0, 866047851))
		{
			func_131(iParam0);
		}
		else if (func_116(iParam0, 2000026003))
		{
			func_132(iParam0);
		}
		else if (func_116(iParam0, -103750053))
		{
			func_92(func_133(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_92(func_134(-717883113, 2091222383), iVar0);
		}
		else if (func_116(iParam0, -121341956) && !func_116(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_135((*Global_1835011)[4]->f_1, 1))
				{
					func_105(498, 0);
				}
			}
			if (func_116(iParam0, -2017733358) || func_116(iParam0, -1369131378))
			{
				func_136(iParam0);
			}
		}
		else if (func_116(iParam0, -136654233))
		{
			if (func_116(iParam0, -1021472396))
			{
			}
		}
		else if (func_116(iParam0, -1466706512) && func_116(iParam0, 1147021565))
		{
			func_105(484, 0);
		}
		else if (func_116(iParam0, 1147021565) && func_116(iParam0, -524514947))
		{
		}
		else if (func_116(iParam0, 554195525))
		{
		}
		else if (func_116(iParam0, 589988438))
		{
			if (func_137())
			{
				func_138(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_116(iParam0, 787083290) && func_116(iParam0, 949916894))
		{
			func_139(iParam0);
		}
		else if (func_116(iParam0, -1718133314))
		{
			func_140(iParam0);
		}
		else if (func_116(iParam0, -1738650224))
		{
			func_141(iParam0);
		}
		else if (func_116(iParam0, -1112814642) && func_116(iParam0, 949916894))
		{
			func_142(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_116(iParam0, 1841149704))
		{
			func_143();
		}
		else if (func_116(iParam0, 606799272))
		{
			func_144(iParam0, iParam1);
			func_145(iParam0);
		}
		else if (func_116(iParam0, -1112814642) && func_116(iParam0, -1697809989))
		{
			func_146(iParam0, 0, 0, 0);
		}
		else if (func_116(iParam0, -2017733358) || func_116(iParam0, -1369131378))
		{
			func_136(iParam0);
		}
		else if (func_116(iParam0, -1921346699))
		{
			if (func_123() != -1)
			{
				return 0;
			}
			func_147(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_116(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_148(215778062, 1, 0))
					{
						func_51(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_148(670273567, 1, 0))
					{
						func_51(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_148(-967317137, 1, 0))
					{
						func_51(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_148(526074061, 1, 0))
					{
						func_51(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_148(-1045488665, 1, 0))
					{
						func_51(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_148(471514780, 1, 0))
					{
						func_51(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_116(iParam0, -839724752) && func_117(iParam0, 4))
		{
			if (!func_104(42))
			{
				func_149(iParam0);
			}
		}
		else if (func_116(iParam0, 1399091007))
		{
			func_150(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_116(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_51(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_119(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_151(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_152(&iVar9, 0))
				{
					func_126(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_123() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_151(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_105(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_153();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_154();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_155();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_156();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_157();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_158(499813453, 854119837, 0);
				func_159(499813453, 0);
				func_160(1);
				break;
			case 2127812557:
				func_158(499813453, -1292544588, 0);
				func_159(499813453, 0);
				func_160(2);
				break;
			case 808991383:
				func_158(499813453, -1003325394, 0);
				func_159(499813453, 0);
				func_160(4);
				break;
			case 1134518629:
				func_158(666607663, -335460405, 0);
				func_159(666607663, 0);
				func_161(1);
				break;
			case 902940106:
				func_158(666607663, 903797617, 0);
				func_159(666607663, 0);
				func_161(2);
				break;
			case -418174898:
				func_158(666607663, 669728650, 0);
				func_159(666607663, 0);
				func_161(4);
				break;
			case -648114971:
				func_158(-220219788, 1214120047, 0);
				func_159(-220219788, 0);
				func_162(1);
				break;
			case 211153747:
				func_158(-220219788, 655769340, 0);
				func_159(-220219788, 0);
				func_162(2);
				break;
			case -32876996:
				func_158(-220219788, 885316185, 0);
				func_159(-220219788, 0);
				func_162(4);
				break;
			case 1191437462:
				func_158(218622660, -1491419385, 0);
				func_159(218622660, 0);
				func_163(1);
				break;
			case 1119149048:
				func_158(218622660, 1809565830, 0);
				func_159(218622660, 0);
				func_163(2);
				break;
			case 506073827:
				func_158(390004462, -628873767, 0);
				func_159(390004462, 0);
				func_164(1);
				break;
			case -1876986168:
				func_158(390004462, -405421956, 0);
				func_159(390004462, 0);
				func_164(2);
				break;
			case 2142623221:
				func_158(390004462, -1108972386, 0);
				func_159(390004462, 0);
				func_164(4);
				break;
			case 1508215381:
				func_158(6410548, 1053716392, 0);
				func_159(6410548, 0);
				func_165(1);
				break;
			case -888935280:
				func_158(6410548, 806507056, 0);
				func_159(6410548, 0);
				func_165(2);
				break;
			case -1252474566:
				func_158(6410548, 1571925350, 0);
				func_159(6410548, 0);
				func_165(4);
				break;
			case -1465702449:
				func_158(6410548, 1330352282, 0);
				func_159(6410548, 0);
				func_165(8);
				break;
			case -21093309:
				func_167(242, func_166(-21093309), 0);
				break;
			case 204375141:
				func_167(240, func_166(204375141), 0);
				break;
			case -417963070:
				func_167(241, func_166(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_168(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_105(488, 0);
				break;
			case 1613651027:
				func_105(491, 0);
				break;
			case -885810591:
				func_105(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_51(func_169(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_51(func_170(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_118(1))
				{
					func_105(487, 0);
				}
				break;
			case -898386032:
				func_105(486, 0);
				break;
			case -2035110427:
				if (func_123() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_105(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_171(&iVar10);
		if (!func_172(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_125(0))
		{
			return 1;
		}
		if (func_115(iParam0) == -1037537535)
		{
			func_173(iParam0);
		}
		if (func_116(iParam0, -1979000645))
		{
			func_174(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_125(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_51(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_175(iVar2, 0);
		}
	}
	Var35 = { func_176(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_177(iParam0);
	if (fParam6 > 0f)
	{
		if (func_116(iParam0, -839724752))
		{
			func_178(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_179(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_52(int iParam0)
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

void func_53(var uParam0)
{
	if (!Local_73.f_5 == 0 && _0x1ff441d7954f8709(Local_73.f_5))
	{
		_0xd2b9c78537ed5759(Local_73.f_5);
	}
	if (_does_streamed_txd_exist(func_77(uParam0)))
	{
		_set_streamed_txd_as_no_longer_needed(func_77(uParam0));
	}
}

void func_54(var uParam0)
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

void func_55(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_43(uParam0->f_29[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_56(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_180(uParam0->f_13[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_57(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_75(uParam0, iVar0, 0)))
		{
			if (_does_anim_scene_exist(&(uParam0->f_36[iVar0])))
			{
				_delete_anim_scene(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_58(var uParam0)
{
	if (_does_volume_exist(uParam0->f_46))
	{
		func_181(&(uParam0->f_45), uParam0->f_46, 0);
		_delete_volume(uParam0->f_46);
	}
	func_182(uParam0);
}

void func_59(var uParam0)
{
	func_183(uParam0);
	func_184(uParam0);
}

Vector3 func_60(var uParam0)
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

bool func_61(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_62(var uParam0)
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

Vector3 func_63(var uParam0)
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

void func_64(var uParam0)
{
}

bool func_65(var uParam0)
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

bool func_66(var uParam0, int iParam1)
{
	if (!func_185(uParam0, iParam1) == 0 && !_does_scenario_point_exist(&(uParam0->f_41[iParam1])))
	{
		uParam0->f_41[iParam1] = create_scenario_point(func_185(uParam0, iParam1), func_186(uParam0, iParam1), func_187(uParam0, iParam1), func_188(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_67(int iParam0)
{
	iVar0 = func_189(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_68(int iParam0)
{
	if (!func_88(iParam0))
	{
		return -1;
	}
	return func_190(iParam0);
}

bool func_69(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_70(int iParam0, bool bParam1, bool bParam2)
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
		if (func_191())
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
		iVar0 = func_192(&(Global_1898164->f_1[0]));
		if (func_193(iVar0) && func_194((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_88(&(Global_1898164->f_1[0])))
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

int func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_195(bParam1, bParam2, bParam3);
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

bool func_72()
{
	return Global_1310750->f_16077 != 0;
}

bool func_73(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_74(var uParam0, float fParam1)
{
	fVar1 = func_196();
	if (func_197(uParam0->f_1, &fVar0))
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

char* func_75(var uParam0, int iParam1, int iParam2)
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
							if ((!func_69(func_68(uParam0->f_5), 4) && !func_69(func_68(uParam0->f_5), 2)) && !func_69(func_68(uParam0->f_5), 8))
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
							if (!func_69(func_68(uParam0->f_5), 4))
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
			if (!func_41(uParam0->f_3, 4) || func_74(uParam0, 1126694912))
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
			if (func_74(uParam0, 1126694912))
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

bool func_76(var uParam0, int iParam1)
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

int func_77(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 16:
			return 1517371512;
		case 65536:
			return -1857099574;
		default:
			break;
	}
	return -1;
}

bool func_78(var uParam0)
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

bool func_79(var uParam0)
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

bool func_80(var uParam0, int iParam1)
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

int func_81(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_198(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_82(int iParam0, int iParam1)
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

bool func_83(int iParam0, int iParam1)
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

bool func_84(int iParam0, int iParam1)
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
	if (!func_82(iParam0, iVar0))
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

void func_85(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_86(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_87(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_88(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_89(int iParam0, var uParam1)
{
	if (!func_88(iParam0))
	{
		return;
	}
	func_199(iParam0, uParam1);
}

void func_90(var uParam0)
{
	func_200(uParam0, 0f);
}

struct<2> func_91(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_92(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_93(int iParam0, var uParam1)
{
	if (!func_88(iParam0))
	{
		return;
	}
	func_201(iParam0, uParam1);
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_95(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_123() == -1)
	{
		if (func_202(iParam0) && func_203(iParam0))
		{
			func_204(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_96(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_205(iParam0, iParam1);
	Var0 = { func_206(iParam0, 0, 1) };
	iVar5 = func_207(iParam0, &Var0, 0, 0);
	iVar6 = func_208(iParam0, 0);
	if ((iVar5 > 1 && !func_209()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_116(iParam0, -2051813666))
		{
			func_105(583, 1);
		}
		else
		{
			func_105(582, 0);
		}
	}
	if (func_210(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_97(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_211(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_212(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_213(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_214(bParam2), iParam0, 0);
	return iVar2;
}

bool func_99(int iParam0)
{
	if (func_123() != -1)
	{
		return false;
	}
	return func_100(iParam0) != 0;
}

int func_100(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_215())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_216(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_101(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_102(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_215())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_101(iVar0))
		{
			if (func_148(func_216(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_103(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_217(48);
	func_218(0, -1);
}

bool func_104(int iParam0)
{
	if (func_123() != -1)
	{
		return false;
	}
	return func_135((*Global_1347702)[iParam0]->f_15, 1);
}

void func_105(int iParam0, bool bParam1)
{
	func_219(iParam0, &iVar0, &iVar1);
	if (!func_220(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_221(iVar0, iVar1);
}

int func_106(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_107(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_108()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_109(int iParam0)
{
	if (func_123() != -1)
	{
		return false;
	}
	return func_135((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_110(int iParam0)
{
	if (func_123() != -1)
	{
		return false;
	}
	if (!func_193(iParam0))
	{
		return false;
	}
	return func_222((*Global_1347702)[iParam0]->f_15);
}

int func_111()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_148(func_223(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_108() && (func_110(38) || func_104(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_108() && (func_110(39) || func_104(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_224(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_108() && (func_110(41) || func_104(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_108() && (func_110(49) || func_104(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_224(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_225(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_226(iParam0, iVar13, iVar14))
	{
	}
	if (func_227(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_228(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_229(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_230(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_231(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_113(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_108() && (func_110(38) || func_104(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_108() && (func_110(39) || func_104(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_108() && (func_110(49) || func_104(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_108() && (func_110(38) || func_104(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_234(_create_var_string(2, sVar0), _create_var_string(2, func_233(func_107(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_108() && (func_110(39) || func_104(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_108() && (func_110(49) || func_104(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_232(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_115(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_116(int iParam0, int iParam1)
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

bool func_117(int iParam0, int iParam1)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_118(int iParam0)
{
	if (!func_235(iParam0))
	{
		return false;
	}
	return func_236(iParam0);
}

void func_119(int iParam0)
{
	if (!func_235(iParam0))
	{
		return;
	}
	func_237(iParam0);
	func_238(iParam0);
}

int func_120(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_121(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_94(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_239(iVar0) || func_240(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_122(int iParam0, bool bParam1)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_123()
{
	return Global_1572887->f_12;
}

void func_124(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_241(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_125(bool bParam0)
{
	if (func_123() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_214(bParam0));
}

bool func_126(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_206(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_242((386 + iVar28), 1);
			if (func_243(iParam0, &Var0, iVar5, 0))
			{
				if (func_244(iParam0, &Var6, iVar5))
				{
					Var29 = { func_245(iParam0, Var0, iVar5, 0) };
					func_246(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_125(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_127(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_247(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_127(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_129(iParam0))
	{
		return false;
	}
	if (!func_125(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_128(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_122(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_123() == -1)
		{
			func_124(iVar0);
			if (iParam1 == 1248274121)
			{
				func_248(iVar0);
			}
		}
		if (!func_210(iParam0, &uVar1, 1, 0, 0))
		{
			func_204(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_249(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_126(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_126(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_126(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_250())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_251(iVar0))
				{
					func_126(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_126(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_252(Global_35, 2, 0, 1);
				if ((((func_241(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_118(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_241(iVar7) && func_118(24))
				{
					if (!func_126(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_126(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_126(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_105(480, 1);
	}
	return true;
}

bool func_129(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_130(int iParam0, int iParam1, int iParam2)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_241(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_148(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_167(func_253(iParam0), func_166(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_123() == -1)
		{
			if (func_135((*Global_1835011)[14]->f_1, 1))
			{
				func_105(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_125(0))
	{
		if (func_127(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_172(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_131(int iParam0)
{
	if ((iParam0 == -615217896 && !func_254()) || iParam0 != -615217896)
	{
		if (func_255(Global_35, iParam0, &uVar0))
		{
			func_151(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_157();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_157();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_157();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_155();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_153();
			break;
	}
}

void func_132(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_153();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_154();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_155();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_156();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_157();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_256();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_257();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_133(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_134(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_135(int iParam0, bool bParam1)
{
	switch (func_258(iParam0))
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

void func_136(int iParam0)
{
	bVar0 = func_116(iParam0, -2017733358);
	if (func_259() < 3)
	{
		if (bVar0)
		{
			if (func_261(func_260(iParam0), iParam0))
			{
				func_167(79, func_166(func_260(iParam0)), 1);
			}
			else
			{
				func_167(78, func_166(func_260(iParam0)), 1);
			}
		}
		else
		{
			func_167(80, func_166(func_262(iParam0)), 1);
		}
	}
}

bool func_137()
{
	if (((((func_263(839908568, 400) || func_263(-1134030454, 400)) || func_263(623353496, 400)) || func_263(-344413337, 400)) || func_263(-1664948962, 400)) || func_263(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_264(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_265(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_266(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_139(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_112(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_267(8192);
			break;
		case 581047644:
			func_112(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_267(524288);
			break;
		case -644199619:
			func_112(39, 0, 0, 0, 0, 0, 1, 0);
			func_114(39, 0, 0, 0, 0, -1, 0);
			func_268(16);
			break;
		case 684296857:
			func_112(41, 0, 0, 0, 0, 0, 1, 0);
			func_114(41, 0, 0, 0, 0, -1, 0);
			func_269(8);
			break;
		case 466137807:
			func_112(49, 0, 0, 0, 0, 0, 1, 0);
			func_114(49, 0, 0, 0, 0, -1, 0);
			func_270(16);
			break;
		case -1087522507:
			func_112(43, 0, 0, -1791518714, func_271(1), 0, -1, 0);
			func_272(1);
			break;
		case -405829000:
			func_112(43, 0, 0, -2087881550, func_271(2), 0, -1, 0);
			func_272(2);
			break;
		case 378660860:
			func_112(43, 0, 0, 1908068621, func_271(4), 0, -1, 0);
			func_272(4);
			break;
		case 1566111097:
			func_112(43, 0, 0, 1611247019, func_271(8), 0, -1, 0);
			func_272(8);
			break;
		case 1276007140:
			func_112(43, 0, 0, 1319635688, func_271(16), 0, -1, 0);
			func_272(16);
			break;
	}
}

void func_140(int iParam0)
{
	if (func_273() == 1)
	{
		if (func_104(39))
		{
			func_105(342, 0);
		}
		else
		{
			func_105(343, 0);
			func_268(1);
		}
	}
	if (func_273() >= 30)
	{
		func_105(344, 0);
	}
	func_112(39, 0, 0, 0, 0, 0, -1, 0);
	func_114(39, 0, 0, func_273(), 30, 1, 0);
}

void func_141(int iParam0)
{
	if (func_274() == 1)
	{
		if (func_104(49))
		{
			func_105(409, 0);
		}
		else
		{
			func_105(410, 0);
			func_270(1);
		}
	}
	if (func_274() >= 10)
	{
		func_105(411, 0);
	}
	func_112(49, 0, 0, 0, 0, 0, -1, 0);
	func_114(49, 0, 0, func_274(), 10, 1, 0);
}

void func_142(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_105(437, 0);
			func_105(440, 0);
			func_275(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_112(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_224(-949689219, 20), 1, 0);
			func_267(1);
			func_276(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_275(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_112(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_224(-1248968496, 20), 1, 0);
			func_267(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_275(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_112(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_224(1706369307, 20), 1, 0);
			func_267(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_275(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_112(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_224(1520110311, 20), 1, 0);
			func_267(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_105(438, 0);
			func_275(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_112(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_224(-1992824800, 20), 1, 0);
			func_267(32768);
			break;
		default:
			func_105(439, 0);
			break;
	}
}

void func_143()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_144(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_123() == -1)
	{
		if (!func_104(43))
		{
			if (iParam0 == 281887510)
			{
				func_105(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_105(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_105(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_105(400, 0);
			}
		}
		else if (func_116(iParam0, 412399755))
		{
			func_277(-1791518714);
			if (func_278() == 0)
			{
				func_218(0, 10);
				iVar1 = func_279(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_104(44))
		{
			if (iParam0 == -222563712)
			{
				func_105(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_105(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_105(401, 0);
			}
		}
		else if (func_116(iParam0, 709057512))
		{
			func_277(-2087881550);
			if (func_278() == 1)
			{
				func_218(0, 10);
				iVar1 = func_279(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_104(45))
		{
			if (iParam0 == 2116770557)
			{
				func_105(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_105(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_105(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_105(398, 0);
			}
		}
		else if (func_116(iParam0, -1478961327))
		{
			func_277(1908068621);
			if (func_278() == 2)
			{
				func_218(0, 10);
				iVar1 = func_279(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_282(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_283(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_217(48);
					}
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_104(46))
		{
			if (iParam0 == 2085530337)
			{
				func_105(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_105(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_105(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_105(406, 0);
			}
		}
		else if (func_116(iParam0, -1238404098))
		{
			func_277(1611247019);
			if (func_278() == 3)
			{
				func_218(0, 10);
				iVar1 = func_279(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_104(47))
		{
			if (iParam0 == -1521783510)
			{
				func_105(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_105(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_105(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_105(403, 0);
			}
		}
		else if (func_116(iParam0, 1160548794))
		{
			func_277(1319635688);
			if (func_278() == 4)
			{
				func_218(0, 10);
				iVar1 = func_279(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_280(iParam0) < func_281(iParam0))
					{
						func_112(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_145(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_282(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_283(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_217(48);
		}
	}
}

void func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_148(func_284(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_285(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_286(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	if (func_123() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_138(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_138(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_138(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_138(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_138(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_138(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_138(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_138(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_138(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_138(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_138(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_138(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_138(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_287())
			{
				func_138(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_138(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_138(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_138(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_138(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_138(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_138(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_138(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_138(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_138(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_138(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_138(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_138(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_115(iParam0);
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
		if (!func_288(iParam0, 1))
		{
			return false;
		}
	}
	return func_98(iParam0, 0, bParam2) >= iParam1;
}

void func_149(int iParam0)
{
	if (func_104(41))
	{
		func_105(363, 0);
	}
	else
	{
		func_105(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_289(-1865241121);
			func_290(-642026005);
			func_291(-642026005);
			func_218(0, 10);
			break;
		case -2108314374:
			func_289(2117142684);
			func_290(-940584364);
			func_291(-940584364);
			func_218(0, 10);
			break;
		case -1193798153:
			func_289(-1409326024);
			func_290(1972645282);
			func_291(1972645282);
			func_218(0, 10);
			break;
		case -787702678:
			func_289(-641744968);
			func_290(1667205433);
			func_291(1667205433);
			func_218(0, 10);
			break;
		case -804542901:
			func_289(-946988203);
			func_290(1362715885);
			func_291(1362715885);
			func_218(0, 10);
			break;
		case -1696275132:
			func_289(-646136018);
			func_290(1053540370);
			func_291(1053540370);
			func_218(0, 10);
			break;
		case -161595323:
			func_289(-955835837);
			func_290(-1100103852);
			func_291(-1100103852);
			func_218(0, 10);
			break;
		case -1114363619:
			func_289(-179276075);
			func_290(-1409869209);
			func_291(-1409869209);
			func_218(0, 10);
			break;
		case -368407134:
			func_289(-492711560);
			func_290(-1760235357);
			func_291(-1760235357);
			func_218(0, 10);
			break;
		case 1997759228:
			func_289(1764383959);
			func_290(-138366827);
			func_291(-138366827);
			func_218(0, 10);
			break;
		case 1265573293:
			func_289(317501533);
			func_290(-1261163843);
			func_291(-1261163843);
			func_218(0, 10);
			break;
		case -1030441283:
			func_289(817753087);
			func_290(-963523016);
			func_291(-963523016);
			func_218(0, 10);
			break;
		case -1490884871:
			func_289(576606016);
			func_290(560825326);
			func_291(560825326);
			func_218(0, 10);
			break;
		case -395458616:
			func_289(814934957);
			func_290(858269539);
			func_291(858269539);
			break;
	}
}

void func_150(int iParam0, int iParam1)
{
	func_292(iParam0, iParam1, &uVar0);
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_206(iParam1, 1, 0) };
		iParam3 = func_293(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_295(iParam1, iParam2, func_294(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_296(1, (func_123() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_294(iParam3, 1)])
			{
				func_297(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_298(32768) && iParam1 != &Global_1946804->f_57[func_294(iParam3, 1)])
			{
				func_299();
				func_297(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_297(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_300(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_297(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_301(0);
			func_302(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_297(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_152(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_252(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_252(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_303("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_304(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_305(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_153()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_154()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_155()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_156()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_157()
{
	func_306();
	func_307();
	func_308();
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_159(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_232(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_160(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_161(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_162(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_163(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_164(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_165(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_166(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_167(int iParam0, int iParam1, bool bParam2)
{
	func_219(iParam0, &iVar0, &iVar1);
	if (!func_220(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_309(iParam0, 1024))
	{
		return;
	}
	func_221(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_168(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_219(iParam0, &iVar0, &iVar1);
	if (!func_220(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_309(iParam0, 1024))
	{
		return;
	}
	func_221(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_169()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_215())
	{
		return func_170();
	}
	iVar4 = (func_215() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_215())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_310(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_216(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_170()
{
	iVar0 = get_random_int_in_range(0, func_215());
	return func_216(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_171(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_206(iParam0, 0, 1) };
	Var5 = { func_245(iParam0, Var0, Var0.f_4, 0) };
	return func_311(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_173(int iParam0)
{
	if (func_123() != -1)
	{
		return;
	}
	switch (func_120(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_312(81053684, 0) <= 0)
			{
				func_297(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_297(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_313(iParam0);
			if (func_314(iVar0))
			{
				func_315(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_297(30, iParam0, 0, 0, 0);
			}
			if (func_316() == -2125499975 || func_316() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_297(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_316() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_297(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_317(-525676072, 0))
			{
				if (func_318(-525676072, &iVar1))
				{
					func_297(33, iVar1, 0, 0, 0);
				}
			}
			func_297(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_319(99217379))
		{
			func_151(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_119(24);
		if (func_152(&iVar2, 0))
		{
			func_126(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_174(int iParam0)
{
	if (func_116(iParam0, 943695443))
	{
		func_320(0, iParam0);
	}
	else if (func_116(iParam0, -2096528786))
	{
		func_320(1, iParam0);
	}
	else if (func_116(iParam0, -1094167013))
	{
		func_320(2, iParam0);
	}
	else if (func_116(iParam0, 1936654645))
	{
		func_320(3, iParam0);
	}
	else if (func_116(iParam0, 1306489306))
	{
		func_320(4, iParam0);
	}
	else if (func_116(iParam0, 435762317))
	{
		func_320(5, iParam0);
	}
	else if (func_116(iParam0, 1259363210))
	{
		func_320(6, iParam0);
	}
	else if (func_116(iParam0, 881398259))
	{
		func_320(7, iParam0);
	}
	else if (func_116(iParam0, -541549214))
	{
		func_320(8, iParam0);
	}
	else if (func_116(iParam0, 130796156))
	{
		func_320(-1, iParam0);
	}
}

int func_175(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_321(&Var4, 1356624740);
	return func_322(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_176(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return Var0;
	}
	if (func_116(iParam0, -305066475))
	{
		if (func_123() == -1)
		{
			if (func_116(iParam0, -537818634))
			{
				return func_91(189951448);
			}
			else
			{
				return func_91(1176172851);
			}
		}
	}
	else if (func_116(iParam0, -537818634))
	{
		return func_91(-963660207);
	}
	if (func_116(iParam0, 2084895747))
	{
		return func_91(1694039471);
	}
	return Var2;
}

void func_177(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_123() == -1)
			{
				if (func_135((*Global_1835011)[4]->f_1, 1))
				{
					func_105(109, 1);
				}
			}
			break;
	}
}

void func_178(int iParam0, char* sParam1)
{
	sVar0 = func_324(func_323(0));
	func_326(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_325(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_179(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_94(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_327())
	{
		func_328(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_329(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_329(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_117(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_115(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_330(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_331(_create_var_string(10, &cVar2, _create_var_string(0, func_166(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_116(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_166(iParam0));
	}
	func_326(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_180(int* iParam0, bool bParam1, int iParam2)
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

void func_181(var uParam0, int iParam1, bool bParam2)
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

void func_182(var uParam0)
{
}

void func_183(var uParam0)
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

void func_184(var uParam0)
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

int func_185(var uParam0, int iParam1)
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

Vector3 func_186(var uParam0, int iParam1)
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

float func_187(var uParam0, int iParam1)
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

float func_188(var uParam0, int iParam1)
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

int func_189(int iParam0, int iParam1)
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

int func_190(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

bool func_191()
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

int func_192(int iParam0)
{
	if (!func_88(iParam0))
	{
		return -1;
	}
	return func_333(func_332(iParam0));
}

bool func_193(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_194(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_195(bool bParam0, bool bParam1, bool bParam2)
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

float func_196()
{
	iVar6 = func_334();
	iVar4 = func_335(iVar6);
	iVar5 = func_336(iVar6);
	iVar3 = func_337(iVar5, iVar4);
	iVar2 = func_338(iVar6);
	iVar1 = func_339(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

bool func_197(int iParam0, float fParam1)
{
	iVar0 = func_340(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_341(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_198(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_342(iParam1))
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
			func_343(iParam0, 0, 1);
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
			func_344(iParam0, 0);
			bVar0 = true;
		}
		func_345(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_199(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = uParam1;
}

void func_200(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_346() - fParam1);
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_201(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = uParam1;
}

bool func_202(int iParam0)
{
	return func_115(iParam0) == -427144552;
}

bool func_203(int iParam0)
{
	if (func_123() != -1)
	{
		return false;
	}
	if (func_117(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_210(iParam0, &uVar0, 1, 0, 0);
	}
	return func_148(iParam0, 1, 0);
}

void func_204(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_115(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_122(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_240(iVar0))
	{
		if (func_123() == -1)
		{
			func_124(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_98(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_179(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_205(int iParam0, int iParam1)
{
	if (func_116(iParam0, 58855631))
	{
		func_349(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_206(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_350(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_115(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_245(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_351(bParam1) };
			if (bParam2 && func_352(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_243(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_243(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_244(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_353(bParam1) };
			switch (func_120(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_354(iParam0, -1823706425))
			{
				Var0 = { func_245(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_354(iParam0, -1483207246))
			{
				Var0 = { func_245(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_355(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_207(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	if (!func_125(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_214(bParam3), iParam0);
}

int func_208(int iParam0, bool bParam1)
{
	if (func_129(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_214(bParam1), iParam0, 0);
}

bool func_209()
{
	if (func_123() != -1)
	{
		return false;
	}
	if (!func_108())
	{
		return false;
	}
	if (!func_135((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_135((*Global_1835011)[2]->f_1, 1) && func_135((*Global_1347702)[120]->f_15, 1)) && !func_135((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_135((*Global_1835011)[37]->f_1, 1) && !func_135((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_135((*Global_1835011)[57]->f_1, 1) && !func_135((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_135((*Global_1835011)[26]->f_1, 1) && !func_135((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_135((*Global_1835011)[62]->f_1, 1) && func_135((*Global_1835011)[63]->f_1, 1)) && !func_135((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_135((*Global_1835011)[75]->f_1, 1) && !func_135((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_135((*Global_1835011)[76]->f_1, 1) && !func_135((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_135((*Global_1835011)[40]->f_1, 1) && func_135((*Global_1835011)[41]->f_1, 1)) && !func_135((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_135((*Global_1835011)[62]->f_1, 1) && func_135((*Global_1835011)[63]->f_1, 1)) && !func_135((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_135((*Global_1835011)[65]->f_1, 1) && func_135((*Global_1835011)[66]->f_1, 1)) && !func_135((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_210(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_356(&iParam0);
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (!func_125(0))
	{
		bParam3 = true;
	}
	if (func_202(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_351(0) };
			Var4.f_9 = -1591664384;
			if (!func_243(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_244(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_352(iParam0, 1))
			{
				if (!func_243(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_244(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_357(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_207(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_358(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_214(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_211(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_116(iParam0, 1399091007))
	{
		func_292(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_213(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_359(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_360(&Var0, func_351(0));
	}
	if (!func_361(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_305(iVar14);
	return uVar15;
}

int func_214(bool bParam0)
{
	if (func_123() == -1)
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

int func_215()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_216(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_217(int iParam0)
{
	if (func_123() != -1)
	{
		return;
	}
	iVar0 = func_362(iParam0);
	fVar1 = func_363(iParam0);
	if ((Global_1347477->f_117 || !func_118(31)) || !func_364(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_365(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_366(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_326(_create_var_string(6, func_367(iParam0), fVar1), "itemtype_textures", func_368(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_218(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_369(&Global_0, 8);
	}
	if (!func_108() || func_123() != -1)
	{
		return;
	}
	func_369(&Global_0, 1);
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_220(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_370(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	if (func_372(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_309(iParam0, 1)) || func_373(32768))
	{
		if (!func_309(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_374())
	{
		return false;
	}
	return true;
}

void func_221(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_222(int iParam0)
{
	iVar0 = func_258(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	if (!func_375(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_225(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_111() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_376(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_377(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_273() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_378(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_273(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_379(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_274() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_380(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_274(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_224(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_226(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_227(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_228(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_381(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_148(iVar2, 1, 0) || func_383(func_382(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_233(func_381(iVar0))), func_233(func_381(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_273() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_384(iVar0)), func_384(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_378() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_384(iVar0)), func_384(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_384(iVar0)), func_384(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_284(iParam3, func_385(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_280(iVar2) - iParam7) >= func_224(iParam3, func_386(iVar0));
				}
				else
				{
					bVar1 = func_280(iVar2) >= func_224(iParam3, func_386(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_280(iVar2) + iParam7) >= func_224(iParam3, func_386(iVar0));
			}
			else
			{
				bVar1 = func_280(iVar2) >= func_224(iParam3, func_386(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_387(iVar2)), func_387(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_388(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_389(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_389(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_274() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_390(iVar0)), func_390(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_380() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_390(iVar0)), func_390(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_390(iVar0)), func_390(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_284(iParam3, func_385(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_280(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_391(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_391(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_392(iVar2)), func_392(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_379() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_88(func_393(0)) && ((func_394(0) == 1 || func_394(0) == 8) || func_394(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_232(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_233(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_234(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_235(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_237(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_238(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_395(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_396(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_396(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_396(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_397(1);
			break;
		case 34:
			func_398(1);
			break;
		case 35:
			func_399(1);
			break;
		case 36:
			break;
		case 37:
			func_400(0);
			break;
		case 38:
			func_401(0);
			break;
		case 39:
			func_402(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_108()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_105(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_108()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_105(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_108()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_105(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_108()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_105(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_123() == -1)
			{
				if (!func_319(99217379) || func_403(99217379) == 2110595215)
				{
					if (func_250())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_148(iVar0, 1, 0))
					{
						func_172(iVar0, 1, 752097756);
					}
					func_151(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_123() == -1)
			{
				if (!func_148(1013902307, 1, 0))
				{
					func_172(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_123() == -1)
			{
				if (!func_148(1013902307, 1, 0))
				{
					func_172(1013902307, 1, 752097756);
				}
				if (!func_148(142640135, 1, 0))
				{
					func_172(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_123() == -1)
			{
				if (!func_148(786809402, 1, 0))
				{
					func_172(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_123() == -1)
			{
				if (!func_148(786809402, 1, 0))
				{
					func_172(786809402, 1, 752097756);
				}
				if (!func_148(-518019409, 1, 0))
				{
					func_172(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_404();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_239(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_240(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

bool func_241(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_243(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_358(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_244(int iParam0, var uParam1, int iParam2)
{
	if (func_405(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_245(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_94(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_214(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_246(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_406(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_355(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_125(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_214(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_247(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_407(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_248(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_334();
	func_408(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_249(int iParam0)
{
	if (func_409(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_250()
{
	if (func_123() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_251(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_252(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_253(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_118(50))
			{
				if (!func_118(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_118(51))
			{
				if (!func_118(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_254()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_255(int iParam0, int iParam1, var uParam2)
{
	if (!func_94(iParam1, 0))
	{
		return false;
	}
	if (func_115(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_123() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_120(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_410(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_116(iParam1, 866047851))
	{
		iVar5 = func_294(iVar4, 1);
		if (func_411(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_120(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_116(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_412(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_413(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_413(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_120(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_116(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_414(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_256()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_257()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_258(int iParam0)
{
	if (!func_88(iParam0))
	{
		return -1;
	}
	return func_415(iParam0);
}

int func_259()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_148(func_416(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_148(iVar0, 1, 0) && func_148(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_263(int iParam0, int iParam1)
{
	iVar0 = func_417(iParam0);
	if (iVar0 != -15)
	{
		func_408(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_418(iVar0, 1);
	}
	return false;
}

int func_264(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_148(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_94(iVar25, 0) && func_116(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_265(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_326(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_266(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_419())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_326(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_420(iVar0);
			func_421(iVar0, 0, 0);
		}
		func_326(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_92(func_91(1644987397), iVar1);
	}
}

void func_267(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_268(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_269(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_270(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_271(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_280(iVar9);
	iVar2 = func_280(iVar10);
	iVar3 = func_280(iVar11);
	iVar5 = func_281(iVar9);
	iVar6 = func_281(iVar10);
	iVar7 = func_281(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_280(iVar12);
		iVar8 = func_281(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_272(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_273()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_422(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_274()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_275(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_391(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_391(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_391(iVar0))
		{
			*sParam2++;
		}
		if (func_391(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_391(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_391(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_391(iVar0))
		{
			*sParam2++;
		}
		if (func_391(iVar1))
		{
			*sParam2++;
		}
		if (func_391(iVar0) && func_391(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_391(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_391(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_391(iVar0))
		{
			*sParam2++;
		}
		if (func_391(iVar1))
		{
			*sParam2++;
		}
		if (func_391(iVar2))
		{
			*sParam2++;
		}
		if ((func_391(iVar0) && func_391(iVar1)) && func_391(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_391(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_391(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_391(iVar0))
		{
			*sParam2++;
		}
		if (func_391(iVar1))
		{
			*sParam2++;
		}
		if (func_391(iVar2))
		{
			*sParam2++;
		}
		if (func_391(iVar3))
		{
			*sParam2++;
		}
		if (((func_391(iVar0) && func_391(iVar1)) && func_391(iVar2)) && func_391(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_276(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_423(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
		case 2016141805:
			func_424(1497516462);
			func_423(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
		case 1010885152:
			func_424(1497516462);
			func_424(2016141805);
			func_423(1010885152);
			func_424(-502324015);
			break;
		case -502324015:
			func_424(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_423(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_424(-538889627);
			func_424(-538880323);
			func_424(-1056767524);
			func_423(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_425();
			func_423(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_426();
			func_423(iParam0);
			break;
		case 2019386373:
			func_424(-664252410);
			func_424(2109952320);
			func_423(2019386373);
			break;
		case -664252410:
			func_424(2019386373);
			func_424(2109952320);
			func_423(-664252410);
			break;
		case 2109952320:
			func_424(2019386373);
			func_424(-664252410);
			func_423(2109952320);
			break;
		case -1674179981:
			func_424(-1835851517);
			func_424(-1838352012);
			func_423(-1674179981);
			break;
		case -1835851517:
			func_424(-1674179981);
			func_424(-1838352012);
			func_423(-1835851517);
			break;
		case -1838352012:
			func_424(-1674179981);
			func_424(-1835851517);
			func_423(-1838352012);
			break;
		case -1717960576:
			func_424(210001842);
			func_423(-1717960576);
			break;
		case 210001842:
			func_424(-1717960576);
			func_423(210001842);
			break;
		case -150493654:
			func_424(-1271608261);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-150493654);
			break;
		case -1271608261:
			func_424(-150493654);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-1271608261);
			break;
		case 1846061697:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(-1145519186);
			func_423(1846061697);
			break;
		case -1145519186:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(1846061697);
			func_423(-1145519186);
			break;
		case 1766284049:
			func_424(280705402);
			func_424(1926308480);
			func_423(1766284049);
			break;
		case 280705402:
			func_424(1766284049);
			func_424(1926308480);
			func_423(280705402);
			break;
		case 1926308480:
			func_424(1766284049);
			func_424(280705402);
			func_423(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_424(439465264);
				func_423(1609506757);
			}
			else
			{
				func_424(1609506757);
				func_424(439465264);
			}
			break;
		case 439465264:
			if (func_67(1609506757))
			{
				if (bParam1)
				{
					func_423(439465264);
				}
				else
				{
					func_424(439465264);
				}
			}
			break;
		case 1822001510:
			func_424(-1612662716);
			func_423(1822001510);
			break;
		case -1612662716:
			func_424(1822001510);
			func_423(-1612662716);
			break;
		case 1306158345:
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1306158345);
			break;
		case 1952610440:
			func_424(1306158345);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1952610440);
			break;
		case -223469678:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-404698347);
			func_424(1517904467);
			func_423(-223469678);
			break;
		case -404698347:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(1517904467);
			func_423(-404698347);
			break;
		case 1517904467:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_423(1517904467);
			break;
		case 1376646519:
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(1376646519);
			break;
		case 931649776:
			func_424(1376646519);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(931649776);
			break;
		case -434590080:
			func_424(1376646519);
			func_424(931649776);
			func_424(1743048395);
			func_424(449774763);
			func_423(-434590080);
			break;
		case 1743048395:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(449774763);
			func_423(1743048395);
			break;
		case 449774763:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_423(449774763);
			break;
		case -1414537028:
			func_424(38162571);
			func_424(1350391819);
			func_424(54073871);
			func_423(-1414537028);
			break;
		case 38162571:
			func_424(-1414537028);
			func_424(1350391819);
			func_424(54073871);
			func_423(38162571);
			break;
		case 1350391819:
			func_424(-1414537028);
			func_424(38162571);
			func_424(54073871);
			func_423(1350391819);
			break;
		case 54073871:
			func_424(-1414537028);
			func_424(38162571);
			func_424(1350391819);
			func_423(54073871);
			break;
		case 198200492:
			func_423(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
		case -1124061431:
			func_424(198200492);
			func_423(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
		case 52706132:
			func_424(198200492);
			func_424(-1124061431);
			func_423(52706132);
			func_424(-259123672);
			break;
		case -259123672:
			func_424(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_423(-259123672);
			break;
		case -919512195:
			func_423(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			func_424(1703426636);
			break;
		case -1925798111:
			func_423(-1925798111);
			func_424(-919512195);
			func_424(420709909);
			func_424(1703426636);
			break;
		case 420709909:
			func_423(420709909);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(1703426636);
			break;
		case 1703426636:
			func_423(1703426636);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			break;
		case -1223121209:
			func_423(-1223121209);
			func_424(630808005);
			break;
		case 630808005:
			func_423(630808005);
			func_424(-1223121209);
			break;
		case 1453909576:
			func_423(1453909576);
			func_424(1643531967);
			break;
		case 1643531967:
			func_423(1643531967);
			func_424(1453909576);
			break;
		case 0:
			func_423(0);
			func_424(473295046);
			func_424(-1738165526);
			break;
		case 473295046:
			func_423(473295046);
			func_424(0);
			func_424(-1738165526);
			break;
		case -1738165526:
			func_423(-1738165526);
			func_424(0);
			func_424(473295046);
			break;
		case 932909855:
			func_423(932909855);
			func_424(2051822093);
			break;
		case 2051822093:
			func_423(2051822093);
			func_424(932909855);
			break;
		case 405586984:
			func_423(405586984);
			func_424(1509509592);
			func_424(-959357075);
			func_424(-1311865656);
			break;
		case 1509509592:
			func_423(1509509592);
			func_424(405586984);
			func_424(-959357075);
			func_424(-1311865656);
			break;
		case -959357075:
			func_423(-959357075);
			func_424(1509509592);
			func_424(405586984);
			func_424(-1311865656);
			break;
		case -1311865656:
			func_423(-1311865656);
			func_424(1509509592);
			func_424(-959357075);
			func_424(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_423(-524145696);
			}
			else
			{
				func_424(-524145696);
			}
			func_424(1626481264);
			func_424(282809459);
			break;
		case 282809459:
			func_423(282809459);
			func_424(1626481264);
			func_424(-524145696);
			break;
		case 1626481264:
			func_423(1626481264);
			func_424(-524145696);
			func_424(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_423(885203519);
			}
			else
			{
				func_424(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_423(-1080627546);
			}
			else
			{
				func_424(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_67(iParam0))
				{
					func_423(iParam0);
				}
			}
			else if (func_67(iParam0))
			{
				func_424(iParam0);
			}
			break;
	}
}

void func_277(int iParam0)
{
	if (!func_427(iParam0))
	{
		func_429(func_428(iParam0));
	}
}

int func_278()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_427(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_280(iVar9);
	iVar2 = func_280(iVar10);
	iVar3 = func_280(iVar11);
	iVar5 = func_281(iVar9);
	iVar6 = func_281(iVar10);
	iVar7 = func_281(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_280(iVar12);
		iVar8 = func_281(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_280(int iParam0)
{
	if (func_148(iParam0, 1, 0))
	{
		iVar0 = func_98(iParam0, 0, 0);
	}
	return iVar0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_282(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_283(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_284(int iParam0, int iParam1)
{
	if (!func_375(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_285(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_284(iParam1, 5) || iParam0 == func_284(iParam1, 6)) || iParam0 == func_284(iParam1, 7)) || iParam0 == func_284(iParam1, 8)) || iParam0 == func_284(iParam1, 9))
	{
		func_275(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_112(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_114(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_286(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_284(iParam1, 5) || iParam0 == func_284(iParam1, 6)) || iParam0 == func_284(iParam1, 7)) || iParam0 == func_284(iParam1, 8)) || iParam0 == func_284(iParam1, 9))
	{
		if (func_275(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_112(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_114(51, 0, 0, iVar0, func_224(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_112(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_114(51, 0, 0, iVar0, func_224(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_287()
{
	if (func_222((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_288(int iParam0, int iParam1)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_212(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_303("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_304(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_241(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_305(iVar1);
				return true;
			}
			iVar3++;
		}
		func_305(iVar1);
	}
	return false;
}

void func_289(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_290(int iParam0)
{
	if (!func_430(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_291(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_292(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_293(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_431(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_294(int iParam0, int iParam1)
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

bool func_295(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_432();
	if (iParam2 == 39)
	{
		Var0 = { func_206(iParam0, 1, 0) };
		iParam2 = func_294(func_293(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_116(iParam0, 866047851) && func_411(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_298(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_433(func_431(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_434(iParam2);
	func_435(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_436(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_436(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_437(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_438(iParam0, iParam2, iParam1, func_123() != -1);
	if (bParam4)
	{
		func_439(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_439(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_440(func_431(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_296(bool bParam0, bool bParam1, bool bParam2)
{
	func_441(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_442(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_443(Var0);
}

bool func_298(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_299()
{
	func_444(&(Global_1946804->f_2776));
	func_445(32768);
	func_440(1108822547, 8, 6);
}

int func_300(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_294(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_301(int iParam0)
{
	if (func_446(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_447(Var0);
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_447(Var0);
}

bool func_303(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_214(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_304(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_305(int iParam0)
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

float func_306()
{
	if (func_448())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_449(2);
	}
	if (Global_1347477->f_119)
	{
		return func_449(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_450();
	fVar2 = func_451();
	fVar3 = func_452();
	fVar4 = func_453();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_454()));
	fVar7 = (func_449(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_455(3, round((to_float(iVar8) * fVar10)), 0);
	func_456(3, fVar9, fVar9 > 100f);
	return func_457(fVar7, -100f, 100f);
}

float func_307()
{
	if (func_448())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_449(1);
	}
	if (Global_1347477->f_119)
	{
		return func_449(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_450();
	fVar2 = func_451();
	fVar3 = func_452();
	fVar4 = func_453();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_454()));
	fVar7 = (func_449(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_455(2, round((to_float(iVar8) * fVar10)), 0);
	func_456(2, fVar9, fVar9 > 100f);
	return func_457(fVar7, -100f, 100f);
}

float func_308()
{
	if (func_448())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_449(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_458())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_459())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_449(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_450();
	fVar2 = func_451();
	fVar3 = func_452();
	fVar4 = func_453();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_454()));
	fVar7 = (func_449(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_455(1, round((to_float(iVar8) * fVar10)), 0);
	func_456(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_449(0);
	}
	return func_457(fVar7, -100f, 100f);
}

bool func_309(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_310(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_311(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_94(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_210(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_125(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_214(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_312(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_460();
			}
			break;
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_314(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_315(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_314(iParam0))
	{
		return;
	}
	if (func_461(iParam0))
	{
		return;
	}
	if (!func_462(iParam0))
	{
		func_463(iParam0, 1, 0);
	}
	iVar0 = func_464(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_465(iParam0, 512))
		{
			func_297(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_466() && !bParam1) && !func_70(0, 0, 1))
	{
		func_467(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_468(iParam0, 6);
	if (bParam2)
	{
		if (!func_70(0, 0, 1))
		{
			func_218(1, 4);
		}
	}
}

int func_316()
{
	return Global_1946804->f_1;
}

bool func_317(int iParam0, bool bParam1)
{
	return func_312(iParam0, 0) < func_469(iParam0, bParam1);
}

bool func_318(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_120(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_319(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_294(iParam0, 1)] != &Global_1946804->f_57[func_294(iParam0, 1)];
}

void func_320(int iParam0, int iParam1)
{
	if (func_116(iParam1, 130796156))
	{
		func_470(iParam1, 0);
	}
	else if (func_116(iParam1, 930141731))
	{
		func_470(iParam1, 1);
		func_471(iParam0);
	}
}

void func_321(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_322(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_472(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_473(uParam2, iParam0, Var1);
	return 1;
}

int func_323(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_325(int iParam0)
{
	if (!func_474(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_326(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_475(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_327()
{
	return !&Global_1911774;
}

void func_328(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_329(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_330(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_331(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_332(int iParam0)
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

int func_333(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_334()
{
	return &Global_1899515;
}

int func_335(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_476(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_336(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_337(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_477(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_338(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_339(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_340(int iParam0)
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

float func_341(int iParam0)
{
	iVar0 = func_340(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

bool func_342(int iParam0)
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

void func_343(int iParam0, int iParam1, bool bParam2)
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

void func_344(int iParam0, bool bParam1)
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

void func_345(int iParam0, int iParam1)
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

float func_346()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_349(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_350(bool bParam0)
{
	return func_245(1328661203, func_478(), -1591664384, bParam0);
}

struct<4> func_351(bool bParam0)
{
	iVar0 = func_214(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_245(923904168, func_350(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_245(923904168, func_350(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_245(923904168, func_350(bParam0), -740156546, 0);
}

bool func_352(int iParam0, bool bParam1)
{
	if (func_120(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_118(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_353(bool bParam0)
{
	iVar0 = func_214(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_245(271701509, func_350(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_245(271701509, func_350(bParam0), 12999093, 0);
}

bool func_354(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_120(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_355(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_214(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_356(int iParam0)
{
	if (!func_94(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_357(int iParam0, var uParam1, bool bParam2)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_206(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_242((386 + iVar29), 1);
		if (func_243(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_244(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_358(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_94(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_245(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_214(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_360(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_361(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_214(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_362(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_363(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_479(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_479(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_479(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_118(18);
		case 2:
			return func_118(20);
		case 1:
			return func_118(19);
		default:
			break;
	}
	return true;
}

int func_365(int iParam0)
{
	return func_480(&(Global_40.f_11095.f_11[iParam0]));
}

void func_366(int iParam0, float fParam1, bool bParam2)
{
	if (func_123() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_118(31))
	{
		return;
	}
	iVar0 = func_365(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_365(iParam0);
	if (func_481(iParam0) && func_482(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_483(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_484(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_105(func_485(iParam0), 0);
					}
					func_486(iParam0, iVar2, iVar3);
					func_487(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_367(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

void func_369(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_370(int iParam0, int iParam1)
{
	if (func_123() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_371(int iParam0)
{
	if (func_123() != -1)
	{
		if (func_309(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_309(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_372(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_309(iParam0, 65536) && !func_309(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_309(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_309(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_373(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_374()
{
	return Global_1905944->f_5694;
}

bool func_375(int iParam0, var uParam1)
{
	if (!func_488(iParam0))
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

int func_376()
{
	return func_489(Global_40.f_12019);
}

int func_377()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_223(iVar1);
		if (func_148(iVar2, 1, 0) || func_383(func_382(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_378()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_490(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_379()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_388(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_380()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_383(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_387(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_388(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_391(int iParam0)
{
	if (func_491(iParam0) && func_148(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_492(iParam0) && func_493(iParam0))
	{
		return true;
	}
	return false;
}

char* func_392(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_166(iParam0));
}

int func_393(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_394(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_395(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_396(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_397(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_398(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_399(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_400(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_401(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_402(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_403(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_294(iParam0, 1)]);
}

void func_404()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_494();
		_unlock_set_unlocked(-1526891582, true);
		func_124(-916314281);
		func_172(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_124(494733111);
		func_172(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_405(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_214(0);
	*uParam1 = { func_245(iParam0, func_351(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_406(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_407(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_335(*iParam0);
	iVar1 = func_336(*iParam0);
	iVar2 = func_338(*iParam0);
	iVar3 = func_339(*iParam0);
	iVar4 = func_495(*iParam0);
	iVar5 = func_496(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_477(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_477(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_497(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_409(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_410(int iParam0)
{
	Var0 = { func_206(iParam0, 1, 0) };
	return func_293(Var0.f_4);
}

int func_411(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_116(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_412(int iParam0, var uParam1)
{
	iVar1 = func_294(func_498(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_120(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_413(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_294(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_298(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_414(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_415(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_499(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_417(int iParam0)
{
	return func_500(iParam0, -1);
}

bool func_418(int iParam0, bool bParam1)
{
	return func_501(func_334(), iParam0, bParam1);
}

bool func_419()
{
	if (func_254())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_420(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_502((Global_40.f_4283.f_325 + iParam0));
}

void func_421(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_419())
	{
		func_326(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_326(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_422(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_423(int iParam0)
{
	iVar0 = func_189(iParam0, 1);
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

void func_424(int iParam0)
{
	iVar0 = func_189(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_425()
{
	func_424(-939420910);
	func_424(-1187950766);
	func_424(356365161);
	func_424(753127042);
	func_424(-2038424081);
	func_424(1884271742);
	func_424(459290420);
}

void func_426()
{
	func_424(704802028);
	func_424(588987611);
	func_424(2008888900);
	func_424(1649996811);
	func_424(227918160);
	func_424(168171957);
	func_424(1193080109);
	func_424(-491981251);
	func_424(-639037538);
	func_424(-618620429);
}

bool func_427(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_429(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_430(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_431(int iParam0, int iParam1)
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

void func_432()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_433(int iParam0)
{
	func_440(iParam0, 8, 6);
}

void func_434(int iParam0)
{
	func_503(&(Global_1946804->f_2589), iParam0);
}

void func_435(int iParam0, int iParam1)
{
	func_504(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_436(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_437(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_120(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_505(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_435(iVar1, iVar3);
		}
	}
	if (func_319(-1586649372) && func_505(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_435(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
			}
			func_506(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_506(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_506(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_506(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_506(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_506(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_120(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_414(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_120(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_116(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_414(&(Global_1946804->f_1497.f_1[iVar1])) || func_116(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_435(iVar1, iVar3);
					}
				}
			}
			switch (func_120(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_120(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_120(&(uParam0->f_1[iVar1])) || func_116(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_435(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_438(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_507(0);
	if (iParam2 != 0 && func_508(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_509(iParam0, func_431(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_439(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_123() != -1;
	iVar7 = func_507(0);
	if (func_298(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_431(iVar0, 1);
			if (func_510(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_510(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_413(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_511(uParam0);
				if (iVar3 > 0)
				{
					if (!func_298(524288))
					{
						func_442(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_431(iVar0, 1);
							if (func_510(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_510(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_413(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_435(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_445(524288);
				}
			}
		}
	}
}

void func_440(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_294(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_294(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_294(iParam0, 1)])->f_10 && iParam1));
}

void func_441(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_512(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_123() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_513(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_464(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_464(Global_40.f_7729);
				Global_1946804->f_1378 = func_464(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_514(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_515(0, 1);
	}
}

void func_442(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_443(struct<4> Param0)
{
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_516(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_517(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_442(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_516(Param0))
			{
				return;
			}
			func_517(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_442(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_302(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_444(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_445(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_446(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_447(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_516(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_516(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_517(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_442(8);
}

bool func_448()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_449(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_450()
{
	fVar0 = func_518(13);
	iVar1 = func_519(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_451()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_452()
{
	if (func_254())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_453()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_454()
{
	return Global_1955565->f_3;
}

void func_455(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_520(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_456(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_520(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_457(float fParam0, float fParam1, float fParam2)
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

bool func_458()
{
	return func_518(12) <= -99f;
}

bool func_459()
{
	return func_518(12) >= 99f;
}

int func_460()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_120(iVar1) == -999503751)
		{
			if (func_521() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_461(int iParam0)
{
	if (!func_314(iParam0))
	{
		return false;
	}
	if (func_465(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0)
{
	if (!func_314(iParam0))
	{
		return false;
	}
	if (func_465(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_463(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_314(iParam0))
	{
		return;
	}
	if (!func_462(iParam0))
	{
		func_468(iParam0, 2);
		if (bParam2)
		{
			if (!func_70(0, 0, 1))
			{
				func_218(1, 4);
			}
		}
		if ((!func_466() && !bParam1) && !func_70(0, 0, 1))
		{
			func_467(_create_var_string(10, "OUT_JOURN_ADD", func_522(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_314(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_466()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

var func_467(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_468(int iParam0, int iParam1)
{
	if (!func_314(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_469(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_470(int iParam0, bool bParam1)
{
	iVar0 = func_523(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_119(50);
			}
			else
			{
				func_119(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_119(51);
			}
			else
			{
				func_119(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_524(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_153();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_153();
			}
			break;
		case 3:
			func_119(24);
			if (bParam1)
			{
				if (!func_524(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_153();
				}
			}
			break;
	}
}

void func_471(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_525(0))
			{
				iVar0++;
			}
			if (func_525(2))
			{
				iVar0++;
			}
			if (func_525(4))
			{
				iVar0++;
			}
			if (!func_526(16))
			{
				if (iVar0 == 1)
				{
					func_527();
					func_105(456, 1);
					func_528(16);
				}
			}
			if (!func_526(32))
			{
				if (iVar0 >= 3)
				{
					func_527();
					func_105(456, 1);
					func_528(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_525(1))
			{
				iVar0++;
			}
			if (func_525(3))
			{
				iVar0++;
			}
			if (func_525(7))
			{
				iVar0++;
			}
			if (!func_526(1))
			{
				if (iVar0 == 1)
				{
					func_529();
					func_105(457, 1);
					func_528(1);
				}
			}
			if (!func_526(2))
			{
				if (iVar0 >= 3)
				{
					func_529();
					func_105(457, 1);
					func_528(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_525(5))
			{
				iVar0++;
			}
			if (func_525(6))
			{
				iVar0++;
			}
			if (func_525(8))
			{
				iVar0++;
			}
			if (!func_526(4))
			{
				if (iVar0 == 1)
				{
					func_530();
					func_105(455, 1);
					func_528(4);
				}
			}
			if (!func_526(8))
			{
				if (iVar0 >= 3)
				{
					func_530();
					func_105(455, 1);
					func_528(8);
				}
			}
			break;
	}
}

void func_472(var uParam0)
{
	func_321(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_321(uParam0, 617531372);
	}
	else
	{
		func_321(uParam0, 291123060);
	}
}

void func_473(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_531(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_474(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_475(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_476(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_477(int iParam0, int iParam1)
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

struct<4> func_478()
{
	return Var0;
}

float func_479(int iParam0)
{
	iVar4 = func_362(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_480(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_532(iVar6) - func_532(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_480(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_483(float fParam0, float fParam1)
{
	iVar0 = func_480(fParam0);
	fVar1 = to_float(func_532(iVar0));
	fVar2 = to_float(func_532(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_484(int iParam0)
{
	if (func_533(iParam0, &iVar0))
	{
		return func_532(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_534())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_534())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_534())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_535(iParam0));
	sVar4 = func_537(func_536(iVar3, iParam2));
	sVar6 = func_538(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_539(iParam0));
	iVar8 = func_540(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_541(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_232(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_542(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_487(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_488(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_489(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_490(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_491(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_493(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_543(&iVar0, 0, iVar95, &Var1) && !func_543(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_544(iVar0, &Var1);
			if (func_94(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_494()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_545(Global_35, &uVar0);
	Var30 = { func_350(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_546(0);
	func_547(7);
	func_548(-1623728698, 1, 1, 0);
	if (func_316() == 1160113249)
	{
		func_548(-763730846, 1, 1, 1);
		func_548(-361635024, 1, 1, 1);
	}
	func_549(Global_35, &uVar0);
}

int func_495(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_496(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

void func_497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_550(iParam0, iParam6);
	func_551(iParam0, iParam5);
	func_552(iParam0, iParam4);
	func_553(iParam0, iParam3);
	func_554(iParam0, iParam2);
	func_555(iParam0, iParam1);
}

int func_498(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_293(iVar0);
}

int func_499(int iParam0)
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

int func_500(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_214(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_550(&uVar6, iVar0);
	func_551(&uVar6, iVar1);
	func_552(&uVar6, iVar2);
	func_553(&uVar6, iVar3);
	func_554(&uVar6, iVar4);
	func_555(&uVar6, iVar5);
	return uVar6;
}

bool func_501(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_556(iParam1) || !func_556(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_502(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_91(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_503(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_557(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_557(uParam0->f_2[iVar0], 1))
				{
					func_558(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_504(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_559(uParam0, 1))
	{
		func_560(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_505(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_506(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_435(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_435(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_435(iVar2, iVar0);
		}
	}
}

int func_507(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_316();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_508(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_509(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_510(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_294(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_511(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_512(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_123() == -1)
	{
		func_561(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_562(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_513(int iParam0, int iParam1)
{
	if (func_123() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_514(int iParam0, bool bParam1, int iParam2)
{
	func_563(&(Global_1946804->f_1378), iParam0);
	func_564(2, iParam0, 6);
	if (bParam1)
	{
		func_515(0, 1);
	}
}

void func_515(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_565(0);
	}
	if (bParam0)
	{
		func_442(8);
		func_442(512);
	}
	else
	{
		func_442(8);
		func_442(16);
	}
}

bool func_516(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_517(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_518(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_519(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_520(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_329(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_329(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_521()
{
	return Global_1946804->f_1497;
}

char* func_522(int iParam0)
{
	iVar0 = func_464(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_392(iVar0);
}

int func_523(int iParam0)
{
	if (func_566(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_567(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_568(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_569(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_524(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_148(func_570(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_525(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(func_571(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_526(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_527()
{
	if (func_123() != -1)
	{
		return;
	}
	func_172(1654063339, 1, 752097756);
	iVar0 = func_365(1);
	func_486(1, iVar0, 0);
}

void func_528(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_529()
{
	if (func_123() != -1)
	{
		return;
	}
	func_172(1623931083, 1, 752097756);
	iVar0 = func_365(2);
	func_486(2, iVar0, 0);
}

void func_530()
{
	if (func_123() != -1)
	{
		return;
	}
	func_172(-1845241476, 1, 752097756);
	iVar0 = func_365(0);
	func_486(0, iVar0, 0);
}

bool func_531(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_533(int iParam0, int iParam1)
{
	return false;
}

bool func_534()
{
	return false;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_214(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_214(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_214(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_536(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_537(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_538(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_539(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_543(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_572(iParam1) && !func_573(iParam1))
	{
		iVar0 = func_574(iParam1);
	}
	else
	{
		return false;
	}
	func_575(uParam3);
	iVar5 = func_576(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_544(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_577(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_578(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_545(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_241(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_546(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_94(iVar1, 0))
		{
			func_579(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_547(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_123() == -1)
	{
		func_580(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_120(iVar2) != -999503751)
		{
			func_581(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_582(iVar2, 0))
		{
			func_583(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_548(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_584(iParam0))
	{
		return;
	}
	iVar0 = func_120(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_585(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_586(0))
	{
		func_587(iParam0, 1);
		if (func_316() == 1160113249)
		{
			func_587(func_586(-2125499975), 0);
		}
		else
		{
			func_587(func_586(1160113249), 0);
		}
	}
	func_588();
	if (func_589(iVar0))
	{
		_0x766315a564594401(func_214(0), iParam0, 0);
	}
	func_583(iParam0, bParam3);
	if (bParam2)
	{
		func_515(0, 0);
	}
}

void func_549(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_240(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

void func_550(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_551(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_552(int iParam0, int iParam1)
{
	iVar0 = func_336(*iParam0);
	iVar1 = func_335(*iParam0);
	if (iParam1 < 1 || iParam1 > func_477(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_553(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_554(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_555(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_556(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_496(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_495(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_339(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_335(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_336(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_338(iParam0);
	if (iVar5 < 1 || iVar5 > func_477(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_557(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_558(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_559(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_560(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_561(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_562(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_563(var uParam0, int iParam1)
{
	if (func_123() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_561(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_562(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_564(int iParam0, int iParam1, int iParam2)
{
	if (func_123() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_565(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_566(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (func_116(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_567(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (func_116(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_568(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (func_116(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_569(int iParam0)
{
	if (!func_94(iParam0, 0))
	{
		return false;
	}
	if (func_116(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_570(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_590(iParam0);
		case 1:
			return func_591(iParam0);
		case 2:
			return func_592(iParam0);
		case 3:
			return func_593(iParam0);
	}
	return 0;
}

int func_571(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_594(iParam0);
		case 1:
			return func_595(iParam0);
		case 2:
			return func_596(iParam0);
		case 3:
			return func_597(iParam0);
		case 4:
			return func_598(iParam0);
		case 5:
			return func_599(iParam0);
		case 6:
			return func_600(iParam0);
		case 7:
			return func_601(iParam0);
		case 8:
			return func_602(iParam0);
	}
	return 0;
}

bool func_572(int iParam0)
{
	iParam0 = func_603(iParam0);
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

bool func_573(int iParam0)
{
	iParam0 = func_603(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_572(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_574(int iParam0)
{
	iParam0 = func_603(iParam0);
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

void func_575(var uParam0)
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

int func_576(int iParam0)
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

void func_577(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_578(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_579(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_120(iParam0))
	{
		case -2061583405:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_604(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_588();
	}
	if (bParam1)
	{
		func_515(0, 0);
	}
}

void func_580(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_359(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_361(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_305(iVar0);
	}
}

void func_581(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_605(iParam2, *uParam0);
	func_606(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_582(int iParam0, int iParam1)
{
	Var0 = { func_206(iParam0, 0, 0) };
	Var5 = { func_245(iParam0, Var0, Var0.f_4, 0) };
	if (func_358(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_214(0), &Var5, iParam1);
	return true;
}

void func_583(int iParam0, bool bParam1)
{
	Var0 = { func_206(iParam0, 0, 0) };
	Var5 = { func_245(iParam0, Var0, Var0.f_4, 0) };
	if (func_358(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_214(0), &Var5, bParam1);
}

bool func_584(int iParam0)
{
	if (func_123() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_585(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_607(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_582(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_120(iParam0) != -999503751)
	{
		func_581(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_586(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_316();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_587(int iParam0, int iParam1)
{
	Var0 = { func_206(iParam0, 0, 0) };
	Var5 = { func_245(iParam0, Var0, Var0.f_4, 0) };
	if (func_358(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_214(0), &Var5);
	return 1;
}

void func_588()
{
	if (func_123() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_589(int iParam0)
{
	return func_609(func_608(iParam0));
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_603(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_604(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_607(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_120(iParam0) != -999503751)
		{
			func_610(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_120(iParam0) != -999503751)
	{
		func_610(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_582(iParam0, 1);
	return 1;
}

void func_605(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_606(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_611(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_294(func_410(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_612(uParam0);
	}
}

bool func_607(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_608(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_609(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_613(iParam1);
	func_614(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_615(&(uParam0->f_26), iVar1);
		if (func_616(uParam0->f_26, &iVar0))
		{
			func_617(iVar0, iVar1);
		}
	}
}

void func_611(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_618(&(uParam0->f_3));
}

void func_612(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_619(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_613(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_614(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_615(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_611(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_616(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_618(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_619(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_620(func_316());
	if (*uParam0)
	{
		func_618(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_123() != -1, uParam2);
	*uParam0 = 1;
}

int func_620(int iParam0)
{
	if (func_123() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

