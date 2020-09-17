void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_225 = 20000;
	iLocal_228 = vScriptParam_0.x;
	iLocal_226 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_227 = get_game_timer();
	iVar0 = 0;
	while (func_3())
	{
		if (get_game_timer() > iLocal_227)
		{
			iLocal_227 = 0;
			func_4(iLocal_228, &iLocal_226);
			switch (iLocal_226)
			{
				case 0:
					iLocal_226 = 1;
					break;
				case 1:
					func_5(iLocal_228);
					if (func_7(func_6(iLocal_228)))
					{
						func_8(func_6(iLocal_228), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_9(iLocal_228));
					iVar1 = func_10(iLocal_228);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_229 = (get_game_timer() + iLocal_225);
					iLocal_226 = 2;
					break;
				case 2:
					if (func_11() || iLocal_229 < get_game_timer())
					{
						func_12(iLocal_228);
						iLocal_229 = (get_game_timer() + iLocal_225);
						iLocal_226 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_228) || iLocal_229 < get_game_timer())
					{
						func_14(iLocal_228);
						iLocal_229 = (get_game_timer() + iLocal_225);
						iLocal_226 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_228) || iLocal_229 < get_game_timer())
					{
						func_16(iLocal_228);
						iLocal_229 = (iLocal_225 + get_game_timer());
						iLocal_226 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_228)))
					{
						if (func_17(func_6(iLocal_228), 4) && !iLocal_229 < get_game_timer())
						{
						}
						else
						{
							if (func_18(iLocal_228) || iLocal_229 < get_game_timer())
							{
								func_19(iLocal_228, 4);
								iLocal_229 = (iLocal_225 + get_game_timer());
								iLocal_226 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_229 < get_game_timer() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iLocal_228);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_228);
								func_28(iLocal_228);
								func_29();
								func_30();
								iLocal_226 = 8;
							}
							Jump @788; //curOff = 555
							func_31(iLocal_228);
							func_32();
							iLocal_226 = 9;
							Jump @788; //curOff = 572
							func_33(Global_1898004);
							func_34(iLocal_228, Global_1898004);
							iLocal_226 = 10;
							Jump @788; //curOff = 597
							func_35(iLocal_228);
							if (func_20() != -1)
							{
							}
							else
							{
								_display_hud_component(1833957607);
							}
							func_19(iLocal_228, 8);
							if (func_36(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_37(32);
							}
							iLocal_226 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_228))
							{
								iLocal_227 = (1000 + get_game_timer());
							}
							func_39(Global_1898004, iLocal_228);
							func_40(iLocal_228);
							func_19(iLocal_228, 8);
							if (func_41())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1888801)[iLocal_228]->f_10);
							if ((*Global_1888801)[iLocal_228]->f_11 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1888801)[iLocal_228]->f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if ((*Global_1888801)[iLocal_228]->f_12 == 0)
						{
						}
						else
						{
							_0x95423627a9ca598e((*Global_1888801)[iLocal_228]->f_12);
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
	func_46();
	if (func_47(45) && !func_49(func_48(7)))
	{
		func_51(func_48(7), func_50(7), "CaravanCamp", 0, 0, 4, 0, -1082130432);
	}
	if (!func_52(-538889627))
	{
		return true;
	}
	iLocal_221 = (*Global_1888801)[22]->f_4;
	_0xb469cfd9e065eb99(iLocal_221, 5);
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
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
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
	return func_53(iParam0, -1, -1, 0);
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
	if (func_54(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_55(5000))
		{
			return true;
		}
	}
	switch (func_56(0))
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
}

void func_25()
{
}

void func_26()
{
}

void func_27(int iParam0)
{
	iParam0 = iParam0;
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	iParam0 = iParam0;
	if (!func_52(-538889627))
	{
		return;
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
	uParam1->f_61 = uParam1->f_61;
	if (!func_52(-538889627))
	{
		return;
	}
	func_57(uParam1, iLocal_221, 1);
}

void func_35(int iParam0)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_59();
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
		if ((does_entity_exist(Global_35) && !is_entity_dead(Global_35)) && get_distance_between_coords(get_entity_coords(Global_35, false, false), func_60(), true) <= 100f)
		{
			func_63(&uLocal_162, 1024, &uLocal_162, func_61(), 0, func_62(), 0, 0, 0);
		}
		func_64();
		bVar0 = func_65();
		if (!bVar0)
		{
			if (func_66())
			{
				return false;
			}
		}
	}
	return true;
}

