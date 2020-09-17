void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_120 = -1;
	iLocal_170 = -1;
	iLocal_171 = 1;
	iLocal_172 = 20000;
	iLocal_175 = vScriptParam_0.x;
	iLocal_173 = vScriptParam_0.z;
	bLocal_177 = false;
	if (Global_1901947->f_1.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_174 = get_game_timer();
	iVar0 = 0;
	while (func_4())
	{
		if (get_game_timer() > iLocal_174)
		{
			iLocal_174 = 0;
			func_5(iLocal_175, &iLocal_173);
			switch (iLocal_173)
			{
				case 0:
					if (Global_1901947->f_1.f_26 > 0)
					{
						iLocal_176 = (get_game_timer() + Global_1901947->f_1.f_26);
						iLocal_173 = 1;
					}
					else
					{
						iLocal_173 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_176 < get_game_timer())
					{
						bLocal_177 = false;
						iLocal_173 = 2;
					}
					break;
				case 2:
					func_6(iLocal_175);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_175)))
					{
						func_11(func_9(iLocal_175), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_12(iLocal_175));
					Global_1896620 = -1;
					iLocal_176 = (iLocal_172 + get_game_timer());
					iLocal_173 = 3;
					break;
				case 3:
					if (func_13() || iLocal_176 < get_game_timer())
					{
						func_14(iLocal_175);
						iLocal_176 = (iLocal_172 + get_game_timer());
						iLocal_173 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_175) || iLocal_176 < get_game_timer())
					{
						func_16(iLocal_175);
						iLocal_176 = (get_game_timer() + iLocal_172);
						iLocal_173 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_175) || iLocal_176 < get_game_timer())
					{
						func_18(iLocal_175);
						iLocal_176 = (iLocal_172 + get_game_timer());
						iLocal_173 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_175)))
					{
						if (func_19(func_9(iLocal_175), 4) && !iLocal_176 < get_game_timer())
						{
						}
						else
						{
							if (func_20(iLocal_175) || iLocal_176 < get_game_timer())
							{
								func_21(iLocal_175, 4);
								iLocal_176 = (iLocal_172 + get_game_timer());
								iLocal_173 = 8;
							}
							Jump @822; //curOff = 538
							func_22(iLocal_175);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_175);
							func_30(iLocal_175);
							func_31();
							func_32();
							iLocal_173 = 9;
							Jump @822; //curOff = 606
							func_33(iLocal_175);
							func_34();
							iLocal_173 = 10;
							Jump @822; //curOff = 623
							func_35(Global_1896674);
							func_36(iLocal_175, Global_1896674);
							iLocal_173 = 11;
							Jump @822; //curOff = 648
							func_37(iLocal_175);
							func_21(iLocal_175, 8);
							if (func_38(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_39(32);
							}
							iLocal_173 = 12;
							Jump @822; //curOff = 698
							if (func_40(iLocal_175))
							{
								iLocal_174 = get_game_timer() + 1000;
							}
							func_41(Global_1896674, iLocal_175);
							func_42(iLocal_175);
							func_21(iLocal_175, 8);
							if (func_43())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1887339)[iLocal_175]->f_11);
							if ((*Global_1887339)[iLocal_175]->f_12 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1887339)[iLocal_175]->f_12);
							}
							Jump @822; //curOff = 799
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if ((*Global_1887339)[iLocal_175]->f_13 != 0)
						{
							_0x95423627a9ca598e((*Global_1887339)[iLocal_175]->f_13);
						}
						wait(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							wait(0);
						}
						if (func_45() != -1)
						{
							func_46();
						}
						terminate_this_thread();
					}
					default:
						break;
			}
		}
	}
}

bool func_1()
{
	if (!bLocal_177)
	{
		if (&Global_1051139)
		{
			bLocal_177 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_177 = true;
			return true;
		}
		return false;
	}
	if (&Global_1051139)
	{
		return true;
	}
	if (func_48())
	{
		return true;
	}
	bLocal_177 = false;
	return false;
}

void func_2()
{
	if (func_45() != -1)
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
		while (!func_44(iVar0))
		{
			iVar0++;
			wait(0);
		}
		terminate_this_thread();
	}
}

void func_3()
{
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893587->f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893587->f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1102219->f_3977)
	{
		Global_1102219->f_3977 = 1;
	}
}

