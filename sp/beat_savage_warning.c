void __EntryFunction__()
{
	iLocal_227 = 1;
	bVar0 = false;
	func_1(&uScriptParam_0);
	if (has_force_cleanup_occurred(523))
	{
		bVar0 = true;
	}
	else
	{
		if (!func_2(&uScriptParam_0, &Local_3))
		{
			func_3();
		}
		if (!func_4())
		{
			func_5();
		}
		else if (!func_6())
		{
			func_5();
		}
		else if (func_7(Local_3.f_51, 1, 0, 0) || func_8(0, 0, 1))
		{
			if (func_9(1))
			{
				func_10(2);
			}
		}
		if (!func_11(&Local_3))
		{
			func_5();
		}
	}
	while (true)
	{
		if (bVar0)
		{
			func_12(bVar0, 473, 0);
			wait(0);
		}
		else
		{
			switch (iLocal_227)
			{
				case 1:
					if (func_13())
					{
						func_14(Local_3.f_195, 1, 0);
						func_15(&Local_3, 3);
						iLocal_227 = 0;
					}
					break;
				case 0:
					if (func_16())
					{
						iLocal_227 = 3;
					}
					break;
				case 3:
					if (func_17())
					{
						iLocal_227 = 4;
					}
					break;
				case 4:
					func_18();
					break;
			}
			if (_0x9e4ef615e307fbbe())
			{
				func_3();
			}
			wait(0);
		}
	}
	func_3();
}

void func_1(var uParam0)
{
	if (func_19() != -1)
	{
		func_3();
	}
	if (!_does_scenario_point_exist(uParam0->f_1))
	{
		func_3();
	}
}

bool func_2(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 1704047055:
			uParam1->f_194 = 0;
			uParam1->f_195 = 1050128548;
			break;
		case 259425682:
			uParam1->f_194 = 1;
			uParam1->f_195 = 868326136;
			break;
		default:
			return false;
	}
	uParam1->f_198 = func_20(uParam1->f_194);
	uParam1->f_199 = func_21(uParam1->f_194);
	uParam1->f_196 = uParam0->f_1;
	uParam1->f_197 = *uParam0;
	uParam1->f_3 = 55;
	uParam1->f_51 = { _get_scenario_point_coords(uParam1->f_196, true) };
	uParam1->f_51.f_3 = _get_scenario_point_heading(uParam1->f_196, true);
	func_22(uParam1, 1);
	return true;
}

