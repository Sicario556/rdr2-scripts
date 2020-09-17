void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_219 = 20000;
	iLocal_222 = vScriptParam_0.x;
	iLocal_220 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_221 = get_game_timer();
	iVar0 = 0;
	while (func_3())
	{
		if (get_game_timer() > iLocal_221)
		{
			iLocal_221 = 0;
			func_4(iLocal_222, &iLocal_220);
			switch (iLocal_220)
			{
				case 0:
					iLocal_220 = 1;
					break;
				case 1:
					func_5(iLocal_222);
					if (func_7(func_6(iLocal_222)))
					{
						func_8(func_6(iLocal_222), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_9(iLocal_222));
					iVar1 = func_10(iLocal_222);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_223 = (get_game_timer() + iLocal_219);
					iLocal_220 = 2;
					break;
				case 2:
					if (func_11() || iLocal_223 < get_game_timer())
					{
						func_12(iLocal_222);
						iLocal_223 = (get_game_timer() + iLocal_219);
						iLocal_220 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_222) || iLocal_223 < get_game_timer())
					{
						func_14(iLocal_222);
						iLocal_223 = (get_game_timer() + iLocal_219);
						iLocal_220 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_222) || iLocal_223 < get_game_timer())
					{
						func_16(iLocal_222);
						iLocal_223 = (iLocal_219 + get_game_timer());
						iLocal_220 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_222)))
					{
						if (func_17(func_6(iLocal_222), 4) && !iLocal_223 < get_game_timer())
						{
						}
						else
						{
							if (func_18(iLocal_222) || iLocal_223 < get_game_timer())
							{
								func_19(iLocal_222, 4);
								iLocal_223 = (iLocal_219 + get_game_timer());
								iLocal_220 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_223 < get_game_timer() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iLocal_222);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_222);
								func_28(iLocal_222);
								func_29();
								func_30();
								iLocal_220 = 8;
							}
							Jump @788; //curOff = 555
							func_31(iLocal_222);
							func_32();
							iLocal_220 = 9;
							Jump @788; //curOff = 572
							func_33(Global_1898004);
							func_34(iLocal_222, Global_1898004);
							iLocal_220 = 10;
							Jump @788; //curOff = 597
							func_35(iLocal_222);
							if (func_20() != -1)
							{
							}
							else
							{
								_display_hud_component(1833957607);
							}
							func_19(iLocal_222, 8);
							if (func_36(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_37(32);
							}
							iLocal_220 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_222))
							{
								iLocal_221 = (1000 + get_game_timer());
							}
							func_39(Global_1898004, iLocal_222);
							func_40(iLocal_222);
							func_19(iLocal_222, 8);
							if (func_41())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1888801)[iLocal_222]->f_10);
							if ((*Global_1888801)[iLocal_222]->f_11 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1888801)[iLocal_222]->f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if ((*Global_1888801)[iLocal_222]->f_12 == 0)
						{
						}
						else
						{
							_0x95423627a9ca598e((*Global_1888801)[iLocal_222]->f_12);
						}
						wait(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							wait(0);
						}
						terminate_this_thread();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			wait(0);
		}
		terminate_this_thread();
	}
}

void func_2()
{
}