void func_39(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_67(&Global_1935630, 16384)) || func_67(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_68(uParam0, 1))
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
	bVar2 = func_69();
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
							if ((!func_70((*uParam0)[iVar3], 1) && func_71(iParam1)) && !func_72(iParam1, 16))
							{
								func_74(iParam1, func_73(), -1, 0, -1, 0);
								func_75((*uParam0)[iVar3], 1);
							}
							func_76(iParam1, 0);
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
		if (func_77() != bVar0)
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
			func_78();
			func_79(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_80(bVar0);
	if (func_20() == -1)
	{
		func_82((iParam1 == func_81() && bVar0));
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
	if (func_83(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_84();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_19(iLocal_228, 2048);
		if (func_7(func_73()))
		{
			func_8(func_73(), 8);
		}
		func_85(iLocal_228, 4);
		func_85(iLocal_228, 8);
		func_80(0);
		if (func_20() == -1)
		{
			func_82(0);
		}
		func_86(iLocal_228);
		func_32();
		return false;
	}
	else
	{
		func_87(iLocal_228);
		func_88(iLocal_228);
		func_89(iLocal_228);
		if (!func_90(iLocal_228, 0))
		{
			return false;
		}
	}
	terminate_this_thread();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 8);
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
	if (!func_92((*Global_1835011)[67]->f_1, 1))
	{
		return;
	}
	iLocal_222 = _create_volume_aggregate_with_custom_name("PronghornRanch volCampAreas[CVA_SURROUNDING]");
	iLocal_223 = _create_volume_aggregate_with_custom_name("PronghornRanch volCampAreas[CVA_OUTER]");
	func_93(&iLocal_222, -2547.255f, 405.9721f, 160.379f, 0f, 0f, -6f, 130f, 214f, 60f, -1612834106);
	func_93(&iLocal_222, -2600.745f, 471.1957f, 160.0371f, 0f, 0f, -6f, 19f, 52f, 60f, 665633627);
	func_94(&iLocal_223, -2548.949f, 325.763f, 160f, 0f, 0f, 9.000001f, 55f, 13f, 60f, -1612834106);
	func_94(&iLocal_223, -2579.138f, 330.9276f, 160f, 0f, 0f, -30f, 19f, 16f, 60f, 665633627);
	func_94(&iLocal_223, -2518.681f, 397.0634f, 160f, 0f, 0f, -4.5f, 25f, 127f, 60f, -1612834106);
	func_94(&iLocal_223, -2534.318f, 495.423f, 160f, 0f, 0f, -9.000002f, 13f, 10f, 60f, -1612834106);
	func_94(&iLocal_223, -2600.49f, 392.029f, 160f, 0f, 0f, -3f, 10f, 34f, 60f, -1612834106);
	func_94(&iLocal_223, -2518.894f, 334.922f, 160f, 0f, 0f, -12f, 7f, 11f, 60f, 665633627);
	func_94(&iLocal_223, -2505.076f, 442.9265f, 160f, 0f, 0f, -6f, 4f, 22f, 60f, 665633627);
	func_94(&iLocal_223, -2552.524f, 396.2589f, 160f, 0f, 0f, 0f, 64f, 145f, 60f, -1612834106);
	func_94(&iLocal_223, -2505.803f, 461.1734f, 160f, 0f, 0f, 2.000002f, 10f, 13f, 60f, -1612834106);
	func_94(&iLocal_223, -2522.517f, 477.1015f, 160f, 0f, 0f, 42f, 19f, 25f, 60f, 665633627);
	func_94(&iLocal_223, -2610.8f, 450.1638f, 160f, 0f, 0f, 13f, 4f, 16f, 60f, 665633627);
	func_94(&iLocal_223, -2589.791f, 359.6104f, 160f, 0f, 0f, 6f, 16f, 43f, 60f, 665633627);
	func_94(&iLocal_223, -2568.966f, 463.1732f, 160f, 0f, 0f, 25f, 86f, 43f, 60f, -1612834106);
	func_94(&iLocal_223, -2593.714f, 423.6152f, 160f, 0f, 0f, 9.000002f, 28f, 76f, 60f, -1612834106);
	iVar0 = iLocal_223;
	_0x18262cafebb5fbe1(iVar0, 0, 4787584, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iVar0, 0, 4787584, 0, -1, -1, 0);
	func_95(iVar0, 0);
	func_96(iLocal_222, 0, 0, 0);
}

bool func_47(int iParam0)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	return func_98(iParam0);
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		default:
			break;
	}
	return func_100(func_99(iParam0), 0);
}

bool func_49(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

float func_50(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 170f;
		case 4:
			return 50f;
		case 6:
			return 50f;
		case 3:
			return 260.5f;
		case 7:
			return 220f;
		case 5:
			return 157.25f;
		case 8:
			return 175f;
		default:
			break;
	}
	return 250f;
}

int func_51(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_101(vParam0))
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
		if (func_49(vParam0))
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
	if (iParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_102(iVar0, bParam8);
	return iVar0;
}

