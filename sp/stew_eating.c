void __EntryFunction__()
{
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	if (has_force_cleanup_occurred(523))
	{
		if (does_entity_exist(Var0.f_179))
		{
			delete_object(&(Var0.f_179));
		}
		if (!ScriptParam_0.f_3)
		{
			func_1(0);
		}
		terminate_this_thread();
	}
	iVar180 = ScriptParam_0.f_2;
	if (!func_2(iVar180, 0))
	{
		iVar180 = 599184882;
	}
	if (func_3())
	{
		if (Global_1357549->f_1492 != 878851736)
		{
			iVar180 = Global_1357549->f_1492;
		}
		else
		{
			iVar181 = Global_1357549->f_1488;
			func_4(&iVar181, 0, 0, 24, 0, 0, 0, 0);
			if (func_5(iVar181, 1))
			{
				if (Global_40.f_4283.f_313 > 1)
				{
					Global_1357549->f_1492 = 1762298001;
				}
				else
				{
					Global_1357549->f_1492 = 878851736;
				}
				iVar180 = Global_1357549->f_1492;
			}
			else
			{
				iVar180 = Global_1357549->f_1492;
			}
		}
	}
	_request_clip_set_by_hash(-703333072);
	request_model(-1737141731, false);
	Var0.f_1 = iVar180;
	if (!ScriptParam_0.f_3)
	{
		func_1(1);
	}
	Var0.f_1.f_2 = 5f;
	while (!_0x9e4ef615e307fbbe() && !is_entity_dead(Global_35))
	{
		if (!ScriptParam_0.f_3)
		{
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
			disable_control_action(0, -822242784, false);
			if (!does_entity_exist(Var0.f_179))
			{
				if (has_model_loaded(-1737141731))
				{
					Var0.f_179 = create_object(-1737141731, Global_36, false, true, false, false, true);
					attach_entity_to_entity(Var0.f_179, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
					set_entity_visible(Var0.f_179, false);
				}
			}
			else if (has_anim_event_fired(Global_35, -701457528))
			{
				set_entity_visible(Var0.f_179, true);
			}
			else if (has_anim_event_fired(Global_35, -1402617856))
			{
				set_entity_visible(Var0.f_179, false);
			}
		}
		if (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			if (has_anim_event_fired(Global_35, 442509369))
			{
				Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
				func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
			}
		}
		switch (Var0)
		{
			case 0:
				if (func_2(Var0.f_1, 0))
				{
					func_7(&(Var0.f_1));
				}
				func_8(&Var0, 1);
				break;
			case 1:
				iVar182 = _get_item_interaction_from_ped(Global_35);
				if (iVar182 != -583731576)
				{
					if (iVar182 == 171451159 || iVar182 == 1881103362)
					{
						if (!is_ped_active_in_scenario(Global_35, 1) || _0x0c3cb2e600c8977d(Global_35, 0))
						{
							_0xb35370d5353995cb(Global_35, -583731576, 1f);
						}
					}
				}
				else if (is_ped_active_in_scenario(Global_35, 1))
				{
					iVar183 = _get_scenario_point_type_ped_is_using(Global_35);
					if (iVar183 != -1177373461)
					{
						if (iVar183 == -447259824)
						{
							_0xb35370d5353995cb(Global_35, 1881103362, 1f);
						}
					}
					else
					{
						_0xb35370d5353995cb(Global_35, 171451159, 1f);
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= (Var0.f_1.f_2 - 1f) || ((get_frame_count() % 10) == 0 && get_entity_submerged_level(Global_35) > 0.2f))
				{
					func_8(&Var0, 2);
				}
				break;
			case 2:
				iVar182 = _get_item_interaction_from_ped(Global_35);
				_0xcb9401f918cb0f75(Global_35, "HIDE_STEW_DROP_PROMPT", 1, 1);
				if (iVar182 == -583731576 || iVar182 == 1881103362)
				{
					_0xcb9401f918cb0f75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
					if (!func_9(-1))
					{
						if (iVar182 == 1881103362)
						{
							_0xb35370d5353995cb(Global_35, -805756414, 0.25f);
						}
						else
						{
							_0xb35370d5353995cb(Global_35, -616782017, 0.25f);
						}
						func_8(&Var0, 3);
					}
				}
				else if (iVar182 == 171451159 || (iVar182 == 1372498217 && has_anim_event_fired(Global_35, 1160706425)))
				{
					_0xcb9401f918cb0f75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
					if (!func_9(-1))
					{
						_0x6d07b371e9439019(Global_35);
						_0xd65fdc686a031c83(Global_35, -1134349867, 1.5f);
					}
				}
				break;
			case 3:
				_0xcb9401f918cb0f75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
				_0xcb9401f918cb0f75(Global_35, "HIDE_STEW_DROP_PROMPT", 1, 1);
				break;
		}
		wait(0);
	}
	if (does_entity_exist(Var0.f_179))
	{
		delete_object(&(Var0.f_179));
	}
	if (!ScriptParam_0.f_3)
	{
		func_1(0);
	}
	if (Global_1357549->f_1492 == 878851736)
	{
	}
	else
	{
		Global_1357549->f_1492 = 878851736;
	}
}

void func_1(int iParam0)
{
	_0x0751d461f06e41ce(player_id(), 5, 0, iParam0);
	_0x0751d461f06e41ce(player_id(), 50, 0, iParam0);
	_0x0751d461f06e41ce(player_id(), 49, 0, iParam0);
	_0x0751d461f06e41ce(player_id(), 11, 0, iParam0);
}

bool func_2(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_3()
{
	return Global_1894899 & 2 != 0;
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_10(*iParam0);
	iVar1 = func_11(*iParam0);
	iVar2 = func_12(*iParam0);
	iVar3 = func_13(*iParam0);
	iVar4 = func_14(*iParam0);
	iVar5 = func_15(*iParam0);
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
	iVar6 = func_16(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_16(iVar1, iVar0);
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
	func_17(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_5(int iParam0, bool bParam1)
{
	return func_19(func_18(), iParam0, bParam1);
}

void func_6(var uParam0, bool bParam1)
{
	if ((func_20(*uParam0, 1573112293) || func_20(*uParam0, 672467738)) || func_20(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	_0xd962f8579d702db5();
	Global_1935496->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == uParam0->f_33[iVar0]->f_1)
		{
			fVar1 = func_21(0, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_22((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1);
			func_23(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0]->f_1)
		{
			fVar2 = func_21(2, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_24((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_23(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0]->f_1)
		{
			fVar3 = func_21(1, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_25((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_23(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0]->f_1)
		{
			fVar4 = func_26((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_28(fVar4, 1, bVar8, 1);
				func_23(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0]->f_1)
		{
			fVar5 = func_26((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_29(fVar5, 1, bVar8, 1);
				func_23(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0]->f_1)
		{
			fVar6 = func_26((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_30(fVar6, 1, bVar8, 1);
				func_23(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0]->f_1)
		{
			func_31((to_float(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_32(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_33(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			iVar11 = 1;
		}
	}
	func_34(*uParam0, bParam1, bVar9, iVar11);
	func_35(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_7(var uParam0)
{
	_item_database_fillout_item_effects_ids(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		_item_database_fillout_item_effects_id_info(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0]);
		iVar0++;
	}
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_9(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		if (func_36(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_10(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_37(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_11(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_12(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_13(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_14(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_15(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_16(int iParam0, int iParam1)
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

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(iParam0, iParam6);
	func_39(iParam0, iParam5);
	func_40(iParam0, iParam4);
	func_41(iParam0, iParam3);
	func_42(iParam0, iParam2);
	func_43(iParam0, iParam1);
}

int func_18()
{
	return &Global_1899515;
}

bool func_19(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_44(iParam1) || !func_44(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_20(int iParam0, int iParam1)
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

float func_21(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_35));
			fVar1 = to_float(get_entity_max_health(Global_35, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_35);
			fVar1 = _get_ped_max_stamina(Global_35);
			break;
		case 2:
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			fVar1 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_22(float fParam0, bool bParam1)
{
	fVar0 = (50f * fParam0);
	iVar1 = round((fVar0 + IntToFloat(get_entity_health(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		_0x835f131e7dc8f97a(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_23(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_24(float fParam0)
{
	_0x51345ae20f22c261(player_id(), (fParam0 * 14f), 0, 0, 0);
}

void func_25(float fParam0)
{
	if (func_45() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_26(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_27(var uParam0, var uParam1, float fParam2)
{
	if (func_45() != -1)
	{
		return true;
	}
	if (!func_46(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_47(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < get_game_timer())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < get_game_timer())
		{
			func_48(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_47(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_28(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_45() == 0)
	{
		func_49(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(0);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_52();
	}
	if (bParam2)
	{
		fParam0 = func_53(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(0, func_54(fParam0, -100f, 100f), bParam1);
}

void func_29(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_45() == 0)
	{
		func_49(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(2);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_53(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(2, func_54(fParam0, -100f, 100f), bParam1);
}

void func_30(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_45() == 0)
	{
		func_49(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(1);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_53(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(1, func_54(fParam0, -100f, 100f), bParam1);
}

void func_31(float fParam0, bool bParam1)
{
	fVar0 = func_56(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_57(17))
	{
		return;
	}
	if (func_58())
	{
		iVar1 = func_59(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_59(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_18();
			func_4(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_60(&fVar3, &fVar4);
		func_61(13, func_54(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_48(94, 0);
		}
	}
}

float func_32(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_33(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_62(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_63(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_64(-1);
			func_65(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_63(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_66(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_63(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_67(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_68(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_68(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_68(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_20(iParam0, -537818634))
	{
		func_70(func_69(-704089207), 1);
	}
	if (func_20(iParam0, -1457797660))
	{
		func_70(func_69(-1909697259), 1);
	}
	if (func_20(iParam0, 1573112293))
	{
		func_72(func_71(&iParam0), 1);
	}
	if (func_20(iParam0, 1939071949))
	{
		func_70(func_73(1368284188, -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_70(func_73(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628:
			func_70(func_73(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_70(func_73(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_70(func_73(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_70(func_73(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_70(func_73(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -834705084:
			func_70(func_73(1368284188, 497247514), 1);
			break;
		case 433340626:
		case 1895068170:
			func_70(func_73(1368284188, 1199394531), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_70(func_73(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_70(func_73(1368284188, -208442209), 1);
			break;
	}
	if (func_45() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_70(func_73(1368284188, 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_70(func_69(704570463), 1);
	}
}

void func_35(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (does_entity_exist(uParam0->f_174))
		{
			_0x18ff3110cf47115d(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

bool func_36(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	return Global_1327590->f_19744 == iParam0;
}

int func_37(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_40(int iParam0, int iParam1)
{
	iVar0 = func_11(*iParam0);
	iVar1 = func_10(*iParam0);
	if (iParam1 < 1 || iParam1 > func_16(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_41(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_42(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_44(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_14(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_13(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_10(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_11(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_12(iParam0);
	if (iVar5 < 1 || iVar5 > func_16(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_45()
{
	return Global_1572887->f_12;
}

int func_46(int iParam0)
{
	if (func_74())
	{
		return 0;
	}
	return func_75((*Global_1347702)[58]->f_15, 1);
}

bool func_47(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_76(iParam0, &Var0);
}

void func_48(int iParam0, bool bParam1)
{
	func_77(iParam0, &iVar0, &iVar1);
	if (!func_78(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_79(iVar0, iVar1);
}

void func_49(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_53(iParam0, fParam1, 1);
	}
	func_81(iParam0, (func_80(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_50(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_51(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_52()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_53(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_18();
	func_82(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_83(iParam0, 2);
	if (func_19(iVar0, func_84(iParam0, 2), 1))
	{
		func_85(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_48(88, bParam2);
		return 0f;
	}
	func_86(iParam0, func_18(), 2);
	func_85(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_54(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_55(int iParam0, float fParam1, bool bParam2)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_57(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_87(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_88(iParam0), iVar0);
	func_90(func_89(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_91(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_48(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_48(func_92(iParam0), 1);
	}
	sVar1 = func_93(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

float func_56(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

bool func_57(int iParam0)
{
	if (!func_94(iParam0))
	{
		return false;
	}
	return func_95(iParam0);
}

bool func_58()
{
	if (func_45() != -1)
	{
		return false;
	}
	if (Global_1347477->f_200)
	{
		return false;
	}
	if (Global_1347477->f_195 == -15)
	{
		return true;
	}
	return func_5(Global_1347477->f_195, 0);
}

int func_59(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_60(var uParam0, var uParam1)
{
	if (!func_96())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_61(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_97(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_98(1, bVar1, 1, sVar2);
		func_99(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_87(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_100();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_87(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_87(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_64(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_101(2);
	func_102(to_float((iParam0 * iVar1)), 0);
}

void func_65(bool bParam0)
{
	if (func_45() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_48(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_48(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_103(1, bParam0, 1);
	func_100();
	Global_40.f_11095.f_43 = bParam0;
}

void func_66(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_104(2);
	func_105(to_float((iParam0 * iVar1)));
}

void func_67(int iParam0)
{
	iVar0 = player_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x57d9991dc1334151(iVar0);
	}
	iVar1 = func_106(2);
	func_107(to_float((iParam0 * iVar1)), 0);
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	func_81(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_69(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_70(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_71(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 20;
		case 128702355:
			return 23;
		case -2051332199:
			return 26;
		case 546981776:
			return 27;
		case -2013384490:
			return 28;
		case 228922461:
			return 29;
		case -746674788:
			return 31;
		case 599861917:
			return 33;
		case -1781387050:
			return 34;
		case 2006811763:
			return 37;
		case -90546043:
			return 38;
		case 1216456215:
			return 39;
		case 746300881:
			return 40;
		case -435006002:
			return 41;
		case -624139784:
			return 42;
		case -529638012:
			return 43;
		case -651064726:
			return 1;
		case -404270094:
			return 9;
		case -1521783510:
			return 10;
		case 1714875242:
			return 14;
		case 2093126853:
			return 17;
		case 728781265:
			return 21;
		case 1794857344:
			return 22;
		case 1952409553:
			return 24;
		case -150591160:
			return 25;
		case 1019229063:
			return 30;
		case -323969289:
			return 32;
		case 927763737:
			return 35;
		case 1504361882:
			return 36;
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	Var0 = { func_73(-372368982, func_108(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_70(func_109(106002964), iParam1);
}

struct<2> func_73(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_74()
{
	if (func_45() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_75(int iParam0, bool bParam1)
{
	switch (func_110(iParam0))
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

bool func_76(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_111(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_112(iParam0))
	{
		return false;
	}
	if (func_113(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_114(iParam0, 1)) || func_115(32768))
	{
		if (!func_114(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_116())
	{
		return false;
	}
	return true;
}

void func_79(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

float func_80(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_81(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_117();
	}
	iVar0 = player_ped_id();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_118(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_119(iVar0, iParam0, fParam1);
	func_120(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_88(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_10(*iParam0);
	iVar1 = func_11(*iParam0);
	iVar2 = func_12(*iParam0);
	iVar3 = func_13(*iParam0);
	iVar4 = func_14(*iParam0);
	iVar5 = func_15(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_16(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_17(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

void func_85(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_87(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_89(int iParam0)
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

void func_90(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_121(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_91(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_94(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_95(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_96()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_97(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_98(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_99(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_121(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

void func_100()
{
	func_122();
	func_123();
	func_124();
}

int func_101(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_102(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = player_ped_id();
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

void func_103(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

int func_104(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_105(float fParam0)
{
	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_charge_ped_stamina(iVar0, fParam0);
}

int func_106(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_107(float fParam0, bool bParam1)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return -1040706491;
		case 20:
			return -1910627346;
		case 23:
			return -1812487593;
		case 26:
			return 1983971282;
		case 27:
			return 1561519041;
		case 28:
			return -980496853;
		case 29:
			return -1738887126;
		case 31:
			return 424771379;
		case 33:
			return 787316814;
		case 34:
			return 984616481;
		case 37:
			return 1078285403;
		case 38:
			return -262897007;
		case 39:
			return -1727702531;
		case 40:
			return 1783324404;
		case 41:
			return 1288848815;
		case 42:
			return 918090738;
		case 43:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 21:
			return -819513569;
		case 22:
			return 1906968775;
		case 24:
			return -135434663;
		case 25:
			return 920123680;
		case 30:
			return 150470908;
		case 32:
			return -1665125257;
		case 35:
			return 1587928307;
		case 36:
			return -1738925422;
	}
	return 0;
}

struct<2> func_109(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_110(int iParam0)
{
	if (!func_125(iParam0))
	{
		return -1;
	}
	return func_126(iParam0);
}

bool func_111(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_112(int iParam0)
{
	if (func_45() != -1)
	{
		if (func_114(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_114(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_113(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_114(iParam0, 65536) && !func_114(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_114(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_114(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_114(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_115(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_116()
{
	return Global_1905944->f_5694;
}

int func_117()
{
	if (func_127())
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_119(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_93(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_128(iParam1), fParam2, -1);
	}
}

void func_120(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_117();
	}
	iVar0 = get_game_timer();
	func_129(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_130(iParam0, iVar0, iParam3);
	}
}

char* func_121(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_97(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_97(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_122()
{
	if (func_131())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_50(2);
	}
	if (Global_1347477->f_119)
	{
		return func_50(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(3, round((to_float(iVar8) * fVar10)), 0);
	func_138(3, fVar9, fVar9 > 100f);
	return func_54(fVar7, -100f, 100f);
}

float func_123()
{
	if (func_131())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_50(1);
	}
	if (Global_1347477->f_119)
	{
		return func_50(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(2, round((to_float(iVar8) * fVar10)), 0);
	func_138(2, fVar9, fVar9 > 100f);
	return func_54(fVar7, -100f, 100f);
}

float func_124()
{
	if (func_131())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_50(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_139())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_140())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_50(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(1, round((to_float(iVar8) * fVar10)), 0);
	func_138(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_50(0);
	}
	return func_54(fVar7, -100f, 100f);
}

bool func_125(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_126(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_141(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_127()
{
	return Global_1955569->f_866;
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_129(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

bool func_131()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_132()
{
	fVar0 = func_56(13);
	iVar1 = func_59(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_133()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_134()
{
	if (func_142())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_135()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_136()
{
	return Global_1955565->f_3;
}

void func_137(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_121(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_138(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_121(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

bool func_139()
{
	return func_56(12) <= -99f;
}

bool func_140()
{
	return func_56(12) >= 99f;
}

int func_141(int iParam0)
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

bool func_142()
{
	return _unlock_is_unlocked(-121456797);
}

