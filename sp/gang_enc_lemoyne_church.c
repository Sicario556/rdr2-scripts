void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		Local_14.f_237 = get_cause_of_most_recent_force_cleanup();
		Local_14.f_236 = 1;
	}
	while (true)
	{
		func_2(Local_14.f_236, 244, 0);
		if (Local_14.f_236)
		{
			wait(0);
		}
		else
		{
			if (func_3())
			{
				func_1();
			}
			if (Local_14.f_20 > 0)
			{
				func_4();
				func_5();
			}
			switch (Local_14.f_20)
			{
				case 0:
					if (func_6(ScriptParam_0))
					{
						func_7(&Local_14, 1);
					}
					break;
				case 1:
					if (func_8() && _0x5e420ff293ee5472())
					{
						func_7(&Local_14, 2);
					}
					break;
				case 2:
					if (func_9())
					{
						func_10(&Local_14, &(Local_14.f_25));
						func_7(&Local_14, 3);
					}
					break;
				case 3:
					if (func_11())
					{
						func_7(&Local_14, 4);
					}
					break;
				case 4:
					func_12();
					break;
			}
			wait(0);
		}
	}
}

void func_1()
{
	if (Local_14.f_236)
	{
		if (func_13() > 0)
		{
			if (func_14(Local_14.f_237, 1) || func_14(Local_14.f_237, 2))
			{
				Global_1392135->f_55 = 0;
				Global_1392135->f_56 = 0;
				func_15(65536, 2);
			}
		}
	}
	else
	{
		_remove_imap(1335714585);
	}
	func_16(&(Local_14.f_247));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(Local_14.f_241[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(&(Local_14[iVar0])))
		{
			func_18(Local_14[iVar0]);
		}
		func_19(Local_14[iVar0], !Local_14.f_236);
		iVar0++;
	}
	if (_does_volume_exist(&(Local_14.f_222[0])))
	{
		_0x74c2b3dc0b294102(&(Local_14.f_222[0]));
		_0xa1cfb35069d23c23(&(Local_14.f_222[0]));
	}
	func_20(&(Local_14.f_18));
	Global_1392135->f_55 = 0;
	if (func_21(65536, 2))
	{
		if (func_13() <= 0)
		{
			if (func_23(func_22()))
			{
				func_24(func_22(), 1);
			}
		}
	}
	terminate_this_thread();
}

