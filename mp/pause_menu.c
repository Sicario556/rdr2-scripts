void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	if (!func_1(&Local_21))
	{
	}
	if (_does_streamed_txd_exist(-637848863))
	{
		_request_streamed_txd(-637848863, false);
	}
	uVar0 = _databinding_add_data_bool_from_path("", "AllowedToSave", 0);
	uVar1 = _databinding_add_data_bool_from_path("", "bAllowedToReplay", 0);
	Var2 = { Global_39.f_9 };
	if (_does_streamed_txd_exist(-1930972465))
	{
		_request_streamed_txd(-1930972465, false);
	}
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(4))
	{
		if (!Global_17)
		{
			Global_39.f_9 = { Var2 };
		}
		func_2(uVar0, uVar1);
	}
	Local_21.f_183 = 0;
	_databinding_write_data_bool(uVar0, true);
	_0xdd1232b332cbb9e7(6, 1, 0);
	func_3(&Global_26638);
	func_4();
	while ((!_0x9e4ef615e307fbbe() && !func_5(Global_26638)) && !bVar23)
	{
		func_6(&Local_21);
		func_7(&Local_21);
		func_8();
		func_9(&Local_21);
		bVar23 = func_10();
		wait(0);
	}
	if (bVar23)
	{
		do_screen_fade_out(0);
		func_11(0, -1);
	}
	func_2(uVar0, uVar1);
}

bool func_1(var uParam0)
{
	uParam0->f_187 = _databinding_add_data_container_from_path("", "mpProgress");
	_databinding_add_data_string(uParam0->f_187, "coopPercent", "0%");
	_databinding_add_data_string(uParam0->f_187, "awardsPercent", func_12());
	_databinding_add_data_string(uParam0->f_187, "rankPercent", func_13());
	uVar0 = _databinding_add_data_container_from_path("", "sessionInfo");
	_databinding_add_data_string(uVar0, "characterName", &(Global_17411.f_55.f_644.f_1784));
	uParam0->f_185 = _databinding_add_data_bool_from_path("", "bDisplayMissionChallengeChecklist", 0);
	uParam0->f_186 = _databinding_add_data_bool_from_path("", "bAllowChecklistToggle", 0);
	_databinding_add_data_bool_from_path("", "bEnablePauseMenuPhotoMode", 0);
	_databinding_add_data_bool_from_path("", "bPauseMenuPhotoModeVisible", 0);
	if (!func_14(uParam0))
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	if (func_5(Global_26638))
	{
		func_15();
	}
	if (Local_21.f_1 != -1)
	{
		texture_download_release(Local_21.f_1);
	}
	_databinding_remove_data_entry(uParam0);
	_databinding_remove_data_entry(uParam1);
	_databinding_remove_data_entry(Local_21.f_185);
	_databinding_remove_data_entry(Local_21.f_186);
	_databinding_remove_data_entry(Local_21.f_187);
	func_16(&Local_21);
	terminate_this_thread();
}

