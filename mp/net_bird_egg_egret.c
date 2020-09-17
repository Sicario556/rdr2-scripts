void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uLocal_23 = ScriptParam_0;
	iLocal_22 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		network_set_script_is_safe_for_network_game();
		if (func_3(func_2(0)) != 7)
		{
		}
		else
		{
			func_4(&uLocal_42);
		}
	}
	if (func_1() == -1)
	{
		if (has_force_cleanup_occurred(523))
		{
			func_4(&uLocal_42);
		}
	}
	if (!_does_scenario_point_exist(iLocal_22))
	{
		func_4(&uLocal_42);
	}
	func_5(&uLocal_42, 875971115, -1232280687, 702887809, 1438934506, 5, 1);
	while (func_6(&uLocal_42))
	{
		if (func_7())
		{
			func_4(&uLocal_42);
		}
		if (func_8(&uLocal_42))
		{
			func_4(&uLocal_42);
		}
		func_9(&uLocal_42);
		wait(0);
	}
	func_4(&uLocal_42);
}

int func_1()
{
	return Global_1572887->f_13;
}

struct<2> func_2(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	func_10(0);
	func_11(&(uParam0->f_14));
	if (iLocal_39 != iVar0)
	{
		_0x5758b1ee0c3fd4ac(iLocal_39, 0);
	}
	if (does_blip_exist(uParam0->f_2))
	{
		remove_blip(&(uParam0->f_2));
	}
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (does_entity_exist(&(iLocal_24[iVar1])))
		{
			func_13(&(iLocal_24[iVar1]), &(iLocal_24[iVar1]), 0);
		}
		iVar1++;
	}
	if (func_14((*Global_1212893)[*uParam0][uParam0->f_13], 2))
	{
		func_15((*(*Global_1212893)[*uParam0])[uParam0->f_13], 2);
	}
	func_16(&(uParam0->f_14));
	_0xe7282390542f570d(uLocal_23);
	terminate_this_thread();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0 = 5;
	vLocal_16 = { _get_scenario_point_coords(iLocal_22, true) };
	vLocal_19 = { _get_scenario_point_coords(iLocal_22, true) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	iLocal_36 = iParam3;
	iLocal_37 = iParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

bool func_6(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		func_4(uParam0);
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
	switch (uParam0->f_4)
	{
		case 1:
			func_17(uParam0);
			break;
		case 0:
			func_18(uParam0);
			break;
	}
	return false;
}

int func_9(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (func_19(uParam0))
			{
				func_10(1);
				func_20(uParam0->f_11, &uVar0);
				func_10(0);
				func_16(&(uParam0->f_14));
				uParam0->f_4 = -1;
				return 1;
			}
			break;
	}
	return 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_21(0, 6);
	}
	else
	{
		func_22(0, 6, 0);
	}
}

void func_11(var uParam0)
{
	if (_does_volume_exist(uParam0->f_8))
	{
		_delete_volume(uParam0->f_8);
	}
}