bool func_52(int iParam0)
{
	iVar0 = func_103(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_58(iParam0))
	{
		return 1;
	}
	if (func_91(iParam0, 16))
	{
		return 1;
	}
	if (func_104(iParam0) && !func_105(iParam0))
	{
	}
	if (func_106(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_107(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_107(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_104(iParam0) || func_105(iParam0)) || func_108(&Global_1897950))
			{
				func_109(&Global_1897950, 0);
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

bool func_54(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_55(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_56(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_110(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_58(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_59()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_111(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

Vector3 func_60()
{
	return -2370.027f, 472.4625f, 131.2446f;
}

int func_61()
{
	return 22;
}

char* func_62()
{
	return "shack_hungrybear1";
}

int func_63(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (is_thread_active(*uParam2, false))
	{
		return 0;
	}
	if (!_does_volume_exist(func_112(iParam3)))
	{
		return 0;
	}
	if (!is_entity_in_volume(Global_35, func_112(iParam3), true, 0))
	{
		return 0;
	}
	if (bParam8)
	{
		vVar1 = { func_113(iParam1) };
		if (!func_101(vVar1))
		{
			if (func_114(vVar1, 1, 776, 0))
			{
				return 0;
			}
		}
	}
	if ((bParam6 && func_115(128, 0, 1)) && !iParam1 == 64)
	{
		return 0;
	}
	if (iParam7 && func_116(get_player_index(), 1, 1, 1))
	{
		return 0;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = func_119(func_117(iParam1), 0, 3, func_118(iParam1));
	func_120(&(uParam0->f_5), &(uParam0->f_3));
	if (!func_121(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!func_121(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!func_121(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!func_121(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!func_121(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!func_122(uParam0))
		{
			return 0;
		}
	}
	if (!func_121(uParam0->f_3, iVar0))
	{
		if (func_121(uParam0->f_3, 2))
		{
			if (!is_thread_active(*uParam2, false))
			{
				request_script(sParam5);
				if (has_script_loaded(sParam5))
				{
					uParam0->f_52 = { func_123(iParam1) };
					uParam0->f_5 = func_119(func_117(iParam1), 0, 3, func_118(iParam1));
					*uParam2 = start_new_script_with_args(sParam5, uParam0, 59, 1024);
					set_script_as_no_longer_needed(sParam5);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_64()
{
	if (func_20() != -1)
	{
		return;
	}
	switch (iLocal_224)
	{
		case 0:
			_text_database_request("CAPROAU");
			if (_text_database_has_loaded("CAPROAU"))
			{
				iLocal_224 = 1;
			}
			break;
		case 1:
			if (func_124())
			{
				iLocal_224 = 2;
			}
			break;
		case 2:
			if (!func_65())
			{
				func_125(&Local_116);
			}
			break;
	}
}

bool func_65()
{
	return Global_1898164->f_163;
}

bool func_66()
{
	if (!func_92((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	if (_does_volume_exist(iLocal_223) && _0xf256a75210c5c0eb(iLocal_223, Global_36))
	{
		if (!is_ped_in_melee_combat(Global_35))
		{
			disable_control_action(0, -1292666904, false);
		}
		disable_control_action(0, 42190210, false);
		switch (Global_1935630->f_44)
		{
			case -1415022764:
			case -1016714371:
			case -160924582:
			case 1030402560:
			case 1549070292:
				bVar0 = true;
				break;
		}
		if (_is_weapon_lantern(Global_1935630->f_44))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			disable_control_action(0, 130948705, false);
		}
		_0xc9caeaeec1256e54(-1618603322);
		return true;
	}
	return false;
}

bool func_67(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_69()
{
	return func_67(&Global_1935630, 4096);
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_71(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_126(iParam0));
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_73()
{
	return Global_1897952->f_41;
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_127())
	{
		return;
	}
	sVar1 = func_128(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_129(iParam4))
	{
		if (func_58(iParam0))
		{
			iParam4 = func_130(func_6(iParam0));
		}
		else
		{
			iParam4 = func_130(iParam1);
		}
	}
	if (func_129(iParam4))
	{
		iVar3 = func_131(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_133(func_132(iParam2));
	}
	else if ((func_134(iParam1, 2) || func_135(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_58(iParam0) && func_91(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_137(func_136());
		iVar5 = func_138(func_136());
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
				fVar7 = func_139(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_140(&cVar6, 109029619), sVar9, func_140(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_139(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_140(&cVar6, 109029619), func_140(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_141(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_76(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_142(128))
	{
		return;
	}
	if (!func_143(iParam0))
	{
		return;
	}
	if (func_91(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_144(Global_1935630, 8192);
	func_146(func_145(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_146(func_145(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_146(func_145(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_146(func_145(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_146(func_145(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_146(func_145(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_146(func_145(-1532769513, -910218296), 1);
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

bool func_77()
{
	return (Global_1894899 & 1 != 0 && func_147() != -1);
}

void func_78()
{
	if (!func_148(&Global_1327479))
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
	func_149(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_79(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_150() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_148(iVar1) && !func_151(iVar1, iParam2)) && (!bParam3 || !func_152(iVar1))) && (!bParam4 || !func_153(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_154(iVar0);
			}
		}
		iVar0++;
	}
}

void func_80(bool bParam0)
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

int func_81()
{
	return Global_40.f_4283.f_1;
}

void func_82(bool bParam0)
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

bool func_83(int iParam0)
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

void func_84()
{
}

void func_85(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_86(int iParam0)
{
	iParam0 = iParam0;
	func_155(&uLocal_162);
	if (func_49(func_48(7)))
	{
		func_156(func_48(7), 4);
	}
	if (!func_52(-538889627))
	{
		return;
	}
	if (_does_text_database_exist("CAPROAU"))
	{
		if (_text_database_has_loaded("CAPROAU"))
		{
			_text_database_delete("CAPROAU");
		}
	}
	func_157();
}

void func_87(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369->f_5[iVar0]->f_5 == iParam0)
		{
			func_158(iVar0);
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_159(iVar0);
		}
		iVar0++;
	}
}

void func_89(int iParam0)
{
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_161(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_90(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (!func_58(iParam0))
	{
		return true;
	}
	if (func_106(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_162(Global_1897950->f_1, 16))
			{
				func_163(Global_1897950->f_1, 0);
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

bool func_91(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_92(int iParam0, bool bParam1)
{
	switch (func_164(iParam0))
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

void func_93(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	if (*iParam0 != 0 && _does_volume_exist(*iParam0))
	{
		fVar0 = func_165((vParam7.x - 4f), 0.1f);
		fVar1 = func_165((vParam7.y - 4f), 0.1f);
		vVar2 = { fVar0, fVar1, vParam7.z };
		iVar5 = _create_volume_by_hash(iParam10, vParam1, vParam4, vVar2);
		_0x6e0d3c3f828da773(*iParam0, iVar5);
	}
}

void func_94(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	func_166(&iVar0, vParam1, vParam4, vParam7, 2, iParam10, 0, 1);
	_0x6e0d3c3f828da773(*iParam0, iVar0);
	func_166(&iVar1, vParam1, vParam4, vParam7, 6, iParam10, 0, 1);
	_0x6e0d3c3f828da773(*iParam0, iVar1);
}

void func_95(int iParam0, bool bParam1)
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

void func_96(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_167(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

bool func_97(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_98(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

Vector3 func_100(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_58(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
		if (bParam1)
		{
			if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_101(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_102(int iParam0, bool bParam1)
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

int func_103(int iParam0, int iParam1)
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

bool func_104(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 33554432);
}

bool func_105(int iParam0)
{
	if (!func_58(iParam0))
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

bool func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_107(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_108(int iParam0)
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

int func_109(int iParam0, bool bParam1)
{
	if (!func_107(iParam0))
	{
		return 0;
	}
	if (!func_162(iParam0, 2))
	{
		return 0;
	}
	if (func_162(iParam0, 32) && !bParam1)
	{
		func_169(iParam0, _create_persistent_character(func_168(iParam0)));
		if (func_20() == -1)
		{
			if (func_162(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_170(iParam0));
				func_171(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_170(iParam0));
		}
		return 0;
	}
	if (!func_172(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_170(iParam0)))
	{
		func_171(iParam0, 128);
		return 1;
	}
	func_169(iParam0, _create_persistent_character(func_168(iParam0)));
	_0x4f81ead1de8fa19b(func_170(iParam0));
	if (func_162(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_170(iParam0));
		func_171(iParam0, 2048);
	}
	return 1;
}

bool func_110(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_111(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_112(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

Vector3 func_113(int iParam0)
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

bool func_114(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_101(vParam0))
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

bool func_115(int iParam0, bool bParam1, bool bParam2)
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
		if (func_173())
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
		iVar0 = func_174(&(Global_1898164->f_1[0]));
		if (func_175(iVar0) && func_176((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_177(&(Global_1898164->f_1[0])))
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

int func_116(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_178(bParam1, bParam2, bParam3);
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

int func_117(int iParam0)
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

int func_118(int iParam0)
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

int func_119(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_179())
	{
		iVar2 = func_179();
	}
	iVar5 = func_180(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_181(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_181(iVar6) == 0)
			{
				return func_182(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_181(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_181(iVar6) == 0)
			{
				return func_182(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_182(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_120(var uParam0, var uParam1)
{
	if (func_177(*uParam0))
	{
		*uParam1 = func_183(*uParam0);
		if (!func_121(*uParam1, 2))
		{
			func_184(uParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_121(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_122(var uParam0)
{
	if ((!func_121(uParam0->f_3, 32768) && func_185(uParam0->f_1, &fVar1)) && func_186(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = func_187();
		if ((func_187() - fVar1) >= fVar0)
		{
			func_184(&(uParam0->f_3), 32768);
		}
	}
	if (func_121(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

Vector3 func_123(int iParam0)
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

bool func_124()
{
	uVar0 = 5;
	func_188(&Local_116, 714, &uVar0, 0, 0);
	Local_116[0]->f_43 = 27471;
	Local_116[0]->f_44 = 27771;
	func_191(Local_116[0], 512);
	return true;
}

void func_125(var uParam0)
{
	func_192(uParam0);
}

bool func_126(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_193())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_127()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_194())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_115(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_195(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_197(func_196(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_198(iParam0) || func_47(45))
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

bool func_129(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_130(int iParam0)
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

int func_131(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_132(int iParam0)
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

char* func_133(int iParam0)
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

bool func_134(int iParam0, int iParam1)
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

bool func_135(int iParam0, int iParam1)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

int func_136()
{
	return &Global_1899515;
}

int func_137(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_139(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_140(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_199(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_141(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_142(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_143(int iParam0)
{
	if (func_198(iParam0))
	{
		if (!func_47(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_200())
	{
		if (!func_92((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_145(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_146(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_147()
{
	return Global_1894899->f_2;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_149(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_150()
{
	return Global_1310750->f_16037;
}

bool func_151(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_152(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_201(64) && func_202(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_153(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_148(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_203(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_155(var uParam0)
{
	if (is_thread_active(*uParam0, false))
	{
		terminate_thread(*uParam0);
	}
}

void func_156(vector3 vParam0, int iParam3)
{
	if (func_101(vParam0))
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
			if (func_204(vVar2, vParam0, 2f, 1))
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

void func_157()
{
	if (func_205(&(Local_116[0]->f_34)))
	{
		func_206(&(Local_116[0]->f_34));
	}
	func_207(Local_116[0]->f_38);
	func_207(Local_116[0]->f_39);
}

void func_158(int iParam0)
{
	func_208(Global_1935369->f_5[iParam0]->f_6, 1);
	func_209(Global_1935369->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
		Global_1935369->f_5[iParam0]->f_8 = 0;
	}
	func_210(iParam0, 8192);
	func_210(iParam0, 16384);
	func_210(iParam0, 32768);
	func_210(iParam0, 131072);
	func_210(iParam0, 16777216);
	func_210(iParam0, 524288);
	func_210(iParam0, 1048576);
	Global_1935369->f_5[iParam0]->f_10 = 0;
	Global_1935369->f_5[&Global_1935369]->f_9 = 0;
	Global_1935369->f_5[iParam0] = 0;
	Global_1935369->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1935369->f_5[iParam0]->f_4 = 0;
	Global_1935369->f_5[iParam0]->f_5 = -1;
	Global_1935369->f_5[iParam0]->f_6 = -1;
	Global_1935369->f_5[iParam0]->f_7 = 0;
}

void func_159(int iParam0)
{
	if (func_107(Global_1914319->f_3[iParam0]->f_21) && func_211(Global_1914319->f_3[iParam0]->f_21))
	{
		func_212(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_213(Global_1914319->f_3[iParam0]->f_10, 0);
	func_214(iParam0, 536870912);
	iVar1 = func_215(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_161(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_216(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_217(iParam0, 0);
}

int func_160(int iParam0)
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

void func_161(int iParam0)
{
	if (func_218(iParam0) && func_219())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_162(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_163(int iParam0, bool bParam1)
{
	if (!func_107(iParam0))
	{
		return 0;
	}
	if (!func_162(iParam0, 2))
	{
		return 0;
	}
	if (func_168(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_170(iParam0)))
	{
		return 1;
	}
	if (func_162(iParam0, 1) && !bParam1)
	{
		func_220(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_221(iParam0);
	_0xfc77c5b44d5ff7c0(func_170(iParam0));
	func_169(iParam0, 0);
	return 1;
}

int func_164(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_222(iParam0);
}

float func_165(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_166(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (_does_volume_exist(*iParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*iParam0 = _create_speed_volume(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, iParam13);
}

void func_167(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_168(int iParam0)
{
	if (!func_107(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_169(int iParam0, int iParam1)
{
	if (!func_107(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_170(int iParam0)
{
	if (!func_107(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_171(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_107(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_172(int iParam0)
{
	if (!func_107(iParam0))
	{
		return false;
	}
	if (!func_162(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_173()
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

int func_174(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_223(func_181(iParam0));
}

bool func_175(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_177(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
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

int func_179()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_180(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_181(int iParam0)
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

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_224(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_179())
	{
		return -1;
	}
	iVar0 = func_180(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_225(iVar1, 0);
	func_226(iVar1, 0);
	func_227(iVar1, 0);
	func_228(iVar1, 0);
	func_229(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_230(iVar1, iParam4);
	}
	return iVar1;
}

int func_183(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_231(iParam0);
}

void func_184(var uParam0, int iParam1)
{
	func_232(uParam0, iParam1);
}

bool func_185(int iParam0, float fParam1)
{
	iVar0 = func_233(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_234(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_186(int iParam0, int iParam1, float fParam2)
{
	if (!func_177(iVar0))
	{
		iVar0 = func_119(func_117(iParam0), iParam1, 3, func_118(iParam0));
	}
	if (func_235(iParam0, fParam2))
	{
		*fParam2 = func_236(iParam0);
		return true;
	}
	return false;
}

float func_187()
{
	iVar6 = func_136();
	iVar4 = func_237(iVar6);
	iVar5 = func_238(iVar6);
	iVar3 = func_239(iVar5, iVar4);
	iVar2 = func_240(iVar6);
	iVar1 = func_137(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

void func_188(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	(*uParam0)[iParam3]->f_25 = 64f;
	(*uParam0)[iParam3]->f_26 = 16f;
	(*uParam0)[iParam3]->f_20 = iParam3;
	func_241((*uParam0)[iParam3]);
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
		func_191((*uParam0)[iParam3], 128);
	}
	if (!func_205(&((*uParam0)[iParam3]->f_34)))
	{
		func_242(&((*uParam0)[iParam3]->f_34), 1);
	}
	func_191((*uParam0)[iParam3], 32768);
	func_191((*uParam0)[iParam3], 1024);
	(*uParam0)[iParam3]->f_29 = 1;
	(*uParam0)[iParam3]->f_21 = -1;
}

Vector3 func_189(var uParam0)
{
	iVar0 = func_243(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return func_244("");
	}
	if (func_245(uParam0, 4))
	{
		return func_244("");
	}
	if (func_193())
	{
		if ((func_246(26, 1, 2, 0) && Global_1357549->f_1250 > 1) && Global_1357549->f_1250 < 4)
		{
			func_247(26, 1, 2);
			uParam0->f_21 = -1;
			return func_244("CAPRO_ABEBCH1");
		}
		else if ((func_246(26, 1, 4, 0) && Global_1357549->f_1250 >= 4) && Global_1357549->f_1250 <= 10)
		{
			func_247(26, 1, 4);
			uParam0->f_21 = -1;
			return func_244("CAPRO_ABEBCH2");
		}
		else if (func_246(26, 1, 8, 0) && Global_1357549->f_1250 > 10)
		{
			func_247(26, 1, 8);
			uParam0->f_21 = -1;
			return func_244("CAPRO_ABEBCH3");
		}
		else
		{
			func_191(uParam0, 4);
			uParam0->f_21 = -1;
			return func_244("CAPRO_ABEWELC");
		}
	}
	return func_244("");
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 885:
			return "WROBEL";
		case 714:
			return "RRCH1_Abe";
		default:
			break;
	}
	return "";
}

void func_191(var uParam0, int iParam1)
{
	func_248(&(uParam0->f_19), iParam1);
}

void func_192(var uParam0)
{
	if (func_249((*uParam0)[0], 1, 1))
	{
		func_250((*uParam0)[0]);
	}
}

bool func_193()
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

bool func_194()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

var func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_196(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_251(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_197(int iParam0)
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

bool func_198(int iParam0)
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

char* func_199(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_200()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_201(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_202(int iParam0)
{
	return func_151(iParam0, Global_1310750->f_16072 | 64);
}

void func_203(int iParam0)
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

bool func_204(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_205(var uParam0)
{
	return func_252(*uParam0, 1);
}

void func_206(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_207(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_208(int iParam0, bool bParam1)
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

void func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0, int iParam1)
{
	func_167(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

bool func_211(int iParam0)
{
	if (!func_107(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_107(iParam0))
	{
		return;
	}
	if (!func_162(iParam0, 1))
	{
		return;
	}
	if (!func_162(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_211(iParam0)) && func_253(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_221(iParam0);
	if (func_254(func_168(iParam0)))
	{
		iVar0 = func_170(iParam0);
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
		func_171(iParam0, 16);
	}
	if (func_162(iParam0, 128) && !bParam3)
	{
		func_163(iParam0, 0);
	}
}

void func_213(int iParam0, bool bParam1)
{
	if (!func_255(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_256(iParam0, 1024))
		{
			func_257(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_256(iParam0, 1024))
	{
		func_258(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_259(iParam0);
}

void func_214(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_215(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_216(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_217(int iParam0, bool bParam1)
{
	if (!func_260(iParam0))
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

bool func_218(int iParam0)
{
	if (func_261(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_219()
{
	return true;
}

void func_220(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_107(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_221(int iParam0)
{
	if (!func_107(iParam0))
	{
		return;
	}
	iVar0 = func_243(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_222(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_262(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_224(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_225(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_263(iParam0);
	}
	else
	{
		func_264(iParam0, iParam1);
	}
	func_265();
}

void func_226(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_227(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_228(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_229(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_230(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_233(int iParam0)
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

float func_234(int iParam0)
{
	iVar0 = func_233(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

bool func_235(int iParam0, float fParam1)
{
	iVar0 = func_233(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_236(iParam0);
		return true;
	}
	return false;
}

float func_236(int iParam0)
{
	iVar0 = func_233(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959.f_20[iVar0]);
}

int func_237(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_266(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_238(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_239(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_267(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_240(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

void func_241(var uParam0)
{
	uParam0->f_19 = 1;
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1 || !func_205(uParam0))
	{
		func_268(uParam0);
	}
}

int func_243(int iParam0)
{
	iVar0 = func_170(iParam0);
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

Vector3 func_244(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_245(var uParam0, int iParam1)
{
	return func_269(uParam0->f_19, iParam1);
}

bool func_246(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_270(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_247(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_271(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_248(Global_23118.f_1651[iVar1], iParam2);
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_249(var uParam0, bool bParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_243(*uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_245(uParam0, 65536) && func_272(Global_35, iVar0, 1) > 25f)
		{
			func_273(1, 1, 0);
		}
		if (func_274(uParam0, bParam2))
		{
			if (func_276(func_275()))
			{
				func_277(func_275());
			}
			func_278(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_245(uParam0, 64))
		{
			return false;
		}
		if (func_272(Global_35, iVar0, 1) < 49f)
		{
			if (func_279(uParam0, iVar0))
			{
				func_280();
				if (bParam1)
				{
					if (!func_274(uParam0, bParam2))
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
	if (is_string_null_or_empty(func_281(&vVar0)))
	{
		return;
	}
	iVar3 = func_243(*uParam0);
	if (!func_282(iVar3, 0))
	{
		return;
	}
	if (is_string_null_or_empty(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	func_283(&uLocal_18, iVar3, uParam0->f_37, 0);
	set_ped_can_use_auto_conversation_lookat(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_245(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_284())
			{
				func_283(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_283(&uLocal_18, Global_35, "JOHN", 0);
			}
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_245(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_243(&(uParam0->f_3[iVar4]));
			if (!func_282(iVar5, 0))
			{
				return;
			}
			Stack.Push(&(uParam0->f_3[iVar4]));
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			func_283(&uLocal_18, iVar5, sVar6, 0);
			set_ped_can_use_auto_conversation_lookat(iVar5, true);
			uParam0->f_3[iVar4]->f_2 = 1;
		}
	}
	bVar7 = func_245(uParam0, 16384);
	if (func_285(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_286(func_275());
		uParam0->f_30 = 1;
	}
	func_287(uParam0);
}

bool func_251(vector3 vParam0, int iParam3)
{
	func_288(iParam3, &vVar0, &Var3, &uVar6);
	if (func_289(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_253(int iParam0)
{
	if (!func_107(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

bool func_254(int iParam0)
{
	return iParam0 != 0;
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_256(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_257(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_258(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_259(int iParam0)
{
	func_291(func_290(iParam0));
}

bool func_260(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_261(int iParam0)
{
	return iParam0 != 0;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	iVar0 = func_262(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_292(iVar0);
}

int func_264(int iParam0, int iParam1)
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
			func_293(iVar2);
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

void func_265()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_266(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_267(int iParam0, int iParam1)
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

void func_268(var uParam0)
{
	func_294(uParam0, 0f);
}

bool func_269(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_270(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_271(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_269(&(Global_23118.f_1651[iVar1]), iParam2);
}

int func_271(int iParam0)
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

float func_272(int iParam0, int iParam1, bool bParam2)
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
	return func_295(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_274(var uParam0, bool bParam1)
{
	if (!func_107(*uParam0) && !func_296(*uParam0, 0))
	{
		return false;
	}
	if (func_297(*uParam0, 0))
	{
		return false;
	}
	iVar0 = func_243(*uParam0);
	iVar1 = func_275();
	if (func_255(iVar1))
	{
		if (func_298(iVar1))
		{
			func_299(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_300(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_290(iVar1);
		iVar3 = func_301(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_299(uParam0);
			return uParam0->f_30;
		}
		if (func_302(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319->f_17371 || func_303(func_243(*uParam0), 1, 1, 1, 0)) || _is_ped_hogtied(func_243(*uParam0)))
	{
		func_299(uParam0);
		return uParam0->f_30;
	}
	if ((((func_116(player_id(), 1, 0, 1) || func_304()) || _0xf46108c50a22b029()) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id()))
	{
		return false;
	}
	if (Global_1914319->f_3[uParam0->f_24]->f_411)
	{
		return false;
	}
	if (func_305(Global_35, 0))
	{
		func_299(uParam0);
		return uParam0->f_30;
	}
	if (func_306())
	{
		if (func_307(101))
		{
			return false;
		}
	}
	if (func_115(178, 1, 1))
	{
		return false;
	}
	if (!func_308(iVar0, func_245(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_245(uParam0, 2048) && !func_245(uParam0, 32768))
		{
			if (!func_205(&(uParam0->f_34)))
			{
				func_242(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_245(uParam0, 1024))
			{
				if (func_309(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (func_309(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_275()
{
	if (func_310())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_276(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_256(iParam0, 1073741824);
}

void func_277(int iParam0)
{
	func_258(iParam0, 1073741824);
}

void func_278(var uParam0)
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
		if (func_107(*uParam0))
		{
			iVar0 = func_243(*uParam0);
			if (does_entity_exist(iVar0))
			{
				set_ped_can_use_auto_conversation_lookat(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_107(&(uParam0->f_3[iVar1])) && uParam0->f_3[iVar1]->f_2)
			{
				iVar2 = func_243(&(uParam0->f_3[iVar1]));
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

bool func_279(var uParam0, int iParam1)
{
	if (func_245(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_243(&(uParam0->f_3[iVar0]));
			if (func_282(iVar1, 0) && func_311(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_245(uParam0, 512) && !func_245(uParam0, 256))
	{
		return true;
	}
	if (func_245(uParam0, 512))
	{
		if (func_312(uParam0))
		{
			return true;
		}
	}
	if (func_245(uParam0, 256))
	{
		if (func_313(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_280()
{
	if (func_314(5))
	{
		func_315(2);
		func_315(4);
	}
	if ((((func_314(6) || func_314(14)) || func_314(26)) || func_314(9)) || func_314(21))
	{
		func_315(4);
	}
	if (((func_316(26) || func_316(27)) || func_316(28)) || func_316(29))
	{
		func_315(4);
	}
	if (((func_317(3, 61) || func_317(3, 29)) || func_317(3, 73)) || func_317(3, 43))
	{
		func_315(4);
	}
	if (func_306())
	{
		if (func_307(101) || func_307(79))
		{
			func_315(4);
		}
		if (((((func_307(88) || func_307(89)) || func_307(108)) || func_307(98)) || func_307(106)) || func_307(110))
		{
			func_315(8);
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(717558736) > 0)
	{
		func_315(4);
	}
	if (is_thread_active((*Global_1396257)[16]->f_635, false) || is_thread_active((*Global_1396257)[13]->f_635, false))
	{
		func_315(4);
	}
}

var func_281(var uParam0)
{
	return uParam0;
}

bool func_282(int iParam0, int iParam1)
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
	if (func_121(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_121(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_121(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_121(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_121(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_121(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_121(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_121(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_283(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_318(uParam0, iParam1, sParam2))
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

bool func_284()
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

bool func_285(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	if (_0xd89504d9d7d5057d(&vParam1))
	{
		return true;
	}
	else if (func_319(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = uParam0[0];
		iVar1 = uParam0[1];
		if ((does_entity_exist(iVar0) && !func_320(iVar0, 0)) && (does_entity_exist(iVar1) && !func_320(iVar1, 0)))
		{
			if (!func_101(vParam4))
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

void func_286(int iParam0)
{
	func_257(iParam0, 1073741824);
}

void func_287(var uParam0)
{
	func_242(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_321() };
	uParam0->f_21 = -1;
	if (func_245(uParam0, 16384))
	{
		func_322(uParam0, 16384);
	}
	func_322(uParam0, 32768);
	func_322(uParam0, 1024);
	func_206(&uLocal_15);
	if (func_245(uParam0, 4096))
	{
		iVar0 = func_323(func_147(), uParam0->f_24);
		iVar1 = func_243(*uParam0);
		if (func_300(iVar0) && func_308(iVar1, 1))
		{
			func_324(iVar0, 0);
			func_322(uParam0, 8192);
			func_322(uParam0, 4096);
		}
	}
}

void func_288(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_289(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_290(int iParam0)
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

void func_291(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_292(int iParam0)
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

int func_293(int iParam0)
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

void func_294(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_325() - fParam1);
	func_326(uParam0, 1);
	func_327(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_295(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_296(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_170(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_243(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_170(iParam0));
}

bool func_297(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	if (!func_211(iParam0) && bParam1)
	{
		return false;
	}
	return func_162(iParam0, 1);
}

bool func_298(int iParam0)
{
	if (!func_255(iParam0))
	{
		return false;
	}
	return func_269(&(Global_1914319->f_18594[iParam0]), 2);
}

void func_299(var uParam0)
{
	iVar0 = func_275();
	if (!func_255(iVar0))
	{
		return;
	}
	if (func_276(iVar0) && func_328(1))
	{
		func_273(1, 0, 1);
	}
	func_191(uParam0, 64);
}

bool func_300(int iParam0)
{
	return func_256(iParam0, 67108864);
}

int func_301(int iParam0)
{
	if (!func_329(iParam0, &iVar0))
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

bool func_302(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return func_330(iParam0, 8388608);
}

int func_303(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_331(iVar0, 0)))
		{
			if (func_332(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (_is_ped_carrying(Global_35) || func_333(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_305(int iParam0, int iParam1)
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

bool func_306()
{
	return Global_1310750->f_16077 != 0;
}

bool func_307(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_308(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || func_320(iParam0, 0))
	{
		return false;
	}
	if (func_334(iParam0))
	{
		func_206(&uLocal_15);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_205(&uLocal_15))
	{
		if (func_309(&uLocal_15) < 2f)
		{
			return false;
		}
	}
	else
	{
		func_242(&uLocal_15, 0);
		return false;
	}
	return true;
}

float func_309(var uParam0)
{
	if (!func_205(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_335(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_325() - uParam0->f_1);
}

bool func_310()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

float func_311(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_312(var uParam0)
{
	iVar0 = func_243(*uParam0);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		if (func_272(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_313(int iParam0, var uParam1)
{
	if (_does_volume_exist(uParam1->f_38))
	{
		if (func_336(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (_does_volume_exist(uParam1->f_39))
	{
		if (func_336(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_314(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_337((*Global_1835011)[iParam0]->f_1);
}

void func_315(int iParam0)
{
	func_248(&uLocal_14, iParam0);
}

bool func_316(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_175(iParam0))
	{
		return false;
	}
	return func_337((*Global_1347702)[iParam0]->f_15);
}

bool func_317(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	if (func_338(iParam1))
	{
		return false;
	}
	return func_256(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_318(var uParam0, int iParam1, char* sParam2)
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

bool func_319(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_339(vParam1, uParam0);
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

bool func_320(int iParam0, bool bParam1)
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

Vector3 func_321()
{
	return 0f, 0f, 0f;
}

void func_322(var uParam0, int iParam1)
{
	func_167(&(uParam0->f_19), iParam1);
}

int func_323(int iParam0, int iParam1)
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

void func_324(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_300(iParam0))
		{
			func_257(iParam0, 67108864);
		}
	}
	else if (func_300(iParam0))
	{
		func_258(iParam0, 67108864);
	}
}

float func_325()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_328(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_329(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
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

bool func_330(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

var func_331(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_332(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_333(int iParam0)
{
	return (func_340(iParam0, 4) || func_340(iParam0, 5));
}

bool func_334(int iParam0)
{
	if (((func_328(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

bool func_335(var uParam0)
{
	return func_252(*uParam0, 2);
}

bool func_336(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_337(int iParam0)
{
	iVar0 = func_164(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_338(int iParam0)
{
	bVar0 = func_256(iParam0, 256);
	return bVar0;
}

void func_339(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_340(int iParam0, int iParam1)
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

