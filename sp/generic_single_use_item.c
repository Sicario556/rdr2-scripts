void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		terminate_this_thread();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = ScriptParam_0.f_2;
	Var0.f_1.f_2 = 1f;
	iVar179 = func_1(Var0.f_1, -949239683);
	bVar180 = false;
	while (!_0x9e4ef615e307fbbe())
	{
		if (!ScriptParam_0.f_3)
		{
			func_2(&(Var0.f_1));
		}
		switch (Var0)
		{
			case 0:
				if (func_3(Var0.f_1, 0))
				{
					bVar180 = true;
					func_4(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					func_5(&Var0, 2);
				}
				else
				{
					func_5(&Var0, 1);
				}
				break;
			case 1:
				if (has_anim_event_fired(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					func_7(Var0.f_1, 0);
					if (iVar179 != 845883585)
					{
					}
					else
					{
						if (!func_8())
						{
							func_11(func_10(func_9()), Global_35, -1, 1);
						}
						func_12(0);
						func_13();
					}
					if (Var0.f_1 != 80178851)
					{
					}
					else
					{
						func_14();
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					func_5(&Var0, 3);
				}
				break;
			case 2:
				func_15(&Var0, iVar179, bVar180);
				func_5(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					terminate_this_thread();
				}
				break;
		}
		wait(0);
	}
	if (Var0 <= 1)
	{
		func_15(&Var0, iVar179, bVar180);
	}
}

int func_1(var uParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(uParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_2(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (!does_entity_exist(uParam0->f_174))
		{
			uParam0->f_174 = _0x05a0100ea714db68(Global_35, 0);
		}
		else if (has_anim_event_fired(Global_35, -1234314267))
		{
			func_16(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (has_anim_event_fired(Global_35, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

bool func_3(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_4(var uParam0)
{
	_item_database_fillout_item_effects_ids(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		_item_database_fillout_item_effects_id_info(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0]);
		iVar0++;
	}
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_6(var uParam0, bool bParam1)
{
	if ((func_17(*uParam0, 1573112293) || func_17(*uParam0, 672467738)) || func_17(*uParam0, -550842268))
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
			fVar1 = func_18(0, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_19((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1);
			func_20(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0]->f_1)
		{
			fVar2 = func_18(2, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_21((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_20(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0]->f_1)
		{
			fVar3 = func_18(1, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_22((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_20(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0]->f_1)
		{
			fVar4 = func_23((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_25(fVar4, 1, bVar8, 1);
				func_20(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0]->f_1)
		{
			fVar5 = func_23((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_26(fVar5, 1, bVar8, 1);
				func_20(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0]->f_1)
		{
			fVar6 = func_23((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_27(fVar6, 1, bVar8, 1);
				func_20(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0]->f_1)
		{
			func_28((to_float(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_29(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_30(1, fVar7);
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
	func_31(*uParam0, bParam1, bVar9, iVar11);
	func_16(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_7(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 204375141:
			if (func_32(0) >= 7)
			{
				func_34(244, func_33(204375141), 1);
			}
			func_35(19);
			break;
		case -417963070:
			if (func_32(2) >= 7)
			{
				func_34(243, func_33(-417963070), 1);
			}
			func_35(50);
			break;
		case -21093309:
			if (func_32(1) >= 7)
			{
				func_34(245, func_33(-21093309), 1);
			}
			func_35(30);
			break;
		case 433340626:
		case 1895068170:
			if (iParam0 == 1895068170)
			{
				func_36(0, 60000);
				fVar0 = 0.25f;
			}
			else if (iParam0 == 433340626)
			{
				func_36(0, 30000);
				fVar0 = 0.5f;
			}
			func_37(580, 1);
			_set_ped_scent(Global_35, fVar0);
			break;
		case -1620920647:
		case -529638012:
		case 128702355:
		case 1433048902:
		case 2006811763:
			func_38(0);
			break;
		case -2085219828:
		case -2051332199:
		case 228922461:
			if ((bParam1 || !func_39()) || !is_ped_on_foot(Global_35))
			{
				return;
			}
			if (iParam0 != 228922461 || get_random_int_in_range(0, 3000) < 1000)
			{
				Var11 = { Var1 };
				StringCopy(&(Var11.f_10), "generic_puking_item", 32);
				Var11.f_14 = 512;
				func_40(Var11, 0);
			}
			break;
		case 1365804873:
		case 1889838061:
			if (iParam0 == 1889838061)
			{
				set_bit(Global_1051038, 0);
			}
			else if (iParam0 == 1365804873)
			{
				set_bit(Global_1051038, 1);
			}
			break;
	}
}

bool func_8()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_9()
{
	return &(Global_1946804->f_1497.f_1[1]);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1156231582:
			return -986108061;
		case -1472456118:
			return -1051664629;
		case -2120294484:
			return 1471627791;
		case -814448122:
			return 1012091683;
		case 1279519416:
			return 282876023;
		case 933586678:
			return 1334801974;
		case 1612093252:
			return -736147717;
		case 530132198:
			return -245303732;
		case -499492817:
			return -1900633994;
		case -1392593303:
			return -1511041621;
		case -2091943191:
			return -193909113;
		case 1165676701:
			return -929316746;
		case 1380556716:
			return -1147723761;
		case -1140711191:
			return 963009459;
		case -1189021969:
			return 602337354;
		case 862555979:
			return -1471756535;
		case -674783297:
			return -2017785881;
		case 279124309:
			return -827216318;
		default:
			break;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_41(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_42(iParam2);
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_43(1, 64, 0, 0, 0);
		}
		else
		{
			func_43(1, 64, 1, iParam1, 0);
		}
	}
	func_44(1);
	return 1;
}

void func_12(bool bParam0)
{
	Global_40.f_7748.f_3 = 1;
	iVar0 = func_45();
	func_47(&iVar0, 0, 0, 0, func_46(bParam0, 5, 2), 0, 0, 0);
	if (func_48(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

void func_13()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_8() && func_49(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_50(iVar1);
	}
	func_44(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_51();
	Global_40.f_7748.f_2 = func_9();
	func_52(Global_1946804->f_2656, 0);
	func_53();
}

void func_14()
{
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (&Global_40.f_7731[iVar8] >= 10)
		{
		}
		else if (Global_40.f_7731[iVar8]->f_2 == 3)
		{
		}
		else
		{
			if (Global_40.f_7731[iVar8]->f_2 < 1)
			{
				func_54(iVar8, 1);
			}
			else if (Global_40.f_7731[iVar8]->f_2 < 2)
			{
				func_54(iVar8, 2);
			}
			else if (Global_40.f_7731[iVar8]->f_2 < 3)
			{
				func_54(iVar8, 3);
			}
			iVar0 = Global_40.f_7731[iVar8]->f_3;
			bVar7 = func_55(iVar0, 1);
			func_56(iVar0, func_45(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
			if (&Global_40.f_7731[iVar8] >= 7)
			{
				Global_40.f_7731[iVar8]->f_4 = 2;
				func_56(iVar0, func_45(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
			}
			else
			{
				if (!bVar7)
				{
					func_57(&iVar3, &iVar4, &iVar5, &iVar6, bVar7, 2);
					iVar0 = func_45();
					func_47(&iVar0, iVar6, iVar5, iVar4, iVar3, 0, 0, 0);
					Global_40.f_7731[iVar8]->f_3 = iVar0;
				}
				Global_40.f_7731[iVar8]->f_4 = 2;
			}
		}
		iVar8++;
	}
	if (Global_40.f_7748.f_1 >= 9)
	{
		return;
	}
	if (func_58(8))
	{
		return;
	}
	if (!func_58(2))
	{
		func_59(2);
	}
	else if (!func_58(4))
	{
		func_59(4);
	}
	else if (!func_58(8))
	{
		func_59(8);
	}
	iVar0 = Global_40.f_7748.f_5;
	bVar7 = func_55(iVar0, 1);
	func_56(iVar0, func_45(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
	if (Global_40.f_7748.f_1 >= 9)
	{
		Global_40.f_7748.f_6 = 2;
		func_56(iVar0, func_45(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
	}
	else
	{
		if (!bVar7)
		{
			func_57(&iVar3, &iVar4, &iVar5, &iVar6, bVar7, 2);
			iVar0 = func_45();
			func_47(&iVar0, iVar6, iVar5, iVar4, iVar3, 0, 0, 0);
			Global_40.f_7748.f_5 = iVar0;
		}
		Global_40.f_7748.f_6 = 2;
	}
}

void func_15(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 845883585)
	{
		func_12(0);
		if (!func_8())
		{
			func_11(func_10(func_9()), Global_35, -1, 1);
			func_13();
		}
	}
	if (iParam0->f_1 == 80178851)
	{
		func_14();
	}
	if (func_3(iParam0->f_1, 0) && !bParam2)
	{
		func_4(&(iParam0->f_1));
	}
	func_6(&(iParam0->f_1), 1);
	func_7(iParam0->f_1, 1);
}

void func_16(var uParam0)
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

bool func_17(int iParam0, int iParam1)
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

float func_18(int iParam0, float fParam1)
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

void func_19(float fParam0, bool bParam1)
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

void func_20(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_21(float fParam0)
{
	_0x51345ae20f22c261(player_id(), (fParam0 * 14f), 0, 0, 0);
}

void func_22(float fParam0)
{
	if (func_60() != -1)
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

float func_23(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_24(var uParam0, var uParam1, float fParam2)
{
	if (func_60() != -1)
	{
		return true;
	}
	if (!func_61(0))
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
		func_62(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
			func_37(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_62(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_25(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_60() == 0)
	{
		func_63(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_64(0);
	if (bParam1)
	{
		func_65(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_66();
	}
	if (bParam2)
	{
		fParam0 = func_67(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_69(0, func_68(fParam0, -100f, 100f), bParam1);
}

void func_26(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_60() == 0)
	{
		func_63(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_64(2);
	if (bParam1)
	{
		func_65(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_67(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_69(2, func_68(fParam0, -100f, 100f), bParam1);
}

void func_27(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_60() == 0)
	{
		func_63(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_64(1);
	if (bParam1)
	{
		func_65(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_67(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_69(1, func_68(fParam0, -100f, 100f), bParam1);
}

void func_28(float fParam0, bool bParam1)
{
	fVar0 = func_70(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_71(17))
	{
		return;
	}
	if (func_72())
	{
		iVar1 = func_73(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_73(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_45();
			func_47(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_74(&fVar3, &fVar4);
		func_75(13, func_68(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_37(94, 0);
		}
	}
}

float func_29(float fParam0, int iParam1)
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

void func_30(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_76(iParam0))
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
			sVar1 = func_77(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_78(-1);
			func_38(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_77(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_79(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_77(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_80(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_81(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_81(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_81(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_31(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_17(iParam0, -537818634))
	{
		func_83(func_82(-704089207), 1);
	}
	if (func_17(iParam0, -1457797660))
	{
		func_83(func_82(-1909697259), 1);
	}
	if (func_17(iParam0, 1573112293))
	{
		func_85(func_84(&iParam0), 1);
	}
	if (func_17(iParam0, 1939071949))
	{
		func_83(func_86(1368284188, -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_83(func_86(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628:
			func_83(func_86(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_83(func_86(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_83(func_86(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_83(func_86(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_83(func_86(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -834705084:
			func_83(func_86(1368284188, 497247514), 1);
			break;
		case 433340626:
		case 1895068170:
			func_83(func_86(1368284188, 1199394531), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_83(func_86(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_83(func_86(1368284188, -208442209), 1);
			break;
	}
	if (func_60() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_83(func_86(1368284188, 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_83(func_82(704570463), 1);
	}
}

int func_32(int iParam0)
{
	return func_87(&(Global_40.f_11095.f_11[iParam0]));
}

int func_33(int iParam0)
{
	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_90(iParam0, 1024))
	{
		return;
	}
	func_91(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_35(int iParam0)
{
	if (func_60() != -1)
	{
		return;
	}
	iVar0 = func_92(iParam0);
	fVar1 = func_93(iParam0);
	if ((Global_1347477->f_117 || !func_71(31)) || !func_94(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_32(iVar0) >= 7)
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
	func_95(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_98(_create_var_string(6, func_96(iParam0), fVar1), "itemtype_textures", func_97(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_36(int iParam0, int iParam1)
{
	(*Global_1911859)[iParam0] = _get_game_timer_non_scaled_clipped();
	(*Global_1911859)[iParam0]->f_1 = iParam1;
	(*Global_1911859)[iParam0]->f_2 = 1;
}

void func_37(int iParam0, bool bParam1)
{
	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_91(iVar0, iVar1);
}

void func_38(bool bParam0)
{
	if (func_60() != -1)
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
		func_37(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_37(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_99(1, bParam0, 1);
	func_100();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_39()
{
	return func_101(1);
}

void func_40(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_102(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_103(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_104(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_41(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_105();
	if (iParam2 == 39)
	{
		Var0 = { func_106(iParam0, 1, 0) };
		iParam2 = func_108(func_107(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_17(iParam0, 866047851) && func_109(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_110(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_112(func_111(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_113(iParam2);
	func_114(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_115(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_115(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_116(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_117(iParam0, iParam2, iParam1, func_60() != -1);
	if (bParam4)
	{
		func_118(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_118(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_119(func_111(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_42(int iParam0)
{
	func_120(&(Global_1946804->f_1378), iParam0);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_121(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_122(Var0);
}

void func_44(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_45()
{
	return &Global_1899515;
}

int func_46(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_123(*iParam0);
	iVar1 = func_124(*iParam0);
	iVar2 = func_125(*iParam0);
	iVar3 = func_126(*iParam0);
	iVar4 = func_127(*iParam0);
	iVar5 = func_128(*iParam0);
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
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
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
	func_130(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_131(iParam1) || !func_131(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_49(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582;
		case -1051664629:
			return -1472456118;
		case 1471627791:
			return -2120294484;
		case 1012091683:
			return -814448122;
		case 282876023:
			return 1279519416;
		case 1334801974:
			return 933586678;
		case -736147717:
			return 1612093252;
		case -245303732:
			return 530132198;
		case -1900633994:
			return -499492817;
		case -1511041621:
			return -1392593303;
		case -193909113:
			return -2091943191;
		case -929316746:
			return 1165676701;
		case -1147723761:
			return 1380556716;
		case 963009459:
			return -1140711191;
		case 602337354:
			return -1189021969;
		case -1471756535:
			return 862555979;
		case -2017785881:
			return -674783297;
		case -827216318:
			return 279124309;
		default:
			break;
	}
	return 0;
}

void func_51()
{
	iVar0 = 1;
	if (func_60() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_132(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_133(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (!func_134(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_45();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_135());
		func_136(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_47(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_53()
{
	if (func_137() <= 3)
	{
		iVar0 = func_45();
		func_47(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		decor_set_int(Global_35, "hairShort", iVar0);
		if (decor_exist_on(Global_35, "hairLong"))
		{
			decor_remove(Global_35, "hairLong");
		}
	}
	else if (decor_exist_on(Global_35, "hairShort"))
	{
		decor_remove(Global_35, "hairShort");
	}
}

void func_54(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0]->f_2 = iParam1;
}

bool func_55(int iParam0, bool bParam1)
{
	return func_48(func_45(), iParam0, bParam1);
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	if (func_48(iParam0, iParam1, 1))
	{
		iVar0 = func_124(iParam1);
		iVar1 = func_123(iParam0);
		iVar2 = (func_123(iParam0) - func_123(iParam1));
		iVar3 = (func_124(iParam0) - func_124(iParam1));
		iVar4 = (func_125(iParam0) - func_125(iParam1));
		iVar5 = (func_126(iParam0) - func_126(iParam1));
		iVar6 = (func_127(iParam0) - func_127(iParam1));
		iVar7 = (func_128(iParam0) - func_128(iParam1));
	}
	else
	{
		iVar0 = func_124(iParam0);
		iVar1 = func_123(iParam1);
		iVar2 = (func_123(iParam1) - func_123(iParam0));
		iVar3 = (func_124(iParam1) - func_124(iParam0));
		iVar4 = (func_125(iParam1) - func_125(iParam0));
		iVar5 = (func_126(iParam1) - func_126(iParam0));
		iVar6 = (func_127(iParam1) - func_127(iParam0));
		iVar7 = (func_128(iParam1) - func_128(iParam0));
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
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_138(to_float(iVar0 + 1), 0f, 12f));
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
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	fVar3 = to_float(iParam5);
	iVar0 = func_139(to_float(*iParam0), fVar3);
	iVar1 = func_140(to_float(*iParam1), fVar3);
	iVar2 = func_141(to_float(*iParam2), fVar3);
	*iParam0 = (*iParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*iParam2 = (*iParam2 / iParam5);
	*iParam3 = (*iParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*iParam2 = (*iParam2 + iVar1);
	*iParam3 = (*iParam3 + iVar2);
	if (bParam4)
	{
		*iParam3 = (*iParam3 * -1);
		*iParam2 = (*iParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*iParam0 = (*iParam0 * -1);
	}
}

bool func_58(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

void func_59(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 || iParam0);
}

int func_60()
{
	return Global_1572887->f_12;
}

int func_61(int iParam0)
{
	if (func_142())
	{
		return 0;
	}
	return func_143((*Global_1347702)[58]->f_15, 1);
}

bool func_62(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_144(iParam0, &Var0);
}

void func_63(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_67(iParam0, fParam1, 1);
	}
	func_146(iParam0, (func_145(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_64(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_65(float fParam0)
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

void func_66()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_67(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_45();
	func_147(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_148(iParam0, 2);
	if (func_48(iVar0, func_149(iParam0, 2), 1))
	{
		func_150(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_37(88, bParam2);
		return 0f;
	}
	func_151(iParam0, func_45(), 2);
	func_150(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_68(float fParam0, float fParam1, float fParam2)
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

void func_69(int iParam0, float fParam1, bool bParam2)
{
	if (func_60() != -1)
	{
		return;
	}
	if (!func_71(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_152(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_153(iParam0), iVar0);
	func_155(func_154(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_156(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_37(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_37(func_157(iParam0), 1);
	}
	sVar1 = func_158(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

float func_70(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

bool func_71(int iParam0)
{
	if (!func_159(iParam0))
	{
		return false;
	}
	return func_160(iParam0);
}

bool func_72()
{
	if (func_60() != -1)
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
	return func_55(Global_1347477->f_195, 0);
}

int func_73(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_74(float fParam0, float fParam1)
{
	if (!func_161())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_75(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_162(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_163(1, bVar1, 1, sVar2);
		func_164(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_152(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_100();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_152(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_152(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_76(int iParam0)
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

char* func_77(int iParam0)
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

void func_78(int iParam0)
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
	iVar1 = func_165(2);
	func_166(to_float((iParam0 * iVar1)), 0);
}

void func_79(int iParam0)
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
	iVar1 = func_167(2);
	func_168(to_float((iParam0 * iVar1)));
}

void func_80(int iParam0)
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
	iVar1 = func_169(2);
	func_170(to_float((iParam0 * iVar1)), 0);
}

void func_81(int iParam0, bool bParam1, bool bParam2)
{
	func_146(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_82(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_83(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_84(int iParam0)
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

void func_85(int iParam0, int iParam1)
{
	Var0 = { func_86(-372368982, func_171(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_83(func_172(106002964), iParam1);
}

struct<2> func_86(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_87(float fParam0)
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

void func_88(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_173(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_174(iParam0))
	{
		return false;
	}
	if (func_175(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_90(iParam0, 1)) || func_176(32768))
	{
		if (!func_90(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_177())
	{
		return false;
	}
	return true;
}

bool func_90(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_91(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_92(int iParam0)
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

float func_93(int iParam0)
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
			return func_178(iParam0);
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
			return func_178(iParam0);
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
			return func_178(iParam0);
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

bool func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_71(18);
		case 2:
			return func_71(20);
		case 1:
			return func_71(19);
		default:
			break;
	}
	return true;
}

void func_95(int iParam0, float fParam1, bool bParam2)
{
	if (func_60() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_71(31))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_32(iParam0);
	if (func_179(iParam0) && func_180(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_181(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_182(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_37(func_183(iParam0), 0);
					}
					func_184(iParam0, iVar2, iVar3);
					func_20(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_96(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_97(int iParam0)
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

var func_98(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_185(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_99(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_100()
{
	func_186();
	func_187();
	func_188();
}

bool func_101(int iParam0)
{
	return func_189(iParam0);
}

bool func_102(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_103(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_104(int iParam0)
{
	if (func_102(iParam0, 1))
	{
		func_190(1);
	}
}

void func_105()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

struct<5> func_106(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_191(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_192(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_193(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_194(bParam1) };
			if (bParam2 && func_195(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_196(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_196(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_197(iParam0, &Var5, 1728382685))
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
			Var0 = { func_198(bParam1) };
			switch (func_199(iParam0))
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
			if (func_200(iParam0, -1823706425))
			{
				Var0 = { func_193(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_200(iParam0, -1483207246))
			{
				Var0 = { func_193(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_201(Var0, &Var27, bParam1, 0))
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

int func_107(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_111(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_109(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_17(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_110(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_112(int iParam0)
{
	func_119(iParam0, 8, 6);
}

void func_113(int iParam0)
{
	func_202(&(Global_1946804->f_2589), iParam0);
}

void func_114(int iParam0, int iParam1)
{
	func_203(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_116(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_199(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_204(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_114(iVar1, iVar3);
		}
	}
	if (func_205(-1586649372) && func_204(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_114(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
			}
			func_206(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_206(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 525
				func_206(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 656
				func_206(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1417; //curOff = 691
				func_206(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 786
				func_206(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1417; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_207(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
				}
				Jump @1417; //curOff = 1132
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_17(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 1230
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_207(&(Global_1946804->f_1497.f_1[iVar1])) || func_17(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_114(iVar1, iVar3);
					}
				}
			}
			switch (func_199(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_199(&(uParam0->f_1[iVar1])) || func_17(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_114(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_117(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_208(0);
	if (iParam2 != 0 && func_209(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_210(iParam0, func_111(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_118(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_60() != -1;
	iVar7 = func_208(0);
	if (func_110(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_111(iVar0, 1);
			if (func_211(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_211(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_212(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_213(uParam0);
				if (iVar3 > 0)
				{
					if (!func_110(524288))
					{
						func_121(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_111(iVar0, 1);
							if (func_211(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_211(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_212(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_114(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_214(524288);
				}
			}
		}
	}
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_108(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_108(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_108(iParam0, 1)])->f_10 && iParam1));
}

void func_120(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_215() == 24043185)
	{
		iVar2 = 1;
	}
	iVar0 = func_216(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && &uParam0->f_1[iVar1] != func_217()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2656 = iParam1;
		}
		else if (func_209(&(uParam0->f_1[iVar1]), iVar2, iVar0, func_60() != -1) != -1)
		{
			uParam0->f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2656 = iParam1;
		}
	}
}

void func_121(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_122(struct<4> Param0)
{
	switch (Param0)
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
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_218(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_219(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_121(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_218(Param0))
			{
				return;
			}
			func_219(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_121(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_220(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_123(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_46(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_124(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_125(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_126(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_127(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_128(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_129(int iParam0, int iParam1)
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

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_221(iParam0, iParam6);
	func_222(iParam0, iParam5);
	func_223(iParam0, iParam4);
	func_224(iParam0, iParam3);
	func_225(iParam0, iParam2);
	func_226(iParam0, iParam1);
}

bool func_131(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_128(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_127(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_123(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_124(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_125(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_132(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_133(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_134(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

bool func_135()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_136(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_57(iParam1, iParam2, &uVar0, &uVar1, 0, func_227());
	}
}

int func_137()
{
	return Global_40.f_7748.f_1;
}

float func_138(float fParam0, float fParam1, float fParam2)
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

int func_139(float fParam0, float fParam1)
{
	return floor((((fParam0 / fParam1) - to_float(floor((fParam0 / fParam1)))) * 24f));
}

int func_140(float fParam0, float fParam1)
{
	return floor((((fParam0 / fParam1) - to_float(floor((fParam0 / fParam1)))) * 60f));
}

int func_141(float fParam0, float fParam1)
{
	return floor((((fParam0 / fParam1) - to_float(floor((fParam0 / fParam1)))) * 60f));
}

bool func_142()
{
	if (func_60() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_143(int iParam0, bool bParam1)
{
	switch (func_228(iParam0))
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

bool func_144(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_145(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_229();
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

int func_146(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_229();
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
		func_230(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_231(iVar0, iParam0, fParam1);
	func_232(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_153(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_123(*iParam0);
	iVar1 = func_124(*iParam0);
	iVar2 = func_125(*iParam0);
	iVar3 = func_126(*iParam0);
	iVar4 = func_127(*iParam0);
	iVar5 = func_128(*iParam0);
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
		iVar7 = func_129(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_130(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_148(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_229();
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

int func_149(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_229();
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

void func_150(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_229();
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

void func_151(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_229();
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

int func_152(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_153(int iParam0)
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

int func_154(int iParam0)
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

void func_155(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_233(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_156(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_157(int iParam0)
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

char* func_158(int iParam0)
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

bool func_159(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_160(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_161()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_162(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_163(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_164(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_233(0, 1, bParam0, bParam1);
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

int func_165(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_229();
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

void func_166(float fParam0, int iParam1)
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

int func_167(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_229();
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

void func_168(float fParam0)
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

int func_169(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_229();
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

void func_170(float fParam0, bool bParam1)
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

int func_171(int iParam0)
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

struct<2> func_172(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_173(int iParam0, int iParam1)
{
	if (func_60() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_174(int iParam0)
{
	if (func_60() != -1)
	{
		if (func_90(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_90(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_175(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_90(iParam0, 65536) && !func_90(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_90(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_90(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_176(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_177()
{
	return Global_1905944->f_5694;
}

float func_178(int iParam0)
{
	iVar4 = func_92(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_87(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_234(iVar6) - func_234(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_179(int iParam0)
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

int func_180(int iParam0)
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

int func_181(float fParam0, float fParam1)
{
	iVar0 = func_87(fParam0);
	fVar1 = to_float(func_234(iVar0));
	fVar2 = to_float(func_234(iVar0 + 1));
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

int func_182(int iParam0)
{
	if (func_235(iParam0, &iVar0))
	{
		return func_234(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_236())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_236())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_236())
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

int func_183(int iParam0)
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

void func_184(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_237(iParam0));
	sVar4 = func_239(func_238(iVar3, iParam2));
	sVar6 = func_240(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_241(iParam0));
	iVar8 = func_242(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_243(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_245(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_244(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_185(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

float func_186()
{
	if (func_246())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_64(2);
	}
	if (Global_1347477->f_119)
	{
		return func_64(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_247();
	fVar2 = func_248();
	fVar3 = func_249();
	fVar4 = func_250();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_251()));
	fVar7 = (func_64(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_252(3, round((to_float(iVar8) * fVar10)), 0);
	func_253(3, fVar9, fVar9 > 100f);
	return func_68(fVar7, -100f, 100f);
}

float func_187()
{
	if (func_246())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_64(1);
	}
	if (Global_1347477->f_119)
	{
		return func_64(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_247();
	fVar2 = func_248();
	fVar3 = func_249();
	fVar4 = func_250();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_251()));
	fVar7 = (func_64(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_252(2, round((to_float(iVar8) * fVar10)), 0);
	func_253(2, fVar9, fVar9 > 100f);
	return func_68(fVar7, -100f, 100f);
}

float func_188()
{
	if (func_246())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_64(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_254())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_255())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_64(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_247();
	fVar2 = func_248();
	fVar3 = func_249();
	fVar4 = func_250();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_251()));
	fVar7 = (func_64(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_252(1, round((to_float(iVar8) * fVar10)), 0);
	func_253(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_64(0);
	}
	return func_68(fVar7, -100f, 100f);
}

bool func_189(int iParam0)
{
	return func_256(Global_1935496->f_27, iParam0);
}

void func_190(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

struct<4> func_191(bool bParam0)
{
	return func_193(1328661203, func_257(), -1591664384, bParam0);
}

int func_192(int iParam0)
{
	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_193(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_3(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_258(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_194(bool bParam0)
{
	iVar0 = func_258(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_193(923904168, func_191(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_193(923904168, func_191(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_193(923904168, func_191(bParam0), -740156546, 0);
}

bool func_195(int iParam0, bool bParam1)
{
	if (func_199(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_71(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_196(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_259(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_197(int iParam0, var uParam1, int iParam2)
{
	if (func_260(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_198(bool bParam0)
{
	iVar0 = func_258(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_193(271701509, func_191(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_193(271701509, func_191(bParam0), 12999093, 0);
}

int func_199(int iParam0)
{
	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_200(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_199(iParam0);
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

bool func_201(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_258(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_202(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_261(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_261(uParam0->f_2[iVar0], 1))
				{
					func_262(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_263(uParam0, 1))
	{
		func_264(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_204(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_205(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_108(iParam0, 1)] != &Global_1946804->f_57[func_108(iParam0, 1)];
}

void func_206(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_114(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_114(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_114(iVar2, iVar0);
		}
	}
}

bool func_207(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_208(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_215();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_209(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_210(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_211(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_108(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_108(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_110(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_213(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_214(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_215()
{
	return Global_1946804->f_1;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
		case 1:
			return -452152720;
		case 2:
			return -1659460987;
		case 3:
			return -1906834168;
		case 4:
			return -1073518498;
		case 5:
			return -1304572717;
		case 6:
			return 1715418323;
		case 7:
			return 1468307294;
		case 8:
			return -1986397304;
		case 9:
			return 2061000197;
		default:
			break;
	}
	return 0;
}

int func_217()
{
	if (func_215() == 1160113249)
	{
		return -1392593303;
	}
	return 1156231582;
}

bool func_218(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_219(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_220(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_265(Var0);
}

void func_221(int iParam0, int iParam1)
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

void func_222(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_223(int iParam0, int iParam1)
{
	iVar0 = func_124(*iParam0);
	iVar1 = func_123(*iParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_224(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_225(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_227()
{
	if (func_58(8))
	{
		return 8;
	}
	else if (func_58(4))
	{
		return 4;
	}
	else if (func_58(2))
	{
		return 2;
	}
	return 1;
}

int func_228(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	return func_267(iParam0);
}

int func_229()
{
	if (func_268())
	{
		return 1;
	}
	return 0;
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_229();
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

void func_231(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_158(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_269(iParam1), fParam2, -1);
	}
}

void func_232(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_229();
	}
	iVar0 = get_game_timer();
	func_270(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_271(iParam0, iVar0, iParam3);
	}
}

char* func_233(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_162(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_162(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_234(int iParam0)
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

bool func_235(int iParam0, int iParam1)
{
	return false;
}

bool func_236()
{
	return false;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_258(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_258(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_258(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_238(int iParam0, int iParam1)
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

char* func_239(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_240(int iParam0)
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

char* func_241(int iParam0)
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

int func_242(int iParam0)
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

int func_243(int iParam0)
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

int func_244(int iParam0)
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

var func_245(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_246()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_247()
{
	fVar0 = func_70(13);
	iVar1 = func_73(fVar0);
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

float func_248()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_249()
{
	if (func_272())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_250()
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

float func_251()
{
	return Global_1955565->f_3;
}

void func_252(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_233(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_253(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_233(iParam0, 2, 0, 0);
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

bool func_254()
{
	return func_70(12) <= -99f;
}

bool func_255()
{
	return func_70(12) >= 99f;
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<4> func_257()
{
	return Var0;
}

int func_258(bool bParam0)
{
	if (func_60() == -1)
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

int func_259(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_193(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_258(bParam6), &Var0, 0);
	return uVar4;
}

bool func_260(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_258(0);
	*uParam1 = { func_193(iParam0, func_194(0), iParam3, 0) };
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

bool func_261(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_262(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_263(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_265(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_218(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_218(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_219(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_121(8);
}

bool func_266(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_267(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_273(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_268()
{
	return Global_1955569->f_866;
}

char* func_269(int iParam0)
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

void func_270(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_229();
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

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_229();
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

bool func_272()
{
	return _unlock_is_unlocked(-121456797);
}

int func_273(int iParam0)
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