bool func_3()
{
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_43(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_37(16);
		return;
	}
	if (func_44(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_45(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_45(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_45(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_45(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_45(1);
			*iParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0] = (Global_1897952[iParam0] || iParam1);
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			iVar0 = -34953917;
			break;
		case 82:
			iVar0 = -1182515549;
			break;
		case 69:
			iVar0 = -180439396;
			break;
		case 61:
			iVar0 = -380981263;
			break;
		case 110:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 35:
			iVar0 = 503372696;
			break;
		case 105:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 76:
			iVar0 = -379634634;
			break;
		case 92:
			iVar0 = 288297518;
			break;
		case 56:
			iVar0 = 1812404612;
			break;
		case 78:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_11()
{
	iLocal_208 = (*Global_1888801)[69]->f_4;
	_0xb469cfd9e065eb99(iLocal_208, 17);
	iLocal_211 = _create_volume_aggregate_with_custom_name("Emerald - m_volPostOfficeOwner");
	_0x39816f6f94f385ad(iLocal_211, 1522f, 442.664f, 91.328f, 0f, 0f, 89.95493f, 5.041f, 4.081f, 3.9f);
	_0x39816f6f94f385ad(iLocal_211, 1521.951f, 438.992f, 91.328f, 0f, 0f, 89.95493f, 2.586f, 2.534f, 3.9f);
	_0x39816f6f94f385ad(iLocal_211, 1525.561f, 442.571f, 91.328f, 0f, 0f, 89.95493f, 2.417f, 2.096f, 3.9f);
	iLocal_213 = _create_volume_aggregate_with_custom_name("Emerald - m_volPostOfficeOfflimits");
	_0x39816f6f94f385ad(iLocal_213, 1522.286f, 442.6286f, 91.09468f, 0f, 0f, 0.127711f, 3.924281f, 4.586129f, 2.884516f);
	_0x39816f6f94f385ad(iLocal_213, 1524.154f, 443.6188f, 91.33035f, 0f, 0f, -40.52857f, 0.901248f, 0.812041f, 3.364722f);
	_0x39816f6f94f385ad(iLocal_213, 1524.148f, 441.6273f, 91.32803f, 0f, 0f, 41.59158f, 0.901248f, 0.812041f, 3.361498f);
	_0x39816f6f94f385ad(iLocal_213, 1524.171f, 442.5686f, 91.33483f, 0f, 0f, 89.87004f, 2.182719f, 0.812041f, 3.355471f);
	iLocal_212 = _create_volume_aggregate_with_custom_name("Emerald - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(iLocal_212, 1521.928f, 439.418f, 91.598f, 0f, 0f, 89.87004f, 1.421f, 1.98f, 3.9f);
	_0x39816f6f94f385ad(iLocal_212, 1525.299f, 442.591f, 91.598f, 0f, 0f, 0.50203f, 1.421f, 1.902f, 3.9f);
	_0xb469cfd9e065eb99(iLocal_211, 10052);
	iLocal_214 = _create_volume_box_with_custom_name(1416.919f, 275.628f, 89.84f, 0f, 0f, 13.744f, 4.796f, 10.102f, 3.23f, "Emerald - Fence Shop Volume");
	_0xb469cfd9e065eb99(iLocal_214, 10050);
	iLocal_215 = _create_volume_box_with_custom_name(1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 11f, 5f, "Emerald - Fence Barn");
	iLocal_216 = _create_volume_box_with_custom_name(1412.049f, 265.164f, 90f, 0f, 0f, 16f, 9.5f, 7.5f, 5f, "Emerald - Fence Move Wagon");
	iLocal_217 = _create_volume_aggregate_with_custom_name("Emerald - m_volHorsePen Agg");
	_0x39816f6f94f385ad(iLocal_217, 1392.317f, 341.5652f, 89.24782f, 0f, 0f, 12.46095f, 34.19419f, 40.64669f, 5.552397f);
	_0x39816f6f94f385ad(iLocal_217, 1406.395f, 342.4568f, 89.58327f, 0f, 0f, 39.45417f, 18.04731f, 26.06224f, 4.902727f);
	_0x39816f6f94f385ad(iLocal_217, 1416.681f, 332.729f, 89.86327f, 0f, 0f, 85.96169f, 12.0553f, 10.04752f, 5.028452f);
	func_46();
	return true;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

bool func_13(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	func_47(2);
	_0x6c269f673c47031e(-736104133);
}

bool func_15(int iParam0)
{
	if (!_0xf97f462779b31786(-736104133))
	{
		return false;
	}
	if (!func_48("EMRHAU"))
	{
		return false;
	}
	if (!func_48("SHOWFAU"))
	{
		return false;
	}
	if (func_20() == -1)
	{
		func_49();
	}
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0] && iParam1) != 0;
}

bool func_18(int iParam0)
{
	return func_50(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	iParam0 = iParam0;
}

void func_22()
{
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_51(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_52(5000))
		{
			return true;
		}
	}
	switch (func_53(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_24()
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_54(1);
	func_55(9, &vVar0, 1);
	func_56(&vVar0, 1, 1);
}

void func_25()
{
}

void func_26()
{
}

void func_27(int iParam0)
{
	func_57(2, 590, iLocal_211, iParam0, iLocal_212, iLocal_213, 491520, (12.5f * 2f), 0, 0);
	func_58(2, 2057841001, 0, 0);
	if (func_59())
	{
		_0x187d65f3aec5d679(1443812975, "EmeraldRanch/Emr_Son1");
		func_57(4, 598, iLocal_214, iParam0, iLocal_214, 0, 44, -1082130432, 0, 0);
	}
	func_60(220516644, 1);
	func_60(-336949584, 1);
	func_60(-1304772442, 1);
	func_60(-1924401463, 1);
	func_60(-308659358, 1);
	func_60(-66987983, 1);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	func_61(598, iLocal_214, 1);
	func_61(590, iLocal_211, 1);
	func_61(589, iLocal_217, 1);
	func_61(594, iLocal_217, 0);
	func_61(595, iLocal_217, 0);
	func_61(596, iLocal_217, 0);
	func_61(597, iLocal_217, 0);
	func_61(593, iLocal_217, 0);
	func_61(591, iLocal_217, 0);
	func_61(592, iLocal_217, 0);
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_62(0.8f, 0.2f, 0f, 0f);
}

void func_32()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_33(var uParam0)
{
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[uParam0->f_61]->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_63(uParam1, iLocal_208, 1);
	func_63(uParam1, iLocal_214, 2);
	func_63(uParam1, iLocal_211, 10);
}

void func_35(int iParam0)
{
	if (!func_64(iParam0))
	{
		return;
	}
	func_65();
}

bool func_36(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_38(int iParam0)
{
	if (func_20() == -1)
	{
		func_66();
		func_67(iLocal_215, &uLocal_218);
		if (!func_68())
		{
			func_69(&Local_117);
		}
	}
	return true;
}

void func_39(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_70(&Global_1935630, 16384)) || func_70(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_71(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out());
	bVar2 = func_72();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((*uParam0)[iVar3]->f_1)
		{
			case 1:
				if (_does_volume_exist(uParam0[iVar3]))
				{
					if (_0xf256a75210c5c0eb(uParam0[iVar3], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_73((*uParam0)[iVar3], 1) && func_74(iParam1)) && !func_75(iParam1, 16))
							{
								func_77(iParam1, func_76(), -1, 0, -1, 0);
								func_78((*uParam0)[iVar3], 1);
							}
							func_79(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_20() == -1)
	{
		if (func_80() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_81();
			func_82(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_83(bVar0);
	if (func_20() == -1)
	{
		func_85((iParam1 == func_84() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_41()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_86(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_87();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_19(iLocal_222, 2048);
		if (func_7(func_76()))
		{
			func_8(func_76(), 8);
		}
		func_88(iLocal_222, 4);
		func_88(iLocal_222, 8);
		func_83(0);
		if (func_20() == -1)
		{
			func_85(0);
		}
		func_89(iLocal_222);
		func_32();
		return false;
	}
	else
	{
		func_90(iLocal_222);
		func_91(iLocal_222);
		func_92(iLocal_222);
		if (!func_93(iLocal_222, 0))
		{
			return false;
		}
	}
	terminate_this_thread();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_64(iParam0))
	{
		return false;
	}
	return func_94(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

void func_46()
{
	iLocal_209 = _create_volume_box_with_custom_name(1447.295f, 374.5836f, 90.79878f, 0f, 0f, 90.25769f, 14.08716f, 11.61195f, 11.1284f, "Emerald - m_volSaloon");
	iLocal_210 = _create_volume_box_with_custom_name(1438.955f, 374.4243f, 90.49152f, 0f, 0f, 90.25769f, 15.6469f, 8.493558f, 6.273991f, "Emerald - volMuster");
	iVar0 = 0;
	func_95(&iVar0, 5);
	func_95(&iVar0, 0);
	func_95(&iVar0, 6);
	iVar1 = 0;
	func_95(&iVar1, 4);
	func_95(&iVar1, 5);
	func_95(&iVar1, 0);
	func_95(&iVar1, 15);
	_0x3caad93fa5b9579a(iLocal_209, 2, iVar0);
	_0x3caad93fa5b9579a(iLocal_210, 2, iVar1);
}

void func_47(int iParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (func_96(45))
			{
				return;
			}
			else
			{
				StringCopy(&(Var0.f_10), "town_secrets_sd_trelawny", 32);
			}
			break;
		case 2:
			StringCopy(&(Var0.f_10), "town_secrets_er_daughter", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_10), "town_secrets_val_moira", 32);
			break;
		default:
			break;
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Var0.f_10))) > 0)
	{
		return;
	}
	if (!is_string_null_or_empty(&(Var0.f_10)))
	{
		Var0.f_14 = 1024;
		Var0.f_15 = 1;
		func_97(Var0, 0);
	}
}

bool func_48(char* sParam0)
{
	_text_database_request(sParam0);
	if (!_text_database_has_loaded(sParam0))
	{
		_text_database_request(sParam0);
		return false;
	}
	return true;
}

void func_49()
{
	func_98();
}

int func_50(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_64(iParam0))
	{
		return 1;
	}
	if (func_94(iParam0, 16))
	{
		return 1;
	}
	if (func_99(iParam0) && !func_100(iParam0))
	{
	}
	if (func_101(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_102(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_102(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_99(iParam0) || func_100(iParam0)) || func_103(&Global_1897950))
			{
				func_104(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_51(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_52(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_53(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_54(int iParam0)
{
	if (!func_105(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_7854), iParam0);
}

int func_55(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = get_random_int_in_range(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_56(var uParam0, bool bParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_106())
	{
		return -1;
	}
	if (!func_107(uParam0->f_1))
	{
		return -1;
	}
	if (func_99(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_108(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_109(&iVar2))
		{
			return -1;
		}
	}
	func_110(*uParam0, iVar2);
	bVar1 = func_111(uParam0->f_1, 131072);
	func_112(uParam0->f_1);
	iVar3 = func_113(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2] = *uParam0;
	(*Global_1392915)[iVar2]->f_1 = uParam0->f_1;
	(*Global_1392915)[iVar2]->f_2 = uParam0->f_2;
	(*Global_1392915)[iVar2]->f_3 = uParam0->f_3;
	(*Global_1392915)[iVar2]->f_4 = iVar3;
	(*Global_1392915)[iVar2]->f_5 = uParam0->f_9;
	(*Global_1392915)[iVar2]->f_6 = { uParam0->f_5 };
	(*Global_1392915)[iVar2]->f_9 = uParam0->f_8;
	(*Global_1392915)[iVar2]->f_10 = floor(uParam0->f_4);
	(*Global_1392915)[iVar2]->f_11 = iVar2;
	Global_1392915->f_121[iVar2] = 0;
	Global_1392915->f_121[iVar2]->f_2 = bParam1;
	Global_1392915->f_121[iVar2]->f_17 = iParam2;
	Global_1392915->f_121[iVar2]->f_1 = 0;
	Global_1392915->f_121[iVar2]->f_6 = 0;
	Global_1392915->f_121[iVar2]->f_12 = get_interior_at_coords(uParam0->f_5);
	Global_1392915->f_121[iVar2]->f_16 = 0;
	if (Global_1392915->f_121[iVar2]->f_12 != 0)
	{
		Global_1392915->f_121[iVar2]->f_9 = { _get_interior_position(Global_1392915->f_121[iVar2]->f_12) };
	}
	else
	{
		Global_1392915->f_121[iVar2]->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_114(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_114(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_114(uParam0->f_1, 131072);
	}
	if (func_115(iVar3) || (!func_116(iVar3) && func_117(0) != iVar3))
	{
		iVar0 = func_118(iVar3);
		if (iVar0 == -1)
		{
			func_119(iVar3);
		}
	}
	return iVar2;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_120(iParam3, iParam0);
	vVar1 = { func_121(iVar0) };
	vVar4 = { func_122(iVar0) };
	if (func_123(vVar1))
	{
		return;
	}
	if (!func_124(19, 16384))
	{
		if (!func_102(iParam1))
		{
			return;
		}
	}
	if (!_does_volume_exist(iParam2))
	{
		return;
	}
	_0x748c5f51a18cb8f0(0);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_125(iParam0);
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	if (func_123(vVar4))
	{
		Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	}
	else
	{
		Global_1914319->f_15936[iVar0]->f_2 = { vVar4 };
	}
	Global_1914319->f_3[iParam0]->f_10 = iVar0;
	Global_1914319->f_3[iParam0]->f_25 = iParam2;
	Global_1914319->f_3[iParam0]->f_26 = iParam4;
	Global_1914319->f_3[iParam0]->f_28 = iParam5;
	Global_1914319->f_3[iParam0]->f_29 = iParam9;
	Global_1914319->f_3[iParam0]->f_9 = iParam3;
	Global_1914319->f_3[iParam0]->f_409 = iParam8;
	if (func_126(iVar0) || func_127(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		Global_1914319->f_3[iParam0]->f_20 = func_128(5, Global_1914319->f_3[iParam0]->f_10, 2, iVar7);
	}
	*Global_1393529->f_114[iParam0] = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_129(iParam0);
	}
	Global_1914319->f_3[iParam0]->f_19 = fParam7;
	Global_1914319->f_3[iParam0]->f_8 = iParam6;
	if (!func_130(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_131(iParam3);
			break;
		case 10:
			func_132(iParam3);
			break;
		case 18:
			func_133();
			break;
		case 9:
			func_134();
			break;
		case 22:
			func_135();
			break;
	}
	func_136(Global_1914319->f_3[iParam0]->f_10);
	func_137(iParam0, 16);
	func_138(iParam0, 4);
	_0x748c5f51a18cb8f0(1);
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_139(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_317[iVar0] = iParam1;
	Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = iParam2;
	Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = iParam3;
	Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_408++;
}

bool func_59()
{
	if ((((((func_140(92) || func_141(92)) || func_142(92)) || func_140(94)) || func_141(94)) || func_142(94)) || !func_143(94))
	{
		return false;
	}
	return true;
}

void func_60(int iParam0, int iParam1)
{
	func_144(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

int func_61(int iParam0, int iParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

void func_62(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_147(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_64(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_65()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_148(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_66()
{
	if (!func_149(0))
	{
		return;
	}
	bVar0 = func_151(func_150(), 1) < 65f;
	if (bVar0)
	{
		if (is_ped_in_any_vehicle(Global_35, false))
		{
			if (!func_152(get_entity_model(get_vehicle_ped_is_in(Global_35, false))))
			{
				if (Global_1415412->f_2 == 0)
				{
					Global_1415412->f_2 = func_153("TF_WAGON_FENCE_INVALID_WAGON", 10000, 0, 0, 0, 1);
				}
			}
		}
	}
	else if (Global_1415412->f_2 != 0)
	{
		_0x2f901291ef177b02(Global_1415412->f_2, 1);
		Global_1415412->f_2 = 0;
	}
}

void func_67(int iParam0, var uParam1)
{
	if (!is_thread_active(Global_1415412->f_1, false))
	{
		if (func_154(Global_35, iParam0, 1, 0))
		{
			if (!*uParam1)
			{
				*uParam1 = 1;
				func_144(-308659358, 0, 0, 0, 0, 1f, 0, 0);
				func_144(-66987983, 0, 0, 0, 0, 1f, 0, 0);
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
			func_144(-308659358, 1, 0, 0, 0, 1f, 0, 0);
			func_144(-66987983, 1, 0, 0, 0, 1f, 0, 0);
		}
	}
}

bool func_68()
{
	return Global_1898164->f_163;
}

void func_69(var uParam0)
{
	func_155(uParam0);
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_72()
{
	return func_70(&Global_1935630, 4096);
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_74(int iParam0)
{
	if (!func_64(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_156(iParam0));
}

bool func_75(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_76()
{
	return Global_1897952->f_41;
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_157())
	{
		return;
	}
	sVar1 = func_158(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_159(iParam4))
	{
		if (func_64(iParam0))
		{
			iParam4 = func_160(func_6(iParam0));
		}
		else
		{
			iParam4 = func_160(iParam1);
		}
	}
	if (func_159(iParam4))
	{
		iVar3 = func_161(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_163(func_162(iParam2));
	}
	else if ((func_164(iParam1, 2) || func_165(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_64(iParam0) && func_94(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_167(func_166());
		iVar5 = func_168(func_166());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_36);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_169(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_170(&cVar6, 109029619), sVar9, func_170(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_169(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_170(&cVar6, 109029619), func_170(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_171(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_79(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_172(128))
	{
		return;
	}
	if (!func_173(iParam0))
	{
		return;
	}
	if (func_94(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_174(Global_1935630, 8192);
	func_176(func_175(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_176(func_175(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_176(func_175(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_176(func_175(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_176(func_175(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_176(func_175(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_176(func_175(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_19(iParam0, 64);
	}
}

bool func_80()
{
	return (Global_1894899 & 1 != 0 && func_106() != -1);
}

void func_81()
{
	if (!func_177(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_178(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_82(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_179() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_177(iVar1) && !func_180(iVar1, iParam2)) && (!bParam3 || !func_181(iVar1))) && (!bParam4 || !func_182(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_183(iVar0);
			}
		}
		iVar0++;
	}
}

void func_83(bool bParam0)
{
	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		_0xda26263c07cce9c2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		_0xda26263c07cce9c2(0);
	}
}

int func_84()
{
	return Global_40.f_4283.f_1;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

bool func_86(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

void func_87()
{
}

void func_88(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_89(int iParam0)
{
	func_62(0.775f, 0.2f, 0.025f, 0f);
	func_184(iLocal_216, 1413.48f, 260.52f, 90.03f, -130f);
	func_185(2);
	func_186();
	func_187(2);
	func_188("EMRHAU");
	func_188("SHOWFAU");
	_0x9667cce29bfa0780(-736104133);
	iParam0 = iParam0;
}

void func_90(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369->f_5[iVar0]->f_5 == iParam0)
		{
			func_189(iVar0);
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_125(iVar0);
		}
		iVar0++;
	}
}

void func_92(int iParam0)
{
	iVar0 = func_190(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_191(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_93(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (!func_64(iParam0))
	{
		return true;
	}
	if (func_101(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_192(Global_1897950->f_1, 16))
			{
				func_193(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return true;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_94(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_95(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_96(int iParam0)
{
	if (!func_194(iParam0))
	{
		return false;
	}
	return func_195(iParam0);
}

void func_97(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_196(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_197(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_198(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_98()
{
	uVar0 = 5;
	func_199(&Local_117, 598, &uVar0, 0, 0);
	Local_117[0]->f_43 = 32689;
	Local_117[0]->f_44 = 32904;
	func_202(Local_117[0], 512);
	uVar6 = 5;
	func_199(&Local_117, 590, &uVar6, 1, 0);
	Local_117[1]->f_43 = 32968;
	Local_117[1]->f_44 = 32904;
	func_202(Local_117[1], 512);
}

bool func_99(int iParam0)
{
	if (!func_64(iParam0))
	{
		return false;
	}
	return func_94(iParam0, 33554432);
}

bool func_100(int iParam0)
{
	if (!func_64(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_102(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_103(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_104(int iParam0, bool bParam1)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	if (!func_192(iParam0, 2))
	{
		return 0;
	}
	if (func_192(iParam0, 32) && !bParam1)
	{
		func_205(iParam0, _create_persistent_character(func_204(iParam0)));
		if (func_20() == -1)
		{
			if (func_192(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_146(iParam0));
				func_206(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_146(iParam0));
		}
		return 0;
	}
	if (!func_207(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_146(iParam0)))
	{
		func_206(iParam0, 128);
		return 1;
	}
	func_205(iParam0, _create_persistent_character(func_204(iParam0)));
	_0x4f81ead1de8fa19b(func_146(iParam0));
	if (func_192(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_146(iParam0));
		func_206(iParam0, 2048);
	}
	return 1;
}

bool func_105(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_106()
{
	return Global_1894899->f_2;
}

bool func_107(int iParam0)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return (!func_208() || is_bit_set(Global_40.f_7854, iParam0));
}

int func_108(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

bool func_109(int iParam0)
{
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_209(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_110(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_111(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_112(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_113(int iParam0, int iParam1)
{
	return func_128(iParam0, iParam1, 4, get_hash_key(func_210(iParam1)));
}

void func_114(int iParam0, int iParam1)
{
	if (!func_111(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_115(int iParam0)
{
	return func_211(iParam0) == 0;
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
		iVar0 = func_212(iParam0);
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

int func_117(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
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

int func_119(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_115(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_118(iParam0);
		if (iVar2 >= 0)
		{
			func_213(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_214(iVar1, 1);
			func_213(iParam0, 1);
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
			func_213(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_215(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_214(iVar0, 1);
					func_213(iParam0, 1);
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

int func_120(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_121(int iParam0)
{
	if (!func_216(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_122(int iParam0)
{
	if (!func_216(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_123(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_124(int iParam0, int iParam1)
{
	return func_217(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

void func_125(int iParam0)
{
	if (func_102(Global_1914319->f_3[iParam0]->f_21) && func_218(Global_1914319->f_3[iParam0]->f_21))
	{
		func_219(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1914319->f_3[iParam0]->f_11 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_21 = -1;
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_17 = 0;
	Global_1914319->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_220(Global_1914319->f_3[iParam0]->f_10, 0);
	func_137(iParam0, 536870912);
	iVar1 = func_139(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_191(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
			Global_1914319->f_3[iParam0]->f_317[iVar0] = 0;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = 0f;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	if (Global_1914319->f_3[iParam0]->f_440 != 0)
	{
		_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
	}
	Global_1914319->f_3[iParam0]->f_23 = 0;
	func_221(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_222(iParam0, 0);
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_223())
	{
		iVar2 = func_223();
	}
	iVar5 = func_224(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_225(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_225(iVar6) == 0)
			{
				return func_226(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_225(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_225(iVar6) == 0)
			{
				return func_226(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_226(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_129(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

bool func_130(int iParam0, int iParam1)
{
	if (func_124(iParam0, 16384) && !func_227(iParam0, 1))
	{
		return true;
	}
	if (!func_102(iParam1))
	{
		return false;
	}
	iVar0 = func_228(iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		iVar1 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_25);
		if (does_entity_exist(iVar1))
		{
			if (iVar1 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_25);
			}
		}
		func_61(iParam1, Global_1914319->f_3[iParam0]->f_25, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_25, 1, 1);
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		iVar2 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_28);
		if (does_entity_exist(iVar2))
		{
			if (iVar2 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_28);
			}
		}
		func_61(iParam1, Global_1914319->f_3[iParam0]->f_28, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_28, 0, 1);
	}
	Global_1914319->f_3[iParam0]->f_21 = iParam1;
	Global_1914319->f_3[iParam0]->f_23 = iVar0;
	return true;
}

void func_131(int iParam0)
{
	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_229(29))
			{
				if (func_230(29) && func_231() <= func_232(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_229(3))
			{
				if (func_230(3) && func_231() <= func_232(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_229(25))
			{
				if (func_230(25) && func_231() <= func_232(25))
				{
					StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_132(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_133()
{
	StringCopy(Global_1393529->f_288[18], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_134()
{
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_135()
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_136(int iParam0)
{
	if (!func_216(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_233(iParam0, 2))
			{
				func_234(iParam0, 2);
			}
			break;
	}
}

void func_137(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_138(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

int func_139(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

bool func_140(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_236(iParam0))
	{
		return false;
	}
	return func_116((*Global_1347702)[iParam0]->f_15);
}

bool func_141(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_236(iParam0))
	{
		return false;
	}
	return func_237((*Global_1347702)[iParam0]->f_15);
}

bool func_142(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_237((*Global_1347702)[iParam0]->f_15)) && !func_238((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_143(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_236(iParam0))
	{
		return false;
	}
	return func_239((*Global_1347702)[iParam0]->f_15, 1);
}

void func_144(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_240(iParam0, 0, 0);
	if (func_241(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_242(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_243(iParam0, 1);
			}
			else
			{
				func_244(iParam0, 1);
			}
		}
		else
		{
			func_245(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_246())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_145(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_102(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_146(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_228(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_146(iParam0));
}

int func_146(int iParam0)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_147(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_149(bool bParam0)
{
	if (func_20() == 0)
	{
		return false;
	}
	if (!func_143(94))
	{
		return false;
	}
	if ((func_141(92) || func_140(92)) || func_142(92))
	{
		return false;
	}
	if (func_247(2) && !bParam0)
	{
		return false;
	}
	if (bParam0 && ((((_0x1811a02277a9e49d() || !is_ped_in_any_vehicle(Global_35, false)) || is_ped_in_any_taxi(Global_35)) || _0x4e76cb57222a00e5(Global_35) != -1) || !func_152(get_entity_model(get_vehicle_ped_is_in(Global_35, false)))))
	{
		return false;
	}
	return true;
}

Vector3 func_150()
{
	return 1410.669f, 271.409f, 89.4489f;
}

float func_151(vector3 vParam0, int iParam3)
{
	return func_248(Global_35, vParam0, iParam3);
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case -2053881888:
		case -1866132622:
		case -1861840953:
		case -1826304690:
		case -1758092337:
		case -1753201617:
		case -1708097161:
		case -1544786211:
		case -1426151250:
		case -1347283941:
		case -1278978750:
		case -1100387700:
		case -1008287740:
		case -999004291:
		case -824257932:
		case -570691410:
		case -405196566:
		case -377157708:
		case -283162583:
		case -136833353:
		case 47200842:
		case 93893176:
		case 150966765:
		case 219205323:
		case 374792535:
		case 822759307:
		case 1016623270:
		case 1596452133:
		case 1745694728:
		case 1761016051:
		case 1770617692:
		case 1874711736:
		case 2109471093:
			return true;
		default:
			break;
	}
	return false;
}

var func_153(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_154(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_155(var uParam0)
{
	if ((*uParam0)[iLocal_116]->f_29 == 1)
	{
		if (func_249((*uParam0)[iLocal_116], 1, 1))
		{
			func_250((*uParam0)[iLocal_116]);
			func_251((*uParam0)[iLocal_116], 1024);
		}
	}
	iLocal_116++;
	if (iLocal_116 >= 2)
	{
		iLocal_116 = 0;
		return;
	}
}

bool func_156(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_252())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_157()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_253())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_254(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_255(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_257(func_256(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_258(iParam0) || func_96(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (is_string_null_or_empty(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_159(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_161(int iParam0)
{
	if (!func_159(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_164(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_159(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

int func_166()
{
	return &Global_1899515;
}

int func_167(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_168(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_169(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_170(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_259(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_171(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _show_location_notification(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_172(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_173(int iParam0)
{
	if (func_258(iParam0))
	{
		if (!func_96(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_208())
	{
		if (!func_239((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_175(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_177(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_178(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_179()
{
	return Global_1310750->f_16037;
}

bool func_180(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_181(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	if (func_260(64) && func_261(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_182(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_183(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_177(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_262(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_184(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = create_itemset(true);
	iVar2 = _0x886171a12f400b89(iParam0, iVar0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = get_indexed_item_in_itemset(iVar1, iVar0);
		if (_does_item_have_valid_base(iVar3))
		{
			iVar4 = _0xe578c8ae173719b3(iVar3);
			if (does_entity_exist(iVar4))
			{
				func_263(iVar4, vParam1, fParam4, 2, 1073741824);
				vParam1.x = (vParam1.x + 5f);
			}
		}
		iVar1++;
	}
	destroy_itemset(iVar0);
}

void func_185(int iParam0)
{
	Global_1415412 = (&Global_1415412 - (Global_1415412 && iParam0));
}

void func_186()
{
	if (func_20() != -1)
	{
		return;
	}
	if (_does_volume_exist(iLocal_214))
	{
		_0x998202b206872672(iLocal_214);
		_0x6d5f9e69ba1be783(iLocal_214);
		_delete_volume(iLocal_214);
	}
	if (_does_volume_exist(iLocal_211))
	{
		_0x998202b206872672(iLocal_211);
		_0x6d5f9e69ba1be783(iLocal_211);
		_delete_volume(iLocal_211);
	}
	if (_does_volume_exist(iLocal_217))
	{
		_0x998202b206872672(iLocal_217);
		_0x6d5f9e69ba1be783(iLocal_217);
		_delete_volume(iLocal_217);
	}
}

void func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (_get_number_of_references_of_script_with_name_hash(-155523609) > 0)
			{
				_0x7423f7835770f619(-155523609);
			}
			break;
		case 2:
			if (_get_number_of_references_of_script_with_name_hash(-888201231) > 0)
			{
				_0x7423f7835770f619(-888201231);
			}
			break;
		case 3:
			if (_get_number_of_references_of_script_with_name_hash(-1717931246) > 0)
			{
				_0x7423f7835770f619(-1717931246);
			}
			break;
	}
}

void func_188(char* sParam0)
{
	if (_does_text_database_exist(sParam0))
	{
		if (_text_database_has_loaded(sParam0))
		{
			_text_database_delete(sParam0);
		}
	}
}

void func_189(int iParam0)
{
	func_264(Global_1935369->f_5[iParam0]->f_6, 1);
	func_265(Global_1935369->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
		Global_1935369->f_5[iParam0]->f_8 = 0;
	}
	func_266(iParam0, 8192);
	func_266(iParam0, 16384);
	func_266(iParam0, 32768);
	func_266(iParam0, 131072);
	func_266(iParam0, 16777216);
	func_266(iParam0, 524288);
	func_266(iParam0, 1048576);
	Global_1935369->f_5[iParam0]->f_10 = 0;
	Global_1935369->f_5[&Global_1935369]->f_9 = 0;
	Global_1935369->f_5[iParam0] = 0;
	Global_1935369->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1935369->f_5[iParam0]->f_4 = 0;
	Global_1935369->f_5[iParam0]->f_5 = -1;
	Global_1935369->f_5[iParam0]->f_6 = -1;
	Global_1935369->f_5[iParam0]->f_7 = 0;
}

int func_190(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240->f_1[iVar0]->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_191(int iParam0)
{
	if (func_241(iParam0) && func_267())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_192(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_102(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_193(int iParam0, bool bParam1)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	if (!func_192(iParam0, 2))
	{
		return 0;
	}
	if (func_204(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_146(iParam0)))
	{
		return 1;
	}
	if (func_192(iParam0, 1) && !bParam1)
	{
		func_268(iParam0, 128);
		return 1;
	}
	func_206(iParam0, 129);
	func_269(iParam0);
	_0xfc77c5b44d5ff7c0(func_146(iParam0));
	func_205(iParam0, 0);
	return 1;
}

bool func_194(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_195(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_196(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_197(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_198(int iParam0)
{
	if (func_196(iParam0, 1))
	{
		func_270(1);
	}
}

void func_199(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	(*uParam0)[iParam3]->f_25 = 64f;
	(*uParam0)[iParam3]->f_26 = 16f;
	(*uParam0)[iParam3]->f_20 = iParam3;
	func_271((*uParam0)[iParam3]);
	(*uParam0)[iParam3] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(*uParam0)[iParam3]->f_3[iVar0] = uParam2[iVar0];
			iVar0++;
		}
		func_202((*uParam0)[iParam3], 128);
	}
	if (!func_272(&((*uParam0)[iParam3]->f_34)))
	{
		func_273(&((*uParam0)[iParam3]->f_34), 1);
	}
	func_202((*uParam0)[iParam3], 32768);
	func_202((*uParam0)[iParam3], 1024);
	(*uParam0)[iParam3]->f_29 = 1;
	(*uParam0)[iParam3]->f_21 = -1;
}

Vector3 func_200(var uParam0)
{
	iVar0 = func_228(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_274("");
	}
	if (func_275(4))
	{
		return func_274("");
	}
	if (func_276())
	{
		if (!func_277(69, 0, 4))
		{
			if (func_143(94))
			{
				uParam0->f_21 = -1;
				func_278(69, 0, 4);
				if (!func_279())
				{
					return func_274("SHOWF_CRW_ALIVE");
				}
				else
				{
					return func_274("SHOWF_CRW_DEAD");
				}
			}
		}
		if (func_280(uParam0, 0))
		{
			return func_274("SHOWF_SMSSICK");
		}
	}
	else if (!func_277(69, 0, 8))
	{
		uParam0->f_21 = -1;
		func_278(69, 0, 8);
		return func_274("SHOWF_SMS_JOHN");
	}
	return func_274("");
}

char* func_201(int iParam0)
{
	switch (iParam0)
	{
		case 598:
			return "EMR_Son1";
		case 590:
			return "0832_TRAINWORKER";
		default:
			break;
	}
	return "";
}

void func_202(var uParam0, int iParam1)
{
	func_281(&(uParam0->f_19), iParam1);
}

Vector3 func_203(var uParam0)
{
	iVar0 = func_228(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_274("");
	}
	if (func_280(uParam0, 1))
	{
		sVar1 = func_282(*Global_1393529->f_288[1]);
		iVar2 = get_hash_key(sVar1);
		switch (iVar2)
		{
			case -941361489:
				uParam0->f_37 = "0832_TRAINWORKER";
				return func_274("EMRH_TSW3SICK");
			case -386699540:
				uParam0->f_37 = "0834_TRAINWORKER";
				return func_274("EMRH_TSW1SICK");
			default:
				break;
		}
	}
	return func_274("");
}

int func_204(int iParam0)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_205(int iParam0, int iParam1)
{
	if (!func_102(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_206(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_102(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_207(int iParam0)
{
	if (!func_102(iParam0))
	{
		return false;
	}
	if (!func_192(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_208()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_209(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_211(int iParam0)
{
	if (!func_215(iParam0))
	{
		return -1;
	}
	return func_212(iParam0);
}

int func_212(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_283(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_213(int iParam0, bool bParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	if (!func_115(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_284(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_284(iParam0)))
		{
			_0xca41e86545413b5b(func_285(iParam0), func_286(iParam0), func_287(iParam0), func_284(iParam0), Global_36);
		}
	}
	func_288(iParam0, 1);
	bParam1 = bParam1;
}

void func_214(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_225(Global_1898330[iParam0]);
		func_289((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_215(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_216(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_217(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_218(int iParam0)
{
	if (!func_102(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_219(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_102(iParam0))
	{
		return;
	}
	if (!func_192(iParam0, 1))
	{
		return;
	}
	if (!func_192(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_218(iParam0)) && func_290(iParam0))
	{
		return;
	}
	func_206(iParam0, 1);
	func_269(iParam0);
	if (func_291(func_204(iParam0)))
	{
		iVar0 = func_146(iParam0);
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
		func_206(iParam0, 16);
	}
	if (func_192(iParam0, 128) && !bParam3)
	{
		func_193(iParam0, 0);
	}
}

void func_220(int iParam0, bool bParam1)
{
	if (!func_216(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_233(iParam0, 1024))
		{
			func_234(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_233(iParam0, 1024))
	{
		func_292(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_293(iParam0);
}

void func_221(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_222(int iParam0, bool bParam1)
{
	if (!func_235(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		set_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		clear_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_223()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_225(int iParam0)
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

int func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_294(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_223())
	{
		return -1;
	}
	iVar0 = func_224(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_295(iVar1, 0);
	func_296(iVar1, 0);
	func_297(iVar1, 0);
	func_298(iVar1, 0);
	func_299(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_300(iVar1, iParam4);
	}
	return iVar1;
}

bool func_227(int iParam0, int iParam1)
{
	return func_217(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

int func_228(int iParam0)
{
	iVar0 = func_146(iParam0);
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

bool func_229(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_237((*Global_1835011)[iParam0]->f_1);
}

bool func_230(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_239((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_231()
{
	if (!func_239((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_239((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_239((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_239((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_239((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_239((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_239((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

bool func_233(int iParam0, int iParam1)
{
	if (!func_216(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_234(int iParam0, int iParam1)
{
	if (!func_216(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

bool func_235(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_236(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_237(int iParam0)
{
	iVar0 = func_211(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_238(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_239(int iParam0, bool bParam1)
{
	switch (func_211(iParam0))
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

int func_240(int iParam0, bool bParam1, bool bParam2)
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

bool func_241(int iParam0)
{
	if (func_301(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_242(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_241(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_243(int iParam0, bool bParam1)
{
	if (func_241(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_244(int iParam0, bool bParam1)
{
	if (func_241(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_245(int iParam0, bool bParam1)
{
	if (func_241(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_246()
{
	return true;
}

bool func_247(int iParam0)
{
	return (Global_1415412 && iParam0) != 0;
}

float func_248(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_249(var uParam0, bool bParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_228(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_302(uParam0, 65536) && func_303(Global_35, iVar0, 1) > 25f)
		{
			func_304(1, 1, 0);
		}
		if (func_305(uParam0, bParam2))
		{
			if (func_307(func_306()))
			{
				func_308(func_306());
			}
			func_309(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_302(uParam0, 64))
		{
			return false;
		}
		if (func_303(Global_35, iVar0, 1) < 49f)
		{
			if (func_310(uParam0, iVar0))
			{
				func_311();
				if (bParam1)
				{
					if (!func_305(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_250(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (is_string_null_or_empty(func_312(&vVar0)))
	{
		return;
	}
	iVar3 = func_228(*uParam0);
	if (!func_313(iVar3, 0))
	{
		return;
	}
	if (is_string_null_or_empty(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	func_314(&uLocal_18, iVar3, uParam0->f_37, 0);
	set_ped_can_use_auto_conversation_lookat(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_302(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_276())
			{
				func_314(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_314(&uLocal_18, Global_35, "JOHN", 0);
			}
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_302(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_228(&(uParam0->f_3[iVar4]));
			if (!func_313(iVar5, 0))
			{
				return;
			}
			Stack.Push(&(uParam0->f_3[iVar4]));
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			func_314(&uLocal_18, iVar5, sVar6, 0);
			set_ped_can_use_auto_conversation_lookat(iVar5, true);
			uParam0->f_3[iVar4]->f_2 = 1;
		}
	}
	bVar7 = func_302(uParam0, 16384);
	if (func_315(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_316(func_306());
		uParam0->f_30 = 1;
	}
	func_317(uParam0);
}

void func_251(var uParam0, int iParam1)
{
	func_318(&(uParam0->f_19), iParam1);
}

bool func_252()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_253()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

bool func_254(int iParam0, bool bParam1, bool bParam2)
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
		if (func_319())
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
		iVar0 = func_286(&(Global_1898164->f_1[0]));
		if (func_236(iVar0) && func_320((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_215(&(Global_1898164->f_1[0])))
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

var func_255(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_256(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_321(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_258(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

char* func_259(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_260(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_261(int iParam0)
{
	return func_180(iParam0, Global_1310750->f_16072 | 64);
}

void func_262(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_263(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_322(Global_35) && is_player_teleport_active())
	{
	}
	if (func_323(iParam0))
	{
		if (func_324(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_325(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_263(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_263(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_325(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_325(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_325(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_325(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_325(iParam5, 129))
	{
		if (func_325(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_325(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_325(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_325(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_323(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_325(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_325(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_264(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	set_ambient_zone_state_persistent(sVar0, bParam1, true);
}

void func_265(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				set_portal_settings_override("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				remove_portal_settings_override("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_266(int iParam0, int iParam1)
{
	func_318(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

bool func_267()
{
	return true;
}

void func_268(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_102(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_269(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	iVar0 = func_228(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

void func_270(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

void func_271(var uParam0)
{
	uParam0->f_19 = 1;
}

bool func_272(var uParam0)
{
	return func_326(*uParam0, 1);
}

void func_273(var uParam0, bool bParam1)
{
	if (bParam1 || !func_272(uParam0))
	{
		func_327(uParam0);
	}
}

Vector3 func_274(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_275(int iParam0)
{
	return func_217(uLocal_14, iParam0);
}

bool func_276()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_277(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_328(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_217(&(Global_23118.f_1651[iVar1]), iParam2);
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_328(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_281(Global_23118.f_1651[iVar1], iParam2);
}

bool func_279()
{
	return func_329(1, 2048);
}

bool func_280(var uParam0, int iParam1)
{
	if (!func_276())
	{
		return false;
	}
	iVar0 = func_106();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!func_277(iVar0, iParam1, 1024))
	{
		if (func_330(uParam0) && func_331(0))
		{
			func_278(iVar0, iParam1, 1024);
			uParam0->f_21 = -1;
			return true;
		}
	}
	return false;
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_283(int iParam0)
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

int func_284(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_285(int iParam0)
{
	if (!func_215(iParam0))
	{
		return 0;
	}
	return func_332(func_225(iParam0));
}

int func_286(int iParam0)
{
	if (!func_215(iParam0))
	{
		return -1;
	}
	return func_333(func_225(iParam0));
}

int func_287(int iParam0)
{
	if (!func_215(iParam0))
	{
		return -1;
	}
	return func_334(func_225(iParam0));
}

void func_288(int iParam0, int iParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	func_295(iParam0, iParam1);
}

void func_289(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_332(iParam0);
	*uParam1 = func_333(iParam0);
	*uParam2 = func_334(iParam0);
}

bool func_290(int iParam0)
{
	if (!func_102(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

bool func_291(int iParam0)
{
	return iParam0 != 0;
}

void func_292(int iParam0, int iParam1)
{
	if (!func_216(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_293(int iParam0)
{
	func_336(func_335(iParam0));
}

bool func_294(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_295(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_337(iParam0);
	}
	else
	{
		func_338(iParam0, iParam1);
	}
	func_339();
}

void func_296(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_301(int iParam0)
{
	return iParam0 != 0;
}

bool func_302(var uParam0, int iParam1)
{
	return func_217(uParam0->f_19, iParam1);
}

float func_303(int iParam0, int iParam1, bool bParam2)
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
	return func_340(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_304(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_305(var uParam0, bool bParam1)
{
	if (!func_102(*uParam0) && !func_145(*uParam0, 0))
	{
		return false;
	}
	if (func_341(*uParam0, 0))
	{
		return false;
	}
	iVar0 = func_228(*uParam0);
	iVar1 = func_306();
	if (func_216(iVar1))
	{
		if (func_342(iVar1))
		{
			func_343(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_344(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_335(iVar1);
		iVar3 = func_345(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_343(uParam0);
			return uParam0->f_30;
		}
		if (func_346(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319->f_17371 || func_347(func_228(*uParam0), 1, 1, 1, 0)) || _is_ped_hogtied(func_228(*uParam0)))
	{
		func_343(uParam0);
		return uParam0->f_30;
	}
	if ((((func_348(player_id(), 1, 0, 1) || func_349()) || _0xf46108c50a22b029()) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id()))
	{
		return false;
	}
	if (Global_1914319->f_3[uParam0->f_24]->f_411)
	{
		return false;
	}
	if (func_350(Global_35, 0))
	{
		func_343(uParam0);
		return uParam0->f_30;
	}
	if (func_351())
	{
		if (func_352(101))
		{
			return false;
		}
	}
	if (func_254(178, 1, 1))
	{
		return false;
	}
	if (!func_353(iVar0, func_302(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_302(uParam0, 2048) && !func_302(uParam0, 32768))
		{
			if (!func_272(&(uParam0->f_34)))
			{
				func_273(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_302(uParam0, 1024))
			{
				if (func_354(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (func_354(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_306()
{
	if (func_355())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_307(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_233(iParam0, 1073741824);
}

void func_308(int iParam0)
{
	func_292(iParam0, 1073741824);
}

void func_309(var uParam0)
{
	if (uParam0->f_28)
	{
		if (does_entity_exist(Global_35))
		{
			set_ped_can_use_auto_conversation_lookat(Global_35, false);
			uParam0->f_28 = 0;
		}
	}
	if (uParam0->f_2)
	{
		if (func_102(*uParam0))
		{
			iVar0 = func_228(*uParam0);
			if (does_entity_exist(iVar0))
			{
				set_ped_can_use_auto_conversation_lookat(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_102(&(uParam0->f_3[iVar1])) && uParam0->f_3[iVar1]->f_2)
			{
				iVar2 = func_228(&(uParam0->f_3[iVar1]));
				if (does_entity_exist(iVar2))
				{
					set_ped_can_use_auto_conversation_lookat(iVar2, false);
					uParam0->f_3[iVar1]->f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

bool func_310(var uParam0, int iParam1)
{
	if (func_302(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_228(&(uParam0->f_3[iVar0]));
			if (func_313(iVar1, 0) && func_356(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_302(uParam0, 512) && !func_302(uParam0, 256))
	{
		return true;
	}
	if (func_302(uParam0, 512))
	{
		if (func_330(uParam0))
		{
			return true;
		}
	}
	if (func_302(uParam0, 256))
	{
		if (func_357(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_311()
{
	if (func_229(5))
	{
		func_358(2);
		func_358(4);
	}
	if ((((func_229(6) || func_229(14)) || func_229(26)) || func_229(9)) || func_229(21))
	{
		func_358(4);
	}
	if (((func_141(26) || func_141(27)) || func_141(28)) || func_141(29))
	{
		func_358(4);
	}
	if (((func_359(3, 61) || func_359(3, 29)) || func_359(3, 73)) || func_359(3, 43))
	{
		func_358(4);
	}
	if (func_351())
	{
		if (func_352(101) || func_352(79))
		{
			func_358(4);
		}
		if (((((func_352(88) || func_352(89)) || func_352(108)) || func_352(98)) || func_352(106)) || func_352(110))
		{
			func_358(8);
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(717558736) > 0)
	{
		func_358(4);
	}
	if (is_thread_active((*Global_1396257)[16]->f_635, false) || is_thread_active((*Global_1396257)[13]->f_635, false))
	{
		func_358(4);
	}
}

var func_312(var uParam0)
{
	return uParam0;
}

bool func_313(int iParam0, int iParam1)
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
	if (func_325(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_325(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_325(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_325(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_325(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_325(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_325(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_325(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_314(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_360(uParam0, iParam1, sParam2))
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

bool func_315(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_361(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = uParam0[0];
		iVar1 = uParam0[1];
		if ((does_entity_exist(iVar0) && !func_362(iVar0, 0)) && (does_entity_exist(iVar1) && !func_362(iVar1, 0)))
		{
			if (!func_123(vParam4))
			{
				task_look_at_coord(iVar0, vParam4, 8000, 0, 51, 0);
				task_look_at_coord(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				_0x62fdad5e01d2dd47(iVar0, get_entity_coords(Global_35, true, false), 1, 0);
				task_turn_ped_to_face_entity(iVar0, Global_35, 4000, -1082130432, -1082130432, -1082130432);
			}
		}
		return true;
	}
	return false;
}

void func_316(int iParam0)
{
	func_234(iParam0, 1073741824);
}

void func_317(var uParam0)
{
	func_273(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_363() };
	uParam0->f_21 = -1;
	if (func_302(uParam0, 16384))
	{
		func_251(uParam0, 16384);
	}
	func_251(uParam0, 32768);
	func_251(uParam0, 1024);
	func_364(&uLocal_15);
	if (func_302(uParam0, 4096))
	{
		iVar0 = func_120(func_106(), uParam0->f_24);
		iVar1 = func_228(*uParam0);
		if (func_344(iVar0) && func_353(iVar1, 1))
		{
			func_365(iVar0, 0);
			func_251(uParam0, 8192);
			func_251(uParam0, 4096);
		}
	}
}

void func_318(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_319()
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

bool func_320(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_321(vector3 vParam0, int iParam3)
{
	func_366(iParam3, &vVar0, &Var3, &uVar6);
	if (func_367(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_322(var uParam0)
{
	return uParam0;
}

bool func_323(int iParam0)
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

bool func_324(int iParam0)
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

bool func_325(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_326(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_327(var uParam0)
{
	func_368(uParam0, 0f);
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 0;
		case 105:
			return 1;
		case 5:
			return 2;
		case 120:
			return 3;
		case 26:
			return 4;
		case 38:
			return 5;
		case 69:
			return 6;
		case 28:
			return 7;
		case 115:
			return 8;
		case 92:
			return 9;
		case 78:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_329(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0]->f_4 && iParam1) != 0;
}

bool func_330(var uParam0)
{
	iVar0 = func_228(*uParam0);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		if (func_303(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_331(int iParam0)
{
	if (func_252())
	{
		return false;
	}
	return func_239((*Global_1347702)[58]->f_15, 1);
}

int func_332(int iParam0)
{
	return iParam0 & 31;
}

int func_333(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_334(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_335(int iParam0)
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

void func_336(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_337(int iParam0)
{
	iVar0 = func_283(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_369(iVar0);
}

int func_338(int iParam0, int iParam1)
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
			func_370(iVar2);
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

void func_339()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

float func_340(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_341(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_102(iParam0))
	{
		return false;
	}
	if (!func_218(iParam0) && bParam1)
	{
		return false;
	}
	return func_192(iParam0, 1);
}

bool func_342(int iParam0)
{
	if (!func_216(iParam0))
	{
		return false;
	}
	return func_217(&(Global_1914319->f_18594[iParam0]), 2);
}

void func_343(var uParam0)
{
	iVar0 = func_306();
	if (!func_216(iVar0))
	{
		return;
	}
	if (func_307(iVar0) && func_371(1))
	{
		func_304(1, 0, 1);
	}
	func_202(uParam0, 64);
}

bool func_344(int iParam0)
{
	return func_233(iParam0, 67108864);
}

int func_345(int iParam0)
{
	if (!func_372(iParam0, &iVar0))
	{
		return 0;
	}
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		Global_1914319->f_18905[iParam0] = _0x7cc2186c32d3540a(iVar0, player_id());
		return &(Global_1914319->f_18905[iParam0]);
	}
	return 0;
}

bool func_346(int iParam0)
{
	if (!func_235(iParam0))
	{
		return false;
	}
	return func_373(iParam0, 8388608);
}

int func_347(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((iParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (iParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_374(iVar0, 0)))
		{
			if (func_375(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_348(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_376(bParam1, bParam2, bParam3);
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

int func_349()
{
	if (_is_ped_carrying(Global_35) || func_377(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_350(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_351()
{
	return Global_1310750->f_16077 != 0;
}

bool func_352(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_353(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || func_362(iParam0, 0))
	{
		return false;
	}
	if (func_378(iParam0))
	{
		func_364(&uLocal_15);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_272(&uLocal_15))
	{
		if (func_354(&uLocal_15) < 2f)
		{
			return false;
		}
	}
	else
	{
		func_273(&uLocal_15, 0);
		return false;
	}
	return true;
}

float func_354(var uParam0)
{
	if (!func_272(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_379(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_380() - uParam0->f_1);
}

bool func_355()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

float func_356(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_357(int iParam0, var uParam1)
{
	if (_does_volume_exist(uParam1->f_38))
	{
		if (func_154(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (_does_volume_exist(uParam1->f_39))
	{
		if (func_154(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_358(int iParam0)
{
	func_281(&uLocal_14, iParam0);
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return false;
	}
	if (func_381(iParam1))
	{
		return false;
	}
	return func_233(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_360(var uParam0, int iParam1, char* sParam2)
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

bool func_361(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_382(vParam1, uParam0);
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

bool func_362(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

Vector3 func_363()
{
	return 0f, 0f, 0f;
}

void func_364(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_365(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_344(iParam0))
		{
			func_234(iParam0, 67108864);
		}
	}
	else if (func_344(iParam0))
	{
		func_292(iParam0, 67108864);
	}
}

void func_366(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_367(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

void func_368(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_380() - fParam1);
	func_383(uParam0, 1);
	func_384(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
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

bool func_371(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_372(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*iParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_373(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

var func_374(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_375(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_376(bool bParam0, bool bParam1, bool bParam2)
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

bool func_377(int iParam0)
{
	return (func_385(iParam0, 4) || func_385(iParam0, 5));
}

bool func_378(int iParam0)
{
	if (((func_371(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

bool func_379(var uParam0)
{
	return func_326(*uParam0, 2);
}

float func_380()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_381(int iParam0)
{
	bVar0 = func_233(iParam0, 256);
	return bVar0;
}

void func_382(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_384(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_385(int iParam0, int iParam1)
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