void func_8()
{
	if (!Global_1071686->f_23887)
	{
		Global_1071686->f_23887 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	(*Global_1896622)[iParam0] = (Global_1896622[iParam0] || iParam1);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			iVar0 = -34953917;
			break;
		case 87:
			iVar0 = -1182515549;
			break;
		case 74:
			iVar0 = -180439396;
			break;
		case 66:
			iVar0 = -380981263;
			break;
		case 116:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 37:
			iVar0 = 503372696;
			break;
		case 111:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 81:
			iVar0 = -379634634;
			break;
		case 98:
			iVar0 = 288297518;
			break;
		case 60:
			iVar0 = 1812404612;
			break;
		case 83:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_13()
{
	iLocal_48 = (*Global_1887339)[5]->f_5;
	_0xb469cfd9e065eb99(iLocal_48, 3);
	func_53(iLocal_48, 0, 0);
	iLocal_49 = _create_volume_box_with_custom_name(2714.648f, -1285.207f, 50.173f, 0f, 0f, 25f, 12.259f, 9.427f, 4.002f, "SDN-m_volGunsmith");
	iLocal_50 = _create_volume_box_with_custom_name(2716.798f, -1284.737f, 49.46929f, 0f, 0f, -155.898f, 3.382181f, 1.741518f, 1.678f, "SDN-m_volGunsmithPrompt");
	iLocal_51 = _create_volume_box_with_custom_name(2721.924f, -1281.781f, 49.68018f, 0f, 0f, 27.50082f, 2.604466f, 8.359895f, 3.813055f, "SDN-m_volGunsmithPorch");
	iLocal_78 = _create_volume_box_with_custom_name(2713.302f, -1287.348f, 55.73129f, 0f, 0f, -154.72f, 21.799f, 13.459f, 15.193f, "SDN-m_volGunsmithOwned");
	_0xb469cfd9e065eb99(iLocal_49, 10016);
	iLocal_52 = _create_volume_aggregate_with_custom_name("SDN - m_volGunsmithOfflimits Agg");
	_0x39816f6f94f385ad(iLocal_52, 2716.952f, -1287.544f, 49.46929f, 0f, 0f, -155.898f, 4.360659f, 1.741518f, 1.678f);
	_0x39816f6f94f385ad(iLocal_52, 2710.5f, -1287.142f, 50.21229f, 0f, 0f, 25f, 3.074021f, 9.427f, 3.163f);
	iLocal_64 = _create_volume_box_with_custom_name(2553.141f, -1164.299f, 55.07949f, 0f, 0f, -90.293f, 18.31693f, 12.58955f, 4.791f, "SDN-m_volTailorOwner");
	iLocal_65 = _create_volume_box_with_custom_name(2554.85f, -1169.459f, 53.92649f, 0f, 0f, 89.804f, 2.031777f, 3.197688f, 2.484f, "SDN-m_volTailorPrompt");
	iLocal_66 = _create_volume_box_with_custom_name(2555.342f, -1166.591f, 53.92649f, 0f, 0f, 89.804f, 1.641972f, 2.211613f, 2.484f, "SDN-m_volTailorOfflimits");
	iLocal_67 = _create_volume_aggregate_with_custom_name("SDN-m_volTailorPARENT");
	_0x6e0d3c3f828da773(iLocal_67, iLocal_64);
	_0x6e0d3c3f828da773(iLocal_67, iLocal_66);
	_0xb469cfd9e065eb99(iLocal_67, 10019);
	iLocal_56 = _create_volume_box_with_custom_name(2826.879f, -1316.782f, 47.5f, 0f, 0f, 49.75f, 17.8f, 7.231f, 6.978f, "SDN-m_volGeneralStore");
	iLocal_57 = _create_volume_box_with_custom_name(2825.75f, -1318.25f, 46.5f, 0f, 0f, 140f, 3f, 1f, 2f, "SDN-m_volGeneralStorePrompt");
	iLocal_59 = _create_volume_box_with_custom_name(2824.25f, -1319.25f, 46.25f, 0f, 0f, 140f, 4f, 1f, 1.25f, "SDN-m_volGeneralStoreOffLimits");
	_0xb469cfd9e065eb99(iLocal_56, 10014);
	iLocal_58 = _create_volume_aggregate_with_custom_name("SDN - m_volGeneralStorePorch Agg");
	_0x39816f6f94f385ad(iLocal_58, 2831.25f, -1320.236f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 6.642959f, 3.509136f);
	_0x39816f6f94f385ad(iLocal_58, 2822.573f, -1312.954f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 9.205815f, 3.509136f);
	iLocal_61 = _create_volume_box_with_custom_name(2655.185f, -1180.077f, 54.07192f, 0f, 0f, 0f, 9.196758f, 6.114635f, 3.576711f, "SDN-m_volBarberShop");
	iLocal_62 = _create_volume_box_with_custom_name(2655.359f, -1180.46f, 53.28771f, 0f, 0f, 0f, 6.583728f, 4.267162f, 2.03105f, "SDN-m_volBarberPrompt");
	iLocal_63 = _create_volume_aggregate_with_custom_name("SDN - m_volBarberPorch Agg");
	_0x39816f6f94f385ad(iLocal_63, 2661.405f, -1180.077f, 53.38316f, 0f, 0f, 0f, 2.748698f, 7.856023f, 3.576711f);
	_0x39816f6f94f385ad(iLocal_63, 2648.97f, -1178.597f, 53.38316f, 0f, 0f, 0f, 2.748698f, 9.535893f, 3.576711f);
	_0xb469cfd9e065eb99(iLocal_61, 10006);
	iLocal_81 = _create_volume_aggregate_with_custom_name("SDN - m_volPostOfficeOwner");
	_0x39816f6f94f385ad(iLocal_81, 2748.327f, -1397.359f, 46.234f, 0f, 0f, 24.583f, 4.62f, 3.944f, 2.741917f);
	_0x39816f6f94f385ad(iLocal_81, 2746.954f, -1394.676f, 46.234f, 0f, 0f, 24.583f, 2.197f, 2.146f, 2.742f);
	_0x39816f6f94f385ad(iLocal_81, 2749.686f, -1400.236f, 46.234f, 0f, 0f, 24.583f, 1.971f, 2.636f, 2.742f);
	iLocal_82 = _create_volume_aggregate_with_custom_name("SDN - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(iLocal_82, 2747.206f, -1395.105f, 46.214f, 0f, 0f, 22.919f, 1.779f, 1.111f, 2.494324f);
	_0x39816f6f94f385ad(iLocal_82, 2749.444f, -1399.819f, 46.214f, 0f, 0f, 22.919f, 1.767f, 1.472f, 2.494324f);
	iLocal_83 = _create_volume_box_with_custom_name(2748.29f, -1397.222f, 46.214f, 0f, 0f, 25.95989f, 4.162762f, 3.173493f, 2.117f, "SDN - m_volPostOfficeOFF");
	_0xb469cfd9e065eb99(iLocal_81, 10018);
	iLocal_84 = _create_volume_box_with_custom_name(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficeMP");
	iLocal_85 = _create_volume_box_with_custom_name(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficePromptMP");
	iLocal_86 = _create_volume_aggregate_with_custom_name("SDN - m_volPostOfficeNoCombat Agg");
	_0x39816f6f94f385ad(iLocal_86, 2739.465f, -1399.159f, 45.69f, 0f, 0f, 24.504f, 22.224f, 9.58f, 6.554f);
	_0x39816f6f94f385ad(iLocal_86, 2737.356f, -1394.378f, 47.02f, 0f, 0f, 24.737f, 5.686f, 1.805f, 3.673f);
	if (func_45() == -1)
	{
		iLocal_69 = _create_volume_box_with_custom_name(2503.034f, -1450.197f, 48.076f, 0f, 0f, 0f, 6.704965f, 28.73499f, 6.621f, "SDN Horse Shop - m_volHorseShop");
		iLocal_70 = _create_volume_aggregate_with_custom_name("SDN Horse Shop - m_volHorseShopOutsideDoor Agg");
		_0x39816f6f94f385ad(iLocal_70, 2502.26f, -1435.017f, 45.37257f, 0f, 0f, 0f, 3.869675f, 2.62296f, 7.47769f);
		_0x39816f6f94f385ad(iLocal_70, 2499.42f, -1450.354f, 45.37257f, 0f, 0f, -90f, 3.869675f, 2.62296f, 7.47769f);
		_0x39816f6f94f385ad(iLocal_70, 2502.348f, -1465.799f, 45.37257f, 0f, 0f, 180f, 3.869675f, 2.62296f, 7.47769f);
		func_54(9, iLocal_70);
		_0xb469cfd9e065eb99(iLocal_69, 10017);
		iLocal_110 = _create_volume_aggregate_with_custom_name("SDN - m_volIndGuardDogOwner");
		_0x39816f6f94f385ad(iLocal_110, 2597.014f, -1453.302f, 47.84009f, 0f, 0f, -35.27248f, 13.32053f, 38.94104f, 13.77784f);
		_0x39816f6f94f385ad(iLocal_110, 2594.038f, -1466.641f, 47.84009f, 0f, 0f, 89.60727f, 12.63065f, 19.94241f, 13.77784f);
		_0x39816f6f94f385ad(iLocal_110, 2581.743f, -1471.003f, 47.84009f, 0f, 0f, 89.60727f, 3.533205f, 8.003942f, 13.77784f);
		_0x39816f6f94f385ad(iLocal_110, 2582.623f, -1467.664f, 47.84009f, 0f, 0f, -35.60653f, 6.672962f, 8.003942f, 13.77784f);
		_0x39816f6f94f385ad(iLocal_110, 2593.001f, -1445.323f, 47.84009f, 0f, 0f, 55.78225f, 7.109884f, 5.264667f, 13.77784f);
		iLocal_71 = _create_volume_box_with_custom_name(2645.735f, -1295.139f, 53.79828f, 0f, 0f, 25.62823f, 16.5815f, 20.83208f, 5.240817f, "Saint Denis - m_volBank");
		iLocal_72 = _create_volume_box_with_custom_name(2644.218f, -1292.576f, 52.36508f, 0f, 0f, 25.62823f, 2.356534f, 1.366835f, 2.623696f, "Saint Denis - m_volBankPrompt");
		iLocal_73 = _create_volume_box_with_custom_name(2645.618f, -1295.548f, 51.55162f, 0f, 0f, 0f, 2.535386f, 2.647964f, 2.654926f, "Saint Denis - m_volBankShopOfflimits Agg");
		iLocal_115 = _create_volume_aggregate_with_custom_name("SDN - m_volRiverBoatGuardArea");
		_0x39816f6f94f385ad(iLocal_115, 2788.009f, -1499.647f, 45.91699f, 0f, 0f, -59.52556f, 28.86597f, 15.03598f, 14.77563f);
		_0x39816f6f94f385ad(iLocal_115, 2807.164f, -1500.584f, 45.91699f, 0f, 0f, 179.899f, 28.86597f, 15.03598f, 14.77563f);
		iLocal_71 = _create_volume_box_with_custom_name(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		_0xb469cfd9e065eb99(iLocal_71, 10005);
		iLocal_118 = _create_volume_cylinder_with_custom_name(2839.348f, -1229.419f, 47.30768f, 0f, 0f, -26.82762f, 22.30358f, 30.06492f, 16.24477f, "Saint Denis - m_volSlumsMarketHorseAvoidance");
		_0xb56d41a694e42e86(iLocal_118, 393217, 0, 0, -1, -1, 0);
	}
	else
	{
		iLocal_69 = _create_volume_box_with_custom_name(2508.191f, -1449.654f, 48.41523f, 0f, 0f, 0f, 15.82893f, 29.37446f, 6.829615f, "St. Denis - m_volHorseShop");
		_0xb469cfd9e065eb99(iLocal_69, 10017);
		iLocal_71 = _create_volume_box_with_custom_name(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		_0x18262cafebb5fbe1(iLocal_71, 0, 0, 0, -1, -1, 0);
	}
	iLocal_53 = _create_volume_box_with_custom_name(2720.304f, -1230.25f, 51f, 0f, 0f, -90f, 10f, 8.456f, 4f, "SDN - m_volDoctor");
	iLocal_54 = _create_volume_box_with_custom_name(2720f, -1232f, 50f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volDoctorPrompt");
	iLocal_55 = _create_volume_box_with_custom_name(2721.5f, -1233f, 50f, 0f, 0f, 0f, 1f, 3.5f, 3f, "SDN-m_volDoctorOffLimits");
	_0xb469cfd9e065eb99(iLocal_53, 10011);
	iLocal_74 = _create_volume_box_with_custom_name(2767.35f, -1417.88f, 43.96f, 0f, 0f, -35.20718f, 55.10648f, 55.98696f, 21.39363f, "SDN-m_volTrainStation");
	_0xb469cfd9e065eb99(iLocal_74, 10020);
	iLocal_116 = _create_volume_aggregate_with_custom_name("St. Denis - m_volPhotoStudio-Agg");
	_0x39816f6f94f385ad(iLocal_116, 2734.174f, -1119.755f, 50.10792f, 0f, 0f, 0f, 5.762633f, 7.941937f, 4.04453f);
	_0x39816f6f94f385ad(iLocal_116, 2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
	iLocal_117 = _create_volume_box_with_custom_name(2734.174f, -1119.957f, 50.10792f, 0f, 0f, 0f, 5.762633f, 6.069339f, 4.04453f, "St. Denis - m_volPhotoStudioPrompt");
	iLocal_68 = _create_volume_box_with_custom_name(2546.452f, -1301.997f, 51.59172f, 0f, 0f, 0.496382f, 18.19264f, 24.24748f, 8.938443f, "Saint Denis - m_volTheatre");
	_0xb56d41a694e42e86(iLocal_68, 10208, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_68, 10208, 0, 0, -1, -1, 0);
	iLocal_119 = _add_speed_zone_for_coord(2607.1f, -1253.1f, 52.9f, 300f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_60 = _create_volume_box_with_custom_name(2857.228f, -1199.688f, 47.8205f, 0f, 0f, 4.503f, 10.98f, 10.95572f, 7.601785f, "SDN - m_volFence");
	iLocal_79 = _create_volume_box_with_custom_name(2859.36f, -1200.223f, 49.71552f, 0f, 0f, 4.313612f, 2.547739f, 1.659313f, 2.393255f, "SDN - m_volFencePrompt");
	iLocal_80 = _create_volume_box_with_custom_name(2859.542f, -1202.452f, 49.78863f, 0f, 0f, 4.313612f, 2.547739f, 1.326916f, 2.393255f, "SDN - m_volFenceCounterOff");
	_0xb469cfd9e065eb99(iLocal_60, 10013);
	iLocal_75 = _create_volume_aggregate_with_custom_name("SDN-Cemetery-Agg");
	_0x39816f6f94f385ad(iLocal_75, 2700.761f, -1102.983f, 50.71395f, 0f, 0f, 0.216256f, 56.07924f, 9.712024f, 9.222456f);
	_0x39816f6f94f385ad(iLocal_75, 2763.792f, -1031.355f, 46.77443f, 0f, 0f, -0.624653f, 69.38274f, 16.03568f, 7.964019f);
	_0x39816f6f94f385ad(iLocal_75, 2728.395f, -1068.828f, 46.80749f, 0f, 0f, 179.1824f, 105.5484f, 62.22727f, 8.774147f);
	_0x39816f6f94f385ad(iLocal_75, 2785.364f, -1058.214f, 46.63797f, 0f, 0f, 89.47796f, 34.10864f, 25.3308f, 7.36563f);
	_0xbce668aaf83608be(iLocal_75, 2783.674f, -1084.674f, 47.11552f, 0f, 0f, -37.88909f, 11.44402f, 18.43804f, 3.770358f);
	_0x39816f6f94f385ad(iLocal_75, 2677.399f, -1052.453f, 45.53098f, 0f, 0f, -33.10271f, 19.00153f, 27.72343f, 8.265499f);
	_0x39816f6f94f385ad(iLocal_75, 2681.971f, -1079.012f, 45.86315f, 0f, 0f, -77.70405f, 51.40699f, 30.2015f, 14.18493f);
	_0xb56d41a694e42e86(iLocal_75, 2048, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_75, 2048, 0, 0, -1, -1, 0);
	func_55();
	func_56(5);
	iLocal_122 = _create_volume_box_with_custom_name(2502.495f, -1309.387f, 50.70366f, 0f, 0f, 0f, 17f, 9f, 7f, "sd_police_station");
	iLocal_123 = _create_volume_box_with_custom_name(2502.091f, -1308.705f, 47.9537f, 0f, 0f, 0f, 16.88976f, 16.00587f, 10f, "SDN - m_volLawPoliceStationLoitering");
	_0x3efabb21e14a6bd1(iLocal_123, 5, 1);
	iLocal_88 = _create_volume_box_with_custom_name(2819.564f, -1331.075f, 46.45f, 0f, 0f, 49.75f, 8.176f, 6.124f, 2.869f, "SDN-m_volButcher");
	iLocal_89 = _create_volume_box_with_custom_name(2817.843f, -1329.871f, 46.45f, 0f, 0f, 49.75f, 2.5f, 1.877f, 2f, "SDN-m_volButcherPrompt");
	_0xb469cfd9e065eb99(iLocal_88, 10008);
	iLocal_90 = _create_volume_box_with_custom_name(2696.853f, -1353.716f, 50.90947f, -0.01f, 7E-06f, 39.03817f, 25f, 9.1f, 9f, "SDN - m_volMagicLanternTheatre");
	_0xb56d41a694e42e86(iLocal_90, 10208, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_90, 10208, 0, 0, -1, -1, 0);
	iLocal_112 = _create_volume_box_with_custom_name(2831.335f, -1224.573f, 47.5f, 0f, 0f, 0f, 8.132f, 6.089f, 3.5f, "SDN-m_volTrapper");
	iLocal_113 = _create_volume_cylinder_with_custom_name(2829.474f, -1223.242f, 46.6557f, 0f, 0f, 0f, 2.428f, 2.686f, 3f, "SDN-m_volTrapperPrompt");
	iLocal_114 = _create_volume_box_with_custom_name(2831.088f, -1222.985f, 47.5f, 0f, 0f, 0f, 6.199f, 2.995f, 3f, "SDN-m_volTrapperOffLimits");
	_0xb56d41a694e42e86(iLocal_114, 10208, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_114, 10208, 0, 0, -1, -1, 0);
	iLocal_91 = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictLoitering Agg");
	_0x39816f6f94f385ad(iLocal_91, 2401.805f, -1199.688f, 50.64869f, 0f, 0f, 89.35063f, 118.7466f, 27.85054f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2404.337f, -1183.499f, 50.6487f, 0f, 0f, 89.5351f, 8.550712f, 187.7067f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2461.883f, -1136.172f, 50.64869f, 0f, 0f, 0f, 278.0189f, 27.85054f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2493.894f, -1198.237f, 50.6487f, 0f, 0f, -179.2395f, 22.47914f, 148.257f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2311.967f, -1157.098f, 50.6487f, 0f, 0f, -2.1579f, 20.14263f, 77.43121f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2450.991f, -1255.936f, 50.6487f, 0f, 0f, 74.44216f, 17.99708f, 81.91428f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2404.273f, -1283.045f, 50.6487f, 0f, 0f, 162.6364f, 27.31752f, 67.13039f, 75.92666f);
	_0x39816f6f94f385ad(iLocal_91, 2432.95f, -1310.865f, 50.6487f, 0f, 0f, 71.7864f, 17.99708f, 81.91428f, 75.92666f);
	iLocal_92[0] = _create_volume_box_with_custom_name(2427.054f, -1284.265f, 49.2916f, 0f, 0f, -15.29399f, 23.856f, 58.70475f, 12.94626f, "SDN-m_volGardenDistrictTrespassing 0");
	iLocal_92[1] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 1 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[1]), 2448.448f, -1286.899f, 49.2916f, 0f, 0f, -15.29399f, 17.29098f, 48.36654f, 18.53969f);
	_0x39816f6f94f385ad(&(iLocal_92[1]), 2456.016f, -1310.996f, 49.2916f, 0f, 0f, -15.29399f, 16.53504f, 5.606594f, 18.53969f);
	_0x39816f6f94f385ad(&(iLocal_92[1]), 2455.733f, -1288.545f, 49.2916f, 0f, 0f, -178.5714f, 16.65417f, 45.1132f, 18.53969f);
	iLocal_92[2] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 2 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[2]), 2362.462f, -1272.869f, 49.2916f, 0f, 0f, -19.75965f, 60.68886f, 48.63572f, 18.53969f);
	_0x39816f6f94f385ad(&(iLocal_92[2]), 2389.465f, -1278.762f, 49.2916f, 0f, 0f, 164.0191f, 13.08261f, 54.88486f, 18.53969f);
	_0x39816f6f94f385ad(&(iLocal_92[2]), 2364.107f, -1246.863f, 49.2916f, 0f, 0f, -89.30434f, 15.33103f, 78.01559f, 18.53969f);
	_0x39816f6f94f385ad(&(iLocal_92[2]), 2339.069f, -1267.846f, 49.2916f, 0f, 0f, -0.4259f, 28.2545f, 35.02214f, 18.52822f);
	iLocal_92[3] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 3 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[3]), 2361.655f, -1164.18f, 49.2916f, 0f, 0f, -90.15806f, 27.47045f, 82.17483f, 20.96592f);
	_0x39816f6f94f385ad(&(iLocal_92[3]), 2354.933f, -1148.675f, 49.2916f, 0f, 0f, 75.14153f, 13.61488f, 64.51537f, 20.96592f);
	_0x39816f6f94f385ad(&(iLocal_92[3]), 2331.474f, -1143.846f, 49.2916f, 0f, 0f, -90.15805f, 27.47045f, 21.4971f, 20.96592f);
	_0x39816f6f94f385ad(&(iLocal_92[3]), 2344.552f, -1139.157f, 49.2916f, 0f, 0f, -111.0944f, 3.614755f, 17.73002f, 20.96592f);
	_0x39816f6f94f385ad(&(iLocal_92[3]), 2345.342f, -1138.515f, 49.2916f, 0f, 0f, 39.12743f, 3.614755f, 17.73002f, 20.96592f);
	iLocal_92[4] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 4 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[4]), 2400.034f, -1058.885f, 49.2916f, 0f, 0f, 0.018814f, 55.618f, 80.51579f, 18.52822f);
	_0x39816f6f94f385ad(&(iLocal_92[4]), 2401.558f, -1073.348f, 49.2916f, 0f, 0f, 0.018814f, 52.17577f, 99.82372f, 18.52822f);
	_0x39816f6f94f385ad(&(iLocal_92[4]), 2401.558f, -1014.455f, 49.2916f, 0f, 0f, 0.018814f, 5.173525f, 9.729424f, 18.52822f);
	_0xbce668aaf83608be(&(iLocal_92[4]), 2401.313f, -1002.282f, 39.19f, 0f, 0f, 0f, 9.068625f, 9.340483f, 18.87085f);
	iLocal_92[5] = _create_volume_box_with_custom_name(2451.604f, -1078.587f, 49.2916f, 0f, 0f, 0.018814f, 47.07628f, 90.20814f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 5");
	iLocal_92[6] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 6 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[6]), 2488.193f, -1058.567f, 49.2916f, 0f, 0f, 0.018814f, 24.72538f, 21.73822f, 18.52822f);
	_0x39816f6f94f385ad(&(iLocal_92[6]), 2493.978f, -1092.539f, 49.2916f, 0f, 0f, 0.018814f, 37.74252f, 62.8319f, 18.52822f);
	iLocal_92[7] = _create_volume_box_with_custom_name(2539.709f, -1096.017f, 49.2916f, 0f, 0f, 0.018814f, 52.81096f, 55.85768f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 7");
	iLocal_92[8] = _create_volume_box_with_custom_name(2597.531f, -1096.083f, 49.2916f, 0f, 0f, 0.018814f, 30.5856f, 56.0564f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 8");
	iLocal_92[9] = _create_volume_box_with_custom_name(2623.401f, -1074.223f, 49.2916f, 0f, 0f, 0.018814f, 43.08669f, 27.58172f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 9");
	iLocal_92[10] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 10 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[10]), 2629.527f, -1105.324f, 49.2916f, 0f, 0f, 0.018814f, 40.67762f, 37.41682f, 18.52822f);
	_0x39816f6f94f385ad(&(iLocal_92[10]), 2651.13f, -1110.501f, 49.2916f, 0f, 0f, 0.018814f, 3.892076f, 27.00792f, 18.52822f);
	iLocal_92[11] = _create_volume_box_with_custom_name(2453.628f, -1164.804f, 52.55637f, 0f, 0f, 179.9622f, 72.70865f, 27.57841f, 19.55484f, "SDN-m_volGardenDistrictTrespassing 11");
	iLocal_92[12] = _create_volume_aggregate_with_custom_name("SDN-m_volGardenDistrictTrespassing 12 Agg");
	_0x39816f6f94f385ad(&(iLocal_92[12]), 2479.08f, -1220.485f, 52.55637f, 0f, 0f, -179.7821f, 20.63473f, 59.85671f, 19.55484f);
	_0x39816f6f94f385ad(&(iLocal_92[12]), 2471.073f, -1249.139f, 52.55637f, 0f, 0f, -16.01828f, 17.98121f, 4.191609f, 19.55484f);
	_0x39816f6f94f385ad(&(iLocal_92[12]), 2465.776f, -1238.28f, 52.55637f, 0f, 0f, -89.74155f, 16.83455f, 6.001091f, 19.55484f);
	_0x39816f6f94f385ad(&(iLocal_92[12]), 2468.223f, -1225.058f, 52.55637f, 0f, 0f, -114.8564f, 14.11476f, 6.010783f, 19.55484f);
	_0x39816f6f94f385ad(&(iLocal_92[12]), 2484.649f, -1251.897f, 52.55637f, 0f, 0f, 178.8598f, 9.602062f, 4.226469f, 19.55484f);
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		_0x3efabb21e14a6bd1(&(iLocal_92[iVar0]), 2, 1);
		_0x3efabb21e14a6bd1(&(iLocal_92[iVar0]), 3, 1);
		iVar0++;
	}
	if (!network_is_game_in_progress())
	{
		iLocal_107 = _create_volume_aggregate_with_custom_name("SDN-m_volBronteGuardedRegistration Agg");
		_0x39816f6f94f385ad(iLocal_107, 2351.493f, -1215.674f, 52.55637f, 0f, 0f, 179.9622f, 103.357f, 46.93462f, 19.55484f);
		_0x39816f6f94f385ad(iLocal_107, 2289.215f, -1216.538f, 45.98805f, 0f, 0f, 0f, 24.45309f, 6.611898f, 32.63914f);
		_0x39816f6f94f385ad(iLocal_107, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 17.01238f, 24.97074f, 32.63914f);
		iLocal_109 = _create_volume_aggregate_with_custom_name("SDN-m_volBronteGuardedThreat Agg");
		_0x39816f6f94f385ad(iLocal_109, 2331.856f, -1216.377f, 44.63484f, 0f, 0f, 0f, 11.67815f, 5.418246f, 2.162155f);
		_0xbce668aaf83608be(iLocal_109, 2337.601f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		_0xbce668aaf83608be(iLocal_109, 2326.144f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		_0x39816f6f94f385ad(iLocal_109, 2379.45f, -1206.713f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		_0x39816f6f94f385ad(iLocal_109, 2375.269f, -1216.244f, 48.15978f, 0f, 0f, 0f, 38.31001f, 18.0602f, 24.88261f);
		_0x39816f6f94f385ad(iLocal_109, 2379.45f, -1225.62f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		_0x39816f6f94f385ad(iLocal_109, 2364.137f, -1231.286f, 48.31032f, 0f, 0f, 0f, 15.13832f, 2.382603f, 7.528201f);
		iLocal_108 = _create_volume_aggregate_with_custom_name("SDN-m_volBronteGuardedRestriction Agg");
		_0x6e0d3c3f828da773(iLocal_108, iLocal_109);
		_0x39816f6f94f385ad(iLocal_108, 2351.483f, -1228.943f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 20f, 19.55484f);
		_0x39816f6f94f385ad(iLocal_108, 2351.501f, -1203.041f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 21.08849f, 19.55484f);
		_0x39816f6f94f385ad(iLocal_108, 2327.945f, -1216.194f, 52.55637f, 0f, 0f, 179.9622f, 56.37261f, 5.997283f, 19.55484f);
		_0x39816f6f94f385ad(iLocal_108, 2289.417f, -1216.377f, 45.98805f, 0f, 0f, 0f, 22.04649f, 5.418246f, 32.63914f);
		_0x39816f6f94f385ad(iLocal_108, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 15.4733f, 22.61529f, 32.63914f);
		_0x39816f6f94f385ad(iLocal_108, 2398.721f, -1216.24f, 52.55637f, 0f, 0f, 179.9622f, 8.560711f, 5.997283f, 19.55484f);
		sLocal_106 = "BRONTE";
		_create_guard_zone(sLocal_106);
		_0x8c598a930f471938(sLocal_106, iLocal_107);
		_0x35815f372d43e1e5(sLocal_106, iLocal_108);
		_0xad3e07c37a7c1adc(sLocal_106, iLocal_108);
		_0xa1b0e6301e2e02a6(sLocal_106, iLocal_109);
		_set_guard_zone_position(sLocal_106, 2376.87f, -1216.214f, 47.3213f);
		_0xa8a74aa79fb67159(sLocal_106, iLocal_107);
	}
	iLocal_170 = func_57(2834.069f, -1229.412f, 46.6618f, 0f, 0f, 0f, 18f, 18f, 18f, 1065353216);
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return !_0xcf45df50c7775f2a();
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	func_58(0, "", "", "", "", 2741.693f, -1265.625f, 79.65331f, "SD_SINGLE_TOLL");
	func_59(9, 0, 0);
	func_59(12, 0, 0);
	func_59(19, 0, 0);
	func_60(-1080627546, 1, 0);
	func_60(-1847672446, 1, 0);
}

bool func_17(int iParam0)
{
	iVar0 = 1;
	vVar1 = { 0f, 0f, 0f };
	if (func_61(61, &uVar5, &uVar4, &vVar1) && !func_62(vVar1))
	{
		request_collision_at_coord(vVar1);
		if (!_0x6bfbdc46139c45ab(vVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896622[iParam0] && iParam1) != 0;
}

int func_20(int iParam0)
{
	return func_63(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_64(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_65(5000))
		{
			return true;
		}
	}
	switch (func_67(func_66(0)))
	{
		case -1:
			return false;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25()
{
}

void func_26()
{
	if (network_is_in_session())
	{
		if (func_45() == 0)
		{
		}
	}
}

void func_27()
{
	func_68(2, 2633.455f, -1226.72f, 52.3796f, iLocal_76, 5);
	func_68(1, 2796.278f, -1168.035f, 46.924f, iLocal_77, 5);
}

void func_28()
{
	func_69(0, 2542.098f, -1282.514f, 48.21795f, &(Global_1290948->f_47[0]), 5);
	func_69(1, 2686.8f, -1362.094f, 47.21417f, &(Global_1290948->f_47[1]), 5);
}

void func_29(int iParam0)
{
	func_70(0, iLocal_53, iParam0, iLocal_54, iLocal_55, 12, 0, 0, -1082130432, 0);
	func_71(0, -571840810, 0, 0, 0);
	func_71(0, 79213682, 0, 0, 0);
	func_71(0, 1104407261, 0, 0, 0);
	func_71(0, 994323006, 0, 0, 0);
	func_71(0, 82263429, 0, 0, 0);
	func_72(0, 0);
	func_70(3, iLocal_56, iParam0, iLocal_57, iLocal_59, 4, 0, 0, -1082130432, 0);
	func_73(3, 8192);
	func_71(3, -180076077, 0, 0, 0);
	func_71(3, 1051874490, 0, 0, 0);
	func_71(3, -308726915, 0, 0, 0);
	func_71(3, -60894968, 0, 0, 0);
	func_72(3, 0);
	func_70(4, iLocal_60, iParam0, iLocal_79, iLocal_80, 44, 0, 0, -1082130432, 0);
	func_71(4, 1687619371, 0, 0, 0);
	func_72(4, 0);
	func_70(6, iLocal_49, iParam0, iLocal_50, iLocal_52, 20, 0, 0, -1082130432, 0);
	func_71(6, 1057071735, 0, 0, 0);
	func_71(6, -1011766303, 0, 0, 0);
	func_71(6, 841127028, 0, 0, 0);
	func_72(6, 0);
	func_70(7, iLocal_67, iParam0, iLocal_65, iLocal_66, 4, 0, 0, -1082130432, 0);
	func_71(7, -1683351620, 0, 0, 0);
	func_71(7, -548537711, 0, 0, 0);
	func_71(7, -843327635, 0, 0, 0);
	func_72(7, 0);
	func_70(25, iLocal_122, iParam0, 0, 0, 2, 0, 0, -1082130432, 0);
	func_73(25, 1);
	func_73(25, 16384);
	func_73(25, 8192);
	func_73(25, 536870912);
	func_70(18, iLocal_116, iParam0, iLocal_117, 0, 524290, 0, 0, -1082130432, 0);
	func_71(18, 123675751, 0, 0, 0);
	func_71(18, 1079875175, 0, 0, 0);
	func_72(18, 0);
	func_70(36, &(Global_1290948->f_47[Global_1290948->f_45]), 5, &(Global_1290948->f_50[Global_1290948->f_45]), 0, 2, 0, 0, -1082130432, 0);
	func_70(9, iLocal_69, iParam0, 0, 0, 2, 1, 0, -1082130432, 0);
	func_73(9, 536870912);
	func_73(9, 8388608);
	func_73(9, 1);
	func_73(9, 16384);
	func_73(9, 32768);
	func_73(9, 8192);
	func_73(9, 4);
	func_73(9, 16777216);
	func_73(9, 67108864);
	if (!func_74() && func_75())
	{
		func_71(9, 293111919, 0, 0, 0);
		func_71(9, -1550406539, 0, 0, 0);
		func_71(9, 726257907, 0, 0, 0);
		func_71(9, 229021101, 0, 0, 0);
		func_71(9, 1234907076, 0, 0, 0);
		func_71(9, 1388233219, 0, 0, 0);
	}
	else
	{
		func_71(9, 293111919, 1f, 1, 1);
		func_71(9, -1550406539, -1f, 1, 1);
		func_71(9, 726257907, -1f, 1, 1);
		func_71(9, 229021101, -1f, 1, 1);
		func_71(9, 1234907076, 1f, 1, 1);
		func_71(9, 1388233219, -1f, 1, 1);
	}
	func_70(10, iLocal_88, iParam0, iLocal_89, 0, 460, 0, 0, -1082130432, 0);
	func_73(10, 536870912);
	func_72(10, 0);
	func_76();
	func_77(54);
	func_77(56);
	func_70(8, iLocal_61, iParam0, iLocal_62, 0, 4098, 0, 0, -1082130432, 0);
	func_71(8, 1410192354, 0, 0, 0);
	func_71(8, 1708357485, 0, 0, 0);
	func_71(8, -910885330, 0, 0, 0);
	func_71(8, -1937144872, 0, 0, 0);
	func_71(8, 527035651, 0, 0, 0);
	func_71(8, 29962690, 0, 0, 0);
	func_72(8, 0);
	func_70(2, iLocal_84, iParam0, iLocal_85, 0, 1277952, 0, 0, -1082130432, 0);
	func_72(2, 0);
	func_70(15, iLocal_112, iParam0, iLocal_113, iLocal_114, 12, 0, 0, -1082130432, 0);
	func_73(15, 536870912);
	func_72(15, 0);
	set_ambient_zone_state("AZ_Naturalist_Camp", true, true);
	_0x3743ce6948194349("AZ_Naturalist_Camp", _0xf70f00013a62f866(iLocal_112), 0f);
	func_78(iParam0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	if (func_45() != -1)
	{
		return;
	}
	func_79(250, iLocal_122, 1);
	func_79(202, iLocal_78, 1);
	func_79(140, iLocal_53, 1);
	func_79(200, iLocal_56, 1);
	func_79(219, iLocal_60, 1);
	func_79(142, iLocal_67, 1);
	func_79(201, iLocal_61, 1);
	func_79(141, iLocal_81, 1);
	func_79(139, iLocal_88, 1);
	func_79(205, iLocal_69, 1);
	func_79(231, iLocal_110, 1);
	func_79(148, iLocal_115, 1);
	_0x4a8fefc43fd8ac9b(iLocal_115, 3, 1);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_80(1f, 0f, 0f, 0f);
	set_species_tuning_bool_param(-1190799868, 0, 48, true);
	iLocal_124[0] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionAgriculturalDistrict Agg");
	_0xbce668aaf83608be(&(iLocal_124[0]), 2434.277f, -864.2632f, 100.0153f, 0f, 0f, 99.80928f, 76.1365f, 77.5857f, 75f);
	_0xbce668aaf83608be(&(iLocal_124[0]), 2711.787f, -748.9066f, 100.009f, 0f, 0f, -19f, 136.4152f, 127.1571f, 75f);
	_0x39816f6f94f385ad(&(iLocal_124[0]), 2735.065f, -887.9319f, 99.99515f, 0f, 0f, 110.7696f, 246.8316f, 261.0551f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[0]), 2580.572f, -814.5414f, 100.007f, 0f, 0f, -172.8734f, 256.6486f, 158.023f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[0]), 2552.832f, -875.643f, 99.99637f, 0f, 0f, 92.39069f, 246.8316f, 169.3834f, 150f);
	iLocal_124[1] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionStFrancesSlums Agg");
	_0x39816f6f94f385ad(&(iLocal_124[1]), 2785.521f, -1056.387f, 100.0029f, 0f, 0f, 4.060894f, 91.00164f, 108.2891f, 150f);
	_0xbce668aaf83608be(&(iLocal_124[1]), 2817.182f, -1129.093f, 100.0028f, 0f, 0f, -7.581066f, 33.52557f, 40.72814f, 75f);
	_0x39816f6f94f385ad(&(iLocal_124[1]), 2857.705f, -1075.989f, 100.0023f, 0f, 0f, 13.5399f, 134.8914f, 242.3996f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[1]), 2706.777f, -1061.12f, 100.0029f, 0f, 0f, 0.041871f, 83.65329f, 91.41635f, 150f);
	iLocal_124[2] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionMarketDistrict Agg");
	_0x39816f6f94f385ad(&(iLocal_124[2]), 2818.136f, -1302.344f, 100.0018f, 0f, 0f, 52.15482f, 136.6019f, 105.5725f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[2]), 2891.593f, -1292.117f, 99.99527f, 0f, 0f, 46.92012f, 94.54254f, 89.92535f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[2]), 2839.955f, -1372.414f, 99.99564f, 0f, 0f, 46.92012f, 94.54254f, 124.4491f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[2]), 2875.316f, -1240.993f, 100.0051f, 0f, 0f, 4.213234f, 159.0249f, 159.6049f, 150f);
	iLocal_124[3] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionWarehouseDistrict Agg");
	_0xbce668aaf83608be(&(iLocal_124[3]), 2366.9f, -1476.441f, 100.0029f, 0f, 0f, -19f, 157.3157f, 152.8212f, 75f);
	_0xbce668aaf83608be(&(iLocal_124[3]), 2230.301f, -1436.293f, 100.0025f, 0f, 0f, -19f, 74.26994f, 125.4343f, 75f);
	_0x39816f6f94f385ad(&(iLocal_124[3]), 2576.589f, -1518.787f, 99.99567f, 0f, 0f, 108.441f, 195.968f, 141.0048f, 150f);
	_0xbce668aaf83608be(&(iLocal_124[3]), 2545.769f, -1422.399f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	_0x39816f6f94f385ad(&(iLocal_124[3]), 2531.97f, -1414.802f, 99.99918f, 0f, 0f, -163.683f, 153.2008f, 51.76601f, 150f);
	_0xbce668aaf83608be(&(iLocal_124[3]), 2491.278f, -1621.654f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	iLocal_124[4] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionCommercialDistrict Agg");
	_0xbce668aaf83608be(&(iLocal_124[4]), 2742.656f, -1277.652f, 99.99838f, 0f, 0f, 152.9659f, 35.11092f, 35.81115f, 75f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2777.891f, -1452.619f, 100.0045f, 0f, 0f, 47.08032f, 120.0883f, 101.6027f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2718.392f, -1463.461f, 99.99609f, 0f, 0f, 21.14701f, 189.0947f, 206.6733f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2504.361f, -1300.615f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2574.647f, -1299.168f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2666.968f, -1316.806f, 100.0025f, 0f, 0f, 21.48862f, 147.3396f, 167.8958f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[4]), 2773.729f, -1523.972f, 99.99609f, 0f, 0f, 21.14701f, 100.9043f, 86.45067f, 150f);
	iLocal_124[5] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionOldQuarter Agg");
	_0x39816f6f94f385ad(&(iLocal_124[5]), 2794.772f, -1168.501f, 99.99721f, 0f, 0f, -23.73808f, 40.52186f, 22.18659f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[5]), 2724.767f, -1177.132f, 99.99606f, 0f, 0f, -0.344003f, 131.9037f, 145.4713f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[5]), 2648.325f, -1217.937f, 99.99631f, 0f, 0f, 13.19646f, 112.413f, 48.05493f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[5]), 2638.866f, -1187.82f, 99.99606f, 0f, 0f, -0.344003f, 139.1532f, 82.29633f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[5]), 2559.47f, -1204.827f, 99.99649f, 0f, 0f, 91.19704f, 111.5756f, 115.1564f, 150f);
	_0xbce668aaf83608be(&(iLocal_124[5]), 2782.788f, -1204.586f, 100.0032f, 0f, 0f, -4.684483f, 40.16883f, 52.17526f, 75f);
	iLocal_124[6] = _create_volume_aggregate_with_custom_name("m_volSDNLawRegionMansionDistrict Agg");
	_0x39816f6f94f385ad(&(iLocal_124[6]), 2274.675f, -1210.538f, 100f, 0f, 0f, -89.39697f, 61.03426f, 73.05703f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[6]), 2347.278f, -1207.533f, 100f, 0f, 0f, 0f, 116.7747f, 179.4705f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[6]), 2418.939f, -1287.882f, 100f, 0f, 0f, 168.6711f, 109.4838f, 85.72875f, 152.763f);
	_0x39816f6f94f385ad(&(iLocal_124[6]), 2485.194f, -1067.418f, 100f, 0f, 0f, 0f, 359.5392f, 180.9321f, 150f);
	_0x39816f6f94f385ad(&(iLocal_124[6]), 2446.779f, -1199.126f, 100f, 0f, 0f, -89.39697f, 124.0142f, 103.0166f, 150f);
}

