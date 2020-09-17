void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_635 = "beat_gang_camp_reminder";
	iLocal_636 = 23;
	fLocal_747 = 1f;
	iLocal_748 = 20000;
	uLocal_751 = uVar751;
	iLocal_749 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_750 = get_game_timer();
	iVar0 = 0;
	while (func_3())
	{
		if (get_game_timer() > iVar748)
		{
			iLocal_750 = 0;
			func_4(iVar749, &iLocal_749);
			switch (iVar747)
			{
				case 0:
					iLocal_749 = 1;
					break;
				case 1:
					func_5(iVar749);
					if (func_7(func_6(iVar749)))
					{
						func_8(func_6(iVar749), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_9(iVar749));
					iVar1 = func_10(iVar749);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_752 = (get_game_timer() + iVar746);
					iLocal_749 = 2;
					break;
				case 2:
					if (func_11() || iVar750 < get_game_timer())
					{
						func_12(iVar749);
						iLocal_752 = (get_game_timer() + iVar746);
						iLocal_749 = 3;
					}
					break;
				case 3:
					if (func_13(iVar749) || iVar750 < get_game_timer())
					{
						func_14(iVar749);
						iLocal_752 = (get_game_timer() + iVar746);
						iLocal_749 = 4;
					}
					break;
				case 4:
					if (func_15(iVar749) || iVar750 < get_game_timer())
					{
						func_16(iVar749);
						iLocal_752 = (iVar746 + get_game_timer());
						iLocal_749 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iVar749)))
					{
						if (func_17(func_6(iVar749), 4) && !iVar750 < get_game_timer())
						{
						}
						else
						{
							if (func_18(iVar749) || iVar750 < get_game_timer())
							{
								func_19(iVar749, 4);
								iLocal_752 = (iVar746 + get_game_timer());
								iLocal_749 = 7;
							}
							Jump @868; //curOff = 516
							if (iVar750 < get_game_timer() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iVar749);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iVar749);
								func_28(iVar749);
								func_29();
								func_30();
								iLocal_749 = 8;
							}
							Jump @868; //curOff = 620
							func_31(iVar749);
							func_32();
							iLocal_749 = 9;
							Jump @868; //curOff = 639
							func_33(Global_1898004);
							func_34(iVar749, Global_1898004);
							iLocal_749 = 10;
							Jump @868; //curOff = 666
							func_35(iVar749);
							if (func_20() != -1)
							{
							}
							else
							{
								_display_hud_component(1833957607);
							}
							func_19(iVar749, 8);
							if (func_36(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_37(32);
							}
							iLocal_749 = 11;
							Jump @868; //curOff = 739
							if (func_38(iVar749))
							{
								iLocal_750 = (1000 + get_game_timer());
							}
							func_39(Global_1898004, iVar749);
							func_40(iVar749);
							func_19(iVar749, 8);
							if (func_41())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1888801)[iVar749]->f_10);
							if ((*Global_1888801)[iVar749]->f_11 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1888801)[iVar749]->f_11);
							}
							Jump @868; //curOff = 849
							func_42(iVar0);
							iVar0++;
						}
						if ((*Global_1888801)[iVar749]->f_12 == 0)
						{
						}
						else
						{
							_0x95423627a9ca598e((*Global_1888801)[iVar749]->f_12);
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
	uLocal_637 = (*Global_1888801)[105]->f_4;
	_0xb469cfd9e065eb99(iVar635, 25);
	iLocal_643 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGeneralOwner_DS Agg");
	_0x39816f6f94f385ad(iVar641, 1328.412f, -1292.11f, 77.3881f, 0f, 0f, -25.26236f, 6.60765f, 6.448709f, 2.912f);
	_0x39816f6f94f385ad(iVar641, 1324.871f, -1290.512f, 77.3881f, 0f, 0f, -24.32128f, 1.455032f, 6.472947f, 2.912f);
	_0x39816f6f94f385ad(iVar641, 1322.556f, -1291.914f, 77.3881f, 0f, 0f, -24.88738f, 1.644745f, 1.92852f, 2.912f);
	_0x39816f6f94f385ad(iVar641, 1323.714f, -1288.983f, 79.01204f, 0f, 0f, -25.93809f, 1.384575f, 4.53235f, 5.744565f);
	func_46();
	iLocal_644 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGeneralOwner_US Agg");
	_0x39816f6f94f385ad(iVar642, 1325.331f, -1288.039f, 80.02451f, 0f, 0f, -24.26809f, 3.071211f, 1.555256f, 3.603793f);
	_0x39816f6f94f385ad(iVar642, 1327.144f, -1291.541f, 80.54637f, 0f, 0f, -24.82035f, 9.622256f, 6.45655f, 2.668802f);
	iLocal_686 = _create_volume_box_with_custom_name(func_47(1), func_48(1), func_49(1), "BRL_RHODES - Bank");
	iLocal_687 = _create_volume_box_with_custom_name(1294.033f, -1303.264f, 77.05783f, 0f, 0f, -39.18061f, 1.50496f, 1.39075f, 2.166013f, "Rhodes - Bank prompt");
	iLocal_688 = _create_volume_box_with_custom_name(1286.038f, -1302.973f, 77.05783f, 0f, 0f, -39.18061f, 2.506553f, 1.39075f, 2.166013f, "Rhodes - Bank offlimits");
	_0xb469cfd9e065eb99(iVar684, 10096);
	iLocal_647 = _create_volume_box_with_custom_name(1325.218f, -1295.987f, 77.33764f, 0f, 0f, -25.37787f, 9.315759f, 3.709891f, 3.239843f, "Rhodes - m_volGeneralPorch");
	iLocal_654 = _create_volume_box_with_custom_name(1328.033f, -1293.45f, 77.19467f, 0f, 0f, -24.13628f, 1.689458f, 2.836409f, 2.356988f, "Rhodes - m_volGeneralPrompt");
	iLocal_648 = _create_volume_box_with_custom_name(1329.888f, -1294.527f, 77.19467f, 0f, 0f, -25.61476f, 1.321021f, 3.356372f, 2.356988f, "Rhodes - m_volGeneralCounterOff");
	_0x6e0d3c3f828da773(iVar642, iVar646);
	iLocal_705 = _create_volume_aggregate_with_custom_name("Rhodes - m_volWhiteSlumsDogOwner");
	_0x39816f6f94f385ad(iVar703, 1305.094f, -1133.663f, 88.6923f, 0f, 0f, -36.09979f, 10.1341f, 7.94723f, 19.78896f);
	_0x39816f6f94f385ad(iVar703, 1314.041f, -1132.649f, 85.41996f, 0f, 0f, -20.04774f, 27.60419f, 10.62754f, 11.45993f);
	iLocal_661 = _create_volume_box_with_custom_name(1332.786f, -1299.38f, 77.354f, 0f, 0f, -23.09f, 3.852f, 2.465f, 5f, "Rhodes - newspaper boy");
	iLocal_645 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGeneralOwner_PARENT Agg");
	_0x6e0d3c3f828da773(iVar643, iVar641);
	_0x6e0d3c3f828da773(iVar643, iVar642);
	iLocal_646 = _create_volume_box_with_custom_name(1326.922f, -1291.569f, 79.783f, 0f, 0f, 155.6584f, 13.018f, 12.553f, 9.577f, "Rhodes - m_volGeneral Owner");
	_0xb469cfd9e065eb99(iVar643, 10102);
	iLocal_649 = _create_volume_box_with_custom_name(1322.924f, -1321.214f, 78.1557f, 0f, 0f, -15.47123f, 2.962892f, 1.419545f, 2.523224f, "Rhodes - m_volGunsmithPrompt");
	iLocal_650 = _create_volume_box_with_custom_name(1327.209f, -1317.603f, 78.3512f, 0f, 0f, -15.61039f, 10.25591f, 2.999929f, 3.239843f, "Rhodes - m_volGunsmithPorch");
	iLocal_651 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGunsmith_Off Agg");
	_0x39816f6f94f385ad(iVar649, 1327.031f, -1325.331f, 78.1557f, 0f, 0f, -15.04306f, 4.545384f, 2.596381f, 2.523224f);
	_0x39816f6f94f385ad(iVar649, 1322.495f, -1325.072f, 78.156f, 0f, 0f, -15.42848f, 4.452f, 4.786f, 2.523224f);
	_0x39816f6f94f385ad(iVar649, 1327.033f, -1327.818f, 78.156f, 0f, 0f, -15.42848f, 5.936f, 1.823f, 2.523f);
	_0x39816f6f94f385ad(iVar649, 1319.863f, -1324.946f, 78.156f, 0f, 0f, -15.42848f, 0.878f, 3.682f, 2.523f);
	iLocal_652 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGunsmith_PARENT Agg");
	_0x39816f6f94f385ad(iVar650, 1325.252f, -1323.727f, 75.611f, 0f, 0f, -14.72235f, 9.226847f, 9.160593f, 9.196396f);
	_0x39816f6f94f385ad(iVar650, 1328.794f, -1328.319f, 75.86505f, 0f, 0f, -15.43357f, 2.198632f, 1.86921f, 6.623033f);
	_0x39816f6f94f385ad(iVar650, 1320.511f, -1325.132f, 75.86505f, 0f, 0f, -15.43357f, 2.198632f, 3.677522f, 6.623033f);
	_0xb469cfd9e065eb99(iVar650, 10103);
	iLocal_653 = _create_volume_box_with_custom_name(1326.275f, -1320.495f, 80.448f, 0f, 0f, -15.5f, 12.376f, 13.509f, 7.409f, "Rhodes - m_volGunsmith Owner");
	iLocal_655 = _create_volume_box_with_custom_name(1319.062f, -1141.891f, 82.8495f, 0f, 0f, -21.30082f, 7.675726f, 3.517057f, 5.152f, "Rhodes - m_volFence");
	iLocal_656 = _create_volume_box_with_custom_name(1320.373f, -1142.37f, 81.99889f, 0f, 0f, -20.874f, 3.006117f, 2.156289f, 5.725f, "Rhodes - m_volFencePrompt");
	_0xb469cfd9e065eb99(iVar653, 10101);
	iLocal_691 = _create_volume_box_with_custom_name(1357.908f, -1304.094f, 77.4f, 0f, 0f, -20f, 11.367f, 15.188f, 8.228f, "Rhodes - m_vol_Sheriff Owner");
	iLocal_703 = _create_volume_box_with_custom_name(1416.932f, -1304.703f, 78.61515f, 0f, 0f, 14.80434f, 66.96489f, 31.93578f, 6.637625f, "Rhodes - m_volStableOwner");
	if (!func_50())
	{
		iLocal_692 = _create_volume_box_with_custom_name(1360.667f, -1301.516f, 77.8f, 0f, 0f, -20f, 5.669293f, 8.551543f, 5f, "Rhodes - m_volSheriffStationLoitering");
		_0x3efabb21e14a6bd1(uVar690, 5, 1);
	}
	iLocal_639 = _create_volume_aggregate_with_custom_name("Rhodes - m_volPostOfficeOwner");
	_0x39816f6f94f385ad(iVar637, 1228.472f, -1296.871f, 77.554f, 0f, 0f, 46f, 3.38f, 6.503f, 4.035f);
	_0x39816f6f94f385ad(iVar637, 1226.197f, -1297.297f, 77.554f, 0f, 0f, 46f, 1.222f, 3.986f, 3.92f);
	_0x39816f6f94f385ad(iVar637, 1231.745f, -1300.01f, 77.554f, 0f, 0f, 46f, 2.894f, 2.755f, 3.92f);
	_0x39816f6f94f385ad(iVar637, 1225.236f, -1293.672f, 77.554f, 0f, 0f, 46f, 2.894f, 2.686f, 3.92f);
	iLocal_640 = _create_volume_aggregate_with_custom_name("Rhodes - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(iVar638, 1225.436f, -1293.831f, 77.78244f, 0f, 0f, -44.04891f, 1.531311f, 2.322421f, 3.736468f);
	_0x39816f6f94f385ad(iVar638, 1231.594f, -1299.788f, 77.78244f, 0f, 0f, -44.0489f, 1.531311f, 2.322421f, 3.736468f);
	iLocal_641 = _create_volume_box_with_custom_name(1228.464f, -1296.895f, 77.79596f, 0f, 0f, 45f, 2.921727f, 6.382761f, 3.920313f, "Rhodes - m_volPostOfficeOfflimits");
	_0xb469cfd9e065eb99(iVar637, 10104);
	iLocal_657 = _create_volume_box_with_custom_name(1296.911f, -1279.125f, 76.30206f, 0f, 0f, 143.609f, 6.017687f, 8.127035f, 4.350539f, "Rhodes - m_volButcher");
	iLocal_658 = _create_volume_box_with_custom_name(1296.272f, -1279.315f, 75.90471f, 0f, 0f, 56.654f, 1.137136f, 2.311f, 2.480459f, "Rhodes - m_volButcherPrompt");
	_0xb469cfd9e065eb99(iVar655, 10098);
	iLocal_689 = _create_volume_box_with_custom_name(1289.736f, -1305.109f, 80.124f, 0f, 0f, 139.979f, 15.372f, 26.066f, 9.377f, "BRL_RHODES - Bank Owner");
	iLocal_740 = _add_speed_zone_for_coord(1331.1f, -1284.6f, 76.5f, 120f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_690 = _create_volume_aggregate_with_custom_name("m_volRhodesRestriction");
	_0x39816f6f94f385ad(iVar688, 1365f, -1205f, 70f, 0f, 0f, 56f, 200f, 50f, 40f);
	_0x39816f6f94f385ad(iVar688, 1412.5f, -1290f, 70f, 0f, 0f, 98f, 300f, 100f, 40f);
	_0x39816f6f94f385ad(iVar688, 1330f, -1350f, 70f, 0f, 0f, 138f, 275f, 100f, 40f);
	_0x39816f6f94f385ad(iVar688, 1327.5f, -1225f, 70f, 0f, 0f, 94f, 225f, 160f, 40f);
	func_51(iVar688, 0);
	func_52();
	func_53();
	iLocal_706 = _create_volume_aggregate_with_custom_name("Rhodes - m_volBankWindowBlocking Agg");
	_0x39816f6f94f385ad(iVar704, 1296.806f, -1297.031f, 76.798f, 0f, 0f, -40f, 13.376f, 4.92f, 3.25f);
	iLocal_707 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGeneralWindowBlocking Agg");
	_0x39816f6f94f385ad(iVar705, 1323.026f, -1293.679f, 77.17649f, 0f, 0f, -26f, 1f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar705, 1328.156f, -1296.051f, 77.17649f, 0f, 0f, -26.00001f, 1f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar705, 1331.866f, -1293.74f, 76.76543f, 0f, 0f, -115.5f, 1.25f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar705, 1331.391f, -1288.902f, 76.76543f, 0f, 0f, -26f, 1.5f, 1.75f, 3f);
	_0x39816f6f94f385ad(iVar705, 1328.687f, -1288.201f, 76.76543f, 0f, 0f, -26f, 1.25f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar705, 1320.11f, -1290.629f, 76.765f, 0f, 0f, -115.5f, 3.403f, 3.687f, 3.382f);
	iLocal_708 = _create_volume_aggregate_with_custom_name("Rhodes - m_volGunsmithWindowBlocking Agg");
	_0x39816f6f94f385ad(iVar706, 1332.387f, -1322.463f, 77.423f, 0f, 0f, 75f, 3.669f, 3.963f, 3f);
	_0x39816f6f94f385ad(iVar706, 1320.082f, -1327.384f, 77.42305f, 0f, 0f, 165f, 1f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar706, 1323.281f, -1328.244f, 77.42305f, 0f, 0f, 165f, 1f, 0.5f, 3f);
	iLocal_709 = _create_volume_aggregate_with_custom_name("Rhodes - m_volSaloonWindowBlocking Agg");
	_0x39816f6f94f385ad(iVar707, 1349.941f, -1384.537f, 80.01f, 0f, 0f, -10f, 2.593f, 3.928f, 3f);
	_0x39816f6f94f385ad(iVar707, 1350.203f, -1367.912f, 79.921f, 0f, 0f, -10f, 8.63f, 5.297f, 4.162f);
	_0x39816f6f94f385ad(iVar707, 1343.053f, -1366.644f, 79.758f, 0f, 0f, -10f, 6.613f, 4.637f, 3.247f);
	_0x39816f6f94f385ad(iVar707, 1335.468f, -1366.11f, 80.01021f, 0f, 0f, -10f, 8.579f, 3.015f, 3f);
	_0x39816f6f94f385ad(iVar707, 1350.221f, -1382.953f, 80.01021f, 0f, 0f, -9.999999f, 1.5f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar707, 1339.746f, -1382.594f, 80.01f, 0f, 0f, -10f, 2.495f, 3.879f, 3f);
	_0x39816f6f94f385ad(iVar707, 1330.481f, -1380.662f, 80.01f, 0f, 0f, -10f, 2.456f, 4.534f, 3f);
	_0x39816f6f94f385ad(iVar707, 1327.245f, -1376.811f, 80.01f, 0f, 0f, 80f, 2.95f, 3.726f, 5.069f);
	_0x39816f6f94f385ad(iVar707, 1329.684f, -1371.469f, 80.01021f, 0f, 0f, 80.00001f, 1.5f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar707, 1334.749f, -1377.469f, 84.52473f, 0f, 0f, 80.00001f, 1.5f, 0.5f, 3f);
	_0x39816f6f94f385ad(iVar707, 1354.28f, -1377.253f, 82.648f, 0f, 0f, 80f, 12.592f, 3.474f, 5.969f);
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
	iVar0[0] = 1878514758;
	func_54(105, &iVar0, 1);
	func_55(1878514758, 1, 0, 0, 0, 0, 0, 0);
	_0x6c269f673c47031e(1819512979);
	if (func_56())
	{
		if (_get_number_of_references_of_script_with_name_hash(599196017) <= 0)
		{
			if (!func_57("rhodes_donkeys"))
			{
				StringCopy(&(Var2.f_10), "rhodes_donkeys", 32);
				Var2.f_14 = 512;
				Var2.f_15 = 0;
				func_58(Var2, 0);
			}
		}
	}
	func_61(&uLocal_14, 4, &uLocal_14, func_59(), 0, func_60(), 0, 0, 0);
	if (func_50())
	{
		func_62(89, 1);
		func_62(92, 1);
	}
	if (func_63(21) || func_64(105))
	{
		func_65(1);
	}
	if (func_66())
	{
		func_67(14);
	}
	if (!func_68(45))
	{
		_0x8bc555034a5a5e8c(func_69(74), -1684080969);
	}
	else
	{
		_0x8bc555034a5a5e8c(func_69(74), 984264800);
	}
	func_70(&uLocal_715, 946, 14, "", 1596452133, 1333.922f, -1261.67f, 77.4734f, 28.4f, 0, 0);
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	func_71();
	iLocal_710 = get_rayfire_map_object(1353.15f, -1302.531f, 76.808f, 4f, "des_rho_sheriff");
	if (!_0xf97f462779b31786(1819512979))
	{
		return false;
	}
	_text_database_request("SCVRAUD");
	_text_database_request("RHRGNAU");
	_text_database_request("REDBAUD");
	_text_database_request("REPAAUD");
	_text_database_request("RHDSTFA");
	if (!_text_database_has_loaded("SCVRAUD"))
	{
		_text_database_request("SCVRAUD");
		return false;
	}
	if (!_text_database_has_loaded("RHRGNAU"))
	{
		_text_database_request("SCVRAUD");
		return false;
	}
	if (!_text_database_has_loaded("REDBAUD"))
	{
		_text_database_request("REDBAUD");
		return false;
	}
	if (!_text_database_has_loaded("REPAAUD"))
	{
		_text_database_request("REPAAUD");
		return false;
	}
	if (!_text_database_has_loaded("RHDSTFA"))
	{
		_text_database_request("RHDSTFA");
		return false;
	}
	if (!_text_database_has_loaded("SRRGAUD"))
	{
		_text_database_request("SRRGAUD");
		return false;
	}
	if (does_rayfire_map_object_exist(iVar707))
	{
		if (func_72(-1164215952))
		{
			set_state_of_rayfire_map_object(iVar707, 4);
		}
		else if (get_state_of_rayfire_map_object(iVar707) != 10)
		{
			set_state_of_rayfire_map_object(iVar707, 9);
		}
		return true;
	}
	return false;
}

void func_16(int iParam0)
{
	if (func_73(-1565979762, 1))
	{
		StringCopy(&cVar0, "ClemensPoint/clm_rhodes_trelawny", 64);
		func_74(23, cVar0, -1);
	}
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0] && iParam1) != 0;
}

