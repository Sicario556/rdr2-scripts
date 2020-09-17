void __EntryFunction__()
{
	uLocal_12 = ScriptParam_0;
	if (has_force_cleanup_occurred(514) || func_1() != -1)
	{
		func_2(&Local_3);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_2(&Local_3);
	}
	iLocal_13 = ScriptParam_0.f_1;
	vLocal_9 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	iLocal_14 = func_3();
	iLocal_16 = get_interior_at_coords(vLocal_9);
	if (iLocal_14 == 831598167 || iLocal_14 == -1908250692)
	{
		func_4(iLocal_14, &iLocal_15);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_2(&Local_3);
		}
		if (iLocal_14 == -547059201)
		{
			func_7(&Local_3);
		}
		if ((((iLocal_14 == 1278960555 || iLocal_14 == 1037027028) || iLocal_14 == 2142915244) || iLocal_14 == 831598167) || iLocal_14 == 1518436411)
		{
			func_8(&Local_3);
		}
		if (iLocal_14 == -1908250692)
		{
			func_9(&Local_3);
		}
		wait(0);
	}
	func_2(&Local_3);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(var uParam0)
{
	if (iLocal_14 == 831598167 || iLocal_14 == -1908250692)
	{
		func_10(uParam0);
	}
	else if (is_valid_interior(iLocal_16))
	{
		if (_is_interior_entity_set_valid(iLocal_16, func_11(iLocal_14, 11)) && is_interior_entity_set_active(iLocal_16, func_11(iLocal_14, 11)))
		{
			deactivate_interior_entity_set(iLocal_16, func_11(iLocal_14, 11), true);
		}
	}
	if (iLocal_14 == -547059201)
	{
		if (does_entity_exist(iLocal_17))
		{
			_0x78b4567e18b54480(iLocal_17);
		}
	}
	_0xe7282390542f570d(uLocal_12);
	terminate_this_thread();
}

int func_3()
{
	if (_does_scenario_point_exist(iLocal_13))
	{
		iVar0 = round(_0x6718f40313a2b5a6(iLocal_13));
	}
	return _0x126cbebba46693cf(iVar0, 678508515, -628777282);
}

void func_4(int iParam0, int iParam1)
{
	*iParam1 = _0x922a79cd4a033b8b(iParam0);
}

bool func_5()
{
	if (_0x9e4ef615e307fbbe())
	{
		func_2(&Local_3);
		return false;
	}
	return true;
}

bool func_6()
{
	if (func_1() != -1)
	{
		return true;
	}
	if (is_ped_injured(Global_35))
	{
		return true;
	}
	return false;
}