int func_12(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case 1053249385:
				return 1;
			case 410290576:
				return 3;
			case -1117423291:
				return 5;
			case -158375659:
				return 4;
			case 322658308:
				return 1;
			case -1232280687:
				return 1;
			case 742074887:
				return 1;
			case 2060029625:
				return 1;
			case 229697410:
				return 1;
			case -1513842258:
				return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2)
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
	_0xdc5e09d012d759c4(iParam0, iParam1, iParam2);
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

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_15(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_16(var uParam0)
{
	func_24(uParam0);
	func_25(&(uParam0->f_7), 1);
}

void func_17(var uParam0)
{
	if (func_26(uParam0) > 4)
	{
		func_27(&iLocal_38);
	}
	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (does_entity_exist(iLocal_38))
	{
		if (!decor_exist_on(iLocal_38, "EggBroken"))
		{
			func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Global_17411.f_2966.f_1)
		{
			if (uParam0->f_3 == Global_17411.f_2966.f_1[iVar1]->f_4)
			{
				if (func_30(Global_35, Global_17411.f_2966.f_1[iVar1]->f_1, 50f, 1))
				{
					if (!&Global_17411.f_2966.f_1[iVar1])
					{
						Global_17411.f_2966.f_1[iVar1] = 1;
						func_31("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, 1);
					}
				}
			}
			iVar1++;
		}
	}
	if (func_32(Global_1296859->f_8, vLocal_16, 1) < 2f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	if (func_14((*Global_1212893)[*uParam0][uParam0->f_13], 4))
	{
		func_34(iLocal_38, 0);
		func_35(uParam0, 9);
		func_15((*(*Global_1212893)[*uParam0])[uParam0->f_13], 4);
	}
	else if (func_14((*Global_1212893)[*uParam0][uParam0->f_13], 8))
	{
		func_34(iLocal_38, 1);
		if (does_entity_exist(iLocal_38))
		{
			func_13(iLocal_38, iLocal_38, 0);
		}
		func_35(uParam0, 12);
		func_15((*(*Global_1212893)[*uParam0])[uParam0->f_13], 8);
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_16, 1.5f, 1, 319, 0);
			func_37(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_39(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (does_entity_exist(iLocal_38))
			{
				if (!_0x0e6846476906c9dd(player_id(), iLocal_38))
				{
					func_41(iLocal_38, iLocal_38, 0);
					_0x7563cbca99253d1a(iLocal_38, 187984275);
					func_35(uParam0, 5);
				}
			}
			break;
		case 5:
			if (uParam0->f_11 != 521036731)
			{
				if (func_42())
				{
					func_13(iLocal_38, iLocal_38, 0);
					func_35(uParam0, 11);
				}
				if (func_32(get_player_ped(player_id()), vLocal_16, 0) < 10f)
				{
					func_35(uParam0, 6);
				}
			}
			else
			{
				func_35(uParam0, 9);
			}
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			if (func_32(Global_34, vLocal_16, 0) < 8f)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			break;
		case 11:
			if (!decor_get_bool(iLocal_38, "EggBroken"))
			{
				func_43(*uParam0, uParam0->f_13, _0x901e0dc25080c8b9(player_id()));
			}
			else
			{
				func_44(*uParam0, uParam0->f_13, _0x901e0dc25080c8b9(player_id()));
			}
			break;
		case 9:
			if (!does_entity_exist(&(iLocal_24[0])))
			{
				_0xf41e2979d5bc5370(iLocal_37);
				iLocal_24[0] = create_object_no_offset(iLocal_37, vLocal_16, false, false, false, true);
			}
			if (does_entity_exist(&(iLocal_24[0])))
			{
				if (!_0x0ccfe72b43c9cf96(&(iLocal_24[0])))
				{
					if (!uParam0->f_23)
					{
						activate_physics(&(iLocal_24[0]));
						_0x78b4567e18b54480(&(iLocal_24[0]));
						func_13(iLocal_38, iLocal_38, 0);
						func_41(&(iLocal_24[0]), &(iLocal_24[0]), 0);
						_0x7563cbca99253d1a(&(iLocal_24[0]), 187984275);
						_0x5826efd6d73c4de5(&(iLocal_24[0]));
						func_15((*(*Global_1212893)[*uParam0])[uParam0->f_13], 4);
						uParam0->f_23 = 1;
					}
				}
				else
				{
					_0x8e1dde26d270cc5e(&(iLocal_24[0]), 1);
					func_35(uParam0, 10);
				}
				if (uParam0->f_23)
				{
					func_45(uParam0);
				}
			}
			break;
		case 10:
			func_45(uParam0);
			func_35(uParam0, 13);
			break;
		case 12:
			_0x8245c1f3262f4ac2(iLocal_22);
			_0x082c043c7afc3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

void func_18(var uParam0)
{
	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (func_46(uParam0, &iLocal_24) > 0)
	{
		func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
	}
	if (func_32(Global_1296859->f_8, vLocal_16, 1) < 3.5f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_16, 1.5f, 1, 319, 0);
			func_47(&(uParam0->f_14), vLocal_16);
			func_48(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_49(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_50(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (func_51(&iLocal_24, &iLocal_30, func_12(&(uParam0->f_3)), vLocal_16, 5f) > 0)
			{
				iVar1 = 0;
				while (iVar1 < func_12(&(uParam0->f_3)))
				{
					if (does_entity_exist(&(iLocal_24[iVar1])))
					{
						_0x46cbcf0e98a4e156(&(iLocal_24[iVar1]), 1);
						if (!_0x0e6846476906c9dd(player_id(), &(iLocal_24[iVar1])))
						{
							func_41(&(iLocal_24[iVar1]), &(iLocal_24[iVar1]), 0);
						}
						_0x7563cbca99253d1a(&(iLocal_24[iVar1]), 187984275);
					}
					iVar1++;
				}
			}
			iVar2 = _0x96c6ed22fb742c3e(iLocal_39, &(uParam0->f_25));
			if (iVar2 > 0 && iVar2 <= 10)
			{
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (does_entity_exist(&(uParam0->f_25[iVar3])))
					{
						_0x46cbcf0e98a4e156(get_object_index_from_entity_index(&(uParam0->f_25[iVar3])), 1);
						if (!_0x0e6846476906c9dd(player_id(), &(uParam0->f_25[iVar3])))
						{
							func_41(&(uParam0->f_25[iVar3]), &(uParam0->f_25[iVar3]), 0);
						}
						_0x7563cbca99253d1a(&(uParam0->f_25[iVar3]), 187984275);
					}
					iVar3++;
				}
			}
			if (func_46(uParam0, &iLocal_24) == func_12(&(uParam0->f_3)))
			{
				func_35(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, 6);
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_32(Global_34, vLocal_16, 0) < 8f)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			break;
		case 9:
			func_35(uParam0, 11);
			break;
		case 10:
			func_35(uParam0, 13);
			break;
		case 11:
			func_35(uParam0, 13);
			break;
		case 12:
			_0x082c043c7afc3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

bool func_19(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		if (func_32(get_player_ped(player_id()), uParam0->f_5, 1) <= 1f)
		{
			return (func_52(uParam0) || func_53(uParam0));
		}
	}
	return (func_52(uParam0) || func_53(uParam0));
}

int func_20(int iParam0, var uParam1)
{
	Var0.f_1 = 10;
	func_54(&Var0, 1356624740);
	return func_55(iParam0, &Var0, uParam1, 0, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (!func_56(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_57();
	}
}

void func_22(int iParam0, int iParam1, bool bParam2)
{
	if (func_56(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_57();
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_24(var uParam0)
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

void func_25(var uParam0, int iParam1)
{
	if (func_58(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

int func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27(int iParam0)
{
	if (func_59(*iParam0))
	{
		if (does_entity_exist(*iParam0))
		{
			if (!decor_exist_on(*iParam0, "EggBroken"))
			{
				if (has_entity_been_damaged_by_any_ped(*iParam0))
				{
					if (_0x9e2d5d6bc97a5f1e(*iParam0, -570967010, 10000) || func_60())
					{
						decor_set_bool(*iParam0, "EggBroken", false);
					}
					else
					{
						decor_set_bool(*iParam0, "EggBroken", true);
						func_61(818, 1);
					}
				}
			}
		}
	}
}

bool func_28(var uParam0)
{
	Var0 = { func_62(uParam0->f_3, 0, 1) };
	if (func_63(uParam0->f_3, &Var0, 1, 0, 0, -1, 0))
	{
		return false;
	}
	if (_does_scenario_point_exist(iLocal_22))
	{
		if (_0xfb7cf1de938a3e22(iLocal_22))
		{
			return false;
		}
	}
	return true;
}

void func_29(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_64(-1733092640, 1))
	{
		return;
	}
	if (func_65(0))
	{
		return;
	}
	if (func_66())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_67())
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
	if (!func_68(*Global_1212889) && get_distance_between_coords(*Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_32(get_player_ped(player_id()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_69()));
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
						if (func_70(get_player_ped(player_id()), 0, 1, 0) != -862059856)
						{
							_0xdcf5ba95bbf0faba(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_71(uParam0, 1);
					}
				}
				else
				{
					func_71(uParam0, 1);
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
				func_72(250);
			}
			set_pad_shake(0, iVar3, iVar4);
			func_73(&(uParam0->f_2));
			func_71(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_24(uParam0);
				}
				func_71(uParam0, 0);
			}
			else if (func_74(&(uParam0->f_2)) >= 2f)
			{
				func_71(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_72(250);
			}
			break;
	}
}

bool func_30(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

var func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

float func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_33(var uParam0)
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

void func_34(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!bParam1)
		{
			shoot_single_bullet_between_coords(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, -570967010, 0, false, false, -1f, false);
		}
		else
		{
			shoot_single_bullet_between_coords(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, -183018591, 0, false, false, -1f, false);
		}
	}
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_36(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_58(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_58(uParam0))
		{
		}
	}
}

void func_37(var uParam0)
{
	request_model(iLocal_36, false);
	request_model(iLocal_37, false);
}

bool func_38(var uParam0)
{
	if (has_model_loaded(iLocal_36) && has_model_loaded(iLocal_37))
	{
		return true;
	}
	return false;
}

bool func_39(var uParam0)
{
	if (!does_entity_exist(iLocal_38))
	{
		iLocal_38 = create_object_no_offset(iLocal_36, vLocal_19, false, true, false, true);
	}
	if (!does_entity_exist(iLocal_38))
	{
		return false;
	}
	return true;
}

void func_40(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case 1053249385:
				iLocal_30[iVar0] = -592873548;
				break;
			case 410290576:
				iLocal_30[iVar0] = 755040865;
				break;
			case -1117423291:
				iLocal_30[iVar0] = -946816685;
				break;
			case -158375659:
				iLocal_30[iVar0] = 1390217426;
				break;
			case 742074887:
				iLocal_30[iVar0] = -1971337181;
				break;
			case -1232280687:
				iLocal_30[iVar0] = 702887809;
				break;
			case 2060029625:
				iLocal_30[iVar0] = 990159072;
				break;
			case -1513842258:
				iLocal_30[iVar0] = 574926209;
				break;
			case 322658308:
				iLocal_30[iVar0] = 238830633;
				break;
			case 229697410:
				iLocal_30[iVar0] = -820230677;
				break;
		}
		iVar0++;
	}
}

int func_41(int iParam0, int iParam1, int iParam2)
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
	if (!func_75(iParam0))
	{
		_0x543dfe14be720027(player_id(), iParam0, 0);
		_0x6ecfc621a168424c(iParam0, iParam1, iParam2, 0);
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

bool func_42()
{
	if (does_entity_exist(iLocal_38))
	{
		return decor_exist_on(iLocal_38, "EggBroken");
	}
	return false;
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	uVar0 = func_76(0, 8);
	Var1.f_4 = 1;
	Var1 = 42;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1296859->f_154[&Global_1296859];
	Var8 = 0;
	Var8.f_1 = get_player_index();
	Var8.f_2 = get_network_time_accurate();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, -432403087, 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_44(var uParam0, var uParam1, int iParam2)
{
	uVar0 = func_76(0, 8);
	Var1.f_4 = 1;
	Var1 = 43;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1296859->f_154[&Global_1296859];
	Var8 = 0;
	Var8.f_1 = get_player_index();
	Var8.f_2 = get_network_time_accurate();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, -432403087, 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_45(var uParam0)
{
	if (does_entity_exist(&(iLocal_24[0])))
	{
		if (!uParam0->f_24)
		{
			vVar0 = { get_entity_coords(&(iLocal_24[0]), true, false) };
			vVar3 = { vVar0 };
			if (func_80(&vVar3, 50, 10, 0, 0))
			{
				if (absf((vVar3.z - vVar0.z)) <= 0.025f)
				{
					set_damping(&(iLocal_24[0]), 0, 100000f);
					set_damping(&(iLocal_24[0]), 4, 100000f);
					uParam0->f_24 = 1;
				}
			}
		}
		else
		{
			vVar6 = { get_entity_velocity(&(iLocal_24[0]), -1) };
			vVar9 = { vVar6 };
			vVar9 = { vVar9 * Vector(0.75f, 0.75f, 0.75f) };
			if (absf(vVar6.x) < vVar9.x)
			{
				vVar9.x = vVar6.x;
			}
			if (absf(vVar6.y) < vVar9.y)
			{
				vVar9.f_1 = vVar6.y;
			}
			if (absf(vVar6.z) < vVar9.z)
			{
				vVar9.f_2 = vVar6.z;
			}
			if (func_30(vVar9, 0f, 0f, 0f, 0.05f, 1))
			{
				vVar9 = { 0f, 0f, 0f };
				freeze_entity_position(&(iLocal_24[0]), true);
			}
			else
			{
				set_entity_velocity(&(iLocal_24[0]), vVar9);
			}
		}
	}
}

int func_46(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (does_entity_exist(iParam1[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_47(var uParam0, vector3 vParam1)
{
	if (!_does_volume_exist(uParam0->f_8))
	{
		uParam0->f_8 = _create_volume_cylinder_with_custom_name(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		_0xb56d41a694e42e86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_48(var uParam0)
{
	_0x73f0d0327bfa0812(uLocal_40);
}

bool func_49(var uParam0)
{
	if (_0x5e5d96be25e9df68(uLocal_40))
	{
		return true;
	}
	return false;
}

bool func_50(var uParam0)
{
	if (!is_entity_dead(Global_34))
	{
		if (bLocal_41)
		{
			iLocal_39 = _0x5b4bbe80ad5972dc(uLocal_40, vLocal_16, 0f, 0, &uVar0, -1);
		}
		else
		{
			iLocal_39 = _0x5b4bbe80ad5972dc(uLocal_40, vLocal_16, 0f, 1, &uVar0, -1);
		}
		return true;
	}
	return false;
}

int func_51(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_81(iParam0, iParam1, iVar0, iParam2);
	func_82(iVar0);
	return iVar1;
}

int func_52(var uParam0)
{
	if (has_anim_event_fired(get_player_ped(player_id()), 89266752))
	{
		if (_does_scenario_point_exist(iLocal_22))
		{
			_0x8245c1f3262f4ac2(iLocal_22);
		}
		func_83(*uParam0, uParam0->f_13, _0x901e0dc25080c8b9(player_id()));
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	if (func_14((*Global_1212893)[*uParam0][uParam0->f_13], 2))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_55(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_84(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_85(uParam2, iParam0, Var1);
	return 1;
}

bool func_56(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_57()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

bool func_58(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_59(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_an_object(iParam0))
		{
			iVar0 = get_entity_model(iParam0);
			switch (iVar0)
			{
				case -1971337181:
				case -1904939264:
				case -820230677:
				case 238830633:
				case 702887809:
				case 990159072:
					return true;
			}
		}
	}
	return false;
}

int func_60()
{
	if (func_87(func_86(Global_34, 1, 0, 0)))
	{
		iVar0 = _0x7e7b19a4355fee13(Global_34, _0x6ca484c9a7377e4f(Global_34, 1));
		if (iVar0 == -1368511730)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_61(int iParam0, bool bParam1)
{
	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
}

struct<5> func_62(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_92(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_93(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_94(bParam1) };
			if (bParam2 && func_95(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_96(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_96(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_97(iParam0, &Var6, 1728382685))
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
			Var0 = { func_98(bParam1) };
			switch (func_99(iParam0))
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
			if (func_100(iParam0, -1823706425))
			{
				Var0 = { func_93(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_100(iParam0, -1483207246))
			{
				Var0 = { func_93(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_93(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_100(iParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_101(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_100(iParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
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

bool func_63(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_102(&iParam0);
	if (!func_103(iParam0, 0) && !func_105(func_104(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_106(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_107(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_94(0) };
		Var4.f_9 = -1591664384;
		if (!func_96(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_97(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_95(iParam0, 1))
		{
			if (!func_96(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_97(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_108(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_109(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_92(iParam0);
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
			if (!func_110(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_111(iParam0))
			{
				return true;
			}
			break;
	}
	return func_112(iParam0, 0, 0, 0) >= iParam1;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_66()
{
	return func_113() != -1;
}

bool func_67()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_69()
{
	return Global_1146212->f_2169[89]->f_201;
}

int func_70(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_72(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_73(var uParam0)
{
	func_114(uParam0, 0f);
}

float func_74(var uParam0)
{
	if (!func_115(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_116(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_117() - uParam0->f_1);
}

bool func_75(int iParam0)
{
	if (func_118() == 0)
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(func_118()))
	{
		return false;
	}
	Var0 = func_118();
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

var func_76(int iParam0, int iParam1)
{
	return func_77(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

var func_77(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_119() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_121(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_122(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_123(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_124(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

void func_78(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_125(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &uParam19);
}

void func_79(var uParam0, var uParam1)
{
	if (_0x179a6f0ee2e79026(uParam1))
	{
		uParam0->f_1 = &Global_1296859->f_154[&Global_1296859];
		trigger_script_event(1, uParam0, 7, 18, uParam1);
	}
}

bool func_80(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_126(*uParam0, 0f, 0f, 0f))
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
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
			while (iVar5 < *iParam1)
			{
				if (iParam1[iVar5] == 0)
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (get_entity_model(iVar2) == iParam1[iVar5])
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
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

void func_82(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_83(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iParam2 = _0x901e0dc25080c8b9(player_id());
	}
	if (!_0xd6f6acf4392187fb(iParam2))
	{
	}
	uVar0 = func_127(iParam2);
	_0xd426e2e3288469d6(&uVar0, player_id());
	Var1.f_4 = 1;
	Var1 = 41;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1296859->f_154[&Global_1296859];
	Var8 = 0;
	Var8.f_1 = get_player_index();
	Var8.f_2 = get_network_time_accurate();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 300f, 300f, 300f, -432403087, 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_84(var uParam0)
{
	func_54(uParam0, 143479330);
	if (func_128() == 2026485318)
	{
		func_54(uParam0, 617531372);
	}
	else
	{
		func_54(uParam0, 291123060);
	}
}

void func_85(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_129(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

int func_86(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_87(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_130(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_131(iParam0))
	{
		return false;
	}
	if (func_132(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_133(iParam0, 1)) || func_134(32768))
	{
		if (!func_133(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_135())
	{
		return false;
	}
	return true;
}

void func_90(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

struct<4> func_91(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_136(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_93(1328661203, func_137(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_93(1328661203, func_137(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_93(1328661203, func_137(), -1591664384, bParam0);
}

int func_92(int iParam0)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_93(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_103(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_136(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_94(bool bParam0)
{
	iVar0 = func_136(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_93(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_93(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_93(923904168, func_91(bParam0), -740156546, 0);
}

bool func_95(int iParam0, bool bParam1)
{
	if (func_99(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_138();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_96(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_109(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_97(int iParam0, var uParam1, int iParam2)
{
	if (func_139(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_98(bool bParam0)
{
	iVar0 = func_136(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_93(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_93(271701509, func_91(bParam0), 12999093, 0);
}

int func_99(int iParam0)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_99(iParam0);
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
			if (func_140(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_101(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_141(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_102(int iParam0)
{
	if (!func_103(*iParam0, 0))
	{
		return 0;
	}
	if (!func_142(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_104(int iParam0)
{
	return iParam0;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_107(int iParam0)
{
	return func_92(iParam0) == -427144552;
}

int func_108(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_103(iParam0, 0) && !func_105(func_104(iParam0), 2))
	{
		return 0;
	}
	if (func_92(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_106(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_136(bParam3), iParam0);
}

int func_109(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_106(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_93(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_136(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_136(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_110(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_143(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_144("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_145(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_146(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_147(iVar1);
				return true;
			}
			iVar3++;
		}
		func_147(iVar1);
	}
	return false;
}

bool func_111(int iParam0)
{
	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_99(iParam0);
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
	iVar1 = func_148(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_149(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_150(iParam0);
	iVar2 = func_149(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_112(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_92(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_143(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_151(iParam0, 0);
	}
	if (func_106(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_136(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_152(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_136(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_113()
{
	return Global_1138962->f_137;
}

void func_114(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_117() - fParam1);
	func_153(uParam0, 1);
	func_154(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_115(var uParam0)
{
	return func_155(*uParam0, 1);
}

bool func_116(var uParam0)
{
	return func_155(*uParam0, 2);
}

float func_117()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_118()
{
	return Global_1071686->f_28448[47]->f_3;
}

int func_119()
{
	return Global_1051252->f_12;
}

char* func_120()
{
	return "unnamed";
}

int func_121(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_122(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_156(36, iParam0);
}

int func_123(int iParam0)
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

bool func_124(int iParam0)
{
	if (func_157(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_158(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_125(var uParam0, struct<21> Param1)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_126(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_127(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_128()
{
	return Global_1952637->f_1;
}

bool func_129(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_130(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_131(int iParam0)
{
	if (func_133(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_132(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_133(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_134(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_135()
{
	if (!func_160())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_136(bool bParam0)
{
	if (func_1() == -1)
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

struct<4> func_137()
{
	return Var0;
}

bool func_138()
{
	return (func_161(-1185145312, 0, 0, 0) > 0 && func_162(func_93(889965687, func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_139(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_136(0);
	*uParam1 = { func_93(iParam0, func_94(0), iParam3, 0) };
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

bool func_140(int iParam0, int iParam1, int iParam2)
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

bool func_141(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_142(int iParam0)
{
	return func_163(iParam0, 1279601681);
}

int func_143(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_92(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_163(iParam0, 1399091007))
	{
		func_164(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_144(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_136(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_145(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_146(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_147(int iParam0)
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

int func_148(int iParam0)
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

int func_149(var uParam0, int iParam1)
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

int func_150(int iParam0)
{
	iVar0 = func_99(iParam0);
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

int func_151(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_165(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_166(&Var0, func_94(0));
	}
	if (!func_167(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_147(iVar14);
	return uVar15;
}

struct<4> func_152(int iParam0, bool bParam1)
{
	Var0 = { func_62(iParam0, bParam1, 0) };
	return func_93(iParam0, Var0, Var0.f_4, bParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_156(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_168(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_169())
	{
		return func_168(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_168(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_157(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_158(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_170(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_171(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_159(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_160()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_161(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_172(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_136(bParam1), iParam0, iParam3);
}

int func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_173(&uParam0, iParam4, bParam5, iParam6);
}

int func_163(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return func_174(func_104(iParam0), iParam1);
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

void func_164(int iParam0, var uParam1, var uParam2)
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

struct<14> func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_166(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_167(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_136(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_169()
{
	return Global_1102219->f_3672;
}

void func_170(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_171(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_171(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_172(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_173(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_175(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 2))
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

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_141(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

