void __EntryFunction__()
{
	func_1(&Local_13, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		network_set_script_is_safe_for_network_game();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_13);
		}
	}
	if (func_2() == -1)
	{
		if (has_force_cleanup_occurred(523))
		{
			func_5(&Local_13);
		}
	}
	if (!_does_scenario_point_exist(Local_13.f_11))
	{
		func_5(&Local_13);
	}
	while (func_6(&Local_13))
	{
		if (func_7())
		{
			func_5(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_5(&Local_13);
		}
		wait(0);
	}
	func_5(&Local_13);
}

void func_1(var uParam0, vector3 vParam1)
{
	*uParam0 = func_9(vParam1);
	uParam0->f_1 = func_10(vParam1);
	uParam0->f_2 = func_11(vParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = vParam1.x;
	uParam0->f_11 = vParam1.y;
	uParam0->f_5 = { _get_scenario_point_coords(uParam0->f_11, true) };
	uParam0->f_55[0] = 1924088058;
	uParam0->f_55[1] = 1639046972;
	uParam0->f_55[2] = -1963501782;
	uParam0->f_55[3] = 2143682238;
	uParam0->f_55[4] = -972590214;
	uParam0->f_55[5] = -417335499;
	uParam0->f_55[6] = 467408818;
	uParam0->f_55[7] = -2053586493;
	uParam0->f_55[8] = -2133164405;
	uParam0->f_55[9] = -1724023040;
	uParam0->f_55[10] = 494571889;
	uParam0->f_55[11] = 790068786;
	uParam0->f_55[12] = 1373471224;
	uParam0->f_55[13] = -1555042073;
	uParam0->f_55[14] = 1896032674;
	uParam0->f_55[15] = 1090498470;
	uParam0->f_55[16] = -458420031;
	uParam0->f_55[17] = 1664062243;
	uParam0->f_55[18] = -551182035;
	uParam0->f_55[19] = 384178408;
	uParam0->f_55[20] = 328855486;
	uParam0->f_55[21] = 1132161511;
	uParam0->f_55[22] = -1555585595;
	uParam0->f_55[23] = 383936181;
	uParam0->f_55[24] = 800098637;
	uParam0->f_55[25] = -1093637570;
	uParam0->f_55[26] = 1055791420;
	uParam0->f_55[27] = -586283258;
	uParam0->f_55[28] = -1922025145;
	uParam0->f_55[29] = -1653099775;
	uParam0->f_55[30] = 116619265;
	uParam0->f_55[31] = 1322862606;
	uParam0->f_55[32] = 1569902667;
	uParam0->f_55[33] = 1155584865;
	uParam0->f_55[34] = -2090931256;
	uParam0->f_55[35] = -2024019598;
	uParam0->f_55[36] = -274901691;
	uParam0->f_55[37] = 939128696;
	uParam0->f_55[38] = 76710316;
	uParam0->f_13 = func_12(uParam0);
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_13(&(uParam0->f_95));
	if (does_entity_exist(uParam0->f_54))
	{
		if (_0x0e6846476906c9dd(player_id(), uParam0->f_54))
		{
			func_14(uParam0->f_54, uParam0->f_54, 0);
		}
	}
	_0xe7282390542f570d(uParam0->f_12);
	terminate_this_thread();
}

bool func_6(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	bVar0 = func_15(uParam0) < 4;
	if (func_15(uParam0) > 2 && func_15(uParam0) < 4)
	{
		func_16(&(uParam0->f_95), uParam0->f_5, bVar0, bVar0, 1, 0);
	}
	if (func_17(Global_1296859->f_8, uParam0->f_5, 1) < 2f)
	{
		func_18(&(uParam0->f_95.f_6));
	}
	switch (func_15(uParam0))
	{
		case 0:
			func_19(uParam0, 1);
			break;
		case 1:
			if (!_0xcf45df50c7775f2a())
			{
				if (!_is_imap_active_2(uParam0->f_1))
				{
					_request_imap_2(uParam0->f_1);
				}
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_20(uParam0))
			{
				if (does_entity_exist(func_21(uParam0)))
				{
					uParam0->f_8 = { get_entity_coords(uParam0->f_54, true, false) };
					_0x7563cbca99253d1a(uParam0->f_54, 187984275);
					_0x1726963e6049db53(uParam0->f_54);
					func_22(uParam0->f_54, uParam0->f_54, 0);
					_0x553d67295ddd2309(uParam0->f_54);
					func_19(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!does_entity_exist(uParam0->f_54))
			{
				if (func_20(uParam0) && does_entity_exist(func_21(uParam0)))
				{
					_0x553d67295ddd2309(uParam0->f_54);
				}
				else
				{
					return false;
				}
			}
			if (_0x188313616d184213(uParam0->f_8, get_entity_model(uParam0->f_54)))
			{
				if (does_entity_exist(uParam0->f_54))
				{
					if (_0x0e6846476906c9dd(player_id(), uParam0->f_54))
					{
						func_14(uParam0->f_54, uParam0->f_54, 0);
					}
					func_13(&(uParam0->f_95));
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	iVar1 = Param0.f_1;
	if (_does_scenario_point_exist(iVar1))
	{
		iVar0 = round(_0x6718f40313a2b5a6(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
	}
	return 1;
}

int func_10(struct<2> Param0, var uParam2)
{
	iVar1 = Param0.f_1;
	if (_does_scenario_point_exist(iVar1))
	{
		iVar0 = round(_0x6718f40313a2b5a6(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return -117847307;
		case 2:
			return -863309194;
		case 3:
			return 1181416174;
		case 4:
			return 188714829;
		case 5:
			return 1067836986;
		case 6:
			return -19043490;
		case 7:
			return 1423626752;
		case 8:
			return 1498576406;
		case 9:
			return -1923863493;
		case 10:
			return -250669847;
		case 11:
			return -391528998;
		case 12:
			return 970334657;
		case 13:
			return -1445626658;
		case 14:
			return -1262762728;
		case 15:
			return -1374528601;
		case 16:
			return 82281660;
		case 17:
			return -1666038504;
		case 18:
			return 2111987179;
		case 19:
			return 1204906867;
		case 20:
			return 1143189384;
		case 21:
			return -1546507097;
		case 22:
			return -1082524312;
		case 23:
			return -833697651;
		case 24:
			return -783284068;
		case 25:
			return 1700073271;
		case 26:
			return 630089379;
	}
	return -117847307;
}

char* func_11(struct<2> Param0, var uParam2)
{
	iVar1 = Param0.f_1;
	if (_does_scenario_point_exist(iVar1))
	{
		iVar0 = round(_0x6718f40313a2b5a6(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
		case 2:
			return "MP007_A2_BMecklace03_IPL";
		case 3:
			return "mp005_a1_BPRing02_IPL";
		case 4:
			return "MP007_a2_BANecklace01_IPL";
		case 5:
			return "MP007_a2_BANecklace02_IPL";
		case 6:
			return "MP007_A2_BANecklace03_IPL";
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
		case 8:
			return "MP007_A2_DPBracelet03_IPL";
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
		case 11:
			return "MP007_A2_HGBracelet02_IPL";
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
		case 13:
			return "mp007_a2_HGEarring02_IPL";
		case 14:
			return "mp007_a2_HCRing02_IPL";
		case 15:
			return "MP007_A2_HSBRACELET01_IPL";
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
		case 19:
			return "mp005_a1_MTRing02_IPL";
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
		case 21:
			return "MP005_A3_ODEarring1_IPL";
		case 22:
			return "MP005_A3_RANecklace02_IPL";
		case 23:
			return "MP005_A4_RANecklace03_IPL";
		case 24:
			return "mp005_a1_SDRing01_IPL";
		case 25:
			return "mp005_a1_WDRing1_IPL";
		case 26:
			return "mp007_a2_DEEarring02_IPL";
	}
	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0)
{
	iVar0 = -1;
	switch (*uParam0)
	{
		case 1:
			iVar0 = 1776680074;
			break;
		case 2:
			iVar0 = 1776680074;
			break;
		case 3:
			iVar0 = 1776680074;
			break;
		case 4:
			iVar0 = 1776680074;
			break;
		case 5:
			iVar0 = 1776680074;
			break;
		case 6:
			iVar0 = 1776680074;
			break;
		case 7:
			iVar0 = 1776680074;
			break;
		case 8:
			iVar0 = 1776680074;
			break;
		case 9:
			iVar0 = 1776680074;
			break;
		case 10:
			iVar0 = 1776680074;
			break;
		case 11:
			iVar0 = 1776680074;
			break;
		case 12:
			iVar0 = 1776680074;
			break;
		case 13:
			iVar0 = 1776680074;
			break;
		case 14:
			iVar0 = 1776680074;
			break;
		case 15:
			iVar0 = 1776680074;
			break;
		case 16:
			iVar0 = 1776680074;
			break;
		case 17:
			iVar0 = 1776680074;
			break;
		case 18:
			iVar0 = 1776680074;
			break;
		case 19:
			iVar0 = 1776680074;
			break;
		case 20:
			iVar0 = 1776680074;
			break;
		case 21:
			iVar0 = 1776680074;
			break;
		case 22:
			iVar0 = 1776680074;
			break;
		case 23:
			iVar0 = 1776680074;
			break;
		case 24:
			iVar0 = 1776680074;
			break;
		case 25:
			iVar0 = 1776680074;
			break;
		case 26:
			iVar0 = 1776680074;
			break;
	}
	return iVar0;
}

void func_13(var uParam0)
{
	func_23(uParam0);
	func_24(&(uParam0->f_7), 1);
}

int func_14(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_itemset_valid(Global_1297612->f_32) && is_in_itemset(iParam0, Global_1297612->f_32))
	{
		remove_from_itemset(iParam0, Global_1297612->f_32);
	}
	_0x9dae1380cc5c6451(player_id(), iParam0);
	_0xdc5e09d012d759c4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (does_entity_exist(Global_1297612[iVar0]) && Global_1297612[iVar0] == iParam0)
		{
			_copy_memory((*Global_1297612)[iVar0], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(var uParam0)
{
	return uParam0->f_3;
}

void func_16(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_25(-1733092640, 1))
	{
		return;
	}
	if (func_26(0))
	{
		return;
	}
	if (func_27())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!is_player_control_on(get_player_index()))
	{
		return;
	}
	if (!is_entity_dead(get_player_ped(player_id())) && _0xec7e480ff8bd0bed(get_player_ped(player_id())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_29(*Global_1212889) && get_distance_between_coords(*Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_17(get_player_ped(player_id()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_30()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = get_sound_id();
						if (func_31(get_player_ped(player_id()), 0, 1, 0) != -862059856)
						{
							_0xdcf5ba95bbf0faba(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_32(uParam0, 1);
					}
				}
				else
				{
					func_32(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = floor((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = floor((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = absi(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (fVar1 < 3f && bParam7)
			{
				func_33(250);
			}
			set_pad_shake(0, iVar3, iVar4);
			func_34(&(uParam0->f_2));
			func_32(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_23(uParam0);
				}
				func_32(uParam0, 0);
			}
			else if (func_35(&(uParam0->f_2)) >= 2f)
			{
				func_32(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_33(250);
			}
			break;
	}
}

float func_17(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_18(var uParam0)
{
	if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (_uiprompt_is_control_action_active(668058244))
		{
			if (!*uParam0)
			{
				play_sound_frontend("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_20(var uParam0)
{
	if (func_36(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
	{
		return true;
	}
	return false;
}

var func_21(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (does_entity_exist(&(uParam0->f_14[iVar0])))
		{
			uParam0->f_54 = &uParam0->f_14[iVar0];
			return &(uParam0->f_14[iVar0]);
		}
		iVar0++;
	}
	return uVar1;
}

int func_22(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_itemset_valid(Global_1297612->f_32))
	{
		Global_1297612->f_32 = create_itemset(true);
	}
	if (!is_in_itemset(iParam0, Global_1297612->f_32))
	{
		add_to_itemset(iParam0, Global_1297612->f_32);
	}
	if (!func_37(iParam0))
	{
		_0x543dfe14be720027(player_id(), iParam0, 0);
		_0x6ecfc621a168424c(iParam0, uParam1, iParam2, 0);
		_0x907b16b3834c69e2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_entity_exist(Global_1297612[iVar0]))
		{
			(*Global_1297612)[iVar0] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		_0x0f2a2175734926d8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		release_sound_id(uParam0->f_5);
		stop_pad_shake(0);
		uParam0->f_5 = -1;
	}
	_0x531a78d6bf27014b("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_24(var uParam0, int iParam1)
{
	if (func_38(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_25(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_40(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_41(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_42(iParam0))
			{
				return true;
			}
			break;
	}
	return func_43(iParam0, 0, 0, 0) >= iParam1;
}

bool func_26(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_27()
{
	return func_44() != -1;
}

bool func_28()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_30()
{
	return Global_1146212->f_2169[89]->f_201;
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_33(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_34(var uParam0)
{
	func_45(uParam0, 0f);
}

float func_35(var uParam0)
{
	if (!func_46(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_47(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_48() - uParam0->f_1);
}

int func_36(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_49(uParam0, uParam1, iVar0, iParam2);
	func_50(iVar0);
	return iVar1;
}

bool func_37(int iParam0)
{
	if (func_51() == 0)
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(func_51()))
	{
		return false;
	}
	Var0 = func_51();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = get_entity_model(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (_datafile_get_string(&uVar5, &Var0))
			{
				iVar15 = get_hash_key(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

bool func_38(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_39(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_40(int iParam0)
{
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_41(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_52(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_53("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_54(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_55(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_56(iVar1);
				return true;
			}
			iVar3++;
		}
		func_56(iVar1);
	}
	return false;
}

bool func_42(int iParam0)
{
	if (!func_39(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_58(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_59(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_60(iParam0);
	iVar2 = func_59(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_43(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_40(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_52(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_61(iParam0, 0);
	}
	if (func_62(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_63(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_64(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_63(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_44()
{
	return Global_1138962->f_137;
}

void func_45(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_48() - fParam1);
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_46(var uParam0)
{
	return func_67(*uParam0, 1);
}

bool func_47(var uParam0)
{
	return func_67(*uParam0, 2);
}

float func_48()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_49(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (is_entity_an_object(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (get_entity_model(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			destroy_itemset(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

void func_50(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_51()
{
	return Global_1071686->f_28448[47]->f_3;
}

int func_52(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_68(iParam0, 1399091007))
	{
		func_69(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_53(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_63(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_54(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_55(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_60(int iParam0)
{
	iVar0 = func_57(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_70(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_72(&Var0, func_71(0));
	}
	if (!func_73(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_56(iVar14);
	return uVar15;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_63(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_64(int iParam0, bool bParam1)
{
	Var0 = { func_74(iParam0, bParam1, 0) };
	return func_75(iParam0, Var0, Var0.f_4, bParam1);
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_67(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_68(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 0))
	{
		return func_77(func_76(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_69(int iParam0, var uParam1, var uParam2)
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

struct<14> func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_71(bool bParam0)
{
	iVar0 = func_63(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_75(923904168, func_78(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_75(923904168, func_78(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_75(923904168, func_78(bParam0), -740156546, 0);
}

void func_72(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_73(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_63(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_74(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_78(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_40(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_75(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_71(bParam1) };
			if (bParam2 && func_79(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_80(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_80(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_81(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_82(bParam1) };
			switch (func_57(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_83(iParam0, -1823706425))
			{
				Var0 = { func_75(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_83(iParam0, -1483207246))
			{
				Var0 = { func_75(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_75(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_83(iParam0, -1653629781))
			{
				Var0 = { func_75(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_84(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_83(iParam0, -1653629781))
			{
				Var0 = { func_75(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

struct<4> func_75(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_39(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_63(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_76(int iParam0)
{
	return iParam0;
}

int func_77(int iParam0, int iParam1)
{
	if (!func_85(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

struct<4> func_78(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_63(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_75(1328661203, func_86(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_75(1328661203, func_86(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_75(1328661203, func_86(), -1591664384, bParam0);
}

bool func_79(int iParam0, bool bParam1)
{
	if (func_57(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_87();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_80(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_88(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_81(int iParam0, var uParam1, int iParam2)
{
	if (func_89(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_82(bool bParam0)
{
	iVar0 = func_63(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_75(271701509, func_78(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_75(271701509, func_78(bParam0), 12999093, 0);
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_57(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_90(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_84(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_91(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_86()
{
	return Var0;
}

bool func_87()
{
	return (func_92(-1185145312, 0, 0, 0) > 0 && func_93(func_75(889965687, func_78(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_88(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_62(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_75(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_63(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_63(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_89(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_63(0);
	*uParam1 = { func_75(iParam0, func_71(0), iParam3, 0) };
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

bool func_90(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_91(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_63(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_92(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_94(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_63(bParam1), iParam0, iParam3);
}

int func_93(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_95(&uParam0, iParam4, bParam5, iParam6);
}

bool func_94(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_95(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_96(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_96(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_63(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_91(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

