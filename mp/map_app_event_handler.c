void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
	Var4.f_19 = -1;
	Var4.f_33 = -1;
	Var4.f_34 = -1;
	Var4.f_35 = -1;
	Var4.f_36 = -1;
	Var4.f_37 = 1;
	if (func_1() != -1)
	{
		func_2(&Var4);
	}
	else
	{
		func_3(&Var4);
	}
	if (has_force_cleanup_occurred(4))
	{
		func_4(&Var4);
	}
	if (func_1() == -1)
	{
		while (true)
		{
			while (_event_manager_is_event_pending(iScriptParam_0))
			{
				if (_event_manager_peek_event(iScriptParam_0, &Var0))
				{
					func_5(&Var0, &Var4);
					switch (Var0.f_2)
					{
						case -118315613:
							Var4.f_4 = { Var0 };
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_6(&Var4);
									break;
								case -632467210:
									Var4.f_33 = -1;
									Var4.f_34 = -1;
									func_7(&Var4);
									break;
							}
							Var4.f_37 = 1;
							break;
						case 651783971:
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_8(&Var4);
									break;
								case -632467210:
									func_9(&Var4);
									Var4 = { Var4.f_4 };
									func_6(&Var4);
									break;
								case -1203660660:
									func_10(&Var4);
									break;
							}
							break;
					}
					_event_manager_pop_event(iScriptParam_0);
				}
			}
			func_11(&Var4);
			func_12(&Var4);
			wait(0);
		}
	}
	else
	{
		while (!func_13(1, 1))
		{
			func_14(iScriptParam_0, &Var4);
			func_11(&Var4);
			func_15(&Var4);
			wait(0);
		}
	}
	func_4(&Var4);
	terminate_this_thread();
}

int func_1()
{
	return Global_1572887->f_13;
}

void func_2(var uParam0)
{
	func_3(uParam0);
}

void func_3(var uParam0)
{
	Var0.f_19 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = 1;
	*uParam0 = { Var0 };
	uParam0->f_20 = -1;
	uParam0->f_8 = _databinding_add_ui_item_list_from_path("", "MapFocus");
	uParam0->f_10 = _databinding_add_data_string(uParam0->f_8, "Region", "");
	uParam0->f_11 = _databinding_add_data_bool(uParam0->f_8, "ItemHovered", 0);
	uParam0->f_12 = _databinding_add_data_string(uParam0->f_8, "HoveredName", "");
	_text_database_request("FMMC");
	if (_does_streamed_txd_exist(-1859668514))
	{
		_request_streamed_txd(-1859668514, false);
	}
	uParam0->f_37 = 1;
}

void func_4(var uParam0)
{
	if (func_1() == -1)
	{
		func_16(uParam0);
	}
	else
	{
		func_17(uParam0);
	}
	terminate_this_thread();
}

void func_5(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case -590699808:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_33 = func_19(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -2006263512:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -1666016325:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case 1138540229:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_34 = func_20(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	}
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	switch (func_21(uParam0))
	{
		case 2:
			uParam0->f_22 = func_22(uParam0->f_19);
			break;
		case 0:
			uParam0->f_22 = func_23(uParam0->f_20, 0);
			break;
		case 1:
			uParam0->f_22 = func_24(uParam0->f_21);
			break;
		default:
			func_25(uParam0);
			return 0;
	}
	func_25(uParam0);
	return 1;
}

void func_7(var uParam0)
{
	func_25(uParam0);
}

int func_8(var uParam0)
{
	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	switch (uParam0->f_23)
	{
		case 71:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
			{
				uParam0->f_26 = _0x57e798b57c45ee16(get_hash_key(&((*Global_1835011)[uParam0->f_29]->f_9)));
			}
			else
			{
				uParam0->f_26 = -1640799778;
			}
			break;
		case 70:
			switch (func_21(uParam0))
			{
				case 0:
					uParam0->f_22 = func_23(uParam0->f_20, 0);
					uParam0->f_26 = func_28(uParam0->f_19);
					if (!_does_streamed_txd_exist(uParam0->f_26))
					{
						uParam0->f_26 = func_29();
					}
					break;
			}
			break;
		case 52:
		case 91:
			uParam0->f_28 = 0;
			return 0;
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}
	if (_does_streamed_txd_exist(uParam0->f_26))
	{
		_request_streamed_txd(uParam0->f_26, true);
		uParam0->f_28 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	func_31(uParam0);
	uParam0->f_23 = { Var0 };
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = -1;
	func_32(uParam0);
}

int func_10(var uParam0)
{
	if (uParam0->f_25 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (_does_streamed_txd_exist(uParam0->f_26))
	{
		if (!uParam0->f_28)
		{
			uParam0->f_39 = 0;
			_request_uiapp_transition_by_hash(-2042186616, -556114113);
			return 1;
		}
	}
	return 0;
}

void func_11(var uParam0)
{
	if (uParam0->f_37)
	{
		func_33(uParam0);
		uParam0->f_37 = 0;
	}
}

void func_12(var uParam0)
{
	if (func_34(uParam0))
	{
		switch (uParam0->f_23)
		{
			case 71:
				func_35(uParam0->f_25, uParam0);
				break;
			case 70:
				func_36(uParam0->f_19, uParam0);
				break;
			case 92:
				func_37(uParam0->f_25, uParam0);
				break;
			case 93:
				func_38(uParam0->f_25, uParam0);
				break;
			case 94:
				func_39(uParam0->f_25, uParam0);
				break;
			case 95:
				func_40(uParam0->f_23, uParam0);
				break;
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}
}

bool func_13(bool bParam0, bool bParam1)
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

void func_14(int iParam0, var uParam1)
{
	while (_event_manager_is_event_pending(iParam0))
	{
		if (_event_manager_peek_event(iParam0, &Var0))
		{
			func_5(&Var0, uParam1);
			switch (Var0.f_2)
			{
				case -118315613:
					uParam1->f_4 = { Var0 };
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_41(uParam1);
							break;
						case -632467210:
							func_42(uParam1);
							break;
					}
					break;
				case 651783971:
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_43(uParam1);
							break;
						case -632467210:
							func_44(uParam1);
							*uParam1 = { uParam1->f_4 };
							func_41(uParam1);
							break;
						case -1203660660:
							func_45(uParam1);
							break;
					}
					break;
				case -1287330983:
					if (Var0 == -1203660660)
					{
						if (func_46(uParam1))
						{
							_close_app_by_hash(29649618);
						}
					}
					break;
			}
			_event_manager_pop_event(iParam0);
		}
	}
}

void func_15(var uParam0)
{
	if (func_34(uParam0))
	{
		if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &uVar0))
		{
			return;
		}
		switch (uParam0->f_23)
		{
			case 91:
				func_50(uParam0->f_25, uParam0);
				break;
			case 71:
				func_51(uParam0, &uVar0);
				break;
			case 70:
				func_52(uParam0, &uVar0);
				break;
			case 96:
			case 97:
				func_53(uParam0, &uVar0);
				break;
			default:
				func_54(uParam0, &uVar0);
				break;
		}
	}
	func_55(uParam0);
	func_56(uParam0);
}

void func_16(var uParam0)
{
	_databinding_remove_data_entry(uParam0->f_8);
}

void func_17(var uParam0)
{
	_databinding_remove_data_entry(uParam0->f_8);
}

