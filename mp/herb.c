void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	Var0.f_10 = 5;
	Var0.f_15 = 4;
	Var0.f_22 = 1;
	Var0.f_23 = 1;
	Var0.f_24 = 4;
	Var0.f_30 = 4;
	Var0.f_35 = 4;
	Var0.f_41 = 10;
	Var62.f_5 = -1;
	Var0.f_5 = ScriptParam_0;
	Var0.f_6 = ScriptParam_0.f_1;
	func_1(&Var0);
	if (func_2() != -1)
	{
		if (func_3(Var0.f_20))
		{
			func_4(&Var0);
		}
		if (Var0.f_20 == 19)
		{
			if (!(_unlock_is_unlocked(391628971) && _unlock_is_visible(391628971)))
			{
				func_4(&Var0);
			}
		}
		network_set_script_is_safe_for_network_game();
		if (func_6(func_5(0)) != 7)
		{
		}
		else if (func_7(19))
		{
			if (func_7(20))
			{
				func_8(&Var0, 0);
			}
			else
			{
				func_8(&Var0, 0);
			}
		}
		else
		{
			func_8(&Var0, 1);
		}
	}
	else if (has_force_cleanup_occurred(523))
	{
		func_4(&Var0);
	}
	iVar71 = func_9();
	iVar72 = func_10(iVar71);
	if (iVar72 < 22 && iVar72 >= 5)
	{
		if (func_11(Var0.f_20))
		{
			func_4(&Var0);
		}
	}
	if (_0x9e4ef615e307fbbe())
	{
		func_4(&Var0);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_4(&Var0);
	}
	Var0 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	Var0.f_3 = _get_scenario_point_heading(ScriptParam_0.f_1, true);
	Var0.f_4 = _0x6718f40313a2b5a6(ScriptParam_0.f_1);
	Global_26577[Var0.f_20] = (&Global_26577[Var0.f_20] + 1);
	if (func_2() == 0)
	{
	}
	else if (!func_12(10))
	{
		func_4(&Var0);
	}
	Var0.f_26 = func_13(Var0.f_20, Var0);
	if (Var0.f_26 <= -1)
	{
		Var0.f_26 = func_14(Var0.f_20, Var0);
		if (func_15(&Var0))
		{
			func_16(&Var0);
		}
		else
		{
			func_17(&Var0);
		}
	}
	while (func_18(&Var0))
	{
		if (_0x9e4ef615e307fbbe())
		{
			func_4(&Var0);
		}
		wait(0);
	}
	iLocal_15 = 0;
	iVar79 = &Global_1296859->f_154[&Global_1296859];
	while (func_19(&Var0))
	{
		if (_0x9e4ef615e307fbbe())
		{
			func_4(&Var0);
		}
		func_20(&Var0);
		func_21(&Var0);
		if (iLocal_15 <= 0)
		{
			fVar73 = vdist2(Var0, func_22(iVar79));
			switch (func_23(&Var0))
			{
				case 0:
					Var0.f_26 = func_13(Var0.f_20, Var0);
					if (Var0.f_26 <= -1)
					{
						Var0.f_26 = func_14(Var0.f_20, Var0);
						if (func_15(&Var0))
						{
							func_16(&Var0);
						}
						else
						{
							func_17(&Var0);
						}
					}
					func_24(&Var0, 1);
					break;
				case 1:
					if (fVar73 < 4900f)
					{
						func_24(&Var0, 2);
					}
					break;
				case 2:
					if (func_25(Var0.f_26, Var0.f_4))
					{
						func_26(Var0.f_26, 0);
					}
					bVar74 = func_27(Var0.f_26, Var0.f_20, Var0.f_6);
					Global_1198042 = 0;
					if (bVar74)
					{
						func_24(&Var0, 3);
					}
					else
					{
						func_24(&Var0, 4);
					}
					func_28(&Var0);
					break;
				case 4:
					if (func_29(&Var0))
					{
						iVar78 = func_30(&Var0);
						if (iVar78 != 1)
						{
							if (iVar78 == 0)
							{
								iLocal_15 = 1000;
							}
							else
							{
								func_4(&Var0);
							}
						}
						else
						{
							func_24(&Var0, 5);
						}
					}
					break;
				case 3:
					if (func_29(&Var0))
					{
						iVar78 = func_30(&Var0);
						if (iVar78 == 1)
						{
							func_24(&Var0, 6);
						}
						else if (iVar78 == 0)
						{
							iLocal_15 = 1000;
						}
						else
						{
							func_4(&Var0);
						}
					}
					break;
				case 5:
					if (func_31(&Var0))
					{
						func_24(&Var0, 9);
					}
					break;
				case 6:
					if (func_31(&Var0))
					{
						func_24(&Var0, 7);
					}
					break;
				case 7:
					if (func_32(Global_1296859->f_8) && (has_anim_event_fired(Global_1296859->f_8, 174961811) || (Global_1198042->f_1 && (func_33(Var0.f_20) || Var0.f_20 == 19))))
					{
						vVar75 = { func_22(iVar79) };
						if (_does_scenario_point_exist(Global_1198042->f_2))
						{
							_0x8245c1f3262f4ac2(Global_1198042->f_2);
							func_34(&Var62);
							Global_1198042->f_1 = 0;
							Global_1198042->f_2 = 0;
						}
						if (func_35(Var0.f_20, vVar75, &(Var0.f_26), &iLocal_22, 1, 0, 25))
						{
							func_24(&Var0, 11);
						}
					}
					else if (!func_27(Var0.f_26, Var0.f_20, Var0.f_6))
					{
						func_24(&Var0, 12);
					}
					else if (func_33(Var0.f_20))
					{
						func_36(&Var62, Var0, 1, 1, 1, 1);
					}
					if (!bLocal_23)
					{
						if (fVar73 < 625f && !is_ped_on_mount(get_player_ped(iVar79)))
						{
							func_37(692, 0);
							bLocal_23 = true;
						}
					}
					if (fVar73 > 8100f || func_38(Var0.f_26, 1))
					{
						func_39(Var0.f_26, 1);
						func_24(&Var0, 10);
					}
					break;
				case 11:
					func_40(Var0.f_26);
					if (!func_41(Var0.f_26, iLocal_22))
					{
						func_42(Var0.f_26, iLocal_22);
					}
					if (func_3(Var0.f_20))
					{
						_0x3ea62e56f386c997(_0x126cbebba46693cf(floor(Var0.f_4), 1777389635, 0), 1);
					}
					func_43(Var0, vVar75, 0);
					Global_1940144->f_98 = 1;
					if (does_blip_exist(Var0.f_11))
					{
						remove_blip(&(Var0.f_11));
					}
					func_24(&Var0, 12);
					break;
				case 12:
					if (func_44(Var0.f_20))
					{
						if (func_45(Var0, vVar75, iLocal_22, &uLocal_17, &uLocal_18, &uLocal_19, &bVar80))
						{
							if (bVar80)
							{
								bVar80 = false;
								func_24(&Var0, 8);
							}
							else if (func_27(Var0.f_26, Var0.f_20, Var0.f_6))
							{
								func_24(&Var0, 7);
							}
							else
							{
								func_24(&Var0, 9);
							}
						}
					}
					if (&Global_1198042)
					{
						Global_1198042 = 0;
						if (_does_scenario_point_exist(Global_1198042->f_2))
						{
							_0x8245c1f3262f4ac2(Global_1198042->f_2);
							func_34(&Var62);
							Global_1198042->f_1 = 0;
							Global_1198042->f_2 = 0;
						}
						if (func_27(Var0.f_26, Var0.f_20, Var0.f_6))
						{
							func_24(&Var0, 7);
						}
						else
						{
							func_24(&Var0, 9);
						}
					}
					if (fVar73 > 8100f || func_38(Var0.f_26, 1))
					{
						func_39(Var0.f_26, 1);
						func_24(&Var0, 10);
					}
					break;
				case 8:
					if (!func_32(Global_1296859->f_8))
					{
						func_24(&Var0, 9);
					}
					if (func_46(&uLocal_17, &uLocal_18, bVar80, &uLocal_19))
					{
						if (func_27(Var0.f_26, Var0.f_20, Var0.f_6))
						{
							func_24(&Var0, 7);
						}
						else
						{
							func_24(&Var0, 9);
						}
					}
					break;
				case 9:
					if (fVar73 > 8100f || func_38(Var0.f_26, 1))
					{
						func_39(Var0.f_26, 1);
						func_24(&Var0, 10);
					}
					break;
				case 10:
					func_47(&Var0);
					func_24(&Var0, 1);
					break;
			}
		}
		if (func_49(func_48(&Var0)))
		{
			if (func_50(&Var0) != func_48(&Var0))
			{
				func_51(&Var0, func_48(&Var0));
			}
		}
		else if (func_50(&Var0) == Global_17352)
		{
		}
		else
		{
			func_51(&Var0, Global_17352);
		}
		func_52(&Var0);
		func_53(&Var0, iLocal_22);
		iLocal_15 = (iLocal_15 - 1);
		if (iLocal_15 < 0)
		{
			iLocal_15 = 0;
		}
		wait(0);
	}
	func_34(&Var62);
	func_4(&Var0);
}