int func_7(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76) && func_14(52))
			{
				if (func_15() < 1)
				{
					func_16(-547059201);
					func_17(-547059201);
					func_18(-547059201);
				}
				func_19(uParam0, 1);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 1:
			if (func_15() == func_20() && !func_21(-1460017026, 1, 0))
			{
				if ((func_15() == 6 && func_20() == 6) && func_22(1518436411))
				{
					func_2(&Local_3);
				}
				else if (func_23(uParam0))
				{
					func_19(uParam0, 16);
				}
			}
			else if (func_24(0, 0, 1))
			{
				func_2(&Local_3);
			}
			else
			{
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_21(-1460017026, 1, 0))
			{
				func_19(uParam0, 3);
			}
			break;
		case 3:
			func_25();
			func_19(uParam0, 4);
			break;
		case 4:
			if (func_26())
			{
				func_19(uParam0, 5);
			}
			break;
		case 5:
			if (func_27(&(Local_3.f_1), "COL_CTX_TAX_MARITAL_PLACE", vLocal_9, 0, -473983589, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1704213876, 0))
			{
				if (func_15() == 2)
				{
					func_18(1278960555);
					func_16(1278960555);
				}
				else if (func_15() == 3)
				{
					func_18(1037027028);
					func_16(1037027028);
				}
				else if (func_15() == 4)
				{
					func_18(2142915244);
					func_16(2142915244);
				}
				else if (func_15() == 5)
				{
					func_18(831598167);
					func_16(831598167);
				}
				else if (func_15() == 6)
				{
					func_18(1518436411);
					func_16(1518436411);
				}
				else if (func_15() == 7)
				{
					func_18(-1908250692);
				}
				set_player_control(get_player_index(), false, 0, false);
				task_follow_nav_mesh_to_coord(Global_35, -1638.493f, -1361.41f, 83.4157f, 1f, 20000, 0.25f, 0, 40000f);
				func_28(48);
				func_29(0, 10);
				settimera(0);
				func_19(uParam0, 6);
			}
			break;
		case 6:
			if (func_30(Global_35, 713668775) || timera() > 1000)
			{
				if (func_31(&Local_3, 0))
				{
					func_19(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_30(Global_35, 713668775))
			{
				return 0;
			}
			set_player_control(get_player_index(), true, 0, false);
			func_32(&Local_3, 0);
			if (func_33(&Local_3, 0, 1, 1, 1))
			{
				func_19(uParam0, 8);
			}
			break;
		case 8:
			if (func_34(-1460017026, 1, 0, -142743235, 0))
			{
				func_19(uParam0, 16);
			}
			break;
		case 16:
			iLocal_19 = 4;
			uLocal_18 = _0x6f3068258a499e52(-1093147928, -1638f, -1360.66f, 85.35f, 1 | iLocal_19);
			func_19(uParam0, 17);
			break;
		case 17:
			if (_0x1ff441d7954f8709(uLocal_18))
			{
				iLocal_17 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uLocal_18));
				func_19(uParam0, 18);
			}
			break;
		case 18:
			if (iLocal_14 == -547059201)
			{
				_0x67bfced22909834d(iLocal_17);
			}
			func_19(uParam0, 10);
			break;
		case 10:
			break;
	}
	return 0;
}