void func_34()
{
	if (!Global_1893587->f_186)
	{
		_0xf5ffb08976911b50(Global_1893587->f_182, Global_1893587->f_183, Global_1893587->f_184, Global_1893587->f_185);
	}
}

void func_35(var uParam0)
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

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_81(uParam1, iLocal_48, 1);
	func_81(uParam1, iLocal_49, 2);
	func_81(uParam1, iLocal_53, 2);
	func_81(uParam1, iLocal_56, 2);
	func_81(uParam1, iLocal_60, 2);
	func_81(uParam1, iLocal_67, 2);
	func_81(uParam1, iLocal_74, 10);
	func_81(uParam1, iLocal_88, 2);
}

void func_37(int iParam0)
{
	if (!func_82(iParam0))
	{
		return;
	}
	func_83();
	func_84(0, -7009108);
	func_84(2, -348077625);
}

bool func_38(int iParam0)
{
	return (Global_1893587 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_171)
	{
		case 0:
			func_85();
			func_86(1);
			break;
		case 1:
			func_87();
			func_86(0);
			break;
	}
	func_88(52, iLocal_86, &uLocal_87);
	func_89();
	func_90();
	if (func_91(&bLocal_169))
	{
		if (bLocal_169)
		{
			func_92(1915401053, 1);
			func_93(544106233, 1, 0, 0, 0, 0, 0, 0);
			func_93(340151973, 1, 0, 0, 0, 0, 0, 0);
			func_93(534819197, 1, 0, 0, 0, 0, 0, 0);
			func_93(836064614, 1, 0, 0, 0, 0, 0, 0);
			func_93(2053545201, 1, 0, 0, 0, 0, 0, 0);
			func_93(1449678065, 1, 0, 0, 0, 0, 0, 0);
			func_93(-826896261, 1, 0, 0, 0, 0, 0, 0);
			func_93(627391959, 1, 0, 0, 0, 0, 0, 0);
			func_93(-317441493, 1, 0, 0, 0, 0, 0, 0);
			func_93(-2128813450, 1, 0, 0, 0, 0, 0, 0);
			func_94(-516807739, 1);
			func_94(-777091906, 1);
			func_94(-875333368, 1);
			func_94(1313209843, 1);
			func_92(-17027456, 1);
			func_92(156648244, 1);
			func_92(1291327218, 1);
			func_92(1587886668, 1);
			func_92(895866323, 1);
			func_92(1130131904, 1);
			func_92(-777462925, 1);
			func_92(-3733011, 1);
			func_92(913143609, 1);
		}
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	if ((vdist(Global_35, 0f, 0f, 0f) <= 5f || func_95(&Global_1940258, 32768)) || func_95(&Global_1940258, 16777216))
	{
		return;
	}
	if (func_96(uParam0, 1))
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
	bVar2 = func_97();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((*uParam0)[iVar3]->f_1)
		{
			case 1:
				if (_does_volume_exist(uParam0[iVar3]))
				{
					if (_0xf256a75210c5c0eb(uParam0[iVar3], Global_35))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_98((*uParam0)[iVar3], 1) && func_99(iParam1)) && !func_100(iParam1, 16))
							{
								func_102(iParam1, func_101(), -1, 0, -1, 0);
								func_103((*uParam0)[iVar3], 1);
							}
							func_104(iParam1, 0);
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
	func_105(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
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
	if (func_106(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_107();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_21(iLocal_175, 2048);
		if (chal_is_goal_active(-663946200, 1055032020))
		{
			switch (iLocal_175)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					chal_add_goal_progress_int_by_score_id(func_108(iLocal_175, 0), 1);
					break;
			}
		}
		if (func_10(func_101()))
		{
			func_11(func_101(), 8);
		}
		func_109(iLocal_175, 4);
		func_109(iLocal_175, 8);
		func_105(0);
		if (func_45() == -1)
		{
			func_110(0);
		}
		func_111(iLocal_175);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_112(iLocal_175);
		func_113(iLocal_175);
		if (!func_114(iLocal_175, 0))
		{
			return false;
		}
	}
	else if (!func_115(iLocal_175))
	{
		return false;
	}
	terminate_this_thread();
	return true;
}

int func_45()
{
	return Global_1572887->f_13;
}

void func_46()
{
	terminate_this_thread();
}

bool func_47()
{
	if (Global_1572887->f_360.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887->f_360.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (_0x1b89bc43b6e69107(1814880805, -1, 0, 0))
	{
		return true;
	}
	if (_0x1b89bc43b6e69107(-701235215, -1, 0, 0))
	{
		return true;
	}
	if (_0x1b89bc43b6e69107(-814065802, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_49(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_50(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893587->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893587->f_7 = (Global_1893587->f_7 - (Global_1893587->f_7 && iParam0));
}

void func_53(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_117(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_54(int iParam0, int iParam1)
{
	Global_1915715->f_3[iParam0]->f_32 = iParam1;
}

void func_55()
{
	iLocal_76 = _create_volume_aggregate_with_custom_name("volSaloonFancyInterior");
	iVar0 = _create_volume_box(2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
	_0x6e0d3c3f828da773(iLocal_76, iVar0);
	iVar0 = _create_volume_box(2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
	_0x6e0d3c3f828da773(iLocal_76, iVar0);
	iVar0 = _create_volume_box(2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
	_0x6e0d3c3f828da773(iLocal_76, iVar0);
	iLocal_77 = _create_volume_box_with_custom_name(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "volSaloonSlumInterior");
}

void func_56(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			Global_1290948->f_47[0] = _create_volume_aggregate();
			_0x6e0d3c3f828da773(&(Global_1290948->f_47[0]), _create_volume_box(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			_0x6e0d3c3f828da773(&(Global_1290948->f_47[0]), _create_volume_sphere(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1290948->f_50[0] = _create_volume_box_with_custom_name(2542.098f, -1282.514f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1290948->f_47[1] = _create_volume_box_with_custom_name(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1290948->f_50[1] = _create_volume_box_with_custom_name(2686.8f, -1362.094f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
		case 81:
			Global_1290948->f_47[1] = _create_volume_box_with_custom_name(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1290948->f_50[1] = _create_volume_box_with_custom_name(-355.272f, 704.9423f, 115.9362f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}
}

int func_57(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9)
{
	if (func_62(vParam0))
	{
		return -1;
	}
	if (func_62(vParam6))
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_118(iVar0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		Global_26642[iVar1] = _create_volume_cylinder(vParam0, vParam3, vParam6);
		Global_26642.f_6[iVar1] = iParam9;
		return iVar1;
	}
	return -1;
}

void func_58(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_62(vParam5))
	{
		return;
	}
	Local_19 = iParam0;
	Local_19.f_6 = sParam1;
	Local_19.f_7 = sParam2;
	Local_19.f_8 = sParam3;
	Local_19.f_9 = sParam4;
	Local_19.f_11 = { vParam5 };
	Local_19.f_10 = sParam8;
	Local_19.f_15 = 1;
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	if (Local_19.f_5 >= 3)
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
	func_119(&iVar0, iParam0);
	func_120(&iVar0, iParam1);
	func_121(&iVar0, iParam2);
	func_122(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_19.f_5 - 1))
	{
		func_122(Local_19.f_1[iVar1]);
		if (&Local_19.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_19.f_1[Local_19.f_5] = iVar0;
	Local_19.f_5++;
	func_123(&(Local_19.f_1), Local_19.f_5);
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_124(1497516462);
			func_125(2016141805);
			func_125(1010885152);
			func_125(-502324015);
			break;
		case 2016141805:
			func_125(1497516462);
			func_124(2016141805);
			func_125(1010885152);
			func_125(-502324015);
			break;
		case 1010885152:
			func_125(1497516462);
			func_125(2016141805);
			func_124(1010885152);
			func_125(-502324015);
			break;
		case -502324015:
			func_125(1497516462);
			func_125(2016141805);
			func_125(1010885152);
			func_124(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_125(-538889627);
			func_125(-538880323);
			func_125(-1056767524);
			func_124(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_126();
			func_124(iParam0);
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
			func_127();
			func_124(iParam0);
			break;
		case 2019386373:
			func_125(-664252410);
			func_125(2109952320);
			func_124(2019386373);
			break;
		case -664252410:
			func_125(2019386373);
			func_125(2109952320);
			func_124(-664252410);
			break;
		case 2109952320:
			func_125(2019386373);
			func_125(-664252410);
			func_124(2109952320);
			break;
		case -1674179981:
			func_125(-1835851517);
			func_125(-1838352012);
			func_124(-1674179981);
			break;
		case -1835851517:
			func_125(-1674179981);
			func_125(-1838352012);
			func_124(-1835851517);
			break;
		case -1838352012:
			func_125(-1674179981);
			func_125(-1835851517);
			func_124(-1838352012);
			break;
		case -1717960576:
			func_125(210001842);
			func_124(-1717960576);
			break;
		case 210001842:
			func_125(-1717960576);
			func_124(210001842);
			break;
		case -150493654:
			func_125(-1271608261);
			func_125(1846061697);
			func_125(-1145519186);
			func_124(-150493654);
			break;
		case -1271608261:
			func_125(-150493654);
			func_125(1846061697);
			func_125(-1145519186);
			func_124(-1271608261);
			break;
		case 1846061697:
			func_125(-150493654);
			func_125(-1271608261);
			func_125(-1145519186);
			func_124(1846061697);
			break;
		case -1145519186:
			func_125(-150493654);
			func_125(-1271608261);
			func_125(1846061697);
			func_124(-1145519186);
			break;
		case 1766284049:
			func_125(280705402);
			func_125(1926308480);
			func_124(1766284049);
			break;
		case 280705402:
			func_125(1766284049);
			func_125(1926308480);
			func_124(280705402);
			break;
		case 1926308480:
			func_125(1766284049);
			func_125(280705402);
			func_124(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_125(439465264);
				func_124(1609506757);
			}
			else
			{
				func_125(1609506757);
				func_125(439465264);
			}
			break;
		case 439465264:
			if (func_128(1609506757))
			{
				if (bParam1)
				{
					func_124(439465264);
				}
				else
				{
					func_125(439465264);
				}
			}
			break;
		case 1822001510:
			func_125(-1612662716);
			func_124(1822001510);
			break;
		case -1612662716:
			func_125(1822001510);
			func_124(-1612662716);
			break;
		case 1306158345:
			func_125(1952610440);
			func_125(-223469678);
			func_125(-404698347);
			func_125(1517904467);
			func_124(1306158345);
			break;
		case 1952610440:
			func_125(1306158345);
			func_125(-223469678);
			func_125(-404698347);
			func_125(1517904467);
			func_124(1952610440);
			break;
		case -223469678:
			func_125(1306158345);
			func_125(1952610440);
			func_125(-404698347);
			func_125(1517904467);
			func_124(-223469678);
			break;
		case -404698347:
			func_125(1306158345);
			func_125(1952610440);
			func_125(-223469678);
			func_125(1517904467);
			func_124(-404698347);
			break;
		case 1517904467:
			func_125(1306158345);
			func_125(1952610440);
			func_125(-223469678);
			func_125(-404698347);
			func_124(1517904467);
			break;
		case 1376646519:
			func_125(931649776);
			func_125(-434590080);
			func_125(1743048395);
			func_125(449774763);
			func_124(1376646519);
			break;
		case 931649776:
			func_125(1376646519);
			func_125(-434590080);
			func_125(1743048395);
			func_125(449774763);
			func_124(931649776);
			break;
		case -434590080:
			func_125(1376646519);
			func_125(931649776);
			func_125(1743048395);
			func_125(449774763);
			func_124(-434590080);
			break;
		case 1743048395:
			func_125(1376646519);
			func_125(931649776);
			func_125(-434590080);
			func_125(449774763);
			func_124(1743048395);
			break;
		case 449774763:
			func_125(1376646519);
			func_125(931649776);
			func_125(-434590080);
			func_125(1743048395);
			func_124(449774763);
			break;
		case -1414537028:
			func_125(38162571);
			func_125(1350391819);
			func_125(54073871);
			func_124(-1414537028);
			break;
		case 38162571:
			func_125(-1414537028);
			func_125(1350391819);
			func_125(54073871);
			func_124(38162571);
			break;
		case 1350391819:
			func_125(-1414537028);
			func_125(38162571);
			func_125(54073871);
			func_124(1350391819);
			break;
		case 54073871:
			func_125(-1414537028);
			func_125(38162571);
			func_125(1350391819);
			func_124(54073871);
			break;
		case 198200492:
			func_124(198200492);
			func_125(-1124061431);
			func_125(52706132);
			func_125(-259123672);
			break;
		case -1124061431:
			func_125(198200492);
			func_124(-1124061431);
			func_125(52706132);
			func_125(-259123672);
			break;
		case 52706132:
			func_125(198200492);
			func_125(-1124061431);
			func_124(52706132);
			func_125(-259123672);
			break;
		case -259123672:
			func_125(198200492);
			func_125(-1124061431);
			func_125(52706132);
			func_124(-259123672);
			break;
		case -919512195:
			func_124(-919512195);
			func_125(-1925798111);
			func_125(420709909);
			func_125(1703426636);
			break;
		case -1925798111:
			func_124(-1925798111);
			func_125(-919512195);
			func_125(420709909);
			func_125(1703426636);
			break;
		case 420709909:
			func_124(420709909);
			func_125(-919512195);
			func_125(-1925798111);
			func_125(1703426636);
			break;
		case 1703426636:
			func_124(1703426636);
			func_125(-919512195);
			func_125(-1925798111);
			func_125(420709909);
			break;
		case -1223121209:
			func_124(-1223121209);
			func_125(630808005);
			break;
		case 630808005:
			func_124(630808005);
			func_125(-1223121209);
			break;
		case 1453909576:
			func_124(1453909576);
			func_125(1643531967);
			break;
		case 1643531967:
			func_124(1643531967);
			func_125(1453909576);
			break;
		case 0:
			func_124(0);
			func_125(473295046);
			func_125(-1738165526);
			break;
		case 473295046:
			func_124(473295046);
			func_125(0);
			func_125(-1738165526);
			break;
		case -1738165526:
			func_124(-1738165526);
			func_125(0);
			func_125(473295046);
			break;
		case 932909855:
			func_124(932909855);
			func_125(2051822093);
			break;
		case 2051822093:
			func_124(2051822093);
			func_125(932909855);
			break;
		case 405586984:
			func_124(405586984);
			func_125(1509509592);
			func_125(-959357075);
			func_125(-1311865656);
			break;
		case 1509509592:
			func_124(1509509592);
			func_125(405586984);
			func_125(-959357075);
			func_125(-1311865656);
			break;
		case -959357075:
			func_124(-959357075);
			func_125(1509509592);
			func_125(405586984);
			func_125(-1311865656);
			break;
		case -1311865656:
			func_124(-1311865656);
			func_125(1509509592);
			func_125(-959357075);
			func_125(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_124(-524145696);
			}
			else
			{
				func_125(-524145696);
			}
			func_125(1626481264);
			func_125(282809459);
			break;
		case 282809459:
			func_124(282809459);
			func_125(1626481264);
			func_125(-524145696);
			break;
		case 1626481264:
			func_124(1626481264);
			func_125(-524145696);
			func_125(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_124(885203519);
			}
			else
			{
				func_125(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_124(-1080627546);
			}
			else
			{
				func_125(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_124(-510945576);
			}
			else
			{
				func_125(-510945576);
				func_129(385812466);
				func_129(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_124(iParam0);
			}
			else
			{
				func_125(iParam0);
			}
			break;
	}
}

bool func_61(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_130(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

bool func_62(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_63(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_82(iParam0))
	{
		return 1;
	}
	if (func_116(iParam0, 16))
	{
		return 1;
	}
	if (func_131(iParam0) && !func_132(iParam0))
	{
	}
	if (func_133(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_134(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_134(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896620 < iVar0 || &Global_1896620 > iVar1)
		{
			Global_1896620 = iVar0;
		}
		while (true)
		{
			if ((!func_131(iParam0) || func_132(iParam0)) || func_135(&Global_1896620))
			{
				func_136(&Global_1896620, 0);
			}
			Global_1896620 = &Global_1896620 + 1;
			iVar2++;
			if (&Global_1896620 > iVar1)
			{
				Global_1896620 = -1;
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

bool func_64(int iParam0)
{
	return (Global_1940258 && iParam0) != 0;
}

bool func_65(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1900871;
}

struct<2> func_66(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_67(var uParam0, var uParam1)
{
	return uParam0;
}

void func_68(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_62(vParam1))
	{
		return;
	}
	func_137(iParam0);
	Global_1940018->f_5[iParam0]->f_1 = { vParam1 };
	Global_1940018->f_5[iParam0]->f_4 = iParam4;
	Global_1940018->f_5[iParam0]->f_5 = iParam5;
	Global_1940018->f_5[iParam0]->f_6 = func_138(iParam5, iParam0);
}

void func_69(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_62(vParam1))
	{
		return;
	}
	Global_1290948->f_32[iParam0]->f_1 = { vParam1 };
	Global_1290948->f_32[iParam0] = uParam4;
	Global_1290948->f_32[iParam0]->f_4 = iParam5;
	Global_1290948->f_32[iParam0]->f_5 = func_139(iParam5, iParam0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_74() && func_140()))
	{
		if (func_141(255))
		{
			if (_0xf256a75210c5c0eb(iParam1, get_entity_coords(get_player_ped(player_id()), false, false)))
			{
				func_142(1, 1);
			}
		}
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_143(iParam0, 1);
	Global_1051439->f_72[iParam0] = 0;
	Global_1051439->f_72[iParam0]->f_18 = func_144(iParam2, iParam0);
	Global_1051439->f_72[iParam0]->f_24 = iParam1;
	Global_1051439->f_72[iParam0]->f_3 = { _0xf70f00013a62f866(iParam1) };
	Global_1051439->f_72[iParam0]->f_25 = iParam3;
	Global_1051439->f_72[iParam0]->f_27 = iParam4;
	Global_1051439->f_72[iParam0]->f_2 = iParam2;
	Global_1051439->f_72[iParam0]->f_63 = func_145(Global_1051439->f_72[iParam0]->f_18);
	Global_1051439->f_72[iParam0]->f_72 = iParam9;
	Global_1051439->f_72[iParam0]->f_73 = 0;
	Global_1051439->f_72[iParam0]->f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_146(iParam0);
	}
	Global_1051439->f_72[iParam0]->f_10 = fParam8;
	Global_1051439->f_72[iParam0]->f_14 = iParam5;
	if (bParam6)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
	}
	_0xeeb7818b1d307212(Global_1051439->f_72[iParam0]->f_24);
	func_147(iParam0, 4);
	func_148(iParam0);
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = func_149(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1051439->f_72[iParam0]->f_31[iVar0] = func_150(iParam1, 0, 0);
	if (func_151(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
	{
		if (!func_152(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
		{
			func_93(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 0, iParam2, bParam3, 1, 0, iParam4, 0);
		}
	}
	Global_1051439->f_72[iParam0]->f_47++;
}

int func_72(int iParam0, bool bParam1)
{
	if ((func_153(iParam0, 16384) || func_153(iParam0, 32768)) || func_62(Global_1051439->f_72[iParam0]->f_3))
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		if (_does_scenario_point_exist(Global_1915715->f_3[iParam0]->f_16))
		{
			_delete_scenario_point(Global_1915715->f_3[iParam0]->f_16);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		Global_1915715->f_3[iParam0]->f_16 = 0;
		Global_1051439->f_72[iParam0]->f_8 = 0;
		return 0;
	}
	iVar0 = func_144(func_154(), iParam0);
	if ((!bParam1 && func_61(iVar0, &uVar1, &uVar2, &vVar3)) || (bParam1 && func_155(iVar0, &uVar1, &uVar2, &vVar3)))
	{
		func_156(iParam0, uVar1, vVar3, uVar2, 0);
		Global_1051439->f_72[iParam0]->f_3 = { vVar3 };
		Global_1051439->f_72[iParam0]->f_8 = uVar1;
	}
	return Global_1051439->f_72[iParam0]->f_6;
}

void func_73(int iParam0, int iParam1)
{
	func_157(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

bool func_74()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_75()
{
	return func_158(func_66(0));
}

void func_76()
{
	func_159(30);
	func_160(30);
	func_161(30);
	func_162(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_6);
		}
		Global_1051439->f_3634[iVar0]->f_6 = uVar1;
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_13))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_13);
		}
		Global_1051439->f_3634[iVar0]->f_13 = uVar1;
		if (does_blip_exist(Global_1051439->f_3634[iVar0]->f_17))
		{
			remove_blip(&(Global_1051439->f_3634[iVar0]->f_17));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_8))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_8))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_8, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_8));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_15))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_15))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_15, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_15));
		}
		Global_1051439->f_3634[iVar0]->f_1 = 0;
		Global_1051439->f_3634[iVar0]->f_5 = 0;
		Global_1051439->f_3634[iVar0]->f_8 = 0;
		Global_1051439->f_3634[iVar0]->f_15 = 0;
		Global_1051439->f_3634[iVar0]->f_7 = 0;
		Global_1051439->f_3634[iVar0]->f_14 = 0;
		Global_1051439->f_3634[iVar0]->f_9 = -1;
		Global_1051439->f_3634[iVar0] = -1;
		iVar0++;
	}
}

void func_77(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4 && &Global_1051439->f_3634[iVar0] != -1)
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return;
	}
	Global_1051439->f_3634[iVar0]->f_1 = 0;
	Global_1051439->f_3634[iVar0] = iParam0;
	if (func_61(&(Global_1051439->f_3634[iVar0]), &uVar1, &uVar2, &vVar3))
	{
		Global_1051439->f_3634[iVar0]->f_6 = func_163(uVar1, vVar3, uVar2, 0, 0, 0);
		Global_1051439->f_3634[iVar0]->f_2 = { vVar3 };
		_0xa7479fb665361edb(Global_1051439->f_3634[iVar0]->f_6, 0);
		_0xe69fda40aac3efc0(Global_1051439->f_3634[iVar0]->f_6, 0);
	}
	iVar6 = func_164(&(Global_1051439->f_3634[iVar0]));
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		Global_1051439->f_3634[iVar0]->f_9 = iVar6;
		if (func_61(iVar6, &uVar1, &uVar2, &vVar3))
		{
			Global_1051439->f_3634[iVar0]->f_13 = func_163(uVar1, vVar3, uVar2, 0, 0, 0);
			Global_1051439->f_3634[iVar0]->f_10 = { vVar3 };
			_0xa7479fb665361edb(Global_1051439->f_3634[iVar0]->f_13, 0);
			_0xe69fda40aac3efc0(Global_1051439->f_3634[iVar0]->f_13, 0);
		}
	}
	Global_1051439->f_3634[iVar0]->f_5 = func_145(&(Global_1051439->f_3634[iVar0]));
	if (!func_165(30, 4))
	{
		func_147(30, 4);
		func_148(30);
	}
}

void func_78(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051439->f_4427[iVar0] = -1;
		Global_1051439->f_4427[iVar0]->f_3 = 0;
		Global_1051439->f_4427[iVar0]->f_4 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 40:
			func_166(16);
			func_166(17);
			func_166(18);
			func_147(32, 4);
			func_148(32);
			break;
		case 87:
			func_166(132);
			func_147(32, 4);
			func_148(32);
			break;
		case 111:
			func_166(38);
			func_147(32, 4);
			func_148(32);
			break;
		case 5:
			func_166(59);
			func_166(58);
			func_147(32, 4);
			func_148(32);
			break;
		case 26:
			func_166(72);
			func_166(73);
			func_147(32, 4);
			func_148(32);
			break;
	}
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_167(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_168(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

void func_80(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893587->f_182 = fParam0;
	Global_1893587->f_183 = fParam1;
	Global_1893587->f_184 = fParam2;
	Global_1893587->f_185 = fParam3;
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_169(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_82(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_83()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_170(iVar0))
		{
			(*Global_1900702)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_84(int iParam0, int iParam1)
{
	if (!func_170(iParam0))
	{
		return;
	}
	if (!func_171(iParam1))
	{
		return;
	}
	(*Global_1900702)[iParam0] = iParam1;
}

void func_85()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (_does_volume_exist(&(iLocal_124[iVar0])))
		{
			if (is_entity_in_volume(Global_34, &(iLocal_124[iVar0]), false, 0))
			{
				iVar1 = iVar0;
				if (iVar0 == 0)
				{
					bLocal_121 = true;
				}
				else
				{
					bLocal_121 = false;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_121)
	{
		if (func_172() != 1339372314)
		{
			func_173(1339372314, -1);
		}
	}
	else if (func_172() != 1559741032)
	{
		func_173(1559741032, -1);
	}
	if (iVar1 != iLocal_120)
	{
		iLocal_120 = iVar1;
	}
	if (_does_volume_exist(iLocal_91))
	{
		if (!_0xca5c90d40665d5ce(iLocal_91, 0) || !_0xca5c90d40665d5ce(iLocal_91, 1))
		{
			_0x3efabb21e14a6bd1(iLocal_91, 0, 1);
			_0x3efabb21e14a6bd1(iLocal_91, 1, 1);
		}
	}
	if (!is_entity_dead(func_174(250)))
	{
		if (!get_ped_config_flag(func_174(250), 168, true))
		{
			set_ped_config_flag(func_174(250), 168, true);
		}
	}
}

void func_86(int iParam0)
{
	iLocal_171 = iParam0;
}

void func_87()
{
	if (!Local_19.f_15)
	{
		return;
	}
	if (Local_19.f_27 > get_game_timer())
	{
		return;
	}
	if ((!does_entity_exist(Local_19.f_17) && Local_19.f_14 > 1) && Local_19 != 0)
	{
		if (func_175() && func_176(Global_35, Local_19.f_11) < 100f)
		{
			if (Local_19.f_18 == 0)
			{
				Local_19.f_18 = _0x6f3068258a499e52(Local_19, Local_19.f_11, 11);
			}
			else if (_0x1ff441d7954f8709(Local_19.f_18))
			{
				Local_19.f_17 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_19.f_18));
			}
		}
		Local_19.f_27 = get_game_timer() + 1800;
	}
	switch (Local_19.f_14)
	{
		case 0:
			func_177();
			Local_19.f_14 = 1;
			break;
		case 1:
			if (func_178())
			{
				Local_19.f_14 = 2;
			}
			break;
		case 2:
			if (func_179())
			{
				Local_19.f_14 = 3;
				Local_19.f_24 = 0;
				Local_19.f_21 = 0;
				Local_19.f_22 = func_181(func_180());
				if (Local_19.f_22 > 12)
				{
					Local_19.f_22 = (Local_19.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_19.f_25 = 1;
			if (does_entity_exist(Local_19.f_17))
			{
				if (does_entity_have_drawable(Local_19.f_17))
				{
					Local_19.f_25 = 0;
					play_entity_anim(Local_19.f_17, Local_19.f_7, Local_19.f_6, 1000f, false, true, false, 0f, 0);
					Local_19.f_14 = 4;
				}
			}
			if (Local_19.f_21 >= Local_19.f_22)
			{
				Local_19.f_14 = 2;
			}
			break;
		case 4:
			if (func_182(Local_19.f_17, Local_19.f_6, Local_19.f_7, 0))
			{
				play_entity_anim(Local_19.f_17, Local_19.f_8, Local_19.f_6, 1000f, true, true, false, 0f, 0);
				Local_19.f_23 = get_game_timer() + 1800;
				Local_19.f_26 = 0;
				Local_19.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = _get_entity_anim_current_time(Local_19.f_17, Local_19.f_6, Local_19.f_8);
			if (fVar0 > 0.5f)
			{
				if (Local_19.f_26)
				{
					Local_19.f_21++;
					Local_19.f_26 = 0;
				}
			}
			else if (!Local_19.f_26 && fVar0 > 0.05f)
			{
				Local_19.f_21++;
				Local_19.f_26 = 1;
			}
			if (Local_19.f_21 >= Local_19.f_22 && (func_182(Local_19.f_17, Local_19.f_6, Local_19.f_8, 0.02f) || Local_19.f_26))
			{
				play_entity_anim(Local_19.f_17, Local_19.f_9, Local_19.f_6, 8f, false, false, false, 0f, 0);
				Local_19.f_14 = 2;
			}
			break;
	}
	if (Local_19.f_25 && Local_19.f_14 > 2)
	{
		if (_0x714a0ea7de1167be(Local_19.f_10, "CHURCH_BELL_SOUNDS") && Local_19.f_24 < get_game_timer())
		{
			Local_19.f_24 = get_game_timer() + 1800;
			_play_sound_from_position(Local_19.f_10, Local_19.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_19.f_21++;
		}
	}
}

void func_88(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_183(Global_34, iParam1, 1, 0))
		{
			func_185(func_184(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_183(Global_34, iParam1, 1, 0))
	{
		*uParam2 = 0;
	}
}

void func_89()
{
	if (func_186(2504.489f, -1450.591f, 46.31302f, 1) < 225f)
	{
		func_187();
		bLocal_168 = true;
	}
	else if (bLocal_168)
	{
		func_188();
		bLocal_168 = false;
	}
}

void func_90()
{
	func_189(&uLocal_158, &uLocal_160, &uLocal_159, 2753.91f, -1396.01f, 45.21f, 1788943942, 715447956, -523602066);
}

bool func_91(bool bParam0)
{
	if (func_190())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return true;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return true;
	}
	return false;
}

void func_92(int iParam0, int iParam1)
{
	func_93(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_93(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_191(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_192(iParam0, 1);
			}
			else
			{
				func_193(iParam0, 1);
			}
		}
		else
		{
			func_194(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_195())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_94(int iParam0, int iParam1)
{
	func_93(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_97()
{
	return func_95(&Global_1940258, 8192);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_99(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return (((*Global_1887339)[iParam0]->f_21 == 1 || (*Global_1887339)[iParam0]->f_21 == 2) && !func_196(iParam0));
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1887339)[iParam0]->f_22 && iParam1) != 0;
}

int func_101()
{
	return Global_1896622->f_41;
}

void func_102(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_197())
	{
		return;
	}
	sVar1 = func_198(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_199(iParam4))
	{
		if (func_82(iParam0))
		{
			iParam4 = func_200(func_9(iParam0));
		}
		else
		{
			iParam4 = func_200(iParam1);
		}
	}
	if (func_199(iParam4))
	{
		iVar3 = func_201(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_203(func_202(iParam2));
	}
	else if ((func_204(iParam1, 2) || func_205(iParam4, 2)) && !Global_1893587->f_9)
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
		Global_1893587->f_9 = 1;
	}
	else if ((func_82(iParam0) && func_116(iParam0, 16777216)) && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893587->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1893587->f_9 = 1;
	}
	else
	{
		iVar4 = func_181(func_180());
		iVar5 = func_206(func_180());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_35);
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
				fVar7 = func_207(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_208(&cVar6, 109029619), sVar9, func_208(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_207(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_208(&cVar6, 109029619), func_208(&cVar10, 109029619));
		}
		Global_1893587->f_9 = 0;
	}
	Global_1939161->f_145 = func_209(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_104(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_210(iParam0))
	{
		return;
	}
	if (func_116(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_211(Global_1940258, 16384);
	func_185(func_212(-1532769513, -36357794), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_185(func_212(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_185(func_212(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_185(func_212(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_185(func_212(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_185(func_212(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_185(func_212(-1532769513, -910218296), 1);
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
		case 30:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 31:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 32:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 128:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 129:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 131:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 130:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 38:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 120:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 39:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 42:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 44:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 45:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 46:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 47:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 58:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 59:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 52:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 67:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 69:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 70:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 71:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 73:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 76:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 77:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 82:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 84:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 87:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 88:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 90:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 91:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 92:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 94:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 97:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 102:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 104:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 105:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 108:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 110:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 113:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 115:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 118:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		Global_1893587 |= 1;
	}
	else
	{
		Global_1893587 = (&Global_1893587 - Global_1893587 & 1);
	}
}

bool func_106(int iParam0)
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

void func_107()
{
	if (func_118(iLocal_170))
	{
		func_213(iLocal_170);
	}
	func_214(5);
}

int func_108(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

void func_109(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		Global_1893587 |= 2;
	}
	else
	{
		Global_1893587 = (&Global_1893587 - Global_1893587 & 2);
	}
}

void func_111(int iParam0)
{
	iParam0 = iParam0;
	func_80(0.775f, 0.2f, 0.025f, 0f);
	set_species_tuning_bool_param(-1190799868, 0, 48, false);
	_set_scenario_group_enabled_hash(426813831, false);
	if (_does_text_database_exist("SCSFAUD"))
	{
		if (_text_database_has_loaded("SCSFAUD"))
		{
			_text_database_delete("SCSFAUD");
		}
	}
	if (_does_text_database_exist("SCSCAUD"))
	{
		if (_text_database_has_loaded("SCSCAUD"))
		{
			_text_database_delete("SCSCAUD");
		}
	}
	if (_does_text_database_exist("STDRGAU"))
	{
		if (_text_database_has_loaded("STDRGAU"))
		{
			_text_database_delete("STDRGAU");
		}
	}
	if (_does_text_database_exist("RESAMAU"))
	{
		if (_text_database_has_loaded("RESAMAU"))
		{
			_text_database_delete("RESAMAU");
		}
	}
	if (_does_text_database_exist("RERIAUD"))
	{
		if (_text_database_has_loaded("RERIAUD"))
		{
			_text_database_delete("RERIAUD");
		}
	}
	_remove_speed_zone(iLocal_119);
	_remove_guard_zone(sLocal_106);
	func_215(iLocal_107);
	func_215(iLocal_108);
	func_215(iLocal_109);
	func_216();
	set_ambient_zone_state("AZ_Naturalist_Camp", false, true);
}

void func_112(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1940018->f_5[iVar0]->f_5 == iParam0)
		{
			func_137(iVar0);
		}
		iVar0++;
	}
}

void func_113(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915715->f_3[iVar0]->f_8 == iParam0)
		{
			func_217(iVar0);
		}
		iVar0++;
	}
}

bool func_114(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return true;
	}
	if (!func_82(iParam0))
	{
		return true;
	}
	if (func_133(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896620->f_1 < iVar0 || Global_1896620->f_1 > iVar1)
		{
			Global_1896620->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_218(Global_1896620->f_1, 16))
			{
				func_219(Global_1896620->f_1, 0);
			}
			Global_1896620->f_1++;
			iVar2++;
			if (Global_1896620->f_1 > iVar1)
			{
				Global_1896620->f_1 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_220(iVar0) || func_221(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_76();
					break;
				case 32:
					func_222();
					break;
				default:
					if (Global_1051439->f_72[iVar0]->f_2 == iParam0)
					{
						func_143(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_116(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_117(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_118(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return _does_volume_exist(&(Global_26642[iParam0]));
	}
	return false;
}

void func_119(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_120(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_121(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_122(int iParam0)
{
	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_180();
	func_224(iParam0, func_223(iVar0));
	func_226(iParam0, func_225(iVar0));
	func_228(iParam0, func_227(iVar0));
}

void func_123(var uParam0, int iParam1)
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

void func_124(int iParam0)
{
	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_125(int iParam0)
{
	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_126()
{
	func_125(-939420910);
	func_125(-1187950766);
	func_125(356365161);
	func_125(753127042);
	func_125(-2038424081);
	func_125(1884271742);
	func_125(459290420);
}

void func_127()
{
	func_125(704802028);
	func_125(588987611);
	func_125(2008888900);
	func_125(1649996811);
	func_125(227918160);
	func_125(168171957);
	func_125(1193080109);
	func_125(-491981251);
	func_125(-639037538);
	func_125(-618620429);
}

bool func_128(int iParam0)
{
	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_230(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_231(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

void func_129(int iParam0)
{
	if (func_151(iParam0) && func_232())
	{
		remove_door_from_system(iParam0);
	}
}

int func_130(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	Var0 = func_233();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_234(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key(sParam1);
	_datafile_get_hash(uParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key(sParam3);
	_datafile_get_float(uParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key(sParam5);
	_datafile_get_vector(uParam6, &Var0);
	return 1;
}

bool func_131(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 33554432);
}

bool func_132(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
			return true;
		case 37:
			return true;
		case 70:
			return true;
		case 101:
			return true;
	}
	return false;
}

bool func_133(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
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
		case 111:
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
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
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

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_135(int iParam0)
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

int func_136(int iParam0, bool bParam1)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_218(iParam0, 2))
	{
		return 0;
	}
	if (func_218(iParam0, 32) && !bParam1)
	{
		func_236(iParam0, _create_persistent_character(func_235(iParam0)));
		if (func_45() == -1)
		{
			if (func_218(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_168(iParam0));
				func_237(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_168(iParam0));
		}
		return 0;
	}
	if (!func_238(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_168(iParam0)))
	{
		func_237(iParam0, 128);
		return 1;
	}
	func_236(iParam0, _create_persistent_character(func_235(iParam0)));
	_0x4f81ead1de8fa19b(func_168(iParam0));
	if (func_218(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_168(iParam0));
		func_237(iParam0, 2048);
	}
	return 1;
}

void func_137(int iParam0)
{
	func_239(Global_1940018->f_5[iParam0]->f_6, 1);
	func_240(Global_1940018->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1940018->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1940018->f_5[iParam0]->f_8);
	}
	func_241(iParam0, 8192);
	func_241(iParam0, 32768);
	func_241(iParam0, 524288);
	func_241(iParam0, 1048576);
	Global_1940018->f_5[iParam0]->f_10 = 0;
	Global_1940018->f_5[&Global_1940018]->f_9 = 0;
	Global_1940018->f_5[iParam0] = 0;
	Global_1940018->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1940018->f_5[iParam0]->f_4 = 0;
	Global_1940018->f_5[iParam0]->f_5 = -1;
	Global_1940018->f_5[iParam0]->f_6 = -1;
	Global_1940018->f_5[iParam0]->f_7 = 0;
}

int func_138(int iParam0, int iParam1)
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

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_140()
{
	return func_242(func_66(0));
}

bool func_141(int iParam0)
{
	return !func_243(iParam0);
}

void func_142(bool bParam0, bool bParam1)
{
	if (func_244(255) == 4)
	{
		return;
	}
	if (func_62(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_245(0);
	}
	else
	{
		if (bParam1)
		{
			func_246(0, 0, 0, 1);
		}
		func_247(0);
		func_248(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_249(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_250(Global_1102219->f_3849, 36);
	func_251(Global_1102219->f_3888, 36);
}

void func_143(int iParam0, bool bParam1)
{
	bVar0 = (func_252(iParam0) && !bParam1);
	if (!bVar0 && !func_153(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_165(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_153(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_153(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_153(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_165(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_253(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_149(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_129(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_254(iParam0);
	if (func_153(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_159(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_255(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_160(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_162(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_145(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_257(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

float func_146(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
		case 15:
			return 25f;
		case 39:
			return 100f;
	}
	return 12.5f;
}

void func_147(int iParam0, int iParam1)
{
	if (!func_165(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_148(int iParam0)
{
	(*Global_1051439)[Global_1051439->f_41] = iParam0;
	Global_1051439->f_41++;
	if (Global_1051439->f_41 >= 40)
	{
		Global_1051439->f_41 = (40 - 1);
	}
}

int func_149(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

int func_150(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_151(int iParam0)
{
	if (func_258(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_152(int iParam0)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

int func_154()
{
	return Global_1893587->f_2;
}

int func_155(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_130(iParam0, "sClosedHash", uParam1, "fClosedHeading", uParam2, "vClosedPos", uParam3);
}

void func_156(int iParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		get_ground_z_for_3d_coord(vParam2, &(vParam2.f_2), false);
	}
	Global_1051439->f_72[iParam0]->f_6 = func_163(uParam1, vParam2, uParam5, 0, 0, 0);
	Global_1915715->f_3[iParam0]->f_16 = Global_1051439->f_72[iParam0]->f_6;
	_set_scenario_point_flag(Global_1051439->f_72[iParam0]->f_6, 23, true);
	_0xa7479fb665361edb(Global_1051439->f_72[iParam0]->f_6, 0);
	func_147(iParam0, 16384);
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_158(struct<2> Param0)
{
	return func_259(Param0, 9, 12);
}

void func_159(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

void func_160(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_161(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_1 = 0;
}

void func_162(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

var func_163(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 11;
		case 56:
			return 57;
		case 54:
			return 55;
		case 36:
			return 37;
		case 105:
			return 106;
		case 79:
			return 80;
		case 94:
			return 95;
		default:
			break;
	}
	return -1;
}

bool func_165(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

int func_166(int iParam0)
{
	vVar2 = { 0f, 0f, 0f };
	if (!func_61(iParam0, &uVar0, &uVar1, &vVar2) || func_62(vVar2))
	{
		return 0;
	}
	iVar6 = 4;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		if (&Global_1051439->f_4427[iVar5] == -1)
		{
			iVar6 = iVar5;
		}
		else
		{
			iVar5++;
		}
	}
	if (iVar6 == 4)
	{
		return 0;
	}
	Global_1051439->f_4427[iVar6] = iParam0;
	Global_1051439->f_4427[iVar6]->f_6 = func_163(uVar0, vVar2, uVar1, 0, 0, 0);
	Global_1051439->f_4427[iVar6]->f_5 = uVar0;
	_set_scenario_point_flag(Global_1051439->f_4427[iVar6]->f_6, 23, true);
	_0xa7479fb665361edb(Global_1051439->f_4427[iVar6]->f_6, 0);
	func_147(32, 16384);
	iVar7 = 0;
	iVar8 = 0;
	if (func_260(iParam0, &iVar7, &iVar8))
	{
		Global_1051439->f_4427[iVar6]->f_3 = iVar7;
		Global_1051439->f_4427[iVar6]->f_4 = iVar8;
	}
	return 1;
}

bool func_167(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_168(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_174(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_168(iParam0));
}

int func_168(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

bool func_169(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_170(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_171(int iParam0)
{
	return iParam0 != 0;
}

int func_172()
{
	return Global_1939161->f_26;
}

int func_173(int iParam0, int iParam1)
{
	if (Global_1939161->f_26 != iParam0)
	{
		Global_1939161->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_199(iParam1))
		{
			iVar0 = func_261(iParam0);
		}
		if (!func_199(iVar0))
		{
			iVar0 = func_200(func_262(Global_35));
		}
		if (!func_199(iVar0))
		{
			return 0;
		}
		_0x4752f68eb7f2d280(player_id(), Global_1939161->f_26, func_263(iVar0));
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	iVar0 = func_168(iParam0);
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

bool func_175()
{
	if (func_45() == -1)
	{
		return true;
	}
	return can_register_mission_objects(1);
}

float func_176(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_177()
{
	if (Local_19 != 0)
	{
		request_anim_dict(Local_19.f_6);
		request_model(Local_19, false);
		Local_19.f_16 = 1;
	}
}

bool func_178()
{
	if (!is_string_null_or_empty(Local_19.f_6))
	{
		return has_anim_dict_loaded(Local_19.f_6);
	}
	return true;
}

bool func_179()
{
	if (Local_19.f_5 <= 0)
	{
		return false;
	}
	iVar1 = func_180();
	iVar2 = func_181(iVar1);
	iVar3 = func_206(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_19.f_5 - 1))
	{
		iVar4 = func_181(&(Local_19.f_1[iVar0]));
		iVar5 = func_206(&(Local_19.f_1[iVar0]));
		if (iVar4 == iVar2 && absi((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_180()
{
	return &Global_1902818;
}

int func_181(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_182(int iParam0, char* sParam1, char* sParam2, float fParam3)
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

bool func_183(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<2> func_184(int iParam0)
{
	iVar0 = func_264(iParam0);
	return func_212(-277276100, iVar0);
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

float func_186(vector3 vParam0, int iParam3)
{
	return func_265(Global_34, vParam0, iParam3);
}

void func_187()
{
	func_266(iLocal_161[0], 802578733, 2504.532f, -1465.064f, 45.311f);
	func_266(iLocal_161[1], 802578733, 2500.124f, -1465.064f, 45.311f);
	func_266(iLocal_161[2], 802578733, 2499.337f, -1452.443f, 45.311f);
	func_266(iLocal_161[3], -2077259890, 2499.337f, -1448.036f, 45.311f);
	func_266(iLocal_161[4], 802578733, 2500.124f, -1435.318f, 45.311f);
	func_266(iLocal_161[5], 802578733, 2500.53f, -1435.318f, 45.311f);
}

void func_188()
{
	iVar0 = 0;
	while (iVar0 < iLocal_161)
	{
		func_267(iLocal_161[iVar0]);
		iVar0++;
	}
}

int func_189(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	if (func_268(Global_34, vParam3, 1) > 900f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (does_entity_exist(*uParam1))
		{
			if (!decor_exist_on(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!_does_scenario_point_exist(*uParam2))
	{
		*uParam2 = _find_closest_active_scenario_point_of_type(vParam3, iParam8, 1f, 0, false);
		return 0;
	}
	else if (!does_entity_exist(*uParam1))
	{
		iVar0 = _get_scenario_point_entity(*uParam2, "PrimaryItem");
		*uParam1 = get_object_index_from_entity_index(iVar0);
		_request_streamed_txd(iParam6, false);
		return 0;
	}
	else
	{
		if (!_has_streamed_txd_loaded(iParam6))
		{
			_request_streamed_txd(iParam6, false);
			return 0;
		}
		if (does_entity_exist(*uParam1))
		{
			if (!decor_exist_on(*uParam1, "letter_item"))
			{
				decor_set_int(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				_set_apply_object_txd(*uParam1, iParam6, 0, 0);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

bool func_190()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_191(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_195()
{
	return true;
}

bool func_196(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_269())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_197()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_270())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1939161->f_75.f_55))
	{
		return false;
	}
	if (func_271(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1893587->f_162)))
	{
		sVar0 = func_272(Global_1893587->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_274(func_273(Global_35));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_275(iParam0) || func_276(44))
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
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
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

bool func_199(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_200(int iParam0)
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

int func_201(int iParam0)
{
	if (!func_199(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_277(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

int func_202(int iParam0)
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

char* func_203(int iParam0)
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

bool func_204(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_205(int iParam0, int iParam1)
{
	if (!func_199(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

int func_206(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_207(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_208(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_278(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_209(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_210(int iParam0)
{
	if (func_275(iParam0))
	{
		if (!func_276(44))
		{
			return false;
		}
	}
	return true;
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_212(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 5)
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	if (_does_volume_exist(&(Global_26642[iParam0])))
	{
		_delete_volume(&(Global_26642[iParam0]));
	}
	if (&Global_26642.f_6[iParam0] != 1f)
	{
		Global_26642.f_6[iParam0] = 1f;
	}
}

void func_214(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			_delete_volume(&(Global_1290948->f_47[0]));
			_delete_volume(&(Global_1290948->f_47[1]));
			_delete_volume(&(Global_1290948->f_50[0]));
			_delete_volume(&(Global_1290948->f_50[1]));
			break;
		case 81:
			_delete_volume(&(Global_1290948->f_47[1]));
			_delete_volume(&(Global_1290948->f_50[1]));
			break;
	}
}

void func_215(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_216()
{
	if (does_entity_exist(Local_19.f_17))
	{
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_7, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_7, -1000f);
		}
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_8, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_8, -1000f);
		}
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_9, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_9, -1000f);
		}
	}
	if (Local_19.f_16)
	{
		if (has_anim_dict_loaded(Local_19.f_6))
		{
			remove_anim_dict(Local_19.f_6);
		}
		Local_19.f_16 = 0;
	}
	if (Local_19.f_18 != 0)
	{
		_0xd2b9c78537ed5759(Local_19.f_18);
	}
}

void func_217(int iParam0)
{
	if (func_134(Global_1915715->f_3[iParam0]->f_21) && func_279(Global_1915715->f_3[iParam0]->f_21))
	{
		func_280(Global_1915715->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1915715->f_3[iParam0]->f_10 = { 0f, 0f, 0f };
	Global_1915715->f_3[iParam0]->f_21 = -1;
	Global_1915715->f_3[iParam0]->f_22 = -1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	Global_1915715->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1915715->f_3[iParam0]->f_35))
	{
		remove_scenario_blocking_area(Global_1915715->f_3[iParam0]->f_35, false);
	}
	func_281(Global_1915715->f_3[iParam0]->f_9, 0);
	func_282(iParam0, 536870912);
	iVar1 = func_283(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_129(&(Global_1915715->f_3[iParam0]->f_318[iVar0]));
			Global_1915715->f_3[iParam0]->f_318[iVar0] = 0;
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_4 = 0f;
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	if (Global_1915715->f_3[iParam0]->f_441 != 0)
	{
		_0x2f901291ef177b02(Global_1915715->f_3[iParam0]->f_441, 0);
	}
	Global_1915715->f_3[iParam0]->f_23 = 0;
	func_284(iParam0);
	Global_1915715->f_3[iParam0]->f_9 = -1;
	Global_1915715->f_3[iParam0]->f_8 = -1;
}

bool func_218(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_219(int iParam0, bool bParam1)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_218(iParam0, 2))
	{
		return 0;
	}
	if (func_235(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_168(iParam0)))
	{
		return 1;
	}
	if (func_218(iParam0, 1) && !bParam1)
	{
		func_285(iParam0, 128);
		return 1;
	}
	func_237(iParam0, 129);
	func_286(iParam0);
	_0xfc77c5b44d5ff7c0(func_168(iParam0));
	func_236(iParam0, 0);
	return 1;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_222()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051439->f_4427[iVar0] = -1;
		Global_1051439->f_4427[iVar0]->f_3 = 0;
		Global_1051439->f_4427[iVar0]->f_4 = 0;
		Global_1051439->f_4427[iVar0]->f_7 = 0;
		if (_does_scenario_point_exist(Global_1051439->f_4427[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_4427[iVar0]->f_6);
		}
		iVar0++;
	}
	func_162(32);
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

void func_224(int iParam0, int iParam1)
{
	iVar0 = func_225(*iParam0);
	iVar1 = func_227(*iParam0);
	if (iParam1 < 1 || iParam1 > func_287(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

int func_225(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

void func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

int func_227(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_288(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

void func_228(int iParam0, int iParam1)
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

int func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_230(int iParam0)
{
	iVar0 = func_289(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_231(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_232()
{
	return true;
}

var func_233()
{
	return Global_1071686->f_28448[48]->f_3;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

void func_236(int iParam0, int iParam1)
{
	if (!func_134(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

void func_237(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

bool func_238(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_218(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0, bool bParam1)
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

void func_241(int iParam0, int iParam1)
{
	func_117(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

bool func_242(struct<2> Param0)
{
	return func_259(Param0, 5, 8);
}

bool func_243(int iParam0)
{
	return func_290(1, iParam0);
}

int func_244(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

int func_245(int iParam0)
{
	if (func_291(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_292(iParam0);
	if (!func_293(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_294(128) && !func_295(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_296() == 4)
	{
		func_245(18);
	}
	func_297(1024);
}

int func_247(int iParam0)
{
	if (func_298(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_248(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_249(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_250(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_251(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_252(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_153(iParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_253(int iParam0, int iParam1)
{
	if (func_165(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

void func_254(int iParam0)
{
}

bool func_255(int iParam0, int iParam1)
{
	return func_299(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

bool func_256(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_257(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_300(12, func_234(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_258(int iParam0)
{
	return iParam0 != 0;
}

bool func_259(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_301(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_302(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_260(int iParam0, int iParam1, int iParam2)
{
	Var0 = func_233();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_234(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = 110382701;
	Var0.f_3 = get_hash_key("startTime");
	_datafile_get_int(iParam1, &Var0);
	Var0.f_2 = 110382701;
	Var0.f_3 = get_hash_key("endTime");
	_datafile_get_int(iParam2, &Var0);
	return true;
}

int func_261(int iParam0)
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

int func_262(vector3 vParam0)
{
	return func_303(_get_map_zone_at_coords(vParam0, 10));
}

int func_263(int iParam0)
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

int func_264(int iParam0)
{
	iVar0 = func_234(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

float func_265(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_266(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (is_model_valid(iParam1))
		{
			*uParam0 = _0x6f3068258a499e52(iParam1, vParam2, 7);
		}
	}
}

void func_267(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (_0x1ff441d7954f8709(*uParam0))
	{
		_0xd2b9c78537ed5759(*uParam0);
	}
}

float func_268(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_304(vVar0, vParam1);
}

bool func_269()
{
	return false;
}

bool func_270()
{
	if (func_45() != 0)
	{
		return true;
	}
	if (func_305())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_306() };
	if (func_301(Var0))
	{
		return false;
	}
	Var2 = { func_307() };
	if (func_301(Var2))
	{
		return false;
	}
	return true;
}

bool func_271(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_305())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_301(func_66(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_67(func_66(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_273(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_308(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_274(int iParam0)
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

bool func_275(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	if (!func_309(iParam0))
	{
		return false;
	}
	return func_310(iParam0);
}

struct<7> func_277(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_278(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_279(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	return (*Global_1893775)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_280(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_134(iParam0))
	{
		return;
	}
	if (!func_218(iParam0, 1))
	{
		return;
	}
	if (!func_218(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_279(iParam0)) && func_311(iParam0))
	{
		return;
	}
	func_237(iParam0, 1);
	func_286(iParam0);
	if (func_312(func_235(iParam0)))
	{
		iVar0 = func_168(iParam0);
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
		func_237(iParam0, 16);
	}
	if (func_218(iParam0, 128) && !bParam3)
	{
		func_219(iParam0, 0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_313(iParam0, 1024))
		{
			func_314(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_313(iParam0, 1024))
	{
		func_315(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_316(iParam0);
}

void func_282(int iParam0, int iParam1)
{
	if (!func_317(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

int func_283(int iParam0)
{
	return Global_1915715->f_3[iParam0]->f_409;
}

void func_284(int iParam0)
{
	Global_1915715->f_3[iParam0]->f_6 = 0;
}

void func_285(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

void func_286(int iParam0)
{
	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

int func_287(int iParam0, int iParam1)
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

int func_288(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_289(int iParam0)
{
	return func_318(iParam0) + 30;
}

bool func_290(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_320())
	{
		return func_319(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_319(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_291(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_292(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_293(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_294(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_295(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_296()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_297(int iParam0)
{
	if (func_321(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_298(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_300(int iParam0, int iParam1, var uParam2)
{
	if (func_322(iParam0, iParam1, &uVar0))
	{
		func_323(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_301(struct<2> Param0)
{
	if (!func_324(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_325(Param0))
	{
		return false;
	}
	return true;
}

int func_302(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_326(Param0);
	}
	return -1;
}

int func_303(int iParam0)
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

float func_304(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_305()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_301(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_306()
{
	return *Global_1051213;
}

struct<2> func_307()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_66(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_66(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_308(vector3 vParam0, int iParam3)
{
	func_327(iParam3, &vVar0, &Var3, &uVar6);
	if (func_328(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_311(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1893775)[iParam0]->f_2);
}

bool func_312(int iParam0)
{
	return iParam0 != 0;
}

bool func_313(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

void func_314(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (Global_1915715->f_17884[iParam0] || iParam1);
}

void func_315(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

void func_316(int iParam0)
{
	func_330(func_329(iParam0));
}

bool func_317(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_318(int iParam0)
{
	return iParam0 * 31;
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_320()
{
	return Global_1102219->f_3672;
}

bool func_321(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_322(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_331(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_323(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

bool func_324(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

int func_326(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_332(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_328(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_329(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_330(int iParam0)
{
	Global_1915715->f_18247 = iParam0;
}

int func_331(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

bool func_332(struct<2> Param0, var uParam2)
{
	if (!func_301(Param0))
	{
		return false;
	}
	func_333(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

void func_333(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

