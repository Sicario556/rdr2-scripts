void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_193 = ScriptParam_0;
	Local_194.f_1 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&Local_194);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_1(&Local_194);
	}
	while (func_2())
	{
		switch (iLocal_192)
		{
			case 0:
				if (func_3(&Local_194))
				{
					iLocal_192 = 1;
					if (Local_194.f_4 != -1)
					{
					}
					else
					{
						Local_194.f_4 = func_4(&Local_194);
					}
				}
				break;
			case 1:
				if (func_5(&Local_194))
				{
					func_6(&Local_194);
				}
				func_7(&Local_194);
				func_8(&Local_194);
				break;
		}
		wait(0);
	}
	func_1(&Local_194);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	_0xe7282390542f570d(uLocal_193);
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
	if (Local_194 == 0)
	{
		iVar0 = _get_scenario_point_type(uParam0->f_1);
		Local_194 = func_10(iVar0);
		return false;
	}
	if (func_11(Local_194, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	func_12(uParam0);
	return true;
}

int func_4(var uParam0)
{
	iVar2 = -1;
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > func_14(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_16(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (func_20(uParam0))
				{
					func_19(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (func_22(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
			func_19(uParam0, 1);
			break;
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
				if ((((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 3);
				}
				else
				{
					func_19(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				set_pad_shake(0, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				set_pad_shake(0, 150, 100);
				func_19(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 0))
			{
				func_28(uParam0);
				if ((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 6);
				}
				else
				{
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
					if (func_33(uParam0->f_6.f_8))
					{
						func_34(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						set_gameplay_coord_hint(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (is_gameplay_hint_active())
					{
						stop_gameplay_hint(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				set_gameplay_coord_hint(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				func_42(uParam0);
			}
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (is_control_pressed(0, -719620017))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (is_gameplay_hint_active())
					{
						stop_gameplay_hint(false);
					}
				}
				if (func_39(uParam0->f_3, 2))
				{
					func_43(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					func_44(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && _does_volume_exist(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216, 0);
				func_40(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	switch (Local_14)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
			{
				func_43(&(uParam0->f_3), 1);
			}
			if (func_49(func_48()))
			{
				func_50(&Local_14, 6);
				return;
			}
			if (!func_51(uParam0))
			{
				return;
			}
			Local_14.f_135 = "HRM1AUD";
			_0xf008e0ba1fe1d644(4);
			if (_does_scenario_point_exist(uParam0->f_1))
			{
				vVar0 = { _get_scenario_point_coords(uParam0->f_1, true) };
			}
			set_ambient_zone_state(func_52(uParam0), true, true);
			_0x3743ce6948194349(func_52(uParam0), vVar0, 0f);
			if (func_53(843137708))
			{
				func_54(843137708, 0, 0f, 0, 0, 0, 1, 0);
			}
			if (func_39(Global_40.f_8863.f_155, 256))
			{
				if (!func_39(uParam0->f_3, 1))
				{
					func_40(&(uParam0->f_3), 1);
				}
				func_50(&Local_14, 5);
			}
			else
			{
				func_50(&Local_14, 1);
			}
			break;
		case 1:
			if (_0x5c16855277819bbf() != 4)
			{
				return;
			}
			if (!func_55(&Local_14))
			{
				return;
			}
			func_50(&Local_14, 2);
			break;
		case 2:
			if (!func_58(&(Local_14.f_28), &(Local_14.f_29), func_56(), func_57(0), 1, 64))
			{
				return;
			}
			if (!func_59(&Local_14))
			{
				return;
			}
			if (!is_string_null_or_empty(Local_14.f_135))
			{
				if (_does_text_database_exist(Local_14.f_135))
				{
					_text_database_request(Local_14.f_135);
				}
			}
			func_60(&Local_14);
			if (!is_entity_dead(&(Local_14.f_10[0])))
			{
				stop_ped_speaking(&(Local_14.f_10[0]), true);
				func_62(&(Local_14.f_37), &(Local_14.f_10[0]), func_61(), 0);
				set_blocking_of_non_temporary_events(&(Local_14.f_10[0]), true);
			}
			_0x72d4cb5db927009c(1845102363, -1, 0);
			func_50(&Local_14, 3);
			break;
		case 3:
			if (_does_anim_scene_exist(Local_14.f_28))
			{
				set_anim_scene_entity(Local_14.f_28, func_63(), &(Local_14.f_10[0]), 0);
				start_anim_scene(Local_14.f_28);
			}
			func_64(&Local_14);
			func_50(&Local_14, 4);
			break;
		case 4:
			if (!func_51(uParam0))
			{
				func_50(&Local_14, 6);
			}
			if (!func_39(Local_14.f_176, 64))
			{
				if (func_65(&Local_14) || func_66(Global_35, &(Local_14.f_20[1]), 1, 0))
				{
					func_40(&(Local_14.f_176), 64);
				}
			}
			if (!func_39(Local_14.f_176, 64) && !func_39(Local_14.f_176, 32))
			{
				func_68(Global_35, func_67(8), 0, 1112014848, 30f, 25f, 1084227584, 1, 1, 1, 0);
			}
			func_69(&Local_14);
			func_70(&Local_14);
			if (func_71(&Local_14) <= 0)
			{
				func_40(&(uParam0->f_3), 1);
				func_50(&Local_14, 5);
			}
			break;
		case 5:
			if (func_11(*uParam0, 16))
			{
				func_72(uParam0);
				func_50(&Local_14, 6);
			}
			break;
		case 6:
			break;
	}
}

void func_9(var uParam0)
{
	set_ambient_zone_state(func_52(uParam0), false, true);
	remove_shocking_event(Local_14.f_173);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_73(Local_14.f_10[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_74(Local_14.f_20[iVar0]);
		iVar0++;
	}
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1208255499:
			return -261997819;
		case 1329911409:
			return 870958936;
		case -285871200:
			return 677950956;
		case 457229797:
			return -35775921;
		case 1211791851:
			return -1084929085;
		case 944017471:
			return 2135153015;
		case 1665997921:
			return 1347913620;
		case -2085458327:
			return -599506500;
		case 2135478933:
			return -1568839185;
		case 2057536374:
			return 1937333853;
		case 1366101372:
			return -321841939;
		case 284604988:
			return 1034793488;
		case 615465554:
			return -2009137002;
		case 550135642:
			return -1646022773;
		case 1241103201:
			return -1787770845;
		case 1115410643:
			return -1761578407;
		case 1602500054:
			return 404434344;
		case 1247293257:
			return 503180747;
		case 2124474718:
			return 308500632;
		case 2085223846:
			return 74587361;
		case 918603353:
			return -709811179;
		case 1443601258:
			return 118535038;
		case 2015617886:
			return -1609238411;
		case 1920390250:
			return -1614148516;
		case 1292765231:
			return 173549940;
		case -238317386:
			return 1424723727;
		case 816253701:
			return -1308658310;
		case -1452428628:
			return -1761189332;
		case -796563359:
			return -1420566543;
		case 1580303291:
			return -1208846034;
		case 1828659542:
			return 1048086072;
		case 2126824673:
			return 939555152;
		case 1953753789:
			return -161804536;
		case 673669550:
			return -30872859;
		case 1801467173:
			return 1519228573;
		case 1193272637:
			return -1505275983;
		case 376902028:
			return -890175011;
		case 1290045011:
			return 733338689;
		case 402062501:
			return -986176781;
		case 1071768797:
			return -1824429070;
		case 858952896:
			return 1734766691;
		case 2006959770:
			return -920971071;
		case 385483619:
			return -979575591;
		case 656484143:
			return 464413478;
		case 313051664:
			return 657666087;
		case 795896456:
			return -715636193;
		case 1917865597:
			return -607940493;
		case 597525083:
			return 425000526;
		case 1391618133:
			return -544327665;
		case 984162035:
			return -1053108445;
		case 569502820:
			return 230001763;
		case 713309702:
			return 2000209669;
		case 1665886065:
			return -1859023693;
		case 1326945204:
			return 1861313914;
		case -31708551:
			return -2108030724;
		case 902935343:
			return 58958195;
		case 1224129984:
			return -1891628345;
		case 899090818:
			return 1464664327;
		case 1055001530:
			return -654238687;
		case 1762028978:
			return 1986618633;
		case 1962698324:
			return 918206817;
		case 655415262:
			return -2008558277;
		case 602269758:
			return -834293086;
		case 190237998:
			return 1335921989;
		case 1755633483:
			return -739986731;
		case 1823800245:
			return -148407339;
		case 501995673:
			return -1960242214;
		case 339892059:
			return 1187689415;
		case 668685328:
			return 1673499939;
		case 393469536:
			return -1177787273;
		case 899984418:
			return 1342653896;
		case 870395400:
			return -1714262909;
		case 1675065699:
			return -1283611369;
		case 433005472:
			return -415839138;
		case 430219797:
			return -763376358;
		case 2017758854:
			return 1801731633;
		case 1550351677:
			return 1490223565;
		case 1324260340:
			return -1427565340;
		case 1640554197:
			return -232974724;
		case -2145018399:
			return -1272862985;
		case 158172139:
			return -1061274876;
		case 1633229561:
			return 221420861;
		case 201911354:
			return 1535254161;
		case 16632229:
			return 683269210;
		case 1681309457:
			return 373034311;
		case -108928342:
			return 2072029413;
		case -1033847736:
			return -1427565340;
		case -262561469:
			return -499529359;
		case -1497005692:
			return -780455182;
		case -1563294374:
			return -2019711818;
		case -990094658:
			return -1636964661;
		case -147728984:
			return 1154568952;
		case -357210169:
			return 2134589549;
		case 51085445:
			return -1109016944;
		case -912234551:
			return 1124200691;
		case -1823178954:
			return -357364973;
		case -1049130960:
			return -641229542;
		case -25476944:
			return -777592153;
		case -44323190:
			return -1859413640;
		case -582384899:
			return -1686810506;
		case -1771237190:
			return 2072069278;
		case -289116185:
			return 1120968795;
		case -424836434:
			return -409986722;
		case -1987709625:
			return -1882503209;
		case -628899594:
			return 1431862613;
		case -842594626:
			return -657632;
		case -232587958:
			return -1958832660;
		case -768523571:
			return -1481450947;
		case -753681029:
			return 1982045664;
		case -1893254403:
			return -849582265;
		case -1437877958:
			return 149709049;
		case -537565063:
			return 1284679164;
		case -1736298289:
			return -1923503631;
		case -821795036:
			return -1144800837;
		case -1520281639:
			return -1887999095;
		case -826079709:
			return -1457751321;
		case -695748117:
			return 1187917501;
		case -2084592674:
			return 1091556515;
		case -1605488611:
			return 1351526287;
		case -1847100017:
			return -1300082860;
		case -1928592714:
			return 397377585;
		case -1554719581:
			return -777150535;
		case -1512709755:
			return -919236330;
		case -246112144:
			return -968854939;
		case -1386344008:
			return 1519472817;
		case -854999443:
			return 247563739;
		case -1708277338:
			return -1848895400;
		case -109126822:
			return -2060865802;
		case -1965501170:
			return -1841331114;
		case -537909116:
			return 949011950;
		case -1354885594:
			return 1505050944;
		case -1053011105:
			return -1243267511;
		case -479194009:
			return 233600584;
		case -1754824674:
			return 429544447;
		case -2014047549:
			return 1833243216;
		case -2016277239:
			return -1494823099;
		case -981693493:
			return 921081956;
		case -88450435:
			return 513110082;
		case -446987974:
			return -490142739;
		case -906256657:
			return 330993088;
		case -1532808475:
			return 435290930;
		case -1093245144:
			return -1287911066;
		case -1566714772:
			return -1240932004;
		case -1298970333:
			return -1829339703;
		default:
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_76(iParam0, 1)] && iParam1) != 0;
}

void func_12(var uParam0)
{
	if (func_45(*uParam0))
	{
		if (!_does_volume_exist(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case 683269210:
					vVar0 = { -5576.82f, -2583.934f, -9.541f };
					vVar3 = { 0f, 0f, 30.534f };
					vVar6 = { 13.524f, 10.157f, 15.906f };
					sVar9 = "DLAM_Attack";
					break;
				case 2072029413:
					vVar0 = { 808.518f, 2299.105f, 250.32f };
					vVar3 = { 0f, 0f, 21.51f };
					vVar6 = { 5f, 4f, 9f };
					sVar9 = "DLAT_Attack";
					break;
				case -849582265:
					vVar0 = { -2587.832f, -81.85f, 166.262f };
					vVar3 = { 0f, 0f, 9.056f };
					vVar6 = { 52.076f, 56.679f, 16.103f };
					sVar9 = "DLIB_Attack";
					break;
				case 1861313914:
					vVar0 = { 894.559f, -1969.353f, 43.7f };
					vVar3 = { 0f, 0f, 51.997f };
					vVar6 = { 4.5f, 4.5f, 6f };
					sVar9 = "DLBS_Attack";
					break;
				case -641229542:
					vVar0 = { 1750.836f, -2091.653f, 40.941f };
					vVar3 = { 0f, 0f, -30.078f };
					vVar6 = { 2.215f, 3.182f, 2.394f };
					sVar9 = "DLRC_Attack";
					break;
				case -499529359:
					vVar0 = { 2285.546f, 97.363f, 49.583f };
					vVar3 = { 0f, 0f, -30.998f };
					vVar6 = { 7.132f, 4.645f, 4.596f };
					sVar9 = "DLDCG_Attack";
					break;
				case -780455182:
					vVar0 = { -988.307f, 1692.387f, 243.864f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 4.673f, 3.887f, 3.06f };
					sVar9 = "DLDG_Attack";
					break;
				case 429544447:
					vVar0 = { -6314.771f, -3467f, -11.247f };
					vVar3 = { 0f, 0f, 32.675f };
					vVar6 = { 2.852f, 3.164f, 3.06f };
					sVar9 = "DLJM_Attack";
					break;
				case 230001763:
					vVar0 = { 2133.283f, 145.452f, 75.745f };
					vVar3 = { 0f, 0f, 58.303f };
					vVar6 = { 17.167f, 17.176f, 9.904f };
					sVar9 = "DLOG_Attack";
					break;
				case 921081956:
					vVar0 = { 2415.271f, -738.691f, 41f };
					vVar3 = { 0f, 0f, 89.245f };
					vVar6 = { 6.662f, 6.841f, 12.231f };
					sVar9 = "DLORC_Attack";
					break;
				case 949011950:
					vVar0 = { -2341.024f, -2180.015f, 70f };
					vVar3 = { 0f, 0f, 123.618f };
					vVar6 = { 7.322f, 10.134f, 10.231f };
					sVar9 = "DLOH_Attack";
					break;
				case -739986731:
					vVar0 = { -2905.353f, -254.294f, 186.571f };
					vVar3 = { 0f, 0f, 129.763f };
					vVar6 = { 7.64f, 7.534f, 4f };
					sVar9 = "DLPR_Attack";
					break;
				case -657632:
					vVar0 = { 2684.651f, 71.256f, 59f };
					vVar3 = { 0f, 0f, 111.493f };
					vVar6 = { 4.343f, 3.084f, 3.303f };
					sVar9 = "DLRG_Attack";
					break;
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case 404434344:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case -1891628345:
					vVar0 = { -2694.572f, -1500.398f, 150f };
					vVar3 = { 0f, 0f, 1.841f };
					vVar6 = { 16.663f, 12.967f, 11.141f };
					sVar9 = "DLUW_Attack";
					break;
				case -1859413640:
					vVar0 = { 2195.32f, -554.613f, 40.995f };
					vVar3 = { 0f, 0f, -74.605f };
					vVar6 = { 1.691f, 1.755f, 2.318f };
					sVar9 = "DLSW_Attack";
					break;
			}
			uParam0->f_2 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return func_77(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_78(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_79(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_78(uParam0, iParam1);
		case -1272862985:
			return func_78(uParam0, iParam1);
		case -1243267511:
			return func_78(uParam0, iParam1);
		case -321841939:
			return func_78(uParam0, iParam1);
		case -890175011:
			return func_78(uParam0, iParam1);
		case 677950956:
			return func_78(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_15()
{
	if (func_80() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_81((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_17(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

void func_18(var uParam0)
{
	if (func_33(uParam0->f_6.f_8))
	{
		func_82(&(uParam0->f_6.f_8), 1, 1);
	}
	func_25(&(uParam0->f_6.f_5));
	if (func_39(uParam0->f_3, 2))
	{
		func_43(&(uParam0->f_3), 2);
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_20(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_152, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_152, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_152, 16384))
				{
					return true;
				}
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2048))
				{
					return true;
				}
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 8388608))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 16777216))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 512))
				{
					return true;
				}
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 2097152))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_153, 4194304))
				{
					return true;
				}
			}
			break;
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_154, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_154, 1024))
				{
					return true;
				}
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_148, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_148, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_148, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_148, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (func_39(Global_40.f_8863.f_148, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (func_39(Global_40.f_8863.f_148, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (func_39(Global_40.f_8863.f_148, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (func_39(Global_40.f_8863.f_148, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (func_39(Global_40.f_8863.f_148, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (func_39(Global_40.f_8863.f_148, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (func_39(Global_40.f_8863.f_148, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (func_39(Global_40.f_8863.f_148, 1048576))
				{
					return true;
				}
			}
			break;
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 32768))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 2097152))
				{
					return true;
				}
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 2097152))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_78(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_83(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			func_83(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			func_83(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			func_83(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				func_83(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				func_83(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

bool func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_24(var uParam0)
{
	return func_84(*uParam0, 1);
}

void func_25(var uParam0)
{
	func_85(uParam0, 0f);
}

int func_26(var uParam0)
{
	if (!func_24(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_86(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_87() - round((uParam0->f_1 * 1000f)));
}

bool func_27(var uParam0, bool bParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
		{
			return true;
		}
		if (func_88(uParam0))
		{
			return true;
		}
		if (!func_89(uParam0, 0))
		{
			return true;
		}
		if (is_ped_active_in_scenario(Global_35, 1) || is_ped_using_any_scenario(Global_35))
		{
			return true;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!_does_volume_exist(uParam0->f_6.f_9))
			{
				return false;
			}
			if (!is_entity_in_volume(Global_35, uParam0->f_6.f_9, true, 0) || !func_90(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6.f_1 + 0.5f) || !func_90(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_88(uParam0))
		{
			return false;
		}
		if (!func_89(uParam0, 0))
		{
			return false;
		}
		if (is_ped_active_in_scenario(Global_35, 1) || is_ped_using_any_scenario(Global_35))
		{
			return false;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!_does_volume_exist(uParam0->f_6.f_9))
			{
				return false;
			}
			if (is_entity_in_volume(Global_35, uParam0->f_6.f_9, true, 0) && func_90(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6.f_1 && func_90(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	return false;
}

void func_28(var uParam0)
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_49(*uParam0))
			{
				uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_91("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_34(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = func_91("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
		}
		func_92(uParam0->f_6.f_8, 13, 1, 1);
		func_93(uParam0->f_6.f_8);
	}
}

char* func_29(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (func_49(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (func_20(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (func_16(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!func_33(iParam1))
	{
		return;
	}
	iVar0 = func_94(iParam1);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		if ((!*uParam0 == -890175011 && !*uParam0 == 677950956) && !*uParam0 == -1308658310)
		{
			if (bParam3)
			{
				func_40(&uVar1, 12);
			}
			else
			{
				func_40(&uVar1, 8);
			}
		}
		if ((*uParam0 == 1861313914 || *uParam0 == -1308658310) || *uParam0 == -415839138)
		{
			if (func_11(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		_uiprompt_set_ambient_group_this_frame(Global_35, 1f, iVar2, 1, 1710353528, sParam2, uVar1);
	}
}

bool func_31(var uParam0)
{
	if (func_95(uParam0->f_6.f_8, 1))
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_76(iParam0, 1)] = (Global_40.f_8863[func_76(iParam0, 1)] || iParam1);
}

bool func_33(int iParam0)
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

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	func_96(iVar0, bParam1);
}

void func_35(var uParam0)
{
	if (func_80() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (func_97(uParam0->f_4) != 0)
		{
			if (!_map_is_discovery_active(uParam0->f_4))
			{
				_0xd8c7162ab2e2af45(func_97(uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_98(*uParam0, uParam0->f_4) != 0)
		{
			if (!_map_is_discovery_active(func_98(*uParam0, uParam0->f_4)))
			{
				_0xd8c7162ab2e2af45(func_98(*uParam0, uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
		func_99(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (func_100() < (20 - 1))
			{
				return;
			}
		}
		else if (!func_101())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = func_103(*uParam0, func_102(), uParam0->f_4);
	}
	else
	{
		iVar0 = func_104(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			func_105(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (func_106() == (5 - 1))
				{
					if (func_102())
					{
						func_105(-533137209, 0);
						iVar0 = -533137209;
					}
					else
					{
						func_105(642612355, 0);
						iVar0 = 642612355;
					}
				}
			}
		}
		if (func_107())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				*Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_108(&Global_0, 8);
	}
	if (!func_109() || func_80() != -1)
	{
		return;
	}
	func_108(&Global_0, 1);
}

float func_38(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return 0f;
	}
	iVar0 = func_94(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_40(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_78(uParam0, uParam0->f_4) };
}

void func_42(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0x66f9eb44342bb4c5(Global_35, &(uParam0->f_6.f_10));
	}
}

void func_43(var uParam0, int iParam1)
{
	func_111(uParam0, iParam1);
}

void func_44(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0x0eabf182fbb63d72(Global_35, 6, 0);
	}
}

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	if (_does_volume_exist(*uParam0))
	{
		func_112(*uParam0, &Var0);
		if (_get_entity_inside_explosion_area(-1, Var0, Var0.f_3, Var0.f_6) == func_113(Global_35))
		{
			return true;
		}
		else if (is_bullet_in_angled_area(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (get_ped_last_weapon_impact_coord(Global_35, &vVar7))
			{
				if (is_point_in_angled_area(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_80() != -1)
	{
		return;
	}
	if ((Global_36616 && func_114(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_115(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_116(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_117(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_116(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_48()
{
	return 1982045664;
}

bool func_49(int iParam0)
{
	return func_11(iParam0, 2);
}

void func_50(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_51(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!func_118() && !func_119())
			{
				if (!func_118())
				{
				}
				if (!func_119())
				{
				}
				return false;
			}
			else if (func_120(77))
			{
				return false;
			}
			else if (func_121() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_118() && !func_119())
				{
					if (!func_118())
					{
					}
					if (!func_119())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_122(8924991) && !func_122(665676602))
				{
					if (!func_122(8924991))
					{
					}
					if (!func_122(665676602))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_122(1488286867))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_122(651395116))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_122(-1241340344))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_122(409602249))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!func_16(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!func_16(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!func_16(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!func_16(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (func_123(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_123(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_123(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!&Global_40.f_11623[20] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_120(19) || func_123(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (func_120(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

char* func_52(var uParam0)
{
	switch (*uParam0)
	{
		case 221420861:
			return "AZ_Whispering_Trees_Discoverable";
		case 1535254161:
			return "AZ_scarlett_meadows_bulger_glade_battlefield_memories_01";
		case 1982045664:
			return "AZ_Disco_Hermit_Woman_Shack";
		default:
			break;
	}
	return "";
}

bool func_53(int iParam0)
{
	return iParam0 != 0;
}

void func_54(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_124(iParam0, 0, 0);
	if (func_125(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_126(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_127(iParam0, 1);
			}
			else
			{
				func_128(iParam0, 1);
			}
		}
		else
		{
			func_129(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_130())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_55(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (!func_134(iParam0->f_10[iVar0], func_131(iVar1), func_132(iVar1), func_133(iVar1), 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char[] func_56()
{
	return "script@ambient@discoverables@hermit_woman@main";
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 1:
			return "PBL_ACTION_01_F";
		case 2:
			return "PBL_ACTION_01_L";
		case 3:
			return "PBL_ACTION_01_R";
		case 4:
			return "PBL_ACTION_02_F";
		case 5:
			return "PBL_ACTION_02_L";
		case 6:
			return "PBL_ACTION_02_R";
		case 7:
			return "PBL_ATTK_01";
		case 8:
			return "PBL_ATTK_02";
		case 9:
			return "PBL_BRKOUT";
		case 10:
			return "PBL_DIA_01";
		case 11:
			return "PBL_DIA_02";
		case 12:
			return "PBL_DIA_03";
		default:
			break;
	}
	return "FAIL -- 1 HERMIT_WOMAN_PLAYLISTS : playlist was not added";
}

bool func_58(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		*uParam1 = 0;
		return true;
	}
	if (!*uParam1 && !_does_anim_scene_exist(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = _create_anim_scene(sParam2, iParam5, sParam3, false, true);
		}
		load_anim_scene(*uParam0);
		*uParam1 = 1;
	}
	return false;
}

bool func_59(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!_does_volume_exist(&(iParam0->f_20[iVar0])))
		{
			iVar1 = iVar0;
			Var2 = { func_135(iVar1) };
			iParam0->f_20[iVar0] = _create_volume_by_hash_with_custom_name(Var2, Var2.f_1, Var2.f_4, Var2.f_7, Var2.f_10);
		}
		iVar0++;
	}
	return true;
}

void func_60(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_136(&(iParam0->f_10), iVar0);
		iVar0++;
	}
}

char[] func_61()
{
	return "FUD1_WOMAN";
}

void func_62(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_137(uParam0, iParam1, sParam2))
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

char* func_63()
{
	return "hermit";
}

int func_64(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		func_138(iParam0, iVar0);
		iVar0++;
	}
	return 1;
}

bool func_65(int iParam0)
{
	func_139(&(iParam0->f_136));
	func_140(&(iParam0->f_136), 1);
	func_141(&(iParam0->f_136), 1);
	func_142(&(iParam0->f_136), 1);
	func_143(&(iParam0->f_136), 1);
	func_144(&(iParam0->f_136), 1);
	func_145(&(iParam0->f_136), 1);
	func_146(&(iParam0->f_136), 1);
	func_141(&(iParam0->f_136), 1);
	func_147(&(iParam0->f_136), 50f);
	func_148(&(iParam0->f_136), 100f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!is_entity_dead(&(iParam0->f_10[iVar0])))
		{
			if (func_149(&(iParam0->f_10[iVar0]), 0, &(iParam0->f_136), &(iParam0->f_164), 0, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
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

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2537.489f, 1168.337f, 224.0664f;
		case 1:
			return -2538.116f, 1169.531f, 224.2288f;
		case 2:
			return -2540.338f, 1164.952f, 223.3635f;
		case 3:
			return -2535.637f, 1164.962f, 223.6062f;
		case 4:
			return -2541.5f, 1171.283f, 224.5294f;
		case 5:
			return -2538.79f, 1172.847f, 224.7284f;
		case 6:
			return -2531.536f, 1166.387f, 224.0104f;
		case 7:
			return -2532.196f, 1169.136f, 224.2664f;
		case 8:
			return -2533.884f, 1171.963f, 224.8949f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_150(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_14(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_151() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_152(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_152(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

int func_69(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		switch (&iParam0->f_5[iVar0])
		{
			case 0:
				func_153(iParam0->f_5[iVar0], 1, iVar0);
				break;
			case 1:
				if (func_39(iParam0->f_176, 32) || func_39(iParam0->f_176, 64))
				{
					_0xf1c03a5352243a30(&(iParam0->f_10[iVar0]));
					func_153(iParam0->f_5[iVar0], 6, iVar0);
				}
				if (func_66(Global_35, &(iParam0->f_20[func_154(iVar0)]), 1, 0) && iParam0->f_30 == 0)
				{
					iParam0->f_3 = func_155(func_154(iVar0));
					Local_14.f_30 = iVar0;
					_0xa3a9299c4f2adb98(&(iParam0->f_10[iVar0]));
					task_stand_still(&(iParam0->f_10[iVar0]), -1);
					func_153(iParam0->f_5[iVar0], 2, iVar0);
				}
				break;
			case 2:
				if (func_156(&(iParam0->f_10[iVar0]), -982327190))
				{
					iVar1 = func_157(iVar0);
					func_158(iParam0->f_10[iVar0], 5, iVar1, 1065353216);
					func_153(iParam0->f_5[iVar0], 4, iVar0);
				}
				break;
			case 3:
				break;
			case 4:
				if (!func_39(iParam0->f_176, 16))
				{
					if (func_160(&(iParam0->f_10[iVar0]), get_hash_key(func_159(5))))
					{
						if (!func_24(&(iParam0->f_31)))
						{
							func_25(&(iParam0->f_31));
						}
						else if (func_161(&(iParam0->f_31)) > 3f)
						{
							func_40(&(iParam0->f_176), 16);
						}
					}
				}
				if (func_39(iParam0->f_176, 32) || func_39(iParam0->f_176, 64))
				{
					func_153(iParam0->f_5[iVar0], 6, iVar0);
				}
				break;
			case 5:
				break;
			case 6:
				if (!Local_14.f_175)
				{
					if (does_entity_exist(&(Local_14.f_10[iVar0])) && !is_entity_dead(&(Local_14.f_10[iVar0])))
					{
						Local_14.f_175 = 1;
						Local_14.f_173 = add_shocking_event_at_position(-998484125, get_entity_coords(&(Local_14.f_10[iVar0]), true, false), -1f, -1f, -1f, -1f, -1f, 3, 2);
						if (does_entity_exist(get_mount(Global_35)) && !is_entity_dead(get_mount(Global_35)))
						{
							_0x23bde06596a22cec(get_mount(Global_35), 1, 0.15f, &(Local_14.f_10[iVar0]));
						}
						_0x23bde06596a22cec(Global_35, 1, 1f, &(Local_14.f_10[iVar0]));
					}
				}
				func_162(iParam0, iVar0);
				func_153(iParam0->f_5[iVar0], 7, iVar0);
				break;
			case 7:
				if (is_entity_dead(&(iParam0->f_10[iVar0])) || !does_entity_exist(&(iParam0->f_10[iVar0])))
				{
					func_153(iParam0->f_5[iVar0], 8, iVar0);
				}
				break;
			case 8:
				break;
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	if ((iParam0->f_2 < 6 && iParam0->f_2 > 2) && func_39(iParam0->f_176, 64))
	{
		iParam0->f_2 = 6;
	}
	if (!func_163(&(iParam0->f_10[0]), 2))
	{
		func_40(&(Global_40.f_8863.f_155), 256);
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (iParam0->f_3 != 0)
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_164(iParam0->f_3));
				func_165(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_164(iParam0->f_3)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_164(iParam0->f_3));
			}
			if (func_39(iParam0->f_176, 16) || func_39(iParam0->f_176, 64))
			{
				if (_0x23e33cb9f4a3f547(iParam0->f_28, func_164(iParam0->f_3)) && !func_166(1))
				{
					if (func_167(&(iParam0->f_37), "HRM_WRONG", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
					{
						iParam0->f_4 = func_168(iParam0->f_3);
						_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
						func_165(&(iParam0->f_2), 2);
					}
				}
			}
			break;
		case 2:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_57(10)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_57(10));
			}
			if ((_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)) && _get_anim_scene_progress(iParam0->f_28) > 0.98f) && !func_166(1))
			{
				if (func_167(&(iParam0->f_37), "HRM_ALERTED", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 10;
					_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
					func_165(&(iParam0->f_2), 3);
				}
			}
			break;
		case 3:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_57(11)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_57(11));
			}
			if ((_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)) && _get_anim_scene_progress(iParam0->f_28) > 0.98f) && !func_166(1))
			{
				if (func_167(&(iParam0->f_37), "HRM_ALERTED", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 11;
					_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
					func_165(&(iParam0->f_2), 4);
				}
			}
			break;
		case 4:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_57(12)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_57(12));
			}
			if ((_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)) && _get_anim_scene_progress(iParam0->f_28) > 0.98f) && !func_166(1))
			{
				if (func_167(&(iParam0->f_37), "HRM_ALERTED", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 12;
					_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
					func_165(&(iParam0->f_2), 5);
				}
			}
			break;
		case 5:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_57(7)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_57(7));
			}
			if ((_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)) && _get_anim_scene_progress(iParam0->f_28) > 0.98f) && !func_166(1))
			{
				if (func_167(&(iParam0->f_37), "HRM_GETHIM", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 7;
					_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
					func_165(&(iParam0->f_2), 6);
				}
			}
			break;
		case 6:
			if (!_0x23e33cb9f4a3f547(iParam0->f_28, func_169(iParam0->f_3)))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_28, func_169(iParam0->f_3));
			}
			if (_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)))
			{
				fVar0 = _get_anim_scene_progress(iParam0->f_28);
				if (fVar0 > 0.25f && !func_39(iParam0->f_176, 32))
				{
					func_40(&(iParam0->f_176), 32);
				}
				if (fVar0 > 0.98f || (((fVar0 > 0.35f && func_39(iParam0->f_176, 64)) && _0x23e33cb9f4a3f547(iParam0->f_28, func_169(iParam0->f_3))) && !func_166(1)))
				{
					if (func_167(&(iParam0->f_37), "HRM_SHOTGUN", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
					{
						iParam0->f_4 = func_170(iParam0->f_3);
						_set_anim_scene_playback_list_bool(iParam0->f_28, func_57(iParam0->f_4), true);
						_0x72d4cb5db927009c(1845102363, -1, 0);
						func_165(&(iParam0->f_2), 7);
					}
				}
			}
			break;
		case 7:
			if (_0x1f0e401031e20146(iParam0->f_28, func_57(iParam0->f_4)) && _0x005e6f28dd7ed58d(iParam0->f_28, func_63()))
			{
				if (!has_ped_got_weapon(&(iParam0->f_10[0]), 1845102363, 0, false))
				{
					func_171(&(iParam0->f_10[0]), 1845102363, -1, 0, 0, 1056964608, 1065353216, 0);
					set_current_ped_weapon(&(iParam0->f_10[0]), 1845102363, true, 0, false, false);
				}
				else
				{
					set_current_ped_weapon(&(iParam0->f_10[0]), 1845102363, true, 0, false, false);
				}
				set_ped_relationship_group_hash(&(iParam0->f_10[0]), 1269650476);
				register_target(&(iParam0->f_10[0]), Global_35, 1);
				task_combat_hated_targets_in_area(&(iParam0->f_10[0]), get_entity_coords(&(iParam0->f_10[0]), true, false), 150f, 0, 0);
				_0x2208438012482a1a(&(iParam0->f_10[0]), false, false);
				func_165(&(iParam0->f_2), 8);
			}
			break;
		case 8:
			func_162(iParam0, 0);
			func_25(&(iParam0->f_34));
			func_165(&(iParam0->f_2), 9);
			break;
		case 9:
			if (iParam0->f_174 < 3)
			{
				if (func_161(&(iParam0->f_34)) >= 6f)
				{
					if (!func_166(1))
					{
						func_25(&(iParam0->f_34));
						iParam0->f_174++;
						if (func_167(&(iParam0->f_37), "HRM_SHOTGUN", &(iParam0->f_10[0]), Global_35, 0, 0, 1, 1))
						{
						}
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_71(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_163(&(iParam0->f_10[iVar1]), 2))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_72(var uParam0)
{
	if (!func_49(*uParam0))
	{
		func_172(*uParam0);
		func_99(uParam0);
	}
}

void func_73(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_74(var uParam0)
{
	if (_does_volume_exist(*uParam0))
	{
		_delete_volume(*uParam0);
	}
}

bool func_75(int iParam0)
{
	iVar0 = func_76(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case -2060865802:
			return 116;
		case -2019711818:
			return 9;
		case -2009137002:
			return 34;
		case -2008558277:
			return 59;
		case -1960242214:
			return 125;
		case -1958832660:
			return 49;
		case -1923503631:
			return 117;
		case -1891628345:
			return 124;
		case -1887999095:
			return 89;
		case -1882503209:
			return 50;
		case -1859413640:
			return 28;
		case -1859023693:
			return 64;
		case -1848895400:
			return 113;
		case -1841331114:
			return 94;
		case -1829339703:
			return 141;
		case -1824429070:
			return 66;
		case -1787770845:
			return 16;
		case -1761578407:
			return 17;
		case -1761189332:
			return 115;
		case -1714262909:
			return 76;
		case -1686810506:
			return 112;
		case -1646022773:
			return 13;
		case -1636964661:
			return 10;
		case -1614148516:
			return 48;
		case -1609238411:
			return 21;
		case -1568839185:
			return 6;
		case -1505275983:
			return 31;
		case -1494823099:
			return 61;
		case -1481450947:
			return 53;
		case -1457751321:
			return 123;
		case -1427565340:
			return 47;
		case -1420566543:
			return 23;
		case -1308658310:
			return 45;
		case -1300082860:
			return 51;
		case -1287911066:
			return 2;
		case -1283611369:
			return 78;
		case -1272862985:
			return 139;
		case -1243267511:
			return 81;
		case -1240932004:
			return 140;
		case -1208846034:
			return 24;
		case -1177787273:
			return 127;
		case -1144800837:
			return 111;
		case -1109016944:
			return 15;
		case -1084929085:
			return 4;
		case -1061274876:
			return 96;
		case -1053108445:
			return 84;
		case -986176781:
			return 25;
		case -979575591:
			return 103;
		case -968854939:
			return 68;
		case -920971071:
			return 83;
		case -919236330:
			return 79;
		case -890175011:
			return 137;
		case -849582265:
			return 92;
		case -834293086:
			return 91;
		case -780455182:
			return 8;
		case -777592153:
			return 3;
		case -777150535:
			return 100;
		case -763376358:
			return 55;
		case -739986731:
			return 110;
		case -715636193:
			return 95;
		case -709811179:
			return 20;
		case -654238687:
			return 104;
		case -641229542:
			return 46;
		case -607940493:
			return 118;
		case -599506500:
			return 38;
		case -544327665:
			return 106;
		case -499529359:
			return 74;
		case -490142739:
			return 130;
		case -415839138:
			return 98;
		case -409986722:
			return 88;
		case -357364973:
			return 44;
		case -321841939:
			return 11;
		case -261997819:
			return 37;
		case -232974724:
			return 135;
		case -161804536:
			return 29;
		case -148407339:
			return 97;
		case -35775921:
			return 40;
		case -30872859:
			return 30;
		case -657632:
			return 114;
		case 0:
			return 143;
		case 58958195:
			return 72;
		case 74587361:
			return 35;
		case 118535038:
			return 101;
		case 149709049:
			return 67;
		case 173549940:
			return 22;
		case 221420861:
			return 132;
		case 230001763:
			return 107;
		case 233600584:
			return 54;
		case 247563739:
			return 52;
		case 308500632:
			return 136;
		case 330993088:
			return 131;
		case 373034311:
			return 0;
		case 397377585:
			return 87;
		case 404434344:
			return 18;
		case 425000526:
			return 75;
		case 429544447:
			return 93;
		case 435290930:
			return 60;
		case 464413478:
			return 128;
		case 503180747:
			return 19;
		case 513110082:
			return 121;
		case 657666087:
			return 70;
		case 677950956:
			return 142;
		case 683269210:
			return 134;
		case 733338689:
			return 32;
		case 870958936:
			return 1;
		case 918206817:
			return 82;
		case 921081956:
			return 108;
		case 939555152:
			return 27;
		case 949011950:
			return 109;
		case 1034793488:
			return 33;
		case 1048086072:
			return 26;
		case 1091556515:
			return 122;
		case 1120968795:
			return 105;
		case 1124200691:
			return 43;
		case 1154568952:
			return 12;
		case 1187689415:
			return 126;
		case 1187917501:
			return 71;
		case 1284679164:
			return 85;
		case 1335921989:
			return 58;
		case 1342653896:
			return 69;
		case 1347913620:
			return 5;
		case 1351526287:
			return 86;
		case 1424723727:
			return 39;
		case 1431862613:
			return 80;
		case 1464664327:
			return 129;
		case 1490223565:
			return 57;
		case 1505050944:
			return 77;
		case 1519228573:
			return 42;
		case 1519472817:
			return 63;
		case 1535254161:
			return 133;
		case 1673499939:
			return 99;
		case 1734766691:
			return 65;
		case 1801731633:
			return 56;
		case 1833243216:
			return 102;
		case 1861313914:
			return 62;
		case 1937333853:
			return 7;
		case 1982045664:
			return 90;
		case 1986618633:
			return 119;
		case 2000209669:
			return 120;
		case 2072029413:
			return 36;
		case 2072069278:
			return 73;
		case 2134589549:
			return 14;
		case 2135153015:
			return 41;
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

Vector3 func_77(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 827.9519f, 1925.23f, 258.7208f;
			}
			else if (iParam1 == 1)
			{
				return 832.673f, 1922.286f, 258.7208f;
			}
			else if (iParam1 == 2)
			{
				return 829.6969f, 1926.987f, 258.7208f;
			}
			else if (iParam1 == 3)
			{
				return 832.1583f, 1926.718f, 258.7208f;
			}
			else if (iParam1 == 4)
			{
				return 828.2374f, 1922.771f, 258.7208f;
			}
			else if (iParam1 == 5)
			{
				return 830.3385f, 1921.46f, 258.7208f;
			}
			else if (iParam1 == 6)
			{
				return 833.4829f, 1924.626f, 258.7208f;
			}
			else if (iParam1 == 7)
			{
				return 830.591f, 1924.07f, 258.795f;
			}
			else if (iParam1 == 11)
			{
				return -160.9032f, 1599.633f, 180.2413f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_78(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return func_173(uParam0, 1);
		case -1614148516:
			return func_173(uParam0, 0);
		case 2134589549:
			return func_173(uParam0, 0);
		case 373034311:
			return func_173(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_174(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return func_77(uParam0, 11);
			}
			else
			{
				return func_77(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}

Vector3 func_79(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_80()
{
	return Global_1572887->f_12;
}

int func_81(int iParam0, bool bParam1)
{
	switch (func_175(iParam0))
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

void func_82(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_94(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_176(iVar0);
	*uParam0 = 0;
}

void func_83(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f };
		vVar3 = { 0f, 0f, -74.42887f };
		vVar6 = { 2.5f, 3f, 5f };
		if (!_does_volume_exist(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f };
			vVar3 = { 0f, 0f, -74.42887f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f };
			vVar3 = { 0f, 0f, -23.06569f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f };
			vVar3 = { 0f, 0f, -41.82871f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f };
			vVar3 = { 0f, 0f, 280f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f };
			vVar3 = { 0f, 0f, -2.622487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		if (!_does_volume_exist(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
		}
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == 1535254161) || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f };
			vVar3 = { 0f, 0f, 31.7625f };
			vVar6 = { 44.60546f, 27.38259f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f };
			vVar3 = { 0f, 0f, -54.20028f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!_does_volume_exist(uParam0->f_6.f_9))
		{
			if (*uParam0 == -607940493)
			{
				uParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
			}
			else
			{
				uParam0->f_6.f_9 = _create_volume_cylinder_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
			}
		}
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f };
			vVar3 = { 0f, 0f, -40.04137f };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f };
			vVar3 = { 0f, 0f, -44.91362f };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f };
			vVar3 = { 0f, 0f, -23.65903f };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f };
			vVar3 = { 0f, 0f, -34.54109f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!_does_volume_exist(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
		}
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f };
			vVar3 = { 0f, 0f, -90.32019f };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f };
			vVar3 = { 0f, 0f, -89.95428f };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f };
		}
		if (!_does_volume_exist(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_177(uParam0));
		}
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_178() - fParam1);
	func_179(uParam0, 1);
	func_180(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_86(var uParam0)
{
	return func_84(*uParam0, 2);
}

int func_87()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_88(var uParam0)
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_181(Global_35, func_173(uParam0, 0), 3f, 1, 1))
			{
				return true;
			}
			break;
		case -890175011:
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				if (_does_volume_exist(uParam0->f_6.f_9) && is_entity_in_volume(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				if (_does_volume_exist(uParam0->f_6.f_9) && is_entity_in_volume(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_89(var uParam0, int iParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!func_182(iParam1, 1))
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
		if (_0xc8b29d18022ea2b7(Global_35))
		{
			return false;
		}
	}
	if (is_ped_being_arrested(Global_35))
	{
		return false;
	}
	if (!func_182(iParam1, 2) && !func_183())
	{
		return false;
	}
	if (!func_182(iParam1, 4) && !func_184())
	{
		return false;
	}
	if (!func_182(iParam1, 128) && !func_185())
	{
		return false;
	}
	if (!func_182(iParam1, 2048) && !func_186(0))
	{
		return false;
	}
	if (!func_182(iParam1, 32) && !func_187(iParam1))
	{
		return false;
	}
	if (!func_182(iParam1, 64) && !func_188())
	{
		return false;
	}
	if (!func_182(iParam1, 256) && is_cinematic_cam_rendering())
	{
		return false;
	}
	if (!func_182(iParam1, 512))
	{
		if (_get_ped_crouch_movement(Global_35))
		{
			return false;
		}
	}
	if (!func_182(iParam1, 1024))
	{
		if (is_ped_in_cover(Global_35, 0, 1))
		{
			return false;
		}
	}
	if (_0x1204eb53a5fbc63d())
	{
		return false;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return false;
	}
	else if (func_152(Global_35, 1369124074))
	{
		return false;
	}
	else if (func_152(Global_35, 713668775))
	{
		return false;
	}
	return true;
}

bool func_90(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_189(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_190(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_93(int iParam0)
{
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, 1710353528, 0);
	}
}

int func_94(int iParam0)
{
	return iParam0;
}

bool func_95(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_96(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_189(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -780455182:
			return 1614617630;
		case -1287911066:
			return -617882357;
		case -1636964661:
			return 1599532233;
		case -1646022773:
			return -65357919;
		case 2134589549:
			return 2004715705;
		case -1109016944:
			return -1451193020;
		case 308500632:
			return 1553391542;
		case -709811179:
			return 317656811;
		case -1609238411:
			return 1910189712;
		case -986176781:
			return -1896654834;
		case -161804536:
			return -126421233;
		case -2009137002:
			return -440810089;
		case 1519228573:
			return -703551507;
		case -1614148516:
			return -1705330644;
		case -1958832660:
			return -245016475;
		case -1300082860:
			return 1529964155;
		case 247563739:
			return 325616917;
		case 1861313914:
			return 1067266077;
		case 1734766691:
			return 1292039078;
		case 657666087:
			return -1721762433;
		case 58958195:
			return 712585684;
		case -1243267511:
			return -1482291365;
		case -1053108445:
			return -1576735250;
		case 1982045664:
			return -1173476934;
		case -849582265:
			return 2097588565;
		case 429544447:
			return -159963867;
		case -148407339:
			return -1155213091;
		case -415839138:
			return 979428630;
		case 1673499939:
			return -720689005;
		case -979575591:
			return 463289412;
		case 921081956:
			return 731487006;
		case -739986731:
			return 371066;
		case -1761189332:
			return 270899202;
		case -607940493:
			return 894739389;
		case 1986618633:
			return -2113673964;
		case -1891628345:
			return -804420153;
		case -1960242214:
			return 1747567809;
		case -232974724:
			return -792295257;
		case 1535254161:
			return -452661064;
		case -1505275983:
			return 387715582;
		case 1284679164:
			return -1245190585;
		case -1787770845:
			return 422665644;
		case -1887999095:
			return -95543768;
		case 1034793488:
			return 120200140;
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_99(var uParam0)
{
	if (func_80() != -1)
	{
		return;
	}
	if (func_191(*uParam0) != 0)
	{
		if (!_map_is_discovery_active(func_191(*uParam0)))
		{
			_0xd8c7162ab2e2af45(func_191(*uParam0));
		}
		func_32(*uParam0, 8);
	}
}

int func_100()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_192(iVar0);
		if (func_39(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_101()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = func_192(iVar0);
		if (!func_39(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_102()
{
	if (func_80() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return -1099171777;
			case -1958832660:
				return 443793586;
			case 247563739:
				return -1240692636;
			case -1300082860:
				return 3075517;
			case -1287911066:
				return 1336990636;
			case 1861313914:
				return 1964547316;
			case 1734766691:
				return -460989844;
			case 657666087:
				return -1735207738;
			case 1535254161:
				return -1018340507;
			case 58958195:
				return 1699788918;
			case -1109016944:
				return -764076835;
			case -780455182:
				return -1048196910;
			case -1636964661:
				return 276159606;
			case -2009137002:
				return -1450540639;
			case -1243267511:
				return 595762271;
			case -1053108445:
				return 1411852139;
			case -1646022773:
				return 2104695167;
			case 1284679164:
				return 899380023;
			case 2134589549:
				return -1051688219;
			case -1787770845:
				return -936503465;
			case -1887999095:
				return -1387877395;
			case 1519228573:
				return 133231560;
			case 1982045664:
				return -123431304;
			case 308500632:
				return -2009629516;
			case -849582265:
				return 1042178190;
			case 429544447:
				return -462983094;
			case -148407339:
				return -1419041917;
			case -415839138:
				return -1547870200;
			case -709811179:
				return 1008388265;
			case 1673499939:
				return 841815548;
			case -979575591:
				return -1736624325;
			case -1609238411:
				return 1333773802;
			case 921081956:
				return -2119790235;
			case -739986731:
				return 1437695839;
			case 1034793488:
				return -1324667819;
			case -1614148516:
				return 344894142;
			case -1761189332:
				return -1509887801;
			case -607940493:
				return 907274245;
			case 1986618633:
				return -261392068;
			case -161804536:
				return -2101238167;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 664846144;
				}
				else
				{
					return 470395879;
				}
				break;
			case -232974724:
				return 1671677748;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 306789431;
				}
				else if (iParam2 == 1)
				{
					return -648356304;
				}
				else if (iParam2 == 2)
				{
					return -1016027240;
				}
				else if (iParam2 == 3)
				{
					return 98524525;
				}
				break;
			case -1891628345:
				return -244494475;
			case -1960242214:
				return 1312605337;
			case -1505275983:
				return 1963540825;
			case -890175011:
				if (iParam2 == 0)
				{
					return -421616371;
				}
				else if (iParam2 == 1)
				{
					return 1136001003;
				}
				else if (iParam2 == 2)
				{
					return 345827951;
				}
				else if (iParam2 == 3)
				{
					return 1234082698;
				}
				else if (iParam2 == 4)
				{
					return -871261476;
				}
				break;
			case -986176781:
				return 1496143424;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return -1967056269;
			case -1958832660:
				return -648759467;
			case 247563739:
				return 255109463;
			case -1300082860:
				return 383250899;
			case 677950956:
				if (iParam2 == 0)
				{
					return -73611983;
				}
				else if (iParam2 == 1)
				{
					return -1198691744;
				}
				else if (iParam2 == 2)
				{
					return 1983661621;
				}
				else if (iParam2 == 3)
				{
					return -1513446044;
				}
				else if (iParam2 == 4)
				{
					return -928373393;
				}
				else if (iParam2 == 5)
				{
					return -1085802945;
				}
				break;
			case -1287911066:
				return -1174358134;
			case 1734766691:
				return 591206754;
			case 657666087:
				return 732639128;
			case 1535254161:
				return -1087659594;
			case 58958195:
				return 2146731777;
			case -1109016944:
				return 1545716728;
			case -780455182:
				return -1852987413;
			case -1636964661:
				return -869178017;
			case -2009137002:
				return -1814020955;
			case -1243267511:
				return 2132597694;
			case -1053108445:
				return 174557649;
			case -1646022773:
				return 2146742726;
			case 1284679164:
				return -1071111037;
			case 2134589549:
				return -34990673;
			case -1787770845:
				return -166634067;
			case -1887999095:
				return -291947039;
			case 1519228573:
				return -1480640586;
			case 1982045664:
				return 1720275147;
			case 308500632:
				return -662282713;
			case -849582265:
				return -1815546802;
			case 429544447:
				return 1059199814;
			case -148407339:
				return -926136175;
			case -415839138:
				return -396787177;
			case -709811179:
				return -1049062461;
			case 1673499939:
				return -1917407050;
			case -979575591:
				return -1821865947;
			case -1609238411:
				return 364371639;
			case 921081956:
				return -1267601737;
			case -739986731:
				return -1045962986;
			case 1034793488:
				return -1911908440;
			case -1614148516:
				return 408494028;
			case -1761189332:
				return 1049962829;
			case -607940493:
				return -1306230772;
			case 1986618633:
				return -1172234904;
			case -161804536:
				return 684380081;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 2070016093;
				}
				else
				{
					return -871264392;
				}
				break;
			case -232974724:
				return 1876202217;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 1896812829;
				}
				else if (iParam2 == 1)
				{
					return 1453616421;
				}
				else if (iParam2 == 2)
				{
					return 748324258;
				}
				else if (iParam2 == 3)
				{
					return -319332707;
				}
				break;
			case -1891628345:
				return 1447580982;
			case -1960242214:
				return 556103947;
			case -1505275983:
				return 767041924;
			case -986176781:
				return 252093804;
			case -890175011:
				if (iParam2 == 0)
				{
					return 1861008860;
				}
				else if (iParam2 == 1)
				{
					return 1746563727;
				}
				else if (iParam2 == 2)
				{
					return 508009009;
				}
				else if (iParam2 == 3)
				{
					return -788581731;
				}
				else if (iParam2 == 4)
				{
					return -209526346;
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	iVar0 = func_103(iParam0, 1, iParam1);
	if (!_journal_can_write_entry(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_103(iParam0, 0, iParam1);
	if (!_journal_can_write_entry(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_105(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_193(1);
	}
}

int func_106()
{
	iVar0 = 0;
	if (func_39(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_107()
{
	if (!func_194(-569063887, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	if (!func_195(16))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return false;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_152(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((is_control_just_pressed(0, -473983589) || is_control_just_pressed(0, -719620017)) || is_control_just_pressed(0, 1367437629)) || is_control_just_pressed(0, 992265328)) || is_control_just_pressed(0, -1053137564)) || is_control_just_pressed(0, 129547951)) || is_control_just_pressed(0, -1300031296))
	{
		return false;
	}
	iVar0 = -569063887;
	if (_0x3d10d7179d7034af(func_196(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = get_game_timer() + 1000;
	func_197();
	disable_control_action(0, -209515122, false);
	_task_item_interaction(player_ped_id(), iVar0, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_109()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_112(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	vVar6 = { _0x18675bc914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { _get_object_offset_from_coords(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { _get_object_offset_from_coords(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

int func_113(var uParam0)
{
	return uParam0;
}

int func_114(int iParam0)
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_116(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_198();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_199(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_200(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_201(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_198();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_202(iVar1);
		func_204(func_203(), 0, 4000);
		func_205(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_206(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_208(func_207(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_115(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_209(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_210(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_210(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_208(func_207(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_115(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_209(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_210(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_210(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_207(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_211(10, 1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_118()
{
	if (func_122(932909855))
	{
		return true;
	}
	return false;
}

bool func_119()
{
	if (func_122(2051822093))
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_212((*Global_1835011)[iParam0]->f_1);
}

int func_121()
{
	return Global_0.f_7;
}

bool func_122(int iParam0)
{
	iVar0 = func_213(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_123(int iParam0)
{
	if (func_80() != -1)
	{
		return false;
	}
	if (!func_214(iParam0))
	{
		return false;
	}
	return func_212((*Global_1347702)[iParam0]->f_15);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
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

bool func_125(int iParam0)
{
	if (func_53(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_126(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_125(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_127(int iParam0, bool bParam1)
{
	if (func_125(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (func_125(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (func_125(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_130()
{
	return true;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -306120918;
		case 1:
		case 2:
		case 3:
			return -1033903759;
		default:
			break;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2532.628f, 1171.251f, 225.3449f;
		case 1:
			return -2541.569f, 1172.878f, 224.8266f;
		case 2:
			return -2532.962f, 1165.124f, 223.8324f;
		case 3:
			return -2526.329f, 1180.412f, 228.0133f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109.28f;
		case 1:
			return -154.72f;
		case 2:
			return 50.37f;
		case 3:
			return 103.73f;
		default:
			break;
	}
	return 0f;
}

bool func_134(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	request_model(iParam1, false);
	if (has_model_loaded(iParam1) && !does_entity_exist(*uParam0))
	{
		*uParam0 = func_215(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bParam6, 0, 0, 0, 0);
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	return true;
}

struct<11> func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = -1612834106;
			Var0.f_1 = { -2531.427f, 1172.162f, 226.2103f };
			Var0.f_4 = { 0f, 0f, 41.10626f };
			Var0.f_7 = { 22.25293f, 16.91905f, 10.9782f };
			Var0.f_10 = "HERMIT_WOMAN_YARD";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { -2536.681f, 1169.299f, 225.123f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 20f, 20f, 5f };
			Var0.f_10 = "HERMIT_WOMAN_WARNING_ZONE";
			break;
		case 2:
			Var0 = 665633627;
			Var0.f_1 = { -2539.542f, 1166.787f, 223.7133f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 25f, 25f, 20f };
			Var0.f_10 = "HERMIT_WOMAN_CANNOT_LEAVE_ZONE";
			break;
		case 3:
			Var0 = -1612834106;
			Var0.f_1 = { -2532.033f, 1174.148f, 226.0514f };
			Var0.f_4 = { 0f, 0f, 47.93365f };
			Var0.f_7 = { 3.61986f, 3.538449f, 3f };
			Var0.f_10 = "HERMIT_WOMAN_INSIDE_HOUSE";
			break;
		case 4:
			Var0 = -1612834106;
			Var0.f_1 = { -2552.133f, 1153.251f, 224.1595f };
			Var0.f_4 = { 0f, 0f, 47.71975f };
			Var0.f_7 = { 37.83019f, 53.0695f, 30.03766f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_FRONT";
			break;
		case 5:
			Var0 = -1612834106;
			Var0.f_1 = { -2535.299f, 1187.176f, 232.1368f };
			Var0.f_4 = { 0f, 0f, 46.88907f };
			Var0.f_7 = { 40f, 28.24742f, 20f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_LEFT";
			break;
		case 6:
			Var0 = -1612834106;
			Var0.f_1 = { -2514.26f, 1167.606f, 232.3327f };
			Var0.f_4 = { 0f, 0f, 46.88901f };
			Var0.f_7 = { 40f, 29.18088f, 27.39021f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_RIGHT";
			break;
	}
	return Var0;
}

void func_136(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0[iParam1]))
	{
		_0x9587913b9e772d29(uParam0[iParam1], 0);
		set_blocking_of_non_temporary_events(uParam0[iParam1], true);
	}
}

bool func_137(var uParam0, int iParam1, char* sParam2)
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

void func_138(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			func_218(&(iParam0->f_10[iParam1]), get_hash_key(func_159(2)), func_216(2), func_217(2), 0, 1, 0, 0, -1082130432);
			break;
		case 2:
			func_218(&(iParam0->f_10[iParam1]), get_hash_key(func_159(3)), func_216(3), func_217(3), 0, 1, 0, 0, -1082130432);
			break;
		case 3:
			func_218(&(iParam0->f_10[iParam1]), get_hash_key(func_159(4)), func_216(4), func_217(4), 0, 1, 0, 0, -1082130432);
			break;
	}
}

void func_139(var uParam0)
{
	func_219(uParam0, 0);
	func_145(uParam0, 0);
	func_220(uParam0, 1);
	func_221(uParam0, 1);
	func_222(uParam0, 0);
	func_223(uParam0, 1);
	func_224(uParam0, 1, 1, 1);
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 4);
	}
	else
	{
		func_226(&(uParam0->f_1), 4);
	}
}

void func_141(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 2);
	}
	else
	{
		func_226(&(uParam0->f_1), 2);
	}
}

void func_142(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 1);
	}
	else
	{
		func_226(&(uParam0->f_1), 1);
	}
}

void func_143(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 16);
	}
	else
	{
		func_226(&(uParam0->f_1), 16);
	}
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 8);
	}
	else
	{
		func_226(&(uParam0->f_1), 8);
	}
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 2048);
	}
	else
	{
		func_226(&(uParam0->f_1), 2048);
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 8);
	}
	else
	{
		func_225(uParam0, 8);
	}
}

void func_147(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_148(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

bool func_149(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_227(uParam2, 1, iVar0);
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
			if (func_228(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_229(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_230(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_231(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_232(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_233(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_229(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_234(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_235(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_236(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_237(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_237(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_229(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_238(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_239(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_240(uParam2, 4000))
				{
					if ((func_241(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_242(uParam2, iParam0)) && func_243(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_241(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_242(uParam2, iParam0)) && func_243(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_244(iParam0, Global_1935630->f_41))
							{
								func_245();
								*uParam3 = 2;
								func_229(iParam0, uParam2, *uParam3);
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
						if (func_244(iParam0, Global_1935630->f_41))
						{
							func_245();
							*uParam3 = 2;
							func_229(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_246(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_87() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_245();
						*uParam3 = 2;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_247())
					{
						if (func_244(iParam0, Global_1935630->f_42))
						{
							func_245();
							*uParam3 = 2;
							func_229(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_248(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_229(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_249(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_250(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_251(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_252(uParam2, 4000))
				{
					if (func_253(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_229(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_254(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_229(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_255(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_229(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_150(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_151()
{
	if (func_80() == -1 && func_256(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return false;
}

bool func_152(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_153(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		default:
			break;
	}
	return 4;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		case 5:
			return 2;
		case 6:
			return 3;
		default:
			break;
	}
	return 1;
}

bool func_156(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_157(int iParam0)
{
	iVar2 = func_257(iParam0, 0);
	fVar1 = func_14(Global_35, func_67(iVar2), 1);
	fVar0 = func_14(Global_35, func_67(func_257(iParam0, 1)), 1);
	if (fVar0 < fVar1)
	{
		iVar2 = func_257(iParam0, 1);
	}
	return iVar2;
}

void func_158(var uParam0, int iParam1, int iParam2, float fParam3)
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_67(iParam2), fParam3, 20000, 0.25f, 0, 40000f);
	task_turn_ped_to_face_entity(0, Global_35, 100, -1082130432, -1082130432, -1082130432);
	func_258(0, get_hash_key(func_159(iParam1)), 0, 1, 0, -1082130432);
	func_259(*uParam0, &iVar0, 0, 0, 1, 1);
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROP_HUMAN_SEAT_CHAIR";
		case 1:
			return "WORLD_ANIMAL_DOG_SLEEPING";
		case 2:
		case 3:
			return "WORLD_ANIMAL_DOG_SITTING";
		case 4:
			return "WORLD_ANIMAL_DOG_RESTING";
		case 5:
			return "WORLD_ANIMAL_DOG_BARKING_UP";
		case 6:
			return "WORLD_ANIMAL_DOG_GUARD_GROWL";
		default:
			break;
	}
	return "FAIL";
}

bool func_160(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_161(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_86(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_178() - uParam0->f_1);
}

void func_162(int iParam0, int iParam1)
{
	if (is_entity_dead(&(iParam0->f_10[iParam1])))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			set_ped_config_flag(&(iParam0->f_10[iParam1]), 340, true);
			_0x815c0074a1bc0d93(&(iParam0->f_10[iParam1]), 1);
			set_combat_float(&(iParam0->f_10[iParam1]), 58, 0f);
			set_combat_float(&(iParam0->f_10[iParam1]), 53, 0f);
			_0xfc3db99c8144cd81(&(iParam0->f_10[iParam1]), &(iParam0->f_20[0]), 0, 0, 0);
			iParam0->f_15[iParam1] = func_260(&(iParam0->f_10[iParam1]), 831283580, 1, 1);
			_blip_set_modifier(&(iParam0->f_15[iParam1]), -1034486097);
			break;
		case 1:
			_0xfc3db99c8144cd81(&(iParam0->f_10[iParam1]), &(iParam0->f_20[2]), 0, 0, 0);
			_0xb8b6430ead2d2437(&(iParam0->f_10[iParam1]), -2071648955);
			iParam0->f_15[iParam1] = func_260(&(iParam0->f_10[iParam1]), 831283580, 1, 1);
			break;
		case 2:
			_0xfc3db99c8144cd81(&(iParam0->f_10[iParam1]), &(iParam0->f_20[2]), 0, 0, 0);
			_0xb8b6430ead2d2437(&(iParam0->f_10[iParam1]), -2071648955);
			iParam0->f_15[iParam1] = func_260(&(iParam0->f_10[iParam1]), 831283580, 1, 1);
			break;
		case 3:
			_0xfc3db99c8144cd81(&(iParam0->f_10[iParam1]), &(iParam0->f_20[2]), 0, 0, 0);
			_0xb8b6430ead2d2437(&(iParam0->f_10[iParam1]), -2071648955);
			iParam0->f_15[iParam1] = func_260(&(iParam0->f_10[iParam1]), 831283580, 1, 1);
			break;
	}
	if (!iParam1 == 0)
	{
		task_combat_ped(&(iParam0->f_10[iParam1]), Global_35, 0, 0);
	}
}

bool func_163(int iParam0, int iParam1)
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
	if (func_39(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_57(1);
		case 2:
			return func_57(3);
		case 3:
			return func_57(2);
		default:
			break;
	}
	return func_57(1);
}

void func_165(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_166(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_167(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_261(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_261(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_25(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_262(sParam1))
			{
				return true;
			}
		}
		else if (func_263(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

char* func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_57(4);
		case 2:
			return func_57(6);
		case 3:
			return func_57(5);
		default:
			break;
	}
	return func_57(4);
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 3:
			return 5;
		default:
			break;
	}
	return 4;
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_264(iParam3, 1);
	bVar1 = func_264(iParam3, 2);
	bVar2 = !func_264(iParam3, 4);
	bVar3 = func_264(iParam3, 8);
	bVar4 = !func_264(iParam3, 16);
	bVar5 = func_264(iParam3, 32);
	bVar6 = func_264(iParam3, 64);
	return func_265(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_172(int iParam0)
{
	func_32(iParam0, 2);
	func_266(iParam0);
}

Vector3 func_173(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
				case 1:
					return -2351.106f, 111.0932f, 217f;
				case 2:
					return -2351.33f, 110.337f, 216.825f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
				case 1:
					return -2366.67f, 124.726f, 215.914f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
				case 1:
					return 2195.38f, -554.33f, 41.02f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.89f, 70.2216f, 58.3001f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
				case 1:
					return 180.267f, 1304.62f, 178.607f;
				case 2:
					return 180.387f, 1304.79f, 178.601f;
				case 3:
					return 180.397f, 1304.7f, 178.605f;
				case 4:
					return 180.437f, 1304.66f, 178.599f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.628f, 1173.581f, 225.1708f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.864f, 996.6885f, 53.9353f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.902f, 170.799f;
				case 1:
					return -161.862f, 1734.9f, 170.687f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
				case 1:
					return 494.1373f, -301.9945f, 147f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.751f, -2181.372f, 73.3274f;
				case 1:
					return -2343.751f, -2181.372f, 73.3274f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.121f, -5.0027f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
				case 1:
					return -988.1135f, 1692.075f, 243.3826f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
				case 1:
					return 830.641f, 1924.09f, 258.798f;
				case 2:
					return 830.611f, 1924.12f, 258.825f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
				default:
					break;
			}
			break;
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.592f, -330.3333f, 41.6732f;
				default:
					break;
			}
			break;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.019f, -3745.071f, -25.5216f;
				case 1:
					return -5854.012f, -3744.898f, -25.519f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.689f, -308.1162f, 141.4804f;
				case 1:
					return -1532.051f, -308.3718f, 141.5067f;
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
				default:
					break;
			}
			break;
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.601f, -1500.248f, 150.5708f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.078f, -1623.864f, 90.579f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.735f, 1294.358f, 216.0961f;
				case 1:
					return 1259.735f, 1294.358f, 216.0961f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.799f, 1696.725f, 95.7555f;
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
				default:
					break;
			}
			break;
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.472f, 44.5668f;
				default:
					break;
			}
			break;
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.58f, 2097.729f, 172.2719f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_174(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.582f, 430.9633f, 96.2455f;
				case 1:
					return 1123.024f, 430.963f, 95.7573f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.886f, -2176.59f, 71.4468f;
				case 1:
					return -2337.024f, -2179.854f, 71.9464f;
				case 2:
					return -2343.997f, -2181.427f, 70.977f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.953f, -2500.892f, 1.8466f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.936f, 124.0762f, 216.8527f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.849f, -2982.679f, -5.7608f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.37f, -1769.114f, 51.5788f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.266f, -2671.288f, 41.17608f;
				case 1:
					return -1411.035f, -2671.661f, 41.17608f;
				case 2:
					return -1411.408f, -2672.634f, 41.1746f;
				case 3:
					return -1413.048f, -2671.595f, 41.1746f;
				case 4:
					return -1412.823f, -2670.672f, 41.1746f;
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
				case 6:
					return -1413.745f, -2671.585f, 41.1746f;
				case 7:
					return -1412.558f, -2671.803f, 41.1746f;
				case 8:
					return -1412.088f, -2671.957f, 41.1746f;
				case 9:
					return -1412.338f, -2671.517f, 41.1746f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
				case 1:
					return -328.35f, -147.69f, 52.62f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.68f, -1433.048f, 138.7403f;
				case 1:
					return -2261.088f, -1434.147f, 138.5787f;
				case 2:
					return -2261.852f, -1433.882f, 138.6091f;
				case 3:
					return -2261.244f, -1434.466f, 138.7101f;
				case 4:
					return -2261.025f, -1432.579f, 138.68f;
				case 5:
					return -2260.271f, -1432.243f, 138.9447f;
				case 6:
					return -2260.379f, -1433.973f, 138.763f;
				case 7:
					return -2259.772f, -1432.779f, 138.7855f;
				case 8:
					return -2262.282f, -1433.536f, 138.7945f;
				case 9:
					return -2259.818f, -1433.147f, 138.9421f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.028f, 1996.19f, 168.2534f;
				case 1:
					return 2475.049f, 1998.073f, 168.2685f;
				case 2:
					return 2474.894f, 1999.316f, 168.2582f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.078f, 1575.433f, 360.6882f;
				case 1:
					return 1080.511f, 1659.407f, 372.3716f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.918f, 7.61f;
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
				case 2:
					return -4756.033f, -2420.065f, 7.9381f;
				case 3:
					return -4757.72f, -2419.863f, 7.8109f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.07f, 127.9608f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
				case 1:
					return -5419.692f, -3651.995f, -20f;
				case 2:
					return -5419.692f, -3653.495f, -20f;
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
				case 5:
					return -5429.492f, -3655.095f, -20f;
				case 6:
					return -5429.492f, -3653.61f, -20f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.915f, 44.5785f;
				case 1:
					return 1047.956f, -1880.671f, 45.402f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.84f, -88.9414f, 97.5094f;
				case 1:
					return -1332.349f, -87.4579f, 97.4614f;
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.42f, 45.4395f;
				case 1:
					return -3712.339f, -3602.567f, 44.9224f;
				case 2:
					return -3716.815f, -3604.644f, 44.6678f;
				case 3:
					return -3716.111f, -3602.837f, 46.7136f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.339f, -1624.245f, 89.9356f;
				case 1:
					return -1755.518f, -1624.026f, 90.635f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.68f, 319.2006f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.926f, -3466.984f, -10.575f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
				default:
					break;
			}
			break;
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.535f, -560.0701f, 46.6156f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.788f, 1152.984f, 151.5137f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.723f, -254.32f, 186.8714f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.224f, -1764.319f, 46.4285f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.461f, -618.8527f, 135.3655f;
				case 1:
					return -2222.735f, -616.4194f, 135.0682f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.332f, -1360.154f, 44.1704f;
				default:
					break;
			}
			break;
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.309f, 225.1319f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.994f, 1257.913f, 171.0152f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.04f, 564.7737f, 70.937f;
				case 1:
					return 2519.439f, 562.9084f, 70.9917f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_118())
					{
						return 792.7722f, 1776.509f, 281.5611f;
					}
					else if (func_119())
					{
						return 794.3322f, 1778.012f, 280.3784f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.558f, 1251.074f, 313.1244f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_175(int iParam0)
{
	if (!func_267(iParam0))
	{
		return -1;
	}
	return func_268(iParam0);
}

void func_176(int iParam0)
{
	if (!func_269(iParam0))
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

char* func_177(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

float func_178()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_181(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_270(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_183()
{
	if (_is_ped_hogtied(Global_35))
	{
		return false;
	}
	if (_is_ped_hogtying(Global_35))
	{
		return false;
	}
	if (_is_ped_lassoed(Global_35))
	{
		return false;
	}
	if (_0xef3a8772f085b4aa(Global_35))
	{
		return false;
	}
	if (!_get_lassoed_entity(Global_35) == 0)
	{
		return false;
	}
	if (_0x226cf9b159e38f42(Global_35))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_35))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(Global_35) || is_ped_performing_melee_action(Global_35, 4096, 0))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_184()
{
	if (_is_ped_sliding(Global_35))
	{
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_ped_climbing(Global_35))
	{
		return false;
	}
	if (func_271(Global_35))
	{
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_35))
	{
		return false;
	}
	if (is_ped_ragdoll(Global_35))
	{
		return false;
	}
	if (is_ped_vaulting(Global_35))
	{
		return false;
	}
	if (is_ped_running(Global_35))
	{
		return false;
	}
	if (is_ped_getting_up(Global_35))
	{
		return false;
	}
	return true;
}

bool func_185()
{
	if (func_272(Global_35) && !Global_1392040->f_2)
	{
		return false;
	}
	if (func_273(Global_35) && !Global_1392040->f_2)
	{
		return false;
	}
	return true;
}

bool func_186(bool bParam0)
{
	if (_is_ped_carrying(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_274("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	if (_0x1d46b417f926d34d(Global_35))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_35, true))
	{
		if (!is_ped_in_any_vehicle(Global_35, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_35);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				return false;
		}
		if ((!func_182(iParam0, 16) && !is_ped_on_mount(Global_35)) && _0x2963b5c1637e8a27(iVar0) == Global_35)
		{
			return false;
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return false;
	}
	else if (is_ped_on_mount(Global_35))
	{
		if (!func_275(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_188()
{
	if (is_ped_hanging_on_to_vehicle(Global_35))
	{
		return false;
	}
	return true;
}

bool func_189(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_190(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_96(iParam0, 1);
	func_276(iParam0, 1);
	func_277(iParam0, 128);
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 683269210:
			return 993246734;
		case -1300082860:
			return -1212881551;
		case 247563739:
			return 1352537560;
		case 149709049:
			return 2021420613;
		case 1347913620:
			return 460210291;
		case -1109016944:
			return -2011320133;
		case -919236330:
			return 539572870;
		case 918206817:
			return -1262808306;
		case -920971071:
			return 1582457845;
		case 1673499939:
			return 1195199040;
		case -654238687:
			return 2056389698;
		case -2060865802:
			return -1988847961;
		case -232974724:
			return -942443338;
		case -1960242214:
			return 66159563;
		case 1464664327:
			return 387869270;
		case -1240932004:
			return -875696111;
		default:
			break;
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		func_226(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_225(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_194(int iParam0, int iParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_279(iParam0);
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
		if (!func_280(iParam0, 1))
		{
			return false;
		}
	}
	return func_281(iParam0, 0, bParam2) >= iParam1;
}

bool func_195(int iParam0)
{
	return func_282(iParam0);
}

int func_196(bool bParam0)
{
	if (func_80() == -1)
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

void func_197()
{
	disable_control_action(0, 1367437629, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -473983589, false);
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -1053137564, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, -1300031296, false);
}

int func_198()
{
	iVar0 = func_283();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_199(int iParam0)
{
	if (func_80() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_284(absf(fVar1) < 1f, func_284(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_200(int iParam0)
{
	if (!func_285(iParam0))
	{
		return false;
	}
	return func_286(iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_203()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_204(int iParam0, bool bParam1, int iParam2)
{
	func_287((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_288(iParam0);
}

void func_205(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_289(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_206(bool bParam0)
{
	bVar3 = false;
	if (func_290(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_291(iVar5, &iVar2, &iVar0))
			{
				if (!func_278(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_292(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_279(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_198() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_198() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_293();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_207(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_208(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_210(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_294(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_211(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if (!func_109())
	{
		return 0;
	}
	if (!func_296(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

bool func_212(int iParam0)
{
	iVar0 = func_175(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_213(int iParam0, int iParam1)
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

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_215(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_297(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2527.941f, 1168.765f, 224.8905f;
		case 1:
			return -2541.197f, 1172.031f, 224.637f;
		case 2:
			return -2539f, 1166.62f, 223.74f;
		case 3:
			return -2539.83f, 1171.48f, 224.56f;
		case 4:
			return -2533.85f, 1167.12f, 223.96f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -137.816f;
		case 2:
			return 141.463f;
		case 3:
			return -23.626f;
		case 4:
			return -104.367f;
		default:
			break;
	}
	return 0f;
}

void func_218(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

void func_219(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 16384);
	}
	else
	{
		func_226(&(uParam0->f_1), 16384);
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 256);
	}
	else
	{
		func_226(&(uParam0->f_1), 256);
	}
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 16);
	}
	else
	{
		func_225(uParam0, 67108864);
		func_225(uParam0, 16);
	}
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(&(uParam0->f_1), 128);
	}
	else
	{
		func_226(&(uParam0->f_1), 128);
	}
}

void func_223(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 256);
	}
	else
	{
		func_225(uParam0, 256);
	}
}

void func_224(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_226(uParam0, 268435456);
	}
	else
	{
		func_225(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_226(uParam0, 1073741824);
	}
	else
	{
		func_225(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_226(uParam0, 536870912);
	}
	else
	{
		func_225(uParam0, 536870912);
	}
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_227(var uParam0, bool bParam1, int iParam2)
{
	func_298(iParam2);
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
		uParam0->f_13 = func_299(0);
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
							func_226(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_300(1))
						{
							func_226(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_300(1) || *uParam0 & 8192 != 0))
				{
					func_225(uParam0, 33554432);
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
			if (func_301(uParam0))
			{
				uParam0->f_15 = func_87();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_87() - uParam0->f_15) > 500)
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
	func_302(uParam0);
}

bool func_228(int iParam0, var uParam1)
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
			if (!func_303(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_304(iParam0, iVar2) <= func_305(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_229(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_306(iParam2, 1, 1, 1, 0))
	{
		func_226(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_307(uParam1, 1);
	func_308();
}

bool func_230(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_309(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_310(uParam1);
			if (func_311(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_312(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_307(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_307(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_231(int iParam0, int iParam1, var uParam2)
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
	if (func_313(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_310(uParam2);
		if (func_311(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_312(uParam2)
				{
					func_307(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_232(int iParam0, var uParam1)
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
	if (func_303(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_312(uParam1)
		{
			fVar3 = func_310(uParam1);
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

int func_233(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_314(bParam1, bParam2, bParam3);
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

bool func_234(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_87();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_235(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_315(uParam2);
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
			if (func_243(uParam2, iParam1))
			{
				func_307(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_236(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_316(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_243(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_307(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_237(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_317(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_318(iParam1, vVar0, vVar4))
					{
						func_307(uParam2, 1);
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
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_318(iParam1, vVar0, vVar7))
					{
						func_307(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_238(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_303(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_319(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_320(&(Global_1935630->f_34[iVar0])))
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
			if (func_321(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_322(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_323(uParam1, iParam0, fVar1, iVar0))
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

bool func_239(int iParam0, var uParam1)
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

bool func_240(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_87();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_241(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_324(iVar0, &iVar2))
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
	if (func_325(iVar0, iParam0))
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

int func_242(var uParam0, int iParam1)
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

bool func_243(var uParam0, int iParam1)
{
	if (func_326(uParam0))
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

bool func_244(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_261(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_245()
{
}

bool func_246(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_327(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_87();
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
						if (func_14(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_87();
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

bool func_247()
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
	if ((func_87() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_248(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_305(uParam0);
	if (uParam0->f_12 > func_328(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_329(iParam1);
	iVar1 = func_330(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_249(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_331(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_250(int iParam0, var uParam1)
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
		if (func_332(iParam0, uParam1, 1))
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
					if (!func_333(uParam1, iParam0))
					{
						if (func_14(iVar4, Global_36, 1) < 7f)
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

bool func_251(int iParam0, var uParam1)
{
	if (!func_334(0))
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

bool func_252(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_87();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_253(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_254(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_87();
	}
	else if (func_87() - uParam1->f_4) > func_335(uParam1)
	{
		return func_336(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_255(var uParam0, int iParam1)
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

bool func_256(int iParam0, bool bParam1, bool bParam2)
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
		if (func_337())
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
		iVar0 = func_338(&(Global_1898164->f_1[0]));
		if (func_214(iVar0) && func_339((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_267(&(Global_1898164->f_1[0])))
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

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
	}
	return 2;
}

void func_258(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_259(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, iParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

float func_261(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_262(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_263(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_340(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_264(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_265(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_341(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_341(iVar4) && iVar4 != iVar0)
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
	if (func_80() == -1 && !func_342(iVar0))
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
				if (func_342(-183018591))
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
		if (iParam0 != Global_35 && func_341(iVar0))
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
		func_343(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_344(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_345(iVar0))
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

void func_266(int iParam0)
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		_0xf5ead898ef387e73(iParam0);
		if (func_346(iParam0))
		{
			func_208(func_207(795577402), 1);
		}
	}
}

bool func_267(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_268(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_347(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_269(int iParam0)
{
	return func_189(iParam0, 2);
}

float func_270(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_271(int iParam0)
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

bool func_272(int iParam0)
{
	return (func_348(iParam0, 4) || func_348(iParam0, 5));
}

bool func_273(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

var func_274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_275(int iParam0)
{
	iVar0 = get_mount(Global_35);
	if (!func_349(Global_35))
	{
		return false;
	}
	if (!func_182(iParam0, 16) && !func_350(iVar0, 0))
	{
		return false;
	}
	return true;
}

void func_276(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_277(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_279(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_280(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_351(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_352("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_353(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_341(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_354(iVar1);
				return true;
			}
			iVar3++;
		}
		func_354(iVar1);
	}
	return false;
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_351(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_355(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_196(bParam2), iParam0, 0);
	return uVar2;
}

bool func_282(int iParam0)
{
	return func_39(Global_1935496->f_27, iParam0);
}

int func_283()
{
	return Global_40.f_11095.f_35;
}

float func_284(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_285(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_286(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_287(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_356(bParam1);
	}
}

void func_288(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_289(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_290(int iParam0)
{
	if (!func_357(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_291(int iParam0, int iParam1, int iParam2)
{
	if (!func_357(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_292(int iParam0)
{
	return iParam0;
}

int func_293()
{
	iVar0 = func_198();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_295(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0, int iParam1, var uParam2)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_297(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_358(iParam1))
		{
			func_359(iParam0, 41788943);
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
			func_360(iParam0, 0, 1);
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
			func_361(iParam0, 0);
			bVar0 = true;
		}
		func_362(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_298(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_363();
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
			func_364(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_299(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_300(bool bParam0)
{
	if (func_365(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_301(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_80() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_366(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_366(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_330(iVar0) == -1)
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

void func_302(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_367(uParam0);
	}
}

bool func_303(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_330(iParam2);
	}
	else
	{
		iVar1 = func_329(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_330(iParam0);
	}
	else
	{
		iVar0 = func_329(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_182(*uParam1, 8388608))
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

float func_304(int iParam0, int iParam1)
{
	return func_261(iParam0, iParam1, 1, 1);
}

float func_305(var uParam0)
{
	return uParam0->f_26;
}

bool func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_307(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 134217728);
	}
	else
	{
		func_225(uParam0, 134217728);
	}
}

void func_308()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_309(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_261(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_368(iVar0, 0)))
		{
			if (func_369(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_310(var uParam0)
{
	return uParam0->f_17;
}

bool func_311(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_182(*uParam0, 4194304))
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

int func_312(var uParam0)
{
	return uParam0->f_18;
}

bool func_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_368(iVar0, 0)))
		{
			if (func_370(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_314(bool bParam0, bool bParam1, bool bParam2)
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

float func_315(var uParam0)
{
	return uParam0->f_23;
}

int func_316(var uParam0)
{
	return uParam0->f_21;
}

int func_317(var uParam0)
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

bool func_318(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_90(iParam0, vParam4, 0.5f))
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

int func_319(int iParam0)
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
	if (func_371(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_320(int iParam0)
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

bool func_321(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_271(iParam1))
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

bool func_322(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_271(iParam1))
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

bool func_323(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_271(iParam1))
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

bool func_324(int iParam0, int iParam1)
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

bool func_325(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_372(iParam0, 1, 0, 0) != 2055893578)
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

bool func_326(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_327(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_14(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_328(var uParam0)
{
	return uParam0->f_24;
}

int func_329(int iParam0)
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

int func_330(int iParam0)
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

int func_331(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_324(Global_35, &iVar1))
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
		fVar2 = func_261(iParam0, player_ped_id(), 0, 1);
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
		if (func_261(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_332(int iParam0, var uParam1, bool bParam2)
{
	func_365(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_333(uParam1, iVar0))
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
				if (!bParam2 || !func_333(uParam1, iVar1))
				{
					if (func_14(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_333(var uParam0, int iParam1)
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

int func_334(int iParam0)
{
	if (func_15())
	{
		return 0;
	}
	return func_81((*Global_1347702)[58]->f_15, 1);
}

int func_335(var uParam0)
{
	return uParam0->f_20;
}

int func_336(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_337()
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

int func_338(int iParam0)
{
	if (!func_267(iParam0))
	{
		return -1;
	}
	return func_374(func_373(iParam0));
}

bool func_339(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_340(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_341(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_342(int iParam0)
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

int func_343(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_375(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_376((386 + iVar28), 1);
			if (func_377(iParam0, &Var0, iVar5, 0))
			{
				if (func_378(iParam0, &Var6, iVar5))
				{
					Var29 = { func_379(iParam0, Var0, iVar5, 0) };
					func_380(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_381(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_382(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_383(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_344(int iParam0, int iParam1, float fParam2)
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

bool func_345(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_346(int iParam0)
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}
	return false;
}

int func_347(int iParam0)
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

int func_348(int iParam0, int iParam1)
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

bool func_349(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_350(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

int func_351(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_384(iParam0, 1399091007))
	{
		func_385(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_352(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_196(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_353(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_354(int iParam0)
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

int func_355(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_386(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_388(&Var0, func_387(0));
	}
	if (!func_389(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_354(iVar14);
	return uVar15;
}

void func_356(bool bParam0)
{
	func_390(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_357(int iParam0, var uParam1)
{
	if (!func_391(iParam0))
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

bool func_358(int iParam0)
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

void func_359(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_392(iParam0, iParam1))
		{
			if (func_393(iParam0, iParam1))
			{
				if (func_394(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_395(iParam0);
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

void func_360(int iParam0, int iParam1, bool bParam2)
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

void func_361(int iParam0, bool bParam1)
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

void func_362(int iParam0, int iParam1)
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

bool func_363()
{
	if (func_396())
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

void func_364(var uParam0, var uParam1)
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

bool func_365(bool bParam0, int iParam1, int iParam2)
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

int func_366(var uParam0)
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

void func_367(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_225(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_226(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_368(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_369(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_370(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_370(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_371(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_372(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_373(int iParam0)
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

int func_374(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

struct<5> func_375(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_397(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_279(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_379(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_387(bParam1) };
			if (bParam2 && func_398(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_377(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_377(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_378(iParam0, &Var5, 1728382685))
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
			Var0 = { func_399(bParam1) };
			switch (func_400(iParam0))
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
			if (func_401(iParam0, -1823706425))
			{
				Var0 = { func_379(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_401(iParam0, -1483207246))
			{
				Var0 = { func_379(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_402(Var0, &Var27, bParam1, 0))
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

int func_376(int iParam0, int iParam1)
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

bool func_377(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_403(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_378(int iParam0, var uParam1, int iParam2)
{
	if (func_404(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_379(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_196(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_380(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_405(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_402(*uParam1, &Var0, bParam6, 0))
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
	if (!func_381(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_196(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_381(bool bParam0)
{
	if (func_80() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_196(bParam0));
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_406(iParam0))
	{
		return 0;
	}
	if (!func_381(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_383(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_407(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_384(int iParam0, int iParam1)
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

void func_385(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_387(bool bParam0)
{
	iVar0 = func_196(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_379(923904168, func_397(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_379(923904168, func_397(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_379(923904168, func_397(bParam0), -740156546, 0);
}

void func_388(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_389(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_196(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_390(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_391(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_392(int iParam0, int iParam1)
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

bool func_393(int iParam0, int iParam1)
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

bool func_394(int iParam0, int iParam1)
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
	if (!func_392(iParam0, iVar0))
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

void func_395(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_396()
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

struct<4> func_397(bool bParam0)
{
	return func_379(1328661203, func_408(), -1591664384, bParam0);
}

bool func_398(int iParam0, bool bParam1)
{
	if (func_400(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_200(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_399(bool bParam0)
{
	iVar0 = func_196(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_379(271701509, func_397(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_379(271701509, func_397(bParam0), 12999093, 0);
}

int func_400(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_401(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_400(iParam0);
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

bool func_402(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_196(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_403(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_379(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_196(bParam6), &Var0, 0);
	return uVar4;
}

bool func_404(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_196(0);
	*uParam1 = { func_379(iParam0, func_387(0), iParam3, 0) };
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

bool func_405(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_406(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_407(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> func_408()
{
	return Var0;
}