int func_18(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_19(int iParam0)
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

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 83;
		case -744494798:
			return 127;
		case -1708386982:
			return 39;
		case 1053078005:
			return 40;
		case 1778899666:
			return 99;
		case -1947415645:
			return 87;
		case 1862420670:
			return 101;
		case -1851305682:
			return 70;
		case -473051294:
			return 74;
		case 406627834:
			return 3;
		case 1463094051:
			return 116;
		case 2046780049:
			return 111;
		case -765540529:
			return 5;
		case 2147354003:
			return 33;
		case 427683330:
			return 26;
		case -1524959147:
			return 121;
		case 459833523:
			return 81;
		case 2126321341:
			return 98;
		case -872622034:
			return 37;
		case 1663398575:
			return 60;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 62;
		case 1299204683:
			return 66;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (uParam0->f_19 == -1)
	{
		return -1;
	}
	uParam0->f_22 = func_22(uParam0->f_19);
	if (uParam0->f_22 != 0)
	{
		return 2;
	}
	uParam0->f_20 = func_20(uParam0->f_19);
	if (func_57(uParam0->f_20))
	{
		return 0;
	}
	uParam0->f_21 = func_19(uParam0->f_19);
	if (func_58(uParam0->f_21))
	{
		return 1;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case -221059932:
			return -594748684;
		case 10837344:
			return 1072597802;
		case 2045157995:
			return 1259085938;
		case -1289136221:
			return 1762760291;
		case 1246494439:
			return 1715468631;
		case -1973391500:
			return -960313506;
		case -1247148211:
			return -1581676015;
		case 1935063277:
			return -1431514117;
		default:
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
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

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 13:
			return 985737465;
		case 14:
			return -735550853;
		case 15:
			return -1716084250;
		case 16:
			return 869827975;
		default:
			break;
	}
	return 0;
}

