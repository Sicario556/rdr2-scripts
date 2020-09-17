void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_67 = "PROPS_MISC@ANNESBURG_COAL";
	iLocal_68 = 20000;
	iLocal_71 = vScriptParam_0.x;
	iLocal_69 = vScriptParam_0.z;
	bLocal_73 = false;
	if (Global_1901947->f_1.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_70 = get_game_timer();
	iVar0 = 0;
	while (func_4())
	{
		if (get_game_timer() > iLocal_70)
		{
			iLocal_70 = 0;
			func_5(iLocal_71, &iLocal_69);
			switch (iLocal_69)
			{
				case 0:
					if (Global_1901947->f_1.f_26 > 0)
					{
						iLocal_72 = (get_game_timer() + Global_1901947->f_1.f_26);
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_72 < get_game_timer())
					{
						bLocal_73 = false;
						iLocal_69 = 2;
					}
					break;
				case 2:
					func_6(iLocal_71);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_71)))
					{
						func_11(func_9(iLocal_71), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_12(iLocal_71));
					Global_1896620 = -1;
					iLocal_72 = (iLocal_68 + get_game_timer());
					iLocal_69 = 3;
					break;
				case 3:
					if (func_13() || iLocal_72 < get_game_timer())
					{
						func_14(iLocal_71);
						iLocal_72 = (iLocal_68 + get_game_timer());
						iLocal_69 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_71) || iLocal_72 < get_game_timer())
					{
						func_16(iLocal_71);
						iLocal_72 = (get_game_timer() + iLocal_68);
						iLocal_69 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_71) || iLocal_72 < get_game_timer())
					{
						func_18(iLocal_71);
						iLocal_72 = (iLocal_68 + get_game_timer());
						iLocal_69 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_71)))
					{
						if (func_19(func_9(iLocal_71), 4) && !iLocal_72 < get_game_timer())
						{
						}
						else
						{
							if (func_20(iLocal_71) || iLocal_72 < get_game_timer())
							{
								func_21(iLocal_71, 4);
								iLocal_72 = (iLocal_68 + get_game_timer());
								iLocal_69 = 8;
							}
							Jump @817; //curOff = 533
							func_22(iLocal_71);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_71);
							func_30(iLocal_71);
							func_31();
							func_32();
							iLocal_69 = 9;
							Jump @817; //curOff = 601
							func_33(iLocal_71);
							func_34();
							iLocal_69 = 10;
							Jump @817; //curOff = 618
							func_35(Global_1896674);
							func_36(iLocal_71, Global_1896674);
							iLocal_69 = 11;
							Jump @817; //curOff = 643
							func_37(iLocal_71);
							func_21(iLocal_71, 8);
							if (func_38(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_39(32);
							}
							iLocal_69 = 12;
							Jump @817; //curOff = 693
							if (func_40(iLocal_71))
							{
								iLocal_70 = get_game_timer() + 1000;
							}
							func_41(Global_1896674, iLocal_71);
							func_42(iLocal_71);
							func_21(iLocal_71, 8);
							if (func_43())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1887339)[iLocal_71]->f_11);
							if ((*Global_1887339)[iLocal_71]->f_12 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1887339)[iLocal_71]->f_12);
							}
							Jump @817; //curOff = 794
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if ((*Global_1887339)[iLocal_71]->f_13 != 0)
						{
							_0x95423627a9ca598e((*Global_1887339)[iLocal_71]->f_13);
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
	if (!bLocal_73)
	{
		if (&Global_1051139)
		{
			bLocal_73 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_73 = true;
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
	bLocal_73 = false;
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
	iLocal_29 = (*Global_1887339)[83]->f_5;
	_0xb469cfd9e065eb99(iLocal_29, 20);
	func_53();
	iLocal_38 = _create_volume_aggregate_with_custom_name("Annesburg - m_volPostOfficeOwner Agg");
	_0x39816f6f94f385ad(iLocal_38, 2935.558f, 1282.429f, 45.47895f, 0f, 0f, -110f, 12.3f, 6.147137f, 3.628f);
	_0x39816f6f94f385ad(iLocal_38, 2938.688f, 1280.857f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	_0x39816f6f94f385ad(iLocal_38, 2939.422f, 1288.475f, 45.479f, 0f, 0f, -110f, 1.738f, 1.755f, 3.628f);
	_0x39816f6f94f385ad(iLocal_38, 2931.347f, 1283.163f, 45.744f, 0f, 0f, 160f, 2.301f, 3.055f, 3.645f);
	iLocal_53 = _create_volume_box_with_custom_name(2941.031f, 1280.036f, 45.139f, 0f, 0f, -19.946f, 3.323f, 4.695f, 2.997f, "Annesburg - m_volPostOfficeProblemArea");
	iLocal_39 = _create_volume_aggregate_with_custom_name("Annesburg - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(iLocal_39, 2939.491f, 1288.495f, 45.104f, 0f, 0f, 70f, 1f, 1.25f, 3f);
	iLocal_40 = _create_volume_aggregate_with_custom_name("Annesburg - m_volPostOfficeOfflimits Agg");
	_0x39816f6f94f385ad(iLocal_40, 2935.558f, 1282.429f, 45.47895f, 0f, 0f, -110f, 12.3f, 6.147137f, 3.628f);
	_0x39816f6f94f385ad(iLocal_40, 2938.688f, 1280.857f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	iLocal_41 = _create_volume_aggregate_with_custom_name("Annesburg - m_volPostOfficePARENT Agg");
	_0x6e0d3c3f828da773(iLocal_41, iLocal_38);
	_0x6e0d3c3f828da773(iLocal_41, iLocal_40);
	_0xb469cfd9e065eb99(iLocal_41, 10076);
	iLocal_30 = _create_volume_cylinder_with_custom_name(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "Annesburg - m_volTownRestriction");
	func_54(iLocal_30);
	iLocal_37 = _create_volume_aggregate_with_custom_name("Annesburg - m_volTrainStation Agg");
	_0x39816f6f94f385ad(iLocal_37, 2933.266f, 1280.733f, 45.139f, 0f, 0f, -19.946f, 9.797f, 26.429f, 2.997f);
	_0x39816f6f94f385ad(iLocal_37, 2933.951f, 1282.62f, 45.139f, 0f, 0f, -19.946f, 11.758f, 4.209f, 2.997f);
	func_55();
	if (!network_is_game_in_progress())
	{
		func_56();
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	request_script_audio_bank("JAMESON_4_A");
	request_ptfx_asset();
	func_57();
}

bool func_17(int iParam0)
{
	bVar0 = func_45() == -1;
	if (bVar0)
	{
		_text_database_request("ASBGAUD");
		if (!_text_database_has_loaded("ASBGAUD"))
		{
			return false;
		}
		if (!has_script_loaded("train_annesburg"))
		{
			request_script("train_annesburg");
			return false;
		}
	}
	return true;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896622[iParam0] && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return func_58(iParam0, -1, -1, 0);
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
	if (func_59(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_60(5000))
		{
			return true;
		}
	}
	switch (func_62(func_61(0)))
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
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	func_63(25, iLocal_31, iParam0, 0, 0, 2, 0, 0, -1082130432, 0);
	func_64(25, 1);
	func_64(25, 16384);
	func_64(25, 8192);
	func_64(25, 536870912);
	func_63(6, iLocal_32, iParam0, iLocal_33, iLocal_34, 20, 0, 0, -1082130432, 0);
	func_65(6, 0);
	func_63(2, iLocal_38, iParam0, iLocal_39, iLocal_40, 1277952, 0, 0, -1082130432, 0);
	func_66(2, 167427363, 0, 0, 0);
	func_66(2, 1781387061, 0, 0, 0);
	func_66(2, 1256624295, 0, 0, 0);
	func_66(2, -1472554838, 0, 0, 0);
	func_66(2, 1926602045, 0, 0, 0);
	func_66(2, 525319959, 0, 0, 0);
	func_66(2, 840950967, 0, 0, 0);
	func_66(2, -1174266594, 0, 0, 0);
	func_66(2, 674789769, 0, 0, 0);
	func_66(2, 760362377, 0, 0, 0);
	func_66(2, 454004996, 0, 0, 0);
	func_65(2, 0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	func_67(379, iLocal_35, 1);
	func_67(378, iLocal_41, 1);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_68(0.8f, 0.2f, 0f, 0f);
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
	func_69(uParam1, iLocal_29, 1);
	func_69(uParam1, iLocal_35, 2);
	func_69(uParam1, iLocal_41, 10);
}

void func_37(int iParam0)
{
	if (!func_70(iParam0))
	{
		return;
	}
	func_71();
	func_72(0, -1855532022);
	func_72(2, 617504531);
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
	if (!bLocal_66)
	{
		if (func_73())
		{
			func_74();
			bLocal_66 = true;
		}
	}
	if (func_75(&bLocal_54))
	{
		if (bLocal_54)
		{
			if (func_76())
			{
				func_77(-1413258107, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_77(-1413258107, 1, 0, 0, 0, 0, 0, 0);
			}
			func_77(1321590180, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	func_78(iLocal_53);
	func_79(2, iLocal_37, &uLocal_36);
	return false;
}

void func_41(var uParam0, int iParam1)
{
	if ((vdist(Global_35, 0f, 0f, 0f) <= 5f || func_80(&Global_1940258, 32768)) || func_80(&Global_1940258, 16777216))
	{
		return;
	}
	if (func_81(uParam0, 1))
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
	bVar2 = func_82();
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
							if ((!func_83((*uParam0)[iVar3], 1) && func_84(iParam1)) && !func_85(iParam1, 16))
							{
								func_87(iParam1, func_86(), -1, 0, -1, 0);
								func_88((*uParam0)[iVar3], 1);
							}
							func_89(iParam1, 0);
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
	func_90(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
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
	if (func_91(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_92();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_21(iLocal_71, 2048);
		if (chal_is_goal_active(-663946200, 1055032020))
		{
			switch (iLocal_71)
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
					chal_add_goal_progress_int_by_score_id(func_93(iLocal_71, 0), 1);
					break;
			}
		}
		if (func_10(func_86()))
		{
			func_11(func_86(), 8);
		}
		func_94(iLocal_71, 4);
		func_94(iLocal_71, 8);
		func_90(0);
		if (func_45() == -1)
		{
			func_95(0);
		}
		func_96(iLocal_71);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_97(iLocal_71);
		func_98(iLocal_71);
		if (!func_99(iLocal_71, 0))
		{
			return false;
		}
	}
	else if (!func_100(iLocal_71))
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
	if (!func_70(iParam0))
	{
		return false;
	}
	return func_101(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893587->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893587->f_7 = (Global_1893587->f_7 - (Global_1893587->f_7 && iParam0));
}

void func_53()
{
	iLocal_32 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGunsmithShop Agg");
	_0x39816f6f94f385ad(iLocal_32, 2946.756f, 1319.464f, 45.773f, 0f, 0f, 160.007f, 7.3f, 8.558f, 3.886f);
	_0x39816f6f94f385ad(iLocal_32, 2951.497f, 1315.359f, 45.397f, 0f, 0f, 70.668f, 4.201f, 6.8f, 3.221f);
	_0x39816f6f94f385ad(iLocal_32, 2944.162f, 1323.462f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	_0x39816f6f94f385ad(iLocal_32, 2942.231f, 1318.028f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	iLocal_34 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGunsmithOff Agg");
	_0x39816f6f94f385ad(iLocal_34, 2951.393f, 1315.45f, 45.443f, 0f, 0f, 159.953f, 4.981f, 4.126f, 3.559f);
	_0x39816f6f94f385ad(iLocal_34, 2948.723f, 1318.755f, 45.71739f, 0f, 0f, 159.9526f, 1.816379f, 2.277752f, 3.783344f);
	iLocal_35 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGunsmithPARENT Agg");
	_0x6e0d3c3f828da773(iLocal_35, iLocal_32);
	_0x6e0d3c3f828da773(iLocal_35, iLocal_34);
	iLocal_33 = _create_volume_box_with_custom_name(2946.482f, 1320.09f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 3.783344f, "Annesburg - m_volGunsmithPrompt");
	_0xb469cfd9e065eb99(iLocal_32, 10074);
}

void func_54(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_55()
{
	iLocal_31 = _create_volume_box_with_custom_name(func_102(83), 0f, 0f, 160.5434f, 7.539f, 7.226621f, 3.527f, "Annesberg - m_volSheriff");
	_0x3efabb21e14a6bd1(iLocal_31, 5, 1);
}

void func_56()
{
	iLocal_50 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardRestrictedMines");
	_0x39816f6f94f385ad(iLocal_50, 2778.796f, 1394.792f, 69.89557f, 0f, 0f, 162.6054f, 47.3562f, 17.70435f, 4.921822f);
	_0x39816f6f94f385ad(iLocal_50, 2731.457f, 1387.03f, 69.47391f, 0f, 0f, 174.5427f, 51.89223f, 75.50195f, 5.399319f);
	_0x39816f6f94f385ad(iLocal_50, 2766.449f, 1372.934f, 69.97977f, 0f, 0f, 179.7893f, 42.35742f, 40.00592f, 7.371945f);
	_0x39816f6f94f385ad(iLocal_50, 2745.149f, 1325.543f, 70.53976f, 0f, 0f, -124.3671f, 68.93018f, 48.94287f, 6.861679f);
	iLocal_51 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardWarningMines");
	_0x6e0d3c3f828da773(iLocal_51, iLocal_50);
	_0x39816f6f94f385ad(iLocal_51, 2798.54f, 1378.204f, 71.38834f, 0f, 0f, 114.3251f, 12.14124f, 9.256836f, 2.566116f);
	_0x39816f6f94f385ad(iLocal_51, 2786.636f, 1340.301f, 72.13432f, 0f, 0f, -169.2597f, 36f, 20.0387f, 5.186172f);
	iLocal_49 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardRegistrationMines Agg");
	_0x6e0d3c3f828da773(iLocal_49, iLocal_51);
	_0xbce668aaf83608be(iLocal_49, 2746.364f, 1358.945f, 70.39893f, 0f, 0f, 0f, 84.91821f, 80.12947f, 16.40755f);
	sLocal_48 = "ANNESBURG_MINES";
	_create_guard_zone(sLocal_48);
	_0x8c598a930f471938(sLocal_48, iLocal_49);
	_0x35815f372d43e1e5(sLocal_48, iLocal_50);
	_0xad3e07c37a7c1adc(sLocal_48, iLocal_51);
	_set_guard_zone_position(sLocal_48, 2751.873f, 1317.464f, 70.3442f);
	_0xa8a74aa79fb67159(sLocal_48, iLocal_49);
	iLocal_45 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardThreatFactory");
	_0x39816f6f94f385ad(iLocal_45, 2941.719f, 1379.844f, 54.23869f, 0f, 0f, -20.52175f, 20f, 9.64209f, 8f);
	_0x39816f6f94f385ad(iLocal_45, 2956.943f, 1374.144f, 56.70911f, 0f, 0f, -20.52175f, 8f, 9.64209f, 3f);
	_0x39816f6f94f385ad(iLocal_45, 2921.606f, 1378.958f, 57.36378f, 0f, 0f, -19.99977f, 9.862305f, 3.548828f, 4.311089f);
	_0x39816f6f94f385ad(iLocal_45, 2929.823f, 1391.119f, 57.1455f, 0f, 0f, 159.4647f, 10.5f, 4f, 5f);
	_0x39816f6f94f385ad(iLocal_45, 2890.918f, 1392.686f, 65.82047f, 0f, 0f, 159.4647f, 5f, 4f, 5f);
	_0x39816f6f94f385ad(iLocal_45, 2891.106f, 1397.907f, 65.7927f, 0f, 0f, 159.4647f, 8f, 8f, 4f);
	_0x39816f6f94f385ad(iLocal_45, 2882.034f, 1399.818f, 71.60069f, 0f, 0f, -18.42616f, 11.89791f, 14.37344f, 8.176727f);
	_0x39816f6f94f385ad(iLocal_45, 2873.382f, 1397.755f, 69.09045f, 0f, 0f, -109.1993f, 3.7f, 2.85f, 4f);
	_0x39816f6f94f385ad(iLocal_45, 2870.781f, 1405.204f, 69.09045f, 0f, 0f, -109.1993f, 8f, 12.75f, 5.5f);
	iLocal_44 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardRestrictedFactory");
	_0x6e0d3c3f828da773(iLocal_44, iLocal_45);
	_0x39816f6f94f385ad(iLocal_44, 2947.967f, 1377.505f, 54.23869f, 0f, 0f, -20.52174f, 33.40112f, 9.64209f, 8.798882f);
	_0x39816f6f94f385ad(iLocal_44, 2921.375f, 1386.594f, 59.35508f, 0f, 0f, -19.9723f, 22.21967f, 10.34818f, 8.176826f);
	_0x39816f6f94f385ad(iLocal_44, 2903f, 1393.487f, 62.41521f, 0f, 22.36725f, -18.6568f, 20.50081f, 4.178955f, 4.300679f);
	_0x39816f6f94f385ad(iLocal_44, 2886.151f, 1398.552f, 67.75819f, 0f, 0f, -17.09603f, 20.41762f, 12.63306f, 8.176727f);
	_0x39816f6f94f385ad(iLocal_44, 2931.633f, 1376.08f, 53.74407f, 0f, 0f, -19.99976f, 10f, 4.548828f, 8f);
	_0x39816f6f94f385ad(iLocal_44, 2927.823f, 1391.53f, 56.10883f, 0f, 0f, 159.4647f, 14.87891f, 4.287598f, 5.781578f);
	_0x39816f6f94f385ad(iLocal_44, 2879.041f, 1385.799f, 76.87366f, 0f, 0f, 74.31805f, 7.497559f, 6.367218f, 15.01529f);
	_0x39816f6f94f385ad(iLocal_44, 2877.706f, 1411.105f, 68.60784f, 0f, 0f, -109.1993f, 8.661057f, 9.821352f, 5.5f);
	_0x39816f6f94f385ad(iLocal_44, 2868.376f, 1406.596f, 68.84293f, 0f, 0f, 70.84104f, 16.76896f, 14.31861f, 5.512192f);
	_0x39816f6f94f385ad(iLocal_44, 2961.819f, 1372.318f, 54.22138f, 0f, 0f, -20.52175f, 4f, 6f, 3f);
	_0x39816f6f94f385ad(iLocal_44, 2862.852f, 1453.412f, 68.60784f, 0f, 0f, 60f, 17f, 14.5f, 5.5f);
	_0x39816f6f94f385ad(iLocal_44, 2856.053f, 1440.646f, 68.60784f, 0f, 0f, 60f, 11f, 12f, 5.5f);
	iLocal_46 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardWarningFactory");
	_0x6e0d3c3f828da773(iLocal_46, iLocal_44);
	_0x39816f6f94f385ad(iLocal_46, 2885.087f, 1390.311f, 64.77302f, 0f, 0f, 74.31805f, 11f, 5.055176f, 3.791058f);
	_0x39816f6f94f385ad(iLocal_46, 2873.519f, 1405.156f, 68.60784f, 0f, 0f, -109.1993f, 24.00397f, 30.25238f, 5.5f);
	_0x39816f6f94f385ad(iLocal_46, 2960.251f, 1380.218f, 52.1091f, 0f, 0f, 70.33841f, 4.079863f, 5.097966f, 4.737656f);
	_0x39816f6f94f385ad(iLocal_46, 2959.772f, 1382.529f, 51.43845f, 180f, 58.71566f, -109.6616f, 4.079863f, 2.205975f, 4.737656f);
	_0x39816f6f94f385ad(iLocal_46, 2921.698f, 1395.326f, 55.71815f, 0f, 0f, 74.31805f, 7.497559f, 7.223577f, 6f);
	_0x39816f6f94f385ad(iLocal_46, 2867.994f, 1460.895f, 68.84293f, 0f, 0f, 57.87753f, 36.40476f, 16.11485f, 5.512192f);
	_0x39816f6f94f385ad(iLocal_46, 2856.1f, 1439.699f, 68.84293f, 0f, 0f, 60f, 12.37818f, 13.83511f, 5.512192f);
	_0xbce668aaf83608be(iLocal_46, 2875.003f, 1459.517f, 67.87074f, 0f, 0f, -27.09153f, 8.940713f, 19.95108f, 3.542988f);
	iLocal_43 = _create_volume_aggregate_with_custom_name("Annesburg - m_volGuardRegistrationFactory Agg");
	_0x6e0d3c3f828da773(iLocal_43, iLocal_46);
	_0xbce668aaf83608be(iLocal_43, 2929.186f, 1382.264f, 6.988285f, 0f, 0f, 24.12213f, 101.644f, 161.2632f, 79.15946f);
	iLocal_47 = _create_volume_cylinder_with_custom_name(2860.579f, 1374.223f, 6.988285f, 0f, 0f, -18.32627f, 181.8184f, 201.7612f, 79.15946f, "Annesburg - m_volGuardDefensiveFactory");
	sLocal_42 = "ANNESBURG_FACTORY";
	_create_guard_zone(sLocal_42);
	_0x8c598a930f471938(sLocal_42, iLocal_43);
	_0x35815f372d43e1e5(sLocal_42, iLocal_44);
	_0xa1b0e6301e2e02a6(sLocal_42, iLocal_45);
	_0xad3e07c37a7c1adc(sLocal_42, iLocal_46);
	_set_guard_zone_position(sLocal_42, 2922.172f, 1380.257f, 56.7411f);
	_0xa8a74aa79fb67159(sLocal_42, iLocal_47);
}

void func_57()
{
	request_anim_dict(sLocal_67);
	request_model(-904994761, false);
	request_model(-238202707, false);
	request_model(-291277537, false);
	request_model(-914117568, false);
	request_model(-2006868292, false);
	request_model(245079671, false);
	request_model(-784275669, false);
	request_model(612192203, false);
	request_model(364541094, false);
	request_model(-2145170802, false);
	request_model(1845715267, false);
}

int func_58(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_70(iParam0))
	{
		return 1;
	}
	if (func_101(iParam0, 16))
	{
		return 1;
	}
	if (func_103(iParam0) && !func_104(iParam0))
	{
	}
	if (func_105(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_106(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_106(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896620 < iVar0 || &Global_1896620 > iVar1)
		{
			Global_1896620 = iVar0;
		}
		while (true)
		{
			if ((!func_103(iParam0) || func_104(iParam0)) || func_107(&Global_1896620))
			{
				func_108(&Global_1896620, 0);
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

bool func_59(var uParam0)
{
	return (Global_1940258 && uParam0) != 0;
}

bool func_60(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1900871;
}

struct<2> func_61(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_62(var uParam0, var uParam1)
{
	return uParam0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_109() && func_110()))
	{
		if (func_111(255))
		{
			if (_0xf256a75210c5c0eb(iParam1, get_entity_coords(get_player_ped(player_id()), false, false)))
			{
				func_112(1, 1);
			}
		}
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_113(iParam0, 1);
	Global_1051439->f_72[iParam0] = 0;
	Global_1051439->f_72[iParam0]->f_18 = func_114(iParam2, iParam0);
	Global_1051439->f_72[iParam0]->f_24 = iParam1;
	Global_1051439->f_72[iParam0]->f_3 = { _0xf70f00013a62f866(iParam1) };
	Global_1051439->f_72[iParam0]->f_25 = iParam3;
	Global_1051439->f_72[iParam0]->f_27 = iParam4;
	Global_1051439->f_72[iParam0]->f_2 = iParam2;
	Global_1051439->f_72[iParam0]->f_63 = func_115(Global_1051439->f_72[iParam0]->f_18);
	Global_1051439->f_72[iParam0]->f_72 = iParam9;
	Global_1051439->f_72[iParam0]->f_73 = 0;
	Global_1051439->f_72[iParam0]->f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_116(iParam0);
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
	func_117(iParam0, 4);
	func_118(iParam0);
}

void func_64(int iParam0, int iParam1)
{
	func_119(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

int func_65(int iParam0, bool bParam1)
{
	if ((func_120(iParam0, 16384) || func_120(iParam0, 32768)) || func_121(Global_1051439->f_72[iParam0]->f_3))
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
	iVar0 = func_114(func_122(), iParam0);
	if ((!bParam1 && func_123(iVar0, &uVar1, &uVar2, &vVar3)) || (bParam1 && func_124(iVar0, &uVar1, &uVar2, &vVar3)))
	{
		func_125(iParam0, uVar1, vVar3, uVar2, 0);
		Global_1051439->f_72[iParam0]->f_3 = { vVar3 };
		Global_1051439->f_72[iParam0]->f_8 = uVar1;
	}
	return Global_1051439->f_72[iParam0]->f_6;
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = func_126(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1051439->f_72[iParam0]->f_31[iVar0] = func_127(iParam1, 0, 0);
	if (func_128(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
	{
		if (!func_129(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
		{
			func_77(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 0, iParam2, bParam3, 1, 0, iParam4, 0);
		}
	}
	Global_1051439->f_72[iParam0]->f_47++;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

void func_68(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893587->f_182 = fParam0;
	Global_1893587->f_183 = fParam1;
	Global_1893587->f_184 = fParam2;
	Global_1893587->f_185 = fParam3;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_132(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_70(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_71()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_133(iVar0))
		{
			(*Global_1900702)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_72(int iParam0, int iParam1)
{
	if (!func_133(iParam0))
	{
		return;
	}
	if (!func_134(iParam1))
	{
		return;
	}
	(*Global_1900702)[iParam0] = iParam1;
}

bool func_73()
{
	if (!has_anim_dict_loaded(sLocal_67))
	{
		return false;
	}
	if (!has_model_loaded(-904994761))
	{
		return false;
	}
	if (!has_model_loaded(-238202707))
	{
		return false;
	}
	if (!has_model_loaded(-291277537))
	{
		return false;
	}
	if (!has_model_loaded(-914117568))
	{
		return false;
	}
	if (!has_model_loaded(-2006868292))
	{
		return false;
	}
	if (!has_model_loaded(245079671))
	{
		return false;
	}
	if (!has_model_loaded(-784275669))
	{
		return false;
	}
	if (!has_model_loaded(612192203))
	{
		return false;
	}
	if (!has_model_loaded(364541094))
	{
		return false;
	}
	if (!has_model_loaded(-2145170802))
	{
		return false;
	}
	if (!has_model_loaded(1845715267))
	{
		return false;
	}
	return true;
}

void func_74()
{
	if (!does_entity_exist(iLocal_55))
	{
		iLocal_55 = create_object(-904994761, 2882.77f, 1400.54f, 64.53f, false, false, false, false, true);
		set_entity_rotation(iLocal_55, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_55, true);
	}
	if (!does_entity_exist(iLocal_56))
	{
		iLocal_56 = create_object(-238202707, 2881.89f, 1399.2f, 65.8f, false, false, false, false, true);
		set_entity_rotation(iLocal_56, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_56, true);
	}
	if (!does_entity_exist(iLocal_57))
	{
		iLocal_57 = create_object(-291277537, 2888.39f, 1398.65f, 63.92f, false, false, false, false, true);
		set_entity_rotation(iLocal_57, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_57, true);
	}
	if (!does_entity_exist(iLocal_58))
	{
		iLocal_58 = create_object(-914117568, 2887.73f, 1399.23f, 63.88f, false, false, false, false, true);
		set_entity_rotation(iLocal_58, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_58, true);
	}
	if (!does_entity_exist(iLocal_59))
	{
		iLocal_59 = create_object(-2006868292, 2921.67f, 1386.704f, 55.256f, false, false, false, false, true);
		set_entity_rotation(iLocal_59, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_59, true);
	}
	if (!does_entity_exist(iLocal_60))
	{
		iLocal_60 = create_object(245079671, 2932.304f, 1382.867f, 55.01f, false, false, false, false, true);
		set_entity_rotation(iLocal_60, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_60, true);
	}
	if (!does_entity_exist(iLocal_61))
	{
		iLocal_61 = create_object(-784275669, 2902.988f, 1393.29f, 57.85f, false, false, false, false, true);
		set_entity_rotation(iLocal_61, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_61, true);
	}
	if (!does_entity_exist(iLocal_62))
	{
		iLocal_62 = create_object(612192203, 2941.816f, 1378.873f, 47.656f, false, false, false, false, true);
		set_entity_rotation(iLocal_62, 0f, 0f, -20.1736f, 0, false);
		freeze_entity_position(iLocal_62, true);
	}
	if (!does_entity_exist(iLocal_63))
	{
		iLocal_63 = create_object(364541094, 2921.67f, 1386.654f, 55.226f, false, false, false, false, true);
		set_entity_rotation(iLocal_63, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_63, true);
	}
	if (!does_entity_exist(iLocal_64))
	{
		iLocal_64 = create_object(-2145170802, 2932.304f, 1382.867f, 55.17f, false, false, false, false, true);
		set_entity_rotation(iLocal_64, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_64, true);
	}
	if (!does_entity_exist(iLocal_65))
	{
		iLocal_65 = create_object(1845715267, 2921.489f, 1386.78f, 56.556f, false, false, false, false, true);
		set_entity_rotation(iLocal_65, 0f, 0f, -20f, 0, false);
		freeze_entity_position(iLocal_65, true);
	}
	if (does_entity_exist(iLocal_55))
	{
		play_entity_anim(iLocal_55, "coalbin01_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_56))
	{
		play_entity_anim(iLocal_56, "steameng01_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_57))
	{
		play_entity_anim(iLocal_57, "conveyor01x_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_58))
	{
		play_entity_anim(iLocal_58, "conveyor02x_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_59))
	{
		play_entity_anim(iLocal_59, "annconvey03_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_60))
	{
		play_entity_anim(iLocal_60, "annconvey04_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_61))
	{
		play_entity_anim(iLocal_61, "annconvmid1x_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_62))
	{
		play_entity_anim(iLocal_62, "annChute01_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_63))
	{
		play_entity_anim(iLocal_63, "anngears03_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_64))
	{
		play_entity_anim(iLocal_64, "anngears04_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
	if (does_entity_exist(iLocal_65))
	{
		play_entity_anim(iLocal_65, "annsifter01_full", sLocal_67, 1f, true, false, false, 0f, 0);
	}
}

bool func_75(bool bParam0)
{
	if (func_135())
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

bool func_76()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

void func_77(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_127(iParam0, 0, 0);
	if (func_128(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_136(iParam0, iParam2, 1, iParam6);
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

void func_78(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	if (func_141(iParam0, Global_35))
	{
		if (does_entity_exist(Global_34))
		{
			set_ped_reset_flag(Global_34, 2, true);
			set_ped_reset_flag(Global_34, 21, true);
			set_ped_reset_flag(Global_34, 168, true);
		}
	}
}

void func_79(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_142(Global_34, iParam1, 1, 0))
		{
			func_144(func_143(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_142(Global_34, iParam1, 1, 0))
	{
		*uParam2 = 0;
	}
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_82()
{
	return func_80(&Global_1940258, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_84(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	return (((*Global_1887339)[iParam0]->f_21 == 1 || (*Global_1887339)[iParam0]->f_21 == 2) && !func_145(iParam0));
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1887339)[iParam0]->f_22 && iParam1) != 0;
}

int func_86()
{
	return Global_1896622->f_41;
}

void func_87(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_146())
	{
		return;
	}
	sVar1 = func_147(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_148(iParam4))
	{
		if (func_70(iParam0))
		{
			iParam4 = func_149(func_9(iParam0));
		}
		else
		{
			iParam4 = func_149(iParam1);
		}
	}
	if (func_148(iParam4))
	{
		iVar3 = func_150(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_152(func_151(iParam2));
	}
	else if ((func_153(iParam1, 2) || func_154(iParam4, 2)) && !Global_1893587->f_9)
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
	else if ((func_70(iParam0) && func_101(iParam0, 16777216)) && !Global_1893587->f_9)
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
		iVar4 = func_156(func_155());
		iVar5 = func_157(func_155());
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
				fVar7 = func_158(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_159(&cVar6, 109029619), sVar9, func_159(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_158(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_159(&cVar6, 109029619), func_159(&cVar10, 109029619));
		}
		Global_1893587->f_9 = 0;
	}
	Global_1939161->f_145 = func_160(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_89(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_161(iParam0))
	{
		return;
	}
	if (func_101(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_162(Global_1940258, 16384);
	func_144(func_163(-1532769513, -36357794), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_144(func_163(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_144(func_163(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_144(func_163(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_144(func_163(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_144(func_163(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_144(func_163(-1532769513, -910218296), 1);
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

void func_90(bool bParam0)
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

bool func_91(int iParam0)
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

void func_92()
{
}

int func_93(int iParam0, bool bParam1)
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

void func_94(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_95(bool bParam0)
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

void func_96(int iParam0)
{
	func_68(0.775f, 0.2f, 0.025f, 0f);
	func_164(&uLocal_19, 0);
	func_165();
	_remove_guard_zone(sLocal_42);
	func_166(iLocal_43);
	func_166(iLocal_45);
	func_166(iLocal_44);
	func_166(iLocal_46);
	func_166(iLocal_47);
	_remove_guard_zone(sLocal_48);
	func_166(iLocal_49);
	func_166(iLocal_50);
	func_166(iLocal_51);
	if (_does_volume_exist(iLocal_52))
	{
		_delete_volume(iLocal_52);
	}
	if (_does_text_database_exist("ASBGAUD"))
	{
		if (_text_database_has_loaded("ASBGAUD"))
		{
			_text_database_delete("ASBGAUD");
		}
	}
	iParam0 = iParam0;
}

void func_97(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1940018->f_5[iVar0]->f_5 == iParam0)
		{
			func_167(iVar0);
		}
		iVar0++;
	}
}

void func_98(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915715->f_3[iVar0]->f_8 == iParam0)
		{
			func_168(iVar0);
		}
		iVar0++;
	}
}

bool func_99(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return true;
	}
	if (!func_70(iParam0))
	{
		return true;
	}
	if (func_105(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896620->f_1 < iVar0 || Global_1896620->f_1 > iVar1)
		{
			Global_1896620->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_169(Global_1896620->f_1, 16))
			{
				func_170(Global_1896620->f_1, 0);
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

bool func_100(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_171(iVar0) || func_172(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_173();
					break;
				case 32:
					func_174();
					break;
				default:
					if (Global_1051439->f_72[iVar0]->f_2 == iParam0)
					{
						func_113(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_101(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

Vector3 func_102(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 2907.465f, 1311.91f, 45.43893f;
		case 81:
			return -275.6f, 805.3f, 119.4f;
		case 40:
			return -763f, -1269.2f, 44.5f;
		case 26:
			return -1809.3f, -349.3f, 164.6f;
		case 5:
			return 2512.3f, -1306f, 48f;
		case 111:
			return 1359.2f, -1302.9f, 77.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_103(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	return func_101(iParam0, 33554432);
}

bool func_104(int iParam0)
{
	if (!func_70(iParam0))
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

bool func_105(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_106(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_107(int iParam0)
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

int func_108(int iParam0, bool bParam1)
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	if (!func_169(iParam0, 2))
	{
		return 0;
	}
	if (func_169(iParam0, 32) && !bParam1)
	{
		func_176(iParam0, _create_persistent_character(func_175(iParam0)));
		if (func_45() == -1)
		{
			if (func_169(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_131(iParam0));
				func_177(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_131(iParam0));
		}
		return 0;
	}
	if (!func_178(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_131(iParam0)))
	{
		func_177(iParam0, 128);
		return 1;
	}
	func_176(iParam0, _create_persistent_character(func_175(iParam0)));
	_0x4f81ead1de8fa19b(func_131(iParam0));
	if (func_169(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_131(iParam0));
		func_177(iParam0, 2048);
	}
	return 1;
}

bool func_109()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_110()
{
	return func_179(func_61(0));
}

bool func_111(int iParam0)
{
	return !func_180(iParam0);
}

void func_112(bool bParam0, bool bParam1)
{
	if (func_181(255) == 4)
	{
		return;
	}
	if (func_121(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_182(0);
	}
	else
	{
		if (bParam1)
		{
			func_183(0, 0, 0, 1);
		}
		func_184(0);
		func_185(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_186(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_187(Global_1102219->f_3849, 36);
	func_188(Global_1102219->f_3888, 36);
}

void func_113(int iParam0, bool bParam1)
{
	bVar0 = (func_189(iParam0) && !bParam1);
	if (!bVar0 && !func_120(iParam0, 65536))
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
	else if (func_190(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_120(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_120(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_120(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_190(iParam0, 16384) && !bVar0)
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
		func_191(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_126(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_192(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_193(iParam0);
	if (func_120(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_194(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_195(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_196(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_197(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0)
{
	if (!func_198(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_199(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

float func_116(int iParam0)
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

void func_117(int iParam0, int iParam1)
{
	if (!func_190(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_118(int iParam0)
{
	(*Global_1051439)[Global_1051439->f_41] = iParam0;
	Global_1051439->f_41++;
	if (Global_1051439->f_41 >= 40)
	{
		Global_1051439->f_41 = (40 - 1);
	}
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_120(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

bool func_121(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_122()
{
	return Global_1893587->f_2;
}

bool func_123(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_200(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

bool func_124(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_200(iParam0, "sClosedHash", uParam1, "fClosedHeading", uParam2, "vClosedPos", uParam3);
}

void func_125(int iParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		get_ground_z_for_3d_coord(vParam2, &(vParam2.f_2), false);
	}
	Global_1051439->f_72[iParam0]->f_6 = func_201(uParam1, vParam2, uParam5, 0, 0, 0);
	Global_1915715->f_3[iParam0]->f_16 = Global_1051439->f_72[iParam0]->f_6;
	_set_scenario_point_flag(Global_1051439->f_72[iParam0]->f_6, 23, true);
	_0xa7479fb665361edb(Global_1051439->f_72[iParam0]->f_6, 0);
	func_117(iParam0, 16384);
}

int func_126(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

int func_127(int iParam0, bool bParam1, bool bParam2)
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

bool func_128(int iParam0)
{
	if (func_202(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_129(int iParam0)
{
	func_127(iParam0, 0, 0);
	if (func_128(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

bool func_130(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_106(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_131(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_203(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_131(iParam0));
}

int func_131(int iParam0)
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

bool func_132(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_133(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_134(int iParam0)
{
	return iParam0 != 0;
}

bool func_135()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_136(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_128(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_137(int iParam0, bool bParam1)
{
	if (func_128(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_138(int iParam0, bool bParam1)
{
	if (func_128(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (func_128(iParam0))
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

bool func_141(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_142(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<2> func_143(int iParam0)
{
	iVar0 = func_204(iParam0);
	return func_163(-277276100, iVar0);
}

void func_144(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_145(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_205())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_146()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_206())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1939161->f_75.f_55))
	{
		return false;
	}
	if (func_207(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_147(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (!is_string_null_or_empty(&(Global_1893587->f_162)))
	{
		sVar0 = func_208(Global_1893587->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_210(func_209(Global_35));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_211(iParam0) || func_212(44))
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

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_149(int iParam0)
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

int func_150(int iParam0)
{
	if (!func_148(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_213(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

int func_151(int iParam0)
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

char* func_152(int iParam0)
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

bool func_153(int iParam0, int iParam1)
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

bool func_154(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

int func_155()
{
	return &Global_1902818;
}

int func_156(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_157(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_158(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_159(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_214(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_160(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_161(int iParam0)
{
	if (func_211(iParam0))
	{
		if (!func_212(44))
		{
			return false;
		}
	}
	return true;
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_163(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_164(var uParam0, bool bParam1)
{
	if (func_215(uParam0->f_1))
	{
		func_216(uParam0->f_1);
	}
	if (does_blip_exist(uParam0->f_9) && bParam1)
	{
		remove_blip(&(uParam0->f_9));
	}
	if (func_217(uParam0->f_8))
	{
		func_218(&(uParam0->f_8), 1, 1);
	}
}

void func_165()
{
	if (does_entity_exist(iLocal_55))
	{
		set_object_as_no_longer_needed(&iLocal_55);
	}
	if (does_entity_exist(iLocal_56))
	{
		set_object_as_no_longer_needed(&iLocal_56);
	}
	if (does_entity_exist(iLocal_57))
	{
		set_object_as_no_longer_needed(&iLocal_57);
	}
	if (does_entity_exist(iLocal_58))
	{
		set_object_as_no_longer_needed(&iLocal_58);
	}
	if (does_entity_exist(iLocal_59))
	{
		set_object_as_no_longer_needed(&iLocal_59);
	}
	if (does_entity_exist(iLocal_60))
	{
		set_object_as_no_longer_needed(&iLocal_60);
	}
	if (does_entity_exist(iLocal_61))
	{
		set_object_as_no_longer_needed(&iLocal_61);
	}
	if (does_entity_exist(iLocal_62))
	{
		set_object_as_no_longer_needed(&iLocal_62);
	}
	if (does_entity_exist(iLocal_63))
	{
		set_object_as_no_longer_needed(&iLocal_63);
	}
	if (does_entity_exist(iLocal_64))
	{
		set_object_as_no_longer_needed(&iLocal_64);
	}
	if (does_entity_exist(iLocal_65))
	{
		set_object_as_no_longer_needed(&iLocal_65);
	}
}

void func_166(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_167(int iParam0)
{
	func_219(Global_1940018->f_5[iParam0]->f_6, 1);
	func_220(Global_1940018->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1940018->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1940018->f_5[iParam0]->f_8);
	}
	func_221(iParam0, 8192);
	func_221(iParam0, 32768);
	func_221(iParam0, 524288);
	func_221(iParam0, 1048576);
	Global_1940018->f_5[iParam0]->f_10 = 0;
	Global_1940018->f_5[&Global_1940018]->f_9 = 0;
	Global_1940018->f_5[iParam0] = 0;
	Global_1940018->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1940018->f_5[iParam0]->f_4 = 0;
	Global_1940018->f_5[iParam0]->f_5 = -1;
	Global_1940018->f_5[iParam0]->f_6 = -1;
	Global_1940018->f_5[iParam0]->f_7 = 0;
}

void func_168(int iParam0)
{
	if (func_106(Global_1915715->f_3[iParam0]->f_21) && func_222(Global_1915715->f_3[iParam0]->f_21))
	{
		func_223(Global_1915715->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_224(Global_1915715->f_3[iParam0]->f_9, 0);
	func_225(iParam0, 536870912);
	iVar1 = func_226(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_192(&(Global_1915715->f_3[iParam0]->f_318[iVar0]));
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
	func_227(iParam0);
	Global_1915715->f_3[iParam0]->f_9 = -1;
	Global_1915715->f_3[iParam0]->f_8 = -1;
}

bool func_169(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_106(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_170(int iParam0, bool bParam1)
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	if (!func_169(iParam0, 2))
	{
		return 0;
	}
	if (func_175(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_131(iParam0)))
	{
		return 1;
	}
	if (func_169(iParam0, 1) && !bParam1)
	{
		func_228(iParam0, 128);
		return 1;
	}
	func_177(iParam0, 129);
	func_229(iParam0);
	_0xfc77c5b44d5ff7c0(func_131(iParam0));
	func_176(iParam0, 0);
	return 1;
}

int func_171(int iParam0)
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

int func_172(int iParam0)
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

void func_173()
{
	func_194(30);
	func_196(30);
	func_230(30);
	func_197(30);
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

void func_174()
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
	func_197(32);
}

int func_175(int iParam0)
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

void func_176(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

void func_177(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_106(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

bool func_178(int iParam0)
{
	if (!func_106(iParam0))
	{
		return false;
	}
	if (!func_169(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_179(struct<2> Param0)
{
	return func_231(Param0, 5, 8);
}

bool func_180(int iParam0)
{
	return func_232(1, iParam0);
}

int func_181(int iParam0)
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

int func_182(int iParam0)
{
	if (func_233(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_234(iParam0);
	if (!func_235(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_236(128) && !func_237(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_238() == 4)
	{
		func_182(18);
	}
	func_239(1024);
}

int func_184(int iParam0)
{
	if (func_240(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_186(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_187(struct<29> Param0, var uParam29, int iParam30)
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

void func_188(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_189(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_120(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

void func_191(int iParam0, int iParam1)
{
	if (func_190(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

void func_192(int iParam0)
{
	if (func_128(iParam0) && func_241())
	{
		remove_door_from_system(iParam0);
	}
}

void func_193(int iParam0)
{
}

void func_194(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

bool func_195(int iParam0, int iParam1)
{
	return func_242(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_196(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_197(int iParam0)
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

bool func_198(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_199(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_244(12, func_243(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_200(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	Var0 = func_245();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_243(iParam0);
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

var func_201(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

bool func_202(int iParam0)
{
	return iParam0 != 0;
}

int func_203(int iParam0)
{
	iVar0 = func_131(iParam0);
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

int func_204(int iParam0)
{
	iVar0 = func_243(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_205()
{
	return false;
}

bool func_206()
{
	if (func_45() != 0)
	{
		return true;
	}
	if (func_246())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_247() };
	if (func_248(Var0))
	{
		return false;
	}
	Var2 = { func_249() };
	if (func_248(Var2))
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0, bool bParam1, bool bParam2)
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
		if (func_246())
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
	if (iParam0 == 0 && func_248(func_61(0)))
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
	switch (func_62(func_61(0)))
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

var func_208(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_209(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_250(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_210(int iParam0)
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

bool func_211(int iParam0)
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

bool func_212(int iParam0)
{
	if (!func_251(iParam0))
	{
		return false;
	}
	return func_252(iParam0);
}

struct<7> func_213(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_214(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_215(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return _does_volume_exist(iParam0);
}

void func_216(struct<6> Param0, var uParam6)
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

bool func_217(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_218(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_217(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_253(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_254(iVar0);
	*uParam0 = 0;
}

void func_219(int iParam0, bool bParam1)
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

void func_220(int iParam0, bool bParam1)
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

void func_221(int iParam0, int iParam1)
{
	func_255(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

bool func_222(int iParam0)
{
	if (!func_106(iParam0))
	{
		return false;
	}
	return (*Global_1893775)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_223(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_106(iParam0))
	{
		return;
	}
	if (!func_169(iParam0, 1))
	{
		return;
	}
	if (!func_169(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_222(iParam0)) && func_256(iParam0))
	{
		return;
	}
	func_177(iParam0, 1);
	func_229(iParam0);
	if (func_257(func_175(iParam0)))
	{
		iVar0 = func_131(iParam0);
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
		func_177(iParam0, 16);
	}
	if (func_169(iParam0, 128) && !bParam3)
	{
		func_170(iParam0, 0);
	}
}

void func_224(int iParam0, bool bParam1)
{
	if (!func_198(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_258(iParam0, 1024))
		{
			func_259(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_258(iParam0, 1024))
	{
		func_260(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_261(iParam0);
}

void func_225(int iParam0, int iParam1)
{
	if (!func_262(iParam0))
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

int func_226(int iParam0)
{
	return Global_1915715->f_3[iParam0]->f_409;
}

void func_227(int iParam0)
{
	Global_1915715->f_3[iParam0]->f_6 = 0;
}

void func_228(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_106(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

void func_229(int iParam0)
{
	if (!func_106(iParam0))
	{
		return;
	}
	iVar0 = func_203(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

void func_230(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_1 = 0;
}

bool func_231(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_248(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_263(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_232(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_264(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_265())
	{
		return func_264(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_264(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_233(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_234(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_235(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_236(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_237(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_238()
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

void func_239(int iParam0)
{
	if (func_266(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_240(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_241()
{
	return true;
}

bool func_242(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_243(int iParam0)
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

bool func_244(int iParam0, int iParam1, var uParam2)
{
	if (func_267(iParam0, iParam1, &uVar0))
	{
		func_268(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_245()
{
	return Global_1071686->f_28448[48]->f_3;
}

bool func_246()
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
	if (!func_248(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_247()
{
	return *Global_1051213;
}

bool func_248(struct<2> Param0)
{
	if (!func_269(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_270(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_249()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_61(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_61(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_250(vector3 vParam0, int iParam3)
{
	func_271(iParam3, &vVar0, &Var3, &uVar6);
	if (func_272(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_252(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

int func_253(var uParam0)
{
	return uParam0;
}

void func_254(int iParam0)
{
	if (!func_273(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

void func_255(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_256(int iParam0)
{
	if (!func_106(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1893775)[iParam0]->f_2);
}

bool func_257(int iParam0)
{
	return iParam0 != 0;
}

bool func_258(int iParam0, int iParam1)
{
	if (!func_198(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

void func_259(int iParam0, int iParam1)
{
	if (!func_198(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (Global_1915715->f_17884[iParam0] || iParam1);
}

void func_260(int iParam0, int iParam1)
{
	if (!func_198(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

void func_261(int iParam0)
{
	func_275(func_274(iParam0));
}

bool func_262(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_263(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_276(Param0);
	}
	return -1;
}

bool func_264(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_265()
{
	return Global_1102219->f_3672;
}

bool func_266(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_267(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_277(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_268(var uParam0, int iParam1, var uParam2)
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

bool func_269(int iParam0)
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

int func_270(int iParam0)
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

void func_271(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_272(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

bool func_273(int iParam0)
{
	return func_278(iParam0, 2);
}

int func_274(int iParam0)
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

void func_275(int iParam0)
{
	Global_1915715->f_18247 = iParam0;
}

int func_276(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_279(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_277(int iParam0)
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

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_279(struct<2> Param0, var uParam2)
{
	if (!func_248(Param0))
	{
		return false;
	}
	func_280(uParam2);
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

void func_280(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