int func_18(int iParam0)
{
	if (func_73(-1565979762, 1))
	{
		if (!func_75(0, 0, 1))
		{
			if (!func_76(22) && !func_77(22))
			{
				if (!func_78(23))
				{
					func_79(23, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
			}
		}
	}
	return func_80(iParam0, -1, -1, 0);
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
	func_81(1, uVar684);
	func_82(1);
	func_83(2058564250, 1);
	func_83(-1152844617, 1);
	func_83(-811723029, 1);
	func_83(1634148892, 1);
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_84(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_85(5000))
		{
			return true;
		}
	}
	switch (func_86(0))
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
	func_87(1, &vVar0, 1);
	func_88(&vVar0, 1, 1);
}

void func_25()
{
}

void func_26()
{
	func_89(2, 1343.574f, -1375.64f, 79.4806f, uVar693, 105);
}

void func_27(int iParam0)
{
	func_90(2, 72, iVar636, iParam0, iVar637, iVar638, 491520, -1082130432, 0, 0);
	func_91(2, 414143916, 0, 0);
	func_91(2, 1567970773, 0, 0);
	func_91(2, 2049773380, 0, 0);
	func_91(2, 1404294126, 0, 0);
	func_91(2, -1088690954, 0, 0);
	func_91(2, -1627226365, 0, 0);
	func_91(2, 269176415, 0, 0);
	func_91(2, -293074087, 0, 0);
	func_92(2, 1227.879f, -1294.996f, 75.9066f, 84.3021f);
	if (func_93(1544280705))
	{
		if (!func_94(1544280705))
		{
			func_55(1544280705, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	if (func_93(1405538538))
	{
		if (!func_94(1405538538))
		{
			func_55(1405538538, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	func_90(3, 74, iVar642, iParam0, iVar651, iVar641, 12, -1082130432, 0, 0);
	func_91(3, 972368328, 0, 0);
	func_91(3, 1060413677, 0, 0);
	func_92(3, 1335.128f, -1290.989f, 75.5111f, 121.1806f);
	func_95(3, uVar644);
	func_90(6, 73, iVar649, iParam0, iVar646, iVar648, 20, (12.5f * 3f), 0, 0);
	func_91(6, 393076024, 0, 0);
	if (func_93(934926308))
	{
		if (!func_94(934926308))
		{
			func_55(934926308, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	if (func_93(743565308))
	{
		if (!func_94(743565308))
		{
			func_55(743565308, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	func_92(6, 1318.143f, -1322.389f, 75.9593f, 229.1985f);
	func_95(6, uVar647);
	func_55(1410133961, 1, 0f, 0, 0, 0, 0, 0);
	func_90(4, 78, iVar652, iParam0, iVar653, 0, 44, -1082130432, 0, 0);
	func_90(10, 77, iVar654, iParam0, iVar655, iVar656, 460, -1082130432, 0, 0);
	func_96(iParam0);
	func_90(22, 88, iVar658, iParam0, iVar658, 0, 4, -1082130432, 0, 0);
	func_97();
	if (func_98())
	{
		func_99(32, 1);
	}
	else
	{
		func_99(32, 0);
	}
	func_100(&uLocal_662, 76, uVar683, uVar684, uVar685);
}

void func_28(int iParam0)
{
	func_101(73, iVar650, 1);
	func_101(78, iVar652, 1);
	func_101(74, iVar643, 1);
	func_101(76, iVar686, 1);
	func_101(70, iVar688, 1);
	func_101(80, iVar691, 1);
	func_101(72, iVar635, 1);
	func_101(77, iVar654, 1);
	func_101(95, iVar700, 1);
	func_101(96, iVar700, 0);
	if (func_101(135, iVar702, 1))
	{
		_0x4a8fefc43fd8ac9b(iVar702, 0, 1);
	}
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_102(0.8f, 0.2f, 0f, 0f);
	func_103(iParam0, 0);
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
	func_104(uParam1, iVar633, 1);
	func_104(uParam1, iVar641, 2);
	func_104(uParam1, iVar648, 2);
	func_104(uParam1, iVar634, 5);
}

void func_35(int iParam0)
{
	if (!func_105(iParam0))
	{
		return;
	}
	if (func_76(21))
	{
		func_106(iVar687, 0, 0, 0, 0, 0);
		uLocal_745 = func_107(iVar687, 0, 0, 0);
	}
	func_108();
	func_109(0, 390157385);
	func_109(2, -1048652410);
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
	if (!func_110())
	{
		func_111(&Local_397);
	}
	else if (func_112(6, 29) && func_113(29, 1))
	{
		func_114(105, 1, 64);
	}
	func_115(105, uVar634, &uLocal_711);
	if (func_50())
	{
		set_ped_reset_flag(Global_35, 330, true);
	}
	switch (iVar743)
	{
		case 0:
			func_116();
			iLocal_746 = 1;
			break;
		case 1:
			func_103(iParam0, 1);
			iLocal_746 = 2;
			break;
		case 2:
			func_117();
			iLocal_746 = 3;
			break;
		case 3:
			func_118();
			iLocal_746 = 4;
			break;
		case 4:
			func_119(105);
			iLocal_746 = 5;
			break;
		case 5:
			func_61(&uLocal_14, 4, &uLocal_14, func_59(), 0, func_60(), 0, 0, 0);
			func_120();
			iLocal_746 = 6;
			break;
		case 6:
			if (!func_121(-1036501021) && !_0xcf45df50c7775f2a())
			{
				if (func_122(7))
				{
					func_123(-1036501021);
					if (!_does_volume_exist(iVar657))
					{
						iLocal_660 = _create_volume_box_with_custom_name(1301.709f, -1272.995f, 75.222f, 0f, 0f, 155.5f, 9.5f, 4.5f, 11.5f, "m_volButcherNavBlock");
						_0x19c7567d2f2287d6(iVar657, 7);
					}
				}
				else
				{
					func_124(-1036501021);
					if (_does_volume_exist(iVar657))
					{
						_0x2c87c3e1c7b96ee2(iVar657);
						_delete_volume(iVar657);
					}
				}
			}
			iLocal_746 = 7;
			break;
		case 7:
			func_125();
			if (func_126(22, &uLocal_735))
			{
				func_127(iVar732);
			}
			iLocal_746 = 8;
			break;
		case 8:
			if (func_76(21))
			{
				fLocal_747 = 0f;
				iLocal_742 = 0;
			}
			else
			{
				fLocal_747 = 1f;
				if (!bVar739)
				{
					func_128(&uLocal_745, iVar687, 0);
					iLocal_742 = 1;
				}
			}
			iLocal_746 = 9;
			break;
		case 9:
			func_129();
			iLocal_746 = 0;
			break;
	}
	func_130();
	_0xab0d553fe20a6e25(uVar744);
	func_131(&uLocal_662);
	func_132(&uLocal_715);
	func_133(iVar703);
	func_133(iVar704);
	func_133(iVar705);
	func_133(iVar706);
	return false;
}

void func_39(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_134(&Global_1935630, 16384)) || func_134(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_135(uParam0, 1))
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
	bVar2 = func_136();
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
							if ((!func_137((*uParam0)[iVar3], 1) && func_138(iParam1)) && !func_139(iParam1, 16))
							{
								func_141(iParam1, func_140(), -1, 0, -1, 0);
								func_142((*uParam0)[iVar3], 1);
							}
							func_143(iParam1, 0);
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
		if (func_144() != bVar0)
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
			func_145();
			func_146(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_147(bVar0);
	if (func_20() == -1)
	{
		func_149((iParam1 == func_148() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_41()
{
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_150(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_151();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_19(iVar748, 2048);
		if (func_7(func_140()))
		{
			func_8(func_140(), 8);
		}
		func_152(iVar748, 4);
		func_152(iVar748, 8);
		func_147(0);
		if (func_20() == -1)
		{
			func_149(0);
		}
		func_153(iVar748);
		func_32();
		return false;
	}
	else
	{
		func_154(iVar748);
		func_155(iVar748);
		func_156(iVar748);
		if (!func_157(iVar748, 0))
		{
			return false;
		}
	}
	terminate_this_thread();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return func_158(iParam0, 8);
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
	if (!_does_volume_exist(iVar702))
	{
		iLocal_704 = _create_volume_box(1331.149f, -1376.779f, 80.59547f, 0f, 0f, -10.78395f, 3.774825f, 4.500224f, 2.277666f);
	}
	func_159(11, 1331.149f, -1376.779f, 80.59547f, 0f, iVar702);
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2644.397f, -1296.915f, 53.3029f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -306.3943f, 771.1057f, 119.2639f;
		case 3:
			return -815.711f, -1276.18f, 43.997f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -63.95661f;
		case 1:
			return 0f, 0f, 139.649f;
		case 2:
			return 0f, 0f, 10.06205f;
		case 3:
			return 0f, 0f, 89.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18.36461f, 16.07587f, 4.061802f;
		case 1:
			return 12.37f, 19.599f, 5.349f;
		case 2:
			return 9.925132f, 17.83831f, 3.145048f;
		case 3:
			return 7.8f, 12.9f, 2.9f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_50()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_160(16) && !func_160(21))
	{
		return true;
	}
	return false;
}

void func_51(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_52()
{
	iLocal_693 = _create_volume_box_with_custom_name(1344.534f, -1375.4f, 82.18408f, 0f, 0f, -8.804846f, 29.82438f, 13.19476f, 9.722508f, "Rhodes - m_volSaloonRhodes");
	iLocal_694 = _create_volume_box_with_custom_name(1344.534f, -1375.4f, 82.18408f, 0f, 0f, -8.805f, 31.211f, 15.098f, 9.723f, "Rhodes - m_volSaloon Owner");
	iVar0 = 0;
	func_161(&iVar0, 5);
	func_161(&iVar0, 0);
	func_161(&iVar0, 6);
	_0x3caad93fa5b9579a(uVar691, 2, iVar0);
	iLocal_696 = _create_volume_box_with_custom_name(1357.876f, -1377.898f, 79.32545f, 0f, 0f, -10.32368f, 10.42555f, 12.05933f, 2.843383f, "Rhodes - volMuster");
	iLocal_697 = _create_volume_box_with_custom_name(1360.354f, -1378.206f, 79.14488f, 0f, 0f, -10.32368f, 15.39787f, 18.02396f, 6.932768f, "Rhodes - volMusterTrigger");
	iLocal_700 = _create_volume_box_with_custom_name(1339.3f, -1374.427f, 79.7021f, 0f, 0f, -10.32368f, 2.886978f, 2.606258f, 1.753419f, "Rhodes - m_volBartenderBlocking");
	iLocal_698 = _create_volume_box_with_custom_name(1326.769f, -1319.263f, 78.23387f, 0f, 0f, -13.78326f, 10.55599f, 7.824951f, 3.623447f, "Rhodes - volGunSmithComp");
	iLocal_701 = _create_volume_box_with_custom_name(1328.023f, -1321.688f, 77.19518f, 0f, 0f, -13.78326f, 4.057636f, 4.180852f, 1.57183f, "Rhodes - volGunSmithBlocking");
	iLocal_699 = _create_volume_box_with_custom_name(1326.556f, -1292.629f, 76.47516f, 0f, 0f, -24.09748f, 10.50129f, 9.970497f, 3.779005f, "Rhodes - volGeneralStoreComp");
	iLocal_702 = _create_volume_box_with_custom_name(1289.298f, -1305.566f, 76.55548f, 0f, 0f, -39.80577f, 12.64585f, 20.71167f, 5.880062f, "Rhodes - volBankComp");
	iVar1 = 0;
	func_161(&iVar1, 5);
	func_161(&iVar1, 0);
	func_161(&iVar1, 8);
	iVar2 = 0;
	func_161(&iVar2, 5);
	func_161(&iVar2, 0);
	func_161(&iVar2, 7);
	iVar3 = 0;
	func_161(&iVar3, 0);
	func_161(&iVar3, 18);
	iVar4 = 0;
	func_161(&iVar4, 0);
	func_161(&iVar4, 3);
	iVar5 = 0;
	func_161(&iVar5, 4);
	func_161(&iVar5, 5);
	func_161(&iVar5, 0);
	func_161(&iVar5, 15);
	iVar6 = 0;
	func_161(&iVar6, 0);
	func_161(&iVar6, 16);
	_0x3caad93fa5b9579a(uVar635, 2, iVar3);
	_0x3caad93fa5b9579a(uVar698, 4, iVar4);
	_0x3caad93fa5b9579a(uVar694, 2, iVar5);
	_0x3caad93fa5b9579a(uVar695, 2, iVar6);
	_0x3caad93fa5b9579a(uVar696, 2, iVar2);
	_0x3caad93fa5b9579a(uVar699, 4, iVar4);
	_0x3caad93fa5b9579a(uVar697, 2, iVar1);
	_0x3caad93fa5b9579a(uVar700, 2, iVar1);
}

void func_53()
{
	iLocal_695 = _create_volume_box_with_custom_name(1345.534f, -1375.4f, 83.01393f, 0f, 0f, 80.2f, 11.601f, 14.755f, 7.115791f, "volSaloonParlorHouseInterior");
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam0)
		{
			iVar2 = func_162(iParam0, iVar1);
			if (Global_40.f_9829[iVar0]->f_1 != 0)
			{
				if (iVar2 != 0)
				{
					_0x8bc555034a5a5e8c(iVar2, Global_40.f_9829[iVar0]->f_1);
				}
			}
			func_163(iVar0, iParam1[iVar1]);
			func_164(iVar0);
			iVar1++;
		}
		iVar0++;
	}
	iVar3 = (iParam2 - iVar1);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_9829)
		{
			if (&Global_40.f_9829[iVar0] == -1)
			{
				Global_40.f_9829[iVar0] = iParam0;
				iVar2 = func_162(iParam0, iVar1);
				func_163(iVar0, iParam1[iVar1]);
				func_164(iVar0);
				iVar1++;
				iVar3 = (iVar3 - 1);
				if (iVar3 <= 0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_55(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_165(iParam0, 0, 0);
	if (func_166(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_167(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_168(iParam0, 1);
			}
			else
			{
				func_169(iParam0, 1);
			}
		}
		else
		{
			func_170(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_171())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_56()
{
	if (func_77(21) || func_76(21))
	{
		return false;
	}
	return true;
}

bool func_57(char* sParam0)
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

void func_58(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_172(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_57(&(Param0.f_10)))
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
			func_173(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_59()
{
	return 105;
}

char* func_60()
{
	return "shack_beechersb1";
}

int func_61(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (is_thread_active(*uParam2, false))
	{
		return 0;
	}
	if (!_does_volume_exist(func_174(iParam3)))
	{
		return 0;
	}
	if (!is_entity_in_volume(Global_35, func_174(iParam3), true, 0))
	{
		return 0;
	}
	if (bParam8)
	{
		vVar1 = { func_175(iParam1) };
		if (!func_176(vVar1))
		{
			if (func_177(vVar1, 1, 776, 0))
			{
				return 0;
			}
		}
	}
	if ((bParam6 && func_75(128, 0, 1)) && !iParam1 == 64)
	{
		return 0;
	}
	if (bParam7 && func_178(get_player_index(), 1, 1, 1))
	{
		return 0;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = func_181(func_179(iParam1), 0, 3, func_180(iParam1));
	func_182(&(uParam0->f_5), &(uParam0->f_3));
	if (!func_183(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!func_183(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!func_183(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!func_183(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!func_183(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!func_184(uParam0))
		{
			return 0;
		}
	}
	if (!func_183(uParam0->f_3, iVar0))
	{
		if (func_183(uParam0->f_3, 2))
		{
			if (!is_thread_active(*uParam2, false))
			{
				request_script(sParam5);
				if (has_script_loaded(sParam5))
				{
					uParam0->f_52 = { func_185(iParam1) };
					uParam0->f_5 = func_181(func_179(iParam1), 0, 3, func_180(iParam1));
					*uParam2 = start_new_script_with_args(sParam5, uParam0, 59, 1024);
					set_script_as_no_longer_needed(sParam5);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_62(int iParam0, bool bParam1)
{
	if (!func_186(iParam0))
	{
		return;
	}
	Global_17504.f_42[iParam0]->f_7 = !bParam1;
}

bool func_63(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_64(int iParam0)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return func_158(iParam0, 33554432);
}

void func_65(int iParam0)
{
	Global_1415398->f_1 = iParam0;
}

bool func_66()
{
	if (func_188(45, 2) == 3)
	{
		return false;
	}
	if (func_189(45, 2) == 5 || func_189(45, 2) == 6)
	{
		if ((!func_190() && func_189(45, 4) == 1) || (func_190() && func_189(45, 4) == 2))
		{
			iVar0 = func_191();
			iVar1 = func_192(45, 2);
			func_193(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
			if (iVar5 >= 1 || iVar4 > 6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_67(int iParam0)
{
	if (!(*Global_1396257)[iParam0]->f_630)
	{
		(*Global_1396257)[iParam0]->f_630 = 1;
	}
}

bool func_68(int iParam0)
{
	if (!func_194(iParam0))
	{
		return false;
	}
	return func_195(iParam0);
}

int func_69(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, int iParam10)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = { func_197(sParam3) };
	uParam0->f_12 = iParam4;
	uParam0->f_13 = { vParam5 };
	uParam0->f_16 = fParam8;
	uParam0->f_17 = iParam9;
	uParam0->f_18 = iParam10;
}

void func_71()
{
	func_198(&uLocal_363);
	func_199();
	Local_318 = 74;
	Local_318.f_24 = 3;
	iLocal_625 = 0;
	iLocal_624 = 0;
	func_200(&Local_318, 2048);
}

bool func_72(int iParam0)
{
	iVar0 = func_201(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_202(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_74(int iParam0, char[32] cParam1, int iParam9)
{
	if (is_string_null_or_empty(&cParam1))
	{
		return 0;
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (iVar0 != 0 && func_205(iParam0))
	{
		(*Global_1360165)[iParam0]->f_39 = { cParam1 };
		_0x187d65f3aec5d679(iVar0, &cParam1);
		func_206(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_191();
			func_207(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0]->f_46 = iVar1;
			Global_40.f_4942[iParam0]->f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0]->f_46 = -15;
			Global_40.f_4942[iParam0]->f_49 = 0;
		}
		(*Global_1360165)[iParam0]->f_56 = 1;
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, bool bParam1, bool bParam2)
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
		if (func_208())
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
		iVar0 = func_209(&(Global_1898164->f_1[0]));
		if (func_210(iVar0) && func_211((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_212(&(Global_1898164->f_1[0])))
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

bool func_76(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_213((*Global_1835011)[iParam0]->f_1);
}

bool func_77(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_214((*Global_1835011)[iParam0]->f_1);
}

bool func_78(int iParam0)
{
	return func_215(iParam0, 16, 1);
}

int func_79(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_216(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_217(iParam0, 2, 1))
			{
				func_218(iParam0, 2, 1);
			}
			if (func_215(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_206(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_219(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_220(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_220(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_221(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_206(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_222(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_206(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_222(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_217(iParam0, 44, 0))
			{
				func_206(iParam0, 44, 0);
			}
			if (func_223(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_222(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_218(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_224(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_225(iParam0, 0, 0, 1);
			}
			func_218(iParam0, 33, 1);
			func_218(iParam0, 34, 1);
			func_218(iParam0, 29, 1);
			if (!func_176(vVar0) && bParam7)
			{
				func_222(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_222(iParam0, 4);
			}
			else
			{
				func_222(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_221(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_226(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_222(iParam0, 4);
			}
			else
			{
				func_222(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_227(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_228(iParam0, iParam13, 0);
						func_229(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_217(iParam0, 25, 0))
						{
							func_218(iParam0, 25, 0);
						}
						func_206(iParam0, 66, 0);
						func_222(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_222(iParam0, 5);
				}
				func_206(iParam0, 28, 1);
			}
			else
			{
				func_222(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_222(iParam0, 6);
			}
			break;
		case 6:
			if (func_220(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_230(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_231(Global_1360165[iParam0], 1);
				}
			}
			func_222(iParam0, 7);
		case 7:
			func_224(iParam0, bParam9, bParam15, 0);
			func_232(iParam0, 4, bParam11);
			func_233(iParam0);
			if (bParam20)
			{
				if (func_234(Global_1360165[iParam0]))
				{
				}
			}
			func_235(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_222(iParam0, 0);
			func_236(iParam0, 16, 1);
			func_218(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_105(iParam0))
	{
		return 1;
	}
	if (func_158(iParam0, 16))
	{
		return 1;
	}
	if (func_64(iParam0) && !func_237(iParam0))
	{
	}
	if (func_238(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_196(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_196(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_64(iParam0) || func_237(iParam0)) || func_239(&Global_1897950))
			{
				func_240(&Global_1897950, 0);
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

void func_81(int iParam0, var uParam1)
{
	if (func_20() == -1)
	{
		(*Global_1934182)[iParam0]->f_7 = uParam1;
		if (!func_241(iParam0))
		{
			func_242(iParam0);
		}
		func_243(16);
		func_243(32);
	}
	Global_1934182->f_75 = 0;
}

void func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_244(0, 0, -1477943109);
			func_244(0, 1, 2089945615);
			func_244(0, 2, -2136681514);
			func_244(0, 3, 1733501235);
			break;
		case 3:
			func_244(3, 0, 531022111);
			break;
		case 2:
			func_244(2, 0, -408139633);
			func_244(2, 1, -1652509687);
			break;
		case 1:
			func_244(1, 0, -977211145);
			func_244(1, 1, -1206757990);
			break;
	}
}

void func_83(int iParam0, int iParam1)
{
	func_55(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_84(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_85(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_86(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_87(int iParam0, var uParam1, int iParam2)
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

int func_88(var uParam0, bool bParam1, int iParam2)
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
	if (uParam0->f_2 != func_245())
	{
		return -1;
	}
	if (!func_246(uParam0->f_1))
	{
		return -1;
	}
	if (func_64(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_247(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_248(&iVar2))
		{
			return -1;
		}
	}
	func_249(*uParam0, iVar2);
	bVar1 = func_250(uParam0->f_1, 131072);
	func_251(uParam0->f_1);
	iVar3 = func_252(uParam0->f_1, *uParam0);
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
		func_253(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_253(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_253(uParam0->f_1, 131072);
	}
	if (func_254(iVar3) || (!func_213(iVar3) && func_255(0) != iVar3))
	{
		iVar0 = func_256(iVar3);
		if (iVar0 == -1)
		{
			func_257(iVar3);
		}
	}
	return iVar2;
}

void func_89(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_176(vParam1))
	{
		return;
	}
	func_258(iParam0);
	Global_1935369->f_5[iParam0]->f_1 = { vParam1 };
	Global_1935369->f_5[iParam0]->f_4 = uParam4;
	Global_1935369->f_5[iParam0]->f_5 = iParam5;
	Global_1935369->f_5[iParam0]->f_6 = func_259(iParam5, iParam0);
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_260(iParam3, iParam0);
	vVar1 = { func_261(iVar0) };
	vVar4 = { func_262(iVar0) };
	if (func_176(vVar1))
	{
		return;
	}
	if (!func_263(19, 16384))
	{
		if (!func_196(iParam1))
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
	func_264(iParam0);
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	if (func_176(vVar4))
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
	if (func_265(iVar0) || func_266(iVar0, iParam0))
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
		Global_1914319->f_3[iParam0]->f_20 = func_181(5, Global_1914319->f_3[iParam0]->f_10, 2, iVar7);
	}
	*Global_1393529->f_114[iParam0] = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_267(iParam0);
	}
	Global_1914319->f_3[iParam0]->f_19 = fParam7;
	Global_1914319->f_3[iParam0]->f_8 = iParam6;
	if (!func_268(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_269(iParam3);
			break;
		case 10:
			func_96(iParam3);
			break;
		case 18:
			func_270();
			break;
		case 9:
			func_271();
			break;
		case 22:
			func_97();
			break;
	}
	func_272(Global_1914319->f_3[iParam0]->f_10);
	func_273(iParam0, 16);
	func_274(iParam0, 4);
	_0x748c5f51a18cb8f0(1);
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_275(iParam0);
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

void func_92(int iParam0, vector3 vParam1, float fParam4)
{
	*Global_1393529->f_114[iParam0] = { vParam1 };
	Global_1393529->f_220[iParam0] = fParam4;
}

bool func_93(int iParam0)
{
	return iParam0 != 0;
}

bool func_94(int iParam0)
{
	func_165(iParam0, 0, 0);
	if (func_166(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

void func_95(int iParam0, var uParam1)
{
	Global_1914319->f_3[iParam0]->f_30 = uParam1;
}

void func_96(int iParam0)
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

void func_97()
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

bool func_98()
{
	if (func_276(0) > 0 || func_276(1) > 0)
	{
		return true;
	}
	return false;
}

void func_99(int iParam0, bool bParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_278(iParam0, 1);
	}
	else
	{
		func_279(iParam0, 1);
	}
	func_281(func_280(iParam0), bParam1);
}

void func_100(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	uParam0->f_3 = iParam1;
	uParam0->f_5 = uParam2;
	uParam0->f_6 = uParam3;
	uParam0->f_7 = uParam4;
}

bool func_101(int iParam0, int iParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_282(iParam0, 0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	iVar0 = func_283(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return true;
}

void func_102(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_103(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (_0x5b7b97e99f84138b(player_id()))
	{
		return;
	}
	if (&Global_1415404)
	{
		if (!func_57("region_town_lockdown_generic"))
		{
			Global_1415404 = _get_number_of_references_of_script_with_name_hash(-322696182) > 0;
		}
		return;
	}
	if (Global_1935630->f_22 || Global_1934266->f_61)
	{
		return;
	}
	if (func_284(iParam0))
	{
		if (!bParam1)
		{
		}
		Global_1415404 = 1;
		StringCopy(&(Var0.f_10), "region_town_lockdown_generic", 32);
		Var0.f_15 = 1;
		Var0 = iParam0;
		Var0.f_3 = bParam1;
		Var0.f_14 = 1024;
		func_58(Var0, 0);
	}
}

void func_104(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_285(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_105(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

var func_107(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_286(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_108()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_287(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_109(int iParam0, int iParam1)
{
	if (!func_287(iParam0))
	{
		return;
	}
	if (!func_288(iParam1))
	{
		return;
	}
	(*Global_1898130)[iParam0] = iParam1;
}

bool func_110()
{
	return Global_1898164->f_163;
}

void func_111(var uParam0)
{
	func_289(&uLocal_363);
	if (!func_290())
	{
		func_291(uParam0);
	}
}

bool func_112(int iParam0, int iParam1)
{
	if (!func_292(iParam0))
	{
		return false;
	}
	if (func_293(iParam1))
	{
		return false;
	}
	return func_294(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15768[iParam0] && iParam1) != 0;
}

void func_114(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_295(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_296(Global_23118.f_1651[iVar1], iParam2);
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	if ((func_297() || func_134(&Global_1935630, 2048)) || is_screen_faded_out())
	{
		return;
	}
	if (iParam0 == 105 || iParam0 == 95)
	{
		if (!func_50())
		{
			func_298(uParam1, uParam2);
			return;
		}
		if (!func_299(iParam0))
		{
			func_298(uParam1, uParam2);
			return;
		}
		iVar0 = func_300(iParam0, func_160(17));
		bVar1 = func_301(2048);
		bVar2 = func_301(1024);
		if (!uParam2->f_3)
		{
			_0x0751d461f06e41ce(player_id(), 7, 0, 1);
			_0x0751d461f06e41ce(player_id(), 20, 0, 1);
			_0x0751d461f06e41ce(player_id(), 19, 0, 1);
			_0x0751d461f06e41ce(player_id(), 10, 0, 1);
			_0x0751d461f06e41ce(player_id(), 4, 0, 1);
			uParam2->f_3 = 1;
		}
	}
	else
	{
		iVar0 = 175;
		bVar1 = false;
		bVar2 = false;
	}
	func_302(uParam1, bVar1, bVar2);
	iVar3 = _get_map_zone_at_coords(Global_36, 1);
	if (func_303(iVar3) == iParam0)
	{
		if (func_304() || func_305())
		{
			*uParam2 = 1;
		}
		else if (*uParam2)
		{
			func_306(iVar0, 1);
			*uParam2 = 0;
		}
		if (!uParam2->f_1)
		{
			if (uParam2->f_2 < 3)
			{
				func_306(iVar0, 1);
				uParam2->f_2++;
			}
			uParam2->f_1 = 1;
		}
		if (uParam2->f_1 && (((is_control_pressed(0, -1304887797) || is_disabled_control_pressed(0, -1304887797)) || is_control_just_pressed(0, -1304887797)) || is_disabled_control_just_pressed(0, -1304887797)))
		{
			if (uParam2->f_2 < 3)
			{
				func_306(iVar0, 1);
				uParam2->f_2++;
			}
		}
		_0x8674d138391ffb1b(player_id(), 1);
		_0x9f9a829c6751f3c7(player_id(), 49, 1);
		set_ped_reset_flag(Global_35, 49, true);
		disable_control_action(0, -562475458, false);
		disable_control_action(0, 2028806450, false);
		disable_control_action(0, 371916472, false);
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
		disable_control_action(0, 440314811, false);
		disable_control_action(0, -1616532217, false);
		set_ped_reset_flag(Global_35, 185, true);
		if (!bVar1)
		{
			_0xc9caeaeec1256e54(1833957607);
			func_307();
			if (Global_1935630->f_44 != -160924582)
			{
				disable_control_action(0, -1304887797, false);
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
		}
		if (!is_ped_in_melee_combat(Global_35) && !bVar2)
		{
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 578288361, false);
		}
	}
	else
	{
		func_308();
		uParam2->f_1 = 0;
	}
}

void func_116()
{
	if (!func_309(105))
	{
		return;
	}
	func_310(105);
}

void func_117()
{
	iVar0 = get_interior_at_coords(1296.185f, -1132.093f, 83.05431f);
	if (is_valid_interior(iVar0))
	{
		if (is_interior_ready(iVar0))
		{
			if (func_72(1441416901))
			{
				if (is_interior_entity_set_active(iVar0, "rho_slum_player_trelawny01_stage_01"))
				{
					deactivate_interior_entity_set(iVar0, "rho_slum_player_trelawny01_stage_01", true);
				}
				if (!is_interior_entity_set_active(iVar0, "rho_slum_player_trelawny01_stage_02"))
				{
					activate_interior_entity_set(iVar0, "rho_slum_player_trelawny01_stage_02", 0);
				}
			}
			else
			{
				if (is_interior_entity_set_active(iVar0, "rho_slum_player_trelawny01_stage_02"))
				{
					deactivate_interior_entity_set(iVar0, "rho_slum_player_trelawny01_stage_02", true);
				}
				if (!is_interior_entity_set_active(iVar0, "rho_slum_player_trelawny01_stage_01"))
				{
					activate_interior_entity_set(iVar0, "rho_slum_player_trelawny01_stage_01", 0);
				}
			}
		}
	}
}

void func_118()
{
	iVar0 = 1;
	if (iVar739 != iVar0)
	{
		iVar1 = get_interior_at_coords(1323.004f, -1322.389f, 77.93784f);
		if (is_valid_interior(iVar1))
		{
			if (is_interior_ready(iVar1) && (get_interior_from_entity(Global_35) != iVar1 || is_screen_faded_out()))
			{
				if (iVar0 == 1)
				{
					activate_interior_entity_set(iVar1, "RHO_GUN_REGISTER", 0);
				}
				Global_1393521->f_1 = 1;
				iLocal_741 = iVar0;
			}
		}
	}
}

void func_119(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1396116->f_139)
	{
		Global_1396116->f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam0)
		{
			iVar2 = func_311(iParam0, iVar1);
			iVar3 = func_312(iVar2);
			if (!is_ped_injured(iVar3))
			{
				if (!func_313(iVar0, 2))
				{
					set_ped_config_flag(iVar3, 146, true);
					func_314(iVar0, 2);
					func_315(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				func_316(iVar0, 2);
				if (vdist(func_317(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116->f_140)
					{
						if (func_318(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116->f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_120()
{
	if (func_72(1352699670) || !func_72(-1282804314))
	{
		return;
	}
	vVar0 = { 1239.908f, -1380.916f, 74.387f };
	switch (iVar734)
	{
		case 0:
			_request_scenario_type(-347404717, 15, 0, 0);
			if (_has_scenario_type_loaded(-347404717, false))
			{
				iLocal_736 = 1;
			}
			break;
		case 1:
			iLocal_739 = func_319(950884098, vVar0);
			if (does_entity_exist(iVar737))
			{
				iLocal_736 = 2;
			}
			break;
		case 2:
			freeze_entity_position(iVar737, true);
			uLocal_737 = create_scenario_point_attached_to_entity(iVar737, -347404717, 0f, 0f, 0f, 0, 0, 0, 1);
			iLocal_736 = 3;
			break;
		case 3:
			if (does_entity_exist(Global_35) && !is_ped_dead_or_dying(Global_35, true))
			{
				if (_get_scenario_point_ped_is_using(Global_35, false) == iVar735)
				{
					iLocal_736 = 4;
				}
			}
			break;
		case 4:
			if (!is_ped_using_any_scenario(Global_35))
			{
				_0xb1f6665aa54dcd5c(146855730);
				func_320(146855730, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				freeze_entity_position(iVar737, false);
				iLocal_736 = 5;
			}
			break;
		case 5:
			if (!func_72(1352699670))
			{
				func_321(1352699670);
			}
			break;
	}
}

bool func_121(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_36);
}

bool func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_322(func_191());
	if (func_323(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_323(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_323(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_323(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_323(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_323(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_323(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_323(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_323(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_323(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_323(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_323(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_323(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_323(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_323(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_323(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_323(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_123(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_124(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_125()
{
	func_324(88);
}

bool func_126(int iParam0, int iParam1)
{
	if (!func_292(iParam0))
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

void func_127(int iParam0)
{
	if (!does_entity_exist(func_325(iParam0)))
	{
		return;
	}
	if (func_326(iParam0, 0))
	{
		return;
	}
	if (!_is_ped_using_scenario_hash(iParam0, 1951271908))
	{
		return;
	}
	if (!is_ped_active_in_scenario(iParam0, 0))
	{
		return;
	}
	if (bLocal_10)
	{
		return;
	}
	switch (iLocal_9)
	{
		case 0:
			iLocal_13 = func_327(func_245());
			iLocal_12 = func_328(iLocal_13);
			iLocal_9 = 1;
			break;
		case 1:
			if (is_model_valid(iLocal_12))
			{
				request_model(iLocal_12, false);
				iLocal_9 = 2;
			}
			break;
		case 2:
			if (!has_model_loaded(iLocal_12))
			{
				return;
			}
			if (!does_entity_exist(func_325(iParam0)))
			{
				return;
			}
			iLocal_11 = _0x4d0d2e3d8bc000eb(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 0);
			if (does_entity_exist(iLocal_11))
			{
				iLocal_11 = _0x4d0d2e3d8bc000eb(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 1);
				delete_object(&iLocal_11);
				if (!does_entity_exist(iLocal_11))
				{
					iLocal_11 = create_object(iLocal_12, get_entity_coords(iParam0, false, false) + Vector(3f, 0f, 0f), true, true, false, false, true);
				}
				if (does_entity_exist(iLocal_11))
				{
					if (_0x3bbdd6143ff16f98(iParam0, iLocal_11, "p_cs_newspaper_02x_noanim_PH_L_HAND", "WORLD_HUMAN_SELL_PAPER", "WORLD_HUMAN_SELL_PAPER_MALE_A", 1))
					{
						set_model_as_no_longer_needed(iLocal_12);
						iLocal_9 = 3;
					}
				}
			}
			else
			{
				return;
			}
			break;
		case 3:
			bLocal_10 = true;
			break;
	}
}

void func_128(var uParam0, int iParam1, bool bParam2)
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

void func_129()
{
	if (!does_entity_exist(Global_1914319->f_3[4]->f_23))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[4]->f_23);
	if (!func_326(iVar0, 0))
	{
		if (is_ped_fleeing(iVar0))
		{
			task_cower(iVar0, 30000, 0, 0);
			set_ped_keep_task(iVar0, true);
			func_279(27, 1048576);
			func_274(4, 16777216);
		}
		else if (get_is_task_active(iVar0, 7))
		{
			if (func_294(27, 1048576))
			{
				func_278(27, 1048576);
			}
			if (func_329(4, 16777216))
			{
				func_273(4, 16777216);
			}
		}
	}
}

void func_130()
{
	if ((get_frame_count() % 20) != 0)
	{
		return;
	}
	iVar0 = 79;
	iVar1 = func_312(iVar0);
	if (!does_entity_exist(iVar1))
	{
		if (bVar741)
		{
			iLocal_744 = 0;
			iLocal_743 = 0;
		}
		return;
	}
	iVar2 = func_191();
	iVar3 = func_322(iVar2);
	if (!is_entity_dead(iVar1))
	{
		if ((_is_ped_using_scenario_hash(iVar1, 1595886358) && _0xbe28db99556ff8d9(iVar1) != 0) && !func_330(iVar0, 0))
		{
			if (iVar3 > 16 || iVar3 < 6)
			{
				if (iVar742 != 1180906091)
				{
					iLocal_744 = 1180906091;
					if (!bVar741)
					{
						_0x8e901b65206c2d3e(iVar1);
						_0xb93a769b8b726950(iVar1, iVar742);
						_0xc4cfce4c656ef480(iVar1);
						iLocal_743 = 1;
					}
					else
					{
						_0xb93a769b8b726950(iVar1, iVar742);
					}
				}
			}
			else if (iVar3 <= 16 || iVar3 >= 6)
			{
				if (iVar742 != -752894780)
				{
					iLocal_744 = -752894780;
					if (!bVar741)
					{
						_0x8e901b65206c2d3e(iVar1);
						_0xb93a769b8b726950(iVar1, iVar742);
						_0xc4cfce4c656ef480(iVar1);
						iLocal_743 = 1;
					}
					else
					{
						_0xb93a769b8b726950(iVar1, iVar742);
					}
				}
			}
		}
		else if (bVar741 && !_is_ped_using_scenario_hash(iVar1, 1595886358))
		{
			iLocal_743 = 0;
			iLocal_744 = 0;
		}
	}
}

void func_131(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_6))
	{
		return;
	}
	if (uParam0->f_17 > 0)
	{
		if (func_110())
		{
			uParam0->f_17 = 4;
		}
		if (!_0xf256a75210c5c0eb(uParam0->f_5, Global_36) && func_331(uParam0, 8, 0, 1))
		{
			uParam0->f_17 = 4;
		}
		if (_0xf256a75210c5c0eb(uParam0->f_7, Global_36))
		{
			if (func_331(uParam0, 65536, 0, 1))
			{
				func_332(uParam0, 1);
				uParam0->f_17 = 3;
			}
		}
		if (func_333(Global_35, 1, 0, 0) != -1569615261 && func_331(uParam0, 4096, 0, 1))
		{
			func_332(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_334(Global_35, uParam0->f_5) && func_331(uParam0, 2048, 0, 1))
		{
			func_332(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_335(&uVar0) && func_331(uParam0, 256, 0, 1))
		{
			func_332(uParam0, 1);
			uParam0->f_17 = 3;
		}
	}
	switch (uParam0->f_17)
	{
		case 0:
			if (func_178(player_id(), 1, 0, 1) || func_110())
			{
				return;
			}
			if (_0xf256a75210c5c0eb(uParam0->f_5, Global_36))
			{
				if (!func_196(uParam0->f_3))
				{
					return;
				}
				if (!_0x800df3fc913355f3(func_283(uParam0->f_3)))
				{
					return;
				}
				uParam0->f_4 = func_312(uParam0->f_3);
				if (is_entity_dead(uParam0->f_4))
				{
					return;
				}
				func_336(uParam0);
				set_ped_config_flag(uParam0->f_4, 130, true);
				_0x85f500f4e24ca43e(uParam0->f_4, 0f);
				_0x9b9b9fa0ea283e3d(uParam0->f_4, 0f);
				uParam0->f_17 = 1;
			}
			break;
		case 1:
			bVar2 = false;
			if ((_0xf256a75210c5c0eb(uParam0->f_6, Global_36) && !func_337(uParam0)) && func_338(uParam0, -1))
			{
				if (func_339(0) && func_331(uParam0, 128, 0, 1))
				{
					bVar2 = true;
				}
				else if (func_335(&uVar1) && func_331(uParam0, 256, 0, 1))
				{
					uParam0->f_17 = 3;
				}
				else if (func_331(uParam0, 64, 0, 1))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				uParam0->f_17 = 2;
			}
			break;
		case 2:
			if (!_0xf256a75210c5c0eb(uParam0->f_6, Global_36))
			{
				if (func_338(uParam0, 30))
				{
					if (func_331(uParam0, 16, 0, 1))
					{
					}
				}
			}
			break;
		case 3:
			if (func_178(player_id(), 1, 0, 1) || func_334(Global_35, uParam0->f_5))
			{
				if (!func_340(Global_35, 474215631))
				{
					task_cower(uParam0->f_4, -1, Global_35, 0);
				}
				if (func_331(uParam0, 1048576, 0, 1))
				{
				}
				uParam0->f_17 = 4;
			}
			else if ((_0xf256a75210c5c0eb(uParam0->f_7, Global_36) == 0 && func_333(Global_35, 1, 0, 0) == -1569615261) && !func_335(&uVar1))
			{
				bVar3 = false;
				if (func_331(uParam0, 8192, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_331(uParam0, 16384, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_331(uParam0, 32768, 0, 0))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					func_341(uParam0, 65536);
					func_341(uParam0, 256);
					func_341(uParam0, 4096);
					func_332(uParam0, 0);
					uParam0->f_17 = 0;
				}
			}
			break;
		case 4:
			set_ped_config_flag(uParam0->f_4, 130, false);
			set_blocking_of_non_temporary_events(uParam0->f_4, false);
			_0x85f500f4e24ca43e(uParam0->f_4, -1f);
			_0x9b9b9fa0ea283e3d(uParam0->f_4, -1f);
			func_342(uParam0);
			uParam0->f_17 = 0;
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_132(var uParam0)
{
	if (!uParam0->f_18 && func_23(269, 0))
	{
		if (*uParam0 < 7)
		{
			*uParam0 = 8;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_176(uParam0->f_13))
			{
				*uParam0 = 9;
			}
			if (!_0x800df3fc913355f3(_0x112ddf56300bc6e5(func_69(uParam0->f_1))))
			{
				*uParam0 = 9;
			}
			*uParam0 = 1;
			break;
		case 1:
			if (uParam0->f_19 && !does_entity_exist(uParam0->f_11))
			{
				_0x7d4e70a67a651c71(2);
				uParam0->f_19 = 0;
			}
			if (!func_343(uParam0))
			{
				return;
			}
			if (uParam0->f_12 != 0)
			{
				request_model(uParam0->f_12, false);
			}
			else
			{
				*uParam0 = 9;
				return;
			}
			if (uParam0->f_17 != 0)
			{
				_request_propset(uParam0->f_17);
			}
			*uParam0 = 2;
			break;
		case 2:
			if (func_344(uParam0))
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (func_343(uParam0))
			{
				if (func_345(uParam0))
				{
					*uParam0 = 9;
					return;
				}
				if (!uParam0->f_19)
				{
					_0xf008e0ba1fe1d644(2);
					uParam0->f_19 = 1;
				}
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!func_344(uParam0))
			{
				*uParam0 = 1;
				return;
			}
			if (func_346(uParam0))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_347(uParam0))
			{
				func_348(uParam0);
				*uParam0 = 1;
			}
			if (func_349(uParam0))
			{
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!is_string_null_or_empty(&(uParam0->f_3)))
			{
				_0x187d65f3aec5d679(func_69(uParam0->f_1), &(uParam0->f_3));
			}
			if (does_entity_exist(_0x31c70a716cae1fee(_0x112ddf56300bc6e5(func_69(uParam0->f_1)))))
			{
				*uParam0 = 6;
			}
			else
			{
				*uParam0 = 9;
			}
			break;
		case 6:
			if (_0xf8de7154f7d1458f(_0x112ddf56300bc6e5(func_69(uParam0->f_1))) == uParam0->f_11)
			{
				*uParam0 = 9;
			}
			else
			{
				_0x669c25840c6f7ae2(_0x112ddf56300bc6e5(func_69(uParam0->f_1)), uParam0->f_11);
			}
			break;
		case 8:
			if (!does_entity_exist(uParam0->f_11))
			{
				*uParam0 = 9;
				return;
			}
			if (is_screen_faded_out())
			{
				func_348(uParam0);
				*uParam0 = 9;
				return;
			}
			if (!is_sphere_visible(get_entity_coords(uParam0->f_11, true, false), 3f))
			{
				func_348(uParam0);
				*uParam0 = 9;
			}
			break;
		case 9:
			if (func_350(uParam0))
			{
				*uParam0 = 10;
			}
			break;
		case 10:
			return;
	}
}

void func_133(int iParam0)
{
	if (func_351(iParam0, Global_36))
	{
		if (does_entity_exist(Global_35))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
			set_ped_reset_flag(Global_35, 168, true);
		}
	}
}

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_136()
{
	return func_134(&Global_1935630, 4096);
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_138(int iParam0)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_352(iParam0));
}

bool func_139(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_140()
{
	return Global_1897952->f_41;
}

void func_141(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_353())
	{
		return;
	}
	sVar1 = func_354(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_355(iParam4))
	{
		if (func_105(iParam0))
		{
			iParam4 = func_356(func_6(iParam0));
		}
		else
		{
			iParam4 = func_356(iParam1);
		}
	}
	if (func_355(iParam4))
	{
		iVar3 = func_357(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_359(func_358(iParam2));
	}
	else if ((func_360(iParam1, 2) || func_361(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_105(iParam0) && func_158(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_322(func_191());
		iVar5 = func_362(func_191());
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
				fVar7 = func_363(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_364(&cVar6, 109029619), sVar9, func_364(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_363(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_364(&cVar6, 109029619), func_364(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_365(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_142(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_143(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_366(128))
	{
		return;
	}
	if (!func_367(iParam0))
	{
		return;
	}
	if (func_158(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_368(Global_1935630, 8192);
	func_370(func_369(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_370(func_369(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_370(func_369(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_370(func_369(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_370(func_369(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_370(func_369(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_370(func_369(-1532769513, -910218296), 1);
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

bool func_144()
{
	return (Global_1894899 & 1 != 0 && func_245() != -1);
}

void func_145()
{
	if (!func_186(&Global_1327479))
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
	func_371(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_146(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_372() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_186(iVar1) && !func_373(iVar1, iParam2)) && (!bParam3 || !func_374(iVar1))) && (!bParam4 || !func_375(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_376(iVar0);
			}
		}
		iVar0++;
	}
}

void func_147(bool bParam0)
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

int func_148()
{
	return Global_40.f_4283.f_1;
}

void func_149(bool bParam0)
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

bool func_150(int iParam0)
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

void func_151()
{
	func_377();
}

void func_152(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_153(int iParam0)
{
	func_62(89, 0);
	func_62(92, 0);
	func_378(4);
	func_102(0.775f, 0.2f, 0.025f, 0f);
	if (_does_volume_exist(iVar687))
	{
		_0x74c2b3dc0b294102(iVar687);
		_0xa1cfb35069d23c23(iVar687);
	}
	func_65(0);
	func_379(14);
	func_298(uVar634, &uLocal_711);
	func_380(1, 16);
	func_381(iVar701);
	_remove_speed_zone(iVar737);
	_0x9667cce29bfa0780(1819512979);
	func_382(&uLocal_14);
	func_128(&uLocal_745, iVar687, 0);
	if (_does_text_database_exist("SCVRAUD"))
	{
		if (_text_database_has_loaded("SCVRAUD"))
		{
			_text_database_delete("SCVRAUD");
		}
	}
	if (_does_text_database_exist("RHRGNAU"))
	{
		if (_text_database_has_loaded("RHRGNAU"))
		{
			_text_database_delete("RHRGNAU");
		}
	}
	if (_does_text_database_exist("REDBAUD"))
	{
		if (_text_database_has_loaded("REDBAUD"))
		{
			_text_database_delete("REDBAUD");
		}
	}
	if (_does_text_database_exist("REPAAUD"))
	{
		if (_text_database_has_loaded("REPAAUD"))
		{
			_text_database_delete("REPAAUD");
		}
	}
	if (_does_text_database_exist("RHDSTFA"))
	{
		if (_text_database_has_loaded("RHDSTFA"))
		{
			_text_database_delete("RHDSTFA");
		}
	}
	if (_does_text_database_exist("SRRGAUD"))
	{
		if (_text_database_has_loaded("SRRGAUD"))
		{
			_text_database_delete("SRRGAUD");
		}
	}
	func_383();
	if (func_384(23))
	{
		func_219(23, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_350(&uLocal_715);
}

void func_154(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369->f_5[iVar0]->f_5 == iParam0)
		{
			func_258(iVar0);
		}
		iVar0++;
	}
}

void func_155(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_264(iVar0);
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	iVar0 = func_385(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_386(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_157(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (!func_105(iParam0))
	{
		return true;
	}
	if (func_238(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_387(Global_1897950->f_1, 16))
			{
				func_388(Global_1897950->f_1, 0);
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

bool func_158(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_159(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!func_389(iParam0))
	{
		return;
	}
	if (func_176(vParam1))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_15 = { vParam1 };
	Global_1395601->f_5[iParam0]->f_18 = fParam4;
	Global_1395601->f_5[iParam0]->f_23 = iParam5;
	if (_does_volume_exist(iParam5))
	{
	}
	if (!func_75(242, 1, 1))
	{
		func_390(iParam0, 1);
	}
	func_391(iParam0);
	func_392(iParam0, 1);
	Global_40.f_9384[iParam0]->f_1 = func_191();
}

bool func_160(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_393((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_161(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

int func_162(int iParam0, int iParam1)
{
	return func_69(func_311(iParam0, iParam1));
}

void func_163(int iParam0, var uParam1)
{
	Global_1396116->f_98[iParam0] = uParam1;
}

void func_164(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	Global_1396116->f_98[iParam0]->f_1 = func_191();
}

int func_165(int iParam0, bool bParam1, bool bParam2)
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

bool func_166(int iParam0)
{
	if (func_93(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_167(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_166(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (func_166(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (func_166(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_170(int iParam0, bool bParam1)
{
	if (func_166(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_171()
{
	return true;
}

bool func_172(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_173(int iParam0)
{
	if (func_172(iParam0, 1))
	{
		func_394(1);
	}
}

int func_174(int iParam0)
{
	if (!func_105(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

Vector3 func_175(int iParam0)
{
	switch (iParam0)
	{
		case 32768:
			return 2118.586f, -1836.796f, 40.5503f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_176(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_177(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_176(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

int func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_395(bParam1, bParam2, bParam3);
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

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_396())
	{
		iVar2 = func_396();
	}
	iVar5 = func_397(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_398(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_398(iVar6) == 0)
			{
				return func_399(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_398(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_398(iVar6) == 0)
			{
				return func_399(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_399(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_182(var uParam0, var uParam1)
{
	if (func_212(*uParam0))
	{
		*uParam1 = func_400(*uParam0);
		if (!func_183(*uParam1, 2))
		{
			func_401(uParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_184(var uParam0)
{
	if ((!func_183(uParam0->f_3, 32768) && func_402(uParam0->f_1, &fVar1)) && func_403(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = func_404();
		if ((func_404() - fVar1) >= fVar0)
		{
			func_401(&(uParam0->f_3), 32768);
		}
	}
	if (func_183(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

Vector3 func_185(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1553.069f, 254.0002f, 113.7989f;
		case 4:
			return 1457.149f, -1578.779f, 72.1939f;
		case 8:
			return 1783.498f, 462.5527f, 112.0378f;
		case 16:
			return 1982.539f, 1192.392f, 170.408f;
		case 32:
			return -155.8262f, 1491.054f, 111.7707f;
		case 64:
			return -2054.879f, -1912.227f, 111.2719f;
		case 128:
			return -1021.743f, 1692.386f, 243.3139f;
		case 256:
			return 32.3207f, 2092.403f, 276.5115f;
		case 512:
			return 1888.854f, 301.6055f, 76.1451f;
		case 1024:
			return -2370.078f, 472.8013f, 131.228f;
		case 2048:
			return 1666.794f, 2180.789f, 316.349f;
		case 4096:
			return 1134.444f, -979.7666f, 68.4026f;
		case 8192:
			return -1728.583f, -83.1805f, 180.4762f;
		case 16384:
			return -1961.996f, 2159.51f, 327.3775f;
		case 32768:
			return 2089.364f, -1816.956f, 42.7298f;
		case 65536:
			return 1389.751f, -2083.81f, 56.0727f;
		case 131072:
			return -690.1562f, 1043.87f, 134.0042f;
		case 262144:
			return 1184.4f, -101.4f, 97.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_186(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_187(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_188(int iParam0, int iParam1)
{
	iVar0 = func_405(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_2;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	iVar0 = func_405(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

bool func_190()
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

int func_191()
{
	return &Global_1899515;
}

int func_192(int iParam0, int iParam1)
{
	iVar0 = func_405(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_5;
	}
	return -15;
}

void func_193(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	if (func_406(iParam0, iParam1, 1))
	{
		iVar0 = func_407(iParam1);
		iVar1 = func_408(iParam0);
		iVar2 = (func_408(iParam0) - func_408(iParam1));
		iVar3 = (func_407(iParam0) - func_407(iParam1));
		iVar4 = (func_409(iParam0) - func_409(iParam1));
		iVar5 = (func_322(iParam0) - func_322(iParam1));
		iVar6 = (func_362(iParam0) - func_362(iParam1));
		iVar7 = (func_410(iParam0) - func_410(iParam1));
	}
	else
	{
		iVar0 = func_407(iParam0);
		iVar1 = func_408(iParam1);
		iVar2 = (func_408(iParam1) - func_408(iParam0));
		iVar3 = (func_407(iParam1) - func_407(iParam0));
		iVar4 = (func_409(iParam1) - func_409(iParam0));
		iVar5 = (func_322(iParam1) - func_322(iParam0));
		iVar6 = (func_362(iParam1) - func_362(iParam0));
		iVar7 = (func_410(iParam1) - func_410(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5 = (iVar5 + 1);
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_411(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_412(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
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

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

struct<8> func_197(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_198(var uParam0)
{
	uParam0->f_31 = 75490;
	uParam0->f_32 = 75714;
}

void func_199()
{
	uVar0 = 5;
	func_415(&Local_397, 70, &uVar0, 0, 0);
	Local_397[0]->f_43 = 75950;
	Local_397[0]->f_44 = 76161;
	func_200(Local_397[0], 512);
	uVar6 = 5;
	func_415(&Local_397, 74, &uVar6, 1, 0);
	Local_397[1]->f_43 = 76273;
	Local_397[1]->f_44 = 76161;
	func_200(Local_397[1], 512);
	uVar12 = 5;
	func_415(&Local_397, 73, &uVar12, 2, 0);
	Local_397[2]->f_43 = 76663;
	Local_397[2]->f_44 = 76161;
	func_200(Local_397[2], 512);
	uVar18 = 5;
	func_415(&Local_397, 69, &uVar18, 3, 1);
	Local_397[3]->f_43 = 77322;
	Local_397[3]->f_44 = 76161;
	func_200(Local_397[3], 512);
	uVar24 = 5;
	func_415(&Local_397, 72, &uVar24, 4, 0);
	Local_397[4]->f_43 = 78143;
	Local_397[4]->f_44 = 76161;
	func_200(Local_397[4], 512);
}

void func_200(int iParam0, int iParam1)
{
	func_296(&(iParam0->f_19), iParam1);
}

int func_201(int iParam0, int iParam1)
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

bool func_202(int iParam0)
{
	func_422(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_203(int iParam0)
{
	return iParam0 > -1;
}

int func_204(int iParam0)
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

bool func_205(int iParam0)
{
	return func_215(iParam0, 2, 1);
}

void func_206(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_203(iParam0))
		{
			return;
		}
	}
	func_423(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_408(*iParam0);
	iVar1 = func_407(*iParam0);
	iVar2 = func_409(*iParam0);
	iVar3 = func_322(*iParam0);
	iVar4 = func_362(*iParam0);
	iVar5 = func_410(*iParam0);
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
	iVar6 = func_411(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_411(iVar1, iVar0);
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
	func_424(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_208()
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

int func_209(int iParam0)
{
	if (!func_212(iParam0))
	{
		return -1;
	}
	return func_425(func_398(iParam0));
}

bool func_210(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_212(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_213(int iParam0)
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
		iVar0 = func_426(iParam0);
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

bool func_214(int iParam0)
{
	iVar0 = func_427(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_215(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_203(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_216(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_203(iParam0))
		{
			return false;
		}
	}
	func_423(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_218(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_203(iParam0))
		{
			return;
		}
	}
	func_423(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_219(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_216(iParam0))
	{
		return;
	}
	if (func_78(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_206(iParam0, 56, 1);
		func_428(&(Global_1359489->f_40), 1);
	}
	func_429(iParam0, 0);
	func_232(iParam0, 4, 0);
	func_430(iParam0);
	func_233(iParam0);
	func_218(iParam0, 37, 1);
	bVar0 = func_220(Global_1360165[iParam0], 0);
	iVar1 = func_431(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_217(iParam0, 64, 1))
	{
		func_218(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_218(iParam0, 33, 1);
		func_218(iParam0, 34, 1);
		func_432(iParam0, 1056964608, -1, 1061158912);
		func_224(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_206(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_206(iParam0, 35, 1);
			if (bParam8)
			{
				func_206(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_433(iParam0, 0);
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
		func_218(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_206(iParam0, 33, 1);
		func_224(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_428(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_434(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_206(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_435(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_217(iParam0, 45, 1))
	{
		func_218(iParam0, 45, 1);
	}
	func_436(iParam0, 16, 1);
	func_218(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_220(func_437(iParam0), 0))
		{
			func_438(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_220(int iParam0, int iParam1)
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
	if (func_183(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_183(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_183(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_183(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_183(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_183(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_183(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_183(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_221(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_439(iParam0);
	if (!func_216(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_222(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_223(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_440(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_213((*Global_1360165)[iParam0]->f_4.f_2) || func_214((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_440(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_441((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_442(iParam0, 0))
					{
						func_206(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_443(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_218(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_220(func_439(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_220(func_437(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_224(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_218(iParam0, 50, 1);
		func_218(iParam0, 48, 1);
		func_218(iParam0, 49, 1);
		func_218(iParam0, 51, 1);
		func_218(iParam0, 52, 1);
		func_218(iParam0, 54, 1);
		func_218(iParam0, 55, 1);
	}
	else
	{
		func_206(iParam0, 50, 1);
		func_206(iParam0, 48, 1);
		func_206(iParam0, 49, 1);
		func_206(iParam0, 51, 1);
		if (bParam3)
		{
			func_206(iParam0, 54, 1);
		}
		else
		{
			func_218(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_206(iParam0, 52, 1);
			if (bParam3)
			{
				func_206(iParam0, 55, 1);
			}
		}
		else
		{
			func_218(iParam0, 52, 1);
			if (!bParam3)
			{
				func_218(iParam0, 55, 1);
			}
		}
	}
}

void func_225(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_216(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_444(iParam0, bParam3);
	}
	else
	{
		func_445(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_446(iParam0, bParam3);
	}
	else
	{
		func_447(iParam0, bParam3);
	}
}

void func_226(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_325(Global_35) && is_player_teleport_active())
	{
	}
	if (func_448(iParam0))
	{
		if (func_449(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_183(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_226(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_226(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_183(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_183(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_183(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_183(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_183(iParam5, 129))
	{
		if (func_183(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_183(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_183(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_183(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_448(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_183(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_183(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_227(int iParam0, int iParam1)
{
	if (!func_216(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_450(iParam0, iParam1);
	return bVar0;
}

void func_228(int iParam0, int iParam1, bool bParam2)
{
	if (!func_216(iParam0))
	{
		return;
	}
	if (!func_227(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_206(iParam0, 25, 1);
	}
}

void func_229(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_451(iParam2))
		{
			iVar0 = func_452(iParam2, -1);
			if (func_453(iParam1, iVar0))
			{
				if (func_454(iParam1, iVar0))
				{
					if (func_455(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_456(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_457(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_206(iParam0, 66, 0);
		}
	}
}

void func_230(int iParam0)
{
	func_458(iParam0);
	func_459(iParam0, 0);
}

void func_231(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

void func_232(int iParam0, int iParam1, bool bParam2)
{
	if (!func_203(iParam0))
	{
		return;
	}
	func_460(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_233(int iParam0)
{
	func_206(iParam0, 36, 1);
}

bool func_234(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_235(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_461(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_461(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_236(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_216(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_237(int iParam0)
{
	if (!func_105(iParam0))
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

bool func_238(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_239(int iParam0)
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

int func_240(int iParam0, bool bParam1)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (!func_387(iParam0, 2))
	{
		return 0;
	}
	if (func_387(iParam0, 32) && !bParam1)
	{
		func_462(iParam0, _create_persistent_character(func_69(iParam0)));
		if (func_20() == -1)
		{
			if (func_387(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_283(iParam0));
				func_463(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_283(iParam0));
		}
		return 0;
	}
	if (!func_464(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_283(iParam0)))
	{
		func_463(iParam0, 128);
		return 1;
	}
	func_462(iParam0, _create_persistent_character(func_69(iParam0)));
	_0x4f81ead1de8fa19b(func_283(iParam0));
	if (func_387(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_283(iParam0));
		func_463(iParam0, 2048);
	}
	return 1;
}

bool func_241(int iParam0)
{
	return (*Global_1934182)[iParam0]->f_15;
}

void func_242(int iParam0)
{
	func_465(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_166(&((*Global_1934182)[iParam0]->f_8[iVar0])))
		{
			if (!func_466(&((*Global_1934182)[iParam0]->f_8[iVar0])))
			{
				func_55(&((*Global_1934182)[iParam0]->f_8[iVar0]), 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_243(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 - (Global_1934182->f_74 && iParam0));
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	(*Global_1934182)[iParam0]->f_8[iParam1] = func_165(iParam2, network_is_in_session(), 0);
}

int func_245()
{
	return Global_1894899->f_2;
}

bool func_246(int iParam0)
{
	if (!func_467(iParam0))
	{
		return false;
	}
	return (!func_468() || is_bit_set(Global_40.f_7854, iParam0));
}

int func_247(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

bool func_248(int iParam0)
{
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_469(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_249(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_250(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_251(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_252(int iParam0, int iParam1)
{
	return func_181(iParam0, iParam1, 4, get_hash_key(func_470(iParam1)));
}

void func_253(int iParam0, int iParam1)
{
	if (!func_250(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_254(int iParam0)
{
	return func_427(iParam0) == 0;
}

int func_255(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_256(int iParam0)
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

int func_257(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_254(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_256(iParam0);
		if (iVar2 >= 0)
		{
			func_471(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_472(iVar1, 1);
			func_471(iParam0, 1);
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
		iVar2 = func_256(iParam0);
		if (iVar2 >= 0)
		{
			func_471(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_212(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_472(iVar0, 1);
					func_471(iParam0, 1);
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

void func_258(int iParam0)
{
	func_473(Global_1935369->f_5[iParam0]->f_6, 1);
	func_474(Global_1935369->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
		Global_1935369->f_5[iParam0]->f_8 = 0;
	}
	func_475(iParam0, 8192);
	func_475(iParam0, 16384);
	func_475(iParam0, 32768);
	func_475(iParam0, 131072);
	func_475(iParam0, 16777216);
	func_475(iParam0, 524288);
	func_475(iParam0, 1048576);
	Global_1935369->f_5[iParam0]->f_10 = 0;
	Global_1935369->f_5[&Global_1935369]->f_9 = 0;
	Global_1935369->f_5[iParam0] = 0;
	Global_1935369->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1935369->f_5[iParam0]->f_4 = 0;
	Global_1935369->f_5[iParam0]->f_5 = -1;
	Global_1935369->f_5[iParam0]->f_6 = -1;
	Global_1935369->f_5[iParam0]->f_7 = 0;
}

int func_259(int iParam0, int iParam1)
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
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
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
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
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

int func_260(int iParam0, int iParam1)
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

Vector3 func_261(int iParam0)
{
	if (!func_277(iParam0))
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

Vector3 func_262(int iParam0)
{
	if (!func_277(iParam0))
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

bool func_263(int iParam0, int iParam1)
{
	return func_323(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

void func_264(int iParam0)
{
	if (func_196(Global_1914319->f_3[iParam0]->f_21) && func_476(Global_1914319->f_3[iParam0]->f_21))
	{
		func_477(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_478(Global_1914319->f_3[iParam0]->f_10, 0);
	func_273(iParam0, 536870912);
	iVar1 = func_275(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_386(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_479(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_480(iParam0, 0);
}

int func_265(int iParam0)
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

int func_266(int iParam0, int iParam1)
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

float func_267(int iParam0)
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

bool func_268(int iParam0, int iParam1)
{
	if (func_263(iParam0, 16384) && !func_481(iParam0, 1))
	{
		return true;
	}
	if (!func_196(iParam1))
	{
		return false;
	}
	iVar0 = func_312(iParam1);
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
		func_101(iParam1, Global_1914319->f_3[iParam0]->f_25, 1);
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
		func_101(iParam1, Global_1914319->f_3[iParam0]->f_28, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_28, 0, 1);
	}
	Global_1914319->f_3[iParam0]->f_21 = iParam1;
	Global_1914319->f_3[iParam0]->f_23 = iVar0;
	return true;
}

void func_269(int iParam0)
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
			if (!func_77(29))
			{
				if (func_160(29) && func_482() <= func_483(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_77(3))
			{
				if (func_160(3) && func_482() <= func_483(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_77(25))
			{
				if (func_160(25) && func_482() <= func_483(25))
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

void func_270()
{
	StringCopy(Global_1393529->f_288[18], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_271()
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

void func_272(int iParam0)
{
	if (!func_277(iParam0))
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
			if (!func_294(iParam0, 2))
			{
				func_279(iParam0, 2);
			}
			break;
	}
}

void func_273(int iParam0, int iParam1)
{
	if (!func_292(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_274(int iParam0, int iParam1)
{
	if (!func_292(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

int func_275(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

int func_276(int iParam0)
{
	if (&Global_1430252 < (get_frame_count() - 30))
	{
		Global_1430252 = get_frame_count();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Global_1430252->f_1[iVar0] = 0;
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			if (&Global_40.f_9479[iVar1] != -1)
			{
				Global_1430252->f_1[&Global_40.f_9479[iVar1]] = &Global_1430252->f_1[&Global_40.f_9479[iVar1]] + 1;
			}
			iVar1++;
		}
	}
	return &(Global_1430252->f_1[iParam0]);
}

bool func_277(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_278(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_279(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_280(int iParam0)
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

void func_281(int iParam0, bool bParam1)
{
	if (!func_292(iParam0))
	{
		return;
	}
	if ((bParam1 && func_329(iParam0, 512)) || (!bParam1 && !func_329(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_274(iParam0, 512);
	}
	else
	{
		func_273(iParam0, 512);
	}
	if (func_484(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_282(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_196(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_312(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_283(iParam0));
}

int func_283(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_284(int iParam0)
{
	if (((((!(func_158(iParam0, 8) || func_158(iParam0, 2)) || !func_485(Global_35, func_174(iParam0), 1, 0)) || !func_64(iParam0)) || func_297()) || Global_1934266->f_56) || ((iParam0 != 38 || func_68(45)) && (func_23(1, 0) || func_23(8, 0))))
	{
		return false;
	}
	return true;
}

bool func_285(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

void func_286(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

bool func_287(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_288(int iParam0)
{
	return iParam0 != 0;
}

void func_289(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 1:
			func_486(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((func_487(2, 2) || func_487(1, 2)) || func_487(0, 2))
			{
				uParam0->f_4 = { get_offset_from_entity_in_world_coords(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (func_488(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = func_489();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					_0xf008e0ba1fe1d644(1);
					request_model(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!_0x5e420ff293ee5472())
			{
			}
			else if (!has_model_loaded(uParam0->f_3))
			{
			}
			else
			{
				if (!does_entity_exist(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = func_490(uParam0->f_3, uParam0->f_4, get_entity_heading(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						set_ped_config_flag(uParam0->f_1, 130, false);
						set_ped_config_flag(uParam0->f_1, 315, false);
						set_ped_reset_flag(uParam0->f_1, 49, true);
						set_ped_reset_flag(uParam0->f_1, 184, true);
						_0xa3db37edf9a74635(player_id(), uParam0->f_1, 3, 2, 0);
						_0xa3db37edf9a74635(player_id(), uParam0->f_1, 4, 2, 0);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!is_ped_active_in_scenario(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (does_entity_exist(uParam0->f_1))
						{
							open_sequence_task(&iVar0);
							task_go_straight_to_coord_relative_to_entity(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							task_turn_ped_to_face_coord(0, get_offset_from_entity_in_world_coords(Global_35, 0f, 4f, 0f), 2000);
							task_look_at_entity(0, Global_35, -1, 0, 51, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(uParam0->f_1, iVar0);
							clear_sequence_task(&iVar0);
							set_ped_reset_flag(uParam0->f_1, 49, true);
							set_ped_reset_flag(uParam0->f_1, 184, true);
							remove_all_ped_weapons(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (does_entity_exist(uParam0->f_1))
							{
								set_ped_reset_flag(uParam0->f_1, 49, true);
							}
							if (!func_491(uParam0->f_1))
							{
								if (func_492() && func_493(uParam0->f_1, 1))
								{
									if (func_494(uParam0, uParam0->f_15))
									{
										set_ped_reset_flag(uParam0->f_1, 49, true);
										set_ped_reset_flag(uParam0->f_1, 184, true);
										set_ped_config_flag(uParam0->f_1, 130, false);
										set_ped_config_flag(uParam0->f_1, 315, false);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 3, 2, 1);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 4, 2, 1);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 7, 1, 0);
										func_434(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!func_495(&(uParam0->f_12)))
								{
									func_428(&(uParam0->f_12), 1);
								}
								else if (func_496(&(uParam0->f_12)) > 15f)
								{
									func_434(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (does_entity_exist(uParam0->f_1))
							{
								set_ped_reset_flag(uParam0->f_1, 49, true);
								set_ped_reset_flag(uParam0->f_1, 184, true);
							}
							if (is_string_null_or_empty(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!func_495(&(uParam0->f_12)))
								{
									func_428(&(uParam0->f_12), 1);
								}
								else if (func_496(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!func_497(1))
								{
									if (does_entity_exist(uParam0->f_1))
									{
										task_look_at_entity(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!is_ped_using_any_scenario(uParam0->f_1))
										{
											task_turn_ped_to_face_entity(uParam0->f_1, Global_35, -1, -1082130432, -1082130432, -1082130432);
										}
										if (func_494(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (does_entity_exist(uParam0->f_1))
								{
									set_ped_reset_flag(uParam0->f_1, 49, true);
									set_ped_reset_flag(uParam0->f_1, 184, true);
									if (func_491(uParam0->f_1))
									{
										func_498(1, 1, 1);
									}
									if (!func_497(1))
									{
										iVar1 = _find_closest_active_scenario_point_of_type(func_499(), 1996775727, 3f, 1, false);
										open_sequence_task(&iVar0);
										task_clear_look_at(0);
										task_stand_still(0, 2000);
										if (_does_scenario_point_exist(iVar1))
										{
											_task_use_scenario_point(0, iVar1, 0, 0, true, false, 0, false, -1f, false);
										}
										else
										{
											task_smart_flee_ped(0, Global_35, 50f, -1, 16768, 1f, 0);
										}
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_1, iVar0);
										clear_sequence_task(&iVar0);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 3, 2, 0);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 4, 2, 0);
										func_500(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											_0x7d4e70a67a651c71(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!is_ped_active_in_scenario(Global_35, 0))
								{
									func_434(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										set_model_as_no_longer_needed(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_290()
{
	if (func_501(105, 3, 32))
	{
		return false;
	}
	if (!func_190())
	{
		return false;
	}
	if (func_245() != 105)
	{
		return false;
	}
	if (!func_502())
	{
		if (iVar623 > 0 && iVar623 < 5)
		{
			if (func_503(28))
			{
				func_504(28, 0);
			}
			if (does_entity_exist(iVar315))
			{
				func_500(&iLocal_317, 1, 0, 1);
				func_505(&iLocal_317);
			}
			if (_0x5c16855277819bbf() > 0 && bVar622)
			{
				_0x7d4e70a67a651c71(1);
				iLocal_624 = 0;
			}
			func_498(1, 0, 1);
			iLocal_623 = 0;
			func_506(&Local_318, 2048);
			func_506(&Local_318, 1024);
			iLocal_625 = 5;
		}
		return false;
	}
	if (Global_1914319->f_16855 != 3)
	{
		return false;
	}
	iVar0 = func_312(74);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	if (!is_ped_model(iVar0, 984264800))
	{
		return false;
	}
	bVar1 = false;
	if (!func_507(iVar0))
	{
		set_ped_can_use_auto_conversation_lookat(iVar0, false);
	}
	if (func_508(&Local_318, 1, 0))
	{
		iVar5 = 3;
		switch (iVar623)
		{
			case 0:
				if (!func_501(105, iVar5, 2))
				{
					func_114(105, iVar5, 2);
				}
				else if ((func_501(105, iVar5, 8) && !func_501(105, iVar5, 16)) && func_160(71))
				{
					func_114(105, iVar5, 16);
					func_200(&Local_318, 2048);
				}
				else if ((func_501(105, iVar5, 4) && !func_501(105, iVar5, 8)) && func_509(9))
				{
					func_114(105, iVar5, 8);
					func_200(&Local_318, 2048);
				}
				else if (func_501(105, iVar5, 2) && !func_501(105, iVar5, 4))
				{
					func_114(105, iVar5, 4);
					func_200(&Local_318, 2048);
				}
				else
				{
					iLocal_625 = 5;
				}
				else
				{
					func_510(28);
					func_504(28, 1);
					if (!does_entity_exist(iVar315))
					{
						if (!bVar622)
						{
							_0xf008e0ba1fe1d644(1);
							iLocal_624 = 1;
						}
						iLocal_625 = 1;
					}
					else
					{
						iLocal_625 = 2;
					}
					Jump @1779; //curOff = 579
					if (_0x5e420ff293ee5472())
					{
						iLocal_317 = func_490(977834008, 1325.692f, -1291.64f, 79.5341f, 259.6501f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						freeze_entity_position(iVar315, true);
						func_504(28, 1);
						iLocal_625 = 2;
					}
					Jump @1779; //curOff = 650
					if (func_501(105, iVar5, 16))
					{
						switch (iVar621)
						{
							case 0:
								vVar2 = { func_511("RHRGN_PRS_FORTH") };
								func_506(&Local_318, 2048);
								func_200(&Local_318, 1024);
								bVar1 = true;
								break;
							case 1:
								vVar2 = { func_511("RHRGN_PRS_FOFOL") };
								func_506(&Local_318, 1024);
								bVar1 = true;
								break;
							case 2:
								vVar2 = { func_511("RHRGN_PRS_HANG4") };
								bVar1 = true;
								iLocal_623 = -1;
								iLocal_625 = 4;
								break;
						}
					}
					else if (func_501(105, iVar5, 8))
					{
						switch (iVar621)
						{
							case 0:
								vVar2 = { func_511("RHRGN_PRS_THIRD") };
								func_506(&Local_318, 2048);
								func_200(&Local_318, 1024);
								bVar1 = true;
								break;
							case 1:
								vVar2 = { func_511("RHRGN_PRS_TFOL") };
								func_506(&Local_318, 1024);
								bVar1 = true;
								break;
							case 2:
								vVar2 = { func_511("RHRGN_PRS_HANG3") };
								bVar1 = true;
								iLocal_623 = -1;
								iLocal_625 = 4;
								break;
						}
					}
					else if (func_501(105, iVar5, 4))
					{
						switch (iVar621)
						{
							case 0:
								vVar2 = { func_511("RHRGN_PRS_SECND") };
								func_506(&Local_318, 2048);
								func_200(&Local_318, 1024);
								bVar1 = true;
								break;
							case 1:
								vVar2 = { func_511("RHRGN_PRS_SFOL") };
								func_200(&Local_318, 1024);
								bVar1 = true;
								break;
							case 2:
								vVar2 = { func_511("RHRGN_PRS_HANG2") };
								bVar1 = true;
								iLocal_623 = -1;
								iLocal_625 = 4;
								break;
						}
					}
					else if (func_501(105, iVar5, 2))
					{
						switch (iVar621)
						{
							case 0:
								vVar2 = { func_511("RHRGN_PRS_FIRST") };
								func_506(&Local_318, 2048);
								func_200(&Local_318, 1024);
								bVar1 = true;
								break;
							case 1:
								vVar2 = { func_511("RHRGN_PRS_FFOL1") };
								func_200(&Local_318, 2048);
								bVar1 = true;
								break;
							case 2:
								if (!func_509(9))
								{
									vVar2 = { func_511("RHRGN_PRS_FFOL2") };
								}
								else
								{
									vVar2 = { func_511("RHRGN_PRS_FFOL3") };
								}
								bVar1 = true;
								break;
							case 3:
								vVar2 = { func_511("RHRGN_PRS_FFOL4") };
								bVar1 = true;
								break;
							case 4:
								vVar2 = { func_511("RHRGN_PRS_HANG1") };
								func_506(&Local_318, 2048);
								func_506(&Local_318, 1024);
								iLocal_623 = -1;
								bVar1 = true;
								iLocal_625 = 4;
								break;
						}
					}
					if (bVar1)
					{
						func_512(&uLocal_219, iVar0, "PEARSON", 0);
						func_512(&uLocal_219, Global_35, "JOHN", 0);
						if (does_entity_exist(iVar315))
						{
							func_512(&uLocal_219, iVar315, "PEARSON_WIFE", 0);
						}
						set_ped_can_use_auto_conversation_lookat(iVar0, true);
						func_514(&uLocal_219, vVar2, func_513(), 0, 0);
						func_428(&(Local_318.f_34), 1);
						iLocal_623 = iVar621 + 1;
						return true;
					}
					Jump @1779; //curOff = 1383
					switch (iVar621)
					{
						case 0:
							vVar2 = { func_511("RHRGN_PRS_WIFE1") };
							bVar1 = true;
							break;
						case 1:
							vVar2 = { func_511("RHRGN_PRS_WIFE2") };
							bVar1 = true;
							break;
						case 2:
							vVar2 = { func_511("RHRGN_PRS_WIFE3") };
							bVar1 = true;
							break;
						case 3:
							vVar2 = { func_511("RHRGN_PRS_WIFE4") };
							bVar1 = true;
							break;
						case 4:
							vVar2 = { func_511("RHRGN_PRS_WIFE5") };
							bVar1 = true;
							iLocal_625 = 4;
							break;
					}
					if (bVar1 && does_entity_exist(iVar315))
					{
						func_512(&uLocal_219, iVar0, "PEARSON", 0);
						func_512(&uLocal_219, iVar315, "PEARSON_WIFE", 0);
						func_512(&uLocal_219, Global_35, "JOHN", 0);
						func_514(&uLocal_219, vVar2, func_513(), 0, 0);
						func_428(&(Local_318.f_34), 1);
						iLocal_623 = iVar621 + 1;
						return true;
					}
					Jump @1779; //curOff = 1616
					if (func_501(105, iVar5, 16))
					{
						func_114(105, iVar5, 32);
					}
					func_510(28);
					func_504(28, 0);
					iLocal_623 = 0;
					func_506(&Local_318, 2048);
					func_506(&Local_318, 1024);
					if (does_entity_exist(iVar315))
					{
						if (func_502())
						{
							func_226(iVar315, 1332.607f, -1289.492f, 79.2191f, 62.394f, 2, 1073741824);
						}
						func_500(&iLocal_317, 1, 0, 1);
						delete_ped(&iLocal_317);
					}
					if (_0x5c16855277819bbf() > 0 && bVar622)
					{
						iLocal_624 = 0;
						_0x7d4e70a67a651c71(1);
					}
					iLocal_625 = 5;
				}
			}
			else if (func_497(1))
			{
				if (Global_1914319->f_17371 || func_515(iVar0, 1, 1, 1, 0))
				{
					func_498(1, 0, 1);
					func_504(28, 0);
				}
			}
			return false;
		}

void func_291(var uParam0)
{
	if ((*uParam0)[iVar393]->f_29 == 1)
	{
		if (func_508((*uParam0)[iVar393], 1, 1))
		{
			func_516((*uParam0)[iVar393]);
		}
	}
	iLocal_396 = iVar393 + 1;
	if (iVar393 >= 5)
	{
		iLocal_396 = 0;
	}
}

bool func_292(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_293(int iParam0)
{
	bVar0 = func_294(iParam0, 256);
	return bVar0;
}

bool func_294(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_295(int iParam0)
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

void func_296(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_297()
{
	if (func_20() == -1)
	{
		if (func_136() || func_517())
		{
			return true;
		}
	}
	else if (func_518(1, 255))
	{
		return true;
	}
	return false;
}

void func_298(int iParam0, var uParam1)
{
	if (_0x666c2f53abefc952(iParam0) != 623901053)
	{
		_0xfd010a2154b40676(iParam0, 623901053);
	}
	if (uParam1->f_3)
	{
		_0x0751d461f06e41ce(player_id(), 7, 0, 0);
		_0x0751d461f06e41ce(player_id(), 20, 0, 0);
		_0x0751d461f06e41ce(player_id(), 19, 0, 0);
		_0x0751d461f06e41ce(player_id(), 10, 0, 0);
		_0x0751d461f06e41ce(player_id(), 4, 0, 0);
		uParam1->f_3 = 0;
	}
}

bool func_299(int iParam0)
{
	if (!func_75(0, 0, 1))
	{
		return true;
	}
	if ((((((func_77(18) || func_77(20)) || func_77(21)) || func_77(17)) || func_519(3)) || func_520(134)) || func_520(5))
	{
		return false;
	}
	if (iParam0 == 95)
	{
		if (func_77(20))
		{
			return false;
		}
	}
	return true;
}

int func_300(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 105:
			if (bParam1)
			{
				return 147;
			}
			return 146;
		case 95:
			if (bParam1)
			{
				return 149;
			}
			return 148;
	}
	return -1;
}

bool func_301(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_220(Global_35, 0))
	{
		return 0;
	}
	if (bParam1 || bParam2)
	{
		if (_0x666c2f53abefc952(iParam0) == 1030835986)
		{
			_0xfd010a2154b40676(iParam0, 623901053);
		}
		return 0;
	}
	else if (_0xf256a75210c5c0eb(iParam0, Global_36))
	{
		switch (Global_1935630->f_44)
		{
			case -1569615261:
			case -1016714371:
			case 191707516:
				if (_0x666c2f53abefc952(iParam0) != 1030835986)
				{
					_0xfd010a2154b40676(iParam0, 1030835986);
				}
				break;
			case -1415022764:
			case -164645981:
			case -160924582:
			case 827679807:
			case 1030402560:
			case 1247405313:
			case 1549070292:
				if (_0x666c2f53abefc952(iParam0) == 1030835986)
				{
					_0xfd010a2154b40676(iParam0, 623901053);
				}
				break;
			default:
				if (_0x666c2f53abefc952(iParam0) != 1030835986)
				{
					_0xfd010a2154b40676(iParam0, 1030835986);
				}
				break;
		}
		_0xc9caeaeec1256e54(1833957607);
	}
	return 1;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 78;
		case -744494798:
			return 120;
		case -1708386982:
			return 37;
		case 1053078005:
			return 38;
		case 1778899666:
			return 93;
		case -1947415645:
			return 82;
		case 1862420670:
			return 95;
		case -1851305682:
			return 65;
		case -473051294:
			return 69;
		case 406627834:
			return 3;
		case 1463094051:
			return 110;
		case 2046780049:
			return 105;
		case -765540529:
			return 5;
		case 2147354003:
			return 32;
		case 427683330:
			return 26;
		case -1524959147:
			return 115;
		case 459833523:
			return 76;
		case 2126321341:
			return 92;
		case -872622034:
			return 35;
		case 1663398575:
			return 56;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 57;
		case 1299204683:
			return 61;
	}
	return -1;
}

var func_304()
{
	return Global_1935496->f_10;
}

var func_305()
{
	return Global_1935496->f_11;
}

void func_306(int iParam0, bool bParam1)
{
	func_521(iParam0, &iVar0, &iVar1);
	if (!func_522(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_523(iVar0, iVar1);
}

void func_307()
{
	switch (Global_1935630->f_44)
	{
		case -1569615261:
		case -1415022764:
		case -1016714371:
		case -164645981:
		case -160924582:
		case 191707516:
		case 827679807:
		case 1030402560:
		case 1247405313:
		case 1549070292:
			break;
		default:
			_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 0);
			break;
	}
	if (func_524(Global_35, 1))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 0);
	}
}

void func_308()
{
	func_525(175);
	func_525(147);
	func_525(146);
	func_525(149);
	func_525(148);
}

bool func_309(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_158(iParam0, 8))
	{
		return false;
	}
	if (!func_485(Global_35, func_174(iParam0), 1, 0))
	{
		return false;
	}
	if (!func_178(player_id(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

void func_310(int iParam0)
{
	if (!func_526(1, 1))
	{
		return;
	}
	if (!_0xc7dc5a0a7df608cb(func_527(1)))
	{
		return;
	}
	if (func_75(0, 0, 1))
	{
		return;
	}
	if (func_277(func_260(iParam0, 3)))
	{
		if (func_528(Global_35, Global_1914319->f_3[3]->f_11, 1) > 80f)
		{
			return;
		}
	}
	if (func_277(func_260(iParam0, 0)))
	{
		if (func_528(Global_35, Global_1914319->f_3[0]->f_11, 1) > 100f)
		{
			return;
		}
	}
	func_529(1, iParam0);
}

int func_311(int iParam0, int iParam1)
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

int func_312(int iParam0)
{
	iVar0 = func_283(iParam0);
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

bool func_313(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return func_323(Global_40.f_9829[iParam0]->f_2, iParam1);
}

void func_314(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_296(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

void func_315(int iParam0, int iParam1, int iParam2)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), func_530(iParam0, iParam1), 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	func_58(Var10, 0);
}

void func_316(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_531(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

Vector3 func_317(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _0x5ee6fccc9c832ca2(func_283(iParam0));
}

bool func_318(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	if (!func_532(func_69(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		func_240(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_282(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_533(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_176(vVar0))
	{
		_0x59c7ad6fea2ac449(func_283(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_283(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_283(iParam0), 0);
	}
	if (!func_176(vVar0))
	{
		_0xbb68908cd11aebdc(func_283(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return true;
	}
	return false;
}

int func_319(int iParam0, vector3 vParam1)
{
	if (iVar732 == 0)
	{
		iLocal_738 = _0x6f3068258a499e52(iParam0, vParam1, 15);
	}
	if (iVar732 != 0)
	{
		if (_0x1ff441d7954f8709(iVar732))
		{
			iVar0 = _0x4735e2a4bb83d9da(iVar732);
			if (does_entity_exist(iVar0))
			{
				iLocal_738 = 0;
				return iVar0;
			}
		}
	}
	return 0;
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	if (!func_535(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_536(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_537(iParam0, bParam2);
	iVar2 = 0;
	if (func_538(iParam0, 0, 0) == 0)
	{
		if (func_539(iParam0))
		{
			iVar5 = func_540(iParam0);
			iVar6 = func_541(iVar5);
			iVar7 = func_542(iVar6) + 1;
			func_543(iVar5);
			if (func_544(38))
			{
				func_306(483, 0);
			}
			else
			{
				func_306(482, 0);
			}
			if (iVar7 == func_545(iVar6))
			{
				func_320(func_546(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_468() && func_547(4))
				{
					if (func_468() && (func_548(38) || func_544(38)))
					{
						func_550(38, func_546(iVar6), 0, 0, func_549(), 0, -1, 0);
						func_551(2);
					}
					else
					{
						func_550(38, func_546(iVar6), 0, 0, func_549(), 0, -1, 0);
						func_551(1);
					}
				}
			}
			else if (func_468() && func_547(4))
			{
				if (func_468() && (func_548(38) || func_544(38)))
				{
					func_550(38, 0, 0, 0, func_549(), 0, -1, 0);
					func_551(2);
				}
				else
				{
					func_550(38, 0, 0, 0, func_549(), 0, -1, 0);
					func_551(1);
				}
			}
			if (func_468() && func_547(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_468() && (func_548(38) || func_544(38)))
					{
						func_552(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_552(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_553(iParam0) == -1037537535)
	{
		if ((!func_554(iParam0, 866047851) && !func_554(iParam0, -1979000645)) && !func_554(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_555(iParam0, 8388608) && !func_68(28))
	{
		func_556(28);
	}
	if (!bVar3)
	{
		if (func_554(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_557(iParam0) == -1447088266)
			{
				iVar1 = func_559(func_558(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_560(iVar1);
					}
					if (func_561(0) && func_562(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_563(iParam0, iVar0, iParam5);
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
					if (func_20() == -1)
					{
						func_560(iParam0);
					}
					if (func_561(0) && func_562(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_563(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_553(iParam0) == -427144552)
		{
			if (!func_564(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_553(iParam0) == 307971639 && func_565(iParam0))
		{
			if (!func_566(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_554(iParam0, 866047851))
		{
			func_567(iParam0);
		}
		else if (func_554(iParam0, 2000026003))
		{
			func_568(iParam0);
		}
		else if (func_554(iParam0, -103750053))
		{
			func_370(func_569(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_370(func_369(-717883113, 2091222383), iVar0);
		}
		else if (func_554(iParam0, -121341956) && !func_554(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_393((*Global_1835011)[4]->f_1, 1))
				{
					func_306(498, 0);
				}
			}
			if (func_554(iParam0, -2017733358) || func_554(iParam0, -1369131378))
			{
				func_570(iParam0);
			}
		}
		else if (func_554(iParam0, -136654233))
		{
			if (func_554(iParam0, -1021472396))
			{
			}
		}
		else if (func_554(iParam0, -1466706512) && func_554(iParam0, 1147021565))
		{
			func_306(484, 0);
		}
		else if (func_554(iParam0, 1147021565) && func_554(iParam0, -524514947))
		{
		}
		else if (func_554(iParam0, 554195525))
		{
		}
		else if (func_554(iParam0, 589988438))
		{
			if (func_571())
			{
				func_572(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_554(iParam0, 787083290) && func_554(iParam0, 949916894))
		{
			func_573(iParam0);
		}
		else if (func_554(iParam0, -1718133314))
		{
			func_574(iParam0);
		}
		else if (func_554(iParam0, -1738650224))
		{
			func_575(iParam0);
		}
		else if (func_554(iParam0, -1112814642) && func_554(iParam0, 949916894))
		{
			func_576(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_554(iParam0, 1841149704))
		{
			func_577();
		}
		else if (func_554(iParam0, 606799272))
		{
			func_578(iParam0, iParam1);
			func_579(iParam0);
		}
		else if (func_554(iParam0, -1112814642) && func_554(iParam0, -1697809989))
		{
			func_580(iParam0, 0, 0, 0);
		}
		else if (func_554(iParam0, -2017733358) || func_554(iParam0, -1369131378))
		{
			func_570(iParam0);
		}
		else if (func_554(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return 0;
			}
			func_581(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_554(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_582(215778062, 1, 0))
					{
						func_320(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_582(670273567, 1, 0))
					{
						func_320(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_582(-967317137, 1, 0))
					{
						func_320(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_582(526074061, 1, 0))
					{
						func_320(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_582(-1045488665, 1, 0))
					{
						func_320(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_582(471514780, 1, 0))
					{
						func_320(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_554(iParam0, -839724752) && func_555(iParam0, 4))
		{
			if (!func_544(42))
			{
				func_583(iParam0);
			}
		}
		else if (func_554(iParam0, 1399091007))
		{
			func_584(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_554(iParam0, 1248798204))
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
				func_320(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_556(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_585(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_586(&iVar9, 0))
				{
					func_562(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_585(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_306(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_587();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_588();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_589();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_590();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_591();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_592(499813453, 854119837, 0);
				func_593(499813453, 0);
				func_594(1);
				break;
			case 2127812557:
				func_592(499813453, -1292544588, 0);
				func_593(499813453, 0);
				func_594(2);
				break;
			case 808991383:
				func_592(499813453, -1003325394, 0);
				func_593(499813453, 0);
				func_594(4);
				break;
			case 1134518629:
				func_592(666607663, -335460405, 0);
				func_593(666607663, 0);
				func_595(1);
				break;
			case 902940106:
				func_592(666607663, 903797617, 0);
				func_593(666607663, 0);
				func_595(2);
				break;
			case -418174898:
				func_592(666607663, 669728650, 0);
				func_593(666607663, 0);
				func_595(4);
				break;
			case -648114971:
				func_592(-220219788, 1214120047, 0);
				func_593(-220219788, 0);
				func_596(1);
				break;
			case 211153747:
				func_592(-220219788, 655769340, 0);
				func_593(-220219788, 0);
				func_596(2);
				Jump @4451; //curOff = 3629
				func_592(-220219788, 885316185, 0);
				func_593(-220219788, 0);
				func_596(4);
				Jump @4451; //curOff = 3662
				func_592(218622660, -1491419385, 0);
				func_593(218622660, 0);
				func_597(1);
				Jump @4451; //curOff = 3695
				func_592(218622660, 1809565830, 0);
				func_593(218622660, 0);
				func_597(2);
				Jump @4451; //curOff = 3728
				func_592(390004462, -628873767, 0);
				func_593(390004462, 0);
				func_598(1);
				Jump @4451; //curOff = 3761
				func_592(390004462, -405421956, 0);
				func_593(390004462, 0);
				func_598(2);
				Jump @4451; //curOff = 3794
				func_592(390004462, -1108972386, 0);
				func_593(390004462, 0);
				func_598(4);
				Jump @4451; //curOff = 3827
				func_592(6410548, 1053716392, 0);
				func_593(6410548, 0);
				func_599(1);
				Jump @4451; //curOff = 3858
				func_592(6410548, 806507056, 0);
				func_593(6410548, 0);
				func_599(2);
				Jump @4451; //curOff = 3889
				func_592(6410548, 1571925350, 0);
				func_593(6410548, 0);
				func_599(4);
				Jump @4451; //curOff = 3920
				func_592(6410548, 1330352282, 0);
				func_593(6410548, 0);
				func_599(8);
				Jump @4451; //curOff = 3952
				func_601(242, func_600(-21093309), 0);
				Jump @4451; //curOff = 3971
				func_601(240, func_600(204375141), 0);
				Jump @4451; //curOff = 3990
				func_601(241, func_600(-417963070), 0);
				Jump @4451; //curOff = 4009
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4056
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4103
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4150
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4197
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4244
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_602(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4451; //curOff = 4291
				func_306(488, 0);
				Jump @4451; //curOff = 4302
				func_306(491, 0);
				Jump @4451; //curOff = 4313
				func_306(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_320(func_603(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_320(func_604(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4451; //curOff = 4386
				if (func_68(1))
				{
					func_306(487, 0);
				}
				Jump @4451; //curOff = 4405
				func_306(486, 0);
				Jump @4451; //curOff = 4416
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				Jump @4451; //curOff = 4434
				func_306(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return 0;
				}
				iVar10 = iParam0;
				func_605(&iVar10);
				if (!func_606(iVar10, iVar0, iParam5))
				{
					return 0;
				}
				else if (!func_561(0))
				{
					return 1;
				}
				if (func_553(iParam0) == -1037537535)
				{
					func_607(iParam0);
				}
				if (func_554(iParam0, -1979000645))
				{
					func_608(iParam0);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_561(0))
				{
					Var11.f_1 = 10;
					Var11.f_12 = 10;
					_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
					iVar34 = 0;
					while (iVar34 < Var11)
					{
						func_320(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_609(iVar2, 0);
				}
			}
			Var35 = { func_610(iParam0) };
			if (_stat_id_is_valid(&Var35))
			{
				_0x6a0184e904cdf25e(&Var35, iVar0);
			}
			func_611(iParam0);
			if (fParam6 > 0f)
			{
				if (func_554(iParam0, -839724752))
				{
					func_612(iParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == 1248274121;
				func_613(iParam0, iVar0, 0, bVar37, 0);
			}
			return 1;
		}

void func_321(int iParam0)
{
	iVar0 = func_201(iParam0, 1);
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

int func_322(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_323(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_324(int iParam0)
{
	iVar0 = func_283(iParam0);
	if (!func_98())
	{
		if (_0x800df3fc913355f3(iVar0))
		{
			_0xb65e7f733956cf25(iVar0);
			_0xfcc6db8dbe709bc8(iVar0);
		}
		if (_does_scenario_group_exist_hash(698203522) && _is_scenario_group_enabled_hash(698203522))
		{
			if (!_0x800df3fc913355f3(iVar0))
			{
				_set_scenario_group_enabled_hash(698203522, false);
				return;
			}
			if (!does_entity_exist(_0x31c70a716cae1fee(iVar0)))
			{
				_set_scenario_group_enabled_hash(698203522, false);
			}
		}
	}
	else if (!func_387(iParam0, 32))
	{
		if (_0x800df3fc913355f3(iVar0))
		{
			_0x4f81ead1de8fa19b(iVar0);
		}
		if (_does_scenario_group_exist_hash(698203522) && !_is_scenario_group_enabled_hash(698203522))
		{
			_set_scenario_group_enabled_hash(698203522, true);
		}
	}
}

int func_325(int iParam0)
{
	return iParam0;
}

bool func_326(int iParam0, bool bParam1)
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

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 26:
		case 38:
			return 0;
		case 5:
		case 105:
			return 2;
		case 76:
		case 78:
		case 92:
			return 1;
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1513502493;
		case 1:
			return -1812624322;
		case 2:
			return -1994196093;
		default:
			return -1994196093;
	}
	return -1994196093;
}

bool func_329(int iParam0, int iParam1)
{
	if (!func_292(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_330(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_196(iParam0))
	{
		return false;
	}
	if (!func_476(iParam0) && bParam1)
	{
		return false;
	}
	return func_387(iParam0, 1);
}

bool func_331(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_614(uParam0, iParam1))
	{
		return false;
	}
	if (func_338(uParam0, 5) || bParam3)
	{
		sVar0 = func_615(iParam1);
		if (func_616(uParam0, sVar0))
		{
			if (!bParam2)
			{
				func_617(uParam0, iParam1);
			}
			func_434(&(uParam0->f_18));
			return true;
		}
	}
	return false;
}

void func_332(var uParam0, bool bParam1)
{
	if (!does_entity_exist(uParam0->f_4) || func_326(uParam0->f_4, 0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_283(uParam0->f_3);
		if (_0x800df3fc913355f3(iVar0) && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x406808610220405b(iVar0);
		}
		open_sequence_task(&iVar1);
		task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
		close_sequence_task(iVar1);
		_0x62fdad5e01d2dd47(uParam0->f_4, get_entity_coords(Global_35, true, false), 2, 0);
		task_perform_sequence(uParam0->f_4, iVar1);
		clear_sequence_task(&iVar1);
	}
	else
	{
		iVar2 = func_283(uParam0->f_3);
		if (_0x800df3fc913355f3(iVar2) && !_0xeb98b38ca60742d7(iVar2))
		{
			clear_ped_tasks(uParam0->f_4, 1, 0);
			_0xa2b18ff8d39f6d87(iVar2);
			task_persistent_character(uParam0->f_4);
		}
	}
}

int func_333(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_334(int iParam0, int iParam1)
{
	if (is_entity_in_volume(iParam0, iParam1, true, 0))
	{
		return is_ped_shooting(get_ped_index_from_entity_index(iParam0));
	}
	return false;
}

bool func_335(var uParam0)
{
	if (-1829635046 == func_618(81053684))
	{
		if (func_619(uParam0))
		{
			return true;
		}
	}
	else if (func_620(-525676072, uParam0))
	{
		if (func_619(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_336(var uParam0)
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(uParam0->f_8), "0822_S_M_M_BankClerk_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(uParam0->f_8), "0823_S_M_M_BankClerk_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(uParam0->f_8), "0824_S_M_M_BankClerk_01_WHITE_03", 64);
			break;
	}
	set_ambient_voice_name(uParam0->f_4, &(uParam0->f_8));
}

bool func_337(var uParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _0x886171a12f400b89(uParam0->f_6, iVar0, 1);
	if (is_itemset_valid(iVar0))
	{
	}
	else
	{
		return false;
	}
	if (get_itemset_size(iVar0) <= 0)
	{
		destroy_itemset(iVar0);
		return false;
	}
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar0))
	{
		iVar3 = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0)));
		if (does_entity_exist(iVar3))
		{
			if (is_ped_human(iVar3))
			{
				if (is_entity_dead(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else if (is_ped_a_player(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else
				{
					Jump @160; //curOff = 147
					destroy_itemset(iVar0);
					return false;
				}
				iVar2++;
				destroy_itemset(iVar0);
				return iVar1 > 0;
			}
		}
	}
}

bool func_338(var uParam0, int iParam1)
{
	if (func_621(uParam0->f_4))
	{
		return false;
	}
	if (!func_495(&(uParam0->f_18)))
	{
		func_428(&(uParam0->f_18), 1);
	}
	if (iParam1 < 0)
	{
		return true;
	}
	if (func_496(&(uParam0->f_18)) > IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0)
{
	if (func_190())
	{
		return false;
	}
	return func_393((*Global_1347702)[58]->f_15, 1);
}

bool func_340(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_341(var uParam0, int iParam1)
{
	func_531(&(uParam0->f_16), iParam1);
}

void func_342(var uParam0)
{
	uParam0->f_16 = 1;
}

bool func_343(var uParam0)
{
	if ((get_frame_count() % 6) != 0)
	{
		return false;
	}
	fVar0 = vdist2(Global_36, uParam0->f_13);
	if (fVar0 < 5625f || fVar0 > 9025f)
	{
		return false;
	}
	if (!would_entity_be_occluded(uParam0->f_12, uParam0->f_13, false))
	{
		return false;
	}
	return true;
}

bool func_344(var uParam0)
{
	iVar0 = 1;
	if (!has_model_loaded(uParam0->f_12))
	{
		iVar0 = 0;
	}
	if (uParam0->f_17 != 0)
	{
		if (!_has_propset_loaded(uParam0->f_17))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_345(var uParam0)
{
	iVar0 = _0x112ddf56300bc6e5(func_69(uParam0->f_1));
	if (_0x800df3fc913355f3(iVar0))
	{
		vVar1 = { _0x94995829ed15a598(iVar0) };
		if (vdist2(uParam0->f_13, vVar1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_346(var uParam0)
{
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_11))
	{
		func_622(uParam0->f_13, 3f, 1, 0);
		uParam0->f_11 = create_vehicle(uParam0->f_12, uParam0->f_13, uParam0->f_16, true, true, false, false);
		_0x9587913b9e772d29(uParam0->f_11, 0);
		_0x87b974e54c71ba7b(uParam0->f_11, 1);
		return false;
	}
	if (uParam0->f_17 != 0)
	{
		_0xd80faf919a2e56ea(uParam0->f_11, uParam0->f_17);
	}
	return true;
}

bool func_347(var uParam0)
{
	if ((get_frame_count() % 6) != 0)
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_11))
	{
		return false;
	}
	if (vdist2(Global_36, get_entity_coords(uParam0->f_11, true, false)) < 12100f)
	{
		return false;
	}
	return true;
}

void func_348(var uParam0)
{
	if (does_entity_exist(uParam0->f_11))
	{
		if (_is_draft_vehicle(uParam0->f_11))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = _get_ped_in_draft_seat(uParam0->f_11, iVar0);
				if (does_entity_exist(iVar1))
				{
					set_ped_as_no_longer_needed(&iVar1);
				}
				iVar0++;
			}
		}
		delete_vehicle(&(uParam0->f_11));
		set_model_as_no_longer_needed(uParam0->f_12);
	}
}

bool func_349(var uParam0)
{
	if ((get_frame_count() % 15) != 0)
	{
		return false;
	}
	if (get_clock_hours() != uParam0->f_2)
	{
		return false;
	}
	return true;
}

bool func_350(var uParam0)
{
	if (does_entity_exist(uParam0->f_11))
	{
		if (_0x88ad6cc10d8d35b2(uParam0->f_11))
		{
			_0x87b974e54c71ba7b(uParam0->f_11, 0);
			if (_is_draft_vehicle(uParam0->f_11))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = _get_ped_in_draft_seat(uParam0->f_11, iVar0);
					if (does_entity_exist(iVar1))
					{
						set_ped_as_no_longer_needed(&iVar1);
					}
					iVar0++;
				}
			}
			set_vehicle_as_no_longer_needed(&(uParam0->f_11));
		}
	}
	if (uParam0->f_19)
	{
		_0x7d4e70a67a651c71(2);
		uParam0->f_19 = 0;
	}
	set_model_as_no_longer_needed(uParam0->f_12);
	return true;
}

bool func_351(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_352(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_190())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_353()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_623())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_75(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_354(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_624(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_626(func_625(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_627(iParam0) || func_68(45))
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
				*bParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
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
				*bParam6 = 1;
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
				*bParam6 = 1;
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

bool func_355(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_356(int iParam0)
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

int func_357(int iParam0)
{
	if (!func_355(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_358(int iParam0)
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

char* func_359(int iParam0)
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

bool func_360(int iParam0, int iParam1)
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

bool func_361(int iParam0, int iParam1)
{
	if (!func_355(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

int func_362(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_363(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_364(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_628(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_365(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_366(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_367(int iParam0)
{
	if (func_627(iParam0))
	{
		if (!func_68(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_468())
	{
		if (!func_393((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_368(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_369(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_370(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_371(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_372()
{
	return Global_1310750->f_16037;
}

bool func_373(int iParam0, int iParam1)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_374(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	if (func_301(64) && func_629(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_375(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_376(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_186(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_630(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_377()
{
	func_631(iVar687);
	func_631(iVar655);
	func_631(iVar653);
	func_631(iVar644);
	func_631(iVar651);
	func_631(iVar637);
	func_631(iVar640);
	func_631(iVar639);
	func_631(iVar692);
	func_631(iVar689);
	func_631(iVar636);
}

void func_378(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

void func_379(int iParam0)
{
	if ((*Global_1396257)[iParam0]->f_630)
	{
		(*Global_1396257)[iParam0]->f_630 = 0;
	}
}

void func_380(int iParam0, int iParam1)
{
	if (!func_632(iParam0, iParam1))
	{
		return;
	}
	Global_1393521->f_3[iParam0] = (&Global_1393521->f_3[iParam0] - (Global_1393521->f_3[iParam0] && iParam1));
}

void func_381(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_382(var uParam0)
{
	func_633(uParam0);
}

void func_383()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_495(&(Local_397[iVar0]->f_34)))
		{
			func_434(&(Local_397[iVar0]->f_34));
		}
		func_381(Local_397[iVar0]->f_38);
		func_381(Local_397[iVar0]->f_39);
		iVar0++;
	}
}

bool func_384(int iParam0)
{
	if (!func_216(iParam0))
	{
		return false;
	}
	if (!func_78(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_385(int iParam0)
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

void func_386(int iParam0)
{
	if (func_166(iParam0) && func_634())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_387(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_196(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_388(int iParam0, bool bParam1)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (!func_387(iParam0, 2))
	{
		return 0;
	}
	if (func_69(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return 1;
	}
	if (func_387(iParam0, 1) && !bParam1)
	{
		func_635(iParam0, 128);
		return 1;
	}
	func_463(iParam0, 129);
	func_636(iParam0);
	_0xfc77c5b44d5ff7c0(func_283(iParam0));
	func_462(iParam0, 0);
	return 1;
}

bool func_389(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_390(int iParam0, bool bParam1)
{
	if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23) && is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
	{
		return;
	}
	if (func_75(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_637(238680582, bParam1);
			break;
		case 9:
			func_637(1555588463, bParam1);
			func_637(1275780106, bParam1);
			func_637(-833560428, bParam1);
			func_637(-1601174253, bParam1);
			func_637(-1295111793, bParam1);
			break;
		case 11:
			func_637(-1482639045, bParam1);
			break;
		case 10:
			func_637(254520182, bParam1);
			break;
		case 12:
			func_637(1997650502, bParam1);
			break;
		case 13:
			func_637(1335986638, bParam1);
			break;
		case 14:
			func_637(1407130373, bParam1);
			break;
		case 16:
			func_637(-1335647241, bParam1);
			break;
		case 15:
			func_637(1731691513, !func_160(70));
			break;
	}
}

void func_391(int iParam0)
{
	if (!func_389(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = 0;
}

void func_392(int iParam0, int iParam1)
{
	if (!func_389(iParam0))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_20 = iParam1;
}

bool func_393(int iParam0, bool bParam1)
{
	switch (func_427(iParam0))
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

void func_394(int iParam0)
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

int func_395(bool bParam0, bool bParam1, bool bParam2)
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

int func_396()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_398(int iParam0)
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

int func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_638(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_396())
	{
		return -1;
	}
	iVar0 = func_397(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_639(iVar1, 0);
	func_640(iVar1, 0);
	func_641(iVar1, 0);
	func_642(iVar1, 0);
	func_643(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_644(iVar1, iParam4);
	}
	return iVar1;
}

int func_400(int iParam0)
{
	if (!func_212(iParam0))
	{
		return -1;
	}
	return func_645(iParam0);
}

void func_401(var uParam0, int iParam1)
{
	func_646(uParam0, iParam1);
}

bool func_402(int iParam0, float fParam1)
{
	iVar0 = func_647(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_648(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_403(int iParam0, int iParam1, float fParam2)
{
	if (!func_212(iVar0))
	{
		iVar0 = func_181(func_179(iParam0), iParam1, 3, func_180(iParam0));
	}
	if (func_649(iParam0, fParam2))
	{
		*fParam2 = func_650(iParam0);
		return true;
	}
	return false;
}

float func_404()
{
	iVar6 = func_191();
	iVar4 = func_408(iVar6);
	iVar5 = func_407(iVar6);
	iVar3 = func_651(iVar5, iVar4);
	iVar2 = func_409(iVar6);
	iVar1 = func_322(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

int func_405(int iParam0, int iParam1)
{
	iVar1 = func_652(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_406(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_653(iParam1) || !func_653(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_407(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_408(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_654(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_409(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_410(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_411(int iParam0, int iParam1)
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

float func_412(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_413(var uParam0)
{
	if (uParam0->f_11 > 1)
	{
		uParam0->f_11 = 0;
	}
	iVar0 = 5;
	if (func_655())
	{
		switch (uParam0->f_3)
		{
			case 1423490702:
				if (!func_501(105, iVar0, 2))
				{
					func_114(105, iVar0, 2);
					StringCopy(&(uParam0->f_15), "SCVR_0956A", 24);
					StringCopy(&(uParam0->f_18), "SCVR_0956B", 24);
					uParam0->f_7 = "SALOON_0956";
					return 1;
				}
				if (!func_501(105, iVar0, 4))
				{
					func_114(105, iVar0, 4);
					StringCopy(&(uParam0->f_15), "SCVR_0957A", 24);
					StringCopy(&(uParam0->f_18), "SCVR_0957B", 24);
					uParam0->f_7 = "SALOON_0957";
					return 1;
				}
				break;
			case 367739382:
				if (!func_501(105, iVar0, 8))
				{
					func_114(105, iVar0, 8);
					StringCopy(&(uParam0->f_15), "SCVR_1052A", 24);
					StringCopy(&(uParam0->f_18), "SCVR_1052B", 24);
					uParam0->f_7 = "SALOON_1052";
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_414(var uParam0, int iParam1)
{
	if (iParam1 == 1423490702 || iParam1 == 367739382)
	{
		uParam0->f_3 = iParam1;
		return 1;
	}
	return 0;
}

void func_415(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	(*uParam0)[iParam3]->f_25 = 64f;
	(*uParam0)[iParam3]->f_26 = 16f;
	(*uParam0)[iParam3]->f_20 = iParam3;
	func_656((*uParam0)[iParam3]);
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
		func_200((*uParam0)[iParam3], 128);
	}
	if (!func_495(&((*uParam0)[iParam3]->f_34)))
	{
		func_428(&((*uParam0)[iParam3]->f_34), 1);
	}
	func_200((*uParam0)[iParam3], 32768);
	func_200((*uParam0)[iParam3], 1024);
	(*uParam0)[iParam3]->f_29 = 1;
	(*uParam0)[iParam3]->f_21 = -1;
}

Vector3 func_416(int iParam0)
{
	iVar0 = func_312(*iParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_511("");
	}
	iVar1 = 2;
	if (!func_501(105, iVar1, 2) && func_482() == 8)
	{
		if (func_190() && func_657(iParam0))
		{
			if (func_160(70))
			{
				iParam0->f_21 = -1;
				func_114(105, iVar1, 2);
				return func_511("RHRGN_SAD3_AT");
			}
		}
	}
	if (!func_658(iParam0, 16))
	{
		if (func_655() && func_657(iParam0))
		{
			func_200(iParam0, 16);
			iParam0->f_21 = -1;
			return func_511("RHRGN_SHFPLAYER");
		}
	}
	if (iParam0->f_21 < 0)
	{
		return func_511("");
	}
	return func_511("");
}

char* func_417(int iParam0)
{
	switch (iParam0)
	{
		case 70:
			return "RHD_Sheriff";
		case 69:
			return "RHD_Bartender";
		case 74:
			if (func_659(iParam0) == 984264800)
			{
				return "PEARSON";
			}
			else
			{
				return "RHD_General_Store";
			}
			break;
		case 73:
			return "RHD_Gunsmith";
		case 72:
			return "RHO_STATWRK";
	}
	return "";
}

Vector3 func_418(int iParam0)
{
	if (func_658(iParam0, 4))
	{
		return func_511("");
	}
	iVar0 = func_312(*iParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_511("");
	}
	iVar1 = 0;
	if (func_482() <= 3 && func_409(&(Global_20710.f_1630[28])) > 0)
	{
		if (func_660(iParam0, 105, iVar1, 2, 134))
		{
			if (func_655())
			{
				func_200(iParam0, 4);
				iParam0->f_37 = "RHD_BLK_General_Store";
				return func_511("RHRGN_SHO_SAD1");
			}
		}
	}
	if (func_661(iParam0, 105, iVar1, 64, 21))
	{
		return func_511("RHRGN_BGEN_GR3");
	}
	if (func_661(iParam0, 105, iVar1, 32, 19))
	{
		return func_511("RHRGN_BGEN_GR2");
	}
	if (func_661(iParam0, 105, iVar1, 16, 17))
	{
		return func_511("RHRGN_BGEN_GR1");
	}
	if (func_661(iParam0, 105, iVar1, 8, 53))
	{
		return func_511("RHRGN_BGEN_CR1");
	}
	if (func_660(iParam0, 105, iVar1, 4, 5))
	{
		return func_511("RHRGN_BGEN_BP1");
	}
	if (func_662(29, 0, 1))
	{
		if (func_663(105, iVar1, 128, 1))
		{
			func_200(iParam0, 4);
			return func_511("RHRGN_BGEN_SRG1");
		}
		if (func_663(105, iVar1, 256, 1))
		{
			func_200(iParam0, 4);
			return func_511("RHRGN_BGEN_SRG2");
		}
	}
	if (iParam0->f_21 < 0)
	{
		return func_511("");
	}
	return func_511("");
}

Vector3 func_419(int iParam0)
{
	iVar0 = func_312(*iParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_511("");
	}
	if (func_664(4))
	{
		return func_511("");
	}
	iVar1 = 1;
	if (!func_658(iParam0, 4))
	{
		if (func_501(105, iVar1, 64) && func_662(29, 0, 1))
		{
			func_200(iParam0, 4);
			if (!func_665(29, 4096))
			{
				if (func_663(105, iVar1, 2, 1))
				{
					return func_511("PRRGS_AFTEROB1");
				}
				if (func_663(105, iVar1, 4, 1))
				{
					if (func_655())
					{
						return func_511("PRRGS_AFTEROB2");
					}
					else
					{
						return func_511("PRRGS_AFTEROB2J");
					}
				}
			}
			else
			{
				if (func_663(105, iVar1, 8, 1))
				{
					if (func_655())
					{
						return func_511("PRRGS_AFTEROB3");
					}
					else
					{
						return func_511("PRRGS_AFTEROB3J");
					}
				}
				if (func_663(105, iVar1, 16, 1))
				{
					if (func_655())
					{
						return func_511("PRRGS_AFTEROB4");
					}
					else
					{
						return func_511("PRRGS_AFTEROB4J");
					}
				}
			}
		}
		if (func_661(iParam0, 105, iVar1, 32, 18))
		{
			return func_511("RHRGN_GUN_BRT1");
		}
		if (func_661(iParam0, 105, iVar1, 64, 20))
		{
			return func_511("RHRGN_GUN_BRT2");
		}
		if (func_661(iParam0, 105, iVar1, 128, 16))
		{
			return func_511("RHRGN_GUN_FUD1");
		}
		if (func_661(iParam0, 105, iVar1, 256, 17))
		{
			return func_511("RHRGN_GUN_GRY1");
		}
		if (func_661(iParam0, 105, iVar1, 512, 19))
		{
			return func_511("RHRGN_GUN_GRY2");
		}
		if (func_661(iParam0, 105, iVar1, 2048, 21))
		{
			return func_511("RHRGN_GUN_GRY3");
		}
		if (func_666(89, 65536) > 0 && func_663(105, iVar1, 4096, 1))
		{
			return func_511("RHRGN_GUN_DUB");
		}
		if (func_666(45, 65536) > 0 && func_663(105, iVar1, 8192, 1))
		{
			return func_511("RHRGN_GUN_SNK");
		}
		if (func_663(105, iVar1, 16384, 0))
		{
			if (func_482() <= 3)
			{
				if (func_160(21))
				{
					func_114(105, iVar1, 16384);
					if (func_655())
					{
						iParam0->f_21 = -1;
						return func_511("RHRGN_GUNGRY3_A");
					}
					else
					{
						iParam0->f_21 = -1;
						return func_511("RHRGN_GUNGRY3_J");
					}
				}
			}
		}
	}
	if (iParam0->f_21 < 0)
	{
		return func_511("");
	}
	return func_511("");
}

Vector3 func_420(int iParam0)
{
	iVar0 = func_312(*iParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_511("");
	}
	iVar1 = 4;
	if (func_655())
	{
		if (!func_501(105, iVar1, 16))
		{
			if (func_482() == 2 && func_160(18))
			{
				func_114(105, iVar1, 16);
				iParam0->f_21 = -1;
				return func_511("RHRGN_BARPLR_BR");
			}
		}
	}
	if (!func_501(105, iVar1, 2))
	{
		if ((!func_667(89) && func_666(89, 65536) > 0) && func_668(89, 65536) > 0)
		{
			func_114(105, iVar1, 2);
			iParam0->f_21 = -1;
			return func_511("REDB_CNV_A");
			func_114(105, iVar1, 2);
		}
	}
	if (!func_658(iParam0, 4))
	{
		if (!func_501(105, iVar1, 8))
		{
			if (!func_501(105, iVar1, 4))
			{
				if ((!func_667(101) && func_666(101, 65536) > 0) && !func_664(8))
				{
					func_200(iParam0, 4);
					func_114(105, iVar1, 4);
					iParam0->f_21 = -1;
					return func_511("REPA_CNV_A");
				}
			}
			else
			{
				func_669(iParam0, 33);
				if (func_658(iParam0, 8192))
				{
					switch (iParam0->f_23)
					{
						case 0:
							func_504(33, 1);
							func_200(iParam0, 2048);
							iParam0->f_23++;
							return func_511("REPA_CNV_C");
						case 1:
							iParam0->f_23++;
							if (func_655())
							{
								return func_511("REPA_CNV_C_ARSP");
							}
							return func_511("REPA_CNV_C_JRSP");
						case 2:
							iParam0->f_23++;
							return func_511("REPA_CNV_C_B");
						case 3:
							func_506(iParam0, 2048);
							iParam0->f_23 = 0;
							func_504(33, 0);
							func_506(iParam0, 8192);
							func_200(iParam0, 4);
							func_114(105, iVar1, 8);
							return func_511("");
						default:
							break;
					}
				}
			}
		}
	}
	if (!func_501(105, iVar1, 32))
	{
		func_669(iParam0, 33);
		if (func_666(111, 65536) > 0 && func_658(iParam0, 8192))
		{
			switch (iParam0->f_23)
			{
				case 0:
					func_504(33, 1);
					func_200(iParam0, 2048);
					iParam0->f_23++;
					return func_511("RHD_STF_CNV_A");
				case 1:
					iParam0->f_23++;
					if (func_655())
					{
						return func_511("RHD_STF_CNVALIE");
					}
					iParam0->f_23++;
					break;
				case 2:
					iParam0->f_23++;
					return func_511("RHD_STF_CNV_LIE");
				case 3:
					iParam0->f_23++;
					return func_511("RHD_STF_CNV_B");
				case 4:
					func_506(iParam0, 2048);
					iParam0->f_23 = 0;
					func_504(33, 0);
					func_506(iParam0, 8192);
					func_114(105, iVar1, 32);
					return func_511("");
			}
		}
	}
	if (iParam0->f_21 < 0)
	{
		return func_511("");
	}
	return func_511("");
}

Vector3 func_421(var uParam0)
{
	iVar0 = func_312(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_511("");
	}
	return func_511("");
}

int func_422(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_670(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_671(iParam0, iParam6);
	func_672(iParam0, iParam5);
	func_673(iParam0, iParam4);
	func_674(iParam0, iParam3);
	func_675(iParam0, iParam2);
	func_676(iParam0, iParam1);
}

int func_425(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_426(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_677(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_427(int iParam0)
{
	if (!func_212(iParam0))
	{
		return -1;
	}
	return func_426(iParam0);
}

void func_428(var uParam0, bool bParam1)
{
	if (bParam1 || !func_495(uParam0))
	{
		func_678(uParam0);
	}
}

void func_429(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_679(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_232(iParam0, 1, 0);
		}
	}
	func_232(iParam0, 16, bParam1);
}

void func_430(int iParam0)
{
	func_232(iParam0, 8, 0);
}

int func_431(int iParam0, bool bParam1)
{
	if (!func_216(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_680(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_432(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_216(iParam0))
	{
		iVar1 = func_439(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_681(iParam0);
		}
	}
	if (func_217(iParam0, 5, 1))
	{
		set_ped_config_flag(func_439(iParam0), 137, true);
	}
}

void func_433(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_439(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_439(iParam0), 204, false);
	}
}

void func_434(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_435(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_216(iParam0))
	{
		return;
	}
	if (func_78(iParam0))
	{
		if (!func_384(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_217(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_431(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_439(iParam0);
	if (((does_entity_exist(iVar1) && func_682(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_206(iParam0, 2, 1);
	}
	else
	{
		func_683(iParam0);
		func_206(iParam0, 1, 1);
	}
}

void func_436(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_216(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_437(int iParam0)
{
	if (!func_216(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_438(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_203(iParam1))
	{
		return;
	}
	iVar0 = func_437(iParam1);
	if (func_684(iParam1))
	{
		if (!func_685(iParam1))
		{
			return;
		}
	}
	func_218(iParam1, 39, 1);
	func_686(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_686(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_686(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_206(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_687(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_439(int iParam0)
{
	if (!func_203(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_203(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_393((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_688(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_393((*Global_1347702)[63]->f_15, 1) || func_214((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_688(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_393((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_215(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_688(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_393((*Global_1347702)[134]->f_15, 1) || func_214((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_393((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					Jump @3087; //curOff = 2560
					if (func_688(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					Jump @3087; //curOff = 2647
					iVar1[0] = -922193456;
					Jump @3087; //curOff = 2660
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					Jump @3087; //curOff = 2706
					iVar1[0] = 1295334688;
					iVar7 = 1;
					Jump @3087; //curOff = 2722
					iVar1[0] = -2051275045;
					Jump @3087; //curOff = 2735
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					Jump @3087; //curOff = 2781
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @3087; //curOff = 2807
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @3087; //curOff = 2843
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @3087; //curOff = 2869
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @3087; //curOff = 2895
					iVar1[0] = -922193456;
					Jump @3087; //curOff = 2908
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @3087; //curOff = 2934
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @3087; //curOff = 2960
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					Jump @3087; //curOff = 2986
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @3087; //curOff = 3022
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					Jump @3087; //curOff = 3058
					iVar1[0] = -268604689;
					Jump @3087; //curOff = 3071
					iVar1[0] = -922193456;
					Jump @3415; //curOff = 3087
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar7 = 2;
							break;
						case 14:
							iVar1[0] = -426171916;
							iVar1[1] = 1484386316;
							iVar1[2] = 1254970547;
							iVar7 = 3;
							break;
						case 4:
							if (func_73(747937920, 1) && !func_393((*Global_1347702)[1]->f_15, 1))
							{
								iVar1[0] = -1155031950;
							}
							else
							{
								iVar1[0] = -1341683964;
							}
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					Jump @3415; //curOff = 3250
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar1[2] = 1484386316;
							iVar7 = 3;
							break;
						case 14:
							iVar1[0] = -1092189504;
							iVar1[1] = 80515440;
							iVar7 = 2;
							break;
						case 4:
							iVar1[0] = -1341683964;
							iVar1[1] = 867156718;
							iVar7 = 2;
							break;
						case 7:
							iVar1[0] = -1341683964;
							iVar1[1] = 1484386316;
							iVar7 = 2;
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					if (bParam3 && does_entity_exist(func_439(iParam0)))
					{
						iVar10 = 0;
						while (iVar10 < iVar7)
						{
							if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
							{
								bVar9 = true;
								iVar8 = Global_40.f_4942[iParam0]->f_3;
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						iVar11 = 0;
						if (iVar7 > 0 && bParam2)
						{
							iVar11 = get_random_int_in_range(0, iVar7);
						}
						iVar8 = &iVar1[iVar11];
					}
					if (!func_227(iParam0, iVar8))
					{
						iVar8 = Global_40.f_4942[iParam0]->f_3;
					}
					return iVar8;
				}

bool func_441(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_442(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_78(iParam0) || func_217(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_443(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_444(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	func_689(iVar0);
	func_206(iParam0, 60, 1);
	if (bParam1)
	{
		func_690(iParam0);
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	func_691(iVar0);
	func_218(iParam0, 60, 1);
	if (bParam1)
	{
		func_692(iParam0);
	}
}

void func_446(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	func_693(iVar0);
	if (iParam0 == 14)
	{
		func_694(iVar0);
	}
	func_206(iParam0, 61, 1);
	if (bParam1)
	{
		func_695(iParam0);
	}
}

void func_447(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	func_696(iVar0);
	func_218(iParam0, 61, 1);
	if (bParam1)
	{
		func_697(iParam0);
	}
}

bool func_448(int iParam0)
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

bool func_449(int iParam0)
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

bool func_450(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	func_698(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_452(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_699(296923297, iParam1);
			return func_700(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_699(1237718549, iParam1);
			return func_700(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_453(int iParam0, int iParam1)
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

bool func_454(int iParam0, int iParam1)
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

bool func_455(int iParam0, int iParam1)
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
	if (!func_453(iParam0, iVar0))
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

void func_456(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_457(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_453(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_453(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_453(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_453(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_453(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_453(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_453(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_453(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_453(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_453(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_453(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_453(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_453(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_453(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_453(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_453(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_453(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_453(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_453(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_453(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_453(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_453(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_453(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_453(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_453(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_453(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_458(int iParam0)
{
	func_701(iParam0, 1);
	func_701(iParam0, 128);
	func_701(iParam0, 256);
	func_701(iParam0, 512);
	func_701(iParam0, 1024);
	func_701(iParam0, 2048);
	func_701(iParam0, 4096);
	func_701(iParam0, 65536);
	func_701(iParam0, 16384);
	func_701(iParam0, 262144);
	func_701(iParam0, 524288);
	func_701(iParam0, 1048576);
	func_701(iParam0, 2097152);
	func_701(iParam0, 32768);
	func_701(iParam0, 131072);
	func_701(iParam0, 134217728);
	func_701(iParam0, 1073741824);
}

void func_459(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_460(var uParam0, int iParam1, bool bParam2)
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

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_702(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_702(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_20() == -1 && !func_703(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_703(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_702(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_562(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_704(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_705(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

void func_462(int iParam0, int iParam1)
{
	if (!func_196(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_463(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_196(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_464(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	if (!func_387(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_465(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (func_72(-1741667789))
				{
					func_706(-1741667789);
				}
			}
			else if (!func_72(-1741667789))
			{
				func_321(-1741667789);
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = get_hash_key(sVar0);
	_0xbfcb17895bb99e4e(iVar1, bParam1);
	if (_0x113857d66a9cabe6(iVar1))
	{
	}
	_0x67b0778c62e74423(!bParam1);
	_0x6c03118e9e5c1a14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (func_72(-1799960545))
			{
				func_706(-1799960545);
			}
		}
		else if (!func_72(-1799960545))
		{
			func_321(-1799960545);
		}
	}
}

bool func_466(int iParam0)
{
	func_165(iParam0, 0, 0);
	if (func_166(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

bool func_467(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_468()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_469(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

char* func_470(int iParam0)
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

void func_471(int iParam0, bool bParam1)
{
	if (!func_212(iParam0))
	{
		return;
	}
	if (!func_254(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_707(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_707(iParam0)))
		{
			_0xca41e86545413b5b(func_708(iParam0), func_209(iParam0), func_709(iParam0), func_707(iParam0), Global_36);
		}
	}
	func_710(iParam0, 1);
	bParam1 = bParam1;
}

void func_472(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_398(Global_1898330[iParam0]);
		func_711((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_473(int iParam0, bool bParam1)
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

void func_474(int iParam0, bool bParam1)
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

void func_475(int iParam0, int iParam1)
{
	func_531(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

bool func_476(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_477(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_196(iParam0))
	{
		return;
	}
	if (!func_387(iParam0, 1))
	{
		return;
	}
	if (!func_387(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_476(iParam0)) && func_712(iParam0))
	{
		return;
	}
	func_463(iParam0, 1);
	func_636(iParam0);
	if (func_532(func_69(iParam0)))
	{
		iVar0 = func_283(iParam0);
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
		func_463(iParam0, 16);
	}
	if (func_387(iParam0, 128) && !bParam3)
	{
		func_388(iParam0, 0);
	}
}

void func_478(int iParam0, bool bParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_294(iParam0, 1024))
		{
			func_279(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_294(iParam0, 1024))
	{
		func_278(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_713(iParam0);
}

void func_479(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_480(int iParam0, bool bParam1)
{
	if (!func_292(iParam0))
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

bool func_481(int iParam0, int iParam1)
{
	return func_323(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

int func_482()
{
	if (!func_393((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_393((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_393((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_393((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_393((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_393((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_393((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_483(int iParam0)
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

bool func_484(int iParam0)
{
	if (func_502())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_485(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_486(var uParam0)
{
	func_434(&(uParam0->f_12));
}

bool func_487(int iParam0, int iParam1)
{
	return func_323(Global_1935369->f_5[iParam0]->f_7, iParam1);
}

bool func_488(var uParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar3 = create_itemset(true);
	bVar4 = true;
	if (!is_itemset_valid(iVar3))
	{
		bVar4 = false;
	}
	iVar0 = _0x59b57c4b06531e1e(func_714(player_id()), 2.5f, iVar3, 1);
	if (iVar0 <= 0)
	{
		destroy_itemset(iVar3);
		bVar4 = false;
	}
	if (get_itemset_size(iVar3) <= 0)
	{
		destroy_itemset(iVar3);
		bVar4 = false;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar5, iVar3));
			iVar1 = get_ped_index_from_entity_index(iVar2);
			if (((!is_entity_dead(iVar1) && is_ped_human(iVar1)) && is_ped_male(iVar1)) && is_ped_active_in_scenario(iVar1, 0))
			{
				Stack.Push(uParam0);
				Stack.Push(get_entity_model(iVar2));
				Call_Loc(uParam0->f_32);
				if (StackVal)
				{
					if (!is_ped_a_player(iVar1))
					{
						if (is_ped_active_in_scenario(iVar1, 0) && !((_get_scenario_point_type_ped_is_using(iVar1) == -1539374245 || _get_scenario_point_type_ped_is_using(iVar1) == -120888770) || _get_scenario_point_type_ped_is_using(iVar1) == 798764373))
						{
							if (uParam0->f_1 != iVar1)
							{
								uParam0->f_1 = iVar1;
								uParam0->f_2 = iVar2;
								destroy_itemset(iVar3);
								return true;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	destroy_itemset(iVar3);
	uParam0->f_10 = 1;
	return false;
}

int func_489()
{
	switch (func_245())
	{
		case 76:
			return -1445135526;
		case 92:
			return -1445135526;
		case 5:
			if (func_715(2))
			{
				if (!func_501(5, 5, 2))
				{
					return -233934854;
				}
				if (!func_501(5, 5, 4))
				{
					return 1423490702;
				}
				return -1938511850;
			}
			else
			{
				if (!func_501(5, 5, 16))
				{
					return -2102436869;
				}
				if (!func_501(5, 5, 32))
				{
					return -1436795223;
				}
				return -1990962020;
			}
			break;
		case 120:
			return -813796418;
		case 115:
			if (!func_501(115, 5, 2))
			{
				return 966958492;
			}
			return 480011144;
		case 38:
			if (!func_501(38, 5, 2) && func_509(9))
			{
				return 1255849914;
			}
			if (!func_501(38, 5, 16))
			{
				return 1536283262;
			}
			return -787683245;
		case 105:
			if (!func_501(105, 5, 4))
			{
				return 1423490702;
			}
			return 367739382;
	}
	return 0;
}

int func_490(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_716(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_491(int iParam0)
{
	if (Global_1914319->f_17371)
	{
		return true;
	}
	if (func_717(Global_35, 0))
	{
		return true;
	}
	if (func_718())
	{
		return true;
	}
	if (func_719(Global_35, iParam0, 1, 1) > 5f)
	{
		return true;
	}
	return false;
}

bool func_492()
{
	if (is_ped_active_in_scenario(Global_35, 0))
	{
		iVar0 = -545460140;
		iVar1 = _get_scenario_point_type_ped_is_using(Global_35);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_493(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || func_326(iParam0, 0))
	{
		return false;
	}
	if (func_507(iParam0))
	{
		func_434(&uLocal_216);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_495(&uLocal_216))
	{
		if (func_496(&uLocal_216) < 2f)
		{
			return false;
		}
	}
	else
	{
		func_428(&uLocal_216, 0);
		return false;
	}
	return true;
}

bool func_494(var uParam0, vector3 vParam1)
{
	if (!is_string_null_or_empty(&vParam1))
	{
		func_512(&uLocal_219, uParam0->f_1, uParam0->f_7, 0);
		if (func_720(&uLocal_219, vParam1, uParam0->f_1, Global_35, 1077936128))
		{
			return true;
		}
	}
	return false;
}

bool func_495(var uParam0)
{
	return func_721(*uParam0, 1);
}

float func_496(var uParam0)
{
	if (!func_495(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_722(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_723() - uParam0->f_1);
}

bool func_497(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

Vector3 func_499()
{
	switch (func_245())
	{
		case 76:
			if (func_724(2))
			{
				return -301.87f, 796.88f, 117.96f;
			}
			return -246.61f, 771.52f, 117.17f;
		case 92:
			return 3000.03f, 604.51f, 40.59f;
		case 5:
			if (func_724(2))
			{
				return 2635.1f, -1228.48f, 52.38f;
			}
			return 2803.22f, -1180.84f, 46.43f;
		case 120:
			return -3697.52f, -2589.47f, -11.29f;
		case 115:
			return -5523.76f, -2904.8f, -3.6f;
		case 38:
			return -816.94f, -1312.28f, 42.7f;
		case 105:
			return 1342.52f, -1371.6f, 83.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_500(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

bool func_501(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_295(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_323(&(Global_23118.f_1651[iVar1]), iParam2);
}

bool func_502()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_503(int iParam0)
{
	return func_294(iParam0, 67108864);
}

void func_504(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_503(iParam0))
		{
			func_279(iParam0, 67108864);
		}
	}
	else if (func_503(iParam0))
	{
		func_278(iParam0, 67108864);
	}
}

void func_505(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_506(int iParam0, int iParam1)
{
	func_531(&(iParam0->f_19), iParam1);
}

bool func_507(int iParam0)
{
	if (((func_497(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

bool func_508(int iParam0, bool bParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_312(*iParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	if (iParam0->f_30 == 1)
	{
		if (!func_658(iParam0, 65536) && func_725(Global_35, iVar0, 1) > 25f)
		{
			func_498(1, 1, 0);
		}
		if (func_726(iParam0, bParam2))
		{
			if (func_728(func_727()))
			{
				func_729(func_727());
			}
			func_730(iParam0);
			iParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_658(iParam0, 64))
		{
			return false;
		}
		if (func_725(Global_35, iVar0, 1) < 49f)
		{
			if (func_731(iParam0, iVar0))
			{
				func_732();
				if (bParam1)
				{
					if (!func_726(iParam0, bParam2))
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

bool func_509(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_210(iParam0))
	{
		return false;
	}
	return func_393((*Global_1347702)[iParam0]->f_15, 1);
}

void func_510(int iParam0)
{
	func_279(iParam0, 134217728);
}

Vector3 func_511(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_512(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_733(uParam0, iParam1, sParam2))
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

Vector3 func_513()
{
	return 0f, 0f, 0f;
}

bool func_514(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_734(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = uParam0[0];
		iVar1 = uParam0[1];
		if ((does_entity_exist(iVar0) && !func_326(iVar0, 0)) && (does_entity_exist(iVar1) && !func_326(iVar1, 0)))
		{
			if (!func_176(vParam4))
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

int func_515(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_735(iVar0, 0)))
		{
			if (func_736(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_516(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (is_string_null_or_empty(func_737(&vVar0)))
	{
		return;
	}
	iVar3 = func_312(*iParam0);
	if (!func_220(iVar3, 0))
	{
		return;
	}
	if (is_string_null_or_empty(iParam0->f_37))
	{
		Stack.Push(*iParam0);
		Call_Loc(iParam0->f_44);
		iParam0->f_37 = StackVal;
	}
	func_512(&uLocal_219, iVar3, iParam0->f_37, 0);
	set_ped_can_use_auto_conversation_lookat(iVar3, true);
	iParam0->f_2 = 1;
	iParam0->f_37 = 0;
	if (!func_658(iParam0, 65536))
	{
		if (iParam0->f_21 < 0)
		{
			if (func_655())
			{
				func_512(&uLocal_219, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_512(&uLocal_219, Global_35, "JOHN", 0);
			}
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
			iParam0->f_28 = 1;
		}
		else if (func_658(iParam0, 128))
		{
			iVar4 = iParam0->f_21;
			iVar5 = func_312(&(iParam0->f_3[iVar4]));
			if (!func_220(iVar5, 0))
			{
				return;
			}
			Stack.Push(&(iParam0->f_3[iVar4]));
			Call_Loc(iParam0->f_44);
			sVar6 = StackVal;
			func_512(&uLocal_219, iVar5, sVar6, 0);
			set_ped_can_use_auto_conversation_lookat(iVar5, true);
			iParam0->f_3[iVar4]->f_2 = 1;
		}
	}
	bVar7 = func_658(iParam0, 16384);
	if (func_514(&uLocal_219, vVar0, iParam0->f_40, bVar7, 0))
	{
		func_738(func_727());
		iParam0->f_30 = 1;
	}
	func_739(iParam0);
}

bool func_517()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_518(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_740(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_741())
	{
		return func_740(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_740(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_519(int iParam0)
{
	if (!func_742(iParam0))
	{
		return false;
	}
	return func_214((*Global_1392626)[iParam0]->f_3);
}

bool func_520(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_210(iParam0))
	{
		return false;
	}
	return func_214((*Global_1347702)[iParam0]->f_15);
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_522(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_743(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_744(iParam0))
	{
		return false;
	}
	if (func_745(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_746(iParam0, 1)) || func_366(32768))
	{
		if (!func_746(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_747())
	{
		return false;
	}
	return true;
}

void func_523(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_524(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &iVar0, true, iParam1, false);
	return func_702(iVar0);
}

void func_525(int iParam0)
{
	func_521(iParam0, &iVar0, &iVar1);
	func_748(iVar0, iVar1);
}

bool func_526(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_749())
	{
		return false;
	}
	if (func_718())
	{
		return false;
	}
	if (is_string_null(func_750(iParam0)))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_178(player_id(), 0, 0, 1))
		{
			return false;
		}
	}
	if (is_thread_active(&Global_1415402, false))
	{
		return false;
	}
	return true;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

float func_528(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_529(int iParam0, int iParam1)
{
	request_script(func_750(iParam0));
	if (has_script_loaded(func_750(iParam0)))
	{
		Global_1415402 = start_new_script_with_args(func_750(iParam0), &iParam1, 1, 1024);
		set_script_as_no_longer_needed(func_750(iParam0));
	}
}

char* func_530(int iParam0, int iParam1)
{
	if (Global_40.f_9829[iParam0]->f_1 != 0)
	{
		switch (&Global_40.f_9829[iParam0])
		{
			case 76:
				return "prisoner_val_1";
			case 105:
				return "prisoner_rhd_1";
			case 5:
				return "prisoner_std_1";
			case 26:
				return "prisoner_str_1";
			case 38:
				if (iParam1 == 0)
				{
					return "prisoner_blw_1";
				}
				break;
			case 115:
				return "prisoner_twd_1";
		}
	}
	return "prisoner";
}

void func_531(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_532(int iParam0)
{
	return iParam0 != 0;
}

bool func_533(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_283(iParam0)))
	{
		_0x49a8c2cd97815215(func_283(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_283(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_534(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_535(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_751(iParam0) && func_752(iParam0))
		{
			func_753(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_536(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_754(iParam0, iParam1);
	Var0 = { func_755(iParam0, 0, 1) };
	iVar5 = func_756(iParam0, &Var0, 0, 0);
	iVar6 = func_757(iParam0, 0);
	if ((iVar5 > 1 && !func_758()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_554(iParam0, -2051813666))
		{
			func_306(583, 1);
		}
		else
		{
			func_306(582, 0);
		}
	}
	if (func_759(iParam0, &Var0, *iParam1, 0, 0))
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

void func_537(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_760(iParam0, -949239683))
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

int func_538(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_553(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_761(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_762(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_763(bParam2), iParam0, 0);
	return iVar2;
}

bool func_539(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_540(iParam0) != 0;
}

int func_540(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_764())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_765(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_541(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_542(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_764())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_541(iVar0))
		{
			if (func_582(func_765(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_543(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_766(48);
	func_767(0, -1);
}

bool func_544(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_393((*Global_1347702)[iParam0]->f_15, 1);
}

int func_545(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_546(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_547(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_393((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_548(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_210(iParam0))
	{
		return false;
	}
	return func_214((*Global_1347702)[iParam0]->f_15);
}

int func_549()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_582(func_768(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_468() && (func_548(38) || func_544(38)))
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
			if (func_468() && (func_548(39) || func_544(39)))
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
			iVar9 = func_769(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_468() && (func_548(41) || func_544(41)))
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
			if (func_468() && (func_548(49) || func_544(49)))
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
			iVar9 = func_769(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_770(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_771(iParam0, iVar13, iVar14))
	{
	}
	if (func_772(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_773(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_774(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_775(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_776(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_551(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_468() && (func_548(38) || func_544(38)))
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
			if (func_468() && (func_548(39) || func_544(39)))
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
			if (func_468() && (func_548(49) || func_544(49)))
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
		if (func_468() && (func_548(38) || func_544(38)))
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
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_779(_create_var_string(2, sVar0), _create_var_string(2, func_778(func_546(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_468() && (func_548(39) || func_544(39)))
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
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_468() && (func_548(49) || func_544(49)))
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
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_777(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_553(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_554(int iParam0, int iParam1)
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

bool func_555(int iParam0, int iParam1)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_556(int iParam0)
{
	if (!func_194(iParam0))
	{
		return;
	}
	func_780(iParam0);
	func_781(iParam0);
}

int func_557(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_558(int iParam0, bool bParam1)
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
	if (func_534(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_782(iVar0) || func_703(iVar0))
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

int func_559(int iParam0, bool bParam1)
{
	if (!func_534(iParam0, 0))
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

void func_560(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_702(iParam0))
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

bool func_561(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_763(bParam0));
}

bool func_562(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_755(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_783((386 + iVar28), 1);
			if (func_784(iParam0, &Var0, iVar5, 0))
			{
				if (func_785(iParam0, &Var6, iVar5))
				{
					Var29 = { func_786(iParam0, Var0, iVar5, 0) };
					func_787(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_561(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_563(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_788(iParam0, iParam1);
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

bool func_563(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_565(iParam0))
	{
		return false;
	}
	if (!func_561(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_564(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_559(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_560(iVar0);
			if (iParam1 == 1248274121)
			{
				func_789(iVar0);
			}
		}
		if (!func_759(iParam0, &uVar1, 1, 0, 0))
		{
			func_753(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_790(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_562(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_562(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_562(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_190())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_705(iVar0))
				{
					func_562(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_562(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_791(Global_35, 2, 0, 1);
				if ((((func_702(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_68(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_702(iVar7) && func_68(24))
				{
					if (!func_562(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_562(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_562(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_306(480, 1);
	}
	return true;
}

bool func_565(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_566(int iParam0, int iParam1, int iParam2)
{
	if (!func_565(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_702(iVar4))
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
	if (func_582(611073244, 1, 0) && iParam2 == -897553835)
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
		func_601(func_792(iParam0), func_600(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_393((*Global_1835011)[14]->f_1, 1))
			{
				func_306(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_561(0))
	{
		if (func_563(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_606(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_567(int iParam0)
{
	if ((iParam0 == -615217896 && !func_793()) || iParam0 != -615217896)
	{
		if (func_794(Global_35, iParam0, &uVar0))
		{
			func_585(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_591();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_591();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_591();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_589();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_587();
			break;
	}
}

void func_568(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_587();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_588();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_589();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_590();
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
			func_591();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_795();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_796();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_569(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_570(int iParam0)
{
	bVar0 = func_554(iParam0, -2017733358);
	if (func_797() < 3)
	{
		if (bVar0)
		{
			if (func_799(func_798(iParam0), iParam0))
			{
				func_601(79, func_600(func_798(iParam0)), 1);
			}
			else
			{
				func_601(78, func_600(func_798(iParam0)), 1);
			}
		}
		else
		{
			func_601(80, func_600(func_800(iParam0)), 1);
		}
	}
}

bool func_571()
{
	if (((((func_801(839908568, 400) || func_801(-1134030454, 400)) || func_801(623353496, 400)) || func_801(-344413337, 400)) || func_801(-1664948962, 400)) || func_801(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_572(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_802(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_803(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_804(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_573(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_550(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_552(51, 0, 0, 0, 0, -1, 0);
			func_805(8192);
			break;
		case 581047644:
			func_550(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_552(51, 0, 0, 0, 0, -1, 0);
			func_805(524288);
			break;
		case -644199619:
			func_550(39, 0, 0, 0, 0, 0, 1, 0);
			func_552(39, 0, 0, 0, 0, -1, 0);
			func_806(16);
			break;
		case 684296857:
			func_550(41, 0, 0, 0, 0, 0, 1, 0);
			func_552(41, 0, 0, 0, 0, -1, 0);
			func_807(8);
			break;
		case 466137807:
			func_550(49, 0, 0, 0, 0, 0, 1, 0);
			func_552(49, 0, 0, 0, 0, -1, 0);
			func_808(16);
			break;
		case -1087522507:
			func_550(43, 0, 0, -1791518714, func_809(1), 0, -1, 0);
			func_810(1);
			break;
		case -405829000:
			func_550(43, 0, 0, -2087881550, func_809(2), 0, -1, 0);
			func_810(2);
			break;
		case 378660860:
			func_550(43, 0, 0, 1908068621, func_809(4), 0, -1, 0);
			func_810(4);
			break;
		case 1566111097:
			func_550(43, 0, 0, 1611247019, func_809(8), 0, -1, 0);
			func_810(8);
			break;
		case 1276007140:
			func_550(43, 0, 0, 1319635688, func_809(16), 0, -1, 0);
			func_810(16);
			break;
	}
}

void func_574(int iParam0)
{
	if (func_811() == 1)
	{
		if (func_544(39))
		{
			func_306(342, 0);
		}
		else
		{
			func_306(343, 0);
			func_806(1);
		}
	}
	if (func_811() >= 30)
	{
		func_306(344, 0);
	}
	func_550(39, 0, 0, 0, 0, 0, -1, 0);
	func_552(39, 0, 0, func_811(), 30, 1, 0);
}

void func_575(int iParam0)
{
	if (func_812() == 1)
	{
		if (func_544(49))
		{
			func_306(409, 0);
		}
		else
		{
			func_306(410, 0);
			func_808(1);
		}
	}
	if (func_812() >= 10)
	{
		func_306(411, 0);
	}
	func_550(49, 0, 0, 0, 0, 0, -1, 0);
	func_552(49, 0, 0, func_812(), 10, 1, 0);
}

void func_576(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_306(437, 0);
			func_306(440, 0);
			func_813(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_550(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_552(51, 0, 0, sVar0, func_769(-949689219, 20), 1, 0);
			func_805(1);
			func_814(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_813(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_550(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_552(51, 0, 0, sVar0, func_769(-1248968496, 20), 1, 0);
			func_805(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_813(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_550(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_552(51, 0, 0, sVar0, func_769(1706369307, 20), 1, 0);
			func_805(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_813(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_550(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_552(51, 0, 0, sVar0, func_769(1520110311, 20), 1, 0);
			func_805(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_306(438, 0);
			func_813(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_550(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_552(51, 0, 0, sVar0, func_769(-1992824800, 20), 1, 0);
			func_805(32768);
			break;
		default:
			func_306(439, 0);
			break;
	}
}

void func_577()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_578(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_544(43))
		{
			if (iParam0 == 281887510)
			{
				func_306(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_306(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_306(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_306(400, 0);
			}
		}
		else if (func_554(iParam0, 412399755))
		{
			func_815(-1791518714);
			if (func_816() == 0)
			{
				func_767(0, 10);
				iVar1 = func_817(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_544(44))
		{
			if (iParam0 == -222563712)
			{
				func_306(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_306(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_306(401, 0);
			}
		}
		else if (func_554(iParam0, 709057512))
		{
			func_815(-2087881550);
			if (func_816() == 1)
			{
				func_767(0, 10);
				iVar1 = func_817(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_544(45))
		{
			if (iParam0 == 2116770557)
			{
				func_306(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_306(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_306(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_306(398, 0);
			}
		}
		else if (func_554(iParam0, -1478961327))
		{
			func_815(1908068621);
			if (func_816() == 2)
			{
				func_767(0, 10);
				iVar1 = func_817(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_820(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_821(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_766(48);
					}
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_544(46))
		{
			if (iParam0 == 2085530337)
			{
				func_306(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_306(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_306(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_306(406, 0);
			}
		}
		else if (func_554(iParam0, -1238404098))
		{
			func_815(1611247019);
			if (func_816() == 3)
			{
				func_767(0, 10);
				iVar1 = func_817(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_544(47))
		{
			if (iParam0 == -1521783510)
			{
				func_306(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_306(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_306(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_306(403, 0);
			}
		}
		else if (func_554(iParam0, 1160548794))
		{
			func_815(1319635688);
			if (func_816() == 4)
			{
				func_767(0, 10);
				iVar1 = func_817(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_818(iParam0) < func_819(iParam0))
					{
						func_550(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_552(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_579(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_820(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_821(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_766(48);
		}
	}
}

void func_580(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_582(func_822(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_823(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_824(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_581(int iParam0, int iParam1, int iParam2)
{
	if (func_20() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_572(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_572(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_572(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_572(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_572(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_572(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_572(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_572(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_572(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_572(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_572(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_572(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_572(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_825())
			{
				func_572(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_572(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_572(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_572(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_572(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_572(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_572(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_572(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_572(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_572(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_572(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_572(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_572(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_582(int iParam0, int iParam1, bool bParam2)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_553(iParam0);
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
		if (!func_826(iParam0, 1))
		{
			return false;
		}
	}
	return func_538(iParam0, 0, bParam2) >= iParam1;
}

void func_583(int iParam0)
{
	if (func_544(41))
	{
		func_306(363, 0);
	}
	else
	{
		func_306(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_827(-1865241121);
			func_828(-642026005);
			func_829(-642026005);
			func_767(0, 10);
			break;
		case -2108314374:
			func_827(2117142684);
			func_828(-940584364);
			func_829(-940584364);
			func_767(0, 10);
			break;
		case -1193798153:
			func_827(-1409326024);
			func_828(1972645282);
			func_829(1972645282);
			func_767(0, 10);
			break;
		case -787702678:
			func_827(-641744968);
			func_828(1667205433);
			func_829(1667205433);
			func_767(0, 10);
			break;
		case -804542901:
			func_827(-946988203);
			func_828(1362715885);
			func_829(1362715885);
			func_767(0, 10);
			break;
		case -1696275132:
			func_827(-646136018);
			func_828(1053540370);
			func_829(1053540370);
			func_767(0, 10);
			break;
		case -161595323:
			func_827(-955835837);
			func_828(-1100103852);
			func_829(-1100103852);
			func_767(0, 10);
			break;
		case -1114363619:
			func_827(-179276075);
			func_828(-1409869209);
			func_829(-1409869209);
			func_767(0, 10);
			break;
		case -368407134:
			func_827(-492711560);
			func_828(-1760235357);
			func_829(-1760235357);
			func_767(0, 10);
			break;
		case 1997759228:
			func_827(1764383959);
			func_828(-138366827);
			func_829(-138366827);
			func_767(0, 10);
			break;
		case 1265573293:
			func_827(317501533);
			func_828(-1261163843);
			func_829(-1261163843);
			func_767(0, 10);
			break;
		case -1030441283:
			func_827(817753087);
			func_828(-963523016);
			func_829(-963523016);
			func_767(0, 10);
			break;
		case -1490884871:
			func_827(576606016);
			func_828(560825326);
			func_829(560825326);
			func_767(0, 10);
			break;
		case -395458616:
			func_827(814934957);
			func_828(858269539);
			func_829(858269539);
			break;
	}
}

void func_584(int iParam0, int iParam1)
{
	func_830(iParam0, iParam1, &uVar0);
}

int func_585(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_755(iParam1, 1, 0) };
		iParam3 = func_831(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_833(iParam1, iParam2, func_832(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_834(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_832(iParam3, 1)])
			{
				func_835(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_836(32768) && iParam1 != &Global_1946804->f_57[func_832(iParam3, 1)])
			{
				func_837();
				func_835(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_835(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_838(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_835(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_839(0);
			func_840(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_835(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_586(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_791(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_791(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_841("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_842(&Var3, iVar2, iVar0, iVar1))
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
						func_843(iVar0);
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

void func_587()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_588()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_589()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_590()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_591()
{
	func_844();
	func_845();
	func_846();
}

void func_592(int iParam0, int iParam1, bool bParam2)
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

void func_593(int iParam0, bool bParam1)
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
	func_777(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_594(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_595(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_596(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_597(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_598(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_599(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_600(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_601(int iParam0, int iParam1, bool bParam2)
{
	func_521(iParam0, &iVar0, &iVar1);
	if (!func_522(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_746(iParam0, 1024))
	{
		return;
	}
	func_523(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_602(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_521(iParam0, &iVar0, &iVar1);
	if (!func_522(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_746(iParam0, 1024))
	{
		return;
	}
	func_523(iVar0, iVar1);
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

int func_603()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_764())
	{
		return func_604();
	}
	iVar4 = (func_764() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_764())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_847(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_765(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_604()
{
	iVar0 = get_random_int_in_range(0, func_764());
	return func_765(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_605(int iParam0)
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

int func_606(int iParam0, int iParam1, int iParam2)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_755(iParam0, 0, 1) };
	Var5 = { func_786(iParam0, Var0, Var0.f_4, 0) };
	return func_848(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_607(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_557(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_849(81053684, 0) <= 0)
			{
				func_835(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_835(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_850(iParam0);
			if (func_851(iVar0))
			{
				func_852(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_835(30, iParam0, 0, 0, 0);
			}
			if (func_853() == -2125499975 || func_853() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_835(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_853() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_835(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_854(-525676072, 0))
			{
				if (func_855(-525676072, &iVar1))
				{
					func_835(33, iVar1, 0, 0, 0);
				}
			}
			func_835(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_856(99217379))
		{
			func_585(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_556(24);
		if (func_586(&iVar2, 0))
		{
			func_562(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_608(int iParam0)
{
	if (func_554(iParam0, 943695443))
	{
		func_857(0, iParam0);
	}
	else if (func_554(iParam0, -2096528786))
	{
		func_857(1, iParam0);
	}
	else if (func_554(iParam0, -1094167013))
	{
		func_857(2, iParam0);
	}
	else if (func_554(iParam0, 1936654645))
	{
		func_857(3, iParam0);
	}
	else if (func_554(iParam0, 1306489306))
	{
		func_857(4, iParam0);
	}
	else if (func_554(iParam0, 435762317))
	{
		func_857(5, iParam0);
	}
	else if (func_554(iParam0, 1259363210))
	{
		func_857(6, iParam0);
	}
	else if (func_554(iParam0, 881398259))
	{
		func_857(7, iParam0);
	}
	else if (func_554(iParam0, -541549214))
	{
		func_857(8, iParam0);
	}
	else if (func_554(iParam0, 130796156))
	{
		func_857(-1, iParam0);
	}
}

int func_609(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_858(&Var4, 1356624740);
	return func_859(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_610(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return Var0;
	}
	if (func_554(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_554(iParam0, -537818634))
			{
				return func_860(189951448);
			}
			else
			{
				return func_860(1176172851);
			}
		}
	}
	else if (func_554(iParam0, -537818634))
	{
		return func_860(-963660207);
	}
	if (func_554(iParam0, 2084895747))
	{
		return func_860(1694039471);
	}
	return Var2;
}

void func_611(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_393((*Global_1835011)[4]->f_1, 1))
				{
					func_306(109, 1);
				}
			}
			break;
	}
}

void func_612(int iParam0, char* sParam1)
{
	sVar0 = func_862(func_861(0));
	func_864(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_863(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_534(iParam0, 0))
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
	if (!func_865())
	{
		func_866(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_867(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_867(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_555(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_553(iParam0);
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
	else if (!func_868(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_628(_create_var_string(10, &cVar2, _create_var_string(0, func_600(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_554(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_600(iParam0));
	}
	func_864(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_614(var uParam0, int iParam1)
{
	return func_323(uParam0->f_16, iParam1);
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "END_SHIFT";
		case 4:
			return "EVERYBODY_OUT";
		case 8:
			return "FAREWELL_NO_SALE";
		case 64:
			return "WELCOME";
		case 128:
			return "WELCOME_SICK";
		case 256:
			return "WELCOME_MASK";
		case 512:
			return "WELCOME_MASK_ESCALATED";
		case 1024:
			return "WELCOME_WANTED";
		case 2048:
			return "NO_FIGHTING_HERE";
		case 4096:
			return "PUT_WEAPON_AWAY";
		case 8192:
			return "MISBEHAVING_LOW";
		case 16384:
			return "MISBEHAVING_MED";
		case 32768:
			return "MISBEHAVING_HIGH";
		case 65536:
			return "UNAUTHORIZED_AREA";
		case 16:
			return "HANGING_AROUND_NO_PURCHASE";
		case 131072:
			return "LAW_THREAT";
		case 524288:
			return "GET_OUT_SHOP";
		case 1048576:
			return "LOCKDOWN_BANK";
		case 2097152:
			return "GET_IN_BACKROOM";
		default:
			break;
	}
	return "";
	return "";
}

bool func_616(var uParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam1))
	{
		uVar0 = func_869(uParam0->f_8);
		if (func_870(uParam0->f_4, sParam1, 1541280898, 0, 1, uVar0, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_617(var uParam0, int iParam1)
{
	func_296(&(uParam0->f_16), iParam1);
}

int func_618(int iParam0)
{
	iVar0 = func_832(func_871(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_619(var uParam0)
{
	if (func_620(81053684, uParam0))
	{
		return true;
	}
	if (func_620(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_620(int iParam0, var uParam1)
{
	iVar1 = func_832(func_871(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_557(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_621(int iParam0)
{
	if (!does_entity_exist(iParam0) || func_326(iParam0, 0))
	{
		return true;
	}
	return is_any_speech_playing(iParam0);
}

void func_622(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_623()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

char* func_624(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_625(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_872(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_626(int iParam0)
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

bool func_627(int iParam0)
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

char* func_628(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_629(int iParam0)
{
	return func_373(iParam0, Global_1310750->f_16072 | 64);
}

void func_630(int iParam0)
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

void func_631(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_0x6d5f9e69ba1be783(iParam0);
	}
}

bool func_632(int iParam0, int iParam1)
{
	return (Global_1393521->f_3[iParam0] && iParam1) != 0;
}

void func_633(var uParam0)
{
	if (func_212(uParam0->f_5) && (func_213(uParam0->f_5) || func_214(uParam0->f_5)))
	{
		func_873(uParam0->f_5, 0, 2);
	}
	if (func_134(&Global_1935630, 128))
	{
		func_874(Global_1935630, 128);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_875(Local_73.f_99[iVar0]);
		iVar0++;
	}
	func_876(&(Local_73.f_134));
	func_381(Local_73.f_141);
}

bool func_634()
{
	return true;
}

void func_635(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_196(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_636(int iParam0)
{
	if (!func_196(iParam0))
	{
		return;
	}
	iVar0 = func_312(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

void func_637(int iParam0, bool bParam1)
{
	if (func_93(iParam0))
	{
		if (bParam1)
		{
			if (!func_94(iParam0))
			{
				func_55(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_94(iParam0))
		{
			func_877(iParam0, 1);
		}
	}
}

bool func_638(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_639(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_878(iParam0);
	}
	else
	{
		func_879(iParam0, iParam1);
	}
	func_880();
}

void func_640(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_641(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_642(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_643(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_644(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_645(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_646(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_647(int iParam0)
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

float func_648(int iParam0)
{
	iVar0 = func_647(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

bool func_649(int iParam0, float fParam1)
{
	iVar0 = func_647(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_650(iParam0);
		return true;
	}
	return false;
}

float func_650(int iParam0)
{
	iVar0 = func_647(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959.f_20[iVar0]);
}

int func_651(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_411(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_652(int iParam0, int iParam1)
{
	if (!func_186(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_653(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_410(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_362(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_322(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_408(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_407(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_409(iParam0);
	if (iVar5 < 1 || iVar5 > func_411(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_654(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_655()
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

void func_656(var uParam0)
{
	uParam0->f_19 = 1;
}

bool func_657(int iParam0)
{
	iVar0 = func_312(*iParam0);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		if (func_725(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_658(int iParam0, int iParam1)
{
	return func_323(iParam0->f_19, iParam1);
}

int func_659(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

bool func_660(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_501(iParam1, iParam2, iParam3))
	{
		return false;
	}
	iVar0 = func_881(iParam4);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_520(iParam4))
	{
		if (func_509(iParam4) && func_482() <= iVar0)
		{
			if (func_663(iParam1, iParam2, iParam3, 1))
			{
				func_200(iParam0, 4);
				return true;
			}
		}
	}
	return false;
}

bool func_661(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_501(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (func_882(iParam4))
	{
		if (func_663(iParam1, iParam2, iParam3, 1))
		{
			func_200(iParam0, 4);
			return true;
		}
	}
	return false;
}

bool func_662(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_665(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_665(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_663(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_501(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_114(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

bool func_664(int iParam0)
{
	return func_323(iLocal_215, iParam0);
}

bool func_665(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

int func_666(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_883(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_884(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return &(Global_17504.f_2205[iVar2]);
	}
	return 0;
}

bool func_667(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

int func_668(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_883(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_884(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2]->f_1;
	}
	return 0;
}

void func_669(int iParam0, int iParam1)
{
	if (func_658(iParam0, 4096))
	{
		return;
	}
	if (!func_658(iParam0, 8192))
	{
		if (func_885(Global_35, iParam0))
		{
			func_200(iParam0, 2048);
		}
	}
	if (func_657(iParam0))
	{
		iParam0->f_24 = iParam1;
		iParam0->f_21 = -1;
		func_200(iParam0, 8192);
		func_200(iParam0, 4096);
	}
}

int func_670(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

void func_671(int iParam0, int iParam1)
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

void func_672(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_673(int iParam0, int iParam1)
{
	iVar0 = func_407(*iParam0);
	iVar1 = func_408(*iParam0);
	if (iParam1 < 1 || iParam1 > func_411(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_674(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_675(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_676(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_677(int iParam0)
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

void func_678(var uParam0)
{
	func_886(uParam0, 0f);
}

bool func_679(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_680(int iParam0)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_204(iParam0);
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

void func_681(int iParam0)
{
	if (func_216(iParam0))
	{
		if (does_entity_exist(func_439(iParam0)))
		{
			func_236(iParam0, 67108864, 1);
			func_218(iParam0, 19, 1);
		}
	}
}

float func_682(int iParam0)
{
	if (!func_203(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_683(int iParam0)
{
	iVar0 = func_439(iParam0);
	iVar1 = func_431(iParam0, 0);
	func_887(iParam0, iVar0);
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

bool func_684(int iParam0)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_686(int iParam0, int iParam1, bool bParam2)
{
	if (!func_203(iParam0))
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

int func_687(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_203(iParam0))
	{
		return 0;
	}
	iVar0 = func_437(iParam0);
	if (func_220(iVar0, 0))
	{
		if (func_220(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_684(iParam0)) || func_685(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_725(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_888(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_889(iParam0);
					_0x7b204f88f6c3d287(func_890(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_890(iParam0, 0));
					func_891(iParam0);
				}
			}
			else
			{
				if (func_215(iParam0, 32768, 1))
				{
					iVar2 = func_890(iParam0, 0);
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
		if (func_220((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_215(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_889(iParam0);
				_0x7b204f88f6c3d287(func_890(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_890(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_889(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_892(iParam0, 0);
	return 1;
}

bool func_688(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_689(int iParam0)
{
	if (func_326(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_690(int iParam0)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (func_888(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_437(iParam0);
	func_689(iVar0);
	func_686(iParam0, 8192, 1);
}

void func_691(int iParam0)
{
	if (func_326(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_692(int iParam0)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (func_888(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_437(iParam0);
	func_691(iVar0);
	func_686(iParam0, 8192, 0);
}

void func_693(int iParam0)
{
	if (func_326(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_694(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_78(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_695(int iParam0)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (func_888(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_437(iParam0);
	func_693(iVar0);
	func_686(iParam0, 16384, 1);
}

void func_696(int iParam0)
{
	if (func_326(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_697(int iParam0)
{
	if (!func_203(iParam0))
	{
		return;
	}
	if (func_888(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_437(iParam0);
	func_696(iVar0);
	func_686(iParam0, 16384, 0);
}

int func_698(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_893(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_699(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_227(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_701(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_702(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_703(int iParam0)
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

void func_704(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_705(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_706(int iParam0)
{
	iVar0 = func_201(iParam0, 1);
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

int func_707(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_708(int iParam0)
{
	if (!func_212(iParam0))
	{
		return 0;
	}
	return func_894(func_398(iParam0));
}

int func_709(int iParam0)
{
	if (!func_212(iParam0))
	{
		return -1;
	}
	return func_895(func_398(iParam0));
}

void func_710(int iParam0, int iParam1)
{
	if (!func_212(iParam0))
	{
		return;
	}
	func_639(iParam0, iParam1);
}

void func_711(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_894(iParam0);
	*uParam1 = func_425(iParam0);
	*uParam2 = func_895(iParam0);
}

bool func_712(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_713(int iParam0)
{
	func_896(func_280(iParam0));
}

Vector3 func_714(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_715(int iParam0)
{
	if (!func_897(iParam0))
	{
		return false;
	}
	iVar0 = func_898(iParam0);
	iVar1 = func_899(iParam0);
	if (!func_105(iVar0))
	{
		return false;
	}
	if (!func_900(iVar1))
	{
		return false;
	}
	if (func_245() == iVar0)
	{
		if (func_724(iVar1))
		{
			return true;
		}
	}
	return false;
}

void func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_901(iParam1))
		{
			func_902(iParam0, 41788943);
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
			func_903(iParam0, 0, 1);
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
			func_904(iParam0, 0);
			bVar0 = true;
		}
		func_905(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_717(int iParam0, int iParam1)
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

bool func_718()
{
	return Global_1310750->f_16077 != 0;
}

float func_719(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_720(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_734(uParam0, vParam1, 0, -1, 0, 0))
	{
		_0xe7fa07624574b79a(iParam4, iParam5, 1, 1, iParam6, 1, 0, 0, 0);
		if (iParam5 != Global_35)
		{
			_0xe7fa07624574b79a(iParam5, iParam4, 1, 1, iParam6, 1, 0, 0, 0);
		}
		return true;
	}
	return false;
}

bool func_721(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_722(var uParam0)
{
	return func_721(*uParam0, 2);
}

float func_723()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_724(int iParam0)
{
	if (!func_900(iParam0))
	{
		return false;
	}
	return &(Global_1935369->f_5[iParam0]);
}

float func_725(int iParam0, int iParam1, bool bParam2)
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
	return func_906(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_726(int iParam0, bool bParam1)
{
	if (!func_196(*iParam0) && !func_282(*iParam0, 0))
	{
		return false;
	}
	if (func_330(*iParam0, 0))
	{
		return false;
	}
	iVar0 = func_312(*iParam0);
	iVar1 = func_727();
	if (func_277(iVar1))
	{
		if (func_907(iVar1))
		{
			func_908(iParam0);
			return iParam0->f_30;
		}
		if (bParam1)
		{
			if (func_503(iVar1))
			{
				return iParam0->f_30;
			}
		}
		iVar2 = func_280(iVar1);
		iVar3 = func_909(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_908(iParam0);
			return iParam0->f_30;
		}
		if (func_910(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319->f_17371 || func_515(func_312(*iParam0), 1, 1, 1, 0)) || _is_ped_hogtied(func_312(*iParam0)))
	{
		func_908(iParam0);
		return iParam0->f_30;
	}
	if ((((func_178(player_id(), 1, 0, 1) || func_911()) || _0xf46108c50a22b029()) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id()))
	{
		return false;
	}
	if (Global_1914319->f_3[iParam0->f_24]->f_411)
	{
		return false;
	}
	if (func_717(Global_35, 0))
	{
		func_908(iParam0);
		return iParam0->f_30;
	}
	if (func_718())
	{
		if (func_667(101))
		{
			return false;
		}
	}
	if (func_75(178, 1, 1))
	{
		return false;
	}
	if (!func_493(iVar0, func_658(iParam0, 2048)))
	{
		return false;
	}
	if (iParam0->f_30 == 0)
	{
		if (!func_658(iParam0, 2048) && !func_658(iParam0, 32768))
		{
			if (!func_495(&(iParam0->f_34)))
			{
				func_428(&(iParam0->f_34), 1);
				return false;
			}
			else if (func_658(iParam0, 1024))
			{
				if (func_496(&(iParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (func_496(&(iParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_727()
{
	if (func_502())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_728(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_294(iParam0, 1073741824);
}

void func_729(int iParam0)
{
	func_278(iParam0, 1073741824);
}

void func_730(int iParam0)
{
	if (iParam0->f_28)
	{
		if (does_entity_exist(Global_35))
		{
			set_ped_can_use_auto_conversation_lookat(Global_35, false);
			iParam0->f_28 = 0;
		}
	}
	if (iParam0->f_2)
	{
		if (func_196(*iParam0))
		{
			iVar0 = func_312(*iParam0);
			if (does_entity_exist(iVar0))
			{
				set_ped_can_use_auto_conversation_lookat(iVar0, false);
				iParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_196(&(iParam0->f_3[iVar1])) && iParam0->f_3[iVar1]->f_2)
			{
				iVar2 = func_312(&(iParam0->f_3[iVar1]));
				if (does_entity_exist(iVar2))
				{
					set_ped_can_use_auto_conversation_lookat(iVar2, false);
					iParam0->f_3[iVar1]->f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

bool func_731(int iParam0, int iParam1)
{
	if (func_658(iParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_312(&(iParam0->f_3[iVar0]));
			if (func_220(iVar1, 0) && func_719(iVar1, iParam1, 1, 1) <= 4f)
			{
				iParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_658(iParam0, 512) && !func_658(iParam0, 256))
	{
		return true;
	}
	if (func_658(iParam0, 512))
	{
		if (func_657(iParam0))
		{
			return true;
		}
	}
	if (func_658(iParam0, 256))
	{
		if (func_885(Global_35, iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_732()
{
	if (func_77(5))
	{
		func_912(2);
		func_912(4);
	}
	if ((((func_77(6) || func_77(14)) || func_77(26)) || func_77(9)) || func_77(21))
	{
		func_912(4);
	}
	if (((func_520(26) || func_520(27)) || func_520(28)) || func_520(29))
	{
		func_912(4);
	}
	if (((func_112(3, 61) || func_112(3, 29)) || func_112(3, 73)) || func_112(3, 43))
	{
		func_912(4);
	}
	if (func_718())
	{
		if (func_667(101) || func_667(79))
		{
			func_912(4);
		}
		if (((((func_667(88) || func_667(89)) || func_667(108)) || func_667(98)) || func_667(106)) || func_667(110))
		{
			func_912(8);
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(717558736) > 0)
	{
		func_912(4);
	}
	if (is_thread_active((*Global_1396257)[16]->f_635, false) || is_thread_active((*Global_1396257)[13]->f_635, false))
	{
		func_912(4);
	}
}

bool func_733(var uParam0, int iParam1, char* sParam2)
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

bool func_734(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_913(vParam1, uParam0);
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

var func_735(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_736(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

var func_737(var uParam0)
{
	return uParam0;
}

void func_738(int iParam0)
{
	func_279(iParam0, 1073741824);
}

void func_739(int iParam0)
{
	func_428(&(iParam0->f_34), 1);
	iParam0->f_40 = { func_513() };
	iParam0->f_21 = -1;
	if (func_658(iParam0, 16384))
	{
		func_506(iParam0, 16384);
	}
	func_506(iParam0, 32768);
	func_506(iParam0, 1024);
	func_434(&uLocal_216);
	if (func_658(iParam0, 4096))
	{
		iVar0 = func_260(func_245(), iParam0->f_24);
		iVar1 = func_312(*iParam0);
		if (func_503(iVar0) && func_493(iVar1, 1))
		{
			func_504(iVar0, 0);
			func_506(iParam0, 8192);
			func_506(iParam0, 4096);
		}
	}
}

bool func_740(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_741()
{
	return Global_1109400->f_245;
}

bool func_742(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_743(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_744(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_746(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_746(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_745(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_746(iParam0, 65536) && !func_746(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_746(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_746(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_746(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_747()
{
	return Global_1905944->f_5694;
}

void func_748(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_749()
{
	return Global_1894899 & 2 != 0;
}

int func_750(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = "region_law_town_mob";
			break;
		case 2:
			iVar0 = "region_law_patrol_creator";
			break;
		case 3:
			iVar0 = "region_law_roadblock_creator";
			break;
		case 4:
			iVar0 = "region_law_w_eliz_pinks";
			break;
		case 6:
			iVar0 = "region_law_bloodhound";
			break;
		case 7:
			iVar0 = "region_law_VAL_belltower_sniper";
			break;
		case 8:
			iVar0 = "region_law_RHO_law_swarm";
			break;
		case 9:
			iVar0 = "region_law_guama_fussar";
			break;
	}
	return iVar0;
}

bool func_751(int iParam0)
{
	return func_553(iParam0) == -427144552;
}

bool func_752(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_555(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_759(iParam0, &uVar0, 1, 0, 0);
	}
	return func_582(iParam0, 1, 0);
}

void func_753(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_553(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_559(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_703(iVar0))
	{
		if (func_20() == -1)
		{
			func_560(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_538(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_613(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_754(int iParam0, int iParam1)
{
	if (func_554(iParam0, 58855631))
	{
		func_914(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_755(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_915(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_553(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_786(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_916(bParam1) };
			if (bParam2 && func_917(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_784(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_784(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_785(iParam0, &Var5, 1728382685))
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
			Var0 = { func_918(bParam1) };
			switch (func_557(iParam0))
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
			if (func_919(iParam0, -1823706425))
			{
				Var0 = { func_786(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_919(iParam0, -1483207246))
			{
				Var0 = { func_786(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_920(Var0, &Var27, bParam1, 0))
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

int func_756(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	if (!func_561(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_763(bParam3), iParam0);
}

int func_757(int iParam0, bool bParam1)
{
	if (func_565(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_763(bParam1), iParam0, 0);
}

bool func_758()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_468())
	{
		return false;
	}
	if (!func_393((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_393((*Global_1835011)[2]->f_1, 1) && func_393((*Global_1347702)[120]->f_15, 1)) && !func_393((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_393((*Global_1835011)[37]->f_1, 1) && !func_393((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_393((*Global_1835011)[57]->f_1, 1) && !func_393((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_393((*Global_1835011)[26]->f_1, 1) && !func_393((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_393((*Global_1835011)[62]->f_1, 1) && func_393((*Global_1835011)[63]->f_1, 1)) && !func_393((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_393((*Global_1835011)[75]->f_1, 1) && !func_393((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_393((*Global_1835011)[76]->f_1, 1) && !func_393((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_393((*Global_1835011)[40]->f_1, 1) && func_393((*Global_1835011)[41]->f_1, 1)) && !func_393((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_393((*Global_1835011)[62]->f_1, 1) && func_393((*Global_1835011)[63]->f_1, 1)) && !func_393((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_393((*Global_1835011)[65]->f_1, 1) && func_393((*Global_1835011)[66]->f_1, 1)) && !func_393((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_759(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_921(&iParam0);
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (!func_561(0))
	{
		bParam3 = true;
	}
	if (func_751(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_916(0) };
			Var4.f_9 = -1591664384;
			if (!func_784(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_785(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_917(iParam0, 1))
			{
				if (!func_784(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_785(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_922(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_756(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_923(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_763(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_760(int iParam0, int iParam1)
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

int func_761(int iParam0, int iParam1)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_553(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_554(iParam0, 1399091007))
	{
		func_830(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_762(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_924(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_925(&Var0, func_916(0));
	}
	if (!func_926(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_843(iVar14);
	return uVar15;
}

int func_763(bool bParam0)
{
	if (func_20() == -1)
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

int func_764()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_765(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_766(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_927(iParam0);
	fVar1 = func_928(iParam0);
	if ((Global_1347477->f_117 || !func_68(31)) || !func_929(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_930(iVar0) >= 7)
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
	func_931(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_864(_create_var_string(6, func_932(iParam0), fVar1), "itemtype_textures", func_933(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_767(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_934(&Global_0, 8);
	}
	if (!func_468() || func_20() != -1)
	{
		return;
	}
	func_934(&Global_0, 1);
}

int func_768(int iParam0)
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

int func_769(int iParam0, int iParam1)
{
	if (!func_935(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_770(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_549() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_936(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_937(), 12);
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
			else if (func_811() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_938(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_811(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_939(), 13);
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
			else if (func_812() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_940(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_812(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_769(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_771(int iParam0, int iParam1, int iParam2)
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

bool func_772(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_773(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_774(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_941(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_582(iVar2, 1, 0) || func_943(func_942(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_778(func_941(iVar0))), func_778(func_941(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_811() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_944(iVar0)), func_944(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_938() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_944(iVar0)), func_944(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_944(iVar0)), func_944(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_822(iParam3, func_945(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_818(iVar2) - iParam7) >= func_769(iParam3, func_946(iVar0));
				}
				else
				{
					bVar1 = func_818(iVar2) >= func_769(iParam3, func_946(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_818(iVar2) + iParam7) >= func_769(iParam3, func_946(iVar0));
			}
			else
			{
				bVar1 = func_818(iVar2) >= func_769(iParam3, func_946(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_947(iVar2)), func_947(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_948(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_949(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_949(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_812() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_950(iVar0)), func_950(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_940() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_950(iVar0)), func_950(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_950(iVar0)), func_950(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_822(iParam3, func_945(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_818(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_951(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_951(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_952(iVar2)), func_952(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_775(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_939() >= 13)
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

bool func_776(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_212(func_255(0)) && ((func_86(0) == 1 || func_86(0) == 8) || func_86(0) == 6))
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

var func_777(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_778(int iParam0)
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

var func_779(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_780(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_781(int iParam0)
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
			func_953(1);
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
			func_954(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_954(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_954(3);
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
			func_955(1);
			break;
		case 34:
			func_956(1);
			break;
		case 35:
			func_957(1);
			break;
		case 36:
			break;
		case 37:
			func_958(0);
			break;
		case 38:
			func_959(0);
			break;
		case 39:
			func_960(0);
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
			if ((!&Global_1879534 && func_468()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_779("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_306(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_468()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_779("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_306(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_468()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_779("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_306(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_468()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_779("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_306(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_856(99217379) || func_961(99217379) == 2110595215)
				{
					if (func_190())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_582(iVar0, 1, 0))
					{
						func_606(iVar0, 1, 752097756);
					}
					func_585(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_582(1013902307, 1, 0))
				{
					func_606(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_582(1013902307, 1, 0))
				{
					func_606(1013902307, 1, 752097756);
				}
				if (!func_582(142640135, 1, 0))
				{
					func_606(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_582(786809402, 1, 0))
				{
					func_606(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_582(786809402, 1, 0))
				{
					func_606(786809402, 1, 752097756);
				}
				if (!func_582(-518019409, 1, 0))
				{
					func_606(-518019409, 1, 752097756);
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
			func_962();
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

bool func_782(int iParam0)
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

int func_783(int iParam0, int iParam1)
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

bool func_784(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_923(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_785(int iParam0, var uParam1, int iParam2)
{
	if (func_963(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_786(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_534(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_763(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_787(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_964(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_920(*uParam1, &Var0, bParam6, 0))
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
	if (!func_561(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_763(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_788(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_965(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_789(int iParam0)
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
	iVar2 = func_191();
	func_207(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_790(int iParam0)
{
	if (func_966(iParam0))
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

int func_791(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_792(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_68(50))
			{
				if (!func_68(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_68(51))
			{
				if (!func_68(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_793()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_794(int iParam0, int iParam1, var uParam2)
{
	if (!func_534(iParam1, 0))
	{
		return false;
	}
	if (func_553(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_557(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_967(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_554(iParam1, 866047851))
	{
		iVar5 = func_832(iVar4, 1);
		if (func_968(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_557(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_554(iParam1, -1638171711))
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
			if (func_620(1868067663, &uVar0))
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
				iVar10 = func_969(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_969(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_557(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_554(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_970(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_795()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_796()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_797()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_582(func_971(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_798(int iParam0)
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

bool func_799(int iParam0, int iParam1)
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
	if (func_582(iVar0, 1, 0) && func_582(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_800(int iParam0)
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

bool func_801(int iParam0, int iParam1)
{
	iVar0 = func_972(iParam0);
	if (iVar0 != -15)
	{
		func_207(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_973(iVar0, 1);
	}
	return false;
}

int func_802(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_582(1811977508, 1, 0))
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
			if (func_534(iVar25, 0) && func_554(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_803(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_864(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_804(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_974())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_864(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_975(iVar0);
			func_976(iVar0, 0, 0);
		}
		func_864(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_370(func_860(1644987397), iVar1);
	}
}

void func_805(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_806(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_807(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_808(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_809(int iParam0)
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
	iVar1 = func_818(iVar9);
	iVar2 = func_818(iVar10);
	iVar3 = func_818(iVar11);
	iVar5 = func_819(iVar9);
	iVar6 = func_819(iVar10);
	iVar7 = func_819(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_818(iVar12);
		iVar8 = func_819(iVar12);
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

void func_810(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_811()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_977(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_812()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_813(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_951(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_951(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_951(iVar0))
		{
			*sParam2++;
		}
		if (func_951(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_951(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_951(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_951(iVar0))
		{
			*sParam2++;
		}
		if (func_951(iVar1))
		{
			*sParam2++;
		}
		if (func_951(iVar0) && func_951(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_951(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_951(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_951(iVar0))
		{
			*sParam2++;
		}
		if (func_951(iVar1))
		{
			*sParam2++;
		}
		if (func_951(iVar2))
		{
			*sParam2++;
		}
		if ((func_951(iVar0) && func_951(iVar1)) && func_951(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_951(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_951(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_951(iVar0))
		{
			*sParam2++;
		}
		if (func_951(iVar1))
		{
			*sParam2++;
		}
		if (func_951(iVar2))
		{
			*sParam2++;
		}
		if (func_951(iVar3))
		{
			*sParam2++;
		}
		if (((func_951(iVar0) && func_951(iVar1)) && func_951(iVar2)) && func_951(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_814(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_321(1497516462);
			func_706(2016141805);
			func_706(1010885152);
			func_706(-502324015);
			break;
		case 2016141805:
			func_706(1497516462);
			func_321(2016141805);
			func_706(1010885152);
			func_706(-502324015);
			break;
		case 1010885152:
			func_706(1497516462);
			func_706(2016141805);
			func_321(1010885152);
			func_706(-502324015);
			break;
		case -502324015:
			func_706(1497516462);
			func_706(2016141805);
			func_706(1010885152);
			func_321(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_706(-538889627);
			func_706(-538880323);
			func_706(-1056767524);
			func_321(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_978();
			func_321(iParam0);
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
			func_979();
			func_321(iParam0);
			break;
		case 2019386373:
			func_706(-664252410);
			func_706(2109952320);
			func_321(2019386373);
			break;
		case -664252410:
			func_706(2019386373);
			func_706(2109952320);
			func_321(-664252410);
			break;
		case 2109952320:
			func_706(2019386373);
			func_706(-664252410);
			func_321(2109952320);
			break;
		case -1674179981:
			func_706(-1835851517);
			func_706(-1838352012);
			func_321(-1674179981);
			break;
		case -1835851517:
			func_706(-1674179981);
			func_706(-1838352012);
			func_321(-1835851517);
			break;
		case -1838352012:
			func_706(-1674179981);
			func_706(-1835851517);
			func_321(-1838352012);
			break;
		case -1717960576:
			func_706(210001842);
			func_321(-1717960576);
			break;
		case 210001842:
			func_706(-1717960576);
			func_321(210001842);
			break;
		case -150493654:
			func_706(-1271608261);
			func_706(1846061697);
			func_706(-1145519186);
			func_321(-150493654);
			break;
		case -1271608261:
			func_706(-150493654);
			func_706(1846061697);
			func_706(-1145519186);
			func_321(-1271608261);
			break;
		case 1846061697:
			func_706(-150493654);
			func_706(-1271608261);
			func_706(-1145519186);
			func_321(1846061697);
			break;
		case -1145519186:
			func_706(-150493654);
			func_706(-1271608261);
			func_706(1846061697);
			func_321(-1145519186);
			break;
		case 1766284049:
			func_706(280705402);
			func_706(1926308480);
			func_321(1766284049);
			break;
		case 280705402:
			func_706(1766284049);
			func_706(1926308480);
			func_321(280705402);
			break;
		case 1926308480:
			func_706(1766284049);
			func_706(280705402);
			func_321(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_706(439465264);
				func_321(1609506757);
			}
			else
			{
				func_706(1609506757);
				func_706(439465264);
			}
			break;
		case 439465264:
			if (func_72(1609506757))
			{
				if (bParam1)
				{
					func_321(439465264);
				}
				else
				{
					func_706(439465264);
				}
			}
			break;
		case 1822001510:
			func_706(-1612662716);
			func_321(1822001510);
			break;
		case -1612662716:
			func_706(1822001510);
			func_321(-1612662716);
			break;
		case 1306158345:
			func_706(1952610440);
			func_706(-223469678);
			func_706(-404698347);
			func_706(1517904467);
			func_321(1306158345);
			break;
		case 1952610440:
			func_706(1306158345);
			func_706(-223469678);
			func_706(-404698347);
			func_706(1517904467);
			func_321(1952610440);
			break;
		case -223469678:
			func_706(1306158345);
			func_706(1952610440);
			func_706(-404698347);
			func_706(1517904467);
			func_321(-223469678);
			break;
		case -404698347:
			func_706(1306158345);
			func_706(1952610440);
			func_706(-223469678);
			func_706(1517904467);
			func_321(-404698347);
			break;
		case 1517904467:
			func_706(1306158345);
			func_706(1952610440);
			func_706(-223469678);
			func_706(-404698347);
			func_321(1517904467);
			break;
		case 1376646519:
			func_706(931649776);
			func_706(-434590080);
			func_706(1743048395);
			func_706(449774763);
			func_321(1376646519);
			break;
		case 931649776:
			func_706(1376646519);
			func_706(-434590080);
			func_706(1743048395);
			func_706(449774763);
			func_321(931649776);
			break;
		case -434590080:
			func_706(1376646519);
			func_706(931649776);
			func_706(1743048395);
			func_706(449774763);
			func_321(-434590080);
			break;
		case 1743048395:
			func_706(1376646519);
			func_706(931649776);
			func_706(-434590080);
			func_706(449774763);
			func_321(1743048395);
			break;
		case 449774763:
			func_706(1376646519);
			func_706(931649776);
			func_706(-434590080);
			func_706(1743048395);
			func_321(449774763);
			break;
		case -1414537028:
			func_706(38162571);
			func_706(1350391819);
			func_706(54073871);
			func_321(-1414537028);
			break;
		case 38162571:
			func_706(-1414537028);
			func_706(1350391819);
			func_706(54073871);
			func_321(38162571);
			break;
		case 1350391819:
			func_706(-1414537028);
			func_706(38162571);
			func_706(54073871);
			func_321(1350391819);
			break;
		case 54073871:
			func_706(-1414537028);
			func_706(38162571);
			func_706(1350391819);
			func_321(54073871);
			break;
		case 198200492:
			func_321(198200492);
			func_706(-1124061431);
			func_706(52706132);
			func_706(-259123672);
			break;
		case -1124061431:
			func_706(198200492);
			func_321(-1124061431);
			func_706(52706132);
			func_706(-259123672);
			break;
		case 52706132:
			func_706(198200492);
			func_706(-1124061431);
			func_321(52706132);
			func_706(-259123672);
			break;
		case -259123672:
			func_706(198200492);
			func_706(-1124061431);
			func_706(52706132);
			func_321(-259123672);
			break;
		case -919512195:
			func_321(-919512195);
			func_706(-1925798111);
			func_706(420709909);
			func_706(1703426636);
			break;
		case -1925798111:
			func_321(-1925798111);
			func_706(-919512195);
			func_706(420709909);
			func_706(1703426636);
			break;
		case 420709909:
			func_321(420709909);
			func_706(-919512195);
			func_706(-1925798111);
			func_706(1703426636);
			break;
		case 1703426636:
			func_321(1703426636);
			func_706(-919512195);
			func_706(-1925798111);
			func_706(420709909);
			break;
		case -1223121209:
			func_321(-1223121209);
			func_706(630808005);
			break;
		case 630808005:
			func_321(630808005);
			func_706(-1223121209);
			break;
		case 1453909576:
			func_321(1453909576);
			func_706(1643531967);
			break;
		case 1643531967:
			func_321(1643531967);
			func_706(1453909576);
			break;
		case 0:
			func_321(0);
			func_706(473295046);
			func_706(-1738165526);
			break;
		case 473295046:
			func_321(473295046);
			func_706(0);
			func_706(-1738165526);
			break;
		case -1738165526:
			func_321(-1738165526);
			func_706(0);
			func_706(473295046);
			break;
		case 932909855:
			func_321(932909855);
			func_706(2051822093);
			break;
		case 2051822093:
			func_321(2051822093);
			func_706(932909855);
			break;
		case 405586984:
			func_321(405586984);
			func_706(1509509592);
			func_706(-959357075);
			func_706(-1311865656);
			break;
		case 1509509592:
			func_321(1509509592);
			func_706(405586984);
			func_706(-959357075);
			func_706(-1311865656);
			break;
		case -959357075:
			func_321(-959357075);
			func_706(1509509592);
			func_706(405586984);
			func_706(-1311865656);
			break;
		case -1311865656:
			func_321(-1311865656);
			func_706(1509509592);
			func_706(-959357075);
			func_706(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_321(-524145696);
			}
			else
			{
				func_706(-524145696);
			}
			func_706(1626481264);
			func_706(282809459);
			break;
		case 282809459:
			func_321(282809459);
			func_706(1626481264);
			func_706(-524145696);
			break;
		case 1626481264:
			func_321(1626481264);
			func_706(-524145696);
			func_706(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_321(885203519);
			}
			else
			{
				func_706(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_321(-1080627546);
			}
			else
			{
				func_706(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_72(iParam0))
				{
					func_321(iParam0);
				}
			}
			else if (func_72(iParam0))
			{
				func_706(iParam0);
			}
			break;
	}
}

void func_815(int iParam0)
{
	if (!func_980(iParam0))
	{
		func_982(func_981(iParam0));
	}
}

int func_816()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_980(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_817(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_818(iVar9);
	iVar2 = func_818(iVar10);
	iVar3 = func_818(iVar11);
	iVar5 = func_819(iVar9);
	iVar6 = func_819(iVar10);
	iVar7 = func_819(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_818(iVar12);
		iVar8 = func_819(iVar12);
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

int func_818(int iParam0)
{
	if (func_582(iParam0, 1, 0))
	{
		iVar0 = func_538(iParam0, 0, 0);
	}
	return iVar0;
}

int func_819(int iParam0)
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

int func_820(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_821(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_822(int iParam0, int iParam1)
{
	if (!func_935(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_823(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_822(iParam1, 5) || iParam0 == func_822(iParam1, 6)) || iParam0 == func_822(iParam1, 7)) || iParam0 == func_822(iParam1, 8)) || iParam0 == func_822(iParam1, 9))
	{
		func_813(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_550(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_552(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_824(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_822(iParam1, 5) || iParam0 == func_822(iParam1, 6)) || iParam0 == func_822(iParam1, 7)) || iParam0 == func_822(iParam1, 8)) || iParam0 == func_822(iParam1, 9))
	{
		if (func_813(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_550(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_552(51, 0, 0, iVar0, func_769(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_550(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_552(51, 0, 0, iVar0, func_769(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_825()
{
	if (func_214((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_826(int iParam0, int iParam1)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_761(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_841("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_842(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_702(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_843(iVar1);
				return true;
			}
			iVar3++;
		}
		func_843(iVar1);
	}
	return false;
}

void func_827(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_828(int iParam0)
{
	if (!func_983(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_829(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_830(int iParam0, int iParam1, var uParam2)
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

int func_831(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_984(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_832(int iParam0, int iParam1)
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

bool func_833(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_985();
	if (iParam2 == 39)
	{
		Var0 = { func_755(iParam0, 1, 0) };
		iParam2 = func_832(func_831(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_554(iParam0, 866047851) && func_968(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_836(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_986(func_984(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_987(iParam2);
	func_988(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_989(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_989(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_990(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_991(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_992(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_992(&(Global_1946804->f_1378), 1, 0);
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
				func_993(func_984(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_834(bool bParam0, bool bParam1, bool bParam2)
{
	func_994(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_835(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_995(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_996(Var0);
}

bool func_836(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_837()
{
	func_997(&(Global_1946804->f_2776));
	func_998(32768);
	func_993(1108822547, 8, 6);
}

int func_838(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_832(iParam0, 1);
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

void func_839(int iParam0)
{
	if (func_999(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1000(Var0);
}

void func_840(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1000(Var0);
}

bool func_841(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_763(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_842(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_843(int iParam0)
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

float func_844()
{
	if (func_1001())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1002(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1002(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1003();
	fVar2 = func_1004();
	fVar3 = func_1005();
	fVar4 = func_1006();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1007()));
	fVar7 = (func_1002(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1008(3, round((to_float(iVar8) * fVar10)), 0);
	func_1009(3, fVar9, fVar9 > 100f);
	return func_1010(fVar7, -100f, 100f);
}

float func_845()
{
	if (func_1001())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1002(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1002(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1003();
	fVar2 = func_1004();
	fVar3 = func_1005();
	fVar4 = func_1006();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1007()));
	fVar7 = (func_1002(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1008(2, round((to_float(iVar8) * fVar10)), 0);
	func_1009(2, fVar9, fVar9 > 100f);
	return func_1010(fVar7, -100f, 100f);
}

float func_846()
{
	if (func_1001())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1002(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1011())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1012())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1002(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1003();
	fVar2 = func_1004();
	fVar3 = func_1005();
	fVar4 = func_1006();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1007()));
	fVar7 = (func_1002(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1008(1, round((to_float(iVar8) * fVar10)), 0);
	func_1009(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1002(0);
	}
	return func_1010(fVar7, -100f, 100f);
}

bool func_847(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_848(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_534(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_759(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_561(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_763(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_849(int iParam0, bool bParam1)
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
				return func_1013();
			}
			break;
	}
	return 0;
}

int func_850(int iParam0)
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

bool func_851(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_852(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_851(iParam0))
	{
		return;
	}
	if (func_1014(iParam0))
	{
		return;
	}
	if (!func_1015(iParam0))
	{
		func_1016(iParam0, 1, 0);
	}
	iVar0 = func_1017(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1018(iParam0, 512))
		{
			func_835(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1019() && !bParam1) && !func_75(0, 0, 1))
	{
		func_1020(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1021(iParam0, 6);
	if (bParam2)
	{
		if (!func_75(0, 0, 1))
		{
			func_767(1, 4);
		}
	}
}

int func_853()
{
	return Global_1946804->f_1;
}

bool func_854(int iParam0, bool bParam1)
{
	return func_849(iParam0, 0) < func_1022(iParam0, bParam1);
}

bool func_855(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_557(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_856(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_832(iParam0, 1)] != &Global_1946804->f_57[func_832(iParam0, 1)];
}

void func_857(int iParam0, int iParam1)
{
	if (func_554(iParam1, 130796156))
	{
		func_1023(iParam1, 0);
	}
	else if (func_554(iParam1, 930141731))
	{
		func_1023(iParam1, 1);
		func_1024(iParam0);
	}
}

void func_858(var uParam0, int iParam1)
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

int func_859(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1025(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1026(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_860(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_861(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_862(int iParam0)
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

int func_863(int iParam0)
{
	if (!func_1027(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_864(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1028(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_865()
{
	return !&Global_1911774;
}

void func_866(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_867(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_868(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_869(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_870(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1029(iParam0, &Var0);
}

int func_871(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_831(iVar0);
}

bool func_872(vector3 vParam0, int iParam3)
{
	func_1030(iParam3, &vVar0, &Var3, &uVar6);
	if (func_1031(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_873(int iParam0, bool bParam1, int iParam2)
{
	if (!func_212(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_214(iParam0) && !func_213(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_707(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_214(iParam0))
	{
		iParam2 = -1;
	}
	if (func_426(iParam0) == 3 || (func_426(iParam0) == 1 && _0x01f4d242765c6b24(func_707(iParam0))))
	{
		func_1032(func_708(iParam0), func_707(iParam0), iParam2);
		if ((!func_212(Global_1572864->f_8) && !func_75(0, 1, 0)) && !func_134(&Global_1935630, 32768))
		{
			iVar0 = func_1033(iParam0);
			if (iVar0 != -1)
			{
				func_1034(0);
			}
			else if (func_708(iParam0) == 8)
			{
				iVar0 = func_482();
				if (iVar0 != -1)
				{
					func_1034(0);
				}
			}
		}
	}
	func_710(iParam0, 0);
	if (func_255(0) == iParam0)
	{
		func_1035(1);
		func_1036(0);
		func_1037(1);
	}
	func_1038(iParam0, 1);
	func_1039(iParam0);
}

void func_874(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_875(var uParam0)
{
	if (_does_volume_exist(*uParam0))
	{
		_delete_volume(*uParam0);
	}
}

void func_876(var uParam0)
{
	if (func_1040(*uParam0))
	{
		func_1041(uParam0, 1, 1);
	}
}

void func_877(int iParam0, int iParam1)
{
	func_55(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_878(int iParam0)
{
	iVar0 = func_677(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1042(iVar0);
}

int func_879(int iParam0, int iParam1)
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
			func_1043(iVar2);
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

void func_880()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

bool func_882(int iParam0)
{
	iVar0 = func_483(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_77(iParam0) && func_160(iParam0))
	{
		if (func_482() <= iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_883(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_884(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

bool func_885(int iParam0, int iParam1)
{
	if (_does_volume_exist(iParam1->f_38))
	{
		if (func_485(iParam0, iParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (_does_volume_exist(iParam1->f_39))
	{
		if (func_485(iParam0, iParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_886(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_723() - fParam1);
	func_1044(uParam0, 1);
	func_1045(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_887(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_1046(iParam1);
	}
}

int func_888(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_1047(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_889(int iParam0)
{
	iVar0 = func_437(iParam0);
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

int func_890(int iParam0, bool bParam1)
{
	if (!func_203(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_1048(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_891(int iParam0)
{
	if (!func_203(iParam0))
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

void func_892(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_893(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

int func_894(int iParam0)
{
	return iParam0 & 31;
}

int func_895(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_896(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_897(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_900(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_901(int iParam0)
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

void func_902(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_453(iParam0, iParam1))
		{
			if (func_454(iParam0, iParam1))
			{
				if (func_455(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_456(iParam0);
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

void func_903(int iParam0, int iParam1, bool bParam2)
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

void func_904(int iParam0, bool bParam1)
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

void func_905(int iParam0, int iParam1)
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

float func_906(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_907(int iParam0)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return func_323(&(Global_1914319->f_18594[iParam0]), 2);
}

void func_908(int iParam0)
{
	iVar0 = func_727();
	if (!func_277(iVar0))
	{
		return;
	}
	if (func_728(iVar0) && func_497(1))
	{
		func_498(1, 0, 1);
	}
	func_200(iParam0, 64);
}

int func_909(int iParam0)
{
	if (!func_126(iParam0, &iVar0))
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

bool func_910(int iParam0)
{
	if (!func_292(iParam0))
	{
		return false;
	}
	return func_329(iParam0, 8388608);
}

bool func_911()
{
	if (_is_ped_carrying(Global_35) || func_1049(Global_35))
	{
		return true;
	}
	return false;
}

void func_912(int iParam0)
{
	func_296(&iLocal_215, iParam0);
}

void func_913(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_914(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_534(iParam0, 0))
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

struct<4> func_915(bool bParam0)
{
	return func_786(1328661203, func_1050(), -1591664384, bParam0);
}

struct<4> func_916(bool bParam0)
{
	iVar0 = func_763(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_786(923904168, func_915(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_786(923904168, func_915(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_786(923904168, func_915(bParam0), -740156546, 0);
}

bool func_917(int iParam0, bool bParam1)
{
	if (func_557(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_68(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_918(bool bParam0)
{
	iVar0 = func_763(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_786(271701509, func_915(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_786(271701509, func_915(bParam0), 12999093, 0);
}

bool func_919(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_557(iParam0);
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

bool func_920(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_763(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_921(int iParam0)
{
	if (!func_534(*iParam0, 0))
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

bool func_922(int iParam0, var uParam1, bool bParam2)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_755(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_783((386 + iVar29), 1);
		if (func_784(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_785(iParam0, &Var6, iVar5);
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

int func_923(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_534(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_786(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_763(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_924(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_925(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_926(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_763(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_927(int iParam0)
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

float func_928(int iParam0)
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
			return func_1051(iParam0);
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
			return func_1051(iParam0);
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
			return func_1051(iParam0);
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

bool func_929(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_68(18);
		case 2:
			return func_68(20);
		case 1:
			return func_68(19);
		default:
			break;
	}
	return true;
}

int func_930(int iParam0)
{
	return func_1052(&(Global_40.f_11095.f_11[iParam0]));
}

void func_931(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_68(31))
	{
		return;
	}
	iVar0 = func_930(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_930(iParam0);
	if (func_1053(iParam0) && func_1054(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1055(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1056(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_306(func_1057(iParam0), 0);
					}
					func_1058(iParam0, iVar2, iVar3);
					func_1059(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_932(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_933(int iParam0)
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

void func_934(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_935(int iParam0, var uParam1)
{
	if (!func_1060(iParam0))
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

int func_936()
{
	return func_1061(Global_40.f_12019);
}

int func_937()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_768(iVar1);
		if (func_582(iVar2, 1, 0) || func_943(func_942(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_938()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1062(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_939()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_948(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_940()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_941(int iParam0)
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

int func_942(int iParam0)
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

bool func_943(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_944(int iParam0)
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

int func_945(int iParam0)
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

int func_946(int iParam0)
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

char* func_947(int iParam0)
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

bool func_948(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_949(int iParam0)
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

char* func_950(int iParam0)
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

bool func_951(int iParam0)
{
	if (func_1063(iParam0) && func_582(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1064(iParam0) && func_1065(iParam0))
	{
		return true;
	}
	return false;
}

char* func_952(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_600(iParam0));
}

void func_953(bool bParam0)
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

void func_954(int iParam0)
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

void func_955(bool bParam0)
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

void func_956(bool bParam0)
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

void func_957(bool bParam0)
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

void func_958(bool bParam0)
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

void func_959(bool bParam0)
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

void func_960(bool bParam0)
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

int func_961(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_832(iParam0, 1)]);
}

void func_962()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1066();
		_unlock_set_unlocked(-1526891582, true);
		func_560(-916314281);
		func_606(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_560(494733111);
		func_606(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_963(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_763(0);
	*uParam1 = { func_786(iParam0, func_916(0), iParam3, 0) };
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

bool func_964(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_965(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_966(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_967(int iParam0)
{
	Var0 = { func_755(iParam0, 1, 0) };
	return func_831(Var0.f_4);
}

int func_968(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_554(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_969(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_832(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_836(524288))
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

bool func_970(int iParam0)
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

int func_971(int iParam0)
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

int func_972(int iParam0)
{
	return func_1067(iParam0, -1);
}

bool func_973(int iParam0, bool bParam1)
{
	return func_406(func_191(), iParam0, bParam1);
}

bool func_974()
{
	if (func_793())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_975(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1068((Global_40.f_4283.f_325 + iParam0));
}

void func_976(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_974())
	{
		func_864(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_864(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_977(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_978()
{
	func_706(-939420910);
	func_706(-1187950766);
	func_706(356365161);
	func_706(753127042);
	func_706(-2038424081);
	func_706(1884271742);
	func_706(459290420);
}

void func_979()
{
	func_706(704802028);
	func_706(588987611);
	func_706(2008888900);
	func_706(1649996811);
	func_706(227918160);
	func_706(168171957);
	func_706(1193080109);
	func_706(-491981251);
	func_706(-639037538);
	func_706(-618620429);
}

bool func_980(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_981(int iParam0)
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

void func_982(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_983(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_984(int iParam0, int iParam1)
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

void func_985()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_986(int iParam0)
{
	func_993(iParam0, 8, 6);
}

void func_987(int iParam0)
{
	func_1069(&(Global_1946804->f_2589), iParam0);
}

void func_988(int iParam0, int iParam1)
{
	func_1070(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_989(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_990(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_557(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1071(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_988(iVar1, iVar3);
		}
	}
	if (func_856(-1586649372) && func_1071(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_988(iVar1, iVar3);
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
						func_988(iVar1, iVar3);
					}
				}
			}
			func_1072(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1072(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_988(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1072(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_988(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_988(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1072(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1072(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_988(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1072(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_988(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_988(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_557(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_988(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_970(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_557(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_988(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_554(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_988(iVar1, iVar3);
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
						func_988(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_970(&(Global_1946804->f_1497.f_1[iVar1])) || func_554(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_988(iVar1, iVar3);
					}
				}
			}
			switch (func_557(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_557(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_988(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_557(&(uParam0->f_1[iVar1])) || func_554(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_988(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_991(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1073(0);
	if (iParam2 != 0 && func_1074(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1075(iParam0, func_984(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_992(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_1073(0);
	if (func_836(32768))
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
			iVar5 = func_984(iVar0, 1);
			if (func_1076(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1076(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_969(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1077(uParam0);
				if (iVar3 > 0)
				{
					if (!func_836(524288))
					{
						func_995(524288);
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
							iVar5 = func_984(iVar0, 1);
							if (func_1076(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1076(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_969(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_988(iVar0, iParam2);
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
					func_998(524288);
				}
			}
		}
	}
}

void func_993(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_832(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_832(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_832(iParam0, 1)])->f_10 && iParam1));
}

void func_994(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1078(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1079(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1017(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1017(Global_40.f_7729);
				Global_1946804->f_1378 = func_1017(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1080(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1081(0, 1);
	}
}

void func_995(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_996(struct<4> Param0)
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
			if (func_1082(Param0))
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
			func_1083(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_995(8);
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
			if (func_1082(Param0))
			{
				return;
			}
			func_1083(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_995(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_840(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_997(var uParam0)
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

void func_998(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_999(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1000(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1082(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1082(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1083(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_995(8);
}

bool func_1001()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1002(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1003()
{
	fVar0 = func_1084(13);
	iVar1 = func_1085(fVar0);
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

float func_1004()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1005()
{
	if (func_793())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1006()
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

float func_1007()
{
	return Global_1955565->f_3;
}

void func_1008(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1086(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1009(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1086(iParam0, 2, 0, 0);
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

float func_1010(float fParam0, float fParam1, float fParam2)
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

bool func_1011()
{
	return func_1084(12) <= -99f;
}

bool func_1012()
{
	return func_1084(12) >= 99f;
}

int func_1013()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_557(iVar1) == -999503751)
		{
			if (func_1087() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1014(int iParam0)
{
	if (!func_851(iParam0))
	{
		return false;
	}
	if (func_1018(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1015(int iParam0)
{
	if (!func_851(iParam0))
	{
		return false;
	}
	if (func_1018(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1016(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_851(iParam0))
	{
		return;
	}
	if (!func_1015(iParam0))
	{
		func_1021(iParam0, 2);
		if (bParam2)
		{
			if (!func_75(0, 0, 1))
			{
				func_767(1, 4);
			}
		}
		if ((!func_1019() && !bParam1) && !func_75(0, 0, 1))
		{
			func_1020(_create_var_string(10, "OUT_JOURN_ADD", func_1088(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1017(int iParam0)
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

bool func_1018(int iParam0, int iParam1)
{
	if (!func_851(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1019()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

var func_1020(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1021(int iParam0, int iParam1)
{
	if (!func_851(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1022(int iParam0, bool bParam1)
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

void func_1023(int iParam0, bool bParam1)
{
	iVar0 = func_1089(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_556(50);
			}
			else
			{
				func_556(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_556(51);
			}
			else
			{
				func_556(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1090(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_587();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_587();
			}
			break;
		case 3:
			func_556(24);
			if (bParam1)
			{
				if (!func_1090(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_587();
				}
			}
			break;
	}
}

void func_1024(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1091(0))
			{
				iVar0++;
			}
			if (func_1091(2))
			{
				iVar0++;
			}
			if (func_1091(4))
			{
				iVar0++;
			}
			if (!func_1092(16))
			{
				if (iVar0 == 1)
				{
					func_1093();
					func_306(456, 1);
					func_1094(16);
				}
			}
			if (!func_1092(32))
			{
				if (iVar0 >= 3)
				{
					func_1093();
					func_306(456, 1);
					func_1094(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1091(1))
			{
				iVar0++;
			}
			if (func_1091(3))
			{
				iVar0++;
			}
			if (func_1091(7))
			{
				iVar0++;
			}
			if (!func_1092(1))
			{
				if (iVar0 == 1)
				{
					func_1095();
					func_306(457, 1);
					func_1094(1);
				}
			}
			if (!func_1092(2))
			{
				if (iVar0 >= 3)
				{
					func_1095();
					func_306(457, 1);
					func_1094(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1091(5))
			{
				iVar0++;
			}
			if (func_1091(6))
			{
				iVar0++;
			}
			if (func_1091(8))
			{
				iVar0++;
			}
			if (!func_1092(4))
			{
				if (iVar0 == 1)
				{
					func_1096();
					func_306(455, 1);
					func_1094(4);
				}
			}
			if (!func_1092(8))
			{
				if (iVar0 >= 3)
				{
					func_1096();
					func_306(455, 1);
					func_1094(8);
				}
			}
			break;
	}
}

void func_1025(var uParam0)
{
	func_858(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_858(uParam0, 617531372);
	}
	else
	{
		func_858(uParam0, 291123060);
	}
}

void func_1026(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1097(uParam0))
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

bool func_1027(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1028(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1029(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_1030(int iParam0, var uParam1, var uParam2, var uParam3)
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
			Jump @2718; //curOff = 2531
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2718; //curOff = 2580
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2625
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2670
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}

bool func_1031(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

void func_1032(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_1033(int iParam0)
{
	switch (func_708(iParam0))
	{
		case 1:
			iVar0 = func_209(iParam0);
			return func_483(iVar0);
		case 8:
			iVar1 = func_209(iParam0);
			if (func_211((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_881(iVar1);
			}
			break;
	}
	return -1;
}

void func_1034(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1098(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1099();
		Global_1898077->f_9 = func_1100(Global_1894899->f_2);
		func_1101(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_1035(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_874(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_368(Global_1935630, 4194304);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

int func_1036(bool bParam0)
{
	if (!bParam0 && func_72(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1037(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_1038(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_255(0) != iParam0)
	{
		return;
	}
	if (func_1102(iParam0))
	{
		if (bParam1)
		{
			func_1103(-525676072);
		}
		else
		{
			func_1104(-525676072);
		}
	}
}

int func_1039(int iParam0)
{
	return func_1106(func_1105(iParam0));
}

bool func_1040(int iParam0)
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

void func_1041(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1040(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1107(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1108(iVar0);
	*uParam0 = 0;
}

int func_1042(int iParam0)
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

int func_1043(int iParam0)
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

void func_1044(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1045(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1046(int iParam0)
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

int func_1047(int iParam0)
{
	iVar0 = 0;
	if (!func_203(iParam0))
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
	if (!func_203(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_1048(int iParam0)
{
	if (!func_203(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_888(iParam0, 1);
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

bool func_1049(int iParam0)
{
	return (func_1109(iParam0, 4) || func_1109(iParam0, 5));
}

struct<4> func_1050()
{
	return Var0;
}

float func_1051(int iParam0)
{
	iVar4 = func_927(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1052(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1110(iVar6) - func_1110(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1052(float fParam0)
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

int func_1053(int iParam0)
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

int func_1054(int iParam0)
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

int func_1055(float fParam0, float fParam1)
{
	iVar0 = func_1052(fParam0);
	fVar1 = to_float(func_1110(iVar0));
	fVar2 = to_float(func_1110(iVar0 + 1));
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

int func_1056(int iParam0)
{
	if (func_1111(iParam0, &iVar0))
	{
		return func_1110(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1112())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1112())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1112())
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

int func_1057(int iParam0)
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

void func_1058(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1113(iParam0));
	sVar4 = func_1115(func_1114(iVar3, iParam2));
	sVar6 = func_1116(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1117(iParam0));
	iVar8 = func_1118(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1119(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_777(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1120(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1059(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_1060(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1061(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1062(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1063(int iParam0)
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

int func_1064(int iParam0)
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

int func_1065(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1121(&iVar0, 0, iVar95, &Var1) && !func_1121(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1122(iVar0, &Var1);
			if (func_534(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1066()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1123(Global_35, &uVar0);
	Var30 = { func_915(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1124(0);
	func_1125(7);
	func_1126(-1623728698, 1, 1, 0);
	if (func_853() == 1160113249)
	{
		func_1126(-763730846, 1, 1, 1);
		func_1126(-361635024, 1, 1, 1);
	}
	func_1127(Global_35, &uVar0);
}

int func_1067(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_763(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_671(&uVar6, iVar0);
	func_672(&uVar6, iVar1);
	func_673(&uVar6, iVar2);
	func_674(&uVar6, iVar3);
	func_675(&uVar6, iVar4);
	func_676(&uVar6, iVar5);
	return uVar6;
}

void func_1068(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_860(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1069(var uParam0, int iParam1)
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
			if ((func_1128(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1128(uParam0->f_2[iVar0], 1))
				{
					func_1129(uParam0->f_2[iVar0], 2, 6);
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

void func_1070(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1130(uParam0, 1))
	{
		func_1131(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1071(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1072(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_988(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_988(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_988(iVar2, iVar0);
		}
	}
}

int func_1073(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_853();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1074(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1075(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1076(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_832(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1077(var uParam0)
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

void func_1078(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_20() == -1)
	{
		func_1132(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1133(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1079(int iParam0, int iParam1)
{
	if (func_20() == -1)
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

void func_1080(int iParam0, bool bParam1, int iParam2)
{
	func_1134(&(Global_1946804->f_1378), iParam0);
	func_1135(2, iParam0, 6);
	if (bParam1)
	{
		func_1081(0, 1);
	}
}

void func_1081(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1136(0);
	}
	if (bParam0)
	{
		func_995(8);
		func_995(512);
	}
	else
	{
		func_995(8);
		func_995(16);
	}
}

bool func_1082(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1083(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1084(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1085(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1086(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_867(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_867(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1087()
{
	return Global_1946804->f_1497;
}

char* func_1088(int iParam0)
{
	iVar0 = func_1017(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_952(iVar0);
}

int func_1089(int iParam0)
{
	if (func_1137(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1138(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1139(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1140(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1090(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_582(func_1141(iVar0, iParam0), 1, 0))
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

bool func_1091(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_582(func_1142(iVar0, iParam0), 1, 0))
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

bool func_1092(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1093()
{
	if (func_20() != -1)
	{
		return;
	}
	func_606(1654063339, 1, 752097756);
	iVar0 = func_930(1);
	func_1058(1, iVar0, 0);
}

void func_1094(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1095()
{
	if (func_20() != -1)
	{
		return;
	}
	func_606(1623931083, 1, 752097756);
	iVar0 = func_930(2);
	func_1058(2, iVar0, 0);
}

void func_1096()
{
	if (func_20() != -1)
	{
		return;
	}
	func_606(-1845241476, 1, 752097756);
	iVar0 = func_930(0);
	func_1058(0, iVar0, 0);
}

bool func_1097(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1098(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_1099()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_1100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_1101(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_1102(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	switch (func_708(iParam0))
	{
		case 1:
			switch (func_209(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_209(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_1103(int iParam0)
{
	iVar2 = func_763(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_557(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1144(func_1143(iParam0), 6);
}

void func_1104(int iParam0)
{
	iVar2 = func_763(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_557(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1145(func_1143(iParam0), 6);
}

int func_1105(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1106(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1146(iParam0, Global_1898164->f_162);
	return 1;
}

int func_1107(var uParam0)
{
	return uParam0;
}

void func_1108(int iParam0)
{
	if (!func_1147(iParam0))
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

int func_1109(int iParam0, int iParam1)
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

int func_1110(int iParam0)
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

bool func_1111(int iParam0, int iParam1)
{
	return false;
}

bool func_1112()
{
	return false;
}

int func_1113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_763(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_763(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_763(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1114(int iParam0, int iParam1)
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

char* func_1115(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1116(int iParam0)
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

char* func_1117(int iParam0)
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

int func_1118(int iParam0)
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

int func_1119(int iParam0)
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

int func_1120(int iParam0)
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

bool func_1121(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1148(iParam1) && !func_1149(iParam1))
	{
		iVar0 = func_1150(iParam1);
	}
	else
	{
		return false;
	}
	func_1151(uParam3);
	iVar5 = func_1152(iParam2);
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

void func_1122(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1153(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1154(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1123(int iParam0, var uParam1)
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
		if (func_702(iVar31))
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

void func_1124(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_534(iVar1, 0))
		{
			func_1155(iVar1, 0, bParam0);
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

void func_1125(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_20() == -1)
	{
		func_1156(352481484);
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
		if (func_557(iVar2) != -999503751)
		{
			func_1157(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1158(iVar2, 0))
		{
			func_1159(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1126(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1160(iParam0))
	{
		return;
	}
	iVar0 = func_557(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1161(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1162(0))
	{
		func_1163(iParam0, 1);
		if (func_853() == 1160113249)
		{
			func_1163(func_1162(-2125499975), 0);
		}
		else
		{
			func_1163(func_1162(1160113249), 0);
		}
	}
	func_1164();
	if (func_1165(iVar0))
	{
		_0x766315a564594401(func_763(0), iParam0, 0);
	}
	func_1159(iParam0, bParam3);
	if (bParam2)
	{
		func_1081(0, 0);
	}
}

void func_1127(int iParam0, var uParam1)
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
				if (func_703(uParam1[iVar0]))
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

bool func_1128(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1129(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1130(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1131(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1132(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1133(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1134(var uParam0, int iParam1)
{
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1132(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1133(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1135(int iParam0, int iParam1, int iParam2)
{
	if (func_20() == -1)
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

void func_1136(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1137(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (func_554(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1138(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (func_554(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1139(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (func_554(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1140(int iParam0)
{
	if (!func_534(iParam0, 0))
	{
		return false;
	}
	if (func_554(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1141(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1166(iParam0);
		case 1:
			return func_1167(iParam0);
		case 2:
			return func_1168(iParam0);
		case 3:
			return func_1169(iParam0);
	}
	return 0;
}

int func_1142(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1170(iParam0);
		case 1:
			return func_1171(iParam0);
		case 2:
			return func_1172(iParam0);
		case 3:
			return func_1173(iParam0);
		case 4:
			return func_1174(iParam0);
		case 5:
			return func_1175(iParam0);
		case 6:
			return func_1176(iParam0);
		case 7:
			return func_1177(iParam0);
		case 8:
			return func_1178(iParam0);
	}
	return 0;
}

int func_1143(int iParam0)
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

void func_1144(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1145(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1146(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1179((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1179(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_212(&(Global_1898164->f_1[0])))
	{
		func_710(&(Global_1898164->f_1[0]), 3);
	}
}

bool func_1147(int iParam0)
{
	return func_1180(iParam0, 2);
}

bool func_1148(int iParam0)
{
	iParam0 = func_1181(iParam0);
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

bool func_1149(int iParam0)
{
	iParam0 = func_1181(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1148(iParam0))
	{
		return false;
	}
	iVar0 = func_1150(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_1150(int iParam0)
{
	iParam0 = func_1181(iParam0);
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

void func_1151(var uParam0)
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

int func_1152(int iParam0)
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

void func_1153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1154(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1155(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_557(iParam0))
	{
		case -2061583405:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1182(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1164();
	}
	if (bParam1)
	{
		func_1081(0, 0);
	}
}

void func_1156(int iParam0)
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
	Var2 = { func_924(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_926(&Var2, &iVar0, &iVar1, 0))
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
		func_843(iVar0);
	}
}

void func_1157(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1183(iParam2, *uParam0);
	func_1184(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1158(int iParam0, int iParam1)
{
	Var0 = { func_755(iParam0, 0, 0) };
	Var5 = { func_786(iParam0, Var0, Var0.f_4, 0) };
	if (func_923(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_763(0), &Var5, iParam1);
	return true;
}

void func_1159(int iParam0, bool bParam1)
{
	Var0 = { func_755(iParam0, 0, 0) };
	Var5 = { func_786(iParam0, Var0, Var0.f_4, 0) };
	if (func_923(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_763(0), &Var5, bParam1);
}

bool func_1160(int iParam0)
{
	if (func_20() == -1)
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

int func_1161(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1185(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1158(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_557(iParam0) != -999503751)
	{
		func_1157(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1162(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_853();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1163(int iParam0, int iParam1)
{
	Var0 = { func_755(iParam0, 0, 0) };
	Var5 = { func_786(iParam0, Var0, Var0.f_4, 0) };
	if (func_923(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_763(0), &Var5);
	return 1;
}

void func_1164()
{
	if (func_20() == -1)
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

bool func_1165(int iParam0)
{
	return func_1186(func_1143(iParam0));
}

int func_1166(int iParam0)
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

int func_1167(int iParam0)
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

int func_1168(int iParam0)
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

int func_1169(int iParam0)
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

int func_1170(int iParam0)
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

int func_1171(int iParam0)
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

int func_1172(int iParam0)
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

int func_1173(int iParam0)
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

int func_1174(int iParam0)
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

int func_1175(int iParam0)
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

int func_1176(int iParam0)
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

int func_1177(int iParam0)
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

int func_1178(int iParam0)
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

void func_1179(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_1180(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1181(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1182(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1185(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_557(iParam0) != -999503751)
		{
			func_1187(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_557(iParam0) != -999503751)
	{
		func_1187(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1158(iParam0, 1);
	return 1;
}

void func_1183(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1184(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1188(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_832(func_967(iParam1), 1);
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
		func_1189(uParam0);
	}
}

bool func_1185(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_1186(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1187(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1190(iParam1);
	func_1191(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1192(&(uParam0->f_26), iVar1);
		if (func_1193(uParam0->f_26, &iVar0))
		{
			func_1194(iVar0, iVar1);
		}
	}
}

void func_1188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1195(&(uParam0->f_3));
}

void func_1189(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1196(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1190(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1191(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1192(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1188(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1193(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1194(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1195(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1196(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1197(func_853());
	if (*uParam0)
	{
		func_1195(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_20() != -1, uParam2);
	*uParam0 = 1;
}

int func_1197(int iParam0)
{
	if (func_20() == -1)
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