void func_3(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_4()
{
	Var0 = { func_17(0, 1, 0, -1) };
	bVar4 = false;
	iVar6 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar6))
	{
		iVar7 = get_entity_model(iVar6);
		if (iVar7 == func_18())
		{
			iVar5 = func_19(iVar7);
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		StringCopy(&cVar8, _create_var_string(2, func_20(iVar5)), 64);
	}
	else
	{
		cVar8 = { func_21(&Var0, 0, 1) };
	}
	_databinding_write_data_string(Global_1956200->f_5.f_1, &(Global_17411.f_55.f_644.f_1784));
	_databinding_write_data_string(Global_1956200->f_5.f_4, &cVar8);
	func_22();
	func_23(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar16 = Global_1956200->f_1431.f_103;
	sVar17 = func_24(iVar16);
	if (iVar16 == -10)
	{
		sVar20 = "rpg_underweight";
		bVar18 = true;
	}
	else if (iVar16 == 10)
	{
		sVar20 = "rpg_overweight";
		bVar18 = true;
	}
	func_25(0, 0, _create_var_string(2, "PMPLAYER_CONDITION_WEIGHT"), _create_var_string(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, 1105014447);
	if (Global_1956200->f_1431.f_103 == 0 || bVar18)
	{
		bVar19 = true;
	}
	func_26(1, bVar19, bVar18);
	func_26(2, bVar19, bVar18);
	func_26(3, bVar19, bVar18);
	sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar18 = false;
	sVar20 = "";
	if (func_27())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar18 = true;
		sVar20 = "rpg_cold";
	}
	else if (func_28())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar18 = true;
		sVar20 = "rpg_hot";
	}
	func_25(0, 1, _create_var_string(2, "PMPLAYER_CONDITION_TEMPERATURE"), _create_var_string(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, 1105014447);
	func_29(1, bVar18, bVar18, sVar20);
	func_25(0, 2, _create_var_string(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, 1105014447);
	sVar17 = func_30(Global_1145091[&Global_1296859]);
	_databinding_write_data_string(&(Global_1956200->f_5.f_14[0]->f_84[2]), sVar17);
	_databinding_write_data_bool(&(Global_1956200->f_5.f_14[0]->f_93[2]), true);
	sVar21 = _0xdb438cc9bc6f4022();
	iVar22 = func_31(Global_1145091[&Global_1296859] + 1);
	sVar17 = _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y_XP", sVar21, iVar22);
	func_25(0, 3, _create_var_string(2, "PMPLAYER_RANK_XP"), sVar17, 0, "", "", 0, 1105014447);
	sVar20 = func_33(func_32(255));
	func_25(0, 4, _create_var_string(2, "PMPLAYER_HONOR"), "", 0, sVar20, "pausemenu_player", 1, 1105014447);
	sVar17 = func_35(func_34(player_id(), 0), &bVar18, &iVar23);
	func_25(0, 5, _create_var_string(2, "PMPLAYER_GENERAL_HOSTILITY"), _create_var_string(2, sVar17), bVar18, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, iVar23);
	fVar24 = func_36(0, 2);
	fVar25 = to_float(func_37(0, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (to_float(func_39(0, 2)) / fVar25));
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar24));
	func_25(1, 0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_TIME_VALUE_MINUTES", round(fVar26));
	func_25(1, 1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, 859817522, 1105014447);
	func_25(1, 2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	bVar18 = func_42();
	func_43(1, bVar18, bVar18);
	fVar24 = func_36(1, 2);
	fVar25 = to_float(func_37(1, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (to_float(func_39(1, 2)) / fVar25));
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar24));
	func_25(2, 0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_TIME_VALUE_MINUTES", round(fVar26));
	func_25(2, 1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, 859817522, 1105014447);
	func_25(2, 2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	fVar24 = func_36(2, 2);
	fVar25 = to_float(func_37(2, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (to_float(func_39(2, 2)) / fVar25));
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar24));
	func_25(3, 0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_TIME_VALUE_MINUTES", round(fVar26));
	func_25(3, 1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, 859817522, 1105014447);
	func_25(3, 2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	sVar17 = _create_var_string(2, "STRING", func_45(func_44(382107261)));
	func_25(4, 0, _create_var_string(2, "PMPLAYER_STORY_COMPLETE"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "STRING", func_46(-1756227506));
	func_25(4, 1, _create_var_string(2, "PMPLAYER_TOTAL_KILLS"), sVar17, 0, "", "", 0, 1105014447);
	sVar17 = _create_var_string(2, "STRING", func_46(-1048906573));
	func_25(4, 2, _create_var_string(2, "PMPLAYER_TOTAL_DEATHS"), sVar17, 0, "", "", 0, 1105014447);
}

bool func_5(struct<2> Param0)
{
	if (!func_47(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_48(Param0))
	{
		return false;
	}
	return true;
}

void func_6(var uParam0)
{
	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 0, 0);
	}
	if (!_is_app_active(29649618))
	{
		return;
	}
	bVar0 = _is_app_running(29649618);
	if (uParam0->f_195 != bVar0)
	{
		uParam0->f_195 = bVar0;
		if (bVar0)
		{
			func_50(uParam0, 0, 1);
		}
	}
}

void func_7(var uParam0)
{
	if (_0xcd954f330693f5f2())
	{
		switch (*uParam0)
		{
			case 0:
				if (_0xe2c3cec3c0903a00("mugshot"))
				{
					_0x7a17b7981560ffa5("mugshot");
				}
				*uParam0 = 1;
				break;
			case 1:
				if (!_0xe2c3cec3c0903a00("mugshot"))
				{
					Var0 = { func_51() };
					uParam0->f_1 = _mugshot_texture_download_request(&Var0, 0, "mugshot", true);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (_get_status_of_texture_download(uParam0->f_1) == 0)
				{
					_databinding_write_data_string(Global_1956200->f_5.f_2, "mugshot");
					_databinding_write_data_string(Global_1956200->f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_8()
{
	iVar4 = 29649618;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					switch (Var0.f_2)
					{
						case 248393197:
							func_52(Var0.f_3);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							func_53(770236547, 0);
							break;
						case -385109718:
							func_54();
							break;
						case -609314343:
							func_55();
							break;
						case 1371972537:
							func_56();
							break;
						case -17440837:
							func_57();
							break;
						case -164517057:
							func_58();
							break;
						case -1123713079:
							func_59();
							break;
						case -1332231262:
							do_screen_fade_out(0);
							func_60();
							break;
						case -1856718599:
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
}

void func_9(var uParam0)
{
	iVar0 = func_61();
	iVar1 = func_62(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_63(uParam0, iVar1);
		}
		func_64(uParam0, iVar0);
		func_65(uParam0, iVar0);
	}
	func_66(uParam0, iVar0);
}

int func_10()
{
	iVar4 = -37892458;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					_event_manager_pop_event(iVar4);
					return 1;
				case -1740156697:
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_67(iParam0, iParam1);
	}
	func_68(4);
	func_69();
	func_70(1);
}

var func_12()
{
	fVar2 = _0x9d0f5d2e1951cd84();
	StringCopy(&cVar0, _0x2b6846401d68e563(fVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_71(cVar0);
}

var func_13()
{
	fVar2 = to_float(_0x32c90cdfaf40514c());
	fVar3 = to_float(999);
	fVar4 = ((fVar2 / fVar3) * 100f);
	StringCopy(&cVar0, _0x2b6846401d68e563(fVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_71(cVar0);
}

bool func_14(var uParam0)
{
	iVar0 = 3;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_72(iVar2, 1);
		if (!func_73(uParam0, iVar1))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_15()
{
	Global_0.f_6 = get_game_timer();
	Global_0.f_3 = { Global_35 };
	func_74(&Global_0);
}

int func_16(var uParam0)
{
	iVar0 = 3;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_72(iVar2, 1);
		func_75(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

struct<4> func_17(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_76(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_77() };
		if (func_78() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_79(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_80(player_id());
	}
	bVar33 = func_81(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_82(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_83();
		}
		if (!func_84(&Var0, 0))
		{
			Var35 = { func_85(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

int func_18()
{
	return 808655744;
}

int func_19(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2078767648:
		case -2055655009:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1365665739:
		case -757978903:
		case 981469777:
		case 1064693514:
		case 1592694494:
		case 1909854428:
			return "BREED_BRETON";
		case -1722101672:
		case -189605757:
		case 3032834:
		case 381495209:
		case 863391233:
		case 1577022605:
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case -1698261864:
		case -1540355548:
		case -670301166:
		case -601560591:
		case -370362766:
		case 885568364:
			return "BREED_KLADRUBER";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "BREED_NORFOLKROADSTER";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_TENNESSEEWALKER";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_APPALOOSA";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

struct<8> func_21(var uParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return cVar0;
	}
	Var8 = { func_86(uParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_87(uParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (compare_strings(&cVar0, func_88(), false, -1) == 0)
	{
		StringCopy(&cVar0, _create_var_string(2, func_20(Var8.f_22)), 64);
	}
	if (get_length_of_literal_string(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, _create_var_string(2, func_89(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		_databinding_clear_binding_array(&(Global_1956200->f_5.f_8[iVar0]));
		iVar0++;
	}
}

void func_23(int iParam0, char* sParam1, char* sParam2)
{
	_databinding_write_data_string(Global_1956200->f_5.f_14[iParam0]->f_10, sParam1);
	_databinding_write_data_string(Global_1956200->f_5.f_14[iParam0]->f_11, sParam2);
}

char* func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_25(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	_databinding_write_data_string(&(Global_1956200->f_5.f_14[iParam0]->f_21[iParam1]), sParam2);
	_databinding_write_data_string(&(Global_1956200->f_5.f_14[iParam0]->f_30[iParam1]), sParam3);
	_databinding_write_data_bool(&(Global_1956200->f_5.f_14[iParam0]->f_39[iParam1]), bParam4);
	_databinding_write_data_string(&(Global_1956200->f_5.f_14[iParam0]->f_48[iParam1]), sParam5);
	_databinding_write_data_string(&(Global_1956200->f_5.f_14[iParam0]->f_57[iParam1]), sParam6);
	_databinding_write_data_hash_string(&(Global_1956200->f_5.f_14[iParam0]->f_66[iParam1]), iParam8);
	_databinding_write_data_bool(&(Global_1956200->f_5.f_14[iParam0]->f_75[iParam1]), bParam7);
	_databinding_insert_ui_item_to_list_from_context_string_alias(&(Global_1956200->f_5.f_8[iParam0]), iParam1, "player_attribute_item", &(Global_1956200->f_5.f_14[iParam0]->f_1[iParam1]));
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_13, bParam1);
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_12, bParam2);
}

bool func_27()
{
	if (func_90())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 2;
}

bool func_28()
{
	if (func_90())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 0;
}

void func_29(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_17, bParam1);
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_16, bParam2);
	_databinding_write_data_string(Global_1956200->f_5.f_14[iParam0]->f_18, sParam3);
}

char* func_30(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

int func_31(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return &(Global_1139381->f_11.f_562[(iParam0 - 1)]);
}

int func_32(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HONOR_BAD_8";
		case 1:
			return "HONOR_BAD_7";
		case 2:
			return "HONOR_BAD_6";
		case 3:
			return "HONOR_BAD_5";
		case 4:
			return "HONOR_BAD_4";
		case 5:
			return "HONOR_BAD_3";
		case 6:
			return "HONOR_BAD_2";
		case 7:
			return "HONOR_BAD_1";
		case 8:
			return "HONOR_GOOD_1";
		case 9:
			return "HONOR_GOOD_2";
		case 10:
			return "HONOR_GOOD_3";
		case 11:
			return "HONOR_GOOD_4";
		case 12:
			return "HONOR_GOOD_5";
		case 13:
			return "HONOR_GOOD_6";
		case 14:
			return "HONOR_GOOD_7";
		case 15:
			return "HONOR_GOOD_8";
	}
	return "HONOR_GOOD_1";
}

int func_34(int iParam0, bool bParam1)
{
	iVar0 = floor(func_91(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

char* func_35(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			*bParam1 = 0;
			*iParam2 = 1105014447;
			return "PMPLAYER_GENERAL_HOSTILITY_LOW";
		case 2:
		case 3:
			*bParam1 = 0;
			*iParam2 = 1105014447;
			return "PMPLAYER_GENERAL_HOSTILITY_MID";
		case 4:
		case 5:
		case 6:
			*bParam1 = 1;
			*iParam2 = 859817522;
			return "PMPLAYER_GENERAL_HOSTILITY_HIGH";
	}
	return "PMPLAYER_GENERAL_HOSTILITY_MID";
}

float func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_42())
					{
						return 1200;
					}
					else if (func_27())
					{
						return 1200;
					}
					else if (func_28())
					{
						return 1200;
					}
					return Global_1956200->f_1431.f_81;
				case 2:
					return Global_1956200->f_1431.f_83;
				case 1:
					return Global_1956200->f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956200->f_1565.f_2.f_81;
				case 2:
					return Global_1956200->f_1565.f_2.f_83;
				case 1:
					return Global_1956200->f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_38()
{
	return Global_1956200->f_1431.f_98;
}

int func_39(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1956200->f_1431.f_81;
				case 2:
					return Global_1956200->f_1431.f_83;
				case 1:
					return Global_1956200->f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956200->f_1565.f_2.f_81;
				case 2:
					return Global_1956200->f_1565.f_2.f_83;
				case 1:
					return Global_1956200->f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_40(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_41(float fParam0)
{
	if (fParam0 > 100f)
	{
		return "RPG_ARROW_DOWN";
	}
	else if (fParam0 < 100f)
	{
		return "RPG_ARROW_UP";
	}
	return "";
}

bool func_42()
{
	if (func_90())
	{
		return false;
	}
	return Global_1146212->f_21645[20]->f_208;
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_15, bParam1);
	_databinding_write_data_bool(Global_1956200->f_5.f_14[iParam0]->f_14, bParam2);
}

struct<2> func_44(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_45(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_46(int iParam0)
{
	Var1 = { func_44(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_47(int iParam0)
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

int func_48(int iParam0)
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

bool func_49(var uParam0, int iParam1)
{
	return func_93(uParam0->f_196, iParam1);
}

void func_50(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_94(&(uParam0->f_196), iParam1);
	}
	else
	{
		func_95(&(uParam0->f_196), iParam1);
	}
}

struct<7> func_51()
{
	network_get_local_handle(&Var0);
	return Var0;
}

void func_52(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, "rpg_pause_item_index");
	switch (Global_1956200->f_5.f_1425)
	{
		case 0:
			func_96(iVar0);
			break;
		case 1:
			func_97(iVar0);
			break;
		case 2:
			func_98(iVar0);
			break;
		case 3:
			func_99(iVar0);
			break;
		case 4:
			func_100(iVar0);
			break;
		case 5:
			func_101(iVar0);
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (Global_1960148->f_1)
	{
		return;
	}
	Global_1960148 = iParam0;
	if (bParam1)
	{
		Global_1960148->f_1 = 1;
	}
}

void func_54()
{
	func_102(1, 1);
	Global_1956200->f_5.f_1425 = 0;
	func_104(_create_var_string(2, func_103(0)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_30(Global_1145091[&Global_1296859]);
	func_106(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_106(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_33(func_32(255)), "pausemenu_player", 0, 0);
	func_105(4, "PMPLAYER_CONDITIONS");
	func_105(9, "PMPLAYER_PERKS");
	if (!func_108(Global_1146212->f_47689.f_63[func_107(-813902658)]->f_1))
	{
		iVar1 = func_109(-813902658);
		func_106(10, "CONSUMABLE_TONIC_BLENDING", _create_var_string(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	if (!func_108(Global_1146212->f_47689.f_63[func_107(-1685270562)]->f_1))
	{
		iVar1 = func_109(-1685270562);
		func_106(11, "CONSUMABLE_TONIC_HARDY", _create_var_string(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 167;
	if (&Global_1146212->f_35859.f_919[iVar2] == 1130659268)
	{
		func_106(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 169;
	if (&Global_1146212->f_35859.f_919[iVar2] == -980934770)
	{
		func_106(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 170;
	if (&Global_1146212->f_35859.f_919[iVar2] == 130533095)
	{
		func_106(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 171;
	if (&Global_1146212->f_35859.f_919[iVar2] == -193167881)
	{
		func_106(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 168;
	if (&Global_1146212->f_35859.f_919[iVar2] == -1246069683)
	{
		func_106(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&cVar3, _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_48[0])), 24);
	bVar6 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[0]->f_75[0]));
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[0]));
	if (bVar6)
	{
		func_106(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar6, &cVar3, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[1]));
	if (func_28())
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_106(7, "PMPLAYER_CONDITION_TOXICITY", _create_var_string(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_35(func_34(player_id(), 0), &iVar7, &uVar8);
	func_106(8, "PMPLAYER_GENERAL_HOSTILITY", _create_var_string(2, sVar0), 1, iVar7, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_110(0);
	func_111(0);
	func_96(1);
}

void func_55()
{
	Global_1956200->f_5.f_1425 = 1;
	func_102(1, 1);
	func_104(_create_var_string(2, func_103(1)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(0, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_48[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[0]->f_75[0]));
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[0]));
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[1]));
	if (func_28())
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_106(6, "PMPLAYER_CONDITION_TOXICITY", _create_var_string(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_97(1);
	func_113("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_56()
{
	Global_1956200->f_5.f_1425 = 2;
	func_102(1, 1);
	func_104(_create_var_string(2, func_103(2)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(1, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_48[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[0]->f_75[0]));
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[0]));
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_98(1);
	func_113("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_57()
{
	Global_1956200->f_5.f_1425 = 3;
	func_102(1, 1);
	func_104(_create_var_string(2, func_103(3)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(2, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_48[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[0]->f_75[0]));
	sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[0]->f_30[0]));
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_99(1);
	func_113("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_58()
{
	Global_1956200->f_5.f_1425 = 4;
	func_102(1, 1);
	func_104(_create_var_string(2, func_103(4)));
	func_105(0, "PMPLAYER_LIFE_STATS");
	func_114();
	StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_MONEY", func_116((func_115(1943033977) / 100f), 2)), 64);
	func_106(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_GOLD", func_116((func_115(-865370071) / 100f), 2)), 64);
	func_106(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_MONEY", func_116((func_115(-550180269) / 100f), 2)), 64);
	func_106(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_GOLD", func_116((func_115(1919677834) / 100f), 2)), 64);
	func_106(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-1756227506), 64);
	func_106(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-1048906573), 64);
	func_106(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_46(85200619) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, _create_var_string(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_106(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_117("ALL HORSES", &iVar12, &iVar13, -1591664384, 0);
	func_118(iVar12);
	iVar14 = func_119(356744246);
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_121(func_120(356744246), (iVar13 - iVar14));
	}
	func_106(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_46(-190907223), 64);
	func_106(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(-1756227506, 298468673), 64);
	func_106(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(-1756227506, -2141600017), 64);
	func_106(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = func_122(1477929018, -2140438327);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, _create_var_string(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_106(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(-985869509, 450674483), 64);
	func_106(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_122(-1756227506, 974042365), 64);
	func_106(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(953441746, -1927753141), 64);
	func_106(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_122(-212244724, -1740237568) + func_122(-212244724, -1274681111)) + func_122(-212244724, 1581042032)), 64);
	func_106(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(-212244724, -1927753141), 64);
	func_106(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(-1628183403, 1201668600), 64);
	func_106(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_MONEY", func_116((func_115(324591737) / 100f), 2)), 64);
	func_106(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-851700877), 64);
	func_106(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (_should_use_metric_weight())
	{
		fVar15 = (func_115(-789991418) * 0.453592f);
		StringCopy(&cVar0, _create_var_string(10, "PMPLAYER_KG", func_116(fVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_46(-789991418);
		fVar17 = (func_115(-789991418) - to_float(iVar16));
		StringCopy(&cVar0, _create_var_string(2, "PMPLAYER_LB_AND_OZ", iVar16, round((16f * fVar17))), 64);
	}
	func_106(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_45(func_44(382107261)), 64);
	func_106(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_122(-1892463704, 1994758582);
	iVar19 = func_122(1374282888, 1994758582);
	StringCopy(&cVar0, _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_106(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_106(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_110(0);
	func_111(0);
	func_100(1);
	func_113("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_59()
{
	func_102(1, 1);
	Global_1956200->f_5.f_1425 = 5;
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = _0xf49f14462f0ae27c(player_id());
	bVar5 = does_entity_exist(iVar4);
	if (bVar5)
	{
		iVar7 = func_123(iVar4);
		iVar8 = func_124(iVar4);
	}
	else
	{
		iVar7 = func_125(&Var0, 0);
		iVar8 = func_126(&Var0, 0);
	}
	iVar7 = iVar7;
	StringCopy(&cVar9, _create_var_string(2, "HORSE_BONDING_LEVEL", iVar8), 64);
	bVar18 = false;
	if (bVar5)
	{
		iVar17 = func_127(iVar4, 0);
	}
	else
	{
		iVar17 = func_128(Var0, 0);
	}
	if (iVar17 <= 50)
	{
		StringCopy(&cVar19, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar17 < 100)
	{
		StringCopy(&cVar19, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar18 = true;
	}
	else
	{
		StringCopy(&cVar19, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar18 = true;
	}
	fVar27 = 0f;
	bVar28 = false;
	if (bVar5)
	{
		fVar27 = func_129(iVar4);
	}
	if (fVar27 > 0f)
	{
		StringCopy(&cVar29, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar28 = true;
	}
	else
	{
		StringCopy(&cVar29, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_130(-415648720, &uVar37))
	{
		if (func_131(uVar37, &iVar46, 14460646, 0))
		{
			StringCopy(&cVar38, _get_label_text_by_hash(iVar46), 64);
		}
	}
	if (func_130(986998820, &iVar48))
	{
		StringCopy(&cVar49, func_132(iVar48), 64);
	}
	StringCopy(&cVar57, _databinding_read_data_string(Global_1956200->f_5.f_4), 64);
	sVar65 = _create_var_string(2, "AT_HORSE");
	if (!is_string_null_or_empty(&cVar57))
	{
		sVar65 = func_133(&cVar57);
	}
	func_104(sVar65);
	func_105(0, "PMPLAYER_STATS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
	func_106(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_105(6, "PMPLAYER_CONDITIONS");
	func_106(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar19, 1, bVar18, bVar18, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_106(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar29, 1, bVar28, bVar28, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_105(9, "PMPLAYER_HORSE_TACK_TRINKETS_NET");
	func_106(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar38, 1, 0, 0, 0, 0, 0, 0);
	func_106(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar49, 1, 0, 0, 0, 0, 0, 0);
	iVar6 = 168;
	if (&Global_1146212->f_35859.f_919[iVar6] == -1246069683)
	{
		func_106(12, "PMPLAYER_HORSE_TACK_TRINKET_TITLE", _create_var_string(2, "PROVISION_TRINKET_SNOWY_EGRET"), 1, 0, 0, 0, 0, 0, 0);
	}
	func_101(1);
}

void func_60()
{
	func_68(4);
	func_69();
	func_70(2);
	func_134(1785216189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_61()
{
	if (_is_app_active(29649618))
	{
		return _0x96fd694fe5be55dc(29649618);
	}
	if (_is_app_active(347537322))
	{
		return _0x96fd694fe5be55dc(347537322);
	}
	return 0;
}

int func_62(var uParam0)
{
	return uParam0->f_197;
}

void func_63(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_135(uParam0);
			break;
		case 1084197569:
			func_136(uParam0);
			break;
	}
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_197 = iParam1;
}

void func_65(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_137(uParam0);
			break;
		case 1084197569:
			func_138(uParam0);
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_139(uParam0);
			break;
		case 1084197569:
			func_140(uParam0);
			break;
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_68(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_69()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

var func_71(char[4] cParam0, char[4] cParam1)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1271225230;
		case 2:
			return 1084197569;
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

bool func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			return func_141(uParam0);
		case 1084197569:
			return func_142(uParam0);
	}
	return false;
}

void func_74(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_75(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_143(uParam0);
			break;
		case 1084197569:
			func_144(uParam0);
			break;
	}
}

bool func_76(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_145(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_146(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_147(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_148(&Var45, &Var0, 0))
				{
					if (func_149(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_118(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_118(iVar43);
	}
	return false;
}

struct<4> func_77()
{
	return Global_1291734->f_11.f_310;
}

bool func_78()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_79(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_80(int iParam0)
{
	iVar0 = func_150(iParam0);
	bVar1 = func_152(func_151(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_81(int iParam0)
{
	return func_153(&(Global_3145858->f_6), iParam0);
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_83()
{
	return Var0;
}

bool func_84(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_145(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_146(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_147(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_148(&Var45, &Var0, 0))
				{
					if (func_149(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_118(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_118(iVar43);
	}
	return false;
}

struct<4> func_85(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_117("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_147(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_118(iVar0);
	return Var2;
}

struct<24> func_86(var uParam0, int iParam1)
{
	Var0.f_10 = -1;
	func_154(uParam0, iParam1, &Var0);
	return Var0;
}

bool func_87(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], uParam0))
		{
		}
		else
		{
			if (Global_1291734->f_938[iVar0]->f_23 < Global_1296859->f_21)
			{
				*uParam1 = { Global_1291734->f_938[iVar0]->f_7 };
				return true;
			}
			*uParam1 = { Global_1291734->f_938[iVar0]->f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_88()
{
	return "UNNAMED_HORSE";
}

char* func_89(int iParam0)
{
	StringCopy(&cVar0, func_155(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_133(&cVar0);
}

bool func_90()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

float func_91(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

int func_92(int iParam0)
{
	return func_157(func_156(iParam0));
}

bool func_93(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_94(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_95(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_96(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163("MP_PLAYER_PLAYER", 0);
			func_165(func_164(0));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			func_113("PMPLAYER_OVERVIEW_TOOLTIP");
			func_158(1);
			func_159(1);
			func_160(1);
			break;
		case 2:
			func_163("MP_PLAYER_PLAYER", 0);
			func_165(func_164(0));
			func_166("PMPLAYER_RANK");
			func_102(0, 1);
			sVar0 = _0xdb438cc9bc6f4022();
			iVar1 = func_31(Global_1145091[&Global_1296859] + 1);
			func_167(0, _create_var_string(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y_XP", sVar0, iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_113("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_163("MP_PLAYER_HONOR", 0);
			func_165("PMPLAYER_GENERAL_HONOR_DESC");
			func_166("PMPLAYER_HONOR");
			func_102(0, 1);
			func_113("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(0);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_163(func_170(), func_171());
			func_165("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_166("PMPLAYER_CONDITION_TEMPERATURE");
			func_102(0, 1);
			func_172();
			func_113("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_163(func_173(), func_174());
			func_165("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_166("PMPLAYER_CONDITION_TOXICITY");
			func_102(0, 1);
			func_175();
			func_113("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_163("MP_PLAYER_HOSTILITY", 0);
			func_165("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_166("PMPLAYER_GENERAL_HOSTILITY");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
		case 10:
			if (!func_108(Global_1146212->f_47689.f_63[func_107(-813902658)]->f_1))
			{
				func_163("TRINKET_TONIC_BLENDING", "pausemenu_player_update");
				func_165("CONSUMABLE_TONIC_BLENDING_DESC");
				func_166("CONSUMABLE_TONIC_BLENDING");
				func_102(0, 1);
				func_113("PMPLAYER_GENERAL_TONIC_BLENDING_TOOLTIP_CONSUMED");
			}
			break;
		case 11:
			if (!func_108(Global_1146212->f_47689.f_63[func_107(-1685270562)]->f_1))
			{
				func_163("TRINKET_TONIC_HARDY", "pausemenu_player_update");
				func_165("CONSUMABLE_TONIC_HARDY_DESC");
				func_166("CONSUMABLE_TONIC_HARDY");
				func_102(0, 1);
				func_113("PMPLAYER_GENERAL_TONIC_HARDY_TOOLTIP_CONSUMED");
			}
			break;
		case 12:
			func_163("TRINKET_BEAVER_TOOTH", "pausemenu_player");
			func_165("PROVISION_TRINKET_BEAVER_TOOTH_DESC_NET");
			func_166("PROVISION_TRINKET_BEAVER_TOOTH_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 13:
			func_163("TRINKET_BUCK_ANTLER", "pausemenu_player");
			func_165("PROVISION_TRINKET_BUCK_ANTLER_DESC_NET");
			func_166("PROVISION_TRINKET_BUCK_ANTLER_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 14:
			func_163("TRINKET_JAVELINA_TUSK", "pausemenu_player_update");
			func_165("PROVISION_TRINKET_JAVELINA_TUSK_DESC");
			func_166("PROVISION_TRINKET_JAVELINA_TUSK");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 15:
			func_163("TRINKET_RAM_HORN", "pausemenu_player");
			func_165("PROVISION_TRINKET_RAM_HORN_DESC_NET");
			func_166("PROVISION_TRINKET_RAM_HORN_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 16:
			func_163("TRINKET_SNOWY_EGRET", "pausemenu_player_update");
			func_165("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_166("PROVISION_TRINKET_SNOWY_EGRET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_97(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(1, 0), 0);
			func_165(func_164(1));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[1]->f_30[0]));
			func_167(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[1]->f_30[1]));
			func_167(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[1]->f_30[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[1]->f_39[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[1]->f_75[2]));
			func_167(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_158(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(1, 0), 0);
			func_165("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(1);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_163(func_170(), func_171());
			func_165("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_166("PMPLAYER_CONDITION_TEMPERATURE");
			func_102(0, 1);
			func_172();
			func_113("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_163(func_173(), func_174());
			func_165("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_166("PMPLAYER_CONDITION_TOXICITY");
			func_102(0, 1);
			func_175();
			func_113("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_98(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(2, 0), 0);
			func_165(func_164(2));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[2]->f_30[0]));
			func_167(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[2]->f_30[1]));
			func_167(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[2]->f_30[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[2]->f_39[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[2]->f_75[2]));
			func_167(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_159(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(2, 0), 0);
			func_165("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(2);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_99(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(3, 0), 0);
			func_165(func_164(3));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[3]->f_30[0]));
			func_167(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[3]->f_30[1]));
			func_167(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = _databinding_read_data_string(&(Global_1956200->f_5.f_14[3]->f_30[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[3]->f_39[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1956200->f_5.f_14[3]->f_75[2]));
			func_167(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_160(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(3, 0), 0);
			func_165("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(3);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_100(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_163("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_163("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_163("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_163("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_163("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_163("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = _databinding_read_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_16);
	func_165(func_164(4));
	func_166(sVar0);
	func_102(0, 1);
}

void func_101(int iParam0)
{
	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = _0xf49f14462f0ae27c(player_id());
	bVar5 = does_entity_exist(iVar4);
	if (bVar5)
	{
		iVar6 = get_entity_model(iVar4);
		iVar7 = func_19(iVar6);
	}
	else
	{
		iVar7 = func_179(&Var0, 0);
		iVar6 = func_180(iVar7);
	}
	if (bVar5)
	{
		iVar8 = func_181(iVar4) + 1;
		iVar9 = func_182(iVar4, 0);
		iVar10 = func_183(iVar4) + 1;
		iVar11 = func_182(iVar4, 1);
	}
	else
	{
		iVar8 = func_184(iVar6) + 1;
		iVar9 = func_185(Var0, 0);
		iVar10 = func_186(iVar6) + 1;
		iVar11 = func_185(Var0, 1);
	}
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_163(func_176(5, 0), "pausemenu_player");
			func_165(func_164(5));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			Var21 = { func_17(0, 1, 0, -1) };
			func_187(&Var21, &iVar19, &iVar20);
			iVar19 = floor((IntToFloat(iVar19) * 0.01f));
			iVar20 = floor((IntToFloat(iVar20) * 0.01f));
			fVar25 = (IntToFloat(func_188(iVar6) + 1) * 10f);
			fVar26 = (fVar25 + (to_float(iVar19) * 10f));
			fVar27 = ((fVar25 + (2f * 10f)) * 0.01f);
			fVar28 = (IntToFloat(func_189(iVar6) + 1) * 10f);
			fVar29 = (fVar28 + (to_float(iVar20) * 10f));
			fVar30 = ((fVar28 + (2f * 10f)) * 0.01f);
			func_167(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar25, fVar26, fVar27, 0);
			func_167(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar28, fVar29, fVar30, 0);
			func_167(2, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), _create_var_string(2, func_191(func_190(iVar6))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_110(1);
			func_111(1);
			func_161(1);
			func_192(10, (IntToFloat(iVar8) / 10f), round(((IntToFloat(iVar9) / 100f) * 15f)));
			func_193(10, (IntToFloat(iVar10) / 10f), round(((IntToFloat(iVar11) / 100f) * 15f)));
			func_113("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_163(func_176(5, 0), "pausemenu_player");
			func_165("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_102(0, 1);
			if (!is_entity_dead(iVar4))
			{
				iVar14 = get_attribute_rank(iVar4, 13);
			}
			else if (func_194(&Var0, 0, &iVar12))
			{
				bVar13 = false;
				switch (iVar12)
				{
					case 0:
						StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
						break;
					case 1:
						StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
						break;
					case 2:
						StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
						break;
					case 3:
						StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
						break;
					case 4:
						StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
						break;
					default:
						bVar13 = true;
						iVar14 = get_default_attribute_rank(iVar6, 13);
						break;
				}
			}
			else
			{
				iVar14 = get_default_attribute_rank(iVar6, 13);
			}
			if (bVar13)
			{
				if (iVar14 < 10)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
				}
				else if (iVar14 < 30)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
				}
				else if (iVar14 < 70)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
				}
				else if (iVar14 < 90)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
				}
				else
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
				}
			}
			iVar31 = 1;
			if (func_195(Var0, -653439684, 0, -1) == 515427499)
			{
				iVar31 = 2;
			}
			if (_0xb881ca836cc4b6d4(&Var0))
			{
				func_167(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), _create_var_string(2, func_197(func_196(iVar6), iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), _create_var_string(2, func_89(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(2, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), _create_var_string(2, func_198(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(3, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), _create_var_string(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(4, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), _create_var_string(2, func_199(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_167(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(2, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(3, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(4, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_113("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_163("MP_PLAYER_HORSE_BONDING", 0);
			func_165("PMPLAYER_HORSE_BONDING_DESC");
			func_166("PMPLAYER_HORSE_BONDING_TITLE");
			func_102(0, 1);
			if (bVar5)
			{
				iVar32 = func_124(iVar4);
				iVar33 = func_123(iVar4);
			}
			else
			{
				iVar32 = func_126(&Var0, 0);
				iVar33 = func_125(&Var0, 0);
			}
			iVar34 = func_200(iVar6, iVar32);
			iVar35 = func_200(iVar6, iVar32 + 1);
			iVar36 = (iVar33 - iVar34);
			iVar37 = (iVar35 - iVar34);
			iVar38 = 1;
			if (iVar32 >= 4)
			{
				iVar38 = 0;
			}
			func_167(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, _create_var_string(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar36, iVar37), 0, iVar38, 0, 0, 0, 0, 0, 0);
			func_113("PMPLAYER_HORSE_BONDING_TIP");
			func_161(1);
			break;
		case 4:
			func_163("MP_PLAYER_HORSE_HEALTH", 0);
			func_165("PMPLAYER_HORSE_HEALTH_DESC");
			func_166("PMPLAYER_HORSE_HEALTH_TITLE");
			func_102(0, 1);
			func_167(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar8, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, _create_var_string(2, "PMPLAYER_CORE_PC"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", iVar9), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_201(2, &Var0, 0);
			func_113("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_163("MP_PLAYER_HORSE_STAMINA", 0);
			func_165("PMPLAYER_HORSE_STAMINA_DESC");
			func_166("PMPLAYER_HORSE_STAMINA_TITLE");
			func_102(0, 1);
			func_167(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar10, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, _create_var_string(2, "PMPLAYER_CORE_PC"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", iVar11), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_201(2, &Var0, 1);
			func_113("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_163("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_165("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_166("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_102(0, 1);
			if (func_128(Var0, 0) > 50)
			{
				func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_177(0, "RPG_ARROW_DOWN", 0);
			}
			func_113("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_163("MP_PLAYER_HORSE_SADDLE", 0);
			func_165("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_166("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_102(0, 1);
			func_202();
			func_113("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_163("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_165("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_166("PMPLAYER_HORSE_CONDITION_MOOD");
			func_102(0, 1);
			func_113("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_163("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_165("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_166("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_102(0, 1);
			func_203();
			func_113("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
		case 12:
			func_163("TRINKET_SNOWY_EGRET", "pausemenu_player");
			func_165("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_166("PROVISION_TRINKET_SNOWY_EGRET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_102(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		_databinding_clear_binding_array(Global_1956200->f_5.f_525.f_22);
	}
	if (bParam1)
	{
		_databinding_clear_binding_array(Global_1956200->f_5.f_525.f_21);
	}
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_GENERAL_STATS";
		case 5:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_104(char* sParam0)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525, sParam0);
}

void func_105(int iParam0, char* sParam1)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_16, sParam1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_525.f_22, iParam0, "player_group_item", Global_1956200->f_5.f_525.f_24[iParam0]->f_15);
}

void func_106(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_16, sParam1);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_17, sParam2);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_18, bParam3);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_19, bParam4);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_22, bParam5);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_20, sParam6);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_21, sParam7);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_23, sParam8);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_24, bParam9);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_525.f_22, iParam0, "player_list_item", Global_1956200->f_5.f_525.f_24[iParam0]->f_15);
}

int func_107(int iParam0)
{
	return (func_204(iParam0, 1) - 180);
}

bool func_108(int iParam0)
{
	return iParam0 < Global_1296859->f_21;
}

int func_109(int iParam0)
{
	iVar0 = func_107(iParam0);
	return (30 - ((Global_1296859->f_21 + 1800 - Global_1146212->f_47689.f_63[iVar0]->f_1) / 60));
}

void func_110(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_9, bParam0);
}

void func_111(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_10, bParam0);
}

int func_112(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

void func_113(char* sParam0)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_5, sParam0);
}

void func_114()
{
	Var0 = { func_44(-43471346) };
	stat_id_get_date(&Var0, &vVar2);
	iVar11 = _localization_get_system_date_format();
	switch (iVar11)
	{
		case 0:
			if (vVar2.z < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 1:
			if (vVar2.y < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 2:
			IntToString(&cVar9, vVar2.x, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			break;
	}
	func_106(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_115(int iParam0)
{
	Var1 = { func_44(iParam0) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

char* func_116(float fParam0, int iParam1)
{
	sVar0 = _0x2b6846401d68e563(fParam0, iParam1);
	return func_205(sVar0, 109029619);
}

bool func_117(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_206(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_118(int iParam0)
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

int func_119(int iParam0)
{
	Var1 = { func_120(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_120(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_122(int iParam0, int iParam1)
{
	Var1 = { func_207(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_123(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_attribute_points(iParam0, 7);
	return iVar0;
}

int func_124(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, 7);
	return iVar0;
}

int func_125(var uParam0, int iParam1)
{
	if (!func_208(uParam0, iParam1, 1))
	{
	}
	return Global_1904087->f_23;
}

int func_126(var uParam0, int iParam1)
{
	if (!func_208(uParam0, iParam1, 1))
	{
	}
	if (!func_209(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_210(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

int func_127(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_211(iParam1, &iVar0))
	{
		return get_attribute_base_rank(iParam0, iVar0);
	}
	return 0;
}

int func_128(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], &uParam0))
		{
			return &(Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4]);
		}
		iVar0++;
	}
	if (!func_212(&uParam0))
	{
		return 0;
	}
	return 0;
}

float func_129(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (is_entity_dead(iParam0))
	{
		return 0f;
	}
	if (is_ped_injured(iParam0))
	{
		return 0f;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0f;
	}
	uVar0 = _0x42688e94e96fd9b4(iParam0, 3, 0);
	return uVar0;
}

bool func_130(int iParam0, int iParam1)
{
	if (!func_213(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_214() };
	*iParam1 = func_195(Var0, iParam0, 0, -1);
	if (!func_215(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_131(var uParam0, int iParam1, int iParam2, int iParam3)
{
	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (_item_database_fillout_ui_data(uParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && Var1.f_18[iVar0]->f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && &Var1.f_18[iVar0] != iParam3)
			{
			}
			else
			{
				*iParam1 = { *Var1.f_18[iVar0] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_132(int iParam0)
{
	if (!func_215(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_216(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char[] func_133(char[4] cParam0)
{
	return cParam0;
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887->f_405 = iParam0;
	if (iParam1 != 0)
	{
		func_217(iParam1);
	}
	if (iParam2 != 0)
	{
		func_217(iParam2);
	}
	if (iParam3 != 0)
	{
		func_217(iParam3);
	}
	if (iParam4 != 0)
	{
		func_217(iParam4);
	}
	if (iParam5 != 0)
	{
		func_217(iParam5);
	}
	if (iParam6 != 0)
	{
		func_217(iParam6);
	}
	if (iParam7 != 0)
	{
		func_217(iParam7);
	}
	if (iParam8 != 0)
	{
		func_217(iParam8);
	}
	if (iParam9 != 0)
	{
		func_217(iParam9);
	}
	if (iParam10 != 0)
	{
		func_217(iParam10);
	}
	func_218();
}

void func_135(var uParam0)
{
}

void func_136(var uParam0)
{
}

void func_137(var uParam0)
{
	func_50(uParam0, 1, 1);
}

void func_138(var uParam0)
{
}

void func_139(var uParam0)
{
	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 1, 1);
	}
	if (func_49(uParam0, 1))
	{
		func_50(uParam0, 1, 0);
		func_220(uParam0, 1145633164, func_219());
		func_220(uParam0, -359624034, func_221());
	}
}

void func_140(var uParam0)
{
	func_222(uParam0);
}

int func_141(var uParam0)
{
	if (!func_223(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_142(var uParam0)
{
	func_224(uParam0);
	return 1;
}

void func_143(var uParam0)
{
	func_225(uParam0);
}

void func_144(var uParam0)
{
}

struct<14> func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

bool func_146(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_206(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_148(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_206(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_149(var uParam0, int iParam1)
{
	return func_226(*uParam0, iParam1);
}

int func_150(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_227(iVar0);
	iVar2 = func_228(iVar0, iVar1);
	return iVar2;
}

struct<2> func_151()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_152(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_5(*Global_1051213) && !func_229(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_230(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_231(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return 1;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return 1;
	}
	if (func_232())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_5(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return 1;
	}
	Global_1071686->f_28351 = 0;
	return 0;
}

bool func_153(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_154(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_233(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_234(uParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_235(uParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -757978903:
			return "BREED_BRETON_REDROAN";
		case 1909854428:
			return "BREED_BRETON_SORREL";
		case 1592694494:
			return "BREED_BRETON_GRULLODUN";
		case 981469777:
			return "BREED_BRETON_SEALBROWN";
		case 1064693514:
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739:
			return "BREED_BRETON_STEELGREY";
		case 1577022605:
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209:
			return "BREED_CRIOLLO_DUN";
		case 3032834:
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672:
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757:
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233:
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case 885568364:
			return "BREED_KLADRUBER_BLACK";
		case -1540355548:
			return "BREED_KLADRUBER_WHITE";
		case -601560591:
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766:
			return "BREED_KLADRUBER_GREY";
		case -1698261864:
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166:
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

bool func_156(int iParam0)
{
	return func_236(&(Global_1956200->f_1565), iParam0, 1);
}

int func_157(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_6, bParam0);
}

void func_159(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_7, bParam0);
}

void func_160(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_8, bParam0);
}

void func_161(bool bParam0)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_11, bParam0);
}

void func_162(bool bParam0, char* sParam1, char* sParam2)
{
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_18, bParam0);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_19, sParam1);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_20, sParam2);
}

void func_163(char* sParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = func_237(0);
	}
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_3, sParam0);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_4, sParam1);
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC_NET";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_STATS_DESC";
		case 5:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_165(char* sParam0)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_2, sParam0);
}

void func_166(char* sParam0)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_1, sParam0);
}

void func_167(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_4, sParam1);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_5, sParam2);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_1, bParam3);
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_2, sParam10);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_6, bParam4);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_7, bParam5);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_11, bParam6);
	_databinding_write_data_float(Global_1956200->f_5.f_525.f_24[iParam0]->f_8, iParam7);
	_databinding_write_data_float(Global_1956200->f_5.f_525.f_24[iParam0]->f_9, iParam8);
	_databinding_write_data_float(Global_1956200->f_5.f_525.f_24[iParam0]->f_10, iParam9);
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_12, false);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_525.f_21, iParam0, "player_attribute_item", &(Global_1956200->f_5.f_525.f_24[iParam0]));
}

char* func_168()
{
	return "MP_PLAYER_WEIGHT";
}

void func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = (Global_1146212->f_2169[93]->f_201 * Global_1146212->f_2169[93]->f_202);
			fVar1 = (Global_1146212->f_2169[94]->f_201 * Global_1146212->f_2169[94]->f_202);
			if (fVar0 == 0f)
			{
				func_167(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_167(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_177(0, "RPG_ARROW_DOWN", 0);
				func_167(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_177(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_167(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_177(0, "RPG_ARROW_UP", 0);
				func_167(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_177(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1956200->f_1431.f_103 == 0)
			{
				fVar2 = 0.15f;
			}
			else if (Global_1956200->f_1431.f_103 == 10 || Global_1956200->f_1431.f_103 == -10)
			{
				fVar2 = -0.25f;
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_238(iParam0));
				func_177(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_238(iParam0));
			}
			else
			{
				func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_238(iParam0));
				func_177(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_170()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_171()
{
	return "pm_player_mp";
}

void func_172()
{
	if (func_27() || func_28())
	{
		func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_177(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_173()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_174()
{
	return "pm_player_mp";
}

void func_175()
{
	if (func_42())
	{
		func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_177(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_167(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_PLAYER";
		case 1:
			return "MP_PLAYER_HEALTH";
		case 2:
			return "MP_PLAYER_STAMINA";
		case 3:
			return "MP_PLAYER_DEAD_EYE";
		case 4:
			return "MP_PLAYER_GENERAL_STATS";
		case 5:
			return "HORSE_GENERAL";
		default:
			break;
	}
	return "";
}

void func_177(int iParam0, char* sParam1, char* sParam2)
{
	_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_13, sParam1);
	if (!is_string_null_or_empty(sParam2))
	{
		_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_14, sParam2);
	}
	else
	{
		_databinding_write_data_string(Global_1956200->f_5.f_525.f_24[iParam0]->f_14, "pausemenu_player_update");
	}
	_databinding_write_data_bool(Global_1956200->f_5.f_525.f_24[iParam0]->f_12, true);
}

void func_178(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	fVar0 = func_239(iParam0, 2);
	iVar1 = func_240(fVar0);
	fVar2 = to_float(func_241(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_167(iVar5, _create_var_string(2, sParam1), _create_var_string(18, "PMPLAYER_VALUE_X_OF_Y", floor(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		iVar5++;
	}
	func_167(iVar5, _create_var_string(2, sParam2), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_243(func_242(iVar3, 0));
	func_162(1, sVar6, sParam3);
}

int func_179(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1, 0);
	return Global_1904087->f_22;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return -450053710;
		case 1432602132:
			return -1679658797;
		case 92296905:
			return 1792770814;
		case -842044823:
			return -1963397600;
		case 1371398552:
			return -1250098797;
		case -745453539:
			return -318278790;
		case 1583029039:
			return 55096099;
		case -783061276:
			return -458397856;
		case -1322521536:
			return -444610976;
		case 728055838:
			return 746627200;
		case 1100711204:
			return 705691988;
		case -1782334639:
			return 2130094044;
		case -1181052732:
			return -1554827654;
		case -179102320:
			return -1029277326;
		case -1266863668:
			return -1140650619;
		case -2078767648:
			return -1999198818;
		case -852553462:
			return -403470324;
		case -80004868:
			return -925223936;
		case 1813208211:
			return -1547438906;
		case 836323303:
			return -635239558;
		case 153881023:
			return -2026265047;
		case -1256798240:
			return -586898625;
		case 2118089359:
			return 937246805;
		case -1537586382:
			return 1593035738;
		case 1440692746:
			return 861505058;
		case 697143532:
			return 687445866;
		case 281128160:
			return 1705182311;
		case 1854519167:
			return -78273782;
		case -1376299681:
			return -819697512;
		case -1955947684:
			return -247265944;
		case 1361788230:
			return -1265030920;
		case 1974379573:
			return 2024948086;
		case 545109431:
			return 1696286663;
		case 1275638003:
			return -1342159303;
		case 2083573823:
			return -1154406788;
		case 1235275977:
			return 2030804811;
		case 892601357:
			return 1230359523;
		case 1224695367:
			return -1038436471;
		case 648301150:
			return 96930969;
		case -1597490733:
			return -1180427609;
		case 2000205872:
			return 2119038574;
		case -1428527735:
			return 43825738;
		case 170010697:
			return 2145697477;
		case -742726637:
			return -1261814606;
		case -1714171692:
			return 107013696;
		case -103101636:
			return 1066034872;
		case -1999094324:
			return 36009259;
		case 1724200240:
			return -1599683008;
		case 237935328:
			return -1693870200;
		case 120848852:
			return 1072019803;
		case -868094182:
			return 1074477367;
		case -887362763:
			return -85890205;
		case -847714194:
			return -727455979;
		case 1756765331:
			return -1667789645;
		case -813071670:
			return -1924405794;
		case -1900569233:
			return 1861665605;
		case 1688250187:
			return -526169133;
		case -1262715164:
			return 2120708491;
		case 2010625508:
			return 900144280;
		case -136225010:
			return 1133837220;
		case -225011104:
			return 1702024301;
		case -1882436593:
			return -1604180548;
		case -757978903:
			return -683592019;
		case 1909854428:
			return 337109765;
		case 1592694494:
			return -619132373;
		case 981469777:
			return 1544366970;
		case 1064693514:
			return -1441144351;
		case -1365665739:
			return -1717674545;
		case 1577022605:
			return 1825358734;
		case 381495209:
			return 1138427579;
		case 3032834:
			return -1720251851;
		case -1722101672:
			return 506887890;
		case -189605757:
			return 766293155;
		case 863391233:
			return 2147082926;
		case -952011226:
			return -390136947;
		case -356470463:
			return 1104566530;
		case -1750687713:
			return -1142861801;
		case -272192064:
			return -417416199;
		case 1935859332:
			return -1460773772;
		case -1898310680:
			return 1476007840;
		case 885568364:
			return -1616287563;
		case -1540355548:
			return -127412252;
		case -601560591:
			return -1881155818;
		case -370362766:
			return -955237712;
		case -1698261864:
			return -647020346;
		case -670301166:
			return -1846319726;
		case -302057902:
			return 1007570567;
		case 1257620801:
			return 1029339151;
		case 821735821:
			return -1424767799;
		case -769035812:
			return -217135948;
		case -1824684932:
			return -156439156;
		case 1589592948:
			return 1344011125;
		case -1331210307:
			return 1772321403;
		case 122449722:
			return -1230516683;
		case -1784502482:
			return 594040097;
		case -1943445834:
			return 1883159941;
		case -635244104:
			return -1028075925;
		case -1427377767:
			return 84224102;
		case -2055655009:
			return 1496579364;
		case -1293672675:
			return -1896838685;
		case -1179079660:
			return -420599285;
		case 805526368:
			return 478986344;
		case -235714362:
			return 917402668;
		case -1678164:
			return -914712122;
		case -977833913:
			return -598917269;
		case -364764277:
			return 808655744;
		default:
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_244());
	return iVar0;
}

int func_182(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_245(iParam1, &iVar0))
	{
		return _get_attribute_core_value(iParam0, iVar0);
	}
	return 0;
}

int func_183(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_246());
	return iVar0;
}

int func_184(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_244());
	return iVar0;
}

int func_185(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_247(&uParam0, &iVar0))
	{
		return 0;
	}
	return &(Global_17411.f_55.f_61.f_41[iVar0]->f_29[iParam4]);
}

int func_186(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_246());
	return iVar0;
}

void func_187(var uParam0, int iParam1, int iParam2)
{
	if (func_248(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_249(*uParam0, -415648720, &Var0, 1, -1))
		{
			if (func_215(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var14.f_1[iVar43]), &vVar36))
						{
							if (vVar36.y == -1620444701)
							{
								*iParam1 = (*iParam1 + vVar36.z);
							}
							else if (vVar36.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			iVar44 = func_195(Var0, 986998820, 0, -1);
			if (func_215(iVar44, 0))
			{
				Var45.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(iVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var45.f_1[iVar74]), &vVar67))
						{
							if (vVar67.y == -1620444701)
							{
								*iParam1 = (*iParam1 + vVar67.z);
							}
							else if (vVar67.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

int func_188(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_250());
	return iVar0;
}

int func_189(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_251());
	return iVar0;
}

int func_190(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	iVar0 = func_252(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

void func_192(int iParam0, float fParam1, int iParam2)
{
	_databinding_write_data_int(Global_1956200->f_5.f_525.f_12, iParam0);
	_databinding_write_data_float(Global_1956200->f_5.f_525.f_13, fParam1);
	_databinding_write_data_int(Global_1956200->f_5.f_525.f_14, iParam2);
}

void func_193(int iParam0, float fParam1, int iParam2)
{
	_databinding_write_data_int(Global_1956200->f_5.f_525.f_15, iParam0);
	_databinding_write_data_float(Global_1956200->f_5.f_525.f_16, fParam1);
	_databinding_write_data_int(Global_1956200->f_5.f_525.f_17, iParam2);
}

int func_194(var uParam0, int iParam1, int iParam2)
{
	if (!func_208(uParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_209(Global_1904087))
	{
		return 0;
	}
	return func_253(Global_1904087, iParam2);
}

int func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_254(&uParam0, iParam4, bParam5, iParam6);
}

int func_196(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case -450053710:
			return -311956671;
		case -1679658797:
			return -311956671;
		case 1792770814:
			return -311956671;
		case -1963397600:
			return -311956671;
		case -1250098797:
			return 356361174;
		case -318278790:
			return 356361174;
		case 55096099:
			return 356361174;
		case -458397856:
			return 356361174;
		case -444610976:
			return -1771663379;
		case 746627200:
			return -1771663379;
		case 705691988:
			return -1771663379;
		case 2130094044:
			return -311956671;
		case -1554827654:
			return -311956671;
		case -1029277326:
			return -311956671;
		case -1140650619:
			return -311956671;
		case -1999198818:
			return -2030355032;
		case -403470324:
			return -2030355032;
		case -925223936:
			return -2030355032;
		case -1547438906:
			return -1771663379;
		case -635239558:
			return -1771663379;
		case -2026265047:
			return -1771663379;
		case -586898625:
			return 918497150;
		case 937246805:
			return 918497150;
		case 1593035738:
			return -311956671;
		case 861505058:
			return -311956671;
		case 687445866:
			return -311956671;
		case 1705182311:
			return -1771663379;
		case -78273782:
			return -1771663379;
		case -819697512:
			return -1771663379;
		case -247265944:
			return 997958153;
		case -1265030920:
			return 997958153;
		case 2024948086:
			return 997958153;
		case 1696286663:
			return 997958153;
		case -1342159303:
			return -1651618152;
		case -1154406788:
			return -1651618152;
		case 2030804811:
			return 997958153;
		case 1230359523:
			return 997958153;
		case -1038436471:
			return 997958153;
		case 96930969:
			return 997958153;
		case -1180427609:
			return -1651618152;
		case 2119038574:
			return -1651618152;
		case 43825738:
			return -1651618152;
		case 2145697477:
			return 356361174;
		case -1261814606:
			return 356361174;
		case 107013696:
			return 356361174;
		case 1066034872:
			return 918497150;
		case 36009259:
			return 918497150;
		case -1599683008:
			return 918497150;
		case -1693870200:
			return 918497150;
		case 1072019803:
			return 997958153;
		case 1074477367:
			return 997958153;
		case -85890205:
			return 997958153;
		case -727455979:
			return 997958153;
		case -1667789645:
			return 997958153;
		case -1924405794:
			return 356361174;
		case 1861665605:
			return 356361174;
		case -526169133:
			return 356361174;
		case 2120708491:
			return 356361174;
		case 900144280:
			return 356361174;
		case 1133837220:
			return -1651618152;
		case 1702024301:
			return -1651618152;
		case -1604180548:
			return -1651618152;
		case -683592019:
			return -1651618152;
		case 337109765:
			return -1651618152;
		case -619132373:
			return -1651618152;
		case 1544366970:
			return -1651618152;
		case -1441144351:
			return -1651618152;
		case -1717674545:
			return -1651618152;
		case 1825358734:
			return -1651618152;
		case 1138427579:
			return -1651618152;
		case -1720251851:
			return -1651618152;
		case 506887890:
			return -1651618152;
		case 766293155:
			return -1651618152;
		case 2147082926:
			return -1651618152;
		case -390136947:
			return -1651618152;
		case 1104566530:
			return -1651618152;
		case -1142861801:
			return -1651618152;
		case -417416199:
			return -1651618152;
		case -1460773772:
			return -1651618152;
		case 1476007840:
			return -1651618152;
		case -1616287563:
			return -1651618152;
		case -127412252:
			return -1651618152;
		case -1881155818:
			return -1651618152;
		case -955237712:
			return -1651618152;
		case -647020346:
			return -1651618152;
		case -1846319726:
			return -1651618152;
		case 1007570567:
			return -1651618152;
		case 1029339151:
			return -1651618152;
		case -1424767799:
			return -1651618152;
		case -217135948:
			return -1651618152;
		case -156439156:
			return -1651618152;
		case 1344011125:
			return -1651618152;
		case 1772321403:
			return 1090011026;
		case -1230516683:
			return 1090011026;
		case 594040097:
			return 1090011026;
		case 1883159941:
			return 356361174;
		case -1028075925:
			return -311956671;
		case 84224102:
			return -2030355032;
		case 1496579364:
			return -2030355032;
		case -1896838685:
			return -1771663379;
		case -420599285:
			return -1651618152;
		case 478986344:
			return -1651618152;
		case 917402668:
			return 997958153;
		case -914712122:
			return 356361174;
		case -598917269:
			return -311956671;
		default:
			break;
	}
	return 779169510;
}

char* func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return "HORSE_CLASS_RIDING";
		case 918497150:
			return "HORSE_CLASS_DRAFT";
		case 356361174:
			return "HORSE_CLASS_RACE";
		case -1771663379:
			return "HORSE_CLASS_WAR";
		case -311956671:
			return "HORSE_CLASS_WORK";
		case -1651618152:
			return func_255(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -757978903:
			return "COAT_REDR";
		case 1909854428:
			return "COAT_SORREL";
		case 1592694494:
			return "COAT_GRULDUN";
		case 981469777:
			return "COAT_SEALBR";
		case 1064693514:
			return "COAT_MEALYDAPBAY";
		case -1365665739:
			return "COAT_STEELGREY";
		case 1577022605:
			return "COAT_BLUEROANOVERO";
		case 381495209:
			return "COAT_DUN";
		case 3032834:
			return "COAT_BAYBRINDLE";
		case -1722101672:
			return "COAT_SORRELOVERO";
		case -189605757:
			return "COAT_BAYFRAMEOVERO";
		case 863391233:
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case 885568364:
			return "COAT_BLACK";
		case -1540355548:
			return "COAT_WHITE";
		case -601560591:
			return "COAT_CREM";
		case -370362766:
			return "COAT_GREY";
		case -1698261864:
			return "COAT_DAPROSEGREY";
		case -670301166:
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -2055655009:
			return "COAT_REDCH";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

int func_200(int iParam0, int iParam1)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_attribute_points_needed_for_rank(iParam0, 7, iParam1);
	return iVar0;
}

void func_201(int iParam0, var uParam1, int iParam2)
{
	fVar0 = (func_256(*uParam1, iParam2) * 100f);
	sVar1 = func_257(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_167(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_177(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_167(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_167(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_177(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_202()
{
	Var1 = { func_17(0, 1, 0, -1) };
	iVar0 = func_258(Var1, -415648720, 0, 0);
	if (!func_215(iVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	_item_database_fillout_item_effects_ids(iVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		_item_database_fillout_item_effects_id_info(&(Var10.f_1[iVar39]), &Var32);
		switch (Var32.f_1)
		{
			case 2086291460:
				iVar8 = (iVar8 + floor((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar9 = (iVar9 + floor((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case 1605773431:
				fVar5 = Var32.f_5;
				break;
			case 1167068375:
				fVar6 = Var32.f_5;
				break;
			case -225223329:
				fVar7 = Var32.f_5;
				break;
		}
		iVar39++;
	}
	func_167(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_167(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_167(2, _create_var_string(2, "PMPLAYER_REGEN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_167(2, _create_var_string(2, "PMPLAYER_REGEN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_167(3, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_177(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_167(3, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_177(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_167(4, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_177(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_167(4, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_177(4, "RPG_ARROW_UP", 0);
	}
}

void func_203()
{
	Var2 = { func_17(0, 1, 0, -1) };
	iVar1 = func_258(Var2, -415648720, 0, 0);
	if (!func_215(iVar1, 0))
	{
		return;
	}
	Var6 = { func_259(iVar1, Var2, -415648720, 0) };
	iVar0 = func_195(Var6, 986998820, 0, -1);
	if (!func_215(iVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	_item_database_fillout_item_effects_ids(iVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		_item_database_fillout_item_effects_id_info(&(Var13.f_1[iVar42]), &Var35);
		switch (Var35.f_1)
		{
			case 2086291460:
				iVar10 = (iVar10 + floor((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar11 = (iVar11 + floor((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -845587290:
				fVar12 = (fVar12 + Var35.f_5);
				break;
		}
		iVar42++;
	}
	func_167(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_167(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_167(2, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_167(2, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

int func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

char* func_205(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_260(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_206(bool bParam0)
{
	if (func_261() == -1)
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

struct<2> func_207(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_208(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_233(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_262(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_263(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_209(var uParam0)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_210(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_200(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

bool func_211(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

bool func_212(var uParam0)
{
	Var0 = { func_83() };
	if (_0x4c543d5dfcd2dafd(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], uParam0))
		{
			bVar18 = true;
		}
		else if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], &Var0))
		{
			func_264(Global_17411.f_55.f_61.f_41[iVar19]);
			*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_265(*Global_17411.f_55.f_61.f_41[iVar19], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_264(Global_17411.f_55.f_61.f_41[iVar19]);
				*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

bool func_213(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_266(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_267(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_214()
{
	Var0 = { func_268(0) };
	return func_259(856287005, Var0, -218846335, 0);
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_216(int iParam0)
{
	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_269(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_217(int iParam0)
{
	func_271(&(Global_1572887->f_405.f_1), func_270(iParam0), 3);
}

void func_218()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (func_272(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887->f_405.f_5 != -1)
	{
	}
	if (Global_1572887->f_405.f_6 != -1)
	{
	}
	if (Global_1572887->f_405.f_7 != -1)
	{
	}
	if (Global_1572887->f_405.f_8 != -1)
	{
	}
	if (Global_1572887->f_405.f_9 != -1)
	{
	}
	if (Global_1572887->f_405.f_11 != 0)
	{
	}
}

int func_219()
{
	if (func_273())
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0, int iParam1, bool bParam2)
{
	if (!_databinding_is_data_id_valid(&(uParam0->f_198.f_2[func_274(iParam1, 1)])))
	{
		return 0;
	}
	if (_databinding_read_data_bool(&(uParam0->f_198.f_2[func_274(iParam1, 1)])) == bParam2)
	{
		return 0;
	}
	_databinding_write_data_bool(&(uParam0->f_198.f_2[func_274(iParam1, 1)]), bParam2);
	return 1;
}

int func_221()
{
	if (func_275())
	{
		return 1;
	}
	if (_0x068332d20cb6f897())
	{
		return 1;
	}
	return 0;
}

void func_222(var uParam0)
{
	switch (func_276())
	{
		case 0:
			func_277(uParam0, 905305452);
			if (func_278())
			{
				func_279(uParam0, -2094745301);
			}
			else
			{
				func_279(uParam0, 242987266);
			}
			break;
		case 2:
			func_277(uParam0, 905305452);
			func_279(uParam0, -107182257);
			break;
		case 3:
			func_277(uParam0, 905305452);
			func_279(uParam0, -952890825);
			break;
		case 1:
			func_277(uParam0, 2062860436);
			func_279(uParam0, 1010851584);
			break;
	}
	if (func_278())
	{
		func_280(uParam0, 1715681724);
	}
	func_281(uParam0, func_278());
	func_283(uParam0, func_282(0));
}

bool func_223(var uParam0)
{
	uParam0->f_198[0] = _0xd7db94ab78e8ebe4("", 1395437865);
	uParam0->f_198.f_2[0] = _databinding_add_data_bool_by_hash(&(uParam0->f_198[0]), 1145633164, func_219());
	uParam0->f_198.f_2[1] = _databinding_add_data_bool_by_hash(&(uParam0->f_198[0]), -359624034, func_221());
	return true;
}

void func_224(var uParam0)
{
	uParam0->f_203 = _databinding_add_data_hash(uParam0->f_187, "progressRewardsTileTexture", 0);
	uParam0->f_203.f_1 = _databinding_add_data_hash(uParam0->f_187, "progressRewardsTileTextureDictionary", 0);
	uParam0->f_203.f_2 = _databinding_add_data_hash(uParam0->f_187, "progressRewardsTileOverlayTexture", 0);
	uParam0->f_203.f_3 = _databinding_add_data_hash(uParam0->f_187, "progressRewardsTileOverlayTextureDictionary", 0);
	uParam0->f_203.f_4 = _databinding_add_data_bool(uParam0->f_187, "progressRewardsTileHasVip", 0);
	uParam0->f_203.f_5 = _databinding_add_data_string(uParam0->f_187, "toolTip", "");
	uParam0->f_203.f_6 = _databinding_add_data_string(uParam0->f_187, "progressRewardsRankText", "");
}

void func_225(var uParam0)
{
	_databinding_remove_data_entry(&(uParam0->f_198[0]));
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_227(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_284(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_229(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_230(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_231(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_232()
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
	if (!func_5(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_233(var uParam0)
{
	func_285(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_83() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_234(var uParam0, var uParam1)
{
	func_286(&(Global_1904087->f_24));
	if (!func_262(uParam0, uParam1, &(Global_1904087->f_24), 0))
	{
		return false;
	}
	return true;
}

bool func_235(var uParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_263(uParam0, uParam1, &Var0, 0))
	{
		return false;
	}
	return true;
}

bool func_236(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

char* func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pm_player_mp";
		case 1:
			return "pm_player_mp";
		case 2:
			return "pm_player_mp";
		case 3:
			return "pm_player_mp";
		case 4:
			return "pm_player_mp";
		case 5:
			return "pausemenu_player";
		default:
			break;
	}
	return "";
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

float func_239(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_240(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

struct<4> func_242(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	else if (iParam1 >= 4)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_243(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_244()
{
	return 0;
}

bool func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_246()
{
	return 1;
}

bool func_247(var uParam0, int iParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[*iParam1], uParam0))
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_248(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_249(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_287(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_250()
{
	return 5;
}

int func_251()
{
	return 6;
}

int func_252(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_288());
	return iVar0;
}

int func_253(var uParam0, int iParam1)
{
	if (func_289(uParam0, -2147483648))
	{
		*iParam1 = 4;
	}
	else if (func_289(uParam0, 1073741824))
	{
		*iParam1 = 3;
	}
	else if (func_289(uParam0, 536870912))
	{
		*iParam1 = 2;
	}
	else if (func_289(uParam0, 268435456))
	{
		*iParam1 = 1;
	}
	else if (func_289(uParam0, 134217728))
	{
		*iParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_254(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_287(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

char* func_255(int iParam0)
{
	switch (iParam0)
	{
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "HORSE_CLASS_MULTI";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "HORSE_CLASS_MULTI";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "HORSE_CLASS_MULTI";
		case -1365665739:
		case -757978903:
		case 981469777:
		case 1064693514:
		case 1592694494:
		case 1909854428:
			return "HORSE_CLASS_MULTI";
		case -1722101672:
		case -189605757:
		case 3032834:
		case 381495209:
		case 863391233:
		case 1577022605:
			return "HORSE_CLASS_MULTI";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "HORSE_CLASS_MULTI";
		case -1698261864:
		case -1540355548:
		case -670301166:
		case -601560591:
		case -370362766:
		case 885568364:
			return "HORSE_CLASS_MULTI";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

float func_256(struct<4> Param0, int iParam4)
{
	fVar0 = 0f;
	if (iParam4 == 0 && func_128(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 0.25f);
	}
	fVar0 = (fVar0 - func_290(iParam4));
	return fVar0;
}

char* func_257(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_258(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	Var0.f_9 = -1591664384;
	if (func_291(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_259(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_215(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_206(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

char* func_260(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_261()
{
	return Global_1572887->f_13;
}

bool func_262(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_148(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_292(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_263(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_293(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_294(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_264(var uParam0)
{
	*uParam0 = { func_83() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0] = 100;
		uParam0->f_29[iVar0]->f_1 = 0f;
		uParam0->f_29[iVar0]->f_2 = 0f;
		uParam0->f_29[iVar0]->f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0] = 50;
				break;
		}
		uParam0->f_38[iVar0]->f_1 = 0f;
		uParam0->f_38[iVar0]->f_2 = 0f;
		uParam0->f_38[iVar0]->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_265(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_295(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_266(int iParam0)
{
	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_267(int iParam0)
{
	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

struct<4> func_268(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_206(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_259(1328661203, func_83(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_259(1328661203, func_83(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_259(1328661203, func_83(), -1591664384, bParam0);
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_270(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case -88424047:
			iVar0 = 1;
			break;
		case 1651967528:
			iVar0 = 2;
			break;
		case -84928653:
			iVar0 = 3;
			break;
		case 1306134188:
			iVar0 = 4;
			break;
		case -1357178860:
			iVar0 = 5;
			break;
		case 133180145:
			iVar0 = 6;
			break;
		case 655115506:
			iVar0 = 7;
			break;
		case 1737952409:
			iVar0 = 8;
			break;
		case 2137301164:
			iVar0 = 9;
			break;
		case -110687166:
			iVar0 = 10;
			break;
		case -2030542394:
			iVar0 = 11;
			break;
		case -11301188:
			iVar0 = 12;
			break;
		case -1312679892:
			iVar0 = 13;
			break;
		case -61119924:
			iVar0 = 14;
			break;
		case 2134863183:
			iVar0 = 15;
			break;
		case -159568751:
			iVar0 = 16;
			break;
		case -1808811965:
			iVar0 = 17;
			break;
		case -1854341522:
			iVar0 = 18;
			break;
		case 1464020707:
			iVar0 = 19;
			break;
		case 1098974047:
			iVar0 = 20;
			break;
		case 868706284:
			iVar0 = 21;
			break;
		case 313296873:
			iVar0 = 22;
			break;
		case 541270806:
			iVar0 = 23;
			break;
		case 922800273:
			iVar0 = 24;
			break;
		case 1298496858:
			iVar0 = 25;
			break;
		case 1699163417:
			iVar0 = 26;
			break;
		case 864110990:
			iVar0 = 27;
			break;
		case -2127829790:
			iVar0 = 28;
			break;
		case -575777117:
			iVar0 = 29;
			break;
		case -1879562593:
			iVar0 = 30;
			break;
		case 1890312850:
			iVar0 = 31;
			break;
		case 1735278055:
			iVar0 = 32;
			break;
		case -1480790826:
			iVar0 = 33;
			break;
	}
	return iVar0;
}

bool func_271(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_272(int iParam0)
{
	return func_236(&(Global_1572887->f_405.f_1), iParam0, 3);
}

bool func_273()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = iVar1;
		if (!func_296(iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return 1;
		case 1145633164:
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

bool func_275()
{
	iVar1 = _0x97a3646645727f42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!_0x82fa24c3d3fcd9b7(iVar1, iVar16, &Var2))
		{
		}
		else if (!func_248(&Var2))
		{
		}
		else if (!func_297(Var2.f_9))
		{
		}
		else if (!func_298(&Var2))
		{
		}
		else
		{
			_0x42a2f33a1942e865(iVar1);
			return true;
		}
		iVar16++;
	}
	_0x42a2f33a1942e865(iVar1);
	return false;
}

int func_276()
{
	if (network_does_tunable_exist(-475019843, func_299(1656173034)) && network_access_tunable_bool(-475019843, func_299(1656173034)))
	{
		return 0;
	}
	else if (network_does_tunable_exist(-475019843, func_299(-537144215)) && network_access_tunable_bool(-475019843, func_299(-537144215)))
	{
		return 2;
	}
	else if (network_does_tunable_exist(-475019843, func_299(1629055295)) && network_access_tunable_bool(-475019843, func_299(1629055295)))
	{
		return 1;
	}
	else if (network_does_tunable_exist(-475019843, func_299(965428371)) && network_access_tunable_bool(-475019843, func_299(965428371)))
	{
		return 3;
	}
	return 1;
}

void func_277(var uParam0, int iParam1)
{
	Var0 = { func_300(iParam1) };
	func_301(uParam0, Var0, Var0.f_1);
}

bool func_278()
{
	iVar0 = func_302();
	if (!func_303(iVar0))
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(iVar0))
	{
		return false;
	}
	return true;
}

void func_279(var uParam0, int iParam1)
{
	func_305(uParam0, func_304(iParam1));
}

void func_280(var uParam0, int iParam1)
{
	Var0 = { func_300(iParam1) };
	func_306(uParam0, Var0, Var0.f_1);
}

void func_281(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_203.f_4, bParam1);
}

int func_282(int iParam0)
{
	return func_308(func_307(iParam0));
}

void func_283(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0->f_203.f_6, _create_var_string(2, func_309(-270980942), sParam1));
}

bool func_284(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

bool func_287(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_206(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_295(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_288()
{
	return 4;
}

bool func_289(var uParam0, int iParam1)
{
	return func_149(&(uParam0->f_20), iParam1);
}

float func_290(int iParam0)
{
	uVar0 = &Global_1291734->f_1423.f_3[iParam0];
	return uVar0;
}

bool func_291(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_206(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_292(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_19(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_293(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_206(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_294(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_295(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_206(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0)
{
	iVar0 = func_310(iParam0);
	iVar1 = func_311(iVar0);
	if (!_unlock_is_new(iVar1))
	{
		return false;
	}
	if (func_312(iParam0))
	{
		return false;
	}
	return true;
}

bool func_297(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_298(var uParam0)
{
	if (!func_248(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_265(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_215(Var0.f_4, 0))
	{
		return false;
	}
	return func_313(Var0.f_4);
}

int func_299(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 15;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_316(iParam0);
	}
	return uVar5;
}

struct<2> func_300(int iParam0)
{
	Var2 = func_314();
	Var2.f_3 = func_315(0);
	Var2.f_4 = iParam0;
	Var2.f_2 = 11;
	if (!_datafile_get_hash(&Var0, &Var2))
	{
		return func_317(iParam0);
	}
	Var2.f_2 = 13;
	if (!_datafile_get_hash(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

void func_301(var uParam0, int iParam1, int iParam2)
{
	_databinding_write_data_hash_string(uParam0->f_203, iParam1);
	_databinding_write_data_hash_string(uParam0->f_203.f_1, iParam2);
}

int func_302()
{
	return func_318(-1052513930);
}

bool func_303(int iParam0)
{
	return iParam0 != 0;
}

char* func_304(int iParam0)
{
	return _create_var_string(2, func_309(iParam0));
}

void func_305(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0->f_203.f_5, sParam1);
}

void func_306(var uParam0, int iParam1, int iParam2)
{
	_databinding_write_data_hash_string(uParam0->f_203.f_2, iParam1);
	_databinding_write_data_hash_string(uParam0->f_203.f_3, iParam2);
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_319(Global_1293346->f_2982);
		case 1:
			return func_319(Global_1293346->f_2983);
		default:
			break;
	}
	return -1;
}

int func_308(int iParam0)
{
	if (!func_320(iParam0))
	{
		return 0;
	}
	iVar0 = func_321(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_322(iParam0, 1);
	}
	return 0;
}

var func_309(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 9;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return func_323(iParam0);
	}
	return func_324(Var5);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12;
		case 3:
			return 7;
		case 2:
			return 11;
		case 1:
			return 15;
		case 0:
			return 18;
		default:
			break;
	}
	return -1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

bool func_312(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!_unlock_is_unlocked(-1348352077))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_313(var uParam0)
{
	return _unlock_is_new(func_325(uParam0));
}

var func_314()
{
	return Global_1071686->f_28448[52]->f_3;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1293346->f_2982;
		case 1:
			return Global_1293346->f_2983;
		default:
			break;
	}
	return 0;
}

int func_316(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 14;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

struct<2> func_317(int iParam0)
{
	Var2 = func_314();
	Var2.f_3 = iParam0;
	Var2.f_2 = 10;
	if (!_datafile_get_hash(&Var0, &Var2))
	{
		return Var0;
	}
	Var2.f_2 = 12;
	if (!_datafile_get_hash(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

int func_318(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 23;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_326(iParam0);
	}
	return uVar5;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case -697100746:
			return 0;
		case -999519443:
			return 7;
		case 128291088:
			return 12;
		case -1399517481:
			return 11;
		case 705255263:
			return 13;
		case -471215553:
			return 14;
		case 1371028520:
			return 15;
		case 1479488426:
			return 16;
		case -170363364:
			return 17;
		case -296143963:
			return 18;
		case -575193412:
			return 19;
		case 1364208910:
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_320(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_321(int iParam0)
{
	if (!func_320(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_322(int iParam0, bool bParam1)
{
	if (!func_320(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_311(iParam0);
		if (func_215(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_327(255);
			}
			else
			{
				iVar1 = func_328(iVar0, func_268(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_329(iParam0);
		if (func_215(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_328(iVar0, func_268(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_323(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 8;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return "";
	}
	return func_324(Var5);
}

var func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

var func_325(var uParam0)
{
	return uParam0;
}

int func_326(int iParam0)
{
	Var0 = func_314();
	Var0.f_2 = 22;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_327(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_328(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_330(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_259(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_206(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_206(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