void func_3()
{
	if (func_9(1))
	{
		if (func_23() || func_24())
		{
			func_10(2);
			func_25();
		}
	}
	func_26(&iLocal_224);
	func_27();
	func_28(iVar289);
	iVar0 = 0;
	while (iVar0 < iLocal_234)
	{
		if (does_entity_exist(&(iLocal_234[iVar0])))
		{
			delete_ped(iLocal_234[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_238)
	{
		if (does_entity_exist(&(iLocal_238[iVar0])))
		{
			delete_object(iLocal_238[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar290)
	{
		if (does_entity_exist(&(iLocal_292[iVar0])))
		{
			set_ped_as_no_longer_needed(iLocal_292[iVar0]);
		}
		iVar0++;
	}
	if (bLocal_225)
	{
		trigger_music_event("SAVAGE_WARNING_STOP");
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_rope_exist(&(iLocal_236[iVar0])))
		{
			delete_rope(iLocal_236[iVar0]);
		}
		iVar0++;
	}
	_0xe7282390542f570d(Local_3.f_197);
	func_14(Local_3.f_195, 0, 0);
	clear_ambient_zone_state("AZ_RESW_Savage_Warning_Body", false);
	uVar1 = 1;
	if (_0xf6a8a652a6b186cd(Local_3.f_51.f_11))
	{
		_0xfdfecc6ee4491e11(Local_3.f_51.f_11);
	}
	if (_does_volume_exist(iLocal_233))
	{
		func_29(iLocal_233);
	}
	func_30(&Local_3, &iLocal_234, &uVar1, Local_3.f_194, -1, 0, 0, 1, 0, 1);
	func_31();
}

bool func_4()
{
	if (func_32())
	{
		if (func_33(60))
		{
			return true;
		}
	}
	return false;
}

void func_5()
{
	if (!bLocal_232)
	{
		iLocal_227 = 4;
		iLocal_226 = 1;
		if (Local_3.f_198 == 1)
		{
			func_10(2);
			func_25();
		}
		bLocal_232 = true;
	}
}

bool func_6()
{
	if (func_9(2))
	{
		return false;
	}
	if (func_34())
	{
		return false;
	}
	return true;
}

bool func_7(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_35(vParam0))
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

bool func_8(int iParam0, bool bParam1, bool bParam2)
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
		if (func_36())
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
		iVar0 = func_37(&(Global_1898164->f_1[0]));
		if (func_38(iVar0) && func_39((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_40(&(Global_1898164->f_1[0])))
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

bool func_9(int iParam0)
{
	return Local_3.f_198 == iParam0;
}

void func_10(int iParam0)
{
	func_41(Local_3.f_194, iParam0);
	Local_3.f_198 = iParam0;
}

bool func_11(var uParam0)
{
	if (uParam0->f_194 == 0)
	{
		iVar0 = 1;
	}
	else if (uParam0->f_194 == 1)
	{
		iVar0 = 0;
	}
	else
	{
		return false;
	}
	iVar1 = func_20(iVar0);
	if (iVar1 == 1)
	{
		iVar2 = func_21(iVar0);
		bVar3 = false;
		if (func_42(iVar2, 1))
		{
			func_41(iVar0, 2);
			func_44(func_43(), iVar2, &iVar4, &iVar5, &uVar6, &uVar7, &uVar8, &uVar9);
			if (((((iVar4 >= 0 && iVar5 >= 0) && iVar5 >= 0) && iVar5 >= 0) && iVar5 >= 1) && iVar5 >= 0)
			{
				bVar3 = true;
			}
			else
			{
				func_25();
			}
		}
		if (!bVar3)
		{
			return false;
		}
	}
	iVar10 = func_45(55, 0);
	if (func_20(uParam0->f_194) == 0)
	{
		if (iVar10 != 0)
		{
			iVar11 = iVar10;
			if (!func_42(iVar11, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_12(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_46(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_13()
{
	if (!is_screen_faded_out())
	{
		if (!&Global_1879534)
		{
			if (!Global_1879534->f_1)
			{
				if (!bLocal_231)
				{
					bLocal_231 = true;
					func_47();
				}
				return bLocal_231;
			}
		}
	}
	return false;
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_48(1497516462);
			func_49(2016141805);
			func_49(1010885152);
			func_49(-502324015);
			break;
		case 2016141805:
			func_49(1497516462);
			func_48(2016141805);
			func_49(1010885152);
			func_49(-502324015);
			break;
		case 1010885152:
			func_49(1497516462);
			func_49(2016141805);
			func_48(1010885152);
			func_49(-502324015);
			break;
		case -502324015:
			func_49(1497516462);
			func_49(2016141805);
			func_49(1010885152);
			func_48(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_49(-538889627);
			func_49(-538880323);
			func_49(-1056767524);
			func_48(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_50();
			func_48(iParam0);
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
			func_51();
			func_48(iParam0);
			break;
		case 2019386373:
			func_49(-664252410);
			func_49(2109952320);
			func_48(2019386373);
			break;
		case -664252410:
			func_49(2019386373);
			func_49(2109952320);
			func_48(-664252410);
			break;
		case 2109952320:
			func_49(2019386373);
			func_49(-664252410);
			func_48(2109952320);
			break;
		case -1674179981:
			func_49(-1835851517);
			func_49(-1838352012);
			func_48(-1674179981);
			break;
		case -1835851517:
			func_49(-1674179981);
			func_49(-1838352012);
			func_48(-1835851517);
			break;
		case -1838352012:
			func_49(-1674179981);
			func_49(-1835851517);
			func_48(-1838352012);
			break;
		case -1717960576:
			func_49(210001842);
			func_48(-1717960576);
			break;
		case 210001842:
			func_49(-1717960576);
			func_48(210001842);
			break;
		case -150493654:
			func_49(-1271608261);
			func_49(1846061697);
			func_49(-1145519186);
			func_48(-150493654);
			break;
		case -1271608261:
			func_49(-150493654);
			func_49(1846061697);
			func_49(-1145519186);
			func_48(-1271608261);
			break;
		case 1846061697:
			func_49(-150493654);
			func_49(-1271608261);
			func_49(-1145519186);
			func_48(1846061697);
			break;
		case -1145519186:
			func_49(-150493654);
			func_49(-1271608261);
			func_49(1846061697);
			func_48(-1145519186);
			break;
		case 1766284049:
			func_49(280705402);
			func_49(1926308480);
			func_48(1766284049);
			break;
		case 280705402:
			func_49(1766284049);
			func_49(1926308480);
			func_48(280705402);
			break;
		case 1926308480:
			func_49(1766284049);
			func_49(280705402);
			func_48(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_49(439465264);
				func_48(1609506757);
			}
			else
			{
				func_49(1609506757);
				func_49(439465264);
			}
			break;
		case 439465264:
			if (func_52(1609506757))
			{
				if (bParam1)
				{
					func_48(439465264);
				}
				else
				{
					func_49(439465264);
				}
			}
			break;
		case 1822001510:
			func_49(-1612662716);
			func_48(1822001510);
			break;
		case -1612662716:
			func_49(1822001510);
			func_48(-1612662716);
			break;
		case 1306158345:
			func_49(1952610440);
			func_49(-223469678);
			func_49(-404698347);
			func_49(1517904467);
			func_48(1306158345);
			break;
		case 1952610440:
			func_49(1306158345);
			func_49(-223469678);
			func_49(-404698347);
			func_49(1517904467);
			func_48(1952610440);
			break;
		case -223469678:
			func_49(1306158345);
			func_49(1952610440);
			func_49(-404698347);
			func_49(1517904467);
			func_48(-223469678);
			break;
		case -404698347:
			func_49(1306158345);
			func_49(1952610440);
			func_49(-223469678);
			func_49(1517904467);
			func_48(-404698347);
			break;
		case 1517904467:
			func_49(1306158345);
			func_49(1952610440);
			func_49(-223469678);
			func_49(-404698347);
			func_48(1517904467);
			break;
		case 1376646519:
			func_49(931649776);
			func_49(-434590080);
			func_49(1743048395);
			func_49(449774763);
			func_48(1376646519);
			break;
		case 931649776:
			func_49(1376646519);
			func_49(-434590080);
			func_49(1743048395);
			func_49(449774763);
			func_48(931649776);
			break;
		case -434590080:
			func_49(1376646519);
			func_49(931649776);
			func_49(1743048395);
			func_49(449774763);
			func_48(-434590080);
			break;
		case 1743048395:
			func_49(1376646519);
			func_49(931649776);
			func_49(-434590080);
			func_49(449774763);
			func_48(1743048395);
			break;
		case 449774763:
			func_49(1376646519);
			func_49(931649776);
			func_49(-434590080);
			func_49(1743048395);
			func_48(449774763);
			break;
		case -1414537028:
			func_49(38162571);
			func_49(1350391819);
			func_49(54073871);
			func_48(-1414537028);
			break;
		case 38162571:
			func_49(-1414537028);
			func_49(1350391819);
			func_49(54073871);
			func_48(38162571);
			break;
		case 1350391819:
			func_49(-1414537028);
			func_49(38162571);
			func_49(54073871);
			func_48(1350391819);
			break;
		case 54073871:
			func_49(-1414537028);
			func_49(38162571);
			func_49(1350391819);
			func_48(54073871);
			break;
		case 198200492:
			func_48(198200492);
			func_49(-1124061431);
			func_49(52706132);
			func_49(-259123672);
			break;
		case -1124061431:
			func_49(198200492);
			func_48(-1124061431);
			func_49(52706132);
			func_49(-259123672);
			break;
		case 52706132:
			func_49(198200492);
			func_49(-1124061431);
			func_48(52706132);
			func_49(-259123672);
			break;
		case -259123672:
			func_49(198200492);
			func_49(-1124061431);
			func_49(52706132);
			func_48(-259123672);
			break;
		case -919512195:
			func_48(-919512195);
			func_49(-1925798111);
			func_49(420709909);
			func_49(1703426636);
			break;
		case -1925798111:
			func_48(-1925798111);
			func_49(-919512195);
			func_49(420709909);
			func_49(1703426636);
			break;
		case 420709909:
			func_48(420709909);
			func_49(-919512195);
			func_49(-1925798111);
			func_49(1703426636);
			break;
		case 1703426636:
			func_48(1703426636);
			func_49(-919512195);
			func_49(-1925798111);
			func_49(420709909);
			break;
		case -1223121209:
			func_48(-1223121209);
			func_49(630808005);
			break;
		case 630808005:
			func_48(630808005);
			func_49(-1223121209);
			break;
		case 1453909576:
			func_48(1453909576);
			func_49(1643531967);
			break;
		case 1643531967:
			func_48(1643531967);
			func_49(1453909576);
			break;
		case 0:
			func_48(0);
			func_49(473295046);
			func_49(-1738165526);
			break;
		case 473295046:
			func_48(473295046);
			func_49(0);
			func_49(-1738165526);
			break;
		case -1738165526:
			func_48(-1738165526);
			func_49(0);
			func_49(473295046);
			break;
		case 932909855:
			func_48(932909855);
			func_49(2051822093);
			break;
		case 2051822093:
			func_48(2051822093);
			func_49(932909855);
			break;
		case 405586984:
			func_48(405586984);
			func_49(1509509592);
			func_49(-959357075);
			func_49(-1311865656);
			break;
		case 1509509592:
			func_48(1509509592);
			func_49(405586984);
			func_49(-959357075);
			func_49(-1311865656);
			break;
		case -959357075:
			func_48(-959357075);
			func_49(1509509592);
			func_49(405586984);
			func_49(-1311865656);
			break;
		case -1311865656:
			func_48(-1311865656);
			func_49(1509509592);
			func_49(-959357075);
			func_49(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_48(-524145696);
			}
			else
			{
				func_49(-524145696);
			}
			func_49(1626481264);
			func_49(282809459);
			break;
		case 282809459:
			func_48(282809459);
			func_49(1626481264);
			func_49(-524145696);
			break;
		case 1626481264:
			func_48(1626481264);
			func_49(-524145696);
			func_49(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_48(885203519);
			}
			else
			{
				func_49(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_48(-1080627546);
			}
			else
			{
				func_49(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_52(iParam0))
				{
					func_48(iParam0);
				}
			}
			else if (func_52(iParam0))
			{
				func_49(iParam0);
			}
			break;
	}
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

bool func_16()
{
	switch (iLocal_228)
	{
		case 0:
			switch (Local_3.f_194)
			{
				case 0:
					if (func_53(&Local_3))
					{
						Local_258[0]->f_1 = 1684104525;
						Local_258[0]->f_3 = 1280845236;
						func_54(&(Local_258[0]->f_22));
						func_55(&(Local_258[0]->f_22));
						request_model(357863945, false);
						request_model(2051640907, false);
						request_model(func_56(), false);
						func_57(&Local_258);
						if (!func_60(&Local_203, "script@beat@wilderness@discoverables@savage_warning@savage_warning", 8600, 8611, -1, 0, 0, 0, 0))
						{
						}
						iLocal_228 = 1;
					}
					break;
				case 1:
					iLocal_228 = 1;
					break;
			}
			break;
		case 1:
			switch (Local_3.f_194)
			{
				case 0:
					if ((!has_model_loaded(357863945) || !has_model_loaded(2051640907)) || !has_model_loaded(func_56()))
					{
						return false;
					}
					if (!func_61(&Local_258))
					{
						return false;
					}
					if (!func_62(&Local_203))
					{
						return false;
					}
					break;
			}
			return true;
	}
	return false;
}

bool func_17()
{
	switch (iLocal_229)
	{
		case 0:
			switch (Local_3.f_194)
			{
				case 0:
					if (!func_64(Global_35, func_63(&Local_3), 150f, 1, 1))
					{
						return false;
					}
					break;
				case 1:
					if (!func_64(Global_35, func_63(&Local_3), 250f, 1, 1))
					{
						return false;
					}
					break;
			}
			func_65();
			func_66();
			switch (Local_3.f_194)
			{
				case 0:
					func_67(&Local_203);
					iLocal_292[0] = _get_anim_scene_ped(Local_203.f_1, "Corpse01", true);
					iLocal_292[1] = _get_anim_scene_ped(Local_203.f_1, "Corpse01^1", true);
					iLocal_292[2] = _get_anim_scene_ped(Local_203.f_1, "Corpse01^2", true);
					if (does_entity_exist(&(iLocal_234[0])))
					{
						set_ped_config_flag(&(iLocal_234[0]), 6, true);
					}
					if (does_entity_exist(&(iLocal_292[0])))
					{
						set_ped_config_flag(&(iLocal_292[0]), 6, true);
						set_ped_config_flag(&(iLocal_292[0]), 186, false);
					}
					if (does_entity_exist(&(iLocal_292[1])))
					{
						set_ped_config_flag(&(iLocal_292[1]), 6, true);
						set_ped_config_flag(&(iLocal_292[1]), 186, false);
					}
					if (does_entity_exist(&(iLocal_292[2])))
					{
						set_ped_config_flag(&(iLocal_292[2]), 6, true);
						set_ped_config_flag(&(iLocal_292[2]), 186, false);
					}
					break;
				case 1:
					func_68(&uLocal_291, -1612834106, -1950.759f, -1844.222f, 118.7414f, 0f, 0f, 15.78468f, 22.01285f, 21.37317f, 6.177776f);
					break;
			}
			iLocal_229 = 1;
			break;
		case 1:
			switch (Local_3.f_194)
			{
				case 0:
					break;
			}
			iLocal_229 = 2;
			break;
		case 2:
			switch (Local_3.f_194)
			{
				case 0:
					switch (iLocal_230)
					{
						case 0:
							if (func_70(func_63(&Local_3), func_69(&Local_3), &Local_258, &iLocal_234, 0, 0, -1, 1))
							{
								func_71(0, 0, 1, 357863945, 45454, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
								iLocal_230 = 1;
							}
							break;
						case 1:
							if (func_72(0, 0, 1, 45454, 0f, 0f, 0f, -0.1f, 0f, 0f, 90f, 0f, 0f))
							{
								func_73();
								set_ambient_zone_state("AZ_RESW_Savage_Warning_Body", true, true);
								_0x3743ce6948194349("AZ_RESW_Savage_Warning_Body", get_entity_coords(&(iLocal_234[0]), false, false), 0f);
								iLocal_229 = 6;
								return true;
							}
							break;
					}
					break;
				case 1:
					iLocal_229 = 6;
					return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_18()
{
	if (func_64(Global_35, func_63(&Local_3), 35f, 1, 1))
	{
		if (!bLocal_225)
		{
			trigger_music_event("SAVAGE_WARNING_START");
			bLocal_225 = true;
		}
	}
	else if (bLocal_225)
	{
		trigger_music_event("SAVAGE_WARNING_STOP");
		bLocal_225 = false;
	}
	switch (iLocal_226)
	{
		case 0:
			if (func_64(Global_35, func_63(&Local_3), 50f, 1, 1))
			{
				if (is_sphere_visible(func_63(&Local_3), func_74(Local_3.f_194 == 0, 3f, 6f)))
				{
					if (func_9(0))
					{
						func_75();
						func_10(1);
					}
					iLocal_226 = 1;
				}
			}
			break;
		case 1:
			if (Local_3.f_194 == 0)
			{
				if (func_24())
				{
					func_10(2);
					iLocal_226 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

int func_19()
{
	return Global_1572887->f_12;
}

int func_20(int iParam0)
{
	iVar0 = func_76(iParam0, 0);
	iVar1 = func_77(55, iVar0);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	return iVar1;
}

int func_21(int iParam0)
{
	iVar0 = func_76(iParam0, 1);
	iVar1 = func_77(55, iVar0);
	if (iVar1 == 0)
	{
		iVar1 = -15;
	}
	return iVar1;
}

void func_22(var uParam0, bool bParam1)
{
	func_78(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_79("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

bool func_23()
{
	return func_42(Local_3.f_199, 1);
}

bool func_24()
{
	if (Local_3.f_194 == 0)
	{
		if (does_entity_exist(&(iLocal_234[0])))
		{
			if (_0x79c2bec82cfd7f7f(&(iLocal_236[0])) || !_0x9b4f7e3e4f9c77b3(&(iLocal_236[0]), &(iLocal_234[0])))
			{
				return true;
			}
		}
	}
	return false;
}

void func_25()
{
	iVar0 = func_43();
	func_80(&iVar0, 0, 0, 0, 0, 1, 0, 0);
	func_81(55, 0, iVar0);
}

void func_26(int iParam0)
{
	if (*iParam0 != 0)
	{
		remove_shocking_event(*iParam0);
		*iParam0 = 0;
	}
}

void func_27()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_82(uLocal_241[iVar0], 1);
		iVar0++;
	}
}

void func_28(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_29(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_83(vVar0, 0);
}

void func_30(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_84(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_85(uParam0->f_3, 524288);
		}
	}
	if (func_86(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_86(iParam1[iVar0], 0, 0))
			{
				func_87(iParam1[iVar0], bVar3);
				if (func_88(uParam0, (*iParam1)[iVar0]))
				{
					func_89((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_86(iParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(iParam1[iVar0]))
						{
							set_ped_stealth_movement(iParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(iParam1[iVar0]))
						{
							_set_ped_crouch_movement(iParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_90(iParam1[iVar0], 1073741824, func_74(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(iParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_91(uParam0);
	}
	func_92(uParam0);
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_94(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_95(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_31()
{
	terminate_this_thread();
}

bool func_32()
{
	if (func_19() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_96((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_34()
{
	if (func_97())
	{
		return true;
	}
	if (func_98())
	{
		return true;
	}
	return false;
}

bool func_35(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_36()
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

int func_37(int iParam0)
{
	if (!func_40(iParam0))
	{
		return -1;
	}
	return func_100(func_99(iParam0));
}

bool func_38(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_41(int iParam0, int iParam1)
{
	iVar0 = func_76(iParam0, 0);
	func_101(55, iVar0, iParam1);
}

bool func_42(int iParam0, bool bParam1)
{
	return func_102(func_43(), iParam0, bParam1);
}

int func_43()
{
	return &Global_1899515;
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_102(iParam0, iParam1, 1))
	{
		iVar0 = func_103(iParam1);
		iVar1 = func_104(iParam0);
		iVar2 = (func_104(iParam0) - func_104(iParam1));
		iVar3 = (func_103(iParam0) - func_103(iParam1));
		iVar4 = (func_105(iParam0) - func_105(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_107(iParam0) - func_107(iParam1));
		iVar7 = (func_108(iParam0) - func_108(iParam1));
	}
	else
	{
		iVar0 = func_103(iParam0);
		iVar1 = func_104(iParam1);
		iVar2 = (func_104(iParam1) - func_104(iParam0));
		iVar3 = (func_103(iParam1) - func_103(iParam0));
		iVar4 = (func_105(iParam1) - func_105(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_107(iParam1) - func_107(iParam0));
		iVar7 = (func_108(iParam1) - func_108(iParam0));
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
		iVar5++;
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
		iVar4 = (iVar4 + func_109(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_110(to_float(iVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_45(int iParam0, int iParam1)
{
	iVar0 = func_111(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_2;
	}
	return 0;
}

bool func_46(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_112(iVar0))
	{
		return false;
	}
	if (func_113(iVar0, 1) || func_113(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_47()
{
	iLocal_233 = _create_volume_cylinder_with_custom_name(Local_3.f_51, 0f, 0f, 0f, func_114(), func_114(), func_114(), func_115());
	if (func_116(Global_1310750[55], 33554432))
	{
		Local_3.f_51.f_11 = func_118(iLocal_233, func_117(55), 1, 0, 2, 0, -1082130432);
	}
	else
	{
		Local_3.f_51.f_11 = func_118(iLocal_233, func_117(55), 1, 0, 8, 0, -1082130432);
	}
	func_119(55);
}

void func_48(int iParam0)
{
	iVar0 = func_120(iParam0, 1);
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

void func_49(int iParam0)
{
	iVar0 = func_120(iParam0, 1);
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

void func_50()
{
	func_49(-939420910);
	func_49(-1187950766);
	func_49(356365161);
	func_49(753127042);
	func_49(-2038424081);
	func_49(1884271742);
	func_49(459290420);
}

void func_51()
{
	func_49(704802028);
	func_49(588987611);
	func_49(2008888900);
	func_49(1649996811);
	func_49(227918160);
	func_49(168171957);
	func_49(1193080109);
	func_49(-491981251);
	func_49(-639037538);
	func_49(-618620429);
}

bool func_52(int iParam0)
{
	iVar0 = func_120(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_53(var uParam0)
{
	iVar0 = func_121(uParam0->f_3);
	iVar1 = func_122(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_54(var uParam0)
{
	func_123(uParam0, 64);
}

void func_55(var uParam0)
{
	func_123(uParam0, 4);
}

int func_56()
{
	return -1003254172;
}

void func_57(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_124(&((*uParam0)[iVar0]->f_1));
		func_124(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

char* func_58(var uParam0)
{
	return "";
}

void func_59(var uParam0)
{
}

bool func_60(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!is_string_null_or_empty(sParam7))
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = _create_anim_scene(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (!bParam8)
		{
			load_anim_scene(uParam0->f_1);
		}
		return true;
	}
	return false;
}

bool func_61(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_125((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_62(var uParam0)
{
	if (_is_anim_scene_metadata_loaded(uParam0->f_1, false) && _is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		return true;
	}
	if (!_is_anim_scene_loading(uParam0->f_1, true))
	{
		load_anim_scene(uParam0->f_1);
	}
	return false;
}

Vector3 func_63(var uParam0)
{
	return uParam0->f_51;
}

bool func_64(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_126(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_65()
{
	switch (Local_3.f_194)
	{
		case 0:
			iLocal_224 = add_shocking_event_at_position(-2108467590, func_63(&Local_3), 0f, 40f, 30f, -1f, -1f, -1, -1);
			break;
		case 1:
			iLocal_224 = add_shocking_event_at_position(-2108467590, func_63(&Local_3), 0f, 40f, 30f, -1f, -1f, -1, -1);
			break;
	}
}

void func_66()
{
	switch (Local_3.f_194)
	{
		case 0:
			break;
		case 1:
			func_127(0, 0, -1954.816f, -1842.716f, 116.6558f, 1f);
			func_127(1, 0, -1958.49f, -1850.31f, 116.619f, 1f);
			func_127(2, 0, -1947.164f, -1842.83f, 116.7066f, 1f);
			func_127(3, 0, -1943.812f, -1843.741f, 116.8166f, 1f);
			func_127(4, 1, -1950.946f, -1839.677f, 117.3138f, 3f);
			func_127(5, 1, -1953.553f, -1842.56f, 116.386f, 3f);
			func_127(6, 1, -1955.896f, -1841.763f, 116.7087f, 3f);
			func_127(7, 1, -1957.744f, -1843.842f, 116.5458f, 3f);
			func_127(8, 1, -1949.796f, -1841.32f, 116.4565f, 3f);
			break;
	}
}

void func_67(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		start_anim_scene(uParam0->f_1);
	}
}

void func_68(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	func_28(*uParam0);
	*uParam0 = _create_volume_by_hash(iParam1, vParam2, vParam5, vParam8);
	_0xb56d41a694e42e86(*uParam0, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(*uParam0, 0, 0, 0, -1, -1, 0);
}

var func_69(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_70(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_128() || !func_129((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13)
{
	if (does_entity_exist(&(iLocal_234[iParam0])))
	{
		iLocal_238[iParam1] = create_object_no_offset(iParam3, func_63(&Local_3), true, true, false, true);
		iLocal_238[iParam2] = create_object_no_offset(func_56(), func_63(&Local_3), true, true, false, true);
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	if (does_entity_exist(&(iLocal_234[iParam0])))
	{
		if (func_130(iLocal_238[iParam1], 0))
		{
			if (func_130(iLocal_238[iParam2], 0))
			{
				set_entity_visible(&(iLocal_238[iParam2]), false);
				attach_entity_to_entity_physically(&(iLocal_238[iParam1]), &(iLocal_234[iParam0]), -1, get_ped_bone_index(&(iLocal_234[iParam0]), iParam3), vParam4, vParam7, vParam10, -1f, 0, 1, 0, 0, 0, 1, 1065353216, 1065353216);
				return true;
			}
		}
	}
	return false;
}

void func_73()
{
	vVar1 = { -2.75f, 0f, -0.561f };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_236[iVar0] = _add_rope_2(func_131(iVar0) + vVar1, func_132(0f, 0f, -1f), func_133(iVar0), 1, true, -1, -1f);
		func_134(iVar0);
		iVar0++;
	}
}

float func_74(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_75()
{
	Local_3.f_199 = func_135(Local_3.f_194);
}

int func_76(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	iVar1 = iParam0;
	return ((2 * iVar1) + iVar0);
}

int func_77(int iParam0, int iParam1)
{
	iVar0 = func_111(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

void func_78(var uParam0)
{
	func_136(uParam0, 0);
	func_137(uParam0, 0);
	func_138(uParam0, 1);
	func_139(uParam0, 1);
	func_140(uParam0, 0);
	func_141(uParam0, 1);
	func_142(uParam0, 1, 1, 1);
}

var func_79(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_143(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_144(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_143(sVar0, iParam1, 0, 0, 1, 1);
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_104(*iParam0);
	iVar1 = func_103(*iParam0);
	iVar2 = func_105(*iParam0);
	iVar3 = func_106(*iParam0);
	iVar4 = func_107(*iParam0);
	iVar5 = func_108(*iParam0);
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
	iVar6 = func_109(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_109(iVar1, iVar0);
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
	func_145(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_146(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

void func_82(var uParam0, int iParam1)
{
	if (func_147(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_83(vector3 vParam0, int iParam3)
{
	if (func_35(vParam0))
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
			if (func_148(vVar2, vParam0, 2f, 1))
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

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_85(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_86(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_150(iParam0, iParam1);
}

void func_87(int iParam0, bool bParam1)
{
	if (func_86(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_151(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_88(var uParam0, var uParam1)
{
	if (func_152(uParam0->f_3, 16777216))
	{
		if (func_153(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_89(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

void func_90(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_86(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_74(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_154(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_91(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_155(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_156(uParam0);
	func_157(uParam0);
	func_158(uParam0);
	if (!func_159(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_83(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_160();
	}
	if (!func_161(uParam0->f_3) && !func_152(uParam0->f_3, 256))
	{
		func_162(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_28(uParam0->f_173);
	func_28(uParam0->f_172);
}

void func_92(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

void func_93(var uParam0, int iParam1)
{
	vVar0 = { func_63(uParam0) };
	iVar3 = func_94(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_95(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_19() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_96(int iParam0, bool bParam1)
{
	switch (func_163(iParam0))
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

bool func_97()
{
	return Global_1898164->f_163;
}

bool func_98()
{
	return Global_1310750->f_16077 != 0;
}

int func_99(int iParam0)
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

int func_100(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_101(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_146(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

bool func_102(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_164(iParam1) || !func_164(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_103(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_104(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_165(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_105(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_107(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_108(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_109(int iParam0, int iParam1)
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

float func_110(float fParam0, float fParam1, float fParam2)
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

int func_111(int iParam0, int iParam1)
{
	iVar1 = func_166(iParam0, iParam1);
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

bool func_112(int iParam0)
{
	if (((func_113(iParam0, 1) && func_113(iParam0, 2)) && func_113(iParam0, 8)) && func_113(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_113(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_114()
{
	switch (Local_3.f_194)
	{
		case 0:
			return 85f;
		case 1:
			return 50f;
		default:
			break;
	}
	return func_167(55);
}

char* func_115()
{
	return "unnamed";
}

bool func_116(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_118(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_168(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_119(int iParam0)
{
	if (!func_149(iParam0))
	{
		return;
	}
	func_169(iParam0);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_122(bool bParam0)
{
	if (bParam0)
	{
		return func_170(Global_1359489->f_4);
	}
	get_group_size(func_171(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_171(), iVar3);
		if (func_172(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_123(var uParam0, int iParam1)
{
	func_173(uParam0, iParam1);
}

void func_124(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_125(var uParam0)
{
	if (!func_174(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_174(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

float func_126(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_127(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	switch (iParam1)
	{
		case 0:
			func_175(uLocal_241[iParam0], vParam2, fParam5, 1, -1, 0);
			break;
		case 1:
			func_175(uLocal_241[iParam0], vParam2, fParam5, 2, -1, 0);
			break;
	}
}

bool func_128()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_129(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_176(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_177(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_178(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_179(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_180(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_176(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_177(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_181(&(uParam0->f_22)));
					Var2 = { func_176(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_177(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_178(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_182(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_183(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_130(var uParam0, bool bParam1)
{
	if (does_entity_exist(*uParam0))
	{
		if (bParam1 || does_entity_have_physics(*uParam0))
		{
			if (bParam1)
			{
				return true;
			}
			else if (_0xb6cbd40f8ea69e8a(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2324.364f, -1651.342f, 139.22f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_132(vector3 vParam0)
{
	vVar0 = { func_184(vParam0) };
	fVar3 = atan2(vVar0.y, vVar0.x);
	fVar4 = -atan2(vVar0.z, sqrt(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

float func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.856f;
		default:
			break;
	}
	return 0f;
}

void func_134(int iParam0)
{
	if (does_rope_exist(&(iLocal_236[iParam0])))
	{
		_0x8d59079c37c21d78(&(iLocal_236[iParam0]), 2f);
		_0x522fa3f490e2f7ac(&(iLocal_236[iParam0]), 1, 1);
		switch (iParam0)
		{
			case 0:
				func_185(iParam0, 0, 1, "PH_R_AnkleDist");
				break;
		}
	}
}

int func_135(var uParam0)
{
	iVar1 = func_43();
	iVar0 = func_76(uParam0, 1);
	func_80(&iVar1, 0, 0, 0, 1, 0, 0, 0);
	func_101(55, iVar0, iVar1);
	return iVar1;
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 16384);
	}
	else
	{
		func_187(&(uParam0->f_1), 16384);
	}
}

void func_137(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 2048);
	}
	else
	{
		func_187(&(uParam0->f_1), 2048);
	}
}

void func_138(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 256);
	}
	else
	{
		func_187(&(uParam0->f_1), 256);
	}
}

void func_139(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 16);
	}
	else
	{
		func_186(uParam0, 67108864);
		func_186(uParam0, 16);
	}
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 128);
	}
	else
	{
		func_187(&(uParam0->f_1), 128);
	}
}

void func_141(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 256);
	}
	else
	{
		func_186(uParam0, 256);
	}
}

void func_142(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_187(uParam0, 268435456);
	}
	else
	{
		func_186(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_187(uParam0, 1073741824);
	}
	else
	{
		func_186(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_187(uParam0, 536870912);
	}
	else
	{
		func_186(uParam0, 536870912);
	}
}

var func_143(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_144(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_188(sParam1));
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(iParam0, iParam6);
	func_190(iParam0, iParam5);
	func_191(iParam0, iParam4);
	func_192(iParam0, iParam3);
	func_193(iParam0, iParam2);
	func_194(iParam0, iParam1);
}

int func_146(int iParam0, int iParam1)
{
	iVar1 = func_166(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1 || &Global_17504.f_1003[iVar0] == -1)
		{
			Global_17504.f_1003[iVar0] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_147(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_148(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_149(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_150(int iParam0, int iParam1)
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
	if (func_195(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_195(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_195(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_195(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_151(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", iParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_152(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

int func_153(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_154(int* iParam0)
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

void func_155(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_156(var uParam0)
{
	if (func_196(uParam0->f_162))
	{
		func_197(&(uParam0->f_162), 1, 1);
	}
	if (func_196(uParam0->f_163))
	{
		func_197(&(uParam0->f_163), 1, 1);
	}
	if (func_196(uParam0->f_164))
	{
		func_197(&(uParam0->f_164), 1, 1);
	}
	if (func_196(uParam0->f_165))
	{
		func_197(&(uParam0->f_165), 1, 1);
	}
}

void func_157(var uParam0)
{
	if (uParam0->f_170)
	{
		func_198();
	}
}

void func_158(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_199(32);
		func_162(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_159(var uParam0)
{
	if (func_200(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_201(uParam0->f_3);
		func_202(uParam0, 0, 1);
		func_203(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_204(0, 0);
		return true;
	}
	return false;
}

void func_160()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_161(int iParam0)
{
	if (!func_149(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_162(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_205(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_19() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_163(int iParam0)
{
	if (!func_40(iParam0))
	{
		return -1;
	}
	return func_206(iParam0);
}

bool func_164(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_108(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_107(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_104(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_105(iParam0);
	if (iVar5 < 1 || iVar5 > func_109(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_165(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_166(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

float func_167(int iParam0)
{
	if (!func_149(iParam0))
	{
		return 0f;
	}
	if (!func_207(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

int func_168(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_35(vParam0))
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
		if (func_208(vParam0))
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
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_209(iVar0, bParam8);
	return iVar0;
}

void func_169(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

int func_170(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_210(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_171()
{
	return get_player_group(get_player_index());
}

bool func_172(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_19() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_174(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_175(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_147(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_147(uParam0))
		{
		}
	}
}

Vector3 func_176(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_177(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_211((fParam0 + fParam1));
}

int func_178(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_212(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_213(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_214(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_214(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_215(iVar0))
		{
			func_183(iVar0, &(uParam1->f_23), 0);
		}
		if (func_215(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_216(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_217(&(uParam1->f_22)));
			func_219(iVar0, func_218(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_220(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_221(&(uParam1->f_22)))
		{
			func_222(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_223(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_195(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_215(iVar0))
		{
			func_225(iVar0, !func_224(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_226(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_227(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_227(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_179(int iParam0, int iParam1)
{
	if (func_228(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_180(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_229(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_181(var uParam0)
{
	return func_195(*uParam0, 32);
}

int func_182(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_183(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_86(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

Vector3 func_184(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_185(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	set_entity_coords(&(iLocal_238[iParam2]), func_131(iParam0), true, false, true, true);
	freeze_entity_position(&(iLocal_238[iParam2]), true);
	_0x462ff2a432733a44(&(iLocal_236[iParam0]), &(iLocal_238[iParam2]), &(iLocal_234[iParam1]), 0f, 0f, 0f, 0f, 0f, 0f, "ropeAttach", sParam3);
	_0x3c6490d940ff5d0b(&(iLocal_236[iParam0]), "ropeAttach", sParam3, func_230(iParam0, 1068708659), 0);
	_0x76bad9d538bca1aa(&(iLocal_236[iParam0]), 0f);
	_0xb40ea9e0d2e2f7f3(&(iLocal_236[iParam0]), 1f);
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_188(char* sParam0)
{
	return sParam0;
}

void func_189(int iParam0, int iParam1)
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

void func_190(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = func_103(*iParam0);
	iVar1 = func_104(*iParam0);
	if (iParam1 < 1 || iParam1 > func_109(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_192(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_193(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_194(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_195(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_196(int iParam0)
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

void func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_196(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_231(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_232(iVar0);
	*uParam0 = 0;
}

void func_198()
{
	func_233(23);
}

void func_199(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_200(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_201(int iParam0)
{
	iVar0 = func_234(iParam0);
	if (iVar0 != 0)
	{
		func_235(-1, 24, 0, iVar0);
	}
}

void func_202(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_116(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_152(uParam0->f_3, 1073741824))
			{
				func_236(2, -1, 0, 0, 0);
			}
			else
			{
				func_236(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_236(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_237(1, uParam0->f_177))
				{
					func_238(16, uParam0->f_177);
					func_239(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_240(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_236(8, -1, 0, 0, 0);
	}
}

void func_203(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_242(func_241(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_152(iParam0, 2))
	{
		func_244(iParam0, func_243(iParam3));
	}
	if (func_152(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_245();
		}
		func_246(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_247(iParam0, 65536))
	{
		func_248(iParam0, iParam1);
		func_250(iParam0, func_249(iParam0, iParam1));
		func_199(128);
	}
	func_251(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_252(iParam0, 1);
	if (!bParam2)
	{
		func_199(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_253(524288);
	}
	if (func_254(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_254(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_204(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_255(&Global_0, 8);
	}
	if (!func_256() || func_19() != -1)
	{
		return;
	}
	func_255(&Global_0, 1);
}

int func_205(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_206(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_257(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_207(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_208(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

float func_211(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_212(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_258(&uParam1))
	{
		return 1;
	}
	if (!func_259(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_213(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_214(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_260(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_215(int iParam0)
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

bool func_216(var uParam0)
{
	return func_195(*uParam0, 4);
}

bool func_217(var uParam0)
{
	return func_195(*uParam0, 64);
}

bool func_218(var uParam0)
{
	return func_195(*uParam0, 8);
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_220(var uParam0)
{
	return func_195(*uParam0, 128);
}

bool func_221(var uParam0)
{
	return func_195(*uParam0, 2048);
}

void func_222(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_223(var uParam0)
{
	return func_195(*uParam0, 1024);
}

bool func_224(var uParam0)
{
	return func_195(*uParam0, 256);
}

void func_225(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_226(var uParam0)
{
	return func_195(*uParam0, 512);
}

bool func_227(var uParam0)
{
	return func_195(*uParam0, 4096);
}

int func_228(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

int func_229(int iParam0)
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

float func_230(int iParam0, float fParam1)
{
	return (func_133(iParam0) * fParam1);
}

int func_231(var uParam0)
{
	return uParam0;
}

void func_232(int iParam0)
{
	if (!func_261(iParam0))
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

void func_233(int iParam0)
{
	if (func_19() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_150(func_262(iVar0), 0))
		{
			if (is_ped_group_member(func_262(iVar0), func_171(), 1))
			{
				func_263(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_264() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_264();
					}
					func_80(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_186(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_265(Global_1393447, 1);
	func_266();
	func_267();
	func_268((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_269() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_270();
		if (iParam1 == -1)
		{
			if (func_271(iParam0, 1))
			{
				func_272(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_271(iParam0, 2))
			{
				func_272(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_271(iParam0, 4))
			{
				func_272(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_273(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_274(to_float(iVar0), 1, 0);
	}
	else
	{
		func_274((to_float(200) / 3f), 1, 0);
	}
}

bool func_237(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_238(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_239(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

struct<2> func_241(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_242(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_243(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_275(1);
	}
	else
	{
		iVar0 = func_276(iParam0);
	}
	return iVar0;
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_277(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_278(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

int func_245()
{
	return Global_1897952->f_41;
}

void func_246(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_247(iParam0, 8192))
	{
		iVar0 = func_278(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

bool func_247(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_248(int iParam0, int iParam1)
{
	iVar0 = (func_279(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

Vector3 func_249(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_149(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_280(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_279(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_250(int iParam0, vector3 vParam1)
{
	if (func_152(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_35(vParam1))
	{
		return;
	}
	if (!func_149(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_35(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_148(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_251(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_162(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_252(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_152(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_272(262144, iVar0, 0, 1);
		}
	}
	if (func_152(iParam0, 128))
	{
		func_272(128, iVar0, 0, 1);
	}
	else if (func_152(iParam0, 524288))
	{
		func_272(524288, iVar0, 0, 1);
	}
	else if (func_152(iParam0, 536870912))
	{
		func_272(536870912, iVar0, 0, 1);
	}
	else if (func_152(iParam0, 4194304))
	{
		func_272(4194304, iVar0, 0, 1);
	}
	else if (func_152(iParam0, 8388608))
	{
		func_272(8388608, iVar0, 0, 1);
	}
}

void func_253(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_281(iVar0, iParam0);
		iVar0++;
	}
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_255(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_256()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_257(int iParam0)
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

bool func_258(var uParam0)
{
	return func_195(*uParam0, 1);
}

bool func_259(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_282(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_260(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_283(iParam1))
		{
			func_284(iParam0, 41788943);
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
			func_285(iParam0, 0, 1);
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
			func_286(iParam0, 0);
			bVar0 = true;
		}
		func_287(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_261(int iParam0)
{
	return func_288(iParam0, 2);
}

int func_262(int iParam0)
{
	if (!func_289(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_263(int iParam0, int iParam1)
{
	if (!func_290(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_264()
{
	return &Global_1899515;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_266()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_291(iVar0, 128))
		{
			func_292(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_267()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_291(iVar0, 128) && func_291(iVar0, 1))
		{
			func_292(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_268(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

int func_269()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_270()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_152(iVar0, 16777216))
		{
			if (!func_293(iVar0))
			{
				func_281(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_271(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_272(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_116(Global_1310750[iVar0], iParam0))
		{
			if (!func_161(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_294(iVar0) < func_295(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_251(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_162(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_162(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_162(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_162(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_162(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_162(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_162(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_274(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_296();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_275(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_297(1, 0, 0);
	}
	else
	{
		iVar0 = func_298();
	}
	return func_276(iVar0);
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1)
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

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

void func_281(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_282(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_283(int iParam0)
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

void func_284(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_299(iParam0, iParam1))
		{
			if (func_300(iParam0, iParam1))
			{
				if (func_301(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_302(iParam0);
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

void func_285(int iParam0, int iParam1, bool bParam2)
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

void func_286(int iParam0, bool bParam1)
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

void func_287(int iParam0, int iParam1)
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

bool func_288(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_289(int iParam0)
{
	return iParam0 > -1;
}

bool func_290(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_291(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_292(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_293(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

int func_294(int iParam0)
{
	if (func_149(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_295(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

float func_296()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_297(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_303(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_298()
{
	return Global_1894899->f_2;
}

bool func_299(int iParam0, int iParam1)
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

bool func_300(int iParam0, int iParam1)
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

bool func_301(int iParam0, int iParam1)
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
	if (!func_299(iParam0, iVar0))
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

void func_302(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_303(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

