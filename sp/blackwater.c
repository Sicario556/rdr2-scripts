void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_573 = 20000;
	uLocal_576 = uVar576;
	iLocal_574 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_575 = get_game_timer();
	iVar0 = 0;
	while (func_3())
	{
		if (get_game_timer() > iVar573)
		{
			iLocal_575 = 0;
			func_4(iVar574, &iLocal_574);
			switch (iVar572)
			{
				case 0:
					iLocal_574 = 1;
					break;
				case 1:
					func_5(iVar574);
					if (func_7(func_6(iVar574)))
					{
						func_8(func_6(iVar574), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_9(iVar574));
					iVar1 = func_10(iVar574);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_577 = (get_game_timer() + iVar571);
					iLocal_574 = 2;
					break;
				case 2:
					if (func_11() || iVar575 < get_game_timer())
					{
						func_12(iVar574);
						iLocal_577 = (get_game_timer() + iVar571);
						iLocal_574 = 3;
					}
					break;
				case 3:
					if (func_13(iVar574) || iVar575 < get_game_timer())
					{
						func_14(iVar574);
						iLocal_577 = (get_game_timer() + iVar571);
						iLocal_574 = 4;
					}
					break;
				case 4:
					if (func_15(iVar574) || iVar575 < get_game_timer())
					{
						func_16(iVar574);
						iLocal_577 = (iVar571 + get_game_timer());
						iLocal_574 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iVar574)))
					{
						if (func_17(func_6(iVar574), 4) && !iVar575 < get_game_timer())
						{
						}
						else
						{
							if (func_18(iVar574) || iVar575 < get_game_timer())
							{
								func_19(iVar574, 4);
								iLocal_577 = (iVar571 + get_game_timer());
								iLocal_574 = 7;
							}
							Jump @854; //curOff = 502
							if (iVar575 < get_game_timer() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iVar574);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iVar574);
								func_28(iVar574);
								func_29();
								func_30();
								iLocal_574 = 8;
							}
							Jump @854; //curOff = 606
							func_31(iVar574);
							func_32();
							iLocal_574 = 9;
							Jump @854; //curOff = 625
							func_33(Global_1898004);
							func_34(iVar574, Global_1898004);
							iLocal_574 = 10;
							Jump @854; //curOff = 652
							func_35(iVar574);
							if (func_20() != -1)
							{
							}
							else
							{
								_display_hud_component(1833957607);
							}
							func_19(iVar574, 8);
							if (func_36(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_37(32);
							}
							iLocal_574 = 11;
							Jump @854; //curOff = 725
							if (func_38(iVar574))
							{
								iLocal_575 = (1000 + get_game_timer());
							}
							func_39(Global_1898004, iVar574);
							func_40(iVar574);
							func_19(iVar574, 8);
							if (func_41())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1888801)[iVar574]->f_10);
							if ((*Global_1888801)[iVar574]->f_11 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1888801)[iVar574]->f_11);
							}
							Jump @854; //curOff = 835
							func_42(iVar0);
							iVar0++;
						}
						if ((*Global_1888801)[iVar574]->f_12 == 0)
						{
						}
						else
						{
							_0x95423627a9ca598e((*Global_1888801)[iVar574]->f_12);
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
	uLocal_466 = (*Global_1888801)[38]->f_4;
	_0xb469cfd9e065eb99(uVar464, 10);
	iLocal_467 = _create_volume_box_with_custom_name(-782.988f, -1324.319f, 46.397f, 0f, 0f, -90f, 7.645f, 14.5f, 7.008f, "Blackwater - m_volGeneral");
	iLocal_471 = _create_volume_box_with_custom_name(-783.16f, -1324.1f, 44.674f, 0f, 0f, -90f, 7.3f, 14.9f, 4f, "Blackwater - m_volGeneralStoreOwner");
	iLocal_468 = _create_volume_box_with_custom_name(-784.77f, -1323.951f, 44.03f, 0f, 0f, -90f, 1.2f, 2f, 2.5f, "Blackwater - m_volGeneralPrompt");
	iLocal_469 = _create_volume_box(-792.534f, -1324.511f, 44.38398f, 0f, 0f, 0f, 3.678344f, 7.823312f, 3.70165f);
	iLocal_470 = _create_volume_box_with_custom_name(-784.473f, -1321.867f, 44.03f, 0f, 0f, -90f, 1.5f, 3.869f, 2.5f, "Blackwater - m_volGeneralCounterOff");
	_0xb469cfd9e065eb99(uVar465, 10040);
	iLocal_516 = _create_volume_box_with_custom_name(-763f, -1269.2f, 44.2f, 0f, 0f, 0f, 12.1f, 8.532616f, 5f, "BLKWATER SHERIFF STATION");
	_0x3efabb21e14a6bd1(uVar514, 5, 1);
	iLocal_517 = _create_volume_box_with_custom_name(-775.5706f, -1278.292f, 43.72021f, 0f, 0f, 0f, 2.331285f, 11.19982f, 4.241409f, "m_volLawSpawn_Blocking");
	uLocal_518 = _0xa2d5a26208421426(uVar515);
	func_46();
	iLocal_496 = _create_volume_box_with_custom_name(func_47(3), func_48(3), func_49(3), "Blackwater - m_volBank");
	iLocal_497 = _create_volume_box_with_custom_name(-813.1776f, -1277.296f, 43.69548f, 0f, 0f, 0f, 1.252319f, 1f, 2.736849f, "Rhodes - Bank prompt");
	iLocal_498 = _create_volume_box_with_custom_name(-816.1747f, -1276.917f, 43.69548f, 0f, 0f, 0f, 1.252319f, 1f, 2.736849f, "Rhodes - Bank offlimits");
	_0xb469cfd9e065eb99(uVar494, 10034);
	iLocal_519 = _create_volume_box_with_custom_name(-868.3356f, -1366.207f, 44.35f, 0f, 0f, 0f, 23.18747f, 12.136f, 4.97f, "Blackwater Horse Shop - m_volHorseShop");
	iLocal_520 = _create_volume_aggregate_with_custom_name("Blackwater Horse Shop - m_volHorseShopOutsideDoor Agg");
	_0x39816f6f94f385ad(uVar518, -856.5364f, -1366.288f, 43.215f, 0f, 0f, 0f, 3.880519f, 3.130757f, 6.64254f);
	_0x39816f6f94f385ad(uVar518, -873.7517f, -1360.161f, 43.215f, 0f, 0f, 90f, 4.034535f, 3.134493f, 6.64254f);
	func_50(9, uVar518);
	_0xb469cfd9e065eb99(uVar517, 10042);
	iLocal_525 = _create_volume_cylinder_with_custom_name(-806.585f, -1330.295f, 43.60916f, 0f, 0f, 0f, 5.678295f, 5.023632f, 2.508849f, "Blackwater - newspaper boy");
	iLocal_499 = _create_volume_box_with_custom_name(-815.711f, -1276.18f, 43.997f, 0f, 0f, 89.8f, 7.7f, 12.8f, 2.9f, "Blackwater - m_volBankManagerOwner");
	iLocal_503 = _create_volume_box_with_custom_name(-763.219f, -1292.7f, 44.6f, 0f, 0f, 0f, 11.4f, 6.5f, 3.5f, "Blackwater - m_volTailor");
	iLocal_504 = _create_volume_aggregate_with_custom_name("Blackwater - m_volTailorOwner");
	_0x39816f6f94f385ad(uVar502, -765.319f, -1292.7f, 44.6f, 0f, 0f, 0f, 15.6f, 6.5f, 3.5f);
	_0x39816f6f94f385ad(uVar502, -774.117f, -1291.071f, 44.6f, 0f, 0f, 0f, 2f, 3.25f, 3.5f);
	iLocal_505 = _create_volume_box_with_custom_name(-761.543f, -1291.245f, 43.772f, 0f, 0f, 0f, 3.8f, 2.5f, 2f, "BLW-m_volTailorPrompt");
	iLocal_506 = _create_volume_aggregate_with_custom_name("Blackwater - m_volTailorOfflimits");
	_0x39816f6f94f385ad(uVar504, -760.79f, -1294.066f, 43.772f, 0f, 0f, 0f, 6f, 2f, 2f);
	_0x39816f6f94f385ad(uVar504, -767.183f, -1291.536f, 43.772f, 0f, 0f, 89.264f, 2.695f, 3.324f, 2f);
	iLocal_507 = _create_volume_aggregate_with_custom_name("SDN-m_volTailorPARENT");
	_0x6e0d3c3f828da773(uVar505, uVar502);
	_0x6e0d3c3f828da773(uVar505, uVar504);
	_0xb469cfd9e065eb99(uVar501, 10044);
	iLocal_511 = _create_volume_aggregate_with_custom_name("Blackwater - m_volPostOfficeOwner Agg");
	_0x39816f6f94f385ad(uVar509, -875.073f, -1332.742f, 44.47251f, 0f, 0f, -179.746f, 8.481f, 13.525f, 2.993397f);
	_0x39816f6f94f385ad(uVar509, -875.036f, -1324.642f, 44.43187f, 0f, 0f, 0f, 2.667f, 3.006f, 3f);
	iLocal_512 = _create_volume_aggregate_with_custom_name("Blackwater - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(uVar510, -875.07f, -1328.584f, 44.38541f, 0f, 0f, -179.5535f, 2.007f, 1.4f, 2.993397f);
	_0x39816f6f94f385ad(uVar510, -875.036f, -1324.773f, 44.43187f, 0f, 0f, 0f, 2.299f, 2.175f, 3f);
	iLocal_513 = _create_volume_box_with_custom_name(-875.6834f, -1326.861f, 44.47251f, 0f, 0f, -179.1404f, 3.857776f, 1.921187f, 2.993397f, "Blackwater - m_volPostOfficeOfflimits");
	iLocal_514 = _create_volume_aggregate_with_custom_name("Blackwater - m_volPostOfficePARENT Agg");
	_0x6e0d3c3f828da773(uVar512, uVar509);
	_0x6e0d3c3f828da773(uVar512, uVar511);
	_0xb469cfd9e065eb99(uVar512, 10043);
	iLocal_508 = _create_volume_box_with_custom_name(-785.2803f, -1304.695f, 44.6f, 0f, 0f, 180f, 9.89304f, 6.3f, 3.7f, "Blackwater - m_volDoctorOwner");
	iLocal_509 = _create_volume_box_with_custom_name(-786.6721f, -1302.453f, 44.5651f, 0f, 0f, -179.9827f, 7.058838f, 1.318995f, 3.7f, "Blackwater - m_volDoctorOfflimits");
	iLocal_510 = _create_volume_aggregate_with_custom_name("Blackwater - m_volDoctorPARENT Agg");
	_0x6e0d3c3f828da773(uVar508, uVar506);
	_0x6e0d3c3f828da773(uVar508, uVar507);
	_0xb469cfd9e065eb99(uVar508, 10039);
	iLocal_515 = _create_volume_aggregate_with_custom_name("Blackwater - m_volSaloonInterior");
	_0x39816f6f94f385ad(uVar513, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
	_0x39816f6f94f385ad(uVar513, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
	_0x39816f6f94f385ad(uVar513, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
	iLocal_500 = _create_volume_box_with_custom_name(-813.686f, -1366.005f, 43.677f, 0f, 0f, 90f, 6.5f, 7f, 2f, "Blackwater-m_volBarberShop");
	iLocal_501 = _create_volume_box_with_custom_name(-807.6548f, -1366.734f, 43.68237f, 0f, 0f, 90f, 8.25f, 5.5f, 2f, "Blackwater-m_volBarberPorch");
	iLocal_502 = _create_volume_box_with_custom_name(-813.686f, -1366.005f, 43.677f, 0f, 0f, 90f, 5.5f, 6f, 2f, "Blackwater-m_volBarberPrompt");
	iLocal_522 = _create_volume_box_with_custom_name(-753.4219f, -1284.24f, 43.20049f, 0f, 0f, 90f, 6f, 8f, 2f, "Blackwater - m_volButcher");
	iLocal_523 = _create_volume_box_with_custom_name(-750.9575f, -1284.844f, 43.20049f, 0f, 0f, 90f, 1.8f, 1.3f, 2f, "Blackwater - m_volButcherPrompt");
	iLocal_524 = _create_volume_box_with_custom_name(-753.1232f, -1284.754f, 43.20049f, 0f, 0f, 90f, 2.5f, 3f, 2f, "Blackwater - m_volButcherOfflimits");
	_0xb469cfd9e065eb99(uVar520, 10121);
	iLocal_521 = _create_volume_box_with_custom_name(-778.6945f, -1362.467f, 45.687f, 0f, 0f, 0.496382f, 16f, 8.9f, 8f, "Blackwater - m_volTheatre");
	_0xb56d41a694e42e86(uVar519, 10208, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(uVar519, 10208, 0, 0, -1, -1, 0);
	iLocal_527 = _create_volume_box_with_custom_name(-813.0476f, -1374.265f, 44.60803f, 0f, 0f, 0f, 7.733583f, 6.296834f, 3.236622f, "Blackwater - m_volPhotoStudio");
	iLocal_528 = _create_volume_box_with_custom_name(-813.8254f, -1374.265f, 44.60803f, 0f, 0f, 0f, 6.401097f, 6.296834f, 3.236622f, "Blackwater - m_volPhotoStudioPrompt");
	iLocal_529 = _create_volume_aggregate_with_custom_name("Blackwater - m_volLiveryOwner");
	_0x39816f6f94f385ad(uVar527, -971.5854f, -1321.096f, 54.18404f, 0.083127f, 4.778676f, 0.997744f, 31.36792f, 47.07047f, 7.816715f);
	_0x39816f6f94f385ad(uVar527, -949.3033f, -1339.083f, 52.97771f, 0f, 0f, 2.975328f, 14.37138f, 10.08988f, 7.273995f);
	iLocal_530 = _create_volume_box_with_custom_name(-751.898f, -1285.072f, 43.418f, 0f, 0f, 0f, 2.822f, 4.416f, 2.448f, "Blackwater-m_volButcherNavMeshBlocking");
	_0x19c7567d2f2287d6(uVar528, 7);
	iLocal_531 = _create_volume_cylinder_with_custom_name(-934.7934f, -1374.338f, 48.44641f, 0f, 0f, 0f, 1f, 1f, 1f, "Blackwater-m_volCampfire");
	func_51(iVar529, 4);
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
	func_52();
	func_53(1467518375, 1, 0, 0, 0, 0, 0, 0);
	iVar0[0] = -2127191462;
	iVar0[1] = -1779971138;
	func_54(38, &iVar0, 2);
	if (func_20() == -1)
	{
		func_53(&(iVar0[0]), 1, 0, 0, 0, 0, 0, 0);
		func_53(&(iVar0[1]), 1, 0, 0, 0, 0, 0, 0);
	}
	iVar3[0] = 1225606581;
	iVar3[1] = -1168201642;
	func_53(1225606581, 1, 0f, 0, 0, 0, 0, 0);
	_0x1bc47a9dedc8df5d(1225606581, 0);
	func_53(-1168201642, 1, 0f, 0, 0, 0, 0, 0);
	_0x1bc47a9dedc8df5d(-1168201642, 0);
	func_55(36, 4, iVar518, &iVar3, -1, 50);
	func_55(37, 4, iVar518, &iVar3, -1, 50);
	func_55(38, 4, iVar518, &iVar3, -1, 50);
	func_55(39, 4, iVar518, &iVar3, -1, 50);
	func_55(40, 4, iVar518, &iVar3, -1, 50);
	func_56(&uLocal_532, 945, 15, "", 1596452133, -787.779f, -1341.577f, 43.6937f, -90.08f, 0, 0);
	func_56(&uLocal_552, 949, 15, "", -1753201617, -881.7885f, -1291.716f, 42.7377f, 5.48f, 0, 0);
	if (!func_57(45))
	{
		func_58(535);
		func_58(536);
		func_58(537);
		func_58(538);
		func_58(539);
		func_58(540);
		func_58(541);
		func_58(541);
	}
	else
	{
		func_59(535);
		func_59(536);
		func_59(537);
		func_59(538);
		func_59(539);
		func_59(540);
		func_59(541);
		func_59(541);
	}
	func_60(527226204, 0, 0);
	func_60(885203519, 1, 0);
	func_61(-409100651, "props_misc@church_bells", "enter", "loop", "exit", -970.1069f, -1182.428f, 66.75692f, "VAL_SINGLE_TOLL");
	func_62(9, 0, 0);
	func_62(12, 0, 0);
	func_62(19, 0, 0);
}

bool func_15(int iParam0)
{
	if (func_20() == -1)
	{
		_text_database_request("SCVBAUD");
		_text_database_request("BWRGNAU");
		if (!_text_database_has_loaded("SCVBAUD"))
		{
			return false;
		}
		if (!_text_database_has_loaded("BWRGNAU"))
		{
			return false;
		}
		func_63();
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

int func_18(int iParam0)
{
	return func_64(iParam0, -1, -1, 0);
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
	func_65(3, uVar494);
	if (func_20() == -1)
	{
		func_66(3);
		func_67(2117902999, 1);
		func_67(1462330364, 1);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_68(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_69(5000))
		{
			return true;
		}
	}
	switch (func_70(0))
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
	func_71(23, &vVar0, 1);
	func_72(&vVar0, 1, 1);
	func_71(0, &vVar0, 1);
	func_72(&vVar0, 1, 1);
	func_71(6, &vVar0, 1);
	func_72(&vVar0, 1, 1);
}

void func_25()
{
}

void func_26()
{
	func_73(0, -815.3443f, -1315.599f, 42.6788f, uVar513, 38);
}

void func_27(int iParam0)
{
	func_74(3, 513, iVar464, iParam0, iVar465, iVar467, 12, -1082130432, 0, 0);
	func_75(3, -1498321761, 0, 0);
	func_75(3, -1252390440, 0, 0);
	func_75(3, 2046989122, 0, 0);
	func_76(3, -776.6674f, -1322.008f, 47.087f, 174.6883f);
	func_77(3, uVar466);
	func_74(7, 521, iVar500, iParam0, iVar502, iVar503, 12, -1082130432, 0, 0);
	func_75(7, -1768302830, 0, 0);
	func_76(7, -766.6653f, -1294.327f, 42.8523f, 18.9341f);
	func_74(2, 522, iVar508, iParam0, iVar509, iVar510, 229376, -1082130432, 0, 0);
	func_75(2, 2124421956, 0, 0);
	func_75(2, 1861385249, 0, 0);
	func_75(2, -1688963720, 0, 0);
	func_75(2, 1730262833, 0, 0);
	func_74(8, 529, iVar497, iParam0, iVar499, 0, 4098, -1082130432, 0, 0);
	func_75(8, -1782375478, 1f, 1);
	func_75(8, 1632219860, 1f, 1);
	func_75(8, 2004868928, 1f, 1);
	func_76(8, -825.4233f, -1366.677f, 42.4847f, 326.0934f);
	func_77(8, uVar498);
	func_74(9, 516, iVar516, iParam0, 0, 0, 2, -1082130432, 0, 0);
	func_78(9, 1);
	func_78(9, 16384);
	func_79(9, 1);
	func_75(9, -977581490, -1f, 1);
	func_75(9, -1284495944, 1f, 1);
	func_75(9, -1571912843, 1f, 1);
	func_75(9, -1860804267, -1f, 1);
	func_74(10, 532, iVar519, iParam0, iVar520, iVar521, 460, -1082130432, 0, 0);
	func_80(iParam0);
	func_74(22, 524, iVar522, iParam0, iVar522, 0, 4, -1082130432, 0, 0);
	func_81();
	if (func_82())
	{
		func_83(16, 1);
	}
	else
	{
		func_83(16, 0);
	}
	func_74(21, 514, iVar524, iParam0, iVar525, 0, 2, -1082130432, 0, 0);
	func_75(21, -1074037594, 0, 0);
	func_84(&uLocal_472, 519, uVar493, uVar494, uVar495);
	func_53(-2092568756, 1, 0, 0, 0, 0, 0, 0);
	func_53(-944310223, 1, 0, 0, 0, 0, 0, 0);
	func_53(1441404053, 1, 0, 0, 0, 0, 0, 0);
	func_53(254216012, 1, 0, 0, 0, 0, 0, 0);
	func_53(484025009, 1, 0, 0, 0, 0, 0, 0);
	func_53(1924615787, 1, 0, 0, 0, 0, 0, 0);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	func_85(519, iVar496, 1);
	func_85(529, iVar497, 1);
	func_85(513, iVar468, 1);
	func_85(521, iVar501, 1);
	func_85(522, iVar508, 1);
	func_85(516, iVar516, 1);
	func_85(526, iVar526, 1);
	func_85(527, iVar526, 0);
	func_85(528, iVar526, 0);
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_86(0.85f, 0.15f, 0f, 0f);
	func_87(iParam0, 0);
	if (!func_57(45))
	{
		if (!func_88(120))
		{
			func_89(120, 0);
		}
	}
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
	func_90(uParam1, iVar462, 1);
	func_90(uParam1, iVar504, 2);
	func_90(uParam1, iVar463, 2);
	func_90(uParam1, iVar499, 2);
	func_90(uParam1, iVar507, 2);
	func_90(uParam1, iVar515, 2);
}

void func_35(int iParam0)
{
	if (!func_91(iParam0))
	{
		return;
	}
	func_92();
	func_93(0, -380739391);
	func_93(2, 345568588);
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
	func_87(iParam0, 1);
	func_94(38);
	func_95();
	if (!func_96(-1854368742) && !_0xcf45df50c7775f2a())
	{
		if (func_97(7))
		{
			func_98(-753454183);
			func_98(-1854368742);
		}
		else
		{
			func_99(-1854368742);
		}
	}
	if (func_20() == -1)
	{
		bVar0 = func_100();
		if (!bVar0)
		{
			func_101(&Local_185);
		}
		if (!func_102(38))
		{
			func_103(&uLocal_532);
		}
		func_103(&uLocal_552);
		func_104(&uLocal_472);
		func_105();
		if (func_106(22, &uLocal_572))
		{
			func_107(iVar569);
		}
	}
	return false;
}

void func_39(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_108(&Global_1935630, 16384)) || func_108(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_109(uParam0, 1))
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
	bVar2 = func_110();
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
							if ((!func_111((*uParam0)[iVar3], 1) && func_112(iParam1)) && !func_113(iParam1, 16))
							{
								func_115(iParam1, func_114(), -1, 0, -1, 0);
								func_116((*uParam0)[iVar3], 1);
							}
							func_117(iParam1, 0);
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
		if (func_118() != bVar0)
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
			func_119();
			func_120(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_121(bVar0);
	if (func_20() == -1)
	{
		func_123((iParam1 == func_122() && bVar0));
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
	if (func_124(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_125();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_19(iVar573, 2048);
		if (func_7(func_114()))
		{
			func_8(func_114(), 8);
		}
		func_126(iVar573, 4);
		func_126(iVar573, 8);
		func_121(0);
		if (func_20() == -1)
		{
			func_123(0);
		}
		func_127(iVar573);
		func_32();
		return false;
	}
	else
	{
		func_128(iVar573);
		func_129(iVar573);
		func_130(iVar573);
		if (!func_131(iVar573, 0))
		{
			return false;
		}
	}
	terminate_this_thread();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_91(iParam0))
	{
		return false;
	}
	return func_132(iParam0, 8);
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
	if (!_does_volume_exist(iVar524))
	{
		iLocal_526 = _create_volume_box(-822.6304f, -1324.96f, 48.61024f, 0f, 0f, 0f, 7.215324f, 4.836926f, 3.524086f);
	}
	func_133(10, -822.6304f, -1324.96f, 48.61024f, 0f, iVar524);
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

void func_50(int iParam0, var uParam1)
{
	Global_1914319->f_3[iParam0]->f_32 = uParam1;
}

int func_51(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1935475[iVar0]))
		{
			(*Global_1935475)[iVar0] = iParam0;
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52()
{
	if (!func_57(45))
	{
		if (Global_1934765->f_292)
		{
			_0xe057fea9a22eb3ee(346317463);
			Global_1934765->f_292 = 0;
		}
		if (!Global_1934765->f_291)
		{
			_0x1392105da88bbffb(577490767, -811f, -1212.5f, 0, 0);
			Global_1934765->f_291 = 1;
		}
	}
	else
	{
		if (!Global_1934765->f_292)
		{
			_0x1392105da88bbffb(346317463, -811f, -1212.5f, 0, 0);
			Global_1934765->f_292 = 1;
		}
		if (Global_1934765->f_291)
		{
			_0xe057fea9a22eb3ee(577490767);
			Global_1934765->f_291 = 0;
		}
	}
}

void func_53(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_134(iParam0, 0, 0);
	if (func_135(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_136(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_137(iParam0, 1);
			}
			else
			{
				func_138(iParam0, 1);
			}
		}
		else
		{
			func_139(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_140())
	{
	}
	else if (network_is_in_session())
	{
	}
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
			iVar2 = func_141(iParam0, iVar1);
			if (Global_40.f_9829[iVar0]->f_1 != 0)
			{
				if (iVar2 != 0)
				{
					_0x8bc555034a5a5e8c(iVar2, Global_40.f_9829[iVar0]->f_1);
				}
			}
			func_142(iVar0, iParam1[iVar1]);
			func_143(iVar0);
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
				iVar2 = func_141(iParam0, iVar1);
				func_142(iVar0, iParam1[iVar1]);
				func_143(iVar0);
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

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_144(iParam0))
	{
		return;
	}
	if (func_146(func_145(iParam1)))
	{
		return;
	}
	if (!_does_volume_exist(iParam2))
	{
		return;
	}
	if (!func_148(func_147(iParam1)))
	{
		return;
	}
	if (*iParam3 > 4)
	{
		return;
	}
	Global_1394141->f_7[iParam0] = 0;
	Global_1394141->f_7[iParam0]->f_1 = { func_145(iParam1) };
	Global_1394141->f_7[iParam0]->f_4 = iParam2;
	Global_1394141->f_7[iParam0]->f_5 = func_147(iParam1);
	Global_1394141->f_7[iParam0]->f_28 = iParam5;
	Global_1394141->f_7[iParam0]->f_12 = iParam4;
	Global_1394141->f_7[iParam0]->f_13 = func_149(iParam0);
	iVar0 = 0;
	while (iVar0 <= (*iParam3 - 1))
	{
		Global_1394141->f_7[iParam0]->f_7[iVar0] = iParam3[iVar0];
		iVar0++;
	}
}

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, int iParam10)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = { func_150(sParam3) };
	uParam0->f_12 = iParam4;
	uParam0->f_13 = { vParam5 };
	uParam0->f_16 = fParam8;
	uParam0->f_17 = iParam9;
	uParam0->f_18 = iParam10;
}

bool func_57(int iParam0)
{
	if (!func_151(iParam0))
	{
		return false;
	}
	return func_152(iParam0);
}

int func_58(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (!func_154(func_153(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_155(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_155(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_155(iParam0));
	return 1;
}

int func_59(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (!func_154(func_153(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_155(iParam0));
	return 1;
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_156(1497516462);
			func_157(2016141805);
			func_157(1010885152);
			func_157(-502324015);
			break;
		case 2016141805:
			func_157(1497516462);
			func_156(2016141805);
			func_157(1010885152);
			func_157(-502324015);
			break;
		case 1010885152:
			func_157(1497516462);
			func_157(2016141805);
			func_156(1010885152);
			func_157(-502324015);
			break;
		case -502324015:
			func_157(1497516462);
			func_157(2016141805);
			func_157(1010885152);
			func_156(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_157(-538889627);
			func_157(-538880323);
			func_157(-1056767524);
			func_156(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_158();
			func_156(iParam0);
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
			func_159();
			func_156(iParam0);
			break;
		case 2019386373:
			func_157(-664252410);
			func_157(2109952320);
			func_156(2019386373);
			break;
		case -664252410:
			func_157(2019386373);
			func_157(2109952320);
			func_156(-664252410);
			break;
		case 2109952320:
			func_157(2019386373);
			func_157(-664252410);
			func_156(2109952320);
			break;
		case -1674179981:
			func_157(-1835851517);
			func_157(-1838352012);
			func_156(-1674179981);
			break;
		case -1835851517:
			func_157(-1674179981);
			func_157(-1838352012);
			func_156(-1835851517);
			break;
		case -1838352012:
			func_157(-1674179981);
			func_157(-1835851517);
			func_156(-1838352012);
			break;
		case -1717960576:
			func_157(210001842);
			func_156(-1717960576);
			break;
		case 210001842:
			func_157(-1717960576);
			func_156(210001842);
			break;
		case -150493654:
			func_157(-1271608261);
			func_157(1846061697);
			func_157(-1145519186);
			func_156(-150493654);
			break;
		case -1271608261:
			func_157(-150493654);
			func_157(1846061697);
			func_157(-1145519186);
			func_156(-1271608261);
			break;
		case 1846061697:
			func_157(-150493654);
			func_157(-1271608261);
			func_157(-1145519186);
			func_156(1846061697);
			break;
		case -1145519186:
			func_157(-150493654);
			func_157(-1271608261);
			func_157(1846061697);
			func_156(-1145519186);
			break;
		case 1766284049:
			func_157(280705402);
			func_157(1926308480);
			func_156(1766284049);
			break;
		case 280705402:
			func_157(1766284049);
			func_157(1926308480);
			func_156(280705402);
			break;
		case 1926308480:
			func_157(1766284049);
			func_157(280705402);
			func_156(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_157(439465264);
				func_156(1609506757);
			}
			else
			{
				func_157(1609506757);
				func_157(439465264);
			}
			break;
		case 439465264:
			if (func_160(1609506757))
			{
				if (bParam1)
				{
					func_156(439465264);
				}
				else
				{
					func_157(439465264);
				}
			}
			break;
		case 1822001510:
			func_157(-1612662716);
			func_156(1822001510);
			break;
		case -1612662716:
			func_157(1822001510);
			func_156(-1612662716);
			break;
		case 1306158345:
			func_157(1952610440);
			func_157(-223469678);
			func_157(-404698347);
			func_157(1517904467);
			func_156(1306158345);
			break;
		case 1952610440:
			func_157(1306158345);
			func_157(-223469678);
			func_157(-404698347);
			func_157(1517904467);
			func_156(1952610440);
			break;
		case -223469678:
			func_157(1306158345);
			func_157(1952610440);
			func_157(-404698347);
			func_157(1517904467);
			func_156(-223469678);
			break;
		case -404698347:
			func_157(1306158345);
			func_157(1952610440);
			func_157(-223469678);
			func_157(1517904467);
			func_156(-404698347);
			break;
		case 1517904467:
			func_157(1306158345);
			func_157(1952610440);
			func_157(-223469678);
			func_157(-404698347);
			func_156(1517904467);
			break;
		case 1376646519:
			func_157(931649776);
			func_157(-434590080);
			func_157(1743048395);
			func_157(449774763);
			func_156(1376646519);
			break;
		case 931649776:
			func_157(1376646519);
			func_157(-434590080);
			func_157(1743048395);
			func_157(449774763);
			func_156(931649776);
			break;
		case -434590080:
			func_157(1376646519);
			func_157(931649776);
			func_157(1743048395);
			func_157(449774763);
			func_156(-434590080);
			break;
		case 1743048395:
			func_157(1376646519);
			func_157(931649776);
			func_157(-434590080);
			func_157(449774763);
			func_156(1743048395);
			break;
		case 449774763:
			func_157(1376646519);
			func_157(931649776);
			func_157(-434590080);
			func_157(1743048395);
			func_156(449774763);
			break;
		case -1414537028:
			func_157(38162571);
			func_157(1350391819);
			func_157(54073871);
			func_156(-1414537028);
			break;
		case 38162571:
			func_157(-1414537028);
			func_157(1350391819);
			func_157(54073871);
			func_156(38162571);
			break;
		case 1350391819:
			func_157(-1414537028);
			func_157(38162571);
			func_157(54073871);
			func_156(1350391819);
			break;
		case 54073871:
			func_157(-1414537028);
			func_157(38162571);
			func_157(1350391819);
			func_156(54073871);
			break;
		case 198200492:
			func_156(198200492);
			func_157(-1124061431);
			func_157(52706132);
			func_157(-259123672);
			break;
		case -1124061431:
			func_157(198200492);
			func_156(-1124061431);
			func_157(52706132);
			func_157(-259123672);
			break;
		case 52706132:
			func_157(198200492);
			func_157(-1124061431);
			func_156(52706132);
			func_157(-259123672);
			break;
		case -259123672:
			func_157(198200492);
			func_157(-1124061431);
			func_157(52706132);
			func_156(-259123672);
			break;
		case -919512195:
			func_156(-919512195);
			func_157(-1925798111);
			func_157(420709909);
			func_157(1703426636);
			break;
		case -1925798111:
			func_156(-1925798111);
			func_157(-919512195);
			func_157(420709909);
			func_157(1703426636);
			break;
		case 420709909:
			func_156(420709909);
			func_157(-919512195);
			func_157(-1925798111);
			func_157(1703426636);
			break;
		case 1703426636:
			func_156(1703426636);
			func_157(-919512195);
			func_157(-1925798111);
			func_157(420709909);
			break;
		case -1223121209:
			func_156(-1223121209);
			func_157(630808005);
			break;
		case 630808005:
			func_156(630808005);
			func_157(-1223121209);
			break;
		case 1453909576:
			func_156(1453909576);
			func_157(1643531967);
			break;
		case 1643531967:
			func_156(1643531967);
			func_157(1453909576);
			break;
		case 0:
			func_156(0);
			func_157(473295046);
			func_157(-1738165526);
			break;
		case 473295046:
			func_156(473295046);
			func_157(0);
			func_157(-1738165526);
			break;
		case -1738165526:
			func_156(-1738165526);
			func_157(0);
			func_157(473295046);
			break;
		case 932909855:
			func_156(932909855);
			func_157(2051822093);
			break;
		case 2051822093:
			func_156(2051822093);
			func_157(932909855);
			break;
		case 405586984:
			func_156(405586984);
			func_157(1509509592);
			func_157(-959357075);
			func_157(-1311865656);
			break;
		case 1509509592:
			func_156(1509509592);
			func_157(405586984);
			func_157(-959357075);
			func_157(-1311865656);
			break;
		case -959357075:
			func_156(-959357075);
			func_157(1509509592);
			func_157(405586984);
			func_157(-1311865656);
			break;
		case -1311865656:
			func_156(-1311865656);
			func_157(1509509592);
			func_157(-959357075);
			func_157(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_156(-524145696);
			}
			else
			{
				func_157(-524145696);
			}
			func_157(1626481264);
			func_157(282809459);
			break;
		case 282809459:
			func_156(282809459);
			func_157(1626481264);
			func_157(-524145696);
			break;
		case 1626481264:
			func_156(1626481264);
			func_157(-524145696);
			func_157(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_156(885203519);
			}
			else
			{
				func_157(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_156(-1080627546);
			}
			else
			{
				func_157(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_160(iParam0))
				{
					func_156(iParam0);
				}
			}
			else if (func_160(iParam0))
			{
				func_157(iParam0);
			}
			break;
	}
}

void func_61(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_146(vParam5))
	{
		return;
	}
	Local_22 = iParam0;
	Local_22.f_6 = sParam1;
	Local_22.f_7 = sParam2;
	Local_22.f_8 = sParam3;
	Local_22.f_9 = sParam4;
	Local_22.f_11 = { vParam5 };
	Local_22.f_10 = sParam8;
	Local_22.f_15 = 1;
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	if (Local_22.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_161(&iVar0, iParam0);
	func_162(&iVar0, iParam1);
	func_163(&iVar0, iParam2);
	func_164(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_22.f_5 - 1))
	{
		func_164(Local_22.f_1[iVar1]);
		if (&Local_22.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_22.f_1[Local_22.f_5] = iVar0;
	Local_22.f_5++;
	func_165(&(Local_22.f_1), Local_22.f_5);
}

void func_63()
{
	func_166(&uLocal_151);
	func_167();
}

int func_64(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_91(iParam0))
	{
		return 1;
	}
	if (func_132(iParam0, 16))
	{
		return 1;
	}
	if (func_102(iParam0) && !func_168(iParam0))
	{
	}
	if (func_169(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_148(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_148(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_102(iParam0) || func_168(iParam0)) || func_170(&Global_1897950))
			{
				func_171(&Global_1897950, 0);
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

void func_65(int iParam0, var uParam1)
{
	if (func_20() == -1)
	{
		(*Global_1934182)[iParam0]->f_7 = uParam1;
		if (!func_172(iParam0))
		{
			func_173(iParam0);
		}
		func_174(16);
		func_174(32);
	}
	Global_1934182->f_75 = 0;
}

void func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_175(0, 0, -1477943109);
			func_175(0, 1, 2089945615);
			func_175(0, 2, -2136681514);
			func_175(0, 3, 1733501235);
			break;
		case 3:
			func_175(3, 0, 531022111);
			break;
		case 2:
			func_175(2, 0, -408139633);
			func_175(2, 1, -1652509687);
			break;
		case 1:
			func_175(1, 0, -977211145);
			func_175(1, 1, -1206757990);
			break;
	}
}

void func_67(int iParam0, int iParam1)
{
	func_53(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_68(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_69(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_70(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_71(int iParam0, var uParam1, int iParam2)
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

int func_72(var uParam0, bool bParam1, int iParam2)
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
	if (uParam0->f_2 != func_176())
	{
		return -1;
	}
	if (!func_177(uParam0->f_1))
	{
		return -1;
	}
	if (func_102(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_178(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_179(&iVar2))
		{
			return -1;
		}
	}
	func_180(*uParam0, iVar2);
	bVar1 = func_181(uParam0->f_1, 131072);
	func_182(uParam0->f_1);
	iVar3 = func_183(uParam0->f_1, *uParam0);
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
		func_184(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_184(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_184(uParam0->f_1, 131072);
	}
	if (func_185(iVar3) || (!func_186(iVar3) && func_187(0) != iVar3))
	{
		iVar0 = func_188(iVar3);
		if (iVar0 == -1)
		{
			func_189(iVar3);
		}
	}
	return iVar2;
}

void func_73(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_146(vParam1))
	{
		return;
	}
	func_190(iParam0);
	Global_1935369->f_5[iParam0]->f_1 = { vParam1 };
	Global_1935369->f_5[iParam0]->f_4 = uParam4;
	Global_1935369->f_5[iParam0]->f_5 = iParam5;
	Global_1935369->f_5[iParam0]->f_6 = func_191(iParam5, iParam0);
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_192(iParam3, iParam0);
	vVar1 = { func_193(iVar0) };
	vVar4 = { func_194(iVar0) };
	if (func_146(vVar1))
	{
		return;
	}
	if (!func_195(19, 16384))
	{
		if (!func_148(iParam1))
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
	func_196(iParam0);
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	if (func_146(vVar4))
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
	if (func_197(iVar0) || func_198(iVar0, iParam0))
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
		Global_1914319->f_3[iParam0]->f_20 = func_199(5, Global_1914319->f_3[iParam0]->f_10, 2, iVar7);
	}
	*Global_1393529->f_114[iParam0] = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_200(iParam0);
	}
	Global_1914319->f_3[iParam0]->f_19 = fParam7;
	Global_1914319->f_3[iParam0]->f_8 = iParam6;
	if (!func_201(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_202(iParam3);
			break;
		case 10:
			func_80(iParam3);
			break;
		case 18:
			func_203();
			break;
		case 9:
			func_204();
			break;
		case 22:
			func_81();
			break;
	}
	func_205(Global_1914319->f_3[iParam0]->f_10);
	func_206(iParam0, 16);
	func_207(iParam0, 4);
	_0x748c5f51a18cb8f0(1);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_208(iParam0);
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

void func_76(int iParam0, vector3 vParam1, float fParam4)
{
	*Global_1393529->f_114[iParam0] = { vParam1 };
	Global_1393529->f_220[iParam0] = fParam4;
}

void func_77(int iParam0, var uParam1)
{
	Global_1914319->f_3[iParam0]->f_30 = uParam1;
}

void func_78(int iParam0, int iParam1)
{
	func_209(&(Global_1914319->f_3[iParam0]->f_5), iParam1);
}

void func_79(int iParam0, int iParam1)
{
	func_209(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_80(int iParam0)
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

void func_81()
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

bool func_82()
{
	if (func_210(0) > 0 || func_210(1) > 0)
	{
		return true;
	}
	return false;
}

void func_83(int iParam0, bool bParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_212(iParam0, 1);
	}
	else
	{
		func_213(iParam0, 1);
	}
	func_215(func_214(iParam0), bParam1);
}

void func_84(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	uParam0->f_3 = iParam1;
	uParam0->f_5 = uParam2;
	uParam0->f_6 = uParam3;
	uParam0->f_7 = uParam4;
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

void func_86(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_87(int iParam0, bool bParam1)
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
		if (!func_217("region_town_lockdown_generic"))
		{
			Global_1415404 = _get_number_of_references_of_script_with_name_hash(-322696182) > 0;
		}
		return;
	}
	if (Global_1935630->f_22 || Global_1934266->f_61)
	{
		return;
	}
	if (func_218(iParam0))
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
		func_219(Var0, 0);
	}
}

bool func_88(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_89(int iParam0, bool bParam1)
{
	func_220(iParam0, &iVar0, &iVar1);
	if (!func_221(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_222(iVar0, iVar1);
}

void func_90(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_223(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_91(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_92()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_224(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_93(int iParam0, int iParam1)
{
	if (!func_224(iParam0))
	{
		return;
	}
	if (!func_225(iParam1))
	{
		return;
	}
	(*Global_1898130)[iParam0] = iParam1;
}

void func_94(int iParam0)
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
			iVar2 = func_226(iParam0, iVar1);
			iVar3 = func_227(iVar2);
			if (!is_ped_injured(iVar3))
			{
				if (!func_228(iVar0, 2))
				{
					set_ped_config_flag(iVar3, 146, true);
					func_229(iVar0, 2);
					func_230(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				func_231(iVar0, 2);
				if (vdist(func_232(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116->f_140)
					{
						if (func_233(iVar2, 0, 0, 0, 0, 0))
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

void func_95()
{
	if (!Local_22.f_15)
	{
		return;
	}
	if (Local_22.f_26 > get_game_timer())
	{
		return;
	}
	if ((!does_entity_exist(Local_22.f_17) && Local_22.f_14 > 1) && Local_22 != 0)
	{
		if (func_234() && func_235(Global_36, Local_22.f_11) < 100f)
		{
			if (Local_22.f_18 == 0)
			{
				Local_22.f_18 = _0x6f3068258a499e52(Local_22, Local_22.f_11, 11);
			}
			else if (_0x1ff441d7954f8709(Local_22.f_18))
			{
				Local_22.f_17 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_22.f_18));
			}
		}
		Local_22.f_26 = get_game_timer() + 1800;
	}
	switch (Local_22.f_14)
	{
		case 0:
			func_236();
			Local_22.f_14 = 1;
			break;
		case 1:
			if (func_237())
			{
				Local_22.f_14 = 2;
			}
			break;
		case 2:
			if (func_238())
			{
				Local_22.f_14 = 3;
				Local_22.f_24 = 0;
				Local_22.f_21 = 0;
				Local_22.f_22 = func_240(func_239());
				if (Local_22.f_22 > 12)
				{
					Local_22.f_22 = (Local_22.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_22.f_25 = 1;
			if (does_entity_exist(Local_22.f_17))
			{
				if (does_entity_have_drawable(Local_22.f_17))
				{
					Local_22.f_25 = 0;
					play_entity_anim(Local_22.f_17, Local_22.f_7, Local_22.f_6, 1000f, false, true, false, 0f, 0);
					Local_22.f_14 = 4;
				}
			}
			if (Local_22.f_21 >= Local_22.f_22)
			{
				Local_22.f_14 = 2;
			}
			break;
		case 4:
			if (func_241(Local_22.f_17, Local_22.f_6, Local_22.f_7, 0))
			{
				play_entity_anim(Local_22.f_17, Local_22.f_8, Local_22.f_6, 1000f, true, true, false, 0f, 0);
				Local_22.f_23 = get_game_timer() + 1800;
				Local_22.f_14 = 5;
			}
			break;
		case 5:
			if (Local_22.f_24 < get_game_timer())
			{
				Local_22.f_21++;
				Local_22.f_24 = get_game_timer() + 1800;
			}
			if (Local_22.f_21 >= Local_22.f_22 && func_241(Local_22.f_17, Local_22.f_6, Local_22.f_8, 0.02f))
			{
				play_entity_anim(Local_22.f_17, Local_22.f_9, Local_22.f_6, 8f, false, false, false, 0f, 0);
				Local_22.f_14 = 2;
			}
			break;
	}
	if (Local_22.f_25 && Local_22.f_14 > 2)
	{
		if (_0x714a0ea7de1167be(Local_22.f_10, "CHURCH_BELL_SOUNDS") && Local_22.f_24 < get_game_timer())
		{
			Local_22.f_24 = get_game_timer() + 1800;
			_play_sound_from_position(Local_22.f_10, Local_22.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_22.f_21++;
		}
	}
}

bool func_96(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_36);
}

bool func_97(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_240(func_239());
	if (func_242(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_242(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_242(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_242(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_242(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_242(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_242(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_242(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_242(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_242(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_242(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_242(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_242(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_242(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_242(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_242(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_242(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_98(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_99(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_100()
{
	return Global_1898164->f_163;
}

void func_101(var uParam0)
{
	func_243(&uLocal_151);
	func_244(uParam0);
}

bool func_102(int iParam0)
{
	if (!func_91(iParam0))
	{
		return false;
	}
	return func_132(iParam0, 33554432);
}

void func_103(var uParam0)
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
			if (func_146(uParam0->f_13))
			{
				*uParam0 = 9;
			}
			if (!_0x800df3fc913355f3(_0x112ddf56300bc6e5(func_153(uParam0->f_1))))
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
			if (!func_245(uParam0))
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
			if (func_246(uParam0))
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (func_245(uParam0))
			{
				if (func_247(uParam0))
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
			if (!func_246(uParam0))
			{
				*uParam0 = 1;
				return;
			}
			if (func_248(uParam0))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_249(uParam0))
			{
				func_250(uParam0);
				*uParam0 = 1;
			}
			if (func_251(uParam0))
			{
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!is_string_null_or_empty(&(uParam0->f_3)))
			{
				_0x187d65f3aec5d679(func_153(uParam0->f_1), &(uParam0->f_3));
			}
			if (does_entity_exist(_0x31c70a716cae1fee(_0x112ddf56300bc6e5(func_153(uParam0->f_1)))))
			{
				*uParam0 = 6;
			}
			else
			{
				*uParam0 = 9;
			}
			break;
		case 6:
			if (_0xf8de7154f7d1458f(_0x112ddf56300bc6e5(func_153(uParam0->f_1))) == uParam0->f_11)
			{
				*uParam0 = 9;
			}
			else
			{
				_0x669c25840c6f7ae2(_0x112ddf56300bc6e5(func_153(uParam0->f_1)), uParam0->f_11);
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
				func_250(uParam0);
				*uParam0 = 9;
				return;
			}
			if (!is_sphere_visible(get_entity_coords(uParam0->f_11, true, false), 3f))
			{
				func_250(uParam0);
				*uParam0 = 9;
			}
			break;
		case 9:
			if (func_252(uParam0))
			{
				*uParam0 = 10;
			}
			break;
		case 10:
			return;
	}
}

void func_104(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_6))
	{
		return;
	}
	if (uParam0->f_17 > 0)
	{
		if (func_100())
		{
			uParam0->f_17 = 4;
		}
		if (!_0xf256a75210c5c0eb(uParam0->f_5, Global_36) && func_253(uParam0, 8, 0, 1))
		{
			uParam0->f_17 = 4;
		}
		if (_0xf256a75210c5c0eb(uParam0->f_7, Global_36))
		{
			if (func_253(uParam0, 65536, 0, 1))
			{
				func_254(uParam0, 1);
				uParam0->f_17 = 3;
			}
		}
		if (func_255(Global_35, 1, 0, 0) != -1569615261 && func_253(uParam0, 4096, 0, 1))
		{
			func_254(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_256(Global_35, uParam0->f_5) && func_253(uParam0, 2048, 0, 1))
		{
			func_254(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_257(&uVar0) && func_253(uParam0, 256, 0, 1))
		{
			func_254(uParam0, 1);
			uParam0->f_17 = 3;
		}
	}
	switch (uParam0->f_17)
	{
		case 0:
			if (func_258(player_id(), 1, 0, 1) || func_100())
			{
				return;
			}
			if (_0xf256a75210c5c0eb(uParam0->f_5, Global_36))
			{
				if (!func_148(uParam0->f_3))
				{
					return;
				}
				if (!_0x800df3fc913355f3(func_155(uParam0->f_3)))
				{
					return;
				}
				uParam0->f_4 = func_227(uParam0->f_3);
				if (is_entity_dead(uParam0->f_4))
				{
					return;
				}
				func_259(uParam0);
				set_ped_config_flag(uParam0->f_4, 130, true);
				_0x85f500f4e24ca43e(uParam0->f_4, 0f);
				_0x9b9b9fa0ea283e3d(uParam0->f_4, 0f);
				uParam0->f_17 = 1;
			}
			break;
		case 1:
			bVar2 = false;
			if ((_0xf256a75210c5c0eb(uParam0->f_6, Global_36) && !func_260(uParam0)) && func_261(uParam0, -1))
			{
				if (func_262(0) && func_253(uParam0, 128, 0, 1))
				{
					bVar2 = true;
				}
				else if (func_257(&uVar1) && func_253(uParam0, 256, 0, 1))
				{
					uParam0->f_17 = 3;
				}
				else if (func_253(uParam0, 64, 0, 1))
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
				if (func_261(uParam0, 30))
				{
					if (func_253(uParam0, 16, 0, 1))
					{
					}
				}
			}
			break;
		case 3:
			if (func_258(player_id(), 1, 0, 1) || func_256(Global_35, uParam0->f_5))
			{
				if (!func_263(Global_35, 474215631))
				{
					task_cower(uParam0->f_4, -1, Global_35, 0);
				}
				if (func_253(uParam0, 1048576, 0, 1))
				{
				}
				uParam0->f_17 = 4;
			}
			else if ((_0xf256a75210c5c0eb(uParam0->f_7, Global_36) == 0 && func_255(Global_35, 1, 0, 0) == -1569615261) && !func_257(&uVar1))
			{
				bVar3 = false;
				if (func_253(uParam0, 8192, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_253(uParam0, 16384, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_253(uParam0, 32768, 0, 0))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					func_264(uParam0, 65536);
					func_264(uParam0, 256);
					func_264(uParam0, 4096);
					func_254(uParam0, 0);
					uParam0->f_17 = 0;
				}
			}
			break;
		case 4:
			set_ped_config_flag(uParam0->f_4, 130, false);
			set_blocking_of_non_temporary_events(uParam0->f_4, false);
			_0x85f500f4e24ca43e(uParam0->f_4, -1f);
			_0x9b9b9fa0ea283e3d(uParam0->f_4, -1f);
			func_265(uParam0);
			uParam0->f_17 = 0;
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_105()
{
	func_266(524);
}

bool func_106(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
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

void func_107(int iParam0)
{
	if (!does_entity_exist(func_268(iParam0)))
	{
		return;
	}
	if (func_269(iParam0, 0))
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
			iLocal_13 = func_270(func_176());
			iLocal_12 = func_271(iLocal_13);
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
			if (!does_entity_exist(func_268(iParam0)))
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

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_110()
{
	return func_108(&Global_1935630, 4096);
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_112(int iParam0)
{
	if (!func_91(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_272(iParam0));
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_114()
{
	return Global_1897952->f_41;
}

void func_115(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_273())
	{
		return;
	}
	sVar1 = func_274(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_275(iParam4))
	{
		if (func_91(iParam0))
		{
			iParam4 = func_276(func_6(iParam0));
		}
		else
		{
			iParam4 = func_276(iParam1);
		}
	}
	if (func_275(iParam4))
	{
		iVar3 = func_277(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_279(func_278(iParam2));
	}
	else if ((func_280(iParam1, 2) || func_281(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_91(iParam0) && func_132(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_240(func_239());
		iVar5 = func_282(func_239());
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
				fVar7 = func_283(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_284(&cVar6, 109029619), sVar9, func_284(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_283(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_284(&cVar6, 109029619), func_284(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_285(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_117(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_286(128))
	{
		return;
	}
	if (!func_287(iParam0))
	{
		return;
	}
	if (func_132(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_288(Global_1935630, 8192);
	func_290(func_289(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_290(func_289(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_290(func_289(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_290(func_289(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_290(func_289(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_290(func_289(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_290(func_289(-1532769513, -910218296), 1);
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

bool func_118()
{
	return (Global_1894899 & 1 != 0 && func_176() != -1);
}

void func_119()
{
	if (!func_291(&Global_1327479))
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
	func_292(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_120(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_293() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_291(iVar1) && !func_294(iVar1, iParam2)) && (!bParam3 || !func_295(iVar1))) && (!bParam4 || !func_296(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_297(iVar0);
			}
		}
		iVar0++;
	}
}

void func_121(bool bParam0)
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

int func_122()
{
	return Global_40.f_4283.f_1;
}

void func_123(bool bParam0)
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

bool func_124(int iParam0)
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

void func_125()
{
}

void func_126(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_127(int iParam0)
{
	func_299(func_298(iParam0, 1, 1));
	func_86(0.775f, 0.2f, 0.025f, 0f);
	func_300(&uLocal_456, 0);
	func_301();
	func_302();
	if (_does_volume_exist(iVar527))
	{
		_0x2c87c3e1c7b96ee2(iVar527);
		_delete_volume(iVar527);
	}
	if (_does_volume_exist(iVar514))
	{
		remove_dispatch_spawn_blocking_area(uVar515);
	}
	if (_does_text_database_exist("SCVBAUD"))
	{
		if (_text_database_has_loaded("SCVBAUD"))
		{
			_text_database_delete("SCVBAUD");
		}
	}
	if (_does_text_database_exist("BWRGNAU"))
	{
		if (_text_database_has_loaded("BWRGNAU"))
		{
			_text_database_delete("BWRGNAU");
		}
	}
	if (func_20() == -1)
	{
		func_252(&uLocal_532);
		func_252(&uLocal_552);
	}
	iParam0 = iParam0;
}

void func_128(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369->f_5[iVar0]->f_5 == iParam0)
		{
			func_190(iVar0);
		}
		iVar0++;
	}
}

void func_129(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_196(iVar0);
		}
		iVar0++;
	}
}

void func_130(int iParam0)
{
	iVar0 = func_303(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_304(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_131(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (!func_91(iParam0))
	{
		return true;
	}
	if (func_169(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_305(Global_1897950->f_1, 16))
			{
				func_306(Global_1897950->f_1, 0);
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

bool func_132(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_133(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!func_307(iParam0))
	{
		return;
	}
	if (func_146(vParam1))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_15 = { vParam1 };
	Global_1395601->f_5[iParam0]->f_18 = fParam4;
	Global_1395601->f_5[iParam0]->f_23 = iParam5;
	if (_does_volume_exist(iParam5))
	{
	}
	if (!func_308(242, 1, 1))
	{
		func_309(iParam0, 1);
	}
	func_310(iParam0);
	func_311(iParam0, 1);
	Global_40.f_9384[iParam0]->f_1 = func_239();
}

int func_134(int iParam0, bool bParam1, bool bParam2)
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

bool func_135(int iParam0)
{
	if (func_312(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_136(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_135(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_137(int iParam0, bool bParam1)
{
	if (func_135(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_138(int iParam0, bool bParam1)
{
	if (func_135(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (func_135(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_140()
{
	return true;
}

int func_141(int iParam0, int iParam1)
{
	return func_153(func_226(iParam0, iParam1));
}

void func_142(int iParam0, var uParam1)
{
	Global_1396116->f_98[iParam0] = uParam1;
}

void func_143(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	Global_1396116->f_98[iParam0]->f_1 = func_239();
}

bool func_144(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 41);
}

Vector3 func_145(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -789.869f, -1362.602f, 43.687f;
		case 1:
		case 2:
			return 2686.483f, -1362.37f, 48.2681f;
		case 0:
			return 2541.448f, -1281.873f, 49.26815f;
		case 3:
			return -354.8969f, 705.4585f, 116.9782f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_146(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 525;
		case 1:
		case 2:
			return 284;
		case 0:
			return 283;
		case 3:
			return 33;
		default:
			break;
	}
	return -1;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_149(int iParam0)
{
	if (!func_144(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
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
			return 0;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 1;
	}
	return -1;
}

struct<8> func_150(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

bool func_151(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_152(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_153(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_154(int iParam0)
{
	return iParam0 != 0;
}

int func_155(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_156(int iParam0)
{
	iVar0 = func_313(iParam0, 1);
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

void func_157(int iParam0)
{
	iVar0 = func_313(iParam0, 1);
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

void func_158()
{
	func_157(-939420910);
	func_157(-1187950766);
	func_157(356365161);
	func_157(753127042);
	func_157(-2038424081);
	func_157(1884271742);
	func_157(459290420);
}

void func_159()
{
	func_157(704802028);
	func_157(588987611);
	func_157(2008888900);
	func_157(1649996811);
	func_157(227918160);
	func_157(168171957);
	func_157(1193080109);
	func_157(-491981251);
	func_157(-639037538);
	func_157(-618620429);
}

bool func_160(int iParam0)
{
	iVar0 = func_313(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_161(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_162(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_163(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_164(int iParam0)
{
	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_239();
	func_315(iParam0, func_314(iVar0));
	func_317(iParam0, func_316(iVar0));
	func_319(iParam0, func_318(iVar0));
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if (uParam0[iVar2] > uParam0[iVar2 + 1])
				{
					uVar3 = uParam0[iVar2];
					(*uParam0)[iVar2] = uParam0[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

void func_166(var uParam0)
{
	uParam0->f_31 = 59031;
	uParam0->f_32 = 59273;
}

void func_167()
{
	iVar0[0] = 513;
	iVar0[1] = 522;
	func_322(&Local_185, 509, &iVar0, 0, 0);
	Local_185[0]->f_43 = 59523;
	Local_185[0]->f_44 = 59856;
	func_325(Local_185[0], 512);
	uVar6 = 5;
	func_322(&Local_185, 513, &uVar6, 1, 0);
	Local_185[1]->f_43 = 59972;
	Local_185[1]->f_44 = 59856;
	func_325(Local_185[1], 512);
	uVar12 = 5;
	func_322(&Local_185, 522, &uVar12, 2, 0);
	Local_185[2]->f_43 = 60262;
	Local_185[2]->f_44 = 59856;
	func_325(Local_185[2], 512);
	uVar18 = 5;
	func_322(&Local_185, 514, &uVar18, 3, 0);
	Local_185[3]->f_43 = 60512;
	Local_185[3]->f_44 = 59856;
	func_325(Local_185[3], 512);
	uVar24 = 5;
	func_322(&Local_185, 526, &uVar24, 4, 0);
	Local_185[4]->f_43 = 60757;
	Local_185[4]->f_44 = 59856;
	func_325(Local_185[4], 512);
	iVar30[0] = 509;
	func_322(&Local_185, 508, &iVar30, 5, 0);
	Local_185[5]->f_43 = 60854;
	Local_185[5]->f_44 = 59856;
	func_325(Local_185[5], 512);
}

bool func_168(int iParam0)
{
	if (!func_91(iParam0))
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

bool func_169(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_170(int iParam0)
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

int func_171(int iParam0, bool bParam1)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (!func_305(iParam0, 2))
	{
		return 0;
	}
	if (func_305(iParam0, 32) && !bParam1)
	{
		func_331(iParam0, _create_persistent_character(func_153(iParam0)));
		if (func_20() == -1)
		{
			if (func_305(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_155(iParam0));
				func_332(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_155(iParam0));
		}
		return 0;
	}
	if (!func_333(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_155(iParam0)))
	{
		func_332(iParam0, 128);
		return 1;
	}
	func_331(iParam0, _create_persistent_character(func_153(iParam0)));
	_0x4f81ead1de8fa19b(func_155(iParam0));
	if (func_305(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_155(iParam0));
		func_332(iParam0, 2048);
	}
	return 1;
}

bool func_172(int iParam0)
{
	return (*Global_1934182)[iParam0]->f_15;
}

void func_173(int iParam0)
{
	func_334(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_135(&((*Global_1934182)[iParam0]->f_8[iVar0])))
		{
			if (!func_335(&((*Global_1934182)[iParam0]->f_8[iVar0])))
			{
				func_53(&((*Global_1934182)[iParam0]->f_8[iVar0]), 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_174(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 - (Global_1934182->f_74 && iParam0));
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	(*Global_1934182)[iParam0]->f_8[iParam1] = func_134(iParam2, network_is_in_session(), 0);
}

int func_176()
{
	return Global_1894899->f_2;
}

bool func_177(int iParam0)
{
	if (!func_336(iParam0))
	{
		return false;
	}
	return (!func_337() || is_bit_set(Global_40.f_7854, iParam0));
}

int func_178(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

bool func_179(int iParam0)
{
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_338(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_180(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_181(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_182(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_183(int iParam0, int iParam1)
{
	return func_199(iParam0, iParam1, 4, get_hash_key(func_339(iParam1)));
}

void func_184(int iParam0, int iParam1)
{
	if (!func_181(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_185(int iParam0)
{
	return func_340(iParam0) == 0;
}

bool func_186(int iParam0)
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
		iVar0 = func_341(iParam0);
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

int func_187(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_185(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_188(iParam0);
		if (iVar2 >= 0)
		{
			func_342(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_343(iVar1, 1);
			func_342(iParam0, 1);
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
		iVar2 = func_188(iParam0);
		if (iVar2 >= 0)
		{
			func_342(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_344(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_343(iVar0, 1);
					func_342(iParam0, 1);
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

void func_190(int iParam0)
{
	func_345(Global_1935369->f_5[iParam0]->f_6, 1);
	func_346(Global_1935369->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
		Global_1935369->f_5[iParam0]->f_8 = 0;
	}
	func_347(iParam0, 8192);
	func_347(iParam0, 16384);
	func_347(iParam0, 32768);
	func_347(iParam0, 131072);
	func_347(iParam0, 16777216);
	func_347(iParam0, 524288);
	func_347(iParam0, 1048576);
	Global_1935369->f_5[iParam0]->f_10 = 0;
	Global_1935369->f_5[&Global_1935369]->f_9 = 0;
	Global_1935369->f_5[iParam0] = 0;
	Global_1935369->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1935369->f_5[iParam0]->f_4 = 0;
	Global_1935369->f_5[iParam0]->f_5 = -1;
	Global_1935369->f_5[iParam0]->f_6 = -1;
	Global_1935369->f_5[iParam0]->f_7 = 0;
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0, int iParam1)
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
			Jump @2110; //curOff = 1419
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			Jump @2110; //curOff = 1440
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
			Jump @2110; //curOff = 1616
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
			Jump @2110; //curOff = 1693
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
			Jump @2110; //curOff = 1766
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			Jump @2110; //curOff = 1788
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
			Jump @2110; //curOff = 1832
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			Jump @2110; //curOff = 1854
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			Jump @2110; //curOff = 1876
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			Jump @2110; //curOff = 1898
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
			Jump @2110; //curOff = 1964
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			Jump @2110; //curOff = 1997
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			Jump @2110; //curOff = 2019
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
			Jump @2110; //curOff = 2063
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			Jump @2110; //curOff = 2085
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			return -1;
		}

Vector3 func_193(int iParam0)
{
	if (!func_211(iParam0))
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

Vector3 func_194(int iParam0)
{
	if (!func_211(iParam0))
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

bool func_195(int iParam0, int iParam1)
{
	return func_242(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

void func_196(int iParam0)
{
	if (func_148(Global_1914319->f_3[iParam0]->f_21) && func_348(Global_1914319->f_3[iParam0]->f_21))
	{
		func_349(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_350(Global_1914319->f_3[iParam0]->f_10, 0);
	func_206(iParam0, 536870912);
	iVar1 = func_208(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_304(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_351(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_352(iParam0, 0);
}

int func_197(int iParam0)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_353())
	{
		iVar2 = func_353();
	}
	iVar5 = func_354(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_355(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_355(iVar6) == 0)
			{
				return func_356(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_355(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_355(iVar6) == 0)
			{
				return func_356(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_356(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_200(int iParam0)
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

bool func_201(int iParam0, int iParam1)
{
	if (func_195(iParam0, 16384) && !func_357(iParam0, 1))
	{
		return true;
	}
	if (!func_148(iParam1))
	{
		return false;
	}
	iVar0 = func_227(iParam1);
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
		func_85(iParam1, Global_1914319->f_3[iParam0]->f_25, 1);
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
		func_85(iParam1, Global_1914319->f_3[iParam0]->f_28, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_28, 0, 1);
	}
	Global_1914319->f_3[iParam0]->f_21 = iParam1;
	Global_1914319->f_3[iParam0]->f_23 = iVar0;
	return true;
}

void func_202(int iParam0)
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
			if (!func_358(29))
			{
				if (func_359(29) && func_360() <= func_361(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_358(3))
			{
				if (func_359(3) && func_360() <= func_361(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_358(25))
			{
				if (func_359(25) && func_360() <= func_361(25))
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

void func_203()
{
	StringCopy(Global_1393529->f_288[18], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_204()
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

void func_205(int iParam0)
{
	if (!func_211(iParam0))
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
			if (!func_362(iParam0, 2))
			{
				func_213(iParam0, 2);
			}
			break;
	}
}

void func_206(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_207(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

int func_208(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_210(int iParam0)
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

bool func_211(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_212(int iParam0, int iParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_213(int iParam0, int iParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_214(int iParam0)
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

void func_215(int iParam0, bool bParam1)
{
	if (!func_267(iParam0))
	{
		return;
	}
	if ((bParam1 && func_363(iParam0, 512)) || (!bParam1 && !func_363(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_207(iParam0, 512);
	}
	else
	{
		func_206(iParam0, 512);
	}
	if (func_364(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_216(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_227(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_155(iParam0));
}

bool func_217(char* sParam0)
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

bool func_218(int iParam0)
{
	if (((((!(func_132(iParam0, 8) || func_132(iParam0, 2)) || !func_366(Global_35, func_365(iParam0), 1, 0)) || !func_102(iParam0)) || func_367()) || Global_1934266->f_56) || ((iParam0 != 38 || func_57(45)) && (func_23(1, 0) || func_23(8, 0))))
	{
		return false;
	}
	return true;
}

void func_219(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_368(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_217(&(Param0.f_10)))
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
			func_369(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_221(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	if ((Global_1898164->f_163 && !func_373(iParam0, 1)) || func_286(32768))
	{
		if (!func_373(iParam0, 262144) || !Global_1905944->f_5696)
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

void func_222(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_223(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_224(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_225(int iParam0)
{
	return iParam0 != 0;
}

int func_226(int iParam0, int iParam1)
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

int func_227(int iParam0)
{
	iVar0 = func_155(iParam0);
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

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return func_242(Global_40.f_9829[iParam0]->f_2, iParam1);
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_209(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), func_375(iParam0, iParam1), 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	func_219(Var10, 0);
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_376(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

Vector3 func_232(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _0x5ee6fccc9c832ca2(func_155(iParam0));
}

bool func_233(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (!func_154(func_153(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		func_171(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_216(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_377(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_146(vVar0))
	{
		_0x59c7ad6fea2ac449(func_155(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_155(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_155(iParam0), 0);
	}
	if (!func_146(vVar0))
	{
		_0xbb68908cd11aebdc(func_155(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return true;
	}
	return false;
}

bool func_234()
{
	if (func_20() == -1)
	{
		return true;
	}
	return can_register_mission_objects(1);
}

float func_235(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_236()
{
	if (Local_22 != 0)
	{
		request_anim_dict(Local_22.f_6);
		request_model(Local_22, false);
		Local_22.f_16 = 1;
	}
}

bool func_237()
{
	if (!is_string_null_or_empty(Local_22.f_6))
	{
		return has_anim_dict_loaded(Local_22.f_6);
	}
	return true;
}

bool func_238()
{
	if (Local_22.f_5 <= 0)
	{
		return false;
	}
	iVar1 = func_239();
	iVar2 = func_240(iVar1);
	iVar3 = func_282(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_22.f_5 - 1))
	{
		iVar4 = func_240(&(Local_22.f_1[iVar0]));
		iVar5 = func_282(&(Local_22.f_1[iVar0]));
		if (iVar4 == iVar2 && absi((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_239()
{
	return &Global_1899515;
}

int func_240(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_241(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_playing_anim(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = _get_entity_anim_current_time(iParam0, sParam1, sParam2);
	return absf(((1f - fVar0) - fParam3)) < 0.01f;
}

bool func_242(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_243(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 1:
			func_378(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((func_379(2, 2) || func_379(1, 2)) || func_379(0, 2))
			{
				uParam0->f_4 = { get_offset_from_entity_in_world_coords(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (func_380(uParam0))
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
				uParam0->f_3 = func_381();
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
						uParam0->f_1 = func_382(uParam0->f_3, uParam0->f_4, get_entity_heading(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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
							if (!func_383(uParam0->f_1))
							{
								if (func_384() && func_385(uParam0->f_1, 1))
								{
									if (func_386(uParam0, uParam0->f_15))
									{
										set_ped_reset_flag(uParam0->f_1, 49, true);
										set_ped_reset_flag(uParam0->f_1, 184, true);
										set_ped_config_flag(uParam0->f_1, 130, false);
										set_ped_config_flag(uParam0->f_1, 315, false);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 3, 2, 1);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 4, 2, 1);
										_0xa3db37edf9a74635(player_id(), uParam0->f_1, 7, 1, 0);
										func_387(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!func_388(&(uParam0->f_12)))
								{
									func_389(&(uParam0->f_12), 1);
								}
								else if (func_390(&(uParam0->f_12)) > 15f)
								{
									func_387(&(uParam0->f_12));
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
								if (!func_388(&(uParam0->f_12)))
								{
									func_389(&(uParam0->f_12), 1);
								}
								else if (func_390(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!func_391(1))
								{
									if (does_entity_exist(uParam0->f_1))
									{
										task_look_at_entity(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!is_ped_using_any_scenario(uParam0->f_1))
										{
											task_turn_ped_to_face_entity(uParam0->f_1, Global_35, -1, -1082130432, -1082130432, -1082130432);
										}
										if (func_386(uParam0, uParam0->f_18))
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
									if (func_383(uParam0->f_1))
									{
										func_392(1, 1, 1);
									}
									if (!func_391(1))
									{
										iVar1 = _find_closest_active_scenario_point_of_type(func_393(), 1996775727, 3f, 1, false);
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
										func_394(&(uParam0->f_1), 1, 0, 1);
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
									func_387(&(uParam0->f_12));
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

void func_244(var uParam0)
{
	if ((*uParam0)[iLocal_184]->f_29 == 1)
	{
		if (func_395((*uParam0)[iLocal_184], 1, 1))
		{
			func_396((*uParam0)[iLocal_184]);
		}
	}
	iLocal_184++;
	if (iLocal_184 >= 6)
	{
		iLocal_184 = 0;
	}
}

bool func_245(var uParam0)
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

bool func_246(var uParam0)
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

bool func_247(var uParam0)
{
	iVar0 = _0x112ddf56300bc6e5(func_153(uParam0->f_1));
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

bool func_248(var uParam0)
{
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_11))
	{
		func_397(uParam0->f_13, 3f, 1, 0);
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

bool func_249(var uParam0)
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

void func_250(var uParam0)
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

bool func_251(var uParam0)
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

bool func_252(var uParam0)
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

bool func_253(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_398(uParam0, iParam1))
	{
		return false;
	}
	if (func_261(uParam0, 5) || bParam3)
	{
		sVar0 = func_399(iParam1);
		if (func_400(uParam0, sVar0))
		{
			if (!bParam2)
			{
				func_401(uParam0, iParam1);
			}
			func_387(&(uParam0->f_18));
			return true;
		}
	}
	return false;
}

void func_254(var uParam0, bool bParam1)
{
	if (!does_entity_exist(uParam0->f_4) || func_269(uParam0->f_4, 0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_155(uParam0->f_3);
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
		iVar2 = func_155(uParam0->f_3);
		if (_0x800df3fc913355f3(iVar2) && !_0xeb98b38ca60742d7(iVar2))
		{
			clear_ped_tasks(uParam0->f_4, 1, 0);
			_0xa2b18ff8d39f6d87(iVar2);
			task_persistent_character(uParam0->f_4);
		}
	}
}

int func_255(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_256(int iParam0, int iParam1)
{
	if (is_entity_in_volume(iParam0, iParam1, true, 0))
	{
		return is_ped_shooting(get_ped_index_from_entity_index(iParam0));
	}
	return false;
}

bool func_257(var uParam0)
{
	if (-1829635046 == func_402(81053684))
	{
		if (func_403(uParam0))
		{
			return true;
		}
	}
	else if (func_404(-525676072, uParam0))
	{
		if (func_403(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_258(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_405(bParam1, bParam2, bParam3);
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

void func_259(var uParam0)
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

bool func_260(var uParam0)
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

bool func_261(var uParam0, int iParam1)
{
	if (func_406(uParam0->f_4))
	{
		return false;
	}
	if (!func_388(&(uParam0->f_18)))
	{
		func_389(&(uParam0->f_18), 1);
	}
	if (iParam1 < 0)
	{
		return true;
	}
	if (func_390(&(uParam0->f_18)) > IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_262(int iParam0)
{
	if (func_407())
	{
		return false;
	}
	return func_408((*Global_1347702)[58]->f_15, 1);
}

bool func_263(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_264(var uParam0, int iParam1)
{
	func_376(&(uParam0->f_16), iParam1);
}

void func_265(var uParam0)
{
	uParam0->f_16 = 1;
}

void func_266(int iParam0)
{
	iVar0 = func_155(iParam0);
	if (!func_82())
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
	else if (!func_305(iParam0, 32))
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

bool func_267(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_268(int iParam0)
{
	return iParam0;
}

bool func_269(int iParam0, bool bParam1)
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

int func_270(int iParam0)
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

int func_271(int iParam0)
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

bool func_272(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_407())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_273()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_409())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_308(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_410(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_412(func_411(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_413(iParam0) || func_57(45))
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

bool func_275(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_276(int iParam0)
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

int func_277(int iParam0)
{
	if (!func_275(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_278(int iParam0)
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

char* func_279(int iParam0)
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

bool func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0, int iParam1)
{
	if (!func_275(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

int func_282(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_283(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_284(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_414(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_285(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_286(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_287(int iParam0)
{
	if (func_413(iParam0))
	{
		if (!func_57(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_337())
	{
		if (!func_408((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_289(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_291(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_292(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_293()
{
	return Global_1310750->f_16037;
}

bool func_294(int iParam0, int iParam1)
{
	if (!func_291(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_295(int iParam0)
{
	if (!func_291(iParam0))
	{
		return false;
	}
	if (func_415(64) && func_416(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_296(int iParam0)
{
	if (!func_291(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_297(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_291(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_417(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_298(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_102(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_102(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_20() != -1)
			{
				return 1624541293;
			}
			if (func_57(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_20() != -1)
			{
				return 1024208566;
			}
			if (func_57(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_20() != -1)
			{
				return 965626876;
			}
			if (func_408((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_20() != -1)
			{
				return -497792649;
			}
			if (func_408((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_57(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_122())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_20() != -1)
			{
				return -1990305778;
			}
			if (func_57(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_418(iParam0);
		if (iVar0 != -1)
		{
			return func_419(iVar0, bParam1);
		}
	}
	return 0;
}

void func_299(int iParam0)
{
	if ((((Global_1934266->f_26 == iParam0 || iParam0 == 0) || (iParam0 == 305496830 && Global_1934266->f_26 == -1482428221)) || (iParam0 == -1323821455 && Global_1934266->f_26 == -1994249944)) || Global_1934266->f_26 == 0)
	{
		iVar0 = func_114();
		func_420(func_419(iVar0, 1), -1);
	}
}

void func_300(var uParam0, bool bParam1)
{
	if (func_421(uParam0->f_1))
	{
		func_422(uParam0->f_1);
	}
	if (does_blip_exist(uParam0->f_9) && bParam1)
	{
		remove_blip(&(uParam0->f_9));
	}
	if (func_423(uParam0->f_8))
	{
		func_424(&(uParam0->f_8), 1, 1);
	}
}

void func_301()
{
	if (does_entity_exist(Local_22.f_17))
	{
		if (is_entity_playing_anim(Local_22.f_17, Local_22.f_6, Local_22.f_7, 1))
		{
			stop_entity_anim(Local_22.f_17, Local_22.f_6, Local_22.f_7, -1000f);
		}
		if (is_entity_playing_anim(Local_22.f_17, Local_22.f_6, Local_22.f_8, 1))
		{
			stop_entity_anim(Local_22.f_17, Local_22.f_6, Local_22.f_8, -1000f);
		}
		if (is_entity_playing_anim(Local_22.f_17, Local_22.f_6, Local_22.f_9, 1))
		{
			stop_entity_anim(Local_22.f_17, Local_22.f_6, Local_22.f_9, -1000f);
		}
	}
	if (Local_22.f_16)
	{
		if (has_anim_dict_loaded(Local_22.f_6))
		{
			remove_anim_dict(Local_22.f_6);
		}
		Local_22.f_16 = 0;
	}
	if (Local_22.f_18 != 0)
	{
		_0xd2b9c78537ed5759(Local_22.f_18);
	}
}

void func_302()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_388(&(Local_185[iVar0]->f_34)))
		{
			func_387(&(Local_185[iVar0]->f_34));
		}
		func_425(Local_185[iVar0]->f_38);
		func_425(Local_185[iVar0]->f_39);
		iVar0++;
	}
}

int func_303(int iParam0)
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

void func_304(int iParam0)
{
	if (func_135(iParam0) && func_426())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_305(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_306(int iParam0, bool bParam1)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (!func_305(iParam0, 2))
	{
		return 0;
	}
	if (func_153(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_155(iParam0)))
	{
		return 1;
	}
	if (func_305(iParam0, 1) && !bParam1)
	{
		func_427(iParam0, 128);
		return 1;
	}
	func_332(iParam0, 129);
	func_428(iParam0);
	_0xfc77c5b44d5ff7c0(func_155(iParam0));
	func_331(iParam0, 0);
	return 1;
}

bool func_307(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_308(int iParam0, bool bParam1, bool bParam2)
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
		if (func_429())
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
		iVar0 = func_430(&(Global_1898164->f_1[0]));
		if (func_431(iVar0) && func_432((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_344(&(Global_1898164->f_1[0])))
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

void func_309(int iParam0, bool bParam1)
{
	if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23) && is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
	{
		return;
	}
	if (func_308(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_433(238680582, bParam1);
			break;
		case 9:
			func_433(1555588463, bParam1);
			func_433(1275780106, bParam1);
			func_433(-833560428, bParam1);
			func_433(-1601174253, bParam1);
			func_433(-1295111793, bParam1);
			break;
		case 11:
			func_433(-1482639045, bParam1);
			break;
		case 10:
			func_433(254520182, bParam1);
			break;
		case 12:
			func_433(1997650502, bParam1);
			break;
		case 13:
			func_433(1335986638, bParam1);
			break;
		case 14:
			func_433(1407130373, bParam1);
			break;
		case 16:
			func_433(-1335647241, bParam1);
			break;
		case 15:
			func_433(1731691513, !func_359(70));
			break;
	}
}

void func_310(int iParam0)
{
	if (!func_307(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = 0;
}

void func_311(int iParam0, int iParam1)
{
	if (!func_307(iParam0))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_20 = iParam1;
}

bool func_312(int iParam0)
{
	return iParam0 != 0;
}

int func_313(int iParam0, int iParam1)
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

int func_314(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

void func_315(int iParam0, int iParam1)
{
	iVar0 = func_316(*iParam0);
	iVar1 = func_318(*iParam0);
	if (iParam1 < 1 || iParam1 > func_434(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

int func_316(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

void func_317(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

int func_318(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_435(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

void func_319(int iParam0, int iParam1)
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

int func_320(var uParam0)
{
	iVar0 = 5;
	switch (uParam0->f_3)
	{
		case 1255849914:
			if (func_436(9) && func_437(38, iVar0, 2, 1))
			{
				StringCopy(&(uParam0->f_15), "SCVB_0050A", 24);
				StringCopy(&(uParam0->f_18), "SCVB_0050B", 24);
				uParam0->f_7 = "SALOON_0050";
				return 1;
			}
			break;
		case -787683245:
			if (func_437(38, iVar0, 4, 1))
			{
				StringCopy(&(uParam0->f_15), "SCVB_0928A", 24);
				StringCopy(&(uParam0->f_18), "SCVB_0928B", 24);
				uParam0->f_7 = "SALOON_0928";
				return 1;
			}
			if (func_437(38, iVar0, 8, 1))
			{
				StringCopy(&(uParam0->f_15), "SCVB_0929A", 24);
				StringCopy(&(uParam0->f_18), "SCVB_0929B", 24);
				uParam0->f_7 = "SALOON_0929";
				return 1;
			}
			break;
		case 1536283262:
			if (func_437(38, iVar0, 16, 1))
			{
				StringCopy(&(uParam0->f_15), "SCVB_0945A", 24);
				StringCopy(&(uParam0->f_18), "SCVB_0945B", 24);
				uParam0->f_7 = "SALOON_0945";
				return 1;
			}
			break;
	}
	return 0;
}

int func_321(var uParam0, int iParam1)
{
	if ((iParam1 == 1255849914 || iParam1 == -787683245) || iParam1 == 1536283262)
	{
		uParam0->f_3 = iParam1;
		return 1;
	}
	return 0;
}

void func_322(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	(*uParam0)[iParam3]->f_25 = 64f;
	(*uParam0)[iParam3]->f_26 = 16f;
	(*uParam0)[iParam3]->f_20 = iParam3;
	func_438((*uParam0)[iParam3]);
	(*uParam0)[iParam3] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(*uParam0)[iParam3]->f_3[iVar0] = iParam2[iVar0];
			iVar0++;
		}
		func_325((*uParam0)[iParam3], 128);
	}
	if (!func_388(&((*uParam0)[iParam3]->f_34)))
	{
		func_389(&((*uParam0)[iParam3]->f_34), 1);
	}
	func_325((*uParam0)[iParam3], 32768);
	func_325((*uParam0)[iParam3], 1024);
	(*uParam0)[iParam3]->f_29 = 1;
	(*uParam0)[iParam3]->f_21 = -1;
}

Vector3 func_323(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_439("");
	}
	if (!func_440(uParam0, 4))
	{
		func_325(uParam0, 4);
		uParam0->f_21 = -1;
		return func_439("BWRGN_MEPLYR");
	}
	if (uParam0->f_21 < 0)
	{
		return func_439("");
	}
	switch (uParam0->f_21)
	{
		case 0:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return func_439("BWRGN_MEGS1");
				case 1:
					return func_439("BWRGN_MEGS2");
				case 2:
					return func_439("BWRGN_MEGS3");
				case 3:
					return func_439("BWRGN_MEGS4");
				case 4:
					return func_439("BWRGN_MEGS5");
				default:
					break;
			}
			break;
		case 1:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return func_439("BWRGN_METRN1");
				case 1:
					return func_439("BWRGN_METRN2");
				case 2:
					return func_439("BWRGN_METRN3");
				case 3:
					return func_439("BWRGN_METRN4");
				case 4:
					return func_439("BWRGN_METRN5");
				default:
					break;
			}
			break;
	}
	return func_439("");
}

char* func_324(int iParam0)
{
	switch (iParam0)
	{
		case 508:
			return "BLW_Bartender";
		case 522:
			return "BLW_Train_Worker";
		case 513:
			return "BLW_General_Store";
		case 509:
			return "BLW_Police_Chief";
		case 526:
			return "0825_LIVERY";
		case 514:
			return "BLW_Photographer";
		default:
			break;
	}
	return "";
}

void func_325(var uParam0, int iParam1)
{
	func_209(&(uParam0->f_19), iParam1);
}

Vector3 func_326(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_439("");
	}
	if (func_440(uParam0, 4))
	{
		return func_439("");
	}
	iVar1 = 0;
	if (func_441(uParam0, 38, iVar1, 4, 76))
	{
		return func_439("BWRGN_GEN_FIN2");
	}
	if (func_441(uParam0, 38, iVar1, 2, 59))
	{
		return func_439("BWRGN_GEN_FIN1");
	}
	if (func_441(uParam0, 38, iVar1, 64, 71))
	{
		return func_439("BWRGN_GEN_SAD4");
	}
	if (func_442(uParam0, 38, iVar1, 128, 9))
	{
		return func_439("BWRGN_GEN_BCH1");
	}
	if (func_441(uParam0, 38, iVar1, 32, 74))
	{
		return func_439("BWRGN_GEN_MAR7B");
	}
	if (func_441(uParam0, 38, iVar1, 16, 74))
	{
		return func_439("BWRGN_GEN_MAR7A");
	}
	if (func_441(uParam0, 38, iVar1, 8, 64))
	{
		return func_439("BWRGN_GEN_LAR1");
	}
	if (uParam0->f_21 < 0)
	{
		return func_439("");
	}
	return func_439("");
}

Vector3 func_327(var uParam0)
{
	if (func_440(uParam0, 4))
	{
		return func_439("");
	}
	iVar0 = 4;
	if (func_441(uParam0, 38, iVar0, 128, 59))
	{
		return func_439("BWRGN_TSW_FIN1A");
	}
	if (func_441(uParam0, 38, iVar0, 128, 59))
	{
		return func_439("BWRGN_TSW_FIN1B");
	}
	if (func_441(uParam0, 38, iVar0, 128, 59))
	{
		return func_439("BWRGN_TSW_FIN1C");
	}
	if (func_441(uParam0, 38, iVar0, 128, 64))
	{
		return func_439("BWRGN_TSW_LAR1");
	}
	if (func_441(uParam0, 38, iVar0, 128, 74))
	{
		return func_439("BWRGN_TSW_MAR7");
	}
	if (func_441(uParam0, 38, iVar0, 128, 69))
	{
		return func_439("BWRGN_TSW_MAR7");
	}
	if (func_442(uParam0, 38, iVar0, 256, 9))
	{
		return func_439("BWRGN_GEN_BCH1");
	}
	if (uParam0->f_21 < 0)
	{
		return func_439("");
	}
	return func_439("");
}

Vector3 func_328(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_439("");
	}
	if (func_440(uParam0, 4))
	{
		return func_439("");
	}
	if (func_443(38, 2, 8))
	{
		return func_439("");
	}
	iVar1 = 6;
	if (func_407())
	{
		if (func_436(2))
		{
			if (!func_443(38, iVar1, 2))
			{
				func_325(uParam0, 4);
				uParam0->f_21 = -1;
				func_444(38, iVar1, 2);
				return func_439("BWRGB_PHOTO1");
			}
			else if (!func_443(38, iVar1, 4))
			{
				func_325(uParam0, 4);
				uParam0->f_21 = -1;
				func_444(38, iVar1, 4);
				return func_439("BWRGB_PHOTO2");
			}
			else
			{
				func_444(38, iVar1, 8);
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_439("");
	}
	return func_439("");
}

Vector3 func_329(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_439("");
	}
	sVar1 = func_445(uParam0, "BWRGN_LIVSICK_1", "BWRGN_LIVSICK_2", "BWRGN_LIVSICK_3");
	if (!is_string_null_or_empty(sVar1))
	{
		return func_439(sVar1);
	}
	return func_439("");
}

Vector3 func_330(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_439("");
	}
	if (uParam0->f_21 < 0)
	{
		return func_439("");
	}
	switch (uParam0->f_21)
	{
		case 0:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return func_439("BWRGN_MESLN1");
				case 1:
					return func_439("BWRGN_MESLN2");
				case 2:
					return func_439("BWRGN_MESLN3");
				case 3:
					return func_439("BWRGN_MESLN4");
				case 4:
					return func_439("BWRGN_MESLN5");
				default:
					break;
			}
			break;
	}
	return func_439("");
}

void func_331(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_332(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_148(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_333(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (!func_305(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_334(int iParam0, bool bParam1)
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
				if (func_160(-1741667789))
				{
					func_157(-1741667789);
				}
			}
			else if (!func_160(-1741667789))
			{
				func_156(-1741667789);
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
			if (func_160(-1799960545))
			{
				func_157(-1799960545);
			}
		}
		else if (!func_160(-1799960545))
		{
			func_156(-1799960545);
		}
	}
}

bool func_335(int iParam0)
{
	func_134(iParam0, 0, 0);
	if (func_135(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

bool func_336(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_337()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_338(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

char* func_339(int iParam0)
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

int func_340(int iParam0)
{
	if (!func_344(iParam0))
	{
		return -1;
	}
	return func_341(iParam0);
}

int func_341(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_446(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_342(int iParam0, bool bParam1)
{
	if (!func_344(iParam0))
	{
		return;
	}
	if (!func_185(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_447(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_447(iParam0)))
		{
			_0xca41e86545413b5b(func_448(iParam0), func_430(iParam0), func_449(iParam0), func_447(iParam0), Global_36);
		}
	}
	func_450(iParam0, 1);
	bParam1 = bParam1;
}

void func_343(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_355(Global_1898330[iParam0]);
		func_451((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_344(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_345(int iParam0, bool bParam1)
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

void func_346(int iParam0, bool bParam1)
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

void func_347(int iParam0, int iParam1)
{
	func_376(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

bool func_348(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_148(iParam0))
	{
		return;
	}
	if (!func_305(iParam0, 1))
	{
		return;
	}
	if (!func_305(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_348(iParam0)) && func_452(iParam0))
	{
		return;
	}
	func_332(iParam0, 1);
	func_428(iParam0);
	if (func_154(func_153(iParam0)))
	{
		iVar0 = func_155(iParam0);
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
		func_332(iParam0, 16);
	}
	if (func_305(iParam0, 128) && !bParam3)
	{
		func_306(iParam0, 0);
	}
}

void func_350(int iParam0, bool bParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_362(iParam0, 1024))
		{
			func_213(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_362(iParam0, 1024))
	{
		func_212(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_453(iParam0);
}

void func_351(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_352(int iParam0, bool bParam1)
{
	if (!func_267(iParam0))
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

int func_353()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_354(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_355(int iParam0)
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

int func_356(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_454(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_353())
	{
		return -1;
	}
	iVar0 = func_354(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_455(iVar1, 0);
	func_456(iVar1, 0);
	func_457(iVar1, 0);
	func_458(iVar1, 0);
	func_459(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_460(iVar1, iParam4);
	}
	return iVar1;
}

bool func_357(int iParam0, int iParam1)
{
	return func_242(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

bool func_358(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_461((*Global_1835011)[iParam0]->f_1);
}

bool func_359(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_408((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_360()
{
	if (!func_408((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_408((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_408((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_408((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_408((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_408((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_408((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_361(int iParam0)
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

bool func_362(int iParam0, int iParam1)
{
	if (!func_211(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_363(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_364(int iParam0)
{
	if (func_462())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_365(int iParam0)
{
	if (!func_91(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

bool func_366(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_367()
{
	if (func_20() == -1)
	{
		if (func_110() || func_463())
		{
			return true;
		}
	}
	else if (func_464(1, 255))
	{
		return true;
	}
	return false;
}

bool func_368(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_369(int iParam0)
{
	if (func_368(iParam0, 1))
	{
		func_465(1);
	}
}

bool func_370(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_371(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_373(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_373(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_372(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_373(iParam0, 65536) && !func_373(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_373(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_373(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_373(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_374()
{
	return Global_1905944->f_5694;
}

char* func_375(int iParam0, int iParam1)
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

void func_376(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_377(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_155(iParam0)))
	{
		_0x49a8c2cd97815215(func_155(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_155(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

void func_378(var uParam0)
{
	func_387(&(uParam0->f_12));
}

bool func_379(int iParam0, int iParam1)
{
	return func_242(Global_1935369->f_5[iParam0]->f_7, iParam1);
}

bool func_380(var uParam0)
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
	iVar0 = _0x59b57c4b06531e1e(func_466(player_id()), 2.5f, iVar3, 1);
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

int func_381()
{
	switch (func_176())
	{
		case 76:
			return -1445135526;
		case 92:
			return -1445135526;
		case 5:
			if (func_467(2))
			{
				if (!func_443(5, 5, 2))
				{
					return -233934854;
				}
				if (!func_443(5, 5, 4))
				{
					return 1423490702;
				}
				return -1938511850;
			}
			else
			{
				if (!func_443(5, 5, 16))
				{
					return -2102436869;
				}
				if (!func_443(5, 5, 32))
				{
					return -1436795223;
				}
				return -1990962020;
			}
			break;
		case 120:
			return -813796418;
		case 115:
			if (!func_443(115, 5, 2))
			{
				return 966958492;
			}
			return 480011144;
		case 38:
			if (!func_443(38, 5, 2) && func_436(9))
			{
				return 1255849914;
			}
			if (!func_443(38, 5, 16))
			{
				return 1536283262;
			}
			return -787683245;
		case 105:
			if (!func_443(105, 5, 4))
			{
				return 1423490702;
			}
			return 367739382;
	}
	return 0;
}

int func_382(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_468(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_383(int iParam0)
{
	if (Global_1914319->f_17371)
	{
		return true;
	}
	if (func_469(Global_35, 0))
	{
		return true;
	}
	if (func_470())
	{
		return true;
	}
	if (func_471(Global_35, iParam0, 1, 1) > 5f)
	{
		return true;
	}
	return false;
}

bool func_384()
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

bool func_385(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || func_269(iParam0, 0))
	{
		return false;
	}
	if (func_472(iParam0))
	{
		func_387(&uLocal_50);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_388(&uLocal_50))
	{
		if (func_390(&uLocal_50) < 2f)
		{
			return false;
		}
	}
	else
	{
		func_389(&uLocal_50, 0);
		return false;
	}
	return true;
}

bool func_386(var uParam0, vector3 vParam1)
{
	if (!is_string_null_or_empty(&vParam1))
	{
		func_473(&uLocal_53, uParam0->f_1, uParam0->f_7, 0);
		if (func_474(&uLocal_53, vParam1, uParam0->f_1, Global_35, 1077936128))
		{
			return true;
		}
	}
	return false;
}

void func_387(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_388(var uParam0)
{
	return func_475(*uParam0, 1);
}

void func_389(var uParam0, bool bParam1)
{
	if (bParam1 || !func_388(uParam0))
	{
		func_476(uParam0);
	}
}

float func_390(var uParam0)
{
	if (!func_388(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_477(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_478() - uParam0->f_1);
}

bool func_391(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_392(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

Vector3 func_393()
{
	switch (func_176())
	{
		case 76:
			if (func_479(2))
			{
				return -301.87f, 796.88f, 117.96f;
			}
			return -246.61f, 771.52f, 117.17f;
		case 92:
			return 3000.03f, 604.51f, 40.59f;
		case 5:
			if (func_479(2))
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

void func_394(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_395(var uParam0, bool bParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_227(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_440(uParam0, 65536) && func_480(Global_35, iVar0, 1) > 25f)
		{
			func_392(1, 1, 0);
		}
		if (func_481(uParam0, bParam2))
		{
			if (func_483(func_482()))
			{
				func_484(func_482());
			}
			func_485(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_440(uParam0, 64))
		{
			return false;
		}
		if (func_480(Global_35, iVar0, 1) < 49f)
		{
			if (func_486(uParam0, iVar0))
			{
				func_487();
				if (bParam1)
				{
					if (!func_481(uParam0, bParam2))
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

void func_396(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (is_string_null_or_empty(func_488(&vVar0)))
	{
		return;
	}
	iVar3 = func_227(*uParam0);
	if (!func_489(iVar3, 0))
	{
		return;
	}
	if (is_string_null_or_empty(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	func_473(&uLocal_53, iVar3, uParam0->f_37, 0);
	set_ped_can_use_auto_conversation_lookat(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_440(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_490())
			{
				func_473(&uLocal_53, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_473(&uLocal_53, Global_35, "JOHN", 0);
			}
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_440(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_227(&(uParam0->f_3[iVar4]));
			if (!func_489(iVar5, 0))
			{
				return;
			}
			Stack.Push(&(uParam0->f_3[iVar4]));
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			func_473(&uLocal_53, iVar5, sVar6, 0);
			set_ped_can_use_auto_conversation_lookat(iVar5, true);
			uParam0->f_3[iVar4]->f_2 = 1;
		}
	}
	bVar7 = func_440(uParam0, 16384);
	if (func_491(&uLocal_53, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_492(func_482());
		uParam0->f_30 = 1;
	}
	func_493(uParam0);
}

void func_397(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
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

bool func_398(var uParam0, int iParam1)
{
	return func_242(uParam0->f_16, iParam1);
}

char* func_399(int iParam0)
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

bool func_400(var uParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam1))
	{
		uVar0 = func_494(uParam0->f_8);
		if (func_495(uParam0->f_4, sParam1, 1541280898, 0, 1, uVar0, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_401(var uParam0, int iParam1)
{
	func_209(&(uParam0->f_16), iParam1);
}

int func_402(int iParam0)
{
	iVar0 = func_497(func_496(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_403(var uParam0)
{
	if (func_404(81053684, uParam0))
	{
		return true;
	}
	if (func_404(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_404(int iParam0, var uParam1)
{
	iVar1 = func_497(func_496(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_498(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_405(bool bParam0, bool bParam1, bool bParam2)
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

bool func_406(int iParam0)
{
	if (!does_entity_exist(iParam0) || func_269(iParam0, 0))
	{
		return true;
	}
	return is_any_speech_playing(iParam0);
}

bool func_407()
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

bool func_408(int iParam0, bool bParam1)
{
	switch (func_340(iParam0))
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

bool func_409()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

char* func_410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_411(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_499(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_412(int iParam0)
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

bool func_413(int iParam0)
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

char* func_414(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_415(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_416(int iParam0)
{
	return func_294(iParam0, Global_1310750->f_16072 | 64);
}

void func_417(int iParam0)
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

int func_418(int iParam0)
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
	else if (iParam0 <= 115)
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

int func_419(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_20() != -1)
			{
				return -1308265478;
			}
			if (func_57(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_20() != -1)
			{
				return -650528936;
			}
			if (func_57(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_20() != -1)
			{
				return -877373104;
			}
			if (func_57(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_420(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_419(func_500(Global_36), 1);
	}
	if (func_501(iParam0, iParam1))
	{
	}
}

bool func_421(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return _does_volume_exist(iParam0);
}

void func_422(struct<6> Param0, var uParam6)
{
	if (_does_volume_exist(Param0))
	{
		_delete_volume(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (does_blip_exist(Param0.f_5))
	{
		remove_blip(&(Param0.f_5));
	}
}

bool func_423(int iParam0)
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

void func_424(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_423(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_502(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_503(iVar0);
	*uParam0 = 0;
}

void func_425(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_426()
{
	return true;
}

void func_427(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_148(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_428(int iParam0)
{
	if (!func_148(iParam0))
	{
		return;
	}
	iVar0 = func_227(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_429()
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

int func_430(int iParam0)
{
	if (!func_344(iParam0))
	{
		return -1;
	}
	return func_504(func_355(iParam0));
}

bool func_431(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_432(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_433(int iParam0, bool bParam1)
{
	if (func_312(iParam0))
	{
		if (bParam1)
		{
			if (!func_505(iParam0))
			{
				func_53(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_505(iParam0))
		{
			func_506(iParam0, 1);
		}
	}
}

int func_434(int iParam0, int iParam1)
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

int func_435(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_436(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_431(iParam0))
	{
		return false;
	}
	return func_408((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_437(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_443(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_444(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

void func_438(var uParam0)
{
	uParam0->f_19 = 1;
}

Vector3 func_439(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_440(var uParam0, int iParam1)
{
	return func_242(uParam0->f_19, iParam1);
}

bool func_441(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_443(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (func_507(iParam4))
	{
		if (func_437(iParam1, iParam2, iParam3, 1))
		{
			func_325(uParam0, 4);
			return true;
		}
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_443(iParam1, iParam2, iParam3))
	{
		return false;
	}
	iVar0 = func_508(iParam4);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_509(iParam4))
	{
		if (func_436(iParam4) && func_360() <= iVar0)
		{
			if (func_437(iParam1, iParam2, iParam3, 1))
			{
				func_325(uParam0, 4);
				return true;
			}
		}
	}
	return false;
}

bool func_443(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_510(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_242(&(Global_23118.f_1651[iVar1]), iParam2);
}

void func_444(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_510(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_209(Global_23118.f_1651[iVar1], iParam2);
}

char* func_445(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	if (!func_440(uParam0, 2))
	{
		if (func_490() && !func_462())
		{
			if (func_262(0) && func_511(uParam0))
			{
				sVar0 = func_512(*Global_1393529->f_288[9]);
				switch (get_hash_key(sVar0))
				{
					case -1254791533:
						func_325(uParam0, 2);
						uParam0->f_37 = "0825_LIVERY";
						uParam0->f_21 = -1;
						return sParam1;
					case 54049583:
						uParam0->f_37 = "0826_LIVERY";
						uParam0->f_21 = -1;
						func_325(uParam0, 2);
						return sParam2;
					case 1837687839:
						uParam0->f_37 = "0827_LIVERY";
						uParam0->f_21 = -1;
						func_325(uParam0, 2);
						return sParam3;
					default:
						break;
				}
				func_204();
			}
		}
	}
	return "";
}

int func_446(int iParam0)
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

int func_447(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_448(int iParam0)
{
	if (!func_344(iParam0))
	{
		return 0;
	}
	return func_513(func_355(iParam0));
}

int func_449(int iParam0)
{
	if (!func_344(iParam0))
	{
		return -1;
	}
	return func_514(func_355(iParam0));
}

void func_450(int iParam0, int iParam1)
{
	if (!func_344(iParam0))
	{
		return;
	}
	func_455(iParam0, iParam1);
}

void func_451(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_513(iParam0);
	*uParam1 = func_504(iParam0);
	*uParam2 = func_514(iParam0);
}

bool func_452(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_453(int iParam0)
{
	func_515(func_214(iParam0));
}

bool func_454(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_455(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_516(iParam0);
	}
	else
	{
		func_517(iParam0, iParam1);
	}
	func_518();
}

void func_456(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_457(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_458(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_459(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_460(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_461(int iParam0)
{
	iVar0 = func_340(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_462()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_463()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_519(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_520())
	{
		return func_519(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_519(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_465(int iParam0)
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

Vector3 func_466(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_467(int iParam0)
{
	if (!func_521(iParam0))
	{
		return false;
	}
	iVar0 = func_522(iParam0);
	iVar1 = func_523(iParam0);
	if (!func_91(iVar0))
	{
		return false;
	}
	if (!func_524(iVar1))
	{
		return false;
	}
	if (func_176() == iVar0)
	{
		if (func_479(iVar1))
		{
			return true;
		}
	}
	return false;
}

void func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_525(iParam1))
		{
			func_526(iParam0, 41788943);
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
			func_527(iParam0, 0, 1);
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
			func_528(iParam0, 0);
			bVar0 = true;
		}
		func_529(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_469(int iParam0, int iParam1)
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

bool func_470()
{
	return Global_1310750->f_16077 != 0;
}

float func_471(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_472(int iParam0)
{
	if (((func_391(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

void func_473(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_530(uParam0, iParam1, sParam2))
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

bool func_474(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_531(uParam0, vParam1, 0, -1, 0, 0))
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

bool func_475(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_476(var uParam0)
{
	func_532(uParam0, 0f);
}

bool func_477(var uParam0)
{
	return func_475(*uParam0, 2);
}

float func_478()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_479(int iParam0)
{
	if (!func_524(iParam0))
	{
		return false;
	}
	return &(Global_1935369->f_5[iParam0]);
}

float func_480(int iParam0, int iParam1, bool bParam2)
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
	return func_533(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_481(var uParam0, bool bParam1)
{
	if (!func_148(*uParam0) && !func_216(*uParam0, 0))
	{
		return false;
	}
	if (func_534(*uParam0, 0))
	{
		return false;
	}
	iVar0 = func_227(*uParam0);
	iVar1 = func_482();
	if (func_211(iVar1))
	{
		if (func_535(iVar1))
		{
			func_536(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_537(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_214(iVar1);
		iVar3 = func_538(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_536(uParam0);
			return uParam0->f_30;
		}
		if (func_539(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319->f_17371 || func_540(func_227(*uParam0), 1, 1, 1, 0)) || _is_ped_hogtied(func_227(*uParam0)))
	{
		func_536(uParam0);
		return uParam0->f_30;
	}
	if ((((func_258(player_id(), 1, 0, 1) || func_541()) || _0xf46108c50a22b029()) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id()))
	{
		return false;
	}
	if (Global_1914319->f_3[uParam0->f_24]->f_411)
	{
		return false;
	}
	if (func_469(Global_35, 0))
	{
		func_536(uParam0);
		return uParam0->f_30;
	}
	if (func_470())
	{
		if (func_542(101))
		{
			return false;
		}
	}
	if (func_308(178, 1, 1))
	{
		return false;
	}
	if (!func_385(iVar0, func_440(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_440(uParam0, 2048) && !func_440(uParam0, 32768))
		{
			if (!func_388(&(uParam0->f_34)))
			{
				func_389(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_440(uParam0, 1024))
			{
				if (func_390(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (func_390(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_482()
{
	if (func_462())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_483(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_362(iParam0, 1073741824);
}

void func_484(int iParam0)
{
	func_212(iParam0, 1073741824);
}

void func_485(var uParam0)
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
		if (func_148(*uParam0))
		{
			iVar0 = func_227(*uParam0);
			if (does_entity_exist(iVar0))
			{
				set_ped_can_use_auto_conversation_lookat(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_148(&(uParam0->f_3[iVar1])) && uParam0->f_3[iVar1]->f_2)
			{
				iVar2 = func_227(&(uParam0->f_3[iVar1]));
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

bool func_486(var uParam0, int iParam1)
{
	if (func_440(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_227(&(uParam0->f_3[iVar0]));
			if (func_489(iVar1, 0) && func_471(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_440(uParam0, 512) && !func_440(uParam0, 256))
	{
		return true;
	}
	if (func_440(uParam0, 512))
	{
		if (func_511(uParam0))
		{
			return true;
		}
	}
	if (func_440(uParam0, 256))
	{
		if (func_543(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_487()
{
	if (func_358(5))
	{
		func_544(2);
		func_544(4);
	}
	if ((((func_358(6) || func_358(14)) || func_358(26)) || func_358(9)) || func_358(21))
	{
		func_544(4);
	}
	if (((func_509(26) || func_509(27)) || func_509(28)) || func_509(29))
	{
		func_544(4);
	}
	if (((func_545(3, 61) || func_545(3, 29)) || func_545(3, 73)) || func_545(3, 43))
	{
		func_544(4);
	}
	if (func_470())
	{
		if (func_542(101) || func_542(79))
		{
			func_544(4);
		}
		if (((((func_542(88) || func_542(89)) || func_542(108)) || func_542(98)) || func_542(106)) || func_542(110))
		{
			func_544(8);
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(717558736) > 0)
	{
		func_544(4);
	}
	if (is_thread_active((*Global_1396257)[16]->f_635, false) || is_thread_active((*Global_1396257)[13]->f_635, false))
	{
		func_544(4);
	}
}

var func_488(var uParam0)
{
	return uParam0;
}

bool func_489(int iParam0, int iParam1)
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
	if (func_546(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_546(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_546(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_546(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_546(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_546(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_546(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_546(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_490()
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

bool func_491(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_531(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = uParam0[0];
		iVar1 = uParam0[1];
		if ((does_entity_exist(iVar0) && !func_269(iVar0, 0)) && (does_entity_exist(iVar1) && !func_269(iVar1, 0)))
		{
			if (!func_146(vParam4))
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

void func_492(int iParam0)
{
	func_213(iParam0, 1073741824);
}

void func_493(var uParam0)
{
	func_389(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_547() };
	uParam0->f_21 = -1;
	if (func_440(uParam0, 16384))
	{
		func_548(uParam0, 16384);
	}
	func_548(uParam0, 32768);
	func_548(uParam0, 1024);
	func_387(&uLocal_50);
	if (func_440(uParam0, 4096))
	{
		iVar0 = func_192(func_176(), uParam0->f_24);
		iVar1 = func_227(*uParam0);
		if (func_537(iVar0) && func_385(iVar1, 1))
		{
			func_549(iVar0, 0);
			func_548(uParam0, 8192);
			func_548(uParam0, 4096);
		}
	}
}

var func_494(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_495(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
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
	return func_550(iParam0, &Var0);
}

int func_496(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_551(iVar0);
}

int func_497(int iParam0, int iParam1)
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

int func_498(int iParam0)
{
	if (!func_552(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_499(vector3 vParam0, int iParam3)
{
	func_553(iParam3, &vVar0, &Var3, &uVar6);
	if (func_554(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_500(vector3 vParam0)
{
	return func_555(_get_map_zone_at_coords(vParam0, 10));
}

bool func_501(int iParam0, int iParam1)
{
	if (Global_1934266->f_26 != iParam0)
	{
		Global_1934266->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_275(iParam1))
		{
			iVar0 = func_556(iParam0);
		}
		if (!func_275(iVar0))
		{
			iVar0 = func_276(func_500(Global_36));
		}
		if (!func_275(iVar0))
		{
			return false;
		}
		_0x4752f68eb7f2d280(player_id(), Global_1934266->f_26, func_557(iVar0));
		return true;
	}
	return false;
}

int func_502(var uParam0)
{
	return uParam0;
}

void func_503(int iParam0)
{
	if (!func_558(iParam0))
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

int func_504(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_505(int iParam0)
{
	func_134(iParam0, 0, 0);
	if (func_135(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

void func_506(int iParam0, int iParam1)
{
	func_53(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_507(int iParam0)
{
	iVar0 = func_361(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_358(iParam0) && func_359(iParam0))
	{
		if (func_360() <= iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_508(int iParam0)
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

bool func_509(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_431(iParam0))
	{
		return false;
	}
	return func_461((*Global_1347702)[iParam0]->f_15);
}

int func_510(int iParam0)
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

bool func_511(var uParam0)
{
	iVar0 = func_227(*uParam0);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		if (func_480(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

char* func_512(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_513(int iParam0)
{
	return iParam0 & 31;
}

int func_514(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_515(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_516(int iParam0)
{
	iVar0 = func_446(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_559(iVar0);
}

int func_517(int iParam0, int iParam1)
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
			func_560(iVar2);
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

void func_518()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_519(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_520()
{
	return Global_1109400->f_245;
}

bool func_521(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

int func_522(int iParam0)
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

int func_523(int iParam0)
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

bool func_524(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0)
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

void func_526(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_561(iParam0, iParam1))
		{
			if (func_562(iParam0, iParam1))
			{
				if (func_563(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_564(iParam0);
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

void func_527(int iParam0, int iParam1, bool bParam2)
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

void func_528(int iParam0, bool bParam1)
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

void func_529(int iParam0, int iParam1)
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

bool func_530(var uParam0, int iParam1, char* sParam2)
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

bool func_531(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_565(vParam1, uParam0);
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

void func_532(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_478() - fParam1);
	func_566(uParam0, 1);
	func_567(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_533(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_534(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	if (!func_348(iParam0) && bParam1)
	{
		return false;
	}
	return func_305(iParam0, 1);
}

bool func_535(int iParam0)
{
	if (!func_211(iParam0))
	{
		return false;
	}
	return func_242(&(Global_1914319->f_18594[iParam0]), 2);
}

void func_536(var uParam0)
{
	iVar0 = func_482();
	if (!func_211(iVar0))
	{
		return;
	}
	if (func_483(iVar0) && func_391(1))
	{
		func_392(1, 0, 1);
	}
	func_325(uParam0, 64);
}

bool func_537(int iParam0)
{
	return func_362(iParam0, 67108864);
}

int func_538(int iParam0)
{
	if (!func_106(iParam0, &iVar0))
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

bool func_539(int iParam0)
{
	if (!func_267(iParam0))
	{
		return false;
	}
	return func_363(iParam0, 8388608);
}

int func_540(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_568(iVar0, 0)))
		{
			if (func_569(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_541()
{
	if (_is_ped_carrying(Global_35) || func_570(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_542(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_543(int iParam0, var uParam1)
{
	if (_does_volume_exist(uParam1->f_38))
	{
		if (func_366(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (_does_volume_exist(uParam1->f_39))
	{
		if (func_366(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_544(int iParam0)
{
	func_209(&uLocal_49, iParam0);
}

bool func_545(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return false;
	}
	if (func_571(iParam1))
	{
		return false;
	}
	return func_362(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_546(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_547()
{
	return 0f, 0f, 0f;
}

void func_548(var uParam0, int iParam1)
{
	func_376(&(uParam0->f_19), iParam1);
}

void func_549(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_537(iParam0))
		{
			func_213(iParam0, 67108864);
		}
	}
	else if (func_537(iParam0))
	{
		func_212(iParam0, 67108864);
	}
}

bool func_550(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_551(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_572(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_552(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_553(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_554(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

bool func_558(int iParam0)
{
	return func_573(iParam0, 2);
}

int func_559(int iParam0)
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

int func_560(int iParam0)
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

bool func_561(int iParam0, int iParam1)
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

bool func_562(int iParam0, int iParam1)
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

bool func_563(int iParam0, int iParam1)
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
	if (!func_561(iParam0, iVar0))
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

void func_564(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_565(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_566(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_567(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_568(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_569(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_570(int iParam0)
{
	return (func_574(iParam0, 4) || func_574(iParam0, 5));
}

bool func_571(int iParam0)
{
	bVar0 = func_362(iParam0, 256);
	return bVar0;
}

int func_572(int iParam0, int iParam1)
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

bool func_573(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_574(int iParam0, int iParam1)
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