int func_8(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
			{
				func_19(uParam0, 11);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 11:
			if (func_21(-1460017026, 1, 0))
			{
				func_2(uParam0);
			}
			else if (func_15() == func_20())
			{
				func_2(uParam0);
			}
			else if (func_15() == 2)
			{
				if (iLocal_14 == 1278960555)
				{
					if (func_24(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 3)
			{
				if (iLocal_14 == 1037027028)
				{
					if (func_24(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 4)
			{
				if (iLocal_14 == 2142915244)
				{
					if (func_24(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 5)
			{
				if (iLocal_14 == 831598167)
				{
					if (func_24(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						func_19(uParam0, 13);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 6)
			{
				if (iLocal_14 == 1518436411)
				{
					if (func_24(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 13:
			if (!_0xcf45df50c7775f2a())
			{
				if (func_35(uParam0))
				{
					func_19(uParam0, 15);
				}
			}
			break;
		case 14:
			if (func_23(uParam0))
			{
				if (iLocal_14 == 1037027028)
				{
					set_scenario_group_enabled("TAX_MARITAL_CHIMNEY", true);
				}
				func_19(uParam0, 15);
			}
			break;
		case 15:
			if (func_21(-1460017026, 1, 0))
			{
				func_28(48);
				func_29(0, 10);
				if (iLocal_14 == 1037027028)
				{
					set_scenario_group_enabled("TAX_MARITAL_CHIMNEY", false);
				}
				if (iLocal_14 == 831598167)
				{
					func_19(uParam0, 19);
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_9(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
			{
				if ((func_15() == 6 && func_20() == 6) && func_22(1518436411))
				{
					func_19(uParam0, 12);
				}
				else
				{
					func_2(uParam0);
				}
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 12:
			if (func_24(0, 0, 1))
			{
				func_2(&Local_3);
			}
			else
			{
				func_19(uParam0, 13);
			}
			break;
		case 13:
			if (!_0xcf45df50c7775f2a())
			{
				if (func_35(uParam0))
				{
					func_19(uParam0, 15);
				}
			}
			break;
		case 15:
			if (func_21(-1460017026, 1, 0))
			{
				func_28(48);
				func_29(0, 10);
				func_36(15, 1);
				func_17(-1908250692);
				func_19(uParam0, 19);
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (func_37(iLocal_15))
	{
		func_38(iLocal_15);
	}
	return 1;
}

var func_11(int iParam0, int iParam1)
{
	if (!func_39(17, &Var0))
	{
		return "";
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_string(&Var5, &Var0);
	return func_40(Var5);
}

int func_12(var uParam0)
{
	return *uParam0;
}

bool func_13(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_41((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_14(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_42(iParam0))
	{
		return 0;
	}
	return func_41((*Global_1347702)[iParam0]->f_15, 1);
}

int func_15()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_43(_0x126cbebba46693cf(iVar1, 678508515, -628777282)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_16(int iParam0)
{
	Global_40.f_12019.f_27[func_45(iParam0, 15)] = func_44();
	func_46(Global_40.f_12019.f_27[func_45(iParam0, 15)], 0, 0, func_45(iParam0, 16), func_45(iParam0, 17), 0, 0, 0);
}

void func_17(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_18(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_20()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_47(_0x126cbebba46693cf(iVar1, 678508515, -628777282)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_21(int iParam0, int iParam1, bool bParam2)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_49(iParam0);
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
		if (!func_50(iParam0, 1))
		{
			return false;
		}
	}
	return func_51(iParam0, 0, bParam2) >= iParam1;
}

bool func_22(int iParam0)
{
	if (func_52(&(Global_40.f_12019.f_27[func_45(iParam0, 15)])))
	{
		if (func_53(&(Global_40.f_12019.f_27[func_45(iParam0, 15)]), 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_23(var uParam0)
{
	_0x9d16896f0dbe78a2(func_54(iLocal_14), 10f);
	if (is_valid_interior(iLocal_16))
	{
		if (_is_interior_entity_set_valid(iLocal_16, func_11(iLocal_14, 11)))
		{
			if (!is_interior_entity_set_active(iLocal_16, func_11(iLocal_14, 11)))
			{
				activate_interior_entity_set(iLocal_16, func_11(iLocal_14, 11), 0);
			}
		}
	}
	if (is_interior_entity_set_active(iLocal_16, func_11(iLocal_14, 11)))
	{
		return true;
	}
	return false;
}

bool func_24(int iParam0, bool bParam1, bool bParam2)
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
		if (func_55())
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
		iVar0 = func_56(&(Global_1898164->f_1[0]));
		if (func_42(iVar0) && func_57((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_58(&(Global_1898164->f_1[0])))
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

void func_25()
{
	request_model(-1093147928, false);
}

bool func_26()
{
	return has_model_loaded(-1093147928);
}

bool func_27(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_59(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_60(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_61(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_62(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_63(vParam2))
			{
				return false;
			}
			*uParam0 = func_64(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_65(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_66(1))
			{
				func_67(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_68(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_69(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_67(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_67(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_66(1))
		{
			func_67(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_59(*uParam0))
			{
				func_70(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_71(*uParam0, 1)) || (bParam17 && func_72(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_73(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_74(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_70(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_28(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_75(iParam0);
	fVar1 = func_76(iParam0);
	if ((Global_1347477->f_117 || !func_77(31)) || !func_78(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_79(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_80(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_83(_create_var_string(6, func_81(iParam0), fVar1), "itemtype_textures", func_82(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_29(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_84(&Global_0, 8);
	}
	if (!func_85() || func_1() != -1)
	{
		return;
	}
	func_84(&Global_0, 1);
}

bool func_30(int iParam0, int iParam1)
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

bool func_31(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(&(uParam0->f_2[iParam1])))
	{
		uParam0->f_2[iParam1] = _create_anim_scene(func_86(iParam1), 0, 0, false, true);
	}
	if (!_does_anim_scene_exist(&(uParam0->f_2[iParam1])))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(&(uParam0->f_2[iParam1]), true, false))
	{
		load_anim_scene(&(uParam0->f_2[iParam1]));
	}
	if (!_is_anim_scene_loaded(&(uParam0->f_2[iParam1]), true, false))
	{
		return false;
	}
	if (!func_87(uParam0, iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (func_88())
			{
				set_anim_scene_entity(&(uParam0->f_2[iParam1]), "JOHN", Global_35, 0);
			}
			set_anim_scene_entity(&(uParam0->f_2[iParam1]), "squirrel", uParam0->f_5, 0);
			uParam0->f_4 = get_random_int_in_range(1, 5);
			break;
	}
	return true;
}

void func_32(var uParam0, int iParam1)
{
	if (!_is_anim_scene_started(&(uParam0->f_2[iParam1]), false))
	{
		start_anim_scene(&(uParam0->f_2[iParam1]));
	}
}

bool func_33(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!_0x0df57f86fe71dbe5(&(uParam0->f_2[iParam1]), func_89(iParam2)) && !_0x23e33cb9f4a3f547(&(uParam0->f_2[iParam1]), func_89(iParam2)))
		{
			_0xdf7b5144e25cd3fe(&(uParam0->f_2[iParam1]), func_89(iParam2));
			return false;
		}
	}
	if (bParam4)
	{
		if (_0x23e33cb9f4a3f547(&(uParam0->f_2[iParam1]), func_89(iParam2)))
		{
			_set_anim_scene_playback_list_bool(&(uParam0->f_2[iParam1]), func_89(iParam2), true);
			return true;
		}
	}
	return false;
}

bool func_34(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_90(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_91(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_21(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_92(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_51(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_51(iParam0, 0, 0) - iParam1) < 0)
		{
			func_34(iParam0, func_51(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_49(iParam0) == -427144552)
	{
		if (!func_93(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_94(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_95(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_91(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_96(iParam0, iParam1);
	return true;
}

bool func_35(var uParam0)
{
	func_97(iLocal_15);
	return true;
}

int func_36(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (!func_99(iParam0, &iVar0, &uVar1))
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

bool func_37(int iParam0)
{
	return iParam0 != 0;
}

void func_38(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_39(int iParam0, var uParam1)
{
	if (!func_100(iParam0))
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

var func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_41(int iParam0, bool bParam1)
{
	switch (func_101(iParam0))
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

bool func_42(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_43(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_44()
{
	return &Global_1899515;
}

int func_45(int iParam0, int iParam1)
{
	if (!func_39(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_102(*uParam0);
	iVar1 = func_103(*uParam0);
	iVar2 = func_104(*uParam0);
	iVar3 = func_105(*uParam0);
	iVar4 = func_106(*uParam0);
	iVar5 = func_107(*uParam0);
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
	iVar6 = func_108(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_108(iVar1, iVar0);
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
	func_109(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_47(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_48(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_49(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_50(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_90(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_110("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_111(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_112(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_113(iVar1);
				return true;
			}
			iVar3++;
		}
		func_113(iVar1);
	}
	return false;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_90(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_114(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_115(bParam2), iParam0, 0);
	return uVar2;
}

bool func_52(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_106(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_105(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_104(iParam0);
	if (iVar5 < 1 || iVar5 > func_108(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, bool bParam1)
{
	return func_116(func_44(), iParam0, bParam1);
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1278960555:
			return -1636.28f, -1354.913f, 84.3f;
		case 1037027028:
			return -1637.18f, -1359.381f, 84.3f;
		case 2142915244:
			return -1646.48f, -1355.488f, 86.7f;
		case 1518436411:
			return -1599.82f, -1417.758f, 84.7f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_55()
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

int func_56(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_118(func_117(iParam0));
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_58(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_59(int iParam0)
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

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_119(iVar0, 2))
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
				func_120(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_61(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_62(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_119(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_120(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_63(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_64(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_63(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_119(iVar0, 2))
		{
			if (func_122(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_120(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_65(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_66(int iParam0)
{
	return _money_get_cash_balance();
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (bParam1)
	{
		func_123(iParam0, 4);
		func_124(iVar0, 1);
		func_125(iVar0, 1);
	}
	else
	{
		func_126(iParam0, 4);
		func_125(iVar0, 0);
	}
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	func_124(iVar0, bParam1);
}

bool func_69(int iParam0, bool bParam1)
{
	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	return !func_119(iParam0, 4);
}

void func_70(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_59(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_121(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_127(iVar0);
	*uParam0 = 0;
}

bool func_71(int iParam0, bool bParam1)
{
	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_72(int iParam0, bool bParam1)
{
	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_73(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_128(iParam0);
	if (bParam3)
	{
		func_129(iParam0, sParam1, iParam2);
	}
}

void func_74(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_130(iParam0, sParam4, iParam5);
	}
	func_131(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_75(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_76(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_132(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_132(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_132(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_77(int iParam0)
{
	if (!func_133(iParam0))
	{
		return false;
	}
	return func_134(iParam0);
}

bool func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_77(18);
		case 2:
			return func_77(20);
		case 1:
			return func_77(19);
		default:
			break;
	}
	return true;
}

int func_79(int iParam0)
{
	return func_135(&(Global_40.f_11095.f_11[iParam0]));
}

void func_80(int iParam0, float fParam1, bool bParam2)
{
	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_77(31))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_79(iParam0);
	if (func_136(iParam0) && func_137(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_138(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_139(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_141(func_140(iParam0), 0);
					}
					func_142(iParam0, iVar2, iVar3);
					func_143(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_81(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

var func_83(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_144(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_85()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_86(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@rcm@txd@ig@ig2_squirrel_on_mantel";
			break;
	}
	return sVar0;
}

bool func_87(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!does_entity_exist(uParam0->f_5))
			{
				uParam0->f_5 = create_object_no_offset(-1093147928, -1637.467f, -1365.527f, 83.4029f, true, true, false, true);
			}
			if (!does_entity_exist(uParam0->f_5))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_88()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

char* func_89(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG2_MAIN_ACTION";
			break;
		case 1:
			sVar0 = "pl_IG2_PLACE_SQUIRREL";
			break;
		case 2:
			sVar0 = "pl_IG2_PLACE_SQUIRREL2";
			break;
		case 3:
			sVar0 = "pl_IG2_PLACE_SQUIRREL3";
			break;
		case 4:
			sVar0 = "pl_IG2_PLACE_SQUIRREL4";
			break;
	}
	return sVar0;
}

int func_90(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_145(iParam0, 1399091007))
	{
		func_146(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_48(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_147())
	{
		func_148(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_149(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_149(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_150(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_49(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_151(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_153(_create_var_string(10, &cVar2, _create_var_string(0, func_152(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_145(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_152(iParam0));
	}
	func_83(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_92(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return Var0;
	}
	if (func_145(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_145(iParam0, -537818634))
			{
				return func_154(189951448);
			}
			else
			{
				return func_154(1176172851);
			}
		}
	}
	else if (func_145(iParam0, -537818634))
	{
		return func_154(-963660207);
	}
	if (func_145(iParam0, 2084895747))
	{
		return func_154(1694039471);
	}
	return Var2;
}

bool func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_155(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_157(&Var0, func_156(0));
	}
	if (!func_158(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_111(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_159(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_113(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_94(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_160(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_161(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_162(iParam0, Var0, Var0.f_4, bParam4) };
	return func_159(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_95(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_115(bParam0));
}

void func_96(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_145(iParam0, 606799272))
		{
			func_163(iParam0, iParam1);
		}
		if (func_145(iParam0, -1112814642) && func_145(iParam0, -1697809989))
		{
			func_164(iParam0, iParam1, 1, 0);
		}
	}
}

void func_97(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

bool func_98(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_99(int iParam0, int iParam1, var uParam2)
{
	if (!func_98(iParam0))
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

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_101(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_165(iParam0);
}

int func_102(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_166(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_103(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_104(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_105(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_107(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_108(int iParam0, int iParam1)
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

void func_109(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_167(uParam0, iParam6);
	func_168(uParam0, iParam5);
	func_169(uParam0, iParam4);
	func_170(uParam0, iParam3);
	func_171(uParam0, iParam2);
	func_172(uParam0, iParam1);
}

bool func_110(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_115(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_111(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_112(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_113(int iParam0)
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

int func_114(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_155(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_157(&Var0, func_156(0));
	}
	if (!func_158(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_113(iVar14);
	return uVar15;
}

int func_115(bool bParam0)
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

bool func_116(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_52(iParam1) || !func_52(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_119(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = fParam5;
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
	_uiprompt_set_transport_mode(iVar0, fParam5);
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_124(iParam0, 1);
	func_125(iParam0, 1);
	func_126(iParam0, 128);
}

int func_121(int iParam0)
{
	return iParam0;
}

bool func_122(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_124(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_119(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_125(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_126(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_127(int iParam0)
{
	if (!func_173(iParam0))
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

void func_128(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_66(1) < iParam0)
	{
		iParam0 = func_66(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_154(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_129(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_83(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_130(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_83(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_131(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_174())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_83(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_175(iVar0);
			func_176(iVar0, 0, 0);
		}
		func_83(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_177(func_154(1644987397), iVar1);
	}
}

float func_132(int iParam0)
{
	iVar4 = func_75(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_135(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_178(iVar6) - func_178(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

bool func_133(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_134(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_135(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_138(float fParam0, float fParam1)
{
	iVar0 = func_135(fParam0);
	fVar1 = to_float(func_178(iVar0));
	fVar2 = to_float(func_178(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_139(int iParam0)
{
	if (func_179(iParam0, &iVar0))
	{
		return func_178(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_141(int iParam0, bool bParam1)
{
	func_181(iParam0, &iVar0, &iVar1);
	if (!func_182(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_183(iVar0, iVar1);
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_184(iParam0));
	sVar4 = func_186(func_185(iVar3, iParam2));
	sVar6 = func_187(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_188(iParam0));
	iVar8 = func_189(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_190(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_192(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_191(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_143(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_144(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_145(int iParam0, int iParam1)
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

void func_146(int iParam0, var uParam1, var uParam2)
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

bool func_147()
{
	return !&Global_1911774;
}

void func_148(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_149(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_150(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_151(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_152(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_153(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

struct<2> func_154(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

struct<14> func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_156(bool bParam0)
{
	iVar0 = func_115(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_162(923904168, func_193(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_162(923904168, func_193(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_162(923904168, func_193(bParam0), -740156546, 0);
}

void func_157(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_158(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_115(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_159(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_194(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_195(*uParam1, &Var0, bParam6, 0))
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
	if (!func_95(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_115(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> func_160(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_193(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_49(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_162(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_156(bParam1) };
			if (bParam2 && func_196(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_197(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_197(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_198(iParam0, &Var5, 1728382685))
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
			Var0 = { func_199(bParam1) };
			switch (func_200(iParam0))
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
			if (func_201(iParam0, -1823706425))
			{
				Var0 = { func_162(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_201(iParam0, -1483207246))
			{
				Var0 = { func_162(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_195(Var0, &Var27, bParam1, 0))
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

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_194(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_95(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_115(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_162(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_48(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_115(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_163(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_1() == -1)
	{
		if (func_202(43))
		{
			if (func_145(iParam0, 412399755))
			{
				func_203(-1791518714);
				if (func_204() == 0)
				{
					func_29(0, 10);
					iVar0 = func_205(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_206(iParam0) < func_207(iParam0))
						{
							func_208(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_202(44))
		{
			if (func_145(iParam0, 709057512))
			{
				func_203(-2087881550);
				if (func_204() == 1)
				{
					func_29(0, 10);
					iVar0 = func_205(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_206(iParam0) < func_207(iParam0))
						{
							func_208(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(45))
		{
			if (func_145(iParam0, -1478961327))
			{
				func_203(1908068621);
				if (func_204() == 2)
				{
					func_29(0, 10);
					iVar0 = func_205(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_206(iParam0) < func_207(iParam0))
						{
							func_208(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(46))
		{
			if (func_145(iParam0, -1238404098))
			{
				func_203(1611247019);
				if (func_204() == 3)
				{
					func_29(0, 10);
					iVar0 = func_205(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_206(iParam0) < func_207(iParam0))
						{
							func_208(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(47))
		{
			if (func_145(iParam0, 1160548794))
			{
				func_203(1319635688);
				if (func_204() == 4)
				{
					func_29(0, 10);
					iVar0 = func_205(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_206(iParam0) < func_207(iParam0))
						{
							func_208(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_164(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_21(func_209(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_210(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_211(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_165(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_166(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_169(var uParam0, int iParam1)
{
	iVar0 = func_103(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_108(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_170(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_171(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_173(int iParam0)
{
	return func_119(iParam0, 2);
}

bool func_174()
{
	if (func_213())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_175(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_214((Global_40.f_4283.f_325 + iParam0));
}

void func_176(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_174())
	{
		func_83(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_83(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_177(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
{
	return false;
}

bool func_180()
{
	return false;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_182(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_215(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_216(iParam0))
	{
		return false;
	}
	if (func_217(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_218(iParam0, 1)) || func_219(32768))
	{
		if (!func_218(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_220())
	{
		return false;
	}
	return true;
}

void func_183(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_115(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_115(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_115(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_185(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_186(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

var func_192(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

struct<4> func_193(bool bParam0)
{
	return func_162(1328661203, func_221(), -1591664384, bParam0);
}

bool func_194(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_195(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_115(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_196(int iParam0, bool bParam1)
{
	if (func_200(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_77(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_197(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_222(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_198(int iParam0, var uParam1, int iParam2)
{
	if (func_223(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_199(bool bParam0)
{
	iVar0 = func_115(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_162(271701509, func_193(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_162(271701509, func_193(bParam0), 12999093, 0);
}

int func_200(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_201(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_200(iParam0);
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

bool func_202(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_41((*Global_1347702)[iParam0]->f_15, 1);
}

void func_203(int iParam0)
{
	if (!func_224(iParam0))
	{
		func_226(func_225(iParam0));
	}
}

int func_204()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_224(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_206(iVar9);
	iVar2 = func_206(iVar10);
	iVar3 = func_206(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_206(iVar12);
	}
	iVar5 = func_207(iVar9);
	iVar6 = func_207(iVar10);
	iVar7 = func_207(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_207(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_206(int iParam0)
{
	if (func_21(iParam0, 1, 0))
	{
		iVar0 = func_51(iParam0, 0, 0);
	}
	return iVar0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_85() && (func_227(38) || func_202(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_85() && (func_227(39) || func_202(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_45(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_85() && (func_227(41) || func_202(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_85() && (func_227(49) || func_202(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_45(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_228(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_229(iParam0, iVar13, iVar14))
	{
	}
	if (func_230(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_231(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_232(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_233(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_234(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_209(int iParam0, int iParam1)
{
	if (!func_39(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_210(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_209(iParam1, 5) || iParam0 == func_209(iParam1, 6)) || iParam0 == func_209(iParam1, 7)) || iParam0 == func_209(iParam1, 8)) || iParam0 == func_209(iParam1, 9))
	{
		func_235(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_208(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_236(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_209(iParam1, 5) || iParam0 == func_209(iParam1, 6)) || iParam0 == func_209(iParam1, 7)) || iParam0 == func_209(iParam1, 8)) || iParam0 == func_209(iParam1, 9))
	{
		if (func_235(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_208(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_236(51, 0, 0, iVar0, func_45(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_208(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_236(51, 0, 0, iVar0, func_45(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_212(int iParam0)
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

bool func_213()
{
	return _unlock_is_unlocked(-121456797);
}

void func_214(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_154(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_215(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_216(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_218(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_218(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_218(iParam0, 65536) && !func_218(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_218(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_218(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_219(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_220()
{
	return Global_1905944->f_5694;
}

struct<4> func_221()
{
	return Var0;
}

int func_222(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_162(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_115(bParam6), &Var0, 0);
	return uVar4;
}

bool func_223(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_115(0);
	*uParam1 = { func_162(iParam0, func_156(0), iParam3, 0) };
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

bool func_224(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_226(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_227(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_42(iParam0))
	{
		return false;
	}
	return func_237((*Global_1347702)[iParam0]->f_15);
}

char* func_228(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_238() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_239(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_240(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_241() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_242(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_241(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_243(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_244() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_245(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_244(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_45(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_229(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_230(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_231(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_246(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_21(iVar2, 1, 0) || func_248(func_247(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_249(func_246(iVar0))), func_249(func_246(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_241() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_242() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_209(iParam3, func_251(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_206(iVar2) - iParam7) >= func_45(iParam3, func_252(iVar0));
				}
				else
				{
					bVar1 = func_206(iVar2) >= func_45(iParam3, func_252(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_206(iVar2) + iParam7) >= func_45(iParam3, func_252(iVar0));
			}
			else
			{
				bVar1 = func_206(iVar2) >= func_45(iParam3, func_252(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_253(iVar2)), func_253(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_254(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_255(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_255(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_244() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_245() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_209(iParam3, func_251(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_206(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_257(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_257(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_258(iVar2)), func_258(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_243() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_234(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_58(func_259(0)) && ((func_260(0) == 1 || func_260(0) == 8) || func_260(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

bool func_235(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_257(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_257(iVar0))
		{
			*iParam2++;
		}
		if (func_257(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_257(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_257(iVar0))
		{
			*iParam2++;
		}
		if (func_257(iVar1))
		{
			*iParam2++;
		}
		if (func_257(iVar0) && func_257(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_257(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_257(iVar0))
		{
			*iParam2++;
		}
		if (func_257(iVar1))
		{
			*iParam2++;
		}
		if (func_257(iVar2))
		{
			*iParam2++;
		}
		if ((func_257(iVar0) && func_257(iVar1)) && func_257(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_257(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_257(iVar0))
		{
			*iParam2++;
		}
		if (func_257(iVar1))
		{
			*iParam2++;
		}
		if (func_257(iVar2))
		{
			*iParam2++;
		}
		if (func_257(iVar3))
		{
			*iParam2++;
		}
		if (((func_257(iVar0) && func_257(iVar1)) && func_257(iVar2)) && func_257(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_85() && (func_227(38) || func_202(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_85() && (func_227(39) || func_202(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_85() && (func_227(49) || func_202(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_85() && (func_227(38) || func_202(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_262(_create_var_string(2, sVar0), _create_var_string(2, func_249(func_261(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_85() && (func_227(39) || func_202(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_85() && (func_227(49) || func_202(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_237(int iParam0)
{
	iVar0 = func_101(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_238()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_21(func_263(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_239()
{
	return func_264(Global_40.f_12019);
}

int func_240()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_263(iVar1);
		if (func_21(iVar2, 1, 0) || func_248(func_247(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_241()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_265(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_242()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_266(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_243()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_254(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_244()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_245()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_248(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

char* func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_253(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_254(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_255(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_257(int iParam0)
{
	if (func_267(iParam0) && func_21(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_268(iParam0) && func_269(iParam0))
	{
		return true;
	}
	return false;
}

char* func_258(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_152(iParam0));
}

int func_259(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_260(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_261(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

var func_262(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_264(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_265(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_266(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_267(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_269(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_270(&iVar0, 0, iVar95, &Var1) && !func_270(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_271(iVar0, &Var1);
			if (func_48(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_270(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_272(iParam1) && !func_273(iParam1))
	{
		iVar0 = func_274(iParam1);
	}
	else
	{
		return false;
	}
	func_275(uParam3);
	iVar5 = func_276(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_271(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_277(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_278(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_272(int iParam0)
{
	iParam0 = func_279(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_273(int iParam0)
{
	iParam0 = func_279(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_272(iParam0))
	{
		return false;
	}
	iVar0 = func_274(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_274(int iParam0)
{
	iParam0 = func_279(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

void func_275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_277(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_278(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

int func_279(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