void func_25(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_20(uParam0->f_19);
	iVar4 = uParam0->f_33;
	if (!func_58(iVar4))
	{
		iVar4 = func_19(uParam0->f_19);
	}
	if (!func_58(iVar4))
	{
		iVar5 = func_60(func_59(iVar3, 1, 1));
	}
	else
	{
		iVar5 = func_61(iVar4);
	}
	if ((func_62(iVar4) || func_63(iVar5)) || func_64(iVar3))
	{
		if (is_ped_male(player_ped_id()))
		{
			sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
		}
		iVar0 = 1;
	}
	else if (func_65(iVar5))
	{
		iVar1 = func_66(iVar5);
		if (iVar1 > 0)
		{
			iVar0 = 1;
			sVar2 = _create_var_string(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	_databinding_write_data_bool(uParam0->f_11, iVar0);
	_databinding_write_data_string(uParam0->f_12, sVar2);
}

bool func_26(int iParam0, var uParam1)
{
	bVar2 = set_blip_flashes(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

bool func_27(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < &Global_1900807)
	{
		if (!func_67(*(*Global_1900807)[iVar0]))
		{
		}
		else if (Global_1900807[iVar0] == 2)
		{
			*uParam1 = func_68(*(*Global_1900807)[iVar0]);
			if ((func_69(*uParam1) && does_blip_exist((*Global_1835011)[*uParam1]->f_28)) && (*Global_1835011)[*uParam1]->f_28 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 406627834:
			return 412187666;
		case -765540529:
			return -48955357;
		case 427683330:
			return -1366448499;
		case 1053078005:
			return -2142170718;
		case -473051294:
			return -652262915;
		case 459833523:
			return 1109427018;
		case 7359335:
			return -1353234788;
		case 2126321341:
			return -1965958161;
		case 2046780049:
			return -1059106609;
		case -744494798:
			return -1119990720;
		case -1524959147:
			return 539298361;
		default:
			break;
	}
	return -1;
}

int func_29()
{
	return 1109427018;
}

int func_30(int iParam0, int iParam1)
{
	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return -1014339941;
		case 15:
			return -1131397804;
		case 17:
			return -1211307166;
		case 18:
			return 909802596;
		case 19:
			return -1932898631;
		case 55:
			return -1212983574;
		case 56:
			return -1805795741;
		case 57:
			return -1949319444;
		case 61:
			return -40867973;
		case 62:
			return -700024937;
		case 63:
			return -422762807;
		case 64:
			return 1307627757;
		case 65:
			return -1341878153;
		case 66:
			return 1334885374;
		case 67:
			return 1718870684;
		case 91:
			return -1640799778;
		case 92:
			return -1640799778;
		case 93:
			return -1640799778;
		case 94:
			return -1640799778;
		case 95:
			return -1640799778;
		case 20:
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
		case 41:
		case 53:
		case 59:
		case 68:
		case 69:
			Var1 = { func_70(iParam1, iParam0, &uVar0) };
			iVar17 = get_hash_key(&Var1);
			break;
		case 16:
			iVar17 = get_hash_key("MAP_CARD_BLK_BOUNTY");
			break;
		case 58:
			Var1 = { func_71() };
			iVar17 = get_hash_key(&Var1);
			break;
		case 54:
		case 60:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			Var1 = { func_72(iParam0, iParam1, &uVar0) };
			iVar17 = get_hash_key(&Var1);
			break;
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
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar17 = get_hash_key(&Var1);
			break;
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			set_blip_flashes(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_74(iVar19), 128);
			iVar17 = get_hash_key(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_31(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_8);
	_databinding_remove_data_entry(uParam0->f_9);
}

void func_32(var uParam0)
{
	if (!_request_uiapp_transition_by_hash(-2042186616, 1136348382))
	{
		uParam0->f_39 = 1;
	}
	else
	{
		uParam0->f_39 = 0;
	}
}

void func_33(var uParam0)
{
	if (uParam0->f_38 && _databinding_is_data_id_valid(uParam0->f_9))
	{
		return;
	}
	sVar0 = func_75(uParam0->f_35, uParam0->f_36);
	if (is_string_null_or_empty(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_34 != -1)
		{
			iVar1 = func_76(uParam0->f_34);
		}
		if (uParam0->f_33 != -1)
		{
			iVar2 = func_77(uParam0->f_33);
			iVar3 = func_78(uParam0->f_33);
		}
		if (!is_string_null_or_empty(iVar1) && !is_string_null_or_empty(iVar2))
		{
			sVar0 = _create_var_string(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!is_string_null_or_empty(iVar2) && !is_string_null_or_empty(iVar3))
		{
			sVar0 = _create_var_string(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	_databinding_write_data_string(uParam0->f_10, sVar0);
}

bool func_34(var uParam0)
{
	if (uParam0->f_39)
	{
		func_32(uParam0);
	}
	if (!uParam0->f_28)
	{
		return false;
	}
	switch (uParam0->f_23)
	{
		case 0:
		case 52:
		case 91:
			uParam0->f_28 = 0;
			return false;
		default:
			break;
	}
	if ((_does_streamed_txd_exist(uParam0->f_26) && _has_streamed_txd_loaded(uParam0->f_26)) && (uParam0->f_27 == 0 || ((uParam0->f_27 != 0 && _does_streamed_txd_exist(uParam0->f_27)) && _has_streamed_txd_loaded(uParam0->f_27))))
	{
		uParam0->f_28 = 0;
		uParam0->f_38 = 0;
		return true;
	}
	return false;
}

void func_35(int iParam0, var uParam1)
{
	if (!func_69(uParam1->f_29))
	{
		if (!func_27(iParam0, &(uParam1->f_29)))
		{
			return;
		}
	}
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	_databinding_add_data_hash(uParam1->f_9, "name", (*Global_1835011)[uParam1->f_29]->f_27);
	MemCopy(&cVar0, {(*Global_1835011)[uParam1->f_29]->f_9}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!does_text_label_exist(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = get_hash_key(&((*Global_1835011)[uParam1->f_29]->f_9));
	_databinding_add_data_hash(uParam1->f_9, "description", get_hash_key(&cVar0));
	_databinding_add_data_hash(uParam1->f_9, "description_title", iVar2);
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", _0x57e798b57c45ee16(iVar2));
	_databinding_add_data_hash(uParam1->f_9, "imageTX", _0x57e798b56c45ee15(iVar2));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", 1544592360);
	_databinding_add_data_string(uParam1->f_9, "hint_value", "$0.00");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "Zone");
	uParam1->f_26 = func_28(iParam0);
	iVar0 = func_79(uParam1->f_20);
	_databinding_add_data_hash(uParam1->f_9, "name", func_80(iParam0));
	_databinding_add_data_hash(uParam1->f_9, "description_title", get_hash_key(func_77(iVar0)));
	_databinding_add_data_hash(uParam1->f_9, "description", func_81(iParam0));
	if (_does_streamed_txd_exist(uParam1->f_26))
	{
		_databinding_add_data_hash(uParam1->f_9, "imageTXD", func_28(iParam0));
		_databinding_add_data_hash(uParam1->f_9, "imageTX", func_28(iParam0));
	}
	else
	{
		uParam1->f_26 = func_29();
		_databinding_add_data_hash(uParam1->f_9, "imageTXD", uParam1->f_26);
	}
	iVar1 = func_61(iVar0);
	if (func_65(iVar1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 > 0)
		{
			_databinding_add_data_string(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			_databinding_add_data_int(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			_databinding_add_data_string(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			_databinding_add_data_string(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		_databinding_add_data_hash(uParam1->f_9, "hint_name", 0);
		_databinding_add_data_string(uParam1->f_9, "hint_value", "");
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	set_blip_flashes(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	_databinding_add_data_hash(uParam1->f_9, "name", get_hash_key(func_82(iVar1)));
	_databinding_add_data_hash(uParam1->f_9, "description", -436556357);
	_databinding_add_data_hash(uParam1->f_9, "description_title", 0);
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", 0);
	_databinding_add_data_string(uParam1->f_9, "hint_value", "");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_38(int iParam0, var uParam1)
{
	set_blip_flashes(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	_databinding_add_data_hash(uParam1->f_9, "name", &(Global_1071686->f_23887.f_366[iVar1]));
	_databinding_add_data_hash(uParam1->f_9, "description", -436556357);
	_databinding_add_data_hash(uParam1->f_9, "description_title", 0);
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", 0);
	_databinding_add_data_string(uParam1->f_9, "hint_value", "");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_39(int iParam0, var uParam1)
{
	set_blip_flashes(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	_databinding_add_data_hash(uParam1->f_9, "name", func_83(iVar1));
	_databinding_add_data_hash(uParam1->f_9, "description", -436556357);
	_databinding_add_data_hash(uParam1->f_9, "description_title", 0);
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", 0);
	_databinding_add_data_string(uParam1->f_9, "hint_value", "");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_40(int iParam0, var uParam1)
{
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_84(iParam0), 128);
	switch (func_85(iParam0))
	{
		case 1:
			Var1 = { func_70(uParam1->f_25, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, func_76(iVar0), 128);
			_databinding_add_data_hash(uParam1->f_9, "name", get_hash_key(&cVar17));
			_databinding_add_data_hash(uParam1->f_9, "description", get_hash_key(&Var1));
			_databinding_add_data_hash(uParam1->f_9, "description_title", get_hash_key(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar0 = func_86(get_blip_coords(uParam1->f_25), 1);
			StringCopy(&cVar33, func_76(iVar0), 128);
			_databinding_add_data_string(uParam1->f_9, "name", &cVar17);
			_databinding_add_data_hash(uParam1->f_9, "description", get_hash_key(&Var1));
			_databinding_add_data_hash(uParam1->f_9, "description_title", get_hash_key(&cVar33));
			break;
		case 5:
			Var1 = { func_87(iVar0) };
			_databinding_add_data_string(uParam1->f_9, "name", &cVar17);
			_databinding_add_data_hash(uParam1->f_9, "description", get_hash_key(&Var1));
			_databinding_add_data_hash(uParam1->f_9, "description_title", 0);
			break;
		default:
			_databinding_add_data_string(uParam1->f_9, "name", &cVar17);
			_databinding_add_data_hash(uParam1->f_9, "description", get_hash_key(&Var1));
			_databinding_add_data_hash(uParam1->f_9, "description_title", 0);
			break;
	}
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", func_30(iParam0, uParam1->f_25));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", 0);
	_databinding_add_data_hash(uParam1->f_9, "hint_value", 0);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

int func_41(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	if (func_49(uParam0->f_2, uParam0->f_1, &Var0))
	{
		uParam0->f_22 = Var0.f_3;
		func_88(uParam0);
		return 1;
	}
	func_88(uParam0);
	return 0;
}

void func_42(var uParam0)
{
	func_88(uParam0);
}

int func_43(var uParam0)
{
	uParam0->f_25 = uParam0->f_1;
	uParam0->f_37 = 1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	switch (uParam0->f_23)
	{
		case 71:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = Var0.f_12;
			break;
		case 52:
		case 91:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
		case 94:
			uParam0->f_26 = Var0.f_12;
			uParam0->f_27 = Var0.f_14;
			break;
		default:
			uParam0->f_26 = Var0.f_12;
			break;
	}
	if (!_does_streamed_txd_exist(uParam0->f_26))
	{
		uParam0->f_26 = 1078908615;
	}
	if (_does_streamed_txd_exist(uParam0->f_26))
	{
		_request_streamed_txd(uParam0->f_26, true);
		uParam0->f_28 = 1;
		if (uParam0->f_27 != 0 && _does_streamed_txd_exist(uParam0->f_27))
		{
			_request_streamed_txd(uParam0->f_27, true);
		}
		return 1;
	}
	return 0;
}

void func_44(var uParam0)
{
	func_9(uParam0);
	func_90(uParam0);
}

int func_45(var uParam0)
{
	return func_10(uParam0);
}

bool func_46(var uParam0)
{
	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	if (uParam0->f_23 == 92)
	{
		func_92(func_91(Var0.f_1), 6);
		return true;
	}
	return false;
}

int func_47(int iParam0)
{
	return func_93(iParam0);
}

int func_48(int iParam0)
{
	if (!does_blip_exist(iParam0))
	{
		return 0;
	}
	set_blip_flashes(iParam0, &iVar0, &uVar1);
	switch (func_93(iVar0))
	{
		case 249251635:
			return uVar1;
		case -1258576797:
			return uVar1;
		case 1528833484:
			return uVar1;
		case 2133809007:
			return uVar1;
		case 1753392288:
			return uVar1;
		case -1397234361:
			return uVar1;
		case -1174166673:
			return uVar1;
		case 1355002354:
			return uVar1;
		case -891753673:
			return uVar1;
		default:
			break;
	}
	return uVar1;
}

bool func_49(int iParam0, int iParam1, var uParam2)
{
	Var0 = Global_1071686->f_28447;
	Var0.f_2 = -1629667380;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		*uParam2 = iParam0;
		uParam2->f_1 = iParam1;
		Var0.f_2 = -178053467;
		_datafile_get_hash(&(uParam2->f_3), &Var0);
		Var0.f_2 = 2068408867;
		_datafile_get_hash(&(uParam2->f_2), &Var0);
		Var0.f_2 = -2015838779;
		_datafile_get_hash(&(uParam2->f_4), &Var0);
		Var0.f_2 = -837877152;
		_datafile_get_hash(&(uParam2->f_5), &Var0);
		Var0.f_2 = -1422707781;
		_datafile_get_hash(&(uParam2->f_6), &Var0);
		Var0.f_2 = -875438543;
		_datafile_get_hash(&(uParam2->f_7), &Var0);
		Var0.f_2 = 680824008;
		_datafile_get_hash(&(uParam2->f_8), &Var0);
		Var0.f_2 = -1832584664;
		_datafile_get_hash(&(uParam2->f_9), &Var0);
		Var0.f_2 = 1926839997;
		_datafile_get_hash(&(uParam2->f_10), &Var0);
		Var0.f_2 = -839757535;
		_datafile_get_hash(&(uParam2->f_11), &Var0);
		Var0.f_2 = 378321223;
		_datafile_get_hash(&(uParam2->f_12), &Var0);
		Var0.f_2 = -865732538;
		_datafile_get_hash(&(uParam2->f_13), &Var0);
		Var0.f_2 = -1361232962;
		_datafile_get_hash(&(uParam2->f_14), &Var0);
		Var0.f_2 = 680460752;
		_datafile_get_hash(&(uParam2->f_15), &Var0);
		Var0.f_2 = 1929921658;
		_datafile_get_hash(&(uParam2->f_16), &Var0);
		Var0.f_2 = 1969633495;
		_datafile_get_string(&(uParam2->f_17), &Var0);
		Var0.f_2 = -1607031478;
		_datafile_get_string(&(uParam2->f_25), &Var0);
		return true;
	}
	return false;
}

void func_50(int iParam0, var uParam1)
{
	set_blip_flashes(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = _databinding_add_data_container(uParam1->f_8, "BLIP");
	Var2 = { func_94(int_to_playerindex(iVar1)) };
	uParam1->f_15 = _databinding_add_data_string(uParam1->f_9, "name", func_95(get_player_name(int_to_playerindex(iVar1)), 109029619));
	uParam1->f_13 = _databinding_add_data_hash(uParam1->f_9, "description", -436556357);
	uParam1->f_14 = _databinding_add_data_hash(uParam1->f_9, "description_title", 0);
	func_96(&uVar9, Var2, 0);
	_databinding_add_data_hash(uParam1->f_9, "imageTXD", get_hash_key(&uVar9));
	_databinding_add_data_hash(uParam1->f_9, "hint_name", -486609646);
	_databinding_add_data_int(uParam1->f_9, "hint_value", func_97(iVar1));
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_51(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = _databinding_add_data_container(uParam0->f_8, "BLIP");
	uParam0->f_15 = _databinding_add_data_hash(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = _databinding_add_data_string(uParam0->f_9, "description", _get_label_text_by_hash(-54516066));
	uParam0->f_14 = _databinding_add_data_string(uParam0->f_9, "description_title", "");
	func_98(uParam0, uParam1->f_8);
	_databinding_add_data_hash(uParam0->f_9, "imageTXD", uParam1->f_12);
	_databinding_add_data_hash(uParam0->f_9, "imageTX", uParam1->f_13);
	_databinding_add_data_hash(uParam0->f_9, "hint_name", uParam1->f_16);
	_databinding_add_data_string(uParam0->f_9, "hint_value", &(uParam1->f_17));
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_52(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = _databinding_add_data_container(uParam0->f_8, "BLIP");
	uParam0->f_15 = _databinding_add_data_hash(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = _databinding_add_data_hash(uParam0->f_9, "description", uParam1->f_8);
	uParam0->f_14 = _databinding_add_data_hash(uParam0->f_9, "description_title", uParam1->f_7);
	_databinding_add_data_hash(uParam0->f_9, "imageTXD", uParam1->f_12);
	_databinding_add_data_hash(uParam0->f_9, "imageTX", uParam1->f_13);
	_databinding_add_data_hash(uParam0->f_9, "hint_name", uParam1->f_16);
	_databinding_add_data_string(uParam0->f_9, "hint_value", &(uParam1->f_17));
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_53(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = _databinding_add_data_container(uParam0->f_8, "BLIP");
	uParam0->f_15 = _databinding_add_data_hash(uParam0->f_9, "name", uParam1->f_4);
	if (uParam0->f_23 == 96 || uParam0->f_23 == 97)
	{
		uParam0->f_13 = _databinding_add_data_hash(uParam0->f_9, "description", uParam1->f_8);
		uParam0->f_14 = _databinding_add_data_hash(uParam0->f_9, "description_title", uParam1->f_7);
	}
	_databinding_add_data_hash(uParam0->f_9, "imageTXD", uParam1->f_12);
	_databinding_add_data_hash(uParam0->f_9, "imageTX", uParam1->f_13);
	_databinding_add_data_hash(uParam0->f_9, "hint_name", uParam1->f_16);
	_databinding_add_data_string(uParam0->f_9, "hint_value", &(uParam1->f_17));
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_54(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = _databinding_add_data_container(uParam0->f_8, "BLIP");
	switch (uParam0->f_23)
	{
		case 94:
			iVar4 = func_99(uParam1->f_1);
			if (!func_100(iVar4))
			{
			}
			else
			{
				iVar6 = func_101(iVar4);
				if (iVar6 == 493038497)
				{
				}
				else
				{
					if (func_102(iVar4) != -323664079)
					{
						if (func_103(iVar4) == -1211851008)
						{
							if (!func_104(func_103(iVar4)))
							{
								iVar6 = -910931556;
							}
						}
						iVar5 = _0x8e84119a23c16623(func_105(iVar4, iVar6), 0, 0);
						if (iVar5 == 0)
						{
						}
						else
						{
							iVar0 = _0xda9d7be231fe865f(func_105(iVar4, iVar6), 0, 0);
							if (_0x354f689c4ffaab37(iVar5))
							{
								switch (iVar6)
								{
									case 303108068:
										iVar3 = uParam1->f_8;
										iVar1 = uParam1->f_12;
										iVar2 = uParam1->f_13;
										break;
									case -910931556:
										if (func_103(iVar4) == -1211851008)
										{
											iVar3 = uParam1->f_8;
											iVar1 = uParam1->f_12;
											iVar2 = uParam1->f_13;
										}
										else
										{
											iVar3 = uParam1->f_9;
											iVar1 = uParam1->f_14;
											iVar2 = uParam1->f_15;
											uParam1->f_12 = uParam1->f_14;
											uParam1->f_13 = uParam1->f_15;
										}
										break;
									default:
										break;
								}
							}
							else
							{
								switch (func_106(iVar4, iVar6))
								{
									case 1830115867:
										iVar3 = -648664377;
										break;
									case 472588819:
										iVar3 = 1463582430;
										break;
									default:
										break;
								}
								iVar1 = -1859668514;
								iVar2 = -712210889;
							}
							Jump @417; //curOff = 367
							iVar0 = func_107(iVar4, -1100859510);
							if (iVar0 == 0)
							{
								iVar0 = get_hash_key("GEM_BOUNTY_BOARD");
							}
							iVar3 = uParam1->f_8;
							iVar1 = uParam1->f_12;
							iVar2 = uParam1->f_13;
							Jump @447; //curOff = 417
							iVar0 = uParam1->f_4;
							iVar1 = uParam1->f_12;
							iVar2 = uParam1->f_13;
							iVar3 = uParam1->f_8;
						}
						uParam0->f_15 = _databinding_add_data_hash(uParam0->f_9, "name", iVar0);
						uParam0->f_13 = _databinding_add_data_hash(uParam0->f_9, "description", iVar3);
						uParam0->f_14 = _databinding_add_data_hash(uParam0->f_9, "description_title", uParam1->f_7);
						_databinding_add_data_hash(uParam0->f_9, "imageTXD", iVar1);
						_databinding_add_data_hash(uParam0->f_9, "imageTX", iVar2);
						_databinding_add_data_hash(uParam0->f_9, "hint_name", uParam1->f_16);
						_databinding_add_data_string(uParam0->f_9, "hint_value", &(uParam1->f_17));
						if (uParam1->f_10 != -1812168506)
						{
							uParam0->f_38 = 1;
							_databinding_write_data_string(uParam0->f_10, _create_var_string(0, uParam1->f_10));
						}
						if (uParam0->f_23 == 92)
						{
							iVar7 = func_91(uParam1->f_1);
							func_108(iVar7);
							uParam0->f_18 = 0;
							uParam0->f_16 = _databinding_add_data_bool(uParam0->f_9, "startable", 1);
							uParam0->f_17 = _databinding_add_data_hash(uParam0->f_9, "startPrompt", -578259052);
							func_55(uParam0);
						}
						_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
					}
				}
			}
			default:
				break;
	}
}

void func_55(var uParam0)
{
	if (uParam0->f_23 == 92 && _databinding_is_data_id_valid(uParam0->f_16))
	{
		bVar0 = ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 15) && !func_109());
		bVar1 = (_0x0f99f6436528a089(Global_1296859->f_15) && !_0x424b17a7dc5c90bc(player_id()));
		bVar2 = (bVar0 || bVar1);
		if (uParam0->f_18 != bVar2)
		{
			_databinding_write_data_bool(uParam0->f_16, !bVar2);
			if (bVar0)
			{
				_databinding_write_data_hash_string(uParam0->f_17, 1595859403);
			}
			else if (bVar1)
			{
				_databinding_write_data_hash_string(uParam0->f_17, 740703372);
			}
			else
			{
				_databinding_write_data_hash_string(uParam0->f_17, -578259052);
			}
			uParam0->f_18 = bVar2;
		}
	}
}

void func_56(var uParam0)
{
	if (uParam0->f_30)
	{
		uParam0->f_30 = 0;
		uParam0->f_30.f_1 = 1;
	}
	if (uParam0->f_30.f_1)
	{
		sVar1 = func_110(Global_265377->f_4[uParam0->f_30.f_2]->f_22, &iVar0);
		if (iVar0 != 1)
		{
			uParam0->f_30.f_1 = 0;
			_databinding_write_data_string(uParam0->f_13, sVar1);
			sVar2 = _create_var_string(10, "LITERAL_STRING", &(Global_265377->f_4[uParam0->f_30.f_2]->f_7));
			_databinding_write_data_string(uParam0->f_14, sVar2);
		}
	}
}

bool func_57(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_58(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_111(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_111(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_1() != -1 && func_112() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_1() != -1)
			{
				return 1624541293;
			}
			if (func_113(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_1() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_1() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_1() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 135:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 136:
			if (func_1() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_113(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_114(iParam0);
		if (iVar0 != -1)
		{
			return func_115(iVar0, bParam1);
		}
	}
	return 0;
}

int func_60(int iParam0)
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

int func_61(int iParam0)
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

bool func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 2);
}

bool func_63(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return func_117(iParam0, 2);
}

bool func_64(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_118(iParam0, 16777216);
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_66(int iParam0)
{
	return func_119(iParam0);
}

bool func_67(struct<2> Param0)
{
	if (!func_120(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_121(Param0))
	{
		return false;
	}
	return true;
}

int func_68(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_122(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_69(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

struct<16> func_70(int iParam0, int iParam1, var uParam2)
{
	if (!does_blip_exist(iParam0))
	{
		return Var0;
	}
	vVar16 = { get_blip_coords(iParam0) };
	*uParam2 = func_86(vVar16, 1);
	while (vVar16.z < 200f && !func_57(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 25f);
		*uParam2 = func_86(vVar16, 1);
	}
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = func_123(*uParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_124(iParam1, *uParam2, vVar16), 128);
	return Var0;
}

struct<16> func_71()
{
	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_72(int iParam0, int iParam1, var uParam2)
{
	if (!does_blip_exist(iParam1))
	{
		return Var0;
	}
	vVar16 = { get_blip_coords(iParam1) };
	if (vVar16.z == 0f)
	{
		func_125(&vVar16, 50, 10, 0, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_35.f_2;
	}
	*uParam2 = func_86(vVar16, 1);
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_126(*uParam2), 128);
			break;
		case 54:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 75:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 76:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 77:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 78:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 79:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 80:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 81:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 82:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 83:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case 581819093:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case 687859577:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case -103573613:
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case 1202375449:
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case 2038046186:
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case -839878969:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case -360730635:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case 194099983:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case -1891229662:
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case -668333238:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case 99378894:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case 673012160:
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case -1220302226:
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_75(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_127(iParam0);
		if (iVar1 == 0 || _map_is_discovery_active(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return _create_var_string(0, iVar0);
}

var func_76(int iParam0)
{
	if (!func_57(iParam0))
	{
		if (_is_global_block_valid(4) && _get_global_block_can_be_accessed(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_128((*Global_1887339)[iParam0]->f_23);
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_79(int iParam0)
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

int func_80(int iParam0)
{
	sVar0 = func_129(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	return get_hash_key(sVar0);
}

int func_81(int iParam0)
{
	StringCopy(&cVar0, func_129(iParam0), 64);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return get_hash_key(&cVar8);
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 1:
			return "NM_PLAYLIST_FEATURED_001";
		case 10:
			return "NM_PLAYLIST_NOMINATED";
		case 11:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 12:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		case 19:
			return "NM_PLAYLIST_CAPTURE";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_83(int iParam0)
{
	if (func_104(func_103(iParam0)))
	{
		iVar0 = -1100859510;
	}
	else
	{
		iVar0 = -107328778;
	}
	return &((*Global_1118808)[iParam0]->f_13[func_130(iVar0, 1)]);
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "SHOP_TITLE_GUS";
		case 51:
			return "BLIP_MP_ROLE_NATURALIST";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_HOTEL_BED";
		case 41:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 52:
			return "BLIP_SHOP_WARDROBE";
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
		case 50:
			return "BLIP_MOONSHINE_STILL";
		case 99:
			return "BLIP_MP_ROLE_MOONSHINER";
		case 53:
			return "BLIP_STABLE";
		case 54:
			return "BLIP_PROC_HOME";
		case 55:
			return "BLIP_PROC_HOME_LOCKED";
		case 56:
			return "BLIP_PROC_HOME";
		case 57:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 58:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 59:
			return "BLIP_AMBIENT_THEATRE";
		case 60:
			return "BLIP_REGION_CARAVAN";
		case 74:
			return "BLIP_CAMP_EAT";
		case 75:
			return "BLIP_AMBIENT_TITHING";
		case 76:
			return "BLIP_SHOP_PEARSON";
		case 77:
			return "BLIP_CAMP_HITCH";
		case 78:
			return "BLIP_SUPPLIES_AMMO";
		case 79:
			return "BLIP_SUPPLIES_HEALTH";
		case 80:
			return "BLIP_SUPPLIES_FOOD";
		case 81:
			return "BLIP_MG_POKER";
		case 82:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 83:
			return "BLIP_MG_DOMINOES";
		case 84:
			return "BLIP_REGION_HUNTING";
		case 85:
			return "BLIP_MG_FISHING";
		case 86:
			return "BLIP_ROBBERY_COACH";
		case 87:
			return "BLIP_REGION_HUNTING";
		case 88:
			return "BLIP_ROBBERY_BANK";
		case 89:
			return "BLIP_MG_DOMINOES";
		case 90:
			return "BLIP_AMBIENT_HERD";
		case 61:
			return "BLIP_EVENT_APPLESEED";
		case 62:
			return "BLIP_EVENT_CASTOR";
		case 63:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 64:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 65:
			return "BLIP_REGION_HIDEOUT";
		case 66:
			return "BLIP_PROC_HOME";
		case 67:
			return "BLIP_MG_FISHING";
		case 68:
			return "BLIP_AMBIENT_THEATRE";
		case 69:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_85(int iParam0)
{
	switch (iParam0)
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
			return 2;
		case 16:
		case 20:
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
		case 41:
		case 49:
		case 50:
		case 53:
		case 59:
		case 68:
		case 69:
			return 1;
		case 54:
		case 60:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 3;
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 4;
		case 58:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_86(vector3 vParam0, int iParam3)
{
	iVar0 = func_131();
	if (func_57(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_132(vParam0, iParam3);
}

struct<16> func_87(int iParam0)
{
	switch (iParam0)
	{
		case 111:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 81:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 40:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

void func_88(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = uParam0->f_33;
	if (!func_58(iVar3))
	{
		iVar3 = func_19(uParam0->f_19);
	}
	iVar4 = func_61(iVar3);
	if ((func_133() || func_134()) || func_135())
	{
		return;
	}
	else if (func_62(iVar3) || func_63(iVar4))
	{
		if (is_ped_male(player_ped_id()))
		{
			sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
		}
		iVar0 = 1;
	}
	else if (func_65(iVar4))
	{
		iVar1 = func_66(iVar4);
		if (iVar1 > 0)
		{
			iVar0 = 1;
			sVar2 = _create_var_string(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	_databinding_write_data_bool(uParam0->f_11, iVar0);
	_databinding_write_data_string(uParam0->f_12, sVar2);
}

int func_89(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1900807)
	{
		if (!func_67(*(*Global_1900807)[iVar0]))
		{
		}
		else if (Global_1900807[iVar0] == 2)
		{
			iVar1 = func_68(*(*Global_1900807)[iVar0]);
			if ((func_69(iVar1) && does_blip_exist((*Global_1835011)[iVar1]->f_28)) && (*Global_1835011)[iVar1]->f_28 == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_90(var uParam0)
{
	uParam0->f_30 = 0;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1369928329:
			return 0;
		case -1804958860:
			return 1;
		case 1412564789:
			return 2;
		case 2090637823:
			return 3;
		case -1740003396:
			return 4;
		case -2140118397:
			return 5;
		case -141490041:
			return 6;
		case 112216621:
			return 7;
		case -1767965617:
			return 8;
		case 81153145:
			return 9;
		case 485273815:
			return 10;
		case 188100165:
			return 11;
		case -840966484:
			return 12;
		case 812079913:
			return 13;
		case 839886685:
			return 14;
		case 1749906378:
			return 15;
		case 1485493317:
			return 16;
		case -1956038143:
			return 17;
		case -1013295952:
			return 18;
		case 928731509:
			return 19;
		default:
			break;
	}
	return -1;
}

void func_92(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901947->f_762.f_1)
		{
			iVar1 = func_137(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_138(iParam1);
	func_141(1, 32, iVar0, func_139(iVar1), func_140(), iVar2, -1, 0, 0, 0);
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return -523921054;
		case 92:
			return 2133809007;
		case 93:
			return 1753392288;
		case 94:
			return -1397234361;
		case 95:
			return 1551310356;
		case 96:
			return -1174166673;
		case 97:
			return 1355002354;
		case 70:
			return -1258576797;
		case 100:
			return -1258576797;
		case 71:
			return 249251635;
		case 72:
			return -891753673;
		case 16:
		case 20:
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
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 53:
		case 59:
		case 68:
		case 69:
		case 98:
			return 1528833484;
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
		case 46:
			return -188780617;
		default:
			break;
	}
	return 0;
}

struct<7> func_94(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_95(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_142(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_96(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!network_is_handle_valid(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam8)
	{
		case 0:
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uParam1, iParam8), 128);
			return 4;
		case 1:
		case 2:
			if (!network_is_gamer_in_my_session(&uParam1))
			{
				return 1;
			}
			return func_143(sParam0, network_get_player_from_gamer_handle(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

var func_97(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

void func_98(var uParam0, int iParam1)
{
	iVar0 = func_144(iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	uParam0->f_30 = 1;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = iVar0;
}

int func_99(var uParam0)
{
	return func_145(13, uParam0);
}

bool func_100(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_101(int iParam0)
{
	return Global_1109804->f_260.f_4989[iParam0]->f_1;
}

int func_102(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

int func_103(int iParam0)
{
	return Global_1118808[iParam0];
}

bool func_104(int iParam0)
{
	Var0 = { func_147(-1684144076, func_146(iParam0)) };
	return func_148(Var0);
}

var func_105(int iParam0, int iParam1)
{
	return &((*Global_1118808)[iParam0]->f_2[func_149(iParam1, 1)]);
}

int func_106(int iParam0, int iParam1)
{
	return ((*Global_1118808)[iParam0]->f_2[func_149(iParam1, 1)])->f_1;
}

int func_107(int iParam0, int iParam1)
{
	return &((*Global_1118808)[iParam0]->f_13[func_130(iParam1, 1)]);
}

void func_108(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 20)
	{
		return;
	}
	func_150(Global_1901947->f_123[iVar0]->f_1, &(Global_1901947->f_123[iVar0]));
}

bool func_109()
{
	return func_151(Global_1572887->f_7, 1);
}

char* func_110(int iParam0, var uParam1)
{
	if (Global_265377->f_124386.f_130 > 0 && Global_265377->f_124386.f_130 != iParam0)
	{
		*uParam1 = 5;
		return "";
	}
	switch (Global_265377->f_124386)
	{
		case 0:
			if (!_0x2d5dc831176d0114(iParam0))
			{
				func_152(1);
			}
			else
			{
				_0x68103e2247887242();
				func_152(1);
			}
			break;
		case 1:
			ugc_request_cached_description(iParam0);
			func_152(2);
			break;
		case 2:
			if (!_0xebfa8d50addc54c4(iParam0))
			{
				*uParam1 = 1;
				return "";
			}
			if (_0x162c23ca83ed0a62(iParam0))
			{
				func_152(3);
			}
			else
			{
				func_152(0);
				*uParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = ugc_get_cached_description(iParam0, 512);
			_0x5a34cd9c3c5bec44(iParam0);
			func_152(0);
			*uParam1 = 2;
			return sVar0;
	}
	*uParam1 = 1;
	return "";
}

bool func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_118(iParam0, 33554432);
}

int func_112()
{
	return Global_1939161->f_26;
}

bool func_113(int iParam0)
{
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_154(iParam0);
}

int func_114(int iParam0)
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
	else if (iParam0 <= 121)
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

int func_115(int iParam0, bool bParam1)
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
			if (!bParam1 || func_1() != -1)
			{
				return -1308265478;
			}
			if (func_113(44))
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
			if (!bParam1 || func_1() != -1)
			{
				return -650528936;
			}
			if (func_113(44))
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
			if (!bParam1 || func_1() != -1)
			{
				return -877373104;
			}
			if (func_113(44))
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

bool func_116(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

bool func_118(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_119(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_94(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

bool func_120(int iParam0)
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

int func_121(int iParam0)
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

bool func_122(struct<2> Param0, var uParam2)
{
	if (!func_67(Param0))
	{
		return false;
	}
	func_155(uParam2);
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

char[] func_123(int iParam0)
{
	if (!func_57(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1887339)[iParam0]->f_23;
}

char* func_124(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 111:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "HOTEL";
		case 41:
			return "PHOTOGRAPHER";
		case 59:
			return "MAGICLANTERN";
		case 68:
			return "VAUDEVILLE";
		case 69:
			return "VAUDEVILLE";
		case 58:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (vdist(vParam2, 2796f, -1167f, vParam2.z) <= 25f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 81:
					if (vdist(vParam2, -308f, 807.05f, vParam2.z) <= 25f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
		case 52:
			return "WARDROBE";
	}
	return "";
}

int func_125(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_156(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

char* func_126(int iParam0)
{
	switch (func_157(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case -787401661:
			return 993246734;
		case 1154382595:
			return 1352537560;
		case -744066564:
			return -1262808306;
		case 1448805167:
			return 1582457845;
		case -1753216046:
			return 460210291;
		case -832065774:
			return 2021420613;
		case -1942169613:
			return 1195199040;
		case 1307292947:
			return -1212881551;
		case 893044669:
			return -2011320133;
		case 1716154100:
			return -1988847961;
		case -1173672830:
			return 2056389698;
		case -2074284650:
			return -942443338;
		case -2133063188:
			return 539572870;
		case -769726319:
			return 66159563;
		case 863351250:
			return 387869270;
		case -419963911:
			return -496244122;
		case -619014970:
			return -238119963;
		case 538198805:
			return 1028223611;
		case 1557904547:
			return 730222325;
		case 1251481628:
			return -597970767;
		case -828659305:
			return -732274047;
		case -139400310:
			return -1368676121;
		case 1830267951:
			return 759314201;
		case -1496551068:
			return 1826504111;
		case 39999178:
			return 1728445882;
		case -103399754:
			return -12216052;
		case -1359523911:
			return -431488293;
		case -336631570:
			return 1474106589;
		case 866178028:
			return -353968602;
		case 2056953687:
			return -918096609;
		case 878474860:
			return 1979340260;
		case 219097977:
			return 1472232821;
		case -1043500161:
			return 462373845;
		case -1902025470:
			return -1836330842;
		case 1701820039:
			return -1150244084;
		case -2034338067:
			return -1727895786;
		case 1767462106:
			return -1101810198;
		case 770707682:
			return 2143316225;
		case -1592070727:
			return 121074776;
		case -1521776363:
			return -2086563810;
		case 1544029611:
			return -1332669948;
		case 881209616:
			return 85299473;
		case -1161186391:
			return -1813267128;
		case -154855189:
			return 458479023;
		case 1212679502:
			return -678676588;
		case -969933882:
			return 1602161184;
		case -1539536559:
			return -656861063;
		case -916903901:
			return 1735191955;
		case -2126414432:
			return 2073023198;
		case 580715948:
			return -1941572412;
		case -814535426:
			return 215480587;
		case 1987954784:
			return 545498183;
		case 320988519:
			return 820139809;
		case 522499758:
			return 2063457042;
		case 1082216465:
			return 1006072805;
		case 1247830528:
			return 428613469;
		case -645154787:
			return -161135375;
		case -657053325:
			return -1276637644;
		case 1030217084:
			return -960425936;
		case -1821194396:
			return 532401286;
		case -146460093:
			return -1347759053;
		case 2087258933:
			return 1542246539;
		case 1922831023:
			return 1740117339;
		case -1472363892:
			return 770074951;
		case 30800579:
			return -237206861;
		case -1769528472:
			return 1877776161;
		case 1895254880:
			return 1837393665;
		case -1692509313:
			return 1603579970;
		case -576782619:
			return -1456731677;
		case 229479634:
			return -1344767066;
		case 1062452343:
			return 1092217275;
		case 1350749955:
			return 1855549007;
		case 1506834348:
			return -875696111;
		case 2132554759:
			return -91026072;
		case 1016304714:
			return 1876184276;
		case 375900073:
			return -876779166;
		case -631265576:
			return -1116738159;
		case -291091669:
			return 415864829;
		case 1603158849:
			return -1408667066;
		case -2035208924:
			return -1730421200;
		case 1860552235:
			return 1374995365;
		case 1987585677:
			return -1393093729;
		case -259784188:
			return -1623232489;
		case 1477464408:
			return -1394664008;
		case 1136441188:
			return -325788416;
		case 738939338:
			return -1807212021;
		case -1247294802:
			return -792566558;
		case 6184171:
			return -2089448537;
		case -868607615:
			return 82527577;
		case 930788089:
			return -1354901649;
		case 1871224592:
			return -1585921053;
		case 1094048700:
			return 222265732;
		case -1419869345:
			return 1561007383;
		case -1894004139:
			return 1104975149;
		case 31314838:
			return 1515744307;
		case -438809735:
			return 893855320;
		case 690770514:
			return 235472255;
		case 126047903:
			return -1173041902;
		case 1001341519:
			return 326709244;
		case 1704544150:
			return -1337880478;
		case 245588937:
			return 205568929;
		case 199607503:
			return 276890716;
		case -264897431:
			return -2110824426;
		case -2000021141:
			return 43681669;
		case 1645047683:
			return 562599937;
		case -1164281509:
			return 1822876181;
		case 696910142:
			return -683043834;
		case -1768736648:
			return 532503220;
		case -930437658:
			return 379859357;
		case -1622112934:
			return 1610646968;
		case -9585484:
			return 1268001912;
		case -870780939:
			return 653958186;
		case 570617421:
			return -1917132299;
		case 230920996:
			return -134804027;
		case 1071862910:
			return 1116308524;
		case 1436995883:
			return 1625008147;
		case 806217109:
			return -727372692;
		case 1347794144:
			return 1354284392;
		case -215175141:
			return 1871337449;
		case 359085936:
			return -1249289544;
		case -1699818764:
			return 1714554710;
		case 1499492436:
			return -443207523;
		case -793097117:
			return -33677540;
		case 1400897589:
			return -763271696;
		case 848488661:
			return 2027689141;
		case -504005310:
			return -1484929764;
		case -1099073636:
			return -1430883057;
		case 372957665:
			return 2133877879;
		case 1427239788:
			return -508074447;
		case 1677148641:
			return -507075109;
		case -425430549:
			return 147256338;
		case -61172588:
			return 929640770;
		case 492552869:
			return 648073069;
		case -545967610:
			return 653799702;
		case -1999797981:
			return -296815465;
		case 1613985721:
			return 1944800674;
		case -120578354:
			return 221661572;
		default:
			break;
	}
	return 0;
}

var func_128(var uParam0)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2126321341:
			return "VHT";
		case -473051294:
			return "EMR";
		case 7359335:
			return "ANN";
		case 406627834:
			return "LAG";
		case 2046780049:
			return "RHO";
		case 427683330:
			return "STR";
		case 1053078005:
			return "BLA";
		case -765540529:
			return "NBX";
		case 459833523:
			return "VAL";
		case -744494798:
			return "AMD";
		case -1524959147:
			return "TBL";
		default:
			break;
	}
	return "";
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1100859510:
			return 0;
		case -107328778:
			return 1;
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

int func_131()
{
	return Global_1893587->f_2;
}

int func_132(vector3 vParam0, bool bParam3)
{
	iVar0 = func_158(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_133()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_134()
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
	if (!func_67(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_135()
{
	if (func_159(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_160(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_136(int iParam0)
{
	return _unlock_is_unlocked(func_161(iParam0));
}

int func_137(int iParam0)
{
	iVar0 = 0;
	iVar1 = 1;
	if (func_162() > 0)
	{
		iVar1 = func_162();
	}
	switch (iParam0)
	{
		case 18:
			if (func_136(2) && func_163(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_136(3) && func_163(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_136(4) && func_163(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_136(7) && func_163(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_136(8) && func_163(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_136(9) && func_163(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_136(15) && func_163(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_136(16) && func_163(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_136(iParam0) && func_163(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = get_random_int_in_range(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return &(iVar2[iVar7]);
}

void func_138(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

int func_139(int iParam0)
{
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6725[iVar0] == &Global_265354->f_1[iParam0])
		{
			return &(Global_265377->f_117359.f_6758[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_140()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_164(iParam2, iParam3))
	{
		return 0;
	}
	if (func_165() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_166(Global_1296859->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_167(&Var0);
	func_168(iParam2, iParam3, iParam7, 1);
	func_169(Param4, 1);
	func_170(iParam6);
	func_171(iParam9);
	func_172(iParam10, 1);
	if ((func_67(Param4) && !func_173()) && &Global_1211325 == -1)
	{
		func_174(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_175();
	}
	if (func_173())
	{
		func_176(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_177(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_178(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_179(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_180(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_181(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_183(func_182(), iParam3)), 64);
		}
		_databinding_write_data_string(Global_1572887->f_106.f_151, &cVar57);
		_databinding_write_data_string(Global_1572887->f_106.f_153, _create_var_string(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		_databinding_remove_data_entry(Global_1572887->f_106.f_154);
		_databinding_remove_data_entry(Global_1572887->f_106.f_155);
		_databinding_remove_data_entry(Global_1572887->f_106.f_156);
		_databinding_remove_data_entry(Global_1572887->f_106.f_157);
		_databinding_remove_data_entry(Global_1572887->f_106.f_158);
		_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	}
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_184(255, 0)) && !bParam8)
	{
		func_185("NM_MATCHMAKING_WARNING");
	}
	func_186(10);
	return 1;
}

char* func_142(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_143(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_187(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_188(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					func_190(iParam1, iParam2, iVar1);
					func_189(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_189(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_189(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_189(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_144(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_2)
	{
		if (&Global_265377->f_63755[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145(int iParam0, var uParam1)
{
	if (func_192(iParam0, uParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case 130824026:
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case -1239926065:
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_147(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_148(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return 0;
	}
	if (!stat_id_get_bool(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -910931556:
			return 2;
		case 303108068:
			return 1;
		case 493038497:
			return 0;
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

void func_150(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_102, func_193(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, 1);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, 0);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_99, func_193(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, 1);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, 0);
	}
}

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_152(int iParam0)
{
	Global_265377->f_124386 = iParam0;
}

bool func_153(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_154(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_156(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 84:
			return 6;
		case 45:
			return 0;
		case 104:
			return 2;
		case 63:
			return 4;
		case 76:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 39:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_158(vector3 vParam0)
{
	iVar0 = func_194(vParam0, 0f, 0f, 0, 2);
	return func_194(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_159(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_160(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1369928329;
		case 1:
			return -1804958860;
		case 2:
			return 1412564789;
		case 3:
			return 2090637823;
		case 4:
			return -1740003396;
		case 5:
			return -2140118397;
		case 6:
			return -141490041;
		case 7:
			return 112216621;
		case 8:
			return -1767965617;
		case 9:
			return 81153145;
		case 10:
			return 485273815;
		case 11:
			return 188100165;
		case 12:
			return -840966484;
		case 13:
			return 812079913;
		case 14:
			return 839886685;
		case 15:
			return 1749906378;
		case 16:
			return 1485493317;
		case 17:
			return -1956038143;
		case 18:
			return -1013295952;
		case 19:
			return 928731509;
		default:
			break;
	}
	return 0;
}

int func_162()
{
	return Global_1102219->f_3673;
}

int func_163(int iParam0)
{
	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6725[iVar0] == &Global_265354->f_1[iParam0])
		{
			return Global_265377->f_117359.f_483[iVar0]->f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_164(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_165()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_166(int iParam0)
{
	uVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(uVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_167(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_195();
	}
}

void func_169(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_195();
	}
}

void func_170(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_171(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_172(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_195();
	}
}

bool func_173()
{
	if (func_182() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_174(struct<2> Param0)
{
	if (func_196())
	{
		return 0;
	}
	if (!func_67(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_175()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_176(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_197(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_198(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_199(iVar0);
	Var3 = { func_200(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_177(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201();
	}
	if (!func_202(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_203(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

int func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_204(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_144(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_63755[iVar0];
	uParam0->f_61 = { Global_265377->f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_4[iVar0]->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_4[iVar0]->f_4}, 8);
	func_205(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_206(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_207(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_208(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_209(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_210(iVar1) };
	}
	else if (func_211(uParam0->f_17))
	{
		uParam0->f_53 = { func_213(func_212(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_214(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_215(uParam0->f_16) };
		if (!func_67(uParam0->f_53))
		{
			uParam0->f_53 = { func_217(func_216(uParam0->f_21.f_2)) };
		}
	}
	func_218(uParam0);
	func_204(uParam0, 4194304);
	return 1;
}

char* func_180(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_142(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_181(int iParam0)
{
	iVar0 = func_219(iParam0);
	if (iVar0 == &Global_265354->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265354->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265354->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265354->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265354->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_182()
{
	return Global_1572887->f_106;
}

char* func_183(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_184(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_220();
	}
	else if (iParam0 == func_220())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

var func_185(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_221(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_186(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

int func_187(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_191(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

bool func_192(int iParam0, var uParam1, var uParam2)
{
	if (func_222(iParam0, uParam1, &uVar0))
	{
		func_223(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1531758713;
		case 2:
			return 1111531686;
		case 3:
			return 2020859843;
		case 4:
			return -1620727213;
		case 5:
			return 2039881012;
		case 6:
			return -1429661529;
		case 7:
			return -540128588;
		case 8:
			return -1224238785;
		case 9:
			return 1485653341;
		case 10:
			return 1437644330;
		case 11:
			return 1511892115;
		case 12:
			return 876516058;
		case 13:
			return -1676572483;
		case 14:
			return 1995067205;
		case 15:
			return 1155770894;
		default:
			break;
	}
	return 0;
}

int func_194(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_195()
{
	if (func_1() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_151(Global_1572887->f_7, 1))
	{
		func_224(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_225(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_177(1024))
	{
		func_224(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_225(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_196()
{
	return func_67(*Global_1051213);
}

int func_197(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_226(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_198(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_199(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_200(int iParam0, var uParam1)
{
	if (((func_227(&Var8, iParam0) && func_228(&Var8)) && func_229(&Var8, uParam1)) && func_230(&Var8))
	{
		func_231(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_201()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_202(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_233(bParam2, func_232(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_203(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

void func_205(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_206(int iParam0)
{
	if (func_234(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_235(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_208(int iParam0)
{
	if (func_1() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_236(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_209(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_237(&Var0))
	{
		return vVar5;
	}
	if (!func_238(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_238(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_239(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_238(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_238(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_239(&Var0, 1);
			if (!func_238(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = _0xe13634bb6baf0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_210(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_140();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_212(iParam0) != -1;
}

int func_212(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_240(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_213(int iParam0)
{
	return func_241(iParam0);
}

struct<2> func_214(int iParam0)
{
	if (!func_237(&uVar0))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 13, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 17, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 20, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_140();
	}
	iVar5 = func_242(&uVar0);
	return func_217(iVar5);
}

struct<2> func_215(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_140();
	}
	if (!func_243(&uVar0, 7, iParam0, 76966722))
	{
		return func_140();
	}
	func_244(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_140();
	}
	return func_245(Var5.f_3, Var5.f_4);
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839;
		case 395262693:
			return -47596571;
		case -933924539:
			return 921725912;
		default:
			break;
	}
	return 0;
}

struct<2> func_217(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_245(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_140();
}

void func_218(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_219(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_220()
{
	return Global_1102219->f_3672;
}

var func_221(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_222(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_246(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_223(var uParam0, int iParam1, var uParam2)
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

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_226(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_227(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_247(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_228(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_229(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_230(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_231(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_232()
{
	return Global_1915715->f_20643;
}

int func_233(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_248())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_234(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_236(int iParam0)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (func_1() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_237(var uParam0)
{
	uVar0 = Global_1071686->f_28448[29]->f_3;
	if (!_0x7907969497ea92f5(uVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_239(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

int func_240(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_241(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

var func_242(var uParam0)
{
	return func_249(uParam0, 60, 1);
}

bool func_243(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_246(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_244(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_250(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_251(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_252(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_253(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_254(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_255(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

struct<2> func_245(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636), func_121(iParam1));
			break;
		case 3:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_602), func_121(iParam1));
			break;
		case 4:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_2104), func_121(iParam1));
			break;
		case 5:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_12606), func_121(iParam1));
			break;
		case 6:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_12908), func_121(iParam1));
			break;
		case 7:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_15910), func_121(iParam1));
			break;
		case 8:
			Var0.f_1 = func_256(iParam0, &(Global_1071686->f_636.f_16512), func_121(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_140();
	}
	return Var0;
}

int func_246(int iParam0)
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

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_248()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

var func_249(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_250(int iParam0, var uParam1)
{
	if (func_257(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

int func_256(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

bool func_257(int iParam0, var uParam1, var uParam2)
{
	if (func_258(iParam0, uParam1, &uVar0))
	{
		func_223(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_258(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_246(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