void func_1(var uParam0)
{
	uParam0->f_20 = 53;
	uParam0->f_21 = -529638012;
}

int func_2()
{
	return Global_1572887->f_13;
}

bool func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
		default:
			return false;
	}
	return false;
}

void func_4(var uParam0)
{
	if (does_blip_exist(uParam0->f_11))
	{
		remove_blip(&(uParam0->f_11));
	}
	Global_26577[uParam0->f_20] = (&Global_26577[uParam0->f_20] - 1);
	_0xe7282390542f570d(uParam0->f_5);
	if (func_50(uParam0) == 1 && _does_scenario_point_exist(uParam0->f_6))
	{
		Global_1915663 = uParam0->f_6;
	}
	func_47(uParam0);
	terminate_this_thread();
}

struct<2> func_5(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_6(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_7(int iParam0)
{
	return func_54(&(Global_3145858->f_6), iParam0);
}

void func_8(var uParam0, int iParam1)
{
	if (!func_49(iParam1))
	{
		return;
	}
	if (func_48(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_10 = iParam1;
}

int func_9()
{
	return &Global_1902818;
}

int func_10(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_11(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 43:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_12(int iParam0)
{
	if (!func_55(iParam0))
	{
		return false;
	}
	return func_56(iParam0);
}

int func_13(int iParam0, vector3 vParam1)
{
	if (func_57(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_58(iVar3))
		{
			return iVar2;
		}
		else if (func_59(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_61(vParam1, func_60(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_14(int iParam0, vector3 vParam1)
{
	if (iParam0 <= 0)
	{
		return -1;
	}
	if (func_57(vParam1))
	{
		return -1;
	}
	if (func_2() != -1)
	{
		if (Global_20501 >= 500)
		{
			Global_20501 = 0;
		}
		iVar0 = Global_20501;
		func_62(Global_20502[iVar0], iParam0, vParam1, -15);
		Global_20501++;
		return iVar0;
	}
	if (Global_39.f_4666 >= 500)
	{
		Global_39.f_4666 = 0;
	}
	iVar1 = Global_39.f_4666;
	func_63(Global_12580[iVar1], iParam0, vParam1, -15);
	Global_39.f_4666++;
	return iVar1;
}

bool func_15(var uParam0)
{
	return uParam0->f_22 != 3;
}

void func_16(var uParam0)
{
	func_64(uParam0->f_22, &uVar0, &uVar7);
	if (uParam0->f_24 > 4)
	{
		uParam0->f_24 = 4;
	}
	if (uParam0->f_23 <= 0)
	{
		uParam0->f_23 = 1;
	}
	iVar11 = get_random_int_in_range(uParam0->f_23, uParam0->f_24 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (&uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = &uVar7[get_random_int_in_range(0, 3)];
		}
		if (uParam0->f_25 > 0)
		{
			iVar14 = get_random_int_in_range(0, uParam0->f_25);
		}
		iVar15 = ((uVar0[iVar12] || shift_left(iVar13, 9)) || shift_left(iVar14, 13)) | 1073741824;
		func_65(uParam0->f_26, iVar12, iVar15);
		iVar12++;
	}
}

void func_17(var uParam0)
{
	uVar7 = 3;
	func_64(uParam0->f_22, &uVar0, &uVar7);
	if (uParam0->f_25 > 0)
	{
		iVar11 = get_random_int_in_range(0, uParam0->f_25);
	}
	iVar12 = ((uVar0[0] || shift_left(0, 9)) || shift_left(iVar11, 13)) | 1073741824;
	func_65(uParam0->f_26, 0, iVar12);
}

bool func_18(var uParam0)
{
	if (func_66(Global_34) && func_67())
	{
		return true;
	}
	func_21(uParam0);
	if (func_49(func_48(uParam0)))
	{
		if (func_50(uParam0) != func_48(uParam0))
		{
			func_51(uParam0, func_48(uParam0));
		}
	}
	else if (func_50(uParam0) != Global_17352)
	{
		func_51(uParam0, Global_17352);
	}
	if (func_50(uParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_19(var uParam0)
{
	if (func_68(1))
	{
		return false;
	}
	if (Global_1572887->f_13 != -1)
	{
		if (func_69(0, 0))
		{
			return false;
		}
	}
	if (func_50(uParam0) == 1)
	{
		if (&Global_1915663 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_20(var uParam0)
{
	bVar0 = false;
	if (((_get_global_block_can_be_accessed(4) && func_70()) && func_71(player_id(), 1, 0)) && func_72(0) == 1177534031)
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_20 == 11 || uParam0->f_20 == 27))
	{
		return;
	}
	if (func_73(uParam0->f_20))
	{
		bVar0 = true;
	}
	if (func_50(uParam0) == 1)
	{
		bVar0 = true;
	}
	if (func_50(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (func_50(uParam0) == 3)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_24)
		{
			if (func_74(&(uParam0->f_15[iVar1])))
			{
				_0x40d72189f46d2e15(&(uParam0->f_15[iVar1]), 0);
			}
			iVar1++;
		}
	}
}

void func_21(var uParam0)
{
	if (!func_75(&(uParam0->f_27)))
	{
		func_76(&(uParam0->f_27), 1f, 0);
	}
	if (func_77(&(uParam0->f_27)) >= 1f)
	{
		func_78(&(uParam0->f_27));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_79(&(Global_17353[iVar0]), *uParam0))
			{
				func_8(uParam0, Global_17353[iVar0]->f_1);
			}
			iVar0++;
		}
	}
}

Vector3 func_22(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_23(var uParam0)
{
	return uParam0->f_13;
}

void func_24(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

bool func_25(int iParam0, var uParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (!func_80(iParam0))
	{
		return false;
	}
	if (func_81(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = func_82(iParam0);
	func_83(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (func_84(iVar0, 1))
	{
		return true;
	}
	return false;
}

void func_26(int iParam0, bool bParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_85(iParam0, iVar0))
		{
			func_86(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_87(iParam0, 1);
	}
}

bool func_27(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if ((func_33(iParam1) || iParam1 == 19) && _does_scenario_point_exist(iParam2))
	{
		if (_0xfb7cf1de938a3e22(iParam2))
		{
			return false;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_85(iParam0, iVar0))
		{
		}
		else if (!func_41(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_28(var uParam0)
{
	_0x73f0d0327bfa0812(uParam0->f_40);
}

bool func_29(var uParam0)
{
	if (!_0x5e5d96be25e9df68(uParam0->f_40))
	{
		return false;
	}
	return true;
}

int func_30(var uParam0)
{
	uVar4 = uParam0->f_2;
	if (!get_ground_z_for_3d_coord(*uParam0, uParam0->f_1, (uParam0->f_2 + 2f), &uVar4, false))
	{
		if (!get_ground_z_for_3d_coord(*uParam0, uParam0->f_1, (uParam0->f_2 + 10f), &uVar4, false))
		{
			uParam0->f_14++;
			if (uParam0->f_14 >= 50)
			{
				uParam0->f_14 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_85(uParam0->f_26, iVar0))
		{
		}
		else
		{
			func_88(uParam0->f_26, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_24[iVar0] = (*uParam0 + (IntToFloat(iVar1) * cos(to_float(iVar2))));
			vLocal_24[iVar0]->f_1 = (uParam0->f_1 + (IntToFloat(iVar1) * sin(to_float(iVar2))));
			vLocal_24[iVar0]->f_2 = uParam0->f_2;
			if (uParam0->f_25 > 0)
			{
				iLocal_37[iVar0] = uVar3;
			}
			else
			{
				iLocal_37[iVar0] = -1;
			}
			if (!get_ground_z_for_3d_coord(&(vLocal_24[iVar0]), vLocal_24[iVar0]->f_1, (vLocal_24[iVar0]->f_2 + 10f), &(vLocal_24[iVar0]->f_2), false))
			{
				uParam0->f_14 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_14 = 0;
	return 1;
}

bool func_31(var uParam0)
{
	if (iLocal_16 < 4)
	{
		if (!func_57(*vLocal_24[iLocal_16]))
		{
			if (!&Global_1915662)
			{
				iVar1 = 0;
				if (((((((uParam0->f_20 == 1 || uParam0->f_20 == 9) || uParam0->f_20 == 10) || uParam0->f_20 == 17) || uParam0->f_20 == 22) || uParam0->f_20 == 26) || uParam0->f_20 == 33) || uParam0->f_20 == 37)
				{
					iVar1 |= 2;
					*vLocal_24[iLocal_16] = { *vLocal_24[iLocal_16] + func_89(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
				if ((func_33(uParam0->f_20) || uParam0->f_20 == 19) && !func_27(uParam0->f_26, uParam0->f_20, uParam0->f_6))
				{
					iVar1 |= 1;
				}
				if (uParam0->f_20 == 38)
				{
					iVar1 |= 2;
					*vLocal_24[iLocal_16] = { *vLocal_24[iLocal_16] + func_89(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
				if (func_41(uParam0->f_26, iLocal_16))
				{
					iVar1 |= 1;
				}
				uParam0->f_15[iLocal_16] = _0x5b4bbe80ad5972dc(uParam0->f_40, *vLocal_24[iLocal_16], func_90((uParam0->f_3 + (IntToFloat(iLocal_16) * get_random_float_in_range(0f, 90f)))), iVar1, &uVar0, &(iLocal_37[iLocal_16]));
				if (func_91(uParam0->f_20))
				{
					uParam0->f_30[iLocal_16] = _0xfa50f79257745e74(*vLocal_24[iLocal_16], 0.37f, 4, 27, 0);
				}
				if (uParam0->f_20 == 39)
				{
					func_92(uParam0->f_35[iLocal_16], *vLocal_24[iLocal_16], 0.15f);
				}
				iLocal_16++;
				Global_1915662 = 1;
			}
		}
		else
		{
			func_93(uParam0, 255, 255, 0);
			return true;
		}
		return false;
	}
	return true;
}

bool func_32(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	return true;
}

bool func_33(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

void func_34(var uParam0)
{
	func_94(uParam0);
	func_95(&(uParam0->f_7), 1);
}

bool func_35(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (func_57(vParam1))
	{
		return false;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = func_13(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return false;
	}
	fVar14 = -1f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_85(*iParam4, iVar0))
		{
			if (bParam6 && func_41(*iParam4, iVar0))
			{
			}
			else if (bParam7 && !func_41(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { func_60(*iParam4) };
				func_88(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + (IntToFloat(iVar1) * cos(to_float(iVar2))));
				vVar5.f_1 = (vVar8.y + (IntToFloat(iVar1) * sin(to_float(iVar2))));
				fVar15 = func_61(vParam1, vVar5);
				if (fVar14 < 0f || (fVar14 >= 0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 };
				}
			}
		}
		iVar0++;
	}
	if (func_61(vParam1, vVar11) < IntToFloat(iParam8))
	{
		*iParam5 = iVar4;
		return true;
	}
	return false;
}

void func_36(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_96(-1733092640, 1))
	{
		return;
	}
	if (func_97(0))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_99())
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
	if (!func_57(*Global_1212889) && get_distance_between_coords(*Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_100(get_player_ped(player_id()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_101()));
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
						if (func_102(get_player_ped(player_id()), 0, 1, 0) != -862059856)
						{
							_0xdcf5ba95bbf0faba(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_103(uParam0, 1);
					}
				}
				else
				{
					func_103(uParam0, 1);
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
				func_104(250);
			}
			set_pad_shake(0, iVar3, iVar4);
			func_78(&(uParam0->f_2));
			func_103(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_94(uParam0);
				}
				func_103(uParam0, 0);
			}
			else if (func_77(&(uParam0->f_2)) >= 2f)
			{
				func_103(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_104(250);
			}
			break;
	}
}

void func_37(int iParam0, bool bParam1)
{
	func_105(iParam0, &iVar0, &iVar1);
	if (!func_106(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_107(iVar0, iVar1);
}

bool func_38(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return (Global_20502[iParam0]->f_3 && iParam1) != 0;
	}
	return (Global_12580[iParam0]->f_3 && iParam1) != 0;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_3 = (Global_20502[iParam0]->f_3 - (Global_20502[iParam0]->f_3 && iParam1));
		return;
	}
	Global_12580[iParam0]->f_3 = (Global_12580[iParam0]->f_3 - (Global_12580[iParam0]->f_3 && iParam1));
}

void func_40(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_2 = func_9();
		return;
	}
	Global_12580[iParam0]->f_2 = func_9();
}

bool func_41(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return Global_20502[iParam0]->f_4[iParam1] & 4096 != 0;
	}
	return Global_12580[iParam0]->f_4[iParam1] & 4096 != 0;
}

void func_42(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_4[iParam1] |= 4096;
		return;
	}
	Global_12580[iParam0]->f_4[iParam1] |= 4096;
}

bool func_43(struct<27> Param0, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, vector3 vParam62, int iParam65)
{
	if (func_61(Param0, vParam62) > 26f)
	{
		return false;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		iVar0 = func_108(Param0.f_20);
		_0xae693ec3a178f6c2(iVar0);
		compendium_herb_picked(iVar0, vParam62);
	}
	func_40(Param0.f_26);
	if (!func_109(Param0.f_20))
	{
		func_110(Param0.f_20, 0, 0);
	}
	if (iParam65 == 1)
	{
		func_111(Param0.f_20, 1);
	}
	else
	{
		func_112(Param0.f_20, 1);
	}
	return true;
}

bool func_44(int iParam0)
{
	return !func_3(iParam0);
}

bool func_45(struct<62> Param0, vector3 vParam62, int iParam65, var uParam66, var uParam67, var uParam68, bool bParam69)
{
	iVar0 = Param0.f_20;
	iVar1 = Param0.f_26;
	if (!func_32(Global_1296859->f_8))
	{
		return false;
	}
	if (iVar1 != -1)
	{
		fVar2 = get_distance_between_coords(Param0, vParam62, true);
		if (fVar2 > 25f)
		{
			return false;
		}
		if (!has_anim_event_fired(Global_1296859->f_8, 1027129856))
		{
			return false;
		}
		if (func_43(Param0, vParam62, 1))
		{
			if (is_ped_on_foot(Global_1296859->f_8))
			{
				if (iVar0 == 27 || iVar0 == 11)
				{
					*bParam69 = 1;
				}
				else if (iVar0 == 30)
				{
					iVar3 = get_random_int_in_range(1, 4);
					if (iVar3 == 3)
					{
						*bParam69 = 1;
					}
				}
				else
				{
					*bParam69 = 0;
				}
			}
			func_42(iVar1, iParam65);
			func_113(iVar0, 1, 1);
			func_115(func_114(iVar0));
			func_116(func_114(iVar0), 1, 1, 0, 0, 0, 0);
			func_46(uParam66, uParam67, *bParam69, uParam68);
			return true;
		}
	}
	return false;
}

bool func_46(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	disable_control_action(0, -822242784, false);
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_117(uParam3, 0);
				bParam2 = false;
			}
			if (func_75(uParam3) && func_77(uParam3) > 2f)
			{
				func_118(uParam0, 1);
				func_119(uParam3);
			}
			break;
		case 1:
			*uParam1 = _create_anim_scene("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_118(uParam0, 2);
			break;
		case 2:
			if (_does_anim_scene_exist(*uParam1))
			{
				load_anim_scene(*uParam1);
				func_118(uParam0, 3);
			}
			break;
		case 3:
			if (_is_anim_scene_loaded(*uParam1, true, false) && _is_anim_scene_metadata_loaded(*uParam1, false))
			{
				if (is_ped_male(Global_34))
				{
					set_anim_scene_entity(*uParam1, "MP_Male", Global_34, 0);
				}
				else
				{
					set_anim_scene_entity(*uParam1, "MP_Female", Global_34, 0);
				}
				start_anim_scene(*uParam1);
				func_118(uParam0, 5);
			}
			break;
		case 5:
			if ((!_is_anim_scene_started(*uParam1, false) || is_ped_falling(Global_34)) || is_entity_in_water(Global_34))
			{
				if (is_ped_male(Global_34))
				{
					remove_anim_scene_entity(*uParam1, "MP_Male", Global_34);
				}
				else
				{
					remove_anim_scene_entity(*uParam1, "MP_Female", Global_34);
				}
				func_118(uParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_47(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_85(uParam0->f_26, iVar1) && &uParam0->f_15[iVar1] != iVar0)
		{
			_0x5758b1ee0c3fd4ac(&(uParam0->f_15[iVar1]), 0);
			uParam0->f_15[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_120(uParam0->f_30[iVar2]))
		{
			_0x9cf1836c03fb67a2(uParam0->f_30[iVar2], 1);
			uParam0->f_30[iVar2] = -1;
		}
		if (func_120(uParam0->f_35[iVar2]))
		{
			_0x9cf1836c03fb67a2(uParam0->f_35[iVar2], 1);
			uParam0->f_35[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_16 = 0;
}

int func_48(var uParam0)
{
	return uParam0->f_10;
}

bool func_49(int iParam0)
{
	return iParam0 != 5;
}

int func_50(var uParam0)
{
	return uParam0->f_9;
}

void func_51(var uParam0, int iParam1)
{
	if (!func_49(iParam1))
	{
		return;
	}
	if (func_50(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

void func_52(var uParam0)
{
	bVar0 = false;
	if (func_121(&Global_1940258, 4194304))
	{
		bVar0 = true;
	}
	if (func_50(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(Global_34))
	{
		if (is_ped_sprinting(Global_34) || (func_75(&(Global_1958000->f_2)) && func_77(&(Global_1958000->f_2)) < 5f))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_24)
	{
		if (func_74(&(uParam0->f_15[iVar1])))
		{
			_0x082c043c7afc3747(&(uParam0->f_15[iVar1]), 1);
			_0x40d72189f46d2e15(&(uParam0->f_15[iVar1]), 1);
		}
		iVar1++;
	}
}

void func_53(var uParam0, int iParam1)
{
	switch (uParam0->f_7)
	{
		case 0:
			if (Global_17352 == 4)
			{
				func_122(uParam0, 1);
			}
			break;
		case 1:
			if (!func_41(uParam0->f_26, iParam1))
			{
				if (!does_blip_exist(uParam0->f_11))
				{
					uParam0->f_11 = _blip_add_for_coord(1425226969, *uParam0);
				}
			}
			func_122(uParam0, 2);
			break;
		case 2:
			if (Global_17352 != 4)
			{
				func_122(uParam0, 3);
			}
			break;
		case 3:
			if (does_blip_exist(uParam0->f_11))
			{
				remove_blip(&(uParam0->f_11));
			}
			func_122(uParam0, 4);
			break;
		case 4:
			Global_17352 = 0;
			func_122(uParam0, 0);
			break;
	}
}

bool func_54(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_55(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_56(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_57(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return &Global_20502[iParam0] > 0;
	}
	return &Global_12580[iParam0] > 0;
}

int func_59(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_2() != -1)
	{
		return &(Global_20502[iParam0]);
	}
	else
	{
		return &(Global_12580[iParam0]);
	}
	return 0;
}

Vector3 func_60(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (func_2() != -1)
	{
		return func_123(Global_20502[iParam0]->f_1);
	}
	return func_123(Global_12580[iParam0]->f_1);
}

float func_61(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_62(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	Var0.f_2 = -15;
	Var0.f_4 = 4;
	_copy_memory(uParam0, &Var0, 9);
	*uParam0 = iParam1;
	uParam0->f_1 = func_124(vParam2);
	uParam0->f_2 = iParam5;
}

void func_63(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	Var0.f_2 = -15;
	Var0.f_4 = 4;
	_copy_memory(uParam0, &Var0, 9);
	*uParam0 = iParam1;
	uParam0->f_1 = func_124(vParam2);
	uParam0->f_2 = iParam5;
}

void func_64(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = get_random_int_in_range(0, iVar0 + 1);
		uVar2 = uParam1[iVar1];
		(*uParam1)[iVar1] = uParam1[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_4[iParam1] = iParam2;
	}
	Global_12580[iParam0]->f_4[iParam1] = iParam2;
}

bool func_66(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_67()
{
	return (Global_1893587 & 1 != 0 && func_125() != -1);
}

bool func_68(bool bParam0)
{
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
	return false;
}

bool func_69(bool bParam0, bool bParam1)
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

bool func_70()
{
	return func_126(Global_1572887->f_7, 1);
}

bool func_71(int iParam0, int iParam1, bool bParam2)
{
	if (network_is_player_active(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 == iParam1 && func_127(iVar1, 64, iVar0))
			{
				if (bParam2)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return true;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_72(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

bool func_73(int iParam0)
{
	if (!func_128(iParam0))
	{
		return false;
	}
	return func_129(iParam0, 4, 1);
}

bool func_74(int iParam0)
{
	return iParam0 != -1;
}

bool func_75(var uParam0)
{
	return func_130(*uParam0, 1);
}

void func_76(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_75(uParam0))
	{
		func_131(uParam0, fParam1);
	}
}

float func_77(var uParam0)
{
	if (!func_75(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_132(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_133() - uParam0->f_1);
}

void func_78(var uParam0)
{
	func_131(uParam0, 0f);
}

bool func_79(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_80(int iParam0)
{
	if (func_2() != -1)
	{
		return Global_20502[iParam0]->f_2 != -15;
	}
	return Global_12580[iParam0]->f_2 != -15;
}

bool func_81(int iParam0, var uParam1)
{
	iVar0 = func_59(iParam0);
	if (!func_3(iVar0) || func_2() != -1)
	{
		return false;
	}
	return false;
}

var func_82(int iParam0)
{
	if (func_2() != -1)
	{
		return Global_20502[iParam0]->f_2;
	}
	return Global_12580[iParam0]->f_2;
}

void func_83(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_134(*uParam0);
	iVar1 = func_135(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_10(*uParam0);
	iVar4 = func_137(*uParam0);
	iVar5 = func_138(*uParam0);
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
	iVar6 = func_139(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_139(iVar1, iVar0);
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
	func_140(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_84(int iParam0, bool bParam1)
{
	return func_141(func_9(), iParam0, bParam1);
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return Global_20502[iParam0]->f_4[iParam1] & 1073741824 != 0;
	}
	return Global_12580[iParam0]->f_4[iParam1] & 1073741824 != 0;
}

void func_86(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_4[iParam1] = (&Global_20502[iParam0]->f_4[iParam1] - Global_20502[iParam0]->f_4[iParam1] & 4096);
		return;
	}
	Global_12580[iParam0]->f_4[iParam1] = (&Global_12580[iParam0]->f_4[iParam1] - Global_12580[iParam0]->f_4[iParam1] & 4096);
}

void func_87(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_20502[iParam0]->f_3 = (Global_20502[iParam0]->f_3 || iParam1);
		return;
	}
	Global_12580[iParam0]->f_3 = (Global_12580[iParam0]->f_3 || iParam1);
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		func_142(Global_20502[iParam0], iParam1, iParam2, iParam3, uParam4);
		return;
	}
	func_143(Global_12580[iParam0], iParam1, iParam2, iParam3, uParam4);
}

Vector3 func_89(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_90(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_91(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 29:
		case 32:
			return true;
		default:
			break;
	}
	return false;
}

void func_92(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = -1;
	func_144(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

void func_93(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (((((((((uParam0->f_20 == 40 || uParam0->f_20 == 42) || uParam0->f_20 == 43) || uParam0->f_20 == 41) || uParam0->f_20 == 44) || uParam0->f_20 == 45) || uParam0->f_20 == 46) || uParam0->f_20 == 47) || uParam0->f_20 == 48) || uParam0->f_20 == 19)
	{
		if (iLocal_16 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_16)
			{
				iVar1 = _0x96c6ed22fb742c3e(&(uParam0->f_15[iVar0]), &(uParam0->f_41));
				if (iVar1 > 0 && iVar1 <= 10)
				{
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						if (does_entity_exist(&(uParam0->f_41[iVar2])))
						{
							_0x62ed71e133b6c9f1(&(uParam0->f_41[iVar2]), iParam1, iParam2, iParam3);
							if (uParam0->f_20 == 19)
							{
								_0x7563cbca99253d1a(&(uParam0->f_41[iVar2]), -1017650267);
							}
							else
							{
								_0x7563cbca99253d1a(&(uParam0->f_41[iVar2]), 187984275);
							}
						}
						iVar2++;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_94(var uParam0)
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

void func_95(var uParam0, int iParam1)
{
	if (func_120(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_146(iParam0);
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
			if (!func_147(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_148(iParam0))
			{
				return true;
			}
			break;
	}
	return func_149(iParam0, 0, 0, 0) >= iParam1;
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_98()
{
	return func_150() != -1;
}

bool func_99()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

float func_100(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_101()
{
	return Global_1146212->f_2169[89]->f_201;
}

int func_102(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_104(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_106(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_151(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_152(iParam0))
	{
		return false;
	}
	if (func_153(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_154(iParam0, 1)) || func_155(32768))
	{
		if (!func_154(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_156())
	{
		return false;
	}
	return true;
}

void func_107(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
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
			return 1516353659;
		case 20:
			return -1040706491;
		case 21:
			return -1910627346;
		case 24:
			return -1812487593;
		case 27:
			return 1983971282;
		case 28:
			return 1561519041;
		case 29:
			return -980496853;
		case 30:
			return -1738887126;
		case 32:
			return 424771379;
		case 34:
			return 787316814;
		case 35:
			return 984616481;
		case 38:
			return 1078285403;
		case 39:
			return -262897007;
		case 49:
			return -1727702531;
		case 50:
			return 1783324404;
		case 51:
			return 1288848815;
		case 52:
			return 918090738;
		case 53:
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
		case 22:
			return -819513569;
		case 23:
			return 1906968775;
		case 25:
			return -135434663;
		case 26:
			return 920123680;
		case 31:
			return 150470908;
		case 33:
			return -1665125257;
		case 36:
			return 1587928307;
		case 37:
			return -1738925422;
		case 40:
			return 656594395;
		case 42:
			return -1174738785;
		case 43:
			return 1073505629;
		case 41:
			return -658674894;
		case 44:
			return -1504155535;
		case 45:
			return -1917345716;
		case 46:
			return 1823406682;
		case 47:
			return -1003637772;
		case 48:
			return -1571524081;
	}
	return 0;
}

bool func_109(int iParam0)
{
	if (!func_128(iParam0))
	{
		return false;
	}
	return func_129(iParam0, 1, 1);
}

void func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_128(iParam0))
	{
		return;
	}
	if (func_109(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_3(iParam0);
	}
	if (!bParam1)
	{
		func_157(iParam0);
	}
	func_158(iParam0, 1);
	func_159(iParam0, 1);
	if (bParam2)
	{
		if (!func_160(0, 0, 1))
		{
			func_161(1, 6);
		}
	}
}

void func_111(int iParam0, int iParam1)
{
	Var0 = { func_162(-372368982, func_108(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_164(func_163(106002964), iParam1);
}

void func_112(int iParam0, int iParam1)
{
	func_164(func_162(-1256705067, func_108(iParam0)), iParam1);
	func_164(func_163(-1358198738), iParam1);
	if (func_165(iParam0))
	{
		func_164(func_163(339698375), iParam1);
	}
}

void func_113(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_114(iParam0);
	iVar1 = func_166(iVar0);
	if (iVar1 != iParam0)
	{
		func_158(iVar1, 4);
	}
	if (!func_128(iParam0))
	{
		return;
	}
	if (func_73(iParam0))
	{
		return;
	}
	func_158(iParam0, 4);
	func_159(iParam0, bParam1);
	if (!func_109(iParam0))
	{
		func_110(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_160(0, 0, 1))
		{
			func_161(1, 6);
		}
	}
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -241666815;
		case 20:
			return -1781387050;
		case 21:
			return -597058368;
		case 24:
			return 128702355;
		case 27:
			return -2051332199;
		case 28:
			return 546981776;
		case 29:
			return -2013384490;
		case 30:
			return 228922461;
		case 32:
			return -746674788;
		case 34:
			return 599861917;
		case 35:
			return -1781387050;
		case 38:
			return 2006811763;
		case 39:
			return -90546043;
		case 49:
			return 1216456215;
		case 50:
			return 746300881;
		case 51:
			return -435006002;
		case 52:
			return -624139784;
		case 53:
			return -529638012;
		case 40:
			return 1338475089;
		case 41:
			return 2605459;
		case 42:
			return 1071702353;
		case 43:
			return -1183422860;
		case 44:
			return -1957546791;
		case 45:
			return -589542533;
		case 46:
			return -1776738559;
		case 47:
			return 1602215994;
		case 48:
			return -396757268;
		default:
			break;
	}
	return 0;
}

void func_115(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_167(iParam0, 1573112293) || func_167(iParam0, 672467738)) || func_167(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_146(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_168(0, Var22.f_2);
				func_169(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_168(2, Var22.f_2);
				func_170(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_168(1, Var22.f_2);
				func_171(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_172(to_float(Var22.f_2), Var22.f_5);
				func_173(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_172(to_float(Var22.f_2), Var22.f_5);
				func_173(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_172(to_float(Var22.f_2), Var22.f_5);
				func_173(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_174(to_float(Var22.f_3), Var22.f_4);
				func_175(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_176(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_167(iParam0, -537818634))
		{
			func_164(func_177(-704089207), 1);
		}
		if (func_167(iParam0, -1457797660))
		{
			func_164(func_177(-1909697259), 1);
		}
		if (bVar38)
		{
			func_164(func_177(704570463), 1);
		}
		switch (iParam0)
		{
			case -1735850413:
			case -241345764:
				chal_add_goal_progress_int(-1823988672, 1517929953, 1);
				break;
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

void func_116(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!func_145(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_178() || bParam6)
	{
		func_179(iParam0, iParam1, bParam2, iParam4, iParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_180(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (iParam3 || iParam4)
	{
		StringCopy(&cVar2, func_180(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_181(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_146(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_182(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_183(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_167(iParam0, 474910316))
	{
		sVar17 = func_184(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_167(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_185(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_186(iParam0);
	if ((func_187(iVar12) && func_167(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_188(iParam0);
	}
	else if (func_146(iParam0) == -1037537535)
	{
		iVar19 = func_189(iParam0);
		if (func_145(iVar19, 0))
		{
			iVar18 = func_186(iVar19);
		}
	}
	if (func_190(iParam0, 1443104131) && iParam3)
	{
		iVar20 = 1;
		func_191(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_192(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_193(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_194(iParam0, &cVar22))
		{
			sVar21 = func_196(func_195(cVar22), 109029619);
		}
	}
	func_197(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1 || !func_75(uParam0))
	{
		func_78(uParam0);
	}
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_119(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_120(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_121(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_122(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
}

Vector3 func_123(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_124(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_125()
{
	return Global_1893587->f_2;
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_127(int iParam0, int iParam1, int iParam2)
{
	return func_198((*Global_1196567)[iParam2][iParam0], iParam1);
}

bool func_128(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_129(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_128(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_131(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_133() - fParam1);
	func_199(uParam0, 1);
	func_200(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_132(var uParam0)
{
	return func_130(*uParam0, 2);
}

float func_133()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_134(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_201(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_135(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_136(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_137(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_139(int iParam0, int iParam1)
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

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_202(iParam0, iParam6);
	func_203(iParam0, iParam5);
	func_204(iParam0, iParam4);
	func_205(iParam0, iParam3);
	func_206(iParam0, iParam2);
	func_207(iParam0, iParam1);
}

bool func_141(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_208(iParam1) || !func_208(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_142(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = shift_right(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = shift_right(uParam0->f_4[iParam1] & 57344, 13);
}

void func_143(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = shift_right(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = shift_right(uParam0->f_4[iParam1] & 57344, 13);
}

void func_144(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_120(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_120(uParam0))
		{
		}
	}
}

bool func_145(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_146(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_147(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_209(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_210("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_211(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_212(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_213(iVar1);
				return true;
			}
			iVar3++;
		}
		func_213(iVar1);
	}
	return false;
}

bool func_148(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_182(iParam0);
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
	iVar1 = func_214(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_215(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_216(iParam0);
	iVar2 = func_215(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_149(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_146(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_209(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_217(iParam0, 0);
	}
	if (func_218(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_219(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_220(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_219(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_150()
{
	return Global_1138962->f_137;
}

bool func_151(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_152(int iParam0)
{
	if (func_154(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_153(int iParam0)
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

bool func_154(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_155(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_156()
{
	if (!func_221())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_157(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_37(239, 0);
			break;
		case 16:
			func_37(240, 0);
			break;
		case 34:
			func_37(241, 0);
			break;
		case 52:
			func_37(242, 0);
			break;
		case 2:
			func_37(243, 0);
			break;
		case 3:
			func_37(244, 0);
			break;
		case 53:
			func_37(245, 0);
			break;
		case 15:
			func_37(246, 0);
			break;
		case 24:
			func_37(247, 0);
			break;
		case 38:
			func_37(248, 0);
			break;
		case 27:
			func_37(249, 0);
			break;
		case 13:
			func_37(250, 0);
			break;
		case 19:
			func_37(251, 0);
			break;
		case 20:
			func_37(252, 0);
			break;
		case 35:
			func_37(253, 0);
			break;
		case 39:
			func_37(254, 0);
			break;
		case 50:
			func_37(255, 0);
			break;
		case 7:
			func_37(256, 0);
			break;
		case 21:
			func_37(257, 0);
			break;
		case 18:
			func_37(258, 0);
			break;
		case 6:
			func_37(259, 0);
			break;
		case 30:
			func_37(260, 0);
			break;
		case 49:
			func_37(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_37(263, 0);
			break;
		case 8:
			func_37(264, 0);
			break;
		case 29:
			func_37(265, 0);
			break;
		case 32:
			func_37(266, 0);
			break;
		case 12:
			func_37(267, 0);
			break;
		case 28:
			func_37(268, 0);
			break;
		case 51:
			func_37(269, 0);
			break;
	}
}

void func_158(int iParam0, int iParam1)
{
	if (!func_128(iParam0))
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

void func_159(int iParam0, bool bParam1)
{
	if (!func_128(iParam0))
	{
		return;
	}
	if (func_222(iParam0))
	{
		return;
	}
	func_158(iParam0, 2);
	if (bParam1)
	{
		if (!func_160(0, 0, 1))
		{
			if (func_2() == -1)
			{
				func_161(1, 6);
			}
			else
			{
				func_223(1, 1017438712);
			}
		}
	}
}

bool func_160(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_224())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_225(func_5(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_6(func_5(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

void func_161(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_226(&Global_0, 8);
	}
	if (!func_227() || func_2() != -1)
	{
		return;
	}
	func_226(&Global_0, 1);
}

struct<2> func_162(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_163(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_164(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_165(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 29:
		case 32:
			return true;
	}
	return false;
}

int func_166(int iParam0)
{
	switch (iParam0)
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
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0))
	{
		return func_229(func_228(iParam0), iParam1);
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

float func_168(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = to_float(get_entity_health(Global_34));
			fVar2 = to_float(get_entity_max_health(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = _get_ped_stamina(Global_34);
			fVar2 = _get_ped_max_stamina(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = _0xa81d24ae0af99a5e(get_player_index());
			fVar2 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_169(int iParam0)
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
	iVar1 = func_230(2);
	func_231(to_float((iParam0 * iVar1)), 0);
}

void func_170(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_232(2);
	func_233(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_171(int iParam0)
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
	iVar1 = func_234(2);
	func_235(to_float((iParam0 * iVar1)), 0);
}

float func_172(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_173(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_236(iParam0, fParam1, 1);
	}
	func_238(iParam0, (func_237(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_174(float fParam0, int iParam1)
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

int func_175(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_239(iParam0, fParam1, bParam2, bParam3);
}

void func_176(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_240())
	{
		func_241(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_37(109, 0);
		}
	}
}

struct<2> func_177(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_178()
{
	return !&Global_1913504;
}

void func_179(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == iParam3) && Global_1913504->f_4[iVar0]->f_4 == iParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = iParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = iParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_180(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_181(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

int func_182(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_183(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_184(int iParam0)
{
	if (func_167(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_167(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_167(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_167(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_167(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_167(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_167(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_167(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_167(iParam0, -352095726) || func_167(iParam0, -2014783736)) || func_167(iParam0, -545064757)) || func_167(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_185(int iParam0)
{
	if (func_167(iParam0, -189374246))
	{
		if (((func_242(iParam0, -1305775593) || func_242(iParam0, 1384151091)) || func_242(iParam0, 2075388272)) || func_242(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_167(iParam0, -753854379) || func_167(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_186(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_187(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_188(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	iVar0 = func_244(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_245(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_246(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_247(iVar14))
			{
				func_248(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_248(iVar11);
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_145(iParam0, 0) && !func_249(func_228(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_192(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_193(int iParam0, int iParam1)
{
	iVar0 = func_250(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_194(int iParam0, char* sParam1)
{
	if (!func_145(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_251(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_252(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_253(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_195(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_196(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_192(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_197(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_254(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_200(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_201(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_202(int iParam0, int iParam1)
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

void func_203(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_204(int iParam0, int iParam1)
{
	iVar0 = func_135(*iParam0);
	iVar1 = func_134(*iParam0);
	if (iParam1 < 1 || iParam1 > func_139(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_205(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_206(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_207(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_208(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_138(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_137(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_10(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_135(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 1 || iVar5 > func_139(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_209(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_167(iParam0, 1399091007))
	{
		func_255(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_210(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_219(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_211(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_212(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_213(int iParam0)
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

int func_214(int iParam0)
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

int func_215(var uParam0, int iParam1)
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

int func_216(int iParam0)
{
	iVar0 = func_182(iParam0);
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

int func_217(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_256(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_258(&Var0, func_257(0));
	}
	if (!func_259(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_213(iVar14);
	return uVar15;
}

int func_218(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_219(bool bParam0)
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

struct<4> func_220(int iParam0, bool bParam1)
{
	Var0 = { func_260(iParam0, bParam1, 0) };
	return func_261(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_221()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_222(int iParam0)
{
	if (!func_128(iParam0))
	{
		return false;
	}
	return func_129(iParam0, 2, 1);
}

int func_223(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_262())
	{
		return 0;
	}
	if (!func_221())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_226(&Global_0, 8);
	}
	func_226(&Global_0, 1);
	return 1;
}

bool func_224()
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
	if (!func_225(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_225(struct<2> Param0)
{
	if (!func_263(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_264(Param0))
	{
		return false;
	}
	return true;
}

void func_226(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_227()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_228(int iParam0)
{
	return iParam0;
}

int func_229(int iParam0, int iParam1)
{
	if (!func_249(iParam0, 2))
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

int func_230(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_265(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_231(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
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

int func_232(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_265(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_233(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_266(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
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
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
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

int func_234(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_265(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_235(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

float func_236(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_9();
	func_267(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_268(iParam0, 2);
	if (func_141(iVar0, func_269(iParam0, 2), 1))
	{
		func_270(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_37(103, bParam2);
		return 0f;
	}
	func_271(iParam0, func_9(), 2);
	func_270(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_237(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_265(2);
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

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_265(2);
	}
	iVar0 = player_ped_id();
	if (func_272(iVar0, iParam0, fParam1))
	{
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
			func_273(iParam0, 7000, iParam5);
		}
		func_274(iVar0, iParam0, fParam1);
		func_275(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_239(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_276(iParam0))
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
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_277(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_169(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_277(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_278(1775828486);
			func_171(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_277(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_170(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_278(350943398);
			func_279(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_279(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_279(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_240()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_84(Global_1956200->f_1431.f_107, 0);
}

void func_241(float fParam0, int iParam1)
{
	fVar0 = func_280(13, 2);
	iVar1 = func_281(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_282(fVar0, 0f, 100f);
	iVar2 = func_281(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_9();
		func_83(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_283(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

int func_242(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
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

int func_244(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

struct<10> func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_246(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
	}
	if (func_167(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_249(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_251(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_186(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_252(int iParam0)
{
	if (func_182(iParam0) == -126813555 || func_182(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_253(int iParam0)
{
	if (!func_145(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_188(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_254(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_255(int iParam0, var uParam1, var uParam2)
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

struct<14> func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_257(bool bParam0)
{
	iVar0 = func_219(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_261(923904168, func_284(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_261(923904168, func_284(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_261(923904168, func_284(bParam0), -740156546, 0);
}

void func_258(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_259(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_219(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_260(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_284(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_146(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_261(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_257(bParam1) };
			if (bParam2 && func_285(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_286(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_286(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_287(iParam0, &Var6, 1728382685))
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
			Var0 = { func_288(bParam1) };
			switch (func_182(iParam0))
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
			if (func_289(iParam0, -1823706425))
			{
				Var0 = { func_261(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_289(iParam0, -1483207246))
			{
				Var0 = { func_261(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_261(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_289(iParam0, -1653629781))
			{
				Var0 = { func_261(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_290(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_289(iParam0, -1653629781))
			{
				Var0 = { func_261(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_261(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_145(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_219(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_262()
{
	return !Global_1572887->f_9;
}

bool func_263(int iParam0)
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

int func_264(int iParam0)
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

int func_265(int iParam0)
{
	return func_292(func_291(iParam0));
}

bool func_266(int iParam0)
{
	fVar0 = (func_293(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_134(*iParam0);
	iVar1 = func_135(*iParam0);
	iVar2 = func_136(*iParam0);
	iVar3 = func_10(*iParam0);
	iVar4 = func_137(*iParam0);
	iVar5 = func_138(*iParam0);
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
		iVar7 = func_139(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_140(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_268(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_265(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_2;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_269(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_265(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_1;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_272(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_294(iParam1), ceil(fParam2));
	return true;
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_274(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_295(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_296(iParam1), fParam2, -1);
	}
}

void func_275(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_265(2);
	}
	uVar0 = Global_1296859->f_21;
	func_297(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_298(iParam0, uVar0, iParam3);
	}
}

bool func_276(int iParam0)
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

char* func_277(int iParam0)
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

void func_278(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_299(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_300(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	func_238(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_280(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_265(1);
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

int func_281(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_282(float fParam0, float fParam1, float fParam2)
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

int func_283(int iParam0, float fParam1, int iParam2)
{
	if (!func_301(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	func_302(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

struct<4> func_284(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_219(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_261(1328661203, func_303(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_261(1328661203, func_303(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_261(1328661203, func_303(), -1591664384, bParam0);
}

bool func_285(int iParam0, bool bParam1)
{
	if (func_182(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_304();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_286(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_305(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_287(int iParam0, var uParam1, int iParam2)
{
	if (func_306(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_288(bool bParam0)
{
	iVar0 = func_219(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_261(271701509, func_284(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_261(271701509, func_284(bParam0), 12999093, 0);
}

bool func_289(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_182(iParam0);
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
			if (func_307(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_290(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_308(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_291(int iParam0)
{
	return func_309(&(Global_1956200->f_1565), iParam0, 1);
}

int func_292(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_293(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_310(2)));
}

int func_294(int iParam0)
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

char* func_295(int iParam0)
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

char* func_296(int iParam0)
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

void func_297(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_298(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_265(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_299(int iParam0, int iParam1)
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

int func_300(int iParam0)
{
	if (!func_311(iParam0))
	{
		return 0;
	}
	iVar0 = func_299(iParam0, 1);
	if (!func_312(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_313(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_314(iParam0, iVar1))
		{
			case 0:
				func_315(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_315(iVar1, iParam0, iVar4);
						func_316(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_316(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_317(iVar1, 1);
				func_318(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_319(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_320(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_301(int iParam0)
{
	if (func_276(iParam0))
	{
		return true;
	}
	else if (func_321(iParam0))
	{
		return true;
	}
	return false;
}

void func_302(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_265(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

struct<4> func_303()
{
	return Var0;
}

bool func_304()
{
	return (func_322(-1185145312, 0, 0, 0) > 0 && func_323(func_261(889965687, func_284(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_305(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_145(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_218(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_261(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_219(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_219(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_306(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_219(0);
	*uParam1 = { func_261(iParam0, func_257(0), iParam3, 0) };
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

bool func_307(int iParam0, int iParam1, int iParam2)
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

bool func_308(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_309(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_230(2) * 2;
		case 1:
			return func_234(2) * 2;
		case 2:
			return func_232(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_311(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_312(int iParam0)
{
	iVar0 = func_313(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_314(int iParam0, int iParam1)
{
	iVar0 = func_324(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_317(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_315(int iParam0, int iParam1, int iParam2)
{
	if (!func_311(iParam1))
	{
		return 0;
	}
	if (!func_325(iParam0))
	{
		return 0;
	}
	iVar0 = func_317(iParam0, 1);
	func_326(iParam0, iParam1, iParam2);
	if (func_327(*Global_1146212->f_35859.f_3116[iVar0]) && func_328(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_329(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_330(vVar1))
		{
			if (func_331(vVar1.x, vVar1.y, vVar1.z))
			{
				func_332(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_333(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_333(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_316(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_318(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_319(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_320(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

bool func_321(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

int func_322(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_334(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_219(bParam1), iParam0, iParam3);
}

int func_323(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_335(&uParam0, iParam4, bParam5, iParam6);
}

int func_324(int iParam0)
{
	if (func_336(iParam0))
	{
		return (func_337(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_325(int iParam0)
{
	iVar0 = func_317(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_299(iParam1, 1);
	iVar1 = func_317(iParam0, 1);
	iVar2 = func_313(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return 1;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_338(iVar3, 1);
		if (!func_339(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_340(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_341(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_342(iVar6))
		{
		}
		else
		{
			iVar8 = func_343(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_344(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_327(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_328(int iParam0, int iParam1)
{
	if (!func_325(iParam0))
	{
		return false;
	}
	if (!func_345(iParam1))
	{
		return false;
	}
	iVar0 = func_346(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_329(int iParam0)
{
	iVar0 = func_347(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_330(vector3 vParam0)
{
	if (!func_325(vParam0.x))
	{
		return false;
	}
	if (!func_311(vParam0.y))
	{
		return false;
	}
	if (!func_348(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_299(iParam1, 1);
	iVar1 = func_317(iParam0, 1);
	iVar2 = func_313(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_338(iVar3, 1);
		if (!func_339(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_340(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_349(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_342(iVar6))
		{
		}
		else if (!func_350(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_343(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_351(iVar6);
			}
		}
		iVar7++;
	}
	func_352(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_345(iParam0))
	{
		return;
	}
	iVar0 = func_346(iParam0, 1);
	if (!func_325(iParam1))
	{
		return;
	}
	if (!func_311(iParam2))
	{
		return;
	}
	if (!func_348(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_333(int iParam0)
{
	if (!func_345(iParam0))
	{
		return;
	}
	iVar0 = func_346(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_334(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_335(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_353(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_336(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_337(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (func_336(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_354(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_355(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_356(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_357(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_358(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_359(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
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

bool func_339(int iParam0)
{
	iVar0 = func_338(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_340(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_360(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_341(int iParam0)
{
	if (!func_339(iParam0))
	{
		return;
	}
	iVar0 = func_338(iParam0, 1);
	if (!func_361(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_362(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_363(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_342(int iParam0)
{
	iVar0 = func_343(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_343(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_344(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_364();
			break;
		case -2103256604:
			func_365();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_366(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_366(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_366(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_37(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_366(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_368(func_367(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_369();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_361(17);
			break;
		case -824728332:
			func_361(16);
			break;
	}
}

bool func_345(int iParam0)
{
	iVar0 = func_346(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_347(int iParam0)
{
	iVar0 = func_370(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_317(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_371(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_372(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_348(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_349(int iParam0)
{
	if (!func_339(iParam0))
	{
		return;
	}
	iVar0 = func_338(iParam0, 1);
	if (!func_361(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_362(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_363(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_350(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_373(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_351(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_364();
			break;
		case -2103256604:
			func_365();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_366(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_366(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_366(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_37(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_366(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_367(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_374(iParam0, 0));
			func_375(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_374(iParam0, 1));
			func_375(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_374(iParam0, 2));
			func_375(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_374(iParam0, 3));
			func_375(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_367(iParam0);
			func_375(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_367(iParam0);
			func_375(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_376();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_361(17);
			break;
		case -824728332:
			func_361(16);
			break;
	}
}

void func_352(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_377(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_378(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_353(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_308(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_354(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_355(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_356(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_357(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_358(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_359(int iParam0)
{
	iVar0 = func_299(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_360(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_379(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_361(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_362(int iParam0)
{
	iVar0 = func_363(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_363(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
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

void func_364()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_198((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_365()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_366(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_368(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_369()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_370(int iParam0)
{
	if (!func_345(iParam0))
	{
		return -1;
	}
	iVar0 = func_346(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_371(int iParam0, int iParam1)
{
	if (!func_325(iParam0))
	{
		return false;
	}
	iVar0 = func_317(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_327(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_346(iVar2, 1)];
		Var4 = { func_372(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_380() && !func_381())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_380())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_324(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_324(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_324(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_382(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_383(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_324(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_372(int iParam0)
{
	iVar0 = func_317(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_373(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_379(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_374(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_376()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_378(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_379(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_384(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_380()
{
	return Global_1572887->f_6;
}

bool func_381()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_225(func_5(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_385(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_382(var uParam0)
{
	if (func_386(uParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) != 1)
		{
			func_387(uParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) == 1;
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_385(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_386(var uParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), uParam0))
	{
		return true;
	}
	return false;
}

void func_387(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_388(uParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_389(iVar0);
	_0x51951de06c0d1c40(uParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_388(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_389(iVar0);
	_0x51951de06c0d1c40(uParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_389(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