void func_2(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_25(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_3()
{
	if (Local_14.f_20 > 0)
	{
		if (vdist2(Global_36, Local_14.f_238) > 40000f)
		{
			return true;
		}
		if (Local_14.f_23 <= 0)
		{
			if (func_26(22530, 1, 1))
			{
				return true;
			}
			if (func_27())
			{
				return true;
			}
		}
	}
	return false;
}

void func_4()
{
	switch (Local_14.f_210)
	{
		case 0:
			Local_14.f_212 = get_distance_between_coords(Global_36, Local_14.f_238, false);
			break;
		case 1:
			break;
		case 2:
			break;
	}
	Local_14.f_210++;
	if (Local_14.f_210 > 2)
	{
		Local_14.f_210 = 0;
	}
}

void func_5()
{
	if (Local_14.f_212 < 90f)
	{
		if (!func_28(&Local_14, 2))
		{
			if (func_29(Local_14.f_238, 1050253722, 1060320051, 0, 1061158912) || Local_14.f_212 < 60f)
			{
				if (is_screen_faded_in())
				{
					func_30(&Local_14, 2);
				}
			}
		}
		else if (!func_28(&Local_14, 4))
		{
			if (Local_14.f_212 < 60f)
			{
				bVar0 = true;
				bVar1 = true;
				iVar2 = 0;
				while (iVar2 <= 4)
				{
					bVar0 = func_31(iVar2);
					if (!bVar0)
					{
						bVar1 = false;
					}
					iVar2++;
				}
				if (bVar1)
				{
					func_30(&Local_14, 4);
				}
				func_20(&(Local_14.f_18));
			}
		}
	}
}

bool func_6(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	Local_14.f_19 = 0;
	Local_14.f_238 = { Param0.f_6 };
	Local_14.f_209 = 5;
	_0xed9582b3da8f02b4(Local_14.f_209);
	_request_imap(1335714585);
	func_32(Local_14.f_241[1], 1587.413f, -1842.189f, 51.45913f, 0.88f, 0, 1);
	func_32(Local_14.f_241[2], 1588.182f, -1842.265f, 51.46088f, 0.82f, 0, 1);
	func_32(Local_14.f_241[3], 1586.058f, -1844.742f, 51.35341f, 1.4f, 0, 1);
	func_32(Local_14.f_241[4], 1599.115f, -1841.963f, 51.35335f, 0.72f, 0, 1);
	if (!func_23(func_22()))
	{
		func_33(func_22(), 125f, "lemoyne_raider_church", 1, 0, 1, 0, -1082130432);
	}
	Local_14.f_222[0] = _create_volume_cylinder_with_custom_name(1593.4f, -1845.3f, 53.7f, 0f, 0f, 0f, 60f, 60f, 10f, "volRestriction");
	_0x18262cafebb5fbe1(&(Local_14.f_222[0]), 2272, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(&(Local_14.f_222[0]), 2272, 0, 0, -1, -1, 0);
	Local_14.f_222[2] = _create_volume_aggregate_with_custom_name("volAlerted");
	_0xbce668aaf83608be(&(Local_14.f_222[2]), 1560.173f, -1821.479f, 53.70001f, 0f, 0f, 0f, 40f, 40f, 10f);
	_0xbce668aaf83608be(&(Local_14.f_222[2]), 1573.658f, -1860.942f, 53.70001f, 0f, 0f, 0f, 50.20991f, 40f, 10f);
	_0x39816f6f94f385ad(&(Local_14.f_222[2]), 1576.054f, -1817.751f, 57.71899f, 0f, 0f, 14.44917f, 69.3563f, 74.30799f, 33.77632f);
	_0x39816f6f94f385ad(&(Local_14.f_222[2]), 1577.62f, -1842.014f, 57.719f, 0f, 0f, 40.91763f, 76.28379f, 74.30799f, 33.77632f);
	_0x39816f6f94f385ad(&(Local_14.f_222[2]), 1613.172f, -1828.555f, 57.71899f, 0f, 0f, 29.44917f, 11.87738f, 39.2687f, 33.77632f);
	_0x39816f6f94f385ad(&(Local_14.f_222[2]), 1609.511f, -1820.207f, 57.71899f, 0f, 0f, 21.44917f, 11.87738f, 39.2687f, 33.77632f);
	func_34(&(Local_14.f_180));
	func_35(&(Local_14.f_180));
	func_36(&(Local_14.f_180));
	func_37(&(Local_14.f_180), 1);
	func_38(&(Local_14.f_180), 0);
	func_39(&(Local_14.f_180), 0);
	func_40(&(Local_14.f_180), 1);
	func_41(&(Local_14.f_180), 1);
	return true;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

int func_8()
{
	switch (Local_14.f_21)
	{
		case 0:
			func_42(&Local_14);
			func_43(&Local_14, 1);
			break;
		case 1:
			if (!func_44(&Local_14))
			{
				return 0;
			}
			func_43(&Local_14, 3);
			break;
		case 2:
			break;
		case 3:
			return 1;
	}
	return 0;
}

bool func_9()
{
	switch (Local_14.f_22)
	{
		case 0:
			if (func_45())
			{
				Local_14.f_22 = 1;
			}
			break;
		case 1:
			if (func_46())
			{
				Local_14.f_22 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_10(var uParam0, var uParam1)
{
	sVar0[0] = func_47(7);
	sVar0[1] = func_47(10);
	sVar3[0] = "GEAC_ILO_GREET";
	sVar3[1] = "GEAC_ILO_ANTAGONIZE";
	func_48(uParam1->f_106[0], &(sVar0[0]), &(sVar3[0]), -163964935, 0, 0, 0, 0, 0);
	func_48(uParam1->f_106[1], &(sVar0[1]), &(sVar3[1]), 648122183, 0, 0, 0, 0, 0);
}

bool func_11()
{
	switch (Local_14.f_19)
	{
		case 0:
			if (func_49())
			{
				func_50(65536, 2);
				return true;
			}
			break;
		case 3:
			func_51();
			break;
		case 4:
			func_52();
			break;
	}
	return false;
}

void func_12()
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (func_53(&(Local_14[iVar0]), 0, 0))
		{
			if (does_blip_exist(&(Local_14.f_6[iVar0])))
			{
				if (is_ped_fleeing(&(Local_14[iVar0])))
				{
					if (func_54(&(Local_14[iVar0]), Local_14.f_238, 1) > 30f)
					{
						func_20(Local_14.f_6[iVar0]);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_13()
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (func_53(&(Local_14[iVar0]), 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_15(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (&Global_40.f_9571[iParam1] - (Global_40.f_9571[iParam1] && iParam0));
}

void func_16(var uParam0)
{
	if (func_55(*uParam0, 8))
	{
		_0x660a8f876df1d4f8(39);
		func_56(uParam0, 8);
	}
}

void func_17(var uParam0, int iParam1)
{
	if (func_57(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_18(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

void func_19(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_20(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_21(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

Vector3 func_22()
{
	return 1593.4f, -1845.3f, 53.7f;
}

bool func_23(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_24(vector3 vParam0, int iParam3)
{
	if (func_58(vParam0))
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
			if (func_59(vVar2, vParam0, 2f, 1))
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

bool func_25(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_60(iVar0))
	{
		return false;
	}
	if (func_61(iVar0, 1) || func_61(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0, bool bParam1, bool bParam2)
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
		if (func_62())
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
		iVar0 = func_63(&(Global_1898164->f_1[0]));
		if (func_64(iVar0) && func_65((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_66(&(Global_1898164->f_1[0])))
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

bool func_27()
{
	return Global_1572864->f_8 != -1;
}

bool func_28(var uParam0, int iParam1)
{
	return func_55(uParam0->f_173, iParam1);
}

bool func_29(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_30(var uParam0, int iParam1)
{
	func_67(&(uParam0->f_173), iParam1);
}

int func_31(int iParam0)
{
	if (&Local_14.f_12[iParam0])
	{
		return 1;
	}
	if (func_68(&(Local_14[iParam0]), (60f - 10f), 25f, -1082130432, -1082130432) || func_69(&(Local_14[iParam0]), 0))
	{
		func_70(&(Local_14[iParam0]), Local_14.f_6[iParam0], 831283580, -662251075, 0, 0);
		Local_14.f_12[iParam0] = 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_71(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

int func_33(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_58(vParam0))
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
		if (func_23(vParam0))
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
	func_72(iVar0, bParam8);
	return iVar0;
}

void func_34(var uParam0)
{
	func_74(uParam0, (func_73(uParam0) - 6f));
	func_75(uParam0, 1);
}

void func_35(var uParam0)
{
	func_76(uParam0, 0);
	func_77(uParam0, 0);
	func_78(uParam0, 1);
	func_79(uParam0, 1);
	func_40(uParam0, 0);
	func_38(uParam0, 1);
	func_80(uParam0, 1, 1, 1);
}

void func_36(var uParam0)
{
	func_81(uParam0, 1);
	func_82(uParam0, 1);
	func_83(uParam0, 1);
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 4);
	}
	else
	{
		func_56(uParam0, 4);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 256);
	}
	else
	{
		func_56(uParam0, 256);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 1);
	}
	else
	{
		func_67(&(uParam0->f_1), 1);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 128);
	}
	else
	{
		func_67(&(uParam0->f_1), 128);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 65536);
	}
	else
	{
		func_56(uParam0, 65536);
	}
}

void func_42(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		request_model(func_84(uParam0, iVar0), false);
		iVar0++;
	}
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_44(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!has_model_loaded(func_84(uParam0, iVar0)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_45()
{
	if (Local_14.f_209 <= 0)
	{
		return true;
	}
	iVar0 = Local_14.f_211;
	iVar1 = func_84(&Local_14, iVar0);
	vVar2 = { func_85(&Local_14, iVar0) };
	fVar5 = func_86(&Local_14, iVar0);
	if (iVar1 != 0)
	{
		Local_14[iVar0] = func_87(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (does_entity_exist(&(Local_14[iVar0])))
		{
			set_blocking_of_non_temporary_events(&(Local_14[iVar0]), true);
			set_ped_config_flag(&(Local_14[iVar0]), 6, true);
			request_ped_visibility_tracking(&(Local_14[iVar0]));
			if (!is_entity_a_mission_entity(&(Local_14[iVar0])))
			{
				set_entity_as_mission_entity(&(Local_14[iVar0]), true, false);
			}
			func_88(&(Local_14.f_180), &(Local_14[iVar0]));
		}
		else
		{
			Local_14.f_211 = (Local_14.f_211 - 1);
		}
	}
	Local_14.f_211++;
	if (Local_14.f_211 >= Local_14.f_209)
	{
		Local_14.f_211 = 0;
		return true;
	}
	return false;
}

bool func_46()
{
	if (func_53(&(Local_14[0]), 0, 0))
	{
		task_use_nearest_scenario_to_coord_warp(&(Local_14[0]), get_entity_coords(&(Local_14[0]), true, false), 3f, 0, false, false, false, false);
		func_90(&(Local_14[0]), func_89(0), 0);
		func_91(&(Local_14[0]), Global_36, 3, 0, 2);
	}
	if (func_53(&(Local_14[1]), 0, 1))
	{
		func_90(&(Local_14[1]), func_89(1), 0);
		func_91(&(Local_14[1]), Global_36, 3, 0, 3);
	}
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (func_53(&(Local_14[iVar0]), 0, 0))
		{
			set_ped_accuracy(&(Local_14[iVar0]), 90);
			set_ped_shoot_rate(&(Local_14[iVar0]), 120);
			_0xd77ae48611b7b10a(&(Local_14[iVar0]), 1.2f);
			set_ped_firing_pattern(&(Local_14[iVar0]), -687903391);
			_0x20e54854def6a54a(&(Local_14[iVar0]), 40051185);
			set_ped_combat_attributes(&(Local_14[iVar0]), 50, true);
			set_ped_combat_attributes(&(Local_14[iVar0]), 71, true);
			set_ped_combat_attributes(&(Local_14[iVar0]), 47, true);
			set_combat_float(&(Local_14[iVar0]), 39, 10f);
			set_ped_config_flag(&(Local_14[iVar0]), 246, true);
			set_ped_config_flag(&(Local_14[iVar0]), 6, true);
			set_ped_hearing_range(&(Local_14[iVar0]), 6f);
			set_ped_combat_range(&(Local_14[iVar0]), 0);
		}
		iVar0++;
	}
	if (func_53(&(Local_14[2]), 0, 1))
	{
		func_92(2);
		func_90(&(Local_14[2]), func_89(2), 0);
	}
	if (func_53(&(Local_14[3]), 0, 1))
	{
		func_93(3);
		func_90(&(Local_14[3]), func_89(3), 0);
	}
	if (func_53(&(Local_14[4]), 0, 1))
	{
		func_94(4);
		func_90(&(Local_14[4]), func_89(4), 0);
	}
	return true;
}

char* func_47(int iParam0)
{
	if (func_95(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_48(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_96(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_97(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_98(iParam0->f_6, iParam0->f_5, 0);
			}
			func_99(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_100(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_49()
{
	if (Local_14.f_23 < 6)
	{
		if (Local_14.f_23 < 3)
		{
			if (func_101(&Local_14, &(Local_14.f_180), &(Local_14.f_208), &(Local_14.f_220), 0, 4, 1))
			{
				func_102(&(Local_14.f_25.f_106), 1, 1);
				iVar0 = Local_14.f_220;
				func_103(&(Local_14[iVar0]), Global_35, "GENERIC_SHOCKED_HIGH", 0, 1, 1744022339, -1082130432);
				func_70(&(Local_14[iVar0]), Local_14.f_6[iVar0], 831283580, 0, 0, 0);
				func_20(&(Local_14.f_18));
				func_30(&Local_14, 4);
				func_104(Local_14.f_226[1], 0);
				func_105(&Local_14, 3);
			}
		}
		else if (Local_14.f_23 > 3)
		{
			if (func_13() <= 2)
			{
				func_104(Local_14.f_226[2], 0);
				func_105(&Local_14, 6);
			}
		}
	}
	if (Local_14.f_23 > 1)
	{
		func_106();
		if (Local_14.f_23 > 3)
		{
			func_107(&(Local_14.f_25));
		}
	}
	iVar1 = -1;
	iVar1 = func_108(&(Local_14.f_25));
	switch (Local_14.f_23)
	{
		case 0:
			func_109();
			if (func_110(iVar1))
			{
				func_102(&(Local_14.f_25.f_106), 1, 1);
				func_105(&Local_14, 1);
			}
			break;
		case 1:
			func_111();
			if ((func_112(0) && Local_14.f_219 < 0) || func_113(0f, 1, &(Local_14[Local_14.f_219]), 1))
			{
				func_114(Local_14.f_226[1]);
				iVar2 = func_115(Local_14.f_219);
				switch (iVar2)
				{
					case 0:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 2;
						break;
					case 1:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 1;
						break;
					case 2:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 1;
						break;
				}
				func_103(&(Local_14[Local_14.f_219]), Global_35, sVar3, iVar4, 1, 1744022339, -1082130432);
				func_105(&Local_14, 2);
			}
			break;
		case 2:
			func_111();
			if ((func_112(0) && Local_14.f_219 < 0) || func_113(0f, 1, &(Local_14[Local_14.f_219]), 1))
			{
				if (func_116(2, 1))
				{
					func_103(&(Local_14[Local_14.f_219]), Global_35, "GANG_INTERACT_CHAT_RECOGNIZE_YOU", 0, 1, 291934926, -1082130432);
				}
				else
				{
					func_103(&(Local_14[Local_14.f_219]), Global_35, "PROTECT_POSSESSIONS", 3, 1, 1744022339, -1082130432);
				}
				iVar5 = 0;
				while (iVar5 < Local_14.f_209)
				{
					if (func_53(&(Local_14[iVar5]), 0, 1) && iVar5 != Local_14.f_219)
					{
						func_117(&(Local_14[iVar5]), 500);
					}
					iVar5++;
				}
				open_sequence_task(&iVar6);
				task_combat_ped(0, Global_35, 0, 0);
				func_118(&(Local_14[Local_14.f_219]), &iVar6, 0, 0, 1, 1);
				func_114(Local_14.f_226[1]);
				func_105(&Local_14, 3);
			}
			else if (!func_53(&(Local_14[Local_14.f_219]), 0, 1))
			{
				func_105(&Local_14, 0);
			}
			break;
		case 3:
			func_111();
			if (func_119(Local_14.f_226[1], 0.5f))
			{
				func_120();
				func_105(&Local_14, 4);
			}
			break;
		case 4:
			func_111();
			if (func_113(2f, 1, 0, 0))
			{
				iVar0 = func_121();
				if (iVar0 != -1)
				{
					func_103(&(Local_14[iVar0]), Global_35, "TAUNT_GEN_LOCATION", 0, 1, 1744022339, -1082130432);
					func_105(&Local_14, 5);
				}
			}
			break;
		case 5:
			break;
		case 6:
			if (func_119(Local_14.f_226[2], 1.5f))
			{
				iVar7 = -1;
				iVar8 = 0;
				while (iVar8 < Local_14.f_209)
				{
					if (func_53(&(Local_14[iVar8]), 0, 1) && func_113(0f, 1, &(Local_14[iVar8]), 1))
					{
						iVar7 = iVar8;
					}
					iVar8++;
				}
				if (iVar7 != -1 && func_113(0f, 1, &(Local_14[iVar7]), 1))
				{
					func_103(&(Local_14[iVar7]), Global_35, "CALLOUT_NEAR_DEFEAT", 0, 1, 1744022339, -1082130432);
					set_ped_combat_range(&(Local_14[iVar7]), 0);
				}
				func_122(&(Local_14.f_247));
				func_105(&Local_14, 7);
			}
			break;
		case 7:
			if (func_13() == 0)
			{
				func_105(&Local_14, 8);
			}
			break;
		case 8:
			if (func_123(&(Local_14.f_247)))
			{
				func_16(&(Local_14.f_247));
				return true;
			}
			else if (func_124(&(Local_14.f_247), &Local_14, 0, -1, 1073741824, 0))
			{
				func_103(Global_35, Global_35, "GEAC_COMBATOVER_KNOWN", 0, 1, 291934926, -1082130432);
				func_16(&(Local_14.f_247));
				return true;
			}
			break;
	}
	return false;
}

void func_50(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_51()
{
	return 1;
}

int func_52()
{
	return 1;
}

bool func_53(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_125(iParam0, iParam1);
}

float func_54(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_57(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_59(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_60(int iParam0)
{
	if (((func_61(iParam0, 1) && func_61(iParam0, 2)) && func_61(iParam0, 8)) && func_61(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_62()
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

int func_63(int iParam0)
{
	if (!func_66(iParam0))
	{
		return -1;
	}
	return func_127(func_126(iParam0));
}

bool func_64(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_68(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_54(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_69(int iParam0, bool bParam1)
{
	if (func_53(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

void func_70(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

void func_71(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_57(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_57(uParam0))
		{
		}
	}
}

int func_72(int iParam0, bool bParam1)
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

float func_73(var uParam0)
{
	return uParam0->f_24;
}

void func_74(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_75(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 1);
	}
	else
	{
		func_56(uParam0, 1);
	}
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 16384);
	}
	else
	{
		func_67(&(uParam0->f_1), 16384);
	}
}

void func_77(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 2048);
	}
	else
	{
		func_67(&(uParam0->f_1), 2048);
	}
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 256);
	}
	else
	{
		func_67(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 16);
	}
	else
	{
		func_56(uParam0, 67108864);
		func_56(uParam0, 16);
	}
}

void func_80(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_67(uParam0, 268435456);
	}
	else
	{
		func_56(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_67(uParam0, 1073741824);
	}
	else
	{
		func_56(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_67(uParam0, 536870912);
	}
	else
	{
		func_56(uParam0, 536870912);
	}
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 512);
	}
	else
	{
		func_56(uParam0, 512);
	}
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 2);
	}
	else
	{
		func_56(uParam0, 2);
	}
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 8);
	}
	else
	{
		func_56(uParam0, 8);
	}
}

int func_84(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -355385988;
				case 1:
					return -355385988;
				case 2:
					return -628956517;
				case 3:
					return -628956517;
				case 4:
					return -628956517;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -355385988;
				case 1:
					return -355385988;
				case 2:
					return -628956517;
				case 3:
					return -628956517;
				case 4:
					return -628956517;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -355385988;
				case 1:
					return -355385988;
				case 2:
					return -628956517;
				case 3:
					return -628956517;
				case 4:
					return -628956517;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_85(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				case 3:
					return 1588.778f, -1840.946f, 57.4932f;
				case 4:
					return 1582.259f, -1848.166f, 51.6012f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				case 3:
					return 1588.778f, -1840.946f, 57.4932f;
				case 4:
					return 1582.259f, -1848.166f, 51.6012f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				default:
					break;
			}
			break;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

float func_86(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				case 3:
					return 349.7394f;
				case 4:
					return 66.1168f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				case 3:
					return 349.7394f;
				case 4:
					return 66.1168f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				default:
					break;
			}
			break;
		case 3:
			return 0f;
		case 4:
			return 0f;
	}
	return 0f;
}

int func_87(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_128(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_88(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

char[] func_89(int iParam0)
{
	return func_129(func_115(iParam0));
}

void func_90(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_53(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_91(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_125(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_58(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

void func_92(int iParam0)
{
	remove_all_ped_weapons(&(Local_14[iParam0]), true, true);
	func_130(&(Local_14[iParam0]), -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
	set_ped_shoot_rate(&(Local_14[iParam0]), 200);
	set_ped_accuracy(&(Local_14[iParam0]), 95);
	open_sequence_task(&iVar0);
	set_sequence_to_repeat(iVar0, true);
	task_follow_nav_mesh_to_coord(0, 1583.432f, -1856.547f, 51.35341f, 1f, -1, 0.25f, 0, 167.98f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1591.964f, -1862.239f, 51.35333f, 1f, -1, 0.25f, 0, -140.99f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1603.992f, -1852.606f, 51.3533f, 1f, -1, 0.25f, 0, -42.6f);
	task_stand_still(0, 6000);
	func_118(&(Local_14[iParam0]), &iVar0, 0, 0, 1, 1);
}

void func_93(int iParam0)
{
	remove_all_ped_weapons(&(Local_14[iParam0]), true, true);
	func_130(&(Local_14[iParam0]), -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
	set_ped_shoot_rate(&(Local_14[iParam0]), 200);
	set_ped_accuracy(&(Local_14[iParam0]), 95);
	open_sequence_task(&iVar0);
	set_sequence_to_repeat(iVar0, true);
	task_follow_nav_mesh_to_coord(0, 1587.7f, -1839.29f, 57.54097f, 1f, -1, 0.25f, 0, 66.24f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1589.867f, -1838.341f, 57.51658f, 1f, -1, 0.25f, 0, -18.52f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1585.318f, -1846.046f, 57.47854f, 1f, -1, 0.25f, 0, 66.24f);
	task_stand_still(0, 6000);
	func_118(&(Local_14[iParam0]), &iVar0, 0, 0, 1, 1);
}

void func_94(int iParam0)
{
	remove_all_ped_weapons(&(Local_14[iParam0]), true, true);
	func_130(&(Local_14[iParam0]), -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
	set_ped_shoot_rate(&(Local_14[iParam0]), 200);
	set_ped_accuracy(&(Local_14[iParam0]), 95);
	open_sequence_task(&iVar0);
	set_sequence_to_repeat(iVar0, true);
	task_follow_nav_mesh_to_coord(0, 1582.495f, -1835.801f, 51.4223f, 1f, -1, 0.25f, 0, 17.0239f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1590.312f, -1834.216f, 51.3534f, 1f, -1, 0.25f, 0, 335.083f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1597.357f, -1835.73f, 51.3534f, 1f, -1, 0.25f, 0, 312.3015f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1583.189f, -1834.716f, 51.4514f, 1f, -1, 0.25f, 0, 55.1287f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1576.424f, -1844.537f, 51.3534f, 1f, -1, 0.25f, 0, 121.5438f);
	task_stand_still(0, 6000);
	task_follow_nav_mesh_to_coord(0, 1580.415f, -1848.693f, 51.3534f, 1f, -1, 0.25f, 0, 212.577f);
	task_stand_still(0, 6000);
	func_118(&(Local_14[iParam0]), &iVar0, 0, 0, 1, 1);
}

bool func_95(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_96(int iParam0)
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

void func_97(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_98(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_99(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (bParam1)
	{
		func_132(iParam0, 4);
		func_133(iVar0, 1);
		func_134(iVar0, 1);
	}
	else
	{
		func_135(iParam0, 4);
		func_134(iVar0, 0);
	}
}

void func_100(int* iParam0, char* sParam1)
{
	if (func_96(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_98(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_136(iParam0, 1);
}

bool func_101(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_137(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_138(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_102(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_139((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_103(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, float fParam6)
{
	return func_140(iParam0, iParam1, sParam2, "", fParam6, iParam3, 0, 0, 1, fParam6 > 0f, bParam4, iParam5, 1, 0, 0);
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1 || !func_141(uParam0))
	{
		func_114(uParam0);
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_106()
{
	if (func_28(&Local_14, 8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (does_entity_exist(&(Local_14[iVar0])))
		{
			if (has_entity_been_damaged_by_entity(&(Local_14[iVar0]), Global_35, 1, 1))
			{
				func_142(1, -1, 0, 0, 0);
				func_30(&Local_14, 8);
				return;
			}
		}
		iVar0++;
	}
}

void func_107(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (!&Local_14.f_213[iVar0])
		{
			if (does_entity_exist(&(Local_14[iVar0])))
			{
				if (func_143(&(Local_14[iVar0])))
				{
					func_144(Local_14[iVar0], (*uParam0)[iVar0], &(uParam0->f_106), 1, 1);
					Local_14.f_213[iVar0] = 1;
				}
			}
			else
			{
				Local_14.f_213[iVar0] = 1;
			}
		}
		iVar0++;
	}
}

int func_108(var uParam0)
{
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 524288 | func_145(3, 0, 0);
	iVar7 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (!does_entity_exist(&(Local_14[iVar1])))
		{
		}
		else
		{
			iVar0 = func_146(Local_14[iVar1], (*uParam0)[iVar1], 50f, &(uParam0->f_106), &iVar7, 4f, 3, 0, 0, iVar5, 0, 0, 2, 1, -1082130432, 0);
			if (func_147((*uParam0)[iVar1]))
			{
				if (!uParam0->f_146)
				{
					if (uParam0->f_142 == -1)
					{
						uParam0->f_142 = iVar1;
					}
					iVar4 = (*uParam0)[iVar1]->f_1;
					open_sequence_task(&iVar6);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_118(&(Local_14[iVar1]), &iVar6, 1f, 0, 1, 1);
					switch (iVar4)
					{
						case 0:
							func_102(&(uParam0->f_106), 1, 1);
							break;
						case 1:
							func_102(&(uParam0->f_106), 1, 1);
							break;
					}
					switch (iVar4)
					{
						case 0:
						case 1:
							func_148(uParam0, 0, 1);
							break;
					}
					iVar2 = 0;
					while (iVar2 <= 4)
					{
						if (func_53(&(Local_14[iVar2]), 0, 1))
						{
							func_117(&(Local_14[iVar2]), 500);
						}
						iVar2++;
					}
					uParam0->f_146 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				uParam0->f_141 = iVar3;
				switch (iVar3)
				{
					case 0:
						break;
					case 1:
						uParam0->f_145++;
						break;
				}
				uParam0->f_146 = 0;
				uParam0->f_143 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

void func_109()
{
	if (func_149(&(Local_14.f_25)))
	{
		return;
	}
	switch (Local_14.f_24)
	{
		case 0:
			if (Local_14.f_212 < 60f)
			{
				if (func_150(0, 1, "GELRC_STORY1", -1090519040))
				{
					func_151(&Local_14, 1);
				}
			}
			break;
		case 1:
			if (func_150(1, 0, "GELRC_STORY2", -1090519040))
			{
				func_151(&Local_14, 2);
			}
			break;
		case 2:
			if (func_150(0, 1, "GELRC_STORY3", -1f))
			{
				func_151(&Local_14, 3);
			}
			break;
		case 3:
			if (func_150(1, 0, "GELRC_STORY4", -1090519040))
			{
				func_151(&Local_14, 4);
			}
			break;
		case 4:
			if (func_150(0, 1, "GELRC_STORY5", -5f))
			{
				func_151(&Local_14, 5);
			}
			break;
		case 5:
			if (func_150(1, 0, "GELRC_STORY6", -1f))
			{
				func_151(&Local_14, 6);
			}
			break;
		case 6:
			if (func_150(0, 1, "GELRC_STORY7", -0.5f))
			{
				func_151(&Local_14, 9);
			}
			break;
		case 9:
			break;
	}
}

bool func_110(int iParam0)
{
	if (iParam0 != -1)
	{
		bVar0 = true;
	}
	else if (!func_149(&(Local_14.f_25)))
	{
		if ((Local_14.f_212 < (60f - 5f) && func_152(&(Local_14.f_222[2]), Global_36)) && func_153(&Local_14, &(Local_14.f_180), &(Local_14.f_208), &(Local_14.f_219), 0, 4, 1))
		{
			if (has_entity_clear_los_to_entity(&(Local_14[Local_14.f_219]), Global_35, 17))
			{
				iVar1 = 1;
			}
		}
	}
	if (bVar0 || iVar1)
	{
		if (bVar0)
		{
			Local_14.f_221 = Local_14.f_25.f_142;
		}
		else
		{
			Local_14.f_221 = Local_14.f_219;
		}
		if (Local_14.f_172 != -1)
		{
			if (Local_14.f_221 != Local_14.f_172)
			{
				func_117(&(Local_14[Local_14.f_172]), 500);
			}
		}
		if (!is_ped_facing_ped(&(Local_14[Local_14.f_219]), Global_35, 30f))
		{
			func_103(&(Local_14[Local_14.f_219]), Global_35, "WHAT_WAS_THAT", 0, 1, 1744022339, -1082130432);
		}
		func_70(&(Local_14[Local_14.f_219]), Local_14.f_6[Local_14.f_219], 831283580, 0, 0, 0);
		func_154(&(Local_14[Local_14.f_219]), Global_35, -1);
		if (Local_14.f_219 == 0)
		{
			task_look_at_entity(&(Local_14[0]), Global_35, 8000, 0, 51, 0);
			task_look_at_entity(&(Local_14[1]), Global_35, 8000, 0, 51, 0);
			func_91(&(Local_14[0]), Global_36, 3, 0, 3);
			func_91(&(Local_14[1]), Global_36, 3, 0, 2);
			func_70(&(Local_14[1]), Local_14.f_6[1], 831283580, 0, 0, 0);
			open_sequence_task(&iVar2);
			func_154(0, Global_35, -1);
			func_118(&(Local_14[1]), &iVar2, 1.5f, 0, 1, 1);
		}
		else if (Local_14.f_219 == 1)
		{
			task_look_at_entity(&(Local_14[0]), Global_35, 8000, 0, 51, 0);
			task_look_at_entity(&(Local_14[1]), Global_35, 8000, 0, 51, 0);
			func_91(&(Local_14[0]), Global_36, 3, 0, 2);
			func_91(&(Local_14[1]), Global_36, 3, 0, 3);
			func_70(&(Local_14[0]), Local_14.f_6[1], 831283580, 0, 0, 0);
			open_sequence_task(&iVar2);
			func_154(0, Global_35, -1);
			func_118(&(Local_14[0]), &iVar2, 1.5f, 0, 1, 1);
		}
		func_104(Local_14.f_226[1], 0);
		return true;
	}
	return false;
}

void func_111()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_155(iVar0))
		{
			set_ped_reset_flag(&(Local_14[iVar0]), 27, true);
		}
		iVar0++;
	}
}

bool func_112(bool bParam0)
{
	if (!bParam0)
	{
		if (func_119(Local_14.f_226[1], 4f))
		{
			return true;
		}
	}
	if (Local_14.f_219 < 0)
	{
		return false;
	}
	if (!func_53(&(Local_14[Local_14.f_219]), 0, 1))
	{
		return true;
	}
	if (Local_14.f_25.f_141 != -1)
	{
		return true;
	}
	if (!func_113(0f, 1, &(Local_14[Local_14.f_219]), 1))
	{
		return false;
	}
	if (!is_ped_facing_ped(&(Local_14[Local_14.f_219]), Global_35, 30f))
	{
		return false;
	}
	if (!has_entity_clear_los_to_entity_in_front(&(Local_14[Local_14.f_219]), Global_35, 17))
	{
		return false;
	}
	if (!func_119(Local_14.f_226[1], 1f))
	{
		return false;
	}
	return true;
}

bool func_113(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_69(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_156(fParam0))
	{
		return false;
	}
	return true;
}

void func_114(var uParam0)
{
	func_157(uParam0, 0f);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return -1;
}

bool func_116(int iParam0, bool bParam1)
{
	if (!func_158(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

void func_117(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_118(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_119(var uParam0, float fParam1)
{
	if (!func_141(uParam0))
	{
		return false;
	}
	if (func_159(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_120()
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (func_53(&(Local_14[iVar0]), 0, 0))
		{
			func_20(Local_14.f_6[iVar0]);
			func_70(&(Local_14[iVar0]), Local_14.f_6[iVar0], 831283580, 0, 0, 0);
			open_sequence_task(&iVar1);
			if (func_160(iVar0))
			{
				switch (iVar0)
				{
					case 0:
						task_react(0, Global_35, Global_36, "TaskCombat_High", 1f, 0, 4);
						break;
					case 1:
						task_react(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
						break;
					case 2:
						task_react(0, Global_35, Global_36, "TaskCombat_React", 1f, 0, 4);
						break;
					case 3:
						task_react(0, Global_35, Global_36, "DEFAULT_SHOCKED", 2f, 0, 4);
						break;
					case 4:
						task_react(0, Global_35, Global_36, "Default_Angry", 3f, 0, 4);
						break;
				}
			}
			task_combat_ped(0, Global_35, 0, 0);
			func_118(&(Local_14[iVar0]), &iVar1, 0f, 1f, 1, 1);
		}
		iVar0++;
	}
	compendium_gang_encountered(1143368244);
	func_161(Global_1393447, 1);
	func_162();
	func_163();
	func_164((to_float(200) / 3f));
	iVar2 = func_165();
	if (func_166(iVar2))
	{
		func_167(iVar2, 0, 0, 0, 0);
	}
}

int func_121()
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (func_53(&(Local_14[iVar0]), 0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(var uParam0)
{
	if (!func_55(*uParam0, 8))
	{
		_0x0d7fd6a55fd63aef(39, 3, 0);
		func_67(uParam0, 8);
	}
}

bool func_123(var uParam0)
{
	if (func_55(*uParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_124(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	if (!func_55(*uParam0, 4))
	{
		if (func_55(iParam5, 1))
		{
			if (func_168())
			{
				func_169(uParam0, 4);
				return false;
			}
		}
		else if (func_55(iParam5, 2))
		{
			if (func_170())
			{
				func_169(uParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_55(*uParam0, 1))
	{
		if (!func_55(*uParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_53(uParam1[iVar0], 8, 1) && !is_ped_fleeing(uParam1[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		func_104(&(uParam0->f_1), 0);
		func_169(uParam0, 1);
	}
	if (func_55(*uParam0, 1))
	{
		if (func_119(&(uParam0->f_1), (fParam4 + 4f)))
		{
			func_169(uParam0, 4);
			return false;
		}
		if (!func_119(&(uParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_113(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (func_171(Global_35))
		{
			return false;
		}
		if (Global_1935630->f_24)
		{
			return false;
		}
		func_169(uParam0, 4);
		return true;
	}
	return false;
}

bool func_125(int iParam0, int iParam1)
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
	if (func_172(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_172(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_172(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_172(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_172(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_172(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_172(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_172(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_128(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_173(iParam1))
		{
			func_174(iParam0, 41788943);
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
			func_175(iParam0, 0, 1);
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
			func_176(iParam0, 0);
			bVar0 = true;
		}
		func_177(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 1:
			return "0177_G_M_Y_UniExConfeds_01_WHITE_01";
		case 2:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		default:
			break;
	}
	return "INVALID";
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_178(iParam3, 1);
	bVar1 = func_178(iParam3, 2);
	bVar2 = !func_178(iParam3, 4);
	bVar3 = func_178(iParam3, 8);
	bVar4 = !func_178(iParam3, 16);
	bVar5 = func_178(iParam3, 32);
	bVar6 = func_178(iParam3, 64);
	return func_179(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_131(int iParam0)
{
	return iParam0;
}

void func_132(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_133(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_180(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_134(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_135(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_136(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_137(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_138(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_181(uParam2, 1, iVar0);
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
			if (func_182(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_183(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_184(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_185(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_186(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_187(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_183(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_188(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_189(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_190(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_191(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_191(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_183(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_192(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_193(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_194(uParam2, 4000))
				{
					if ((func_195(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_196(uParam2, iParam0)) && func_197(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_195(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_196(uParam2, iParam0)) && func_197(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_198(iParam0, Global_1935630->f_41))
							{
								func_199();
								*uParam3 = 2;
								func_183(iParam0, uParam2, *uParam3);
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
						if (func_198(iParam0, Global_1935630->f_41))
						{
							func_199();
							*uParam3 = 2;
							func_183(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_200(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_201() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_199();
						*uParam3 = 2;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_202())
					{
						if (func_198(iParam0, Global_1935630->f_42))
						{
							func_199();
							*uParam3 = 2;
							func_183(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_203(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_183(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_204(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_205(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_206(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_207(uParam2, 4000))
				{
					if (func_208(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_183(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_209(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_183(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_210(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_183(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_139(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_211(iParam0, 13))
		{
			if (bParam2)
			{
				func_212(iParam0, 0, 0);
			}
			func_213(iParam0, 13);
		}
	}
	else if (func_211(iParam0, 13))
	{
		func_136(iParam0, 13);
	}
}

bool func_140(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_214(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_141(var uParam0)
{
	return func_215(*uParam0, 1);
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_161(Global_1393447, 1);
	func_162();
	func_163();
	func_164((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_201() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_216();
		if (iParam1 == -1)
		{
			if (func_55(iParam0, 1))
			{
				func_217(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_55(iParam0, 2))
			{
				func_217(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_55(iParam0, 4))
			{
				func_217(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_218(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_219(to_float(iVar0), 1, 0);
	}
	else
	{
		func_219((to_float(200) / 3f), 1, 0);
	}
}

bool func_143(int iParam0)
{
	if (!func_125(iParam0, 3))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (_get_lassoed_entity(Global_35) == iParam0)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(iParam0) == Global_35)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_144(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_220(uParam0);
		func_221(uParam1, uParam2);
	}
	func_222(*uParam0, 1, bParam4);
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_146(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_223(&iVar0);
	if (func_55(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_224(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_55(iVar0, 134217728))
	{
		func_225(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_226(558))
				{
					func_227(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_147(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_148(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_228(uParam0, 0))
		{
			func_229(uParam0, 0, 1);
		}
		if (!func_228(uParam0, 1))
		{
			func_229(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_228(uParam0, 0))
		{
			func_229(uParam0, 0, 0);
		}
		if (bParam2 || func_228(uParam0, 1))
		{
			func_229(uParam0, 1, 0);
		}
	}
}

bool func_149(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_147((*uParam0)[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_150(int iParam0, int iParam1, char[4] cParam2, float fParam3)
{
	if (func_113(0f, 1, &(Local_14[iParam1]), 1) && func_113(fParam3, 1, 0, 0))
	{
		func_103(&(Local_14[iParam0]), &(Local_14[iParam1]), cParam2, 0, 1, 291934926, 60f);
		Local_14.f_172 = iParam0;
		return true;
	}
	return false;
}

void func_151(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

bool func_152(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_153(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_137(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_230(uParam0[*uParam3], uParam1, uParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

int func_154(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_155(int iParam0)
{
	if (!func_53(&(Local_14[iParam0]), 0, 0))
	{
		return false;
	}
	if (has_entity_been_damaged_by_any_ped(&(Local_14[iParam0])))
	{
		return false;
	}
	if (func_54(&(Local_14[iParam0]), Global_36, 1) < 5f)
	{
		return false;
	}
	if (_0x285d36c5c72b0569(Global_35) < 3f)
	{
		return false;
	}
	if (func_119(Local_14.f_226[1], 5f))
	{
		return false;
	}
	if (Local_14.f_219 < 0)
	{
		return false;
	}
	if (!func_53(&(Local_14[Local_14.f_219]), 0, 1))
	{
		return false;
	}
	if (!func_113(0f, 1, &(Local_14[Local_14.f_219]), 1))
	{
		return true;
	}
	return false;
}

bool func_156(float fParam0)
{
	if (func_231(1))
	{
		return true;
	}
	if (func_141(&uLocal_0) && !func_232(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_157(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_233() - fParam1);
	func_234(uParam0, 1);
	func_235(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_158(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

float func_159(var uParam0)
{
	if (!func_141(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_236(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_233() - uParam0->f_1);
}

bool func_160(int iParam0)
{
	if (iParam0 == Local_14.f_221)
	{
		return false;
	}
	if (_0x9c81338b2e62ce0a(player_id(), &(Local_14[iParam0]), 1000))
	{
		return false;
	}
	if (has_entity_been_damaged_by_any_ped(&(Local_14[iParam0])))
	{
		return false;
	}
	if (func_54(&(Local_14[iParam0]), Global_36, 0) < 8f && has_entity_clear_los_to_entity_in_front(&(Local_14[iParam0]), Global_35, 17))
	{
		return false;
	}
	return true;
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_162()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_237(iVar0, 128))
		{
			func_238(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_163()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_237(iVar0, 128) && func_237(iVar0, 1))
		{
			func_238(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_164(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

var func_165()
{
	return Global_1310750->f_16071;
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_167(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_239() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_166(iVar1) && !func_240(iVar1, iParam2)) && (!bParam3 || !func_241(iVar1))) && (!bParam4 || !func_242(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_243(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_168()
{
	if (func_244() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_169(var uParam0, int iParam1)
{
	func_67(uParam0, iParam1);
}

bool func_170()
{
	if (func_244() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

bool func_172(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_173(int iParam0)
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

void func_174(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_245(iParam0, iParam1))
		{
			if (func_246(iParam0, iParam1))
			{
				if (func_247(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_248(iParam0);
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

void func_175(int iParam0, int iParam1, bool bParam2)
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

void func_176(int iParam0, bool bParam1)
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

void func_177(int iParam0, int iParam1)
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

bool func_178(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_179(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_249(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_249(iVar4) && iVar4 != iVar0)
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
	if (func_244() == -1 && !func_250(iVar0))
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
				if (func_250(-183018591))
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
		if (iParam0 != Global_35 && func_249(iVar0))
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
		func_251(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_252(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_253(iVar0))
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

bool func_180(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_181(var uParam0, bool bParam1, int iParam2)
{
	func_254(iParam2);
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
		uParam0->f_13 = func_255(0);
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
							func_67(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_256(1))
						{
							func_67(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_256(1) || *uParam0 & 8192 != 0))
				{
					func_56(uParam0, 33554432);
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
			if (func_257(uParam0))
			{
				uParam0->f_15 = func_201();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_201() - uParam0->f_15) > 500)
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
	func_258(uParam0);
}

bool func_182(int iParam0, var uParam1)
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
			if (!func_259(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_260(iParam0, iVar2) <= func_261(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_183(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_262(iParam2, 1, 1, 1, 0))
	{
		func_67(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_263(uParam1, 1);
	func_264();
}

bool func_184(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_265(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_266(uParam1);
			if (func_267(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_268(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_263(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_263(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_185(int iParam0, int iParam1, var uParam2)
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
	if (func_269(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_266(uParam2);
		if (func_267(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_268(uParam2)
				{
					func_263(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_186(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
	if (func_259(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_268(uParam1)
		{
			fVar3 = func_266(uParam1);
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

int func_187(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_270(bParam1, bParam2, bParam3);
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

bool func_188(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_201();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_189(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_271(uParam2);
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
			if (func_197(uParam2, iParam1))
			{
				func_263(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_190(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_272(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_197(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_263(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_191(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_273(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_263(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_263(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_274(iParam1, vVar0, vVar4))
					{
						func_263(uParam2, 1);
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
					func_263(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_274(iParam1, vVar0, vVar7))
					{
						func_263(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_192(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_259(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_275(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_276(&(Global_1935630->f_34[iVar0])))
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
			if (func_277(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_278(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_279(uParam1, iParam0, fVar1, iVar0))
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

bool func_193(int iParam0, var uParam1)
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

bool func_194(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_201();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_280(iVar0, &iVar2))
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
	if (func_281(iVar0, iParam0))
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

int func_196(var uParam0, int iParam1)
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

bool func_197(var uParam0, int iParam1)
{
	if (func_282(uParam0))
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

bool func_198(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_283(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_199()
{
}

bool func_200(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_284(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_201();
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
						if (func_54(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_201();
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

int func_201()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_202()
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
	if ((func_201() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_203(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_261(uParam0);
	if (uParam0->f_12 > func_73(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_285(iParam1);
	iVar1 = func_286(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_204(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_287(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_205(int iParam0, var uParam1)
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
		if (func_288(iParam0, uParam1, 1))
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
					if (!func_289(uParam1, iParam0))
					{
						if (func_54(iVar4, Global_36, 1) < 7f)
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

bool func_206(int iParam0, var uParam1)
{
	if (!func_290(0))
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

bool func_207(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_201();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_209(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_201();
	}
	else if (func_201() - uParam1->f_4) > func_291(uParam1)
	{
		return func_292(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_210(var uParam0, int iParam1)
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

bool func_211(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_212(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_211(iParam0, 13))
	{
		func_213(iParam0, 0);
	}
	else
	{
		func_136(iParam0, 0);
	}
	if (func_96(iParam0->f_6))
	{
		if (bParam2)
		{
			func_293(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_213(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_214(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_294())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_295(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_283(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_114(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_296(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_298(func_297(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_216()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_240(iVar0, 16777216))
		{
			if (!func_299(iVar0))
			{
				func_300(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_217(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_301(Global_1310750[iVar0], iParam0))
		{
			if (!func_302(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_303(iVar0) < func_304(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_305(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_306(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_306(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_306(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_306(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_306(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_306(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_306(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_219(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_233();
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

void func_220(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_221(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_307(iParam0, uParam1, 1);
	func_308(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_222(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_223(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_224(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_223(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_309(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_114(&(iParam1->f_13));
		}
		if (func_310(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_311(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_224(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_220(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_312(*uParam0, 1, 1);
						}
					}
					else if (func_313(iParam1, 22))
					{
						func_312(*uParam0, 0, 1);
					}
				}
				if (func_314(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_315(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_316(iParam8);
					if (func_317(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_318(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_319(iParam1, uParam3, fVar8);
					if (func_320(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_308(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_321(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_314(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_322(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_317(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_315(uParam0, func_314(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_316(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_308(uParam3, 0, 0, 1, 1);
					}
					func_323(iParam1, 1);
				}
				func_319(iParam1, uParam3, fVar8);
				if (func_321(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_221(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_225(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_324(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_140(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_226(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_244() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_227(int iParam0, bool bParam1)
{
	func_325(iParam0, &iVar0, &iVar1);
	if (!func_326(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_327(iVar0, iVar1);
}

bool func_228(var uParam0, int iParam1)
{
	if (func_328(uParam0->f_106[iParam1], 1, 0) && !func_211(uParam0->f_106[iParam1], 13))
	{
		return true;
	}
	return false;
}

void func_229(var uParam0, int iParam1, bool bParam2)
{
	func_212(uParam0->f_106[iParam1], bParam2, 0);
}

bool func_230(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_5)
	{
		func_181(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_194(uParam1, 4000))
				{
					if ((func_195(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_196(uParam1, iParam0)) && func_197(uParam1, iParam0))
					{
						func_199();
						*uParam2 = 2;
						func_183(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_194(uParam1, 4000))
				{
					if ((func_195(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_196(uParam1, iParam0)) && func_197(uParam1, iParam0))
					{
						func_199();
						*uParam2 = 2;
						func_183(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_198(iParam0, Global_1935630->f_41))
							{
								func_199();
								*uParam2 = 2;
								func_183(iParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_198(iParam0, Global_1935630->f_41))
						{
							func_199();
							*uParam2 = 2;
							func_183(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_202())
					{
						if (func_198(iParam0, Global_1935630->f_42))
						{
							func_199();
							*uParam2 = 2;
							func_183(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_188(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_189(Global_35, iParam0, uParam1))
					{
						func_199();
						*uParam2 = 4;
						func_183(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_190(Global_35, iParam0, uParam1))
					{
						func_199();
						*uParam2 = 256;
						func_183(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_329(iParam0, uParam1))
			{
				func_199();
				*uParam2 = 131072;
				func_183(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_330(iParam0, uParam1))
			{
				func_199();
				*uParam2 = 262144;
				func_183(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_231(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_232(var uParam0, float fParam1)
{
	if (func_119(uParam0, fParam1))
	{
		func_331(uParam0);
		return true;
	}
	return false;
}

float func_233()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_236(var uParam0)
{
	return func_215(*uParam0, 2);
}

bool func_237(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_238(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

int func_239()
{
	return Global_1310750->f_16037;
}

bool func_240(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_241(int iParam0)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	if (func_332(64) && func_333(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_242(int iParam0)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_243(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_166(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_334(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_244()
{
	return Global_1572887->f_12;
}

bool func_245(int iParam0, int iParam1)
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

bool func_246(int iParam0, int iParam1)
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

bool func_247(int iParam0, int iParam1)
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
	if (!func_245(iParam0, iVar0))
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

void func_248(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_249(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_250(int iParam0)
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

int func_251(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_335(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_336((386 + iVar28), 1);
			if (func_337(iParam0, &Var0, iVar5, 0))
			{
				if (func_338(iParam0, &Var6, iVar5))
				{
					Var29 = { func_339(iParam0, Var0, iVar5, 0) };
					func_340(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_341(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_342(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_343(iParam0, iParam1);
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

void func_252(int iParam0, int iParam1, float fParam2)
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

bool func_253(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_254(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_344();
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
			func_345(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_255(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_256(bool bParam0)
{
	if (func_346(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_257(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_244() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_347(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_347(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_286(iVar0) == -1)
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

void func_258(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_348(uParam0);
	}
}

bool func_259(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_286(iParam2);
	}
	else
	{
		iVar1 = func_285(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_286(iParam0);
	}
	else
	{
		iVar0 = func_285(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_55(*uParam1, 8388608))
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

float func_260(int iParam0, int iParam1)
{
	return func_283(iParam0, iParam1, 1, 1);
}

float func_261(var uParam0)
{
	return uParam0->f_26;
}

bool func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_263(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_67(uParam0, 134217728);
	}
	else
	{
		func_56(uParam0, 134217728);
	}
}

void func_264()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_265(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_283(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_349(iVar0, 0)))
		{
			if (func_350(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_266(var uParam0)
{
	return uParam0->f_17;
}

bool func_267(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_55(*uParam0, 4194304))
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

int func_268(var uParam0)
{
	return uParam0->f_18;
}

bool func_269(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_349(iVar0, 0)))
		{
			if (func_29(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_270(bool bParam0, bool bParam1, bool bParam2)
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

float func_271(var uParam0)
{
	return uParam0->f_23;
}

int func_272(var uParam0)
{
	return uParam0->f_21;
}

int func_273(var uParam0)
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

bool func_274(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_351(iParam0, vParam4, 0.5f))
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

int func_275(int iParam0)
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
	if (func_352(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_276(int iParam0)
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

bool func_277(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_353(iParam1))
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

bool func_278(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_353(iParam1))
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

bool func_279(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_353(iParam1))
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

bool func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_354(iParam0, 1, 0, 0) != 2055893578)
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

bool func_282(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_283(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_284(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_54(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_285(int iParam0)
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

int func_286(int iParam0)
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

int func_287(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_280(Global_35, &iVar1))
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
		fVar2 = func_283(iParam0, player_ped_id(), 0, 1);
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
		if (func_283(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_288(int iParam0, var uParam1, bool bParam2)
{
	func_346(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_289(uParam1, iVar0))
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
				if (!bParam2 || !func_289(uParam1, iVar1))
				{
					if (func_54(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_289(var uParam0, int iParam1)
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

int func_290(int iParam0)
{
	if (func_168())
	{
		return 0;
	}
	return func_355((*Global_1347702)[58]->f_15, 1);
}

int func_291(var uParam0)
{
	return uParam0->f_20;
}

int func_292(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_293(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_96(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_131(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_356(iVar0);
	*uParam0 = 0;
}

bool func_294()
{
	return (Global_1894899 & 1 != 0 && func_357() != -1);
}

float func_295(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_283(Global_35, iParam0, bParam1, bParam2);
}

bool func_296(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_297(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_358(iParam0, &Var0);
}

int func_298(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_299(int iParam0)
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

void func_300(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_301(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_302(int iParam0)
{
	if (!func_166(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_303(int iParam0)
{
	if (func_166(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_304(int iParam0)
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

void func_305(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_306(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_306(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_359(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_244() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_307(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_293(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_360(iParam0, 0);
		}
	}
}

void func_308(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_96((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_293(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

float func_309(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_310(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_361(iParam0, iParam1))
		{
			if (!func_55(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_308(uParam2, 0, 0, 1, 0);
				func_67(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_55(iParam1->f_10, 1))
		{
			func_362(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_56(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_311(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_55(iParam4, 32);
		func_307(iParam1, uParam2, 0);
		iVar5 = func_363(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_308(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_55(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_55(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_55(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_55(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_55(iParam4, 8388608) || func_55(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_55(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_55(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_313(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_313(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_55(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_364(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_55(iParam4, 268435456))
			{
				iVar8 = func_365(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_366(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_313(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_55(iParam4, 2) || func_55(iParam4, 16))
			{
				func_312(*uParam0, 1, 1);
			}
			else
			{
				func_312(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_312(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_313(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_314(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_367(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_315(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_368(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_55(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_316(int iParam0)
{
	if (func_55(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_55(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_55(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_317(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_369(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_370(Global_35)) || func_371(Global_35)) || func_372(Global_35));
	fVar12 = -1f;
	if (func_141(&(iParam1->f_13)))
	{
		fVar12 = func_159(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_96((*uParam4)[iVar0]->f_6);
		func_373(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_374(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_375(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_308(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_376(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_307(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_377(iParam1, fParam6, iParam1->f_9))
					{
						func_114(&(iParam1->f_18));
						if (bVar6)
						{
							func_376(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_378(iParam1, fParam2);
	}
	return bVar5;
}

void func_318(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_319(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_379((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_378(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_320(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_380(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_381(iParam1, 0);
				func_307(iParam1, uParam2, func_313(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_321(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_114(&(iParam1->f_18));
			return false;
		}
		else if (func_141(&(iParam1->f_18)))
		{
			func_331(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_141(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_232(&(iParam1->f_18), fParam2);
	return true;
}

void func_322(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_373(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_323(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_324(int* iParam0)
{
	if (func_313(iParam0, 0))
	{
		if (func_382(iParam0))
		{
			func_323(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_325(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_326(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_383(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_384(iParam0))
	{
		return false;
	}
	if (func_385(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_386(iParam0, 1)) || func_387(32768))
	{
		if (!func_386(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_388())
	{
		return false;
	}
	return true;
}

void func_327(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_328(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_96(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_389(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_329(int iParam0, var uParam1)
{
	fVar0 = func_390(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (uParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_391(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_392())
					{
						if (is_ped_facing_ped(Global_35, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_330(int iParam0, var uParam1)
{
	if (func_353(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_331(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_332(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_333(int iParam0)
{
	return func_240(iParam0, Global_1310750->f_16072 | 64);
}

void func_334(int iParam0)
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

struct<5> func_335(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_393(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_394(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_339(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_395(bParam1) };
			if (bParam2 && func_396(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_337(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_337(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_338(iParam0, &Var5, 1728382685))
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
			Var0 = { func_397(bParam1) };
			switch (func_398(iParam0))
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
			if (func_399(iParam0, -1823706425))
			{
				Var0 = { func_339(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_399(iParam0, -1483207246))
			{
				Var0 = { func_339(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_400(Var0, &Var27, bParam1, 0))
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

int func_336(int iParam0, int iParam1)
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

bool func_337(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_401(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_338(int iParam0, var uParam1, int iParam2)
{
	if (func_402(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_339(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_403(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_404(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_340(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	if (!func_400(*uParam1, &Var0, bParam6, 0))
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
	if (!func_341(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_404(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_341(bool bParam0)
{
	if (func_244() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_404(bParam0));
}

int func_342(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_406(iParam0))
	{
		return 0;
	}
	if (!func_341(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_343(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_137(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_344()
{
	if (func_407())
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

void func_345(var uParam0, var uParam1)
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

bool func_346(bool bParam0, int iParam1, int iParam2)
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

int func_347(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
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

void func_348(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_56(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_67(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_349(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_350(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_29(get_entity_coords(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_351(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_352(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_353(int iParam0)
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

int func_354(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_355(int iParam0, bool bParam1)
{
	switch (func_408(iParam0))
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

void func_356(int iParam0)
{
	if (!func_409(iParam0))
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

int func_357()
{
	return Global_1894899->f_2;
}

bool func_358(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_359(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_360(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_331(&(iParam0->f_18));
}

bool func_361(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_410((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_362(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_379((*uParam0)[iVar0]))
		{
			func_213((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_363(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_411(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_96((*uParam2)[iVar0]->f_6))
		{
			func_213((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_364(var uParam0)
{
	iVar0 = func_412(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_365(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_366(int* iParam0, int* iParam1)
{
	if (!func_313(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_213(iParam1, 19);
			func_381(iParam0, 23);
			func_413(iParam1, 2);
		}
	}
}

bool func_367(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_414(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_415(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_368(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_411(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_369(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_370(int iParam0)
{
	return (func_416(iParam0, 4) || func_416(iParam0, 5));
}

int func_371(int iParam0)
{
	return func_416(iParam0, 7);
}

int func_372(int iParam0)
{
	return func_416(iParam0, 6);
}

void func_373(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_379(iParam1))
		{
			clear_bit(iParam1, 14);
			func_411(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_374(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_417(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_389(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_99(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_99(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_418(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_375(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_419(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_420(iParam1, 1))
	{
		func_421(iParam1, 1);
		return true;
	}
	return false;
}

void func_376(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_212((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_377(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_378(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_379(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_380(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_381(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_382(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_383(int iParam0, int iParam1)
{
	if (func_244() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_384(int iParam0)
{
	if (func_244() != -1)
	{
		if (func_386(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_386(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_385(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_386(iParam0, 65536) && !func_386(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_386(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_386(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_386(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_387(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_388()
{
	return Global_1905944->f_5694;
}

bool func_389(int iParam0, bool bParam1)
{
	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	return !func_180(iParam0, 4);
}

float func_390(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_73(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_422(uParam0);
	}
	return func_73(uParam0);
}

float func_391(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_392()
{
	iVar0 = func_424(func_423());
	iVar1 = func_425(func_423());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

struct<4> func_393(bool bParam0)
{
	return func_339(1328661203, func_426(), -1591664384, bParam0);
}

int func_394(int iParam0)
{
	if (!func_403(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_395(bool bParam0)
{
	iVar0 = func_404(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_339(923904168, func_393(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_339(923904168, func_393(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_339(923904168, func_393(bParam0), -740156546, 0);
}

bool func_396(int iParam0, bool bParam1)
{
	if (func_398(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_427(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_397(bool bParam0)
{
	iVar0 = func_404(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_339(271701509, func_393(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_339(271701509, func_393(bParam0), 12999093, 0);
}

int func_398(int iParam0)
{
	if (!func_403(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_399(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_398(iParam0);
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

bool func_400(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_404(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_401(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_403(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_339(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_404(bParam6), &Var0, 0);
	return uVar4;
}

bool func_402(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_404(0);
	*uParam1 = { func_339(iParam0, func_395(0), iParam3, 0) };
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

bool func_403(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_404(bool bParam0)
{
	if (func_244() == -1)
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

bool func_407()
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

int func_408(int iParam0)
{
	if (!func_66(iParam0))
	{
		return -1;
	}
	return func_428(iParam0);
}

bool func_409(int iParam0)
{
	return func_180(iParam0, 2);
}

int func_410(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_411(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_96(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_293(&(iParam1->f_6), 0, 1);
	}
	if (!func_96(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_379(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_429(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_96(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_418(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_430(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_431(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_97(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_430(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_99(iParam1->f_6, 0, 1);
				}
				else
				{
					func_99(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_412(int iParam0)
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

void func_413(int* iParam0, int iParam1)
{
	if (!func_211(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_213(iParam0, 14);
		}
	}
}

bool func_414(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_415(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_416(int iParam0, int iParam1)
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

bool func_417(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_418(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_96(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_430(iParam0, 18, 0, 1);
	func_430(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_419(int iParam0, bool bParam1)
{
	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_420(int iParam0, bool bParam1)
{
	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_421(int iParam0, bool bParam1)
{
	if (bParam1 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

var func_422(var uParam0)
{
	return uParam0->f_25;
}

int func_423()
{
	return &Global_1899515;
}

int func_424(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_425(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

struct<4> func_426()
{
	return Var0;
}

bool func_427(int iParam0)
{
	if (!func_432(iParam0))
	{
		return false;
	}
	return func_433(iParam0);
}

int func_428(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_434(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_429(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_180(iVar0, 2))
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
				func_435(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_430(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_431(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_432(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_433(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_434(int iParam0)
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

void func_435(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_133(iParam0, 1);
	func_134(iParam0, 1);
	func_135(iParam0, 128);
}

