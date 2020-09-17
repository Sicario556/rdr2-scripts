void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_213 = 1;
	iLocal_352 = 1;
	iLocal_353 = 1;
	fLocal_658 = 0f;
	fLocal_713 = 0f;
	iLocal_745 = -1;
	fLocal_761 = 0f;
	bVar0 = false;
	if (has_force_cleanup_occurred(523))
	{
		bVar0 = true;
	}
	else
	{
		func_1(&Local_14, 1);
		func_2(&Local_14, &uScriptParam_0);
		func_3();
		func_4();
		func_5(&uLocal_268);
		func_6(&uLocal_268, 96, 0);
		func_6(&uLocal_268, 97, 1);
	}
	while (true)
	{
		if (bVar0)
		{
			func_8(bVar0, 831, 0);
			wait(0);
		}
		else
		{
			switch (iLocal_213)
			{
				case 1:
					if (func_9(&Local_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_14, &Local_211, &(Local_211.f_1));
						if (!func_11(&Local_211, &Local_216, &Local_251))
						{
							func_7();
						}
						if (!func_12())
						{
							func_7();
						}
						func_13(0);
						func_14();
						func_15();
						iLocal_213 = 0;
					}
					else if (Local_14.f_160)
					{
						func_7();
					}
					break;
				case 0:
					if (func_16())
					{
						iLocal_213 = 3;
					}
					break;
				case 3:
					if (func_17())
					{
						func_18();
						set_ped_path_prefer_to_avoid_water(iVar282, true, 1f);
						iLocal_702 = _create_volume_cylinder(0f, 0f, 0f, 0f, 0f, 0f, 5.5f, 5.5f, 1f);
						iLocal_826 = _create_volume_sphere(func_19(&Local_14), 0f, 0f, 0f, 80f, 80f, 80f);
						_0x7c00cfc48a782dc0(iVar700, iVar282, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						func_20(&uLocal_827, 665633627, func_19(&Local_14), 0f, 0f, 0f, 5f, 5f, 5f);
						_0xb56d41a694e42e86(iVar825, 4064, 0, 0, -1, -1, 0);
						func_22(iVar282, func_21(&Local_216, 1, 0));
						func_23(&(Local_14.f_5), iVar282, Local_287.f_11, 0);
						if (!is_entity_dead(iVar282))
						{
							set_ped_combat_attributes(iVar282, 30, true);
						}
						iLocal_213 = 4;
					}
					break;
				case 4:
					if (!is_entity_dead(iVar282))
					{
						func_24(Global_35, get_entity_coords(iVar282, true, false), &uLocal_208, 1061158912, 0, 0);
					}
					if (func_25())
					{
						func_7();
					}
					break;
			}
			func_26(&Local_14);
		}
	}
	func_7();
}

void func_1(var uParam0, bool bParam1)
{
	func_27(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_28("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_3 = func_29(uParam1);
	uParam0->f_161 = func_30(uParam1->f_2, 2);
}

void func_3()
{
	func_31(&Local_369, "", "", "");
	Local_369.f_73 = "RE_INTER_STRANGER";
	Local_369.f_74 = (28f + 15f);
	iLocal_726 = func_32(3, 0, 0);
	func_33(&Local_369, 2, 1);
}

void func_4()
{
	func_34(&uLocal_626);
	func_35(&(Local_14.f_5), 0);
	func_36(&(Local_14.f_5), 1);
	func_37(&(Local_14.f_5), 1);
	func_38(&(Local_14.f_5), 1);
	func_39(&(Local_14.f_5), 0);
}

void func_5(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_6(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	if (!bParam2)
	{
		set_bit((*uParam0)[iVar0], iVar1);
	}
	else
	{
		clear_bit((*uParam0)[iVar0], iVar1);
	}
}

void func_7()
{
	iVar1[0] = iVar282;
	uVar3[0] = uVar283;
	func_40();
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (does_entity_exist(&(iLocal_661[iVar0])))
		{
			set_object_as_no_longer_needed(iLocal_661[iVar0]);
		}
		iVar0++;
	}
	set_player_control(player_id(), true, 0, false);
	func_41();
	func_13(1);
	func_42(iVar700);
	func_43();
	func_44();
	func_45();
	func_46(0);
	func_47();
	func_42(iVar825);
	if (_does_propset_exist(Local_216.f_12))
	{
		_set_propset_as_no_longer_needed(Local_216.f_12);
	}
	if (_does_propset_exist(Local_251.f_16))
	{
		_set_propset_as_no_longer_needed(Local_251.f_16);
	}
	func_42(iVar824);
	if (_does_volume_exist(iVar696))
	{
		_0xa1cfb35069d23c23(iVar696);
		_0x74c2b3dc0b294102(iVar696);
		_delete_volume(iVar696);
	}
	func_49(&Local_216, Local_14.f_44, (func_48(19) || func_48(20)), (Local_14.f_46 || func_48(31)), (is_entity_dead(iVar282) && Local_14.f_46));
	if (func_48(5))
	{
		Local_14.f_44 = 1;
	}
	if (!is_entity_dead(iVar282))
	{
		func_50(iVar282);
		set_ped_combat_attributes(iVar282, 30, false);
		if (Local_14.f_46)
		{
			set_ped_relationship_group_hash(iVar282, 1269650476);
			set_ped_relationship_group_default_hash(iVar282, 1269650476);
			_0x24c82ef607105faa(iVar282, -920810745);
			set_ped_config_flag(iVar282, 35, true);
		}
		else if (!is_ped_dead_or_dying(Local_287.f_11, true))
		{
			if (func_51(iVar282, Local_287.f_11, 20f, 1))
			{
				open_sequence_task(&iVar5);
				task_mount_animal(0, Local_287.f_11, 20000, -1, 1073741824, 1, 0, 0);
				_task_move_in_traffic(0, -1082130432, 0, 0);
				func_52(iVar282, &iVar5, 0, 0, 1, 1);
				Local_14.f_50 = 1;
			}
		}
	}
	func_53(&Local_14, &iVar1, &uVar3, Local_216.f_2, Local_211, Local_211.f_1, 1, 1, 0, 1);
	if (!Local_14.f_50)
	{
		if (!is_entity_dead(iVar282))
		{
			func_54(&uLocal_284, &Local_369, &(Local_369.f_21), 1, 1);
			_0x24c82ef607105faa(iVar282, -920810745);
		}
	}
	if (bVar745)
	{
		func_55(536870912, 1, 0, 1);
	}
	func_56(1);
	if (does_entity_exist(iVar694))
	{
		func_57(iVar694, 1, 1);
		if (!bVar356)
		{
			delete_object(&iLocal_696);
		}
		else
		{
			set_object_as_no_longer_needed(&iLocal_696);
		}
	}
	func_58();
}

void func_8(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_59(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_9(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_60(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_61(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_62(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_63(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_64(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_10(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 3:
			*iParam1 = 1;
			*uParam2 = 2;
			break;
		case 4:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 3;
			break;
		case 8:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 9:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 10:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 11:
			*iParam1 = 13;
			*uParam2 = 0;
			break;
		case 12:
			*iParam1 = 14;
			*uParam2 = 0;
			break;
		case 13:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

bool func_11(int iParam0, int iParam1, int iParam2)
{
	switch (func_65(*iParam0))
	{
		case 3:
			*iParam1 = 1;
			break;
		default:
			*iParam1 = 0;
			break;
	}
	switch (*iParam0)
	{
		case 0:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 5;
					break;
				case 1:
					iParam1->f_4 = 15;
					break;
				default:
					return false;
			}
			break;
		case 1:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 12;
					break;
				case 1:
					iParam1->f_4 = 13;
					break;
				case 2:
					iParam1->f_4 = 14;
					break;
				default:
					return false;
			}
			break;
		case 9:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 0;
					break;
				case 1:
					iParam1->f_4 = 6;
					break;
				case 2:
					iParam1->f_4 = 7;
					break;
				case 3:
					iParam1->f_4 = 9;
					break;
				default:
					return false;
			}
			break;
		case 11:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 1;
					break;
				case 1:
					iParam1->f_4 = 4;
					break;
				case 2:
					iParam1->f_4 = 10;
					break;
				case 3:
					iParam1->f_4 = 11;
					break;
				default:
					return false;
			}
			break;
		case 13:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 16;
					break;
				default:
					return false;
			}
			break;
		case 14:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 17;
					break;
				default:
					return false;
			}
			break;
		case 15:
			switch (iParam0->f_1)
			{
				case 0:
					iParam1->f_4 = 18;
					break;
				default:
					return false;
			}
			break;
	}
	iParam1->f_5 = (func_66(iParam1->f_4) - 1);
	iParam1->f_3 = 0;
	iVar4 = func_67(*iParam1);
	iVar5 = 0;
	if (func_68(*iParam1) && func_69())
	{
		iParam1->f_2 = 0;
		iParam1->f_1 = 0;
	}
	else
	{
		if (!func_30(iVar4, 1))
		{
			iVar5 = 0;
		}
		else if (!func_30(iVar4, 2))
		{
			iVar5 = 1;
		}
		else
		{
			iVar5 = 2;
		}
		if (iVar5 >= 3)
		{
			iParam1->f_2 = 3;
		}
		else
		{
			iParam1->f_2 = iVar5 + 1;
		}
		if (func_30(iVar4, 4))
		{
			iParam1->f_1 = 1;
		}
		else
		{
			iParam1->f_1 = 2;
		}
	}
	if (func_30(iVar4, 8))
	{
		iParam1->f_10 = 1;
	}
	iVar0 = 0;
	while (iVar0 < func_66(iParam1->f_4))
	{
		vVar1 = { vVar1 + func_70(iParam1->f_4, iVar0) };
		iVar0++;
	}
	vVar1 = { vVar1 / FtoV(to_float(func_66(iParam1->f_4))) };
	iParam1->f_7 = { vVar1 };
	iParam1->f_6 = func_71(iParam0);
	switch (*iParam0)
	{
		case 0:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 7;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 1:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 3;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 1:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 4;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 2:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 5;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 9:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 8;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 1:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 1;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 2:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 10;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 3:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 9;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 11:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 0;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 2:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 11;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
				case 3:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 12;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 13:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 14;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 14:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 15;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
		case 15:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam2 = 1;
					iParam2->f_5 = 0;
					iParam2->f_2 = 16;
					iParam2->f_1 = 0;
					iParam2->f_6 = func_72(iParam0);
					break;
			}
			break;
	}
	vVar1 = { 0f, 0f, 0f };
	if (*iParam2 != 0)
	{
		if (*iParam2 == 1)
		{
			iVar0 = 0;
			while (iVar0 < func_73(iParam2->f_2))
			{
				vVar1 = { vVar1 + func_74(iParam2->f_2, iVar0) };
				iVar0++;
			}
			vVar1 = { vVar1 / FtoV(to_float(func_73(iParam2->f_2))) };
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < func_66(iParam2->f_3))
			{
				vVar1 = { vVar1 + func_70(iParam2->f_3, iVar0) };
				iVar0++;
			}
			vVar1 = { vVar1 / FtoV(to_float(func_66(iParam2->f_3))) };
		}
		iParam2->f_8 = { vVar1 };
	}
	return true;
}

bool func_12()
{
	if (func_75(Local_216))
	{
		return false;
	}
	return true;
}

void func_13(bool bParam0)
{
	if (func_76())
	{
		set_random_trains(bParam0);
	}
}

void func_14()
{
	if (func_77(Local_211))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			Var1 = { func_79(func_78(Local_211), iVar0) };
			if (!func_80(Var1) && Var1.f_3 > 0f)
			{
				func_81(uLocal_678[iVar0], Var1, Var1.f_3, 0, 1);
			}
			iVar0++;
		}
	}
}

void func_15()
{
	switch (Local_211)
	{
		case 0:
			if (Local_211.f_1 == 0)
			{
				iLocal_695 = _create_volume_box(1589.431f, -746.281f, 39.975f, 0f, 0f, -43.318f, 70.324f, 152.556f, 4.11f);
				_0x19c7567d2f2287d6(iVar693, 7);
				_0x18262cafebb5fbe1(iVar693, 0, 0, 0, -1, -1, 0);
				_0x2fcd528a397e5c88(iVar693, 1048576);
				_0xc1799fafd2fdf52b(iVar693, 0, 0, 0);
				func_82(42);
			}
			break;
	}
}

bool func_16()
{
	switch (iLocal_214)
	{
		case 0:
			if (func_83(&Local_14))
			{
				func_84(&Local_216, &Local_287);
				func_85(Local_216.f_4);
				if (Local_251.f_2 != -1)
				{
					func_86(Local_251.f_2);
				}
				if (Local_251.f_3 != -1)
				{
					func_85(Local_251.f_3);
				}
				request_model(-248746141, false);
				request_model(1071795929, false);
				request_model(1077976463, false);
				func_87(iLocal_214);
				func_88();
				request_model(func_89(), false);
				if (Local_216.f_11 != 2)
				{
					_request_propset(Local_216.f_11);
				}
				if (Local_251.f_15 != 2)
				{
					_request_propset(Local_251.f_15);
				}
				iLocal_214 = 1;
			}
			break;
		case 1:
			if (!func_90(&Local_287))
			{
				return false;
			}
			if (!func_91(Local_216.f_4))
			{
				return false;
			}
			if (Local_251.f_2 != -1)
			{
				if (!func_92(Local_251.f_2))
				{
					return false;
				}
			}
			if (Local_251.f_3 != -1)
			{
				if (!func_91(Local_251.f_3))
				{
					return false;
				}
			}
			if (!has_model_loaded(-248746141) || !has_model_loaded(1071795929))
			{
				return false;
			}
			if (!func_87(iLocal_214))
			{
				return false;
			}
			if (!func_93())
			{
				return false;
			}
			if (!has_model_loaded(func_89()))
			{
				return false;
			}
			if (!has_model_loaded(1077976463))
			{
				return false;
			}
			if (Local_216.f_11 != 2)
			{
				if (!_has_propset_loaded(Local_216.f_11))
				{
					return false;
				}
			}
			if (Local_251.f_15 != 2)
			{
				if (!_has_propset_loaded(Local_251.f_15))
				{
					return false;
				}
			}
			if (!_0x6bfbdc46139c45ab(func_19(&Local_14)))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_17()
{
	switch (iLocal_215)
	{
		case 0:
			if (Local_216.f_11 != 2)
			{
				Local_216.f_12 = _create_propset(Local_216.f_11, Local_216.f_13, 1, Local_216.f_13.f_3, 1200f, false, true);
			}
			if (Local_251.f_15 != 2)
			{
				Local_251.f_16 = _create_propset(Local_251.f_15, Local_251.f_11, 1, Local_251.f_11.f_3, 1200f, false, true);
			}
			iLocal_286 = create_object(1077976463, func_19(&Local_14), false, true, false, false, true);
			if (does_entity_exist(iVar284))
			{
				set_entity_visible(iVar284, false);
				set_entity_collision(iVar284, false, false);
			}
			iLocal_215 = 3;
			break;
		case 3:
			if (!_does_propset_exist(Local_251.f_16) || _0xf42db680a8b2a4d9(Local_251.f_16))
			{
				func_94(Local_216.f_4, &uLocal_496);
				func_95(Local_251.f_3, Local_251.f_4, &uLocal_513);
				func_96();
				iLocal_696 = create_object(func_89(), func_19(&Local_14), true, true, false, false, true);
				if (does_entity_exist(iVar694))
				{
					set_entity_visible(iVar694, false);
				}
				iVar0 = 0;
				while (iVar0 < iVar494)
				{
					if (does_entity_exist(&(uLocal_496[iVar0])))
					{
						freeze_entity_position(&(uLocal_496[iVar0]), true);
						set_object_targettable(&(uLocal_496[iVar0]), false);
						set_random_seed((iVar0 * get_game_timer()));
						set_entity_heading(&(uLocal_496[iVar0]), get_random_float_in_range(0f, 360f));
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < iVar511)
				{
					if (does_entity_exist(&(uLocal_513[iVar0])))
					{
						set_object_targettable(&(uLocal_513[iVar0]), false);
					}
					iVar0++;
				}
				iLocal_215 = 2;
			}
			break;
		case 2:
			if (func_98(&Local_287, &uLocal_284, func_19(&Local_14), func_97(&Local_14), 0, 1))
			{
				func_99();
				func_100(&Local_216, &uLocal_284);
				iLocal_215 = 1;
			}
			break;
		case 1:
			return true;
	}
	return false;
}

void func_18()
{
	if (!func_101(iVar695, 1, 1))
	{
		iLocal_697 = func_102(iVar282, _create_volume_cylinder(0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 3f), 1173);
	}
}

Vector3 func_19(var uParam0)
{
	return uParam0->f_51;
}

void func_20(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	func_42(*uParam0);
	*uParam0 = _create_volume_by_hash(iParam1, vParam2, vParam5, vParam8);
	_0xb56d41a694e42e86(*uParam0, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(*uParam0, 0, 0, 0, -1, -1, 0);
}

char* func_21(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 500;
	switch (iParam0->f_2)
	{
		case 2:
			iVar0 = 1000;
			break;
		case 3:
			iVar0 = 1500;
			break;
	}
	return func_103(bParam1, (iVar0 * 2 + func_103(bParam2, iVar0, 0)), iVar0);
}

void func_22(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		func_104(iParam0, iParam1);
	}
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_105(uParam0, iParam1, iParam3);
	func_106(uParam0, iParam2, iParam3);
}

void func_24(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_107(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_108(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_109();
			iParam4->f_2 = func_110(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_108(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_109();
		iParam4->f_2 = func_110(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_25()
{
	uVar0[0] = uVar282;
	if (func_111())
	{
		return true;
	}
	else
	{
		func_112();
		if (!func_48(37) && !Local_14.f_46)
		{
			if (func_113())
			{
				func_114(3, func_48(18), 0);
				func_82(37);
			}
		}
	}
	if (!func_115(&Local_14, &uVar0, Local_216.f_2, 0, 1, 0, 1, 0))
	{
		return true;
	}
	if (func_116(&Local_14, &uVar0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_26(var uParam0)
{
	wait(uParam0->f_158);
}

void func_27(int iParam0)
{
	func_36(iParam0, 0);
	func_38(iParam0, 0);
	func_35(iParam0, 1);
	func_37(iParam0, 1);
	func_117(iParam0, 0);
	func_118(iParam0, 1);
	func_119(iParam0, 1, 1, 1);
}

var func_28(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_120(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_121(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_120(sVar0, iParam1, 0, 0, 1, 1);
}

var func_29(var uParam0)
{
	return *uParam0;
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_31(int iParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	func_122(&(iParam0->f_21), cParam1, sParam2, sParam3, 0);
}

int func_32(int iParam0, int iParam1, int iParam2)
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

void func_33(int iParam0, int iParam1, bool bParam2)
{
	func_123(iParam0->f_21[iParam1], bParam2);
}

void func_34(int iParam0)
{
	func_124(iParam0, 1);
	func_125(iParam0, 1);
	func_126(iParam0, 1);
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(&(uParam0->f_1), 256);
	}
	else
	{
		func_128(&(uParam0->f_1), 256);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(&(uParam0->f_1), 16384);
	}
	else
	{
		func_128(&(uParam0->f_1), 16384);
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 16);
	}
	else
	{
		func_127(iParam0, 67108864);
		func_127(iParam0, 16);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(&(uParam0->f_1), 2048);
	}
	else
	{
		func_128(&(uParam0->f_1), 2048);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(&(uParam0->f_1), 16);
	}
	else
	{
		func_128(&(uParam0->f_1), 16);
	}
}

void func_40()
{
	if (func_48(4))
	{
		stop_audio_scene("RE_Sharpshooter_Approach_Blip_Scene");
		func_129(4);
	}
}

void func_41()
{
	if (func_101(iVar695, 1, 1))
	{
		func_130(&iLocal_697, 1);
	}
}

void func_42(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_43()
{
	if (func_48(43))
	{
		_0x9c113883487fd53c(-789269373, 0);
		func_129(43);
	}
}

void func_44()
{
	if (_does_volume_exist(iVar693))
	{
		if (func_48(42))
		{
			_0xd17672447692478e(iVar693, 0);
		}
		_0x2c87c3e1c7b96ee2(iVar693);
		_0xa1cfb35069d23c23(iVar693);
		_delete_volume(iVar693);
	}
}

void func_45()
{
	if (func_77(Local_211))
	{
		func_131(&uLocal_678, 1);
	}
}

void func_46(int iParam0)
{
	if (!is_entity_dead(iVar281))
	{
		if (iParam0 == 1)
		{
			if (!bVar722)
			{
				func_132(0);
				func_133(iVar694);
				task_clear_look_at(Global_35);
				_0xaac0ee3b4999abb5(Global_35, 0);
				set_ped_can_be_targetted(iVar281, false);
				if (func_30(iVar723, 16))
				{
					func_127(&iLocal_726, 16);
					func_134(&Local_369, 0);
					iLocal_354 = 1;
				}
				else
				{
					iLocal_354 = 0;
				}
				func_82(46);
				func_54(&uLocal_284, &Local_369, &(Local_369.f_21), 0, 0);
				set_ped_config_flag(iVar281, 301, true);
				iLocal_725 = 1;
				iLocal_829 = 1;
			}
		}
		else if (bVar722)
		{
			func_132(1);
			func_135(iVar694);
			set_ped_can_be_targetted(iVar281, true);
			set_ped_config_flag(iVar281, 301, false);
			if (bVar351)
			{
				iLocal_726 = iVar723 | 16;
				func_134(&Local_369, 0);
				iLocal_354 = 0;
			}
			func_129(46);
			iLocal_725 = 0;
			iLocal_829 = 0;
		}
	}
}

void func_47()
{
	if (bVar757)
	{
		_display_hud_component(-66088566);
		_databinding_remove_data_entry(uVar740);
		iLocal_759 = 0;
	}
}

bool func_48(int iParam0)
{
	iVar0 = (iParam0 / 32);
	if (iVar0 == 0)
	{
		return is_bit_set(iVar316, iParam0);
	}
	return is_bit_set(iVar317, (iParam0 - (32 * iVar0)));
}

void func_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = *iParam0;
	iVar1 = func_67(iVar0);
	if (bParam1)
	{
		switch (iParam0->f_2)
		{
			case 0:
			case 1:
				func_128(&iVar1, 1);
				break;
			case 2:
				func_128(&iVar1, 2);
				break;
		}
		if (!bParam3 && !bParam4)
		{
			if (bParam2)
			{
				func_128(&iVar1, 4);
			}
			else
			{
				func_127(&iVar1, 4);
			}
		}
		else
		{
			func_127(&iVar1, 4);
		}
		if (!func_69())
		{
			func_127(&iVar1, 64);
		}
		else
		{
			func_128(&iVar1, 64);
		}
	}
	if (bParam4)
	{
		if (!func_30(iVar1, 16))
		{
			func_128(&iVar1, 16);
		}
		else
		{
			func_128(&iVar1, 32);
		}
	}
	if (bParam3)
	{
		func_128(&iVar1, 8);
	}
	else
	{
		func_127(&iVar1, 8);
	}
	func_136(iVar0, iVar1, 1);
}

void func_50(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

bool func_51(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_53(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_137(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_138(uParam0->f_3, 524288);
		}
	}
	if (func_139(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_139(iParam1[iVar0], 0, 0))
			{
				func_140(iParam1[iVar0], bVar3);
				if (func_141(uParam0, (*iParam1)[iVar0]))
				{
					func_142((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_139(iParam1[iVar0], 0, 1))
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
							func_143(iParam1[iVar0], 1073741824, func_107(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_144(uParam0);
	}
	func_145(uParam0);
	if (!uParam0->f_186)
	{
		func_146(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_147(uParam0->f_3, uParam0->f_185);
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
		func_148(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_54(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_149(uParam0);
		func_150(iParam1, uParam2);
	}
	func_151(*uParam0, 1, bParam4);
}

void func_55(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_152(Global_1310750[iVar0], iParam0))
		{
			if (!func_153(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_154(iVar0) < func_155(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_156(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_56(bool bParam0)
{
	if (bVar743 != bParam0)
	{
		bLocal_746 = bParam0;
		if (bVar743)
		{
			func_157(0, 0, 1103626240);
		}
		else
		{
			func_158(-1015925347, 0, 0, 1103626240);
		}
	}
}

void func_57(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_58()
{
	terminate_this_thread();
}

bool func_59(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_159(iVar0))
	{
		return false;
	}
	if (func_160(iVar0, 1) || func_160(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_60(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_161(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_162(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_163(iParam0, 128))
			{
				if (!func_164(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_165(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_166(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_80(*uParam1))
				{
					return func_167(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_168(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_30(Param4.f_2, 8))
				{
					func_162(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_169(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_170(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_171(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_163(iParam0, 128))
			{
				if (!func_172(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_167(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_165(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_169(uParam1))
					{
						return func_167(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_173(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_162(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_167(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_28("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_61(var uParam0, int iParam1)
{
	if (func_62(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_175(iParam1, func_174(uParam0), &(uParam0->f_172)))
		{
			if (func_139(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_62(int iParam0, int iParam1)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_63(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_177(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_62(uParam0->f_3, 1) && !func_62(uParam0->f_3, 32))
	{
		func_177(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_62(uParam0->f_3, 2) && !func_62(uParam0->f_3, 32))
	{
		func_177(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_178(uParam0->f_171, 1);
	}
	if (func_62(uParam0->f_3, 1))
	{
		func_177(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_179(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_64(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 8;
		case 2:
			return 5;
		case 3:
			return 5;
		case 4:
			return 10;
		case 5:
			return 8;
		case 6:
			return 10;
		case 7:
			return 10;
		case 8:
			return 16;
		case 9:
			return 8;
		case 10:
			return 8;
		case 11:
			return 8;
		case 12:
			return 10;
		case 13:
			return 8;
		case 14:
			return 8;
		case 15:
			return 8;
		case 16:
			return 8;
		case 17:
			return 10;
		case 18:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_180(57, 0);
		case 1:
			return func_181(57, 0);
		default:
			break;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return !func_30(func_67(iParam0), 64);
}

bool func_69()
{
	if (func_182() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

Vector3 func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 961.3426f, 973.0797f, 142.3945f;
				case 1:
					return 962.0516f, 976.4733f, 142.5417f;
				case 2:
					return 960.5291f, 970.7018f, 142.2617f;
				case 3:
					return 961.8122f, 974.8056f, 142.478f;
				case 4:
					return 966.2589f, 980.1151f, 147.337f;
				case 5:
					return 966.4785f, 981.5573f, 147.504f;
				case 6:
					return 966.3876f, 982.7836f, 147.4312f;
				case 7:
					return 965.9129f, 978.3119f, 147.0292f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1735.539f, -1674.199f, 49.8316f;
				case 1:
					return 1737.481f, -1674.52f, 48.7188f;
				case 2:
					return 1736.894f, -1674.769f, 49.7508f;
				case 3:
					return 1734.49f, -1673.821f, 49.904f;
				case 4:
					return 1735.658f, -1673.877f, 48.4172f;
				case 5:
					return 1739.653f, -1675.346f, 47.9656f;
				case 6:
					return 1733.815f, -1673.15f, 48.5312f;
				case 7:
					return 1739.164f, -1675.535f, 49.6097f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1555.245f, -773.7047f, 49.5066f;
				case 1:
					return 1553.993f, -772.9725f, 49.5616f;
				case 2:
					return 1552.798f, -772.2322f, 49.6152f;
				case 3:
					return 1551.206f, -771.2369f, 49.7037f;
				case 4:
					return 1549.976f, -770.4631f, 49.7587f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1143.453f, 456.8282f, 97.2893f;
				case 1:
					return 1146.165f, 463.8518f, 97.1754f;
				case 2:
					return 1145.816f, 466.0646f, 97.42f;
				case 3:
					return 1145.161f, 464.8925f, 97.335f;
				case 4:
					return 1142.818f, 467.7421f, 97.78f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1197.809f, -598.4315f, 67.6911f;
				case 1:
					return 1197.09f, -598.5469f, 67.7073f;
				case 2:
					return 1191.072f, -602.8099f, 68.6533f;
				case 3:
					return 1190.21f, -602.7187f, 68.8021f;
				case 4:
					return 1186.085f, -603.0203f, 70.324f;
				case 5:
					return 1184.732f, -601.7173f, 70.3911f;
				case 6:
					return 1182.614f, -599.8444f, 69.62f;
				case 7:
					return 1181.211f, -599.9592f, 70.4532f;
				case 8:
					return 1184.738f, -594.403f, 67.914f;
				case 9:
					return 1184.658f, -593.0591f, 67.7766f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1585.938f, -728.9456f, 42.405f;
				case 1:
					return 1584.849f, -727.246f, 42.8343f;
				case 2:
					return 1582.209f, -730.9679f, 43.1883f;
				case 3:
					return 1584.59f, -731.832f, 42.373f;
				case 4:
					return 1585.068f, -729.0764f, 41.9431f;
				case 5:
					return 1585.748f, -732.54f, 42.381f;
				case 6:
					return 1586.469f, -733.8063f, 43.1411f;
				case 7:
					return 1587.804f, -732.0402f, 41.9563f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 164.072f, 159.6917f, 110.1541f;
				case 1:
					return 164.6646f, 160.397f, 110.1473f;
				case 2:
					return 165.0855f, 161.1316f, 110.1474f;
				case 3:
					return 162.5509f, 159.1999f, 110.1645f;
				case 4:
					return 161.1438f, 168.416f, 111.4745f;
				case 5:
					return 161.8646f, 166.5629f, 111.456f;
				case 6:
					return 164.4269f, 162.9773f, 110.202f;
				case 7:
					return 159.754f, 171.1735f, 111.5181f;
				case 8:
					return 154.3814f, 159.0909f, 111.485f;
				case 9:
					return 155.1351f, 160.2317f, 111.5715f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1194.986f, 556.4706f, 90.1665f;
				case 1:
					return 1196.52f, 553.8795f, 89.9362f;
				case 2:
					return 1195.536f, 556.0551f, 90.005f;
				case 3:
					return 1194.346f, 556.6135f, 90.3445f;
				case 4:
					return 1193.17f, 557.9703f, 90.7743f;
				case 5:
					return 1193.658f, 557.5018f, 90.661f;
				case 6:
					return 1193.857f, 556.347f, 91.1f;
				case 7:
					return 1192.949f, 557.2336f, 91.3549f;
				case 8:
					return 1193.209f, 556.5893f, 91.2765f;
				case 9:
					return 1196.135f, 554.7477f, 90.0806f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1140.361f, 514.9968f, 96.9962f;
				case 1:
					return 1142.867f, 520.2599f, 96.8994f;
				case 2:
					return 2152.7f, -1267.8f, 42.4f;
				case 3:
					return 2143.316f, -1264.695f, 42.4f;
				case 4:
					return 2462.715f, -825.769f, 42.579f;
				case 5:
					return 2458.198f, -828.2662f, 42.579f;
				case 6:
					return 2147.288f, -1267.923f, 46.3931f;
				case 7:
					return 159.5884f, 163.6554f, 111.4591f;
				case 8:
					return 148.5821f, 171.6021f, 117.7667f;
				case 9:
					return -66.7864f, -311.3951f, 92.1181f;
				case 10:
					return -72.9455f, -308.6185f, 90.9511f;
				case 11:
					return 1192.011f, -604.1589f, 69.1095f;
				case 12:
					return 1179.755f, -596.6956f, 69.6985f;
				case 13:
					return 959.1976f, -1032.972f, 59.8147f;
				case 14:
					return 1445.931f, -1944.696f, 53.9763f;
				case 15:
					return -1700.339f, 99.2513f, 146.8558f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -70.9791f, -312.3219f, 92.0686f;
				case 1:
					return -73.24f, -310.126f, 91.8354f;
				case 2:
					return -73.5528f, -309.9406f, 91.835f;
				case 3:
					return -76.5834f, -308.5314f, 91.8351f;
				case 4:
					return -70.1357f, -311.5584f, 92.503f;
				case 5:
					return -70.1838f, -311.8971f, 93.718f;
				case 6:
					return -73.684f, -310.2793f, 93.699f;
				case 7:
					return -76.8147f, -308.8223f, 93.686f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 959.943f, -1034.313f, 60.895f;
				case 1:
					return 959.554f, -1034.547f, 60.304f;
				case 2:
					return 958.4108f, -1034.887f, 60.17f;
				case 3:
					return 957.4285f, -1035.107f, 60.64f;
				case 4:
					return 957.9829f, -1034.995f, 60.116f;
				case 5:
					return 958.9362f, -1034.722f, 60.2447f;
				case 6:
					return 952.4913f, -1036.831f, 60.08f;
				case 7:
					return 955.0111f, -1035.38f, 60.208f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1442.924f, -1938.785f, 53.3596f;
				case 1:
					return 1442.589f, -1939.829f, 53.1599f;
				case 2:
					return 1445.223f, -1937.841f, 53.6741f;
				case 3:
					return 1445.455f, -1939.395f, 53.7039f;
				case 4:
					return 1442.68f, -1940.807f, 52.8759f;
				case 5:
					return 1442.95f, -1941.722f, 52.5596f;
				case 6:
					return 1442.428f, -1942.799f, 52.4335f;
				case 7:
					return 1445.335f, -1938.648f, 53.7329f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1150.452f, 145.475f, 49.2606f;
				case 1:
					return -1150.004f, 144.9716f, 49.249f;
				case 2:
					return -1149.689f, 144.512f, 49.197f;
				case 3:
					return -1149.326f, 144.1021f, 49.1632f;
				case 4:
					return -1148.923f, 143.4733f, 49.083f;
				case 5:
					return -1148.131f, 142.778f, 49.022f;
				case 6:
					return -1147.445f, 140.8754f, 48.853f;
				case 7:
					return -1147.858f, 141.881f, 48.939f;
				case 8:
					return -1147.006f, 140.0869f, 48.753f;
				case 9:
					return -1146.347f, 139.1417f, 48.641f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1694.026f, 92.0315f, 149.164f;
				case 1:
					return -1693.702f, 93.4133f, 149.162f;
				case 2:
					return -1692.627f, 94.9403f, 149.2129f;
				case 3:
					return -1693.351f, 94.8092f, 149.315f;
				case 4:
					return -1693.909f, 92.5829f, 149.051f;
				case 5:
					return -1704.608f, 102.1135f, 153.3676f;
				case 6:
					return -1702.148f, 103.264f, 152.5642f;
				case 7:
					return -1702.852f, 102.6664f, 152.72f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -2177.448f, -74.3747f, 243.9227f;
				case 1:
					return -2177.37f, -75.1508f, 244.0162f;
				case 2:
					return -2177.396f, -75.9878f, 244.1207f;
				case 3:
					return -2168.689f, -80.4527f, 239.9509f;
				case 4:
					return -2169.057f, -79.8509f, 239.941f;
				case 5:
					return -2169.376f, -79.1179f, 239.9004f;
				case 6:
					return -2170.211f, -76.8149f, 239.4663f;
				case 7:
					return -2169.856f, -77.4197f, 239.4081f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2150.543f, -1267.509f, 46.0604f;
				case 1:
					return 2148.639f, -1266.831f, 46.0581f;
				case 2:
					return 2146.922f, -1266.223f, 46.0579f;
				case 3:
					return 2144.965f, -1265.552f, 46.0579f;
				case 4:
					return 2151.166f, -1267.155f, 42.3485f;
				case 5:
					return 2149.554f, -1266.59f, 42.3485f;
				case 6:
					return 2148.1f, -1266.145f, 42.3485f;
				case 7:
					return 2146.049f, -1265.486f, 42.3485f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -5595.542f, -3545.294f, -20.3624f;
				case 1:
					return -5595.232f, -3546.348f, -20.4437f;
				case 2:
					return -5593.49f, -3548.157f, -20.574f;
				case 3:
					return -5593.932f, -3549.45f, -20.483f;
				case 4:
					return -5593.825f, -3550.463f, -20.465f;
				case 5:
					return -5590.18f, -3553.974f, -19.637f;
				case 6:
					return -5588.869f, -3554.951f, -19.6385f;
				case 7:
					return -5587.969f, -3557.66f, -20.4382f;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -4636.716f, -3341.605f, 26.6249f;
				case 1:
					return -4634.771f, -3341.881f, 25.6081f;
				case 2:
					return -4633.607f, -3341.687f, 25.3442f;
				case 3:
					return -4632.632f, -3340.364f, 25.5923f;
				case 4:
					return -4628.162f, -3338.807f, 25.688f;
				case 5:
					return -4627.156f, -3338.391f, 25.574f;
				case 6:
					return -4631.115f, -3339.9f, 24.278f;
				case 7:
					return -4629.718f, -3339.638f, 24.464f;
				case 8:
					return -4636.029f, -3344.186f, 21.869f;
				case 9:
					return -4635.326f, -3343.868f, 21.81f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -4034.508f, -3046.71f, -3.341f;
				case 1:
					return -4034.742f, -3047.937f, -3.0867f;
				case 2:
					return -4035.171f, -3049.08f, -3.0178f;
				case 3:
					return -4035.762f, -3050.237f, -3.0165f;
				case 4:
					return -4035.994f, -3051.794f, -2.9711f;
				case 5:
					return -4036.569f, -3053.317f, -2.942f;
				case 6:
					return -4037.502f, -3042.55f, -8.529f;
				case 7:
					return -4037.015f, -3043.198f, -8.53f;
				case 8:
					return -4039.113f, -3058.21f, -8.783f;
				case 9:
					return -4038.921f, -3059.736f, -8.3592f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_71(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam0->f_1)
			{
				case 0:
					return 0;
				case 1:
					return 12;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0->f_1)
			{
				case 0:
					return 9;
				case 1:
					return 10;
				case 2:
					return 11;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0->f_1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				case 2:
					return 7;
				case 3:
					return 8;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0->f_1)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0->f_1)
			{
				case 0:
					return 13;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0->f_1)
			{
				case 0:
					return 14;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0->f_1)
			{
				case 0:
					return 15;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_72(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam0->f_1)
			{
				case 0:
					return 10;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0->f_1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 4;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0->f_1)
			{
				case 0:
					return 5;
				case 1:
					return 1;
				case 2:
					return 7;
				case 3:
					return 6;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0->f_1)
			{
				case 0:
					return 0;
				case 2:
					return 8;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0->f_1)
			{
				case 0:
					return 11;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0->f_1)
			{
				case 0:
					return 12;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0->f_1)
			{
				case 0:
					return 13;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 8;
		case 2:
			return 16;
		case 3:
			return 8;
		case 4:
			return 8;
		case 5:
			return 8;
		case 6:
			return 8;
		case 7:
			return 8;
		case 8:
			return 8;
		case 9:
			return 8;
		case 10:
			return 8;
		case 11:
			return 8;
		case 12:
			return 8;
		case 13:
			return 8;
		case 14:
			return 8;
		case 15:
			return 8;
		case 16:
			return 8;
		default:
			break;
	}
	return 0;
}

Vector3 func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1821.413f, -1706.321f, 44.5569f;
				case 1:
					return 1825.825f, -1709.063f, 44.3716f;
				case 2:
					return 1822.48f, -1708.324f, 44.5648f;
				case 3:
					return 1824.934f, -1708.195f, 44.3364f;
				case 4:
					return 1823.402f, -1707.966f, 44.4408f;
				case 5:
					return 1823.901f, -1709.14f, 44.5174f;
				case 6:
					return 1824.141f, -1707.096f, 44.3241f;
				case 7:
					return 1822.76f, -1707.066f, 44.4387f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 296.845f, 34.8817f, 104.2144f;
				case 1:
					return 296.2379f, 34.3584f, 104.2004f;
				case 2:
					return 295.8701f, 33.6176f, 104.2035f;
				case 3:
					return 295.4246f, 32.9912f, 104.2009f;
				case 4:
					return 295.8256f, 35.6056f, 104.1516f;
				case 5:
					return 295.39f, 35.0193f, 104.1481f;
				case 6:
					return 294.8983f, 34.5599f, 104.1393f;
				case 7:
					return 294.3975f, 33.9802f, 104.1333f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1570.484f, -712.723f, 41.9619f;
				case 1:
					return 1720.535f, -1682.866f, 48.6731f;
				case 2:
					return 1196.262f, -567.1954f, 67.4062f;
				case 3:
					return 941.4688f, 1006.728f, 139.146f;
				case 4:
					return 169.8445f, 145.9725f, 106.3396f;
				case 5:
					return 1194.992f, 581.0009f, 87.0435f;
				case 6:
					return -60.8836f, -298.5937f, 94.9329f;
				case 7:
					return 938.9608f, -1011.904f, 56.1922f;
				case 8:
					return 1419.524f, -1953.22f, 51.657f;
				case 9:
					return -1164.018f, 135.3542f, 42.9875f;
				case 10:
					return -1674.266f, 94.2582f, 144.4834f;
				case 11:
					return -2160.144f, -64.3428f, 233.0596f;
				case 12:
					return 2134.429f, -1238.137f, 40.6216f;
				case 13:
					return -5618.245f, -3556.289f, -24.1459f;
				case 14:
					return -4615.008f, -3357.794f, 21.6008f;
				case 15:
					return -4050.832f, -3038.046f, -10.0354f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1272.235f, 100.7241f, 70.5548f;
				case 1:
					return -1271.918f, 99.4047f, 70.5382f;
				case 2:
					return -1271.705f, 98.1462f, 70.5254f;
				case 3:
					return -1271.372f, 96.9105f, 70.5131f;
				case 4:
					return -1274.296f, 99.8115f, 70.5661f;
				case 5:
					return -1274.082f, 98.6766f, 70.5591f;
				case 6:
					return -1273.705f, 97.5946f, 70.551f;
				case 7:
					return -1273.162f, 96.2751f, 70.5404f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1612.955f, 52.8068f, 125.7403f;
				case 1:
					return -1612.764f, 53.2837f, 125.6284f;
				case 2:
					return -1612.707f, 53.8474f, 125.5439f;
				case 3:
					return -1612.664f, 54.3958f, 125.4605f;
				case 4:
					return -1612.555f, 54.8942f, 125.3542f;
				case 5:
					return -1612.521f, 55.4776f, 125.2374f;
				case 6:
					return -1611.979f, 52.7352f, 125.4753f;
				case 7:
					return -1611.811f, 53.1513f, 125.3891f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2121.688f, 51.0508f, 297.4425f;
				case 1:
					return -2122.487f, 51.3034f, 297.344f;
				case 2:
					return -2123.288f, 51.7595f, 297.2441f;
				case 3:
					return -2124.129f, 52.2559f, 297.1192f;
				case 4:
					return -2121.191f, 52.2618f, 297.6748f;
				case 5:
					return -2121.873f, 52.8433f, 297.6363f;
				case 6:
					return -2122.544f, 53.3366f, 297.5887f;
				case 7:
					return -2123.347f, 53.7261f, 297.531f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2144.151f, -1271.429f, 40.6846f;
				case 1:
					return 2145.087f, -1271.678f, 40.6998f;
				case 2:
					return 2147.11f, -1271.756f, 40.705f;
				case 3:
					return 2148.301f, -1269.206f, 40.6522f;
				case 4:
					return 2149.025f, -1267.134f, 40.623f;
				case 5:
					return 2151.647f, -1270.301f, 40.6271f;
				case 6:
					return 2152.372f, -1268.267f, 40.6222f;
				case 7:
					return 2153.783f, -1267.604f, 40.6212f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1476.606f, -679.316f, 57.3761f;
				case 1:
					return 1476.465f, -679.8522f, 57.3028f;
				case 2:
					return 1476.384f, -680.363f, 57.2545f;
				case 3:
					return 1476.292f, -680.9708f, 57.1961f;
				case 4:
					return 1476.161f, -681.6336f, 57.1344f;
				case 5:
					return 1476.162f, -682.3774f, 57.047f;
				case 6:
					return 1475.67f, -678.8197f, 57.4562f;
				case 7:
					return 1475.444f, -679.2224f, 57.428f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1003.046f, 835.1656f, 120.2253f;
				case 1:
					return 1003.528f, 834.9911f, 120.1689f;
				case 2:
					return 1004.011f, 834.8238f, 120.1145f;
				case 3:
					return 1004.568f, 834.6741f, 120.0642f;
				case 4:
					return 1005.015f, 834.4962f, 120.0081f;
				case 5:
					return 1005.579f, 834.3781f, 119.9669f;
				case 6:
					return 1002.82f, 834.2963f, 119.9874f;
				case 7:
					return 1003.305f, 834.191f, 119.9502f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -32.8469f, -165.6074f, 104.856f;
				case 1:
					return -34.8432f, -164.8816f, 104.7515f;
				case 2:
					return -34.0447f, -164.801f, 104.827f;
				case 3:
					return -33.4027f, -164.7327f, 104.8777f;
				case 4:
					return -35.6202f, -166.2234f, 104.7248f;
				case 5:
					return -34.8593f, -166.0831f, 104.7863f;
				case 6:
					return -34.2355f, -166.1449f, 104.8334f;
				case 7:
					return -33.632f, -166.2537f, 104.8537f;
				default:
					break;
			}
			Jump @3765; //curOff = 2341
			switch (iParam1)
			{
				case 0:
					return 1330.361f, 617.3453f, 86.1125f;
				case 1:
					return 1330.266f, 617.8367f, 86.1259f;
				case 2:
					return 1330.071f, 618.3564f, 86.1419f;
				case 3:
					return 1329.862f, 618.8771f, 86.1583f;
				case 4:
					return 1329.691f, 619.382f, 86.1796f;
				case 5:
					return 1329.356f, 619.9786f, 86.2087f;
				case 6:
					return 1331.434f, 617.8888f, 86.1197f;
				case 7:
					return 1331.229f, 618.4361f, 86.1291f;
				default:
					break;
			}
			Jump @3765; //curOff = 2544
			switch (iParam1)
			{
				case 0:
					return 968.9486f, -912.0237f, 66.4486f;
				case 1:
					return 968.3457f, -911.9286f, 66.4212f;
				case 2:
					return 967.8159f, -911.7991f, 66.3966f;
				case 3:
					return 967.277f, -911.7564f, 66.3558f;
				case 4:
					return 966.6783f, -911.8475f, 66.2946f;
				case 5:
					return 965.9067f, -912.0966f, 66.1918f;
				case 6:
					return 968.822f, -910.5662f, 66.4661f;
				case 7:
					return 968.3057f, -910.4875f, 66.4361f;
				default:
					break;
			}
			Jump @3765; //curOff = 2747
			switch (iParam1)
			{
				case 0:
					return 1426.691f, -1810.432f, 57.7335f;
				case 1:
					return 1426.144f, -1809.973f, 57.8333f;
				case 2:
					return 1425.637f, -1809.56f, 57.9193f;
				case 3:
					return 1425.214f, -1809.084f, 58.0059f;
				case 4:
					return 1424.748f, -1808.568f, 58.0896f;
				case 5:
					return 1424.318f, -1808.096f, 58.1605f;
				case 6:
					return 1427.165f, -1809.014f, 57.8977f;
				case 7:
					return 1426.711f, -1808.496f, 57.9821f;
				default:
					break;
			}
			Jump @3765; //curOff = 2950
			switch (iParam1)
			{
				case 0:
					return 1186.542f, -582.2568f, 65.6648f;
				case 1:
					return 1186.364f, -583.7424f, 65.4463f;
				case 2:
					return 1186.284f, -585.2579f, 65.4494f;
				case 3:
					return 1186.881f, -586.8105f, 65.4627f;
				case 4:
					return 1187.588f, -589.3359f, 65.5292f;
				case 5:
					return 1189.437f, -591.1548f, 65.4653f;
				case 6:
					return 1192.456f, -592.3884f, 65.4655f;
				case 7:
					return 1195.58f, -590.5104f, 65.4654f;
				default:
					break;
			}
			Jump @3765; //curOff = 3153
			switch (iParam1)
			{
				case 0:
					return -5767.469f, -3598.24f, -24.7376f;
				case 1:
					return -5767.081f, -3599.237f, -24.931f;
				case 2:
					return -5766.696f, -3600.304f, -25.0462f;
				case 3:
					return -5766.381f, -3601.469f, -25.0967f;
				case 4:
					return -5768.499f, -3598.878f, -24.9217f;
				case 5:
					return -5768.24f, -3599.871f, -25.1109f;
				case 6:
					return -5768.146f, -3600.843f, -25.1345f;
				case 7:
					return -5768.023f, -3601.916f, -25.158f;
				default:
					break;
			}
			Jump @3765; //curOff = 3356
			switch (iParam1)
			{
				case 0:
					return -4513.161f, -3429.377f, 34.3538f;
				case 1:
					return -4512.566f, -3428.524f, 34.3356f;
				case 2:
					return -4512.158f, -3427.737f, 34.3191f;
				case 3:
					return -4511.839f, -3426.914f, 34.2935f;
				case 4:
					return -4511.764f, -3429.87f, 34.2358f;
				case 5:
					return -4511.247f, -3429.119f, 34.2188f;
				case 6:
					return -4510.914f, -3428.292f, 34.1994f;
				case 7:
					return -4510.618f, -3427.491f, 34.1829f;
				default:
					break;
			}
			Jump @3765; //curOff = 3559
			switch (iParam1)
			{
				case 0:
					return -4219.586f, -2984.071f, -0.1983f;
				case 1:
					return -4220.143f, -2984.903f, -0.15f;
				case 2:
					return -4220.599f, -2986.164f, -0.1759f;
				case 3:
					return -4220.462f, -2985.551f, -0.1448f;
				case 4:
					return -4220.994f, -2983.93f, -0.1091f;
				case 5:
					return -4221.097f, -2984.554f, -0.1076f;
				case 6:
					return -4221.384f, -2985.218f, -0.1105f;
				case 7:
					return -4221.66f, -2985.978f, -0.1429f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

bool func_75(int iParam0)
{
	return func_30(func_67(iParam0), 32);
}

bool func_76()
{
	switch (Local_211)
	{
		case 9:
			switch (Local_211.f_1)
			{
				case 3:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_77(struct<2> Param0)
{
	return func_78(Param0) != -1;
}

int func_78(struct<2> Param0)
{
	switch (Param0)
	{
		case 9:
			switch (Param0.f_1)
			{
				case 0:
					return 1;
				default:
					break;
			}
			break;
		case 11:
			switch (Param0.f_1)
			{
				case 1:
					return 3;
				case 3:
					return 4;
				default:
					break;
			}
			break;
	}
	return -1;
}

struct<4> func_79(int iParam0, int iParam1)
{
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1764.534f, -1685.833f, 62.9026f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 134.55f, 176.45f, 129.875f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { -1109.28f, 123.8863f, 64.548f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { -1721.075f, 77.75f, 165.475f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { -2156.85f, -125.25f, 242.575f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 1003.9f, 1015.825f, 161.95f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { -84.5f, -342.5f, 104.3f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 1211.349f, 522.475f, 103.7f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 960.7f, -1071.625f, 71.5f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 1380.5f, -1945.4f, 73.1f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 1563.75f, -775.05f, 56.95f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { -5586.066f, -3502.791f, -2.0267f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { -4600.55f, -3303.075f, 39.15f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { -4016.65f, -3000.6f, 9.2f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 982.8456f, 966.6252f, 117.9932f };
					Var0.f_3 = 4f;
					break;
				case 1:
					Var0 = { 971.9715f, 967.7923f, 118.6396f };
					Var0.f_3 = 4f;
					break;
				case 2:
					Var0 = { 965.3043f, 967.871f, 118.8719f };
					Var0.f_3 = 3f;
					break;
				case 3:
					Var0 = { 985.7054f, 973.0618f, 120.6813f };
					Var0.f_3 = 4f;
					break;
				case 4:
					Var0 = { 994.0547f, 972.8083f, 123.3098f };
					Var0.f_3 = 4f;
					break;
				case 5:
					Var0 = { 976.183f, 974.5382f, 123.1996f };
					Var0.f_3 = 4f;
					break;
				case 6:
					Var0 = { 968.4132f, 967.7958f, 118.5904f };
					Var0.f_3 = 3f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 976.1208f, 974.2396f, 123.1038f };
					Var0.f_3 = 4f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1347.404f, -698.4742f, 58.6595f };
					Var0.f_3 = 3f;
					break;
				case 1:
					Var0 = { 1342.458f, -695.5433f, 57.9497f };
					Var0.f_3 = 2f;
					break;
				case 2:
					Var0 = { 1346.697f, -700.1153f, 59.9963f };
					Var0.f_3 = 2f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1444.229f, -1938.854f, 53.2974f };
					Var0.f_3 = 4f;
					break;
				case 1:
					Var0 = { 1446.068f, -1942.763f, 53.9206f };
					Var0.f_3 = 4f;
					break;
				case 2:
					Var0 = { 1426.864f, -1940.422f, 50.833f };
					Var0.f_3 = 8f;
					break;
				case 3:
					Var0 = { 1424.807f, -1945.779f, 50.9882f };
					Var0.f_3 = 3f;
					break;
				case 4:
					Var0 = { 1418.648f, -1946.759f, 51.755f };
					Var0.f_3 = 3f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1204.074f, -599.1984f, 68.8373f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 1192.142f, -610.6667f, 72.1916f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 1174.892f, -605.1959f, 73.7084f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 1176.229f, -585.8301f, 68.5324f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_80(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_81(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_183(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

void func_82(int iParam0)
{
	iVar0 = (iParam0 / 32);
	if ((iParam0 / 32) == 0)
	{
		set_bit(&uLocal_319, iParam0);
	}
	else
	{
		set_bit(&uLocal_320, (iParam0 - (32 * iVar0)));
	}
}

bool func_83(var uParam0)
{
	iVar0 = func_184(uParam0->f_3);
	iVar1 = func_185(1);
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

void func_84(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			uParam1->f_1 = 1769094554;
			uParam1->f_3 = 683831289;
			StringCopy(&(uParam1->f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
			break;
		case 1:
			uParam1->f_1 = 1769094554;
			uParam1->f_3 = 438749731;
			StringCopy(&(uParam1->f_23), "SHARPSHOOTER_2", 64);
			break;
	}
	*uParam1 = 4;
	uParam1->f_2 = 1;
	uParam1->f_6 = { 0f, 0f, 0f };
	func_186(&(uParam1->f_22));
	func_187(uParam1, -5f, 0f, 0f, 0f, 0, 0, 0);
	func_188(uParam1);
}

void func_85(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_66(iParam0))
	{
		request_model(func_189(iParam0, iVar0), false);
		iVar0++;
	}
}

void func_86(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_73(iParam0))
	{
		request_model(func_190(iParam0, iVar0), false);
		iVar0++;
	}
}

bool func_87(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam0 == 0)
		{
			request_anim_dict(func_191(iVar0));
		}
		else if (!has_anim_dict_loaded(func_191(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Local_216.f_18[iVar0] > -1)
		{
			iVar1 = func_189(8, &(Local_216.f_18[iVar0]));
			if (iVar1 != 0)
			{
				request_model(iVar1, false);
			}
		}
		iVar0++;
	}
}

int func_89()
{
	return 531516298;
}

bool func_90(var uParam0)
{
	if (!func_192(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_192(uParam0->f_12))
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

bool func_91(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_66(iParam0))
	{
		if (!has_model_loaded(func_189(iParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_92(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_73(iParam0))
	{
		if (!has_model_loaded(func_190(iParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_93()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Local_216.f_18[iVar0] > -1)
		{
			iVar1 = func_189(8, &(Local_216.f_18[iVar0]));
			if (iVar1 != 0)
			{
				if (!has_model_loaded(iVar1))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_94(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_66(iParam0))
	{
		(*uParam1)[iVar0] = func_193(iParam0, iVar0);
		iVar0++;
	}
}

void func_95(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != -1)
	{
		func_94(iParam0, uParam2);
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (does_entity_exist(uParam2[iVar0]))
			{
				switch (iParam1)
				{
					case 1:
						vVar2 = { get_entity_coords(uParam2[iVar0], true, false) };
						vVar5 = { get_entity_rotation(uParam2[iVar0], 2) };
						fVar1 = vVar5.z;
						vVar5 = { func_194(0f, 0f, -1f) };
						iLocal_564[iVar0] = create_object_no_offset(-248746141, vVar2 - Vector(fVar1, 0f, 0f), true, true, false, true);
						_0xb6cbd40f8ea69e8a(&(iLocal_564[iVar0]));
						set_entity_visible(&(iLocal_564[iVar0]), false);
						set_entity_collision(&(iLocal_564[iVar0]), false, false);
						iLocal_547[iVar0] = create_object_no_offset(1071795929, vVar2, true, true, false, true);
						set_entity_visible(&(iLocal_547[iVar0]), false);
						set_entity_collision(&(iLocal_547[iVar0]), false, false);
						freeze_entity_position(&(iLocal_547[iVar0]), true);
						if (does_entity_exist(&(iLocal_564[iVar0])) && does_entity_exist(&(iLocal_547[iVar0])))
						{
							iLocal_530[iVar0] = _add_rope_2(vVar2, vVar5, fVar1, 0, true, -1, -1f);
							_0x462ff2a432733a44(&(iLocal_530[iVar0]), &(iLocal_547[iVar0]), &(iLocal_564[iVar0]), 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
							_0x3c6490d940ff5d0b(&(iLocal_530[iVar0]), 0, "ropeAttach", fVar1, 0);
							attach_entity_to_entity(uParam2[iVar0], &(iLocal_564[iVar0]), 0, 0f, 0f, 0f, 0f, 0f, 0f, true, false, true, false, 2, true, false, false);
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_96()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Local_216.f_18[iVar0] > -1)
		{
			iLocal_661[iVar0] = func_193(8, &(Local_216.f_18[iVar0]));
			if (does_entity_exist(&(iLocal_661[iVar0])))
			{
				set_object_targettable(&(iLocal_661[iVar0]), false);
			}
		}
		iVar0++;
	}
}

float func_97(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_98(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_195(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_196(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_197(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_198(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_199(uParam0->f_11, 0);
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
					Var2 = { func_195(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_196(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_200(&(uParam0->f_22)));
					Var2 = { func_195(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_196(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_197(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_201(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_202(*uParam1, &(uParam0->f_23), 0);
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

void func_99()
{
	if (Local_216.f_6 > -1 && !is_entity_dead(Local_287.f_11))
	{
		vVar0 = { func_74(2, Local_216.f_6) };
		vVar3 = { func_203(2, Local_216.f_6) };
		if (!func_80(vVar0))
		{
			_set_entity_coords_and_heading(Local_287.f_11, vVar0, vVar3.z, true, false, true);
		}
	}
}

void func_100(int iParam0, var uParam1)
{
	if (!is_entity_dead(*uParam1))
	{
		remove_all_ped_weapons(*uParam1, true, true);
		if (func_204(-598316488))
		{
			func_205(*uParam1, -598316488, -1, 0, 0, 1056964608, 1065353216, 0);
		}
		else
		{
			func_205(*uParam1, 379542007, -1, 0, 0, 1056964608, 1065353216, 0);
		}
		if (func_204(-1783478894))
		{
			func_205(*uParam1, -1783478894, -1, 1, 0, 1056964608, 1065353216, 0);
		}
		else if (func_204(-1471716628))
		{
			func_205(*uParam1, -1471716628, -1, 1, 0, 1056964608, 1065353216, 0);
		}
		else
		{
			func_205(*uParam1, -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
		}
		set_ped_infinite_ammo(*uParam1, true, 0);
		set_ped_combat_attributes(*uParam1, 38, true);
		set_ped_combat_attributes(*uParam1, 16, false);
		set_ped_combat_attributes(*uParam1, 26, true);
	}
}

bool func_101(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1955500)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1955500)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_206();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0) || !_does_volume_exist(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && _does_volume_exist(iParam1))
	{
		(*Global_1955500)[iVar0]->f_1 = iParam1;
		(*Global_1955500)[iVar0]->f_2 = iParam0;
		(*Global_1955500)[iVar0] = 0;
		(*Global_1955500)[iVar0]->f_3 = get_id_of_this_thread();
		if (func_30(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_207(Global_1955500[iVar0], 0))
		{
			func_208(iVar0, 1024);
			func_208(iVar0, 16);
			func_208(iVar0, 256);
		}
		func_208(iVar0, iParam2);
	}
	return iVar0;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_104(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_209(iParam0);
		return func_210(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	decor_set_int(iParam1, "HorseScriptCreator", get_hash_of_this_script_name());
}

float func_107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_108(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_211(vVar0, vParam0) > func_211(vVar0, get_entity_coords(iParam3, true, false));
}

int func_109()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

float func_110(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_111()
{
	func_212(&Local_216, 18, iVar282, &uLocal_268);
	func_213();
	if (!is_entity_dead(iVar282))
	{
		if (iVar271 < 8)
		{
			set_ped_reset_flag(iVar282, 5, true);
		}
	}
	if (func_48(49))
	{
		iLocal_350 = 1;
	}
	func_214();
	func_215();
	func_216();
	func_217();
	func_218();
	if (!Local_14.f_46)
	{
		if (iVar271 != 11)
		{
			if (iVar271 != 12)
			{
				set_ped_reset_flag(iVar282, 12, true);
			}
		}
	}
	else if (!does_blip_exist(iVar283))
	{
		if (is_ped_in_combat(iVar282, Global_35))
		{
			func_219(&iLocal_285, iVar282, 0);
		}
	}
	else if (!is_ped_in_combat(iVar282, Global_35) || is_ped_fleeing(iVar282))
	{
		func_220(&iLocal_285);
	}
	if (iVar271 < 5)
	{
		if (!func_48(22))
		{
			if (func_221())
			{
				if (func_48(48))
				{
					func_114(7, 0, 0);
					func_222(&uLocal_623);
					func_82(31);
					func_129(29);
				}
				else
				{
					func_114(6, 0, 0);
					func_222(&uLocal_623);
					func_82(31);
					func_129(29);
				}
			}
		}
	}
	switch (iVar271)
	{
		case 0:
			bLocal_746 = !func_223(Global_35, iVar824, 1, 0);
			func_224(iVar282, &Local_14, 0);
			_set_ped_infinite_ammo_clip(iVar282, true);
			func_225(iVar282, Local_216.f_7);
			func_226();
			func_227();
			func_222(&uLocal_322);
			func_132(1);
			if (does_entity_exist(&(uLocal_496[Local_216.f_5])))
			{
				set_entity_invincible(&(uLocal_496[Local_216.f_5]), true);
			}
			iLocal_273 = 1;
			break;
		case 1:
			if (func_228())
			{
				func_40();
				if (does_entity_exist(&(uLocal_496[Local_216.f_5])))
				{
					set_entity_invincible(&(uLocal_496[Local_216.f_5]), false);
				}
				if (func_229(&uLocal_322))
				{
					func_230(&uLocal_322);
				}
				func_231(&Local_14, &Local_211, &(Local_211.f_1));
				if (_does_volume_exist(Local_14.f_173))
				{
					uLocal_698 = Local_14.f_173;
				}
				else
				{
					func_232(Local_211, Local_211.f_1, &uLocal_698);
				}
				if (_does_volume_exist(iVar696))
				{
					_0x18262cafebb5fbe1(iVar696, 0, 0, 0, -1, -1, 0);
					_0xb56d41a694e42e86(iVar696, 0, 0, 0, -1, -1, 0);
				}
				iLocal_273 = 2;
			}
			else
			{
				func_233();
			}
			break;
		case 2:
			func_234(1);
			if (func_235())
			{
				_set_ped_infinite_ammo_clip(iVar282, false);
				iLocal_273 = 3;
			}
			break;
		case 3:
			func_234(1);
			if (func_236())
			{
				func_237();
				if (func_48(5))
				{
					iLocal_273 = 4;
				}
				else
				{
					iLocal_273 = 12;
				}
			}
			break;
		case 4:
			func_238();
			if (func_239())
			{
				func_237();
				func_82(18);
				func_129(38);
				func_240(0, 15f);
				func_241();
				Local_14.f_44 = 1;
				iLocal_273 = 5;
			}
			break;
		case 5:
			func_234(1);
			if (func_242())
			{
				func_237();
				if (Local_251 != 0)
				{
					iLocal_273 = 6;
				}
				else
				{
					iLocal_273 = 10;
				}
			}
			break;
		case 6:
			func_238();
			func_234(1);
			if (func_243())
			{
				func_237();
				iLocal_273 = 7;
			}
			break;
		case 7:
			func_238();
			if (func_244())
			{
				func_237();
				func_240(0, 1094713344);
				func_241();
				iLocal_273 = 8;
			}
			break;
		case 8:
			func_234(1);
			if (func_245())
			{
				func_237();
				func_241();
				iLocal_273 = 10;
			}
			break;
		case 9:
			func_246();
			func_247();
			break;
		case 10:
			func_234(1);
			if (func_248())
			{
				func_237();
				func_35(&(Local_14.f_5), 0);
				iLocal_273 = 12;
			}
			break;
		case 12:
			return func_249();
	}
	return 0;
}

void func_112()
{
	Var0.f_1 = 2;
	Var0.f_2 = 493038497;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	if (!func_48(46))
	{
		iLocal_444 = func_250(&uLocal_284, &Local_369, &(Local_14.f_192), 0, 3, 0, 0, iVar724, 0, 0, 2, 1, -1082130432);
		if (iVar442 != -1)
		{
			func_222(&uLocal_366);
			func_251(&Local_369, 0, 0);
			func_252(Global_35, iVar282, Local_369.f_21[iVar442]->f_13, 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			switch (iVar442)
			{
				case 2:
					func_253(&Var0);
					func_254(&uLocal_284, &Var0, &Local_369, Local_287.f_11);
					func_82(46);
					Local_14.f_46 = 1;
					Local_14.f_50 = 1;
					func_50(iVar282);
					iLocal_273 = 12;
					break;
			}
		}
	}
}

bool func_113()
{
	if (!func_48(35))
	{
		iVar0 = 0;
		while (iVar0 < iVar494)
		{
			if (does_entity_exist(&(uLocal_496[iVar0])))
			{
				if (has_entity_been_damaged_by_entity(&(uLocal_496[iVar0]), Global_35, 1, 1))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_114(int iParam0, bool bParam1, bool bParam2)
{
	open_sequence_task(&iVar0);
	if (iParam0 != 10)
	{
		func_255(0, 0, "PLAYER_CHEATS", -1, 1082130432, -1065353216, 0, 0);
	}
	if (!bParam1)
	{
		task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		if (bParam2)
		{
		}
		if (func_48(19))
		{
			func_256(0, Global_35, 3, "CHALL_WON_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
			func_257(Global_35, 2, 2000, 1082130432, -1065353216, 1);
			func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
		}
		else
		{
			func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
		}
		func_256(0, Global_35, 3, func_258(iVar601), -1, 1082130432, -1065353216, 1);
	}
	func_52(iVar279, &iVar0, 0, 0, 1, 1);
	func_259(&uLocal_479);
	func_260();
	func_261();
	func_82(22);
	func_82(28);
	func_82(37);
	func_240(0, 1094713344);
	func_262();
	if (bParam1)
	{
		func_82(34);
	}
	if (bParam2)
	{
		func_82(45);
	}
	func_241();
	func_43();
	func_46(0);
	switch (iParam0)
	{
		case 0:
			func_263(iVar279, Global_35, 88);
			break;
		case 1:
			func_263(iVar279, Global_35, 90);
			break;
		case 2:
			func_263(iVar279, Global_35, 91);
			break;
		case 3:
			func_263(iVar279, Global_35, 90);
			break;
		case 4:
			func_263(iVar279, Global_35, 92);
			break;
		case 5:
			func_263(iVar279, Global_35, 90);
			break;
		case 6:
			func_263(iVar279, Global_35, 95);
			break;
		case 7:
			func_263(iVar279, Global_35, 120);
			break;
		case 8:
			func_263(iVar279, Global_35, 86);
			break;
		case 9:
			func_263(iVar279, Global_35, 90);
			break;
		case 10:
			switch (Local_216)
			{
				case 1:
					func_252(iVar279, Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				default:
					func_252(iVar279, Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
			}
			break;
	}
	func_264();
	iLocal_654 = iParam0;
	func_222(&uLocal_340);
	iLocal_273 = 9;
}

bool func_115(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_146(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_265(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_266(&(uParam0->f_5));
			}
			func_128(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_163(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_267(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_268(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_269(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_270(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_62(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_271(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_116(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_272())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_273(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_62(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_62(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_62(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_274(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_274(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

void func_117(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(&(iParam0->f_1), 128);
	}
	else
	{
		func_128(&(iParam0->f_1), 128);
	}
}

void func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 256);
	}
	else
	{
		func_127(iParam0, 256);
	}
}

void func_119(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_128(iParam0, 268435456);
	}
	else
	{
		func_127(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_128(iParam0, 1073741824);
	}
	else
	{
		func_127(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_128(iParam0, 536870912);
	}
	else
	{
		func_127(iParam0, 536870912);
	}
}

var func_120(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_121(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_275(sParam1));
}

void func_122(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_277((*uParam0)[0], func_276(7), sParam1, -163964935, 0, 0, 0, 1, 0);
	func_277((*uParam0)[1], func_276(10), sParam2, 648122183, 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_277((*uParam0)[2], func_276(12), sParam3, -1616532217, 0, 0, 0, 1, 0);
		if (is_string_null_or_empty(sParam3))
		{
			func_278((*uParam0)[2], 0, 0);
		}
	}
	if (is_string_null_or_empty(sParam1))
	{
		func_278((*uParam0)[0], 0, 0);
	}
	if (is_string_null_or_empty(sParam2))
	{
		func_278((*uParam0)[1], 0, 0);
	}
}

void func_123(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_279(iParam0, 4))
		{
			func_280(&(iParam0->f_6), 1, 1);
			func_281(iParam0, 4);
		}
	}
	else if (func_279(iParam0, 4))
	{
		func_282(iParam0, 4);
		func_281(iParam0, 14);
	}
}

void func_124(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 512);
	}
	else
	{
		func_127(iParam0, 512);
	}
}

void func_125(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 2);
	}
	else
	{
		func_127(iParam0, 2);
	}
}

void func_126(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 8);
	}
	else
	{
		func_127(iParam0, 8);
	}
}

void func_127(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_128(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_129(int iParam0)
{
	iVar0 = (iParam0 / 32);
	if ((iParam0 / 32) == 0)
	{
		clear_bit(&uLocal_319, iParam0);
	}
	else
	{
		clear_bit(&uLocal_320, (iParam0 - (32 * iVar0)));
	}
}

void func_130(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1955500)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_283(1, 1) == *iParam0)
			{
				func_284(-1, 1, 1);
			}
			if (bParam1)
			{
				func_42((*Global_1955500)[*iParam0]->f_1);
			}
			(*Global_1955500)[*iParam0] = 0;
			(*Global_1955500)[*iParam0]->f_2 = 0;
			(*Global_1955500)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_131(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_285((*uParam0)[iVar0], iParam1);
		iVar0++;
	}
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		func_286(iVar694, 1);
	}
	else
	{
		func_208(iVar694, 1);
	}
}

void func_133(int iParam0)
{
	if (func_101(iParam0, 1, 1))
	{
		if (!func_287(iParam0, 4096))
		{
			iVar0 = func_288();
			iVar1 = (*Global_1955500)[iParam0]->f_2;
			if (func_283(1, 1) == iParam0)
			{
				if (!is_entity_dead(iVar0))
				{
					task_clear_look_at(iVar0);
					_0xaac0ee3b4999abb5(iVar0, 0);
				}
				if (!is_entity_dead(iVar1))
				{
					iVar2 = get_ped_index_from_entity_index(iVar1);
					if (!is_entity_dead(iVar2))
					{
						task_clear_look_at(iVar2);
					}
				}
			}
			func_208(iParam0, 4096);
		}
	}
}

void func_134(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_230(&(iParam0->f_18));
}

void func_135(int iParam0)
{
	if (func_101(iParam0, 1, 1))
	{
		if (func_287(iParam0, 4096))
		{
			iVar0 = func_288();
			iVar1 = (*Global_1955500)[iParam0]->f_2;
			if (func_283(1, 1) == iParam0)
			{
				if (does_entity_exist(iVar1))
				{
					task_look_at_entity(iVar0, iVar1, -1, 0, 51, 0);
					_0xaac0ee3b4999abb5(iVar0, iVar1);
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (!is_entity_dead(iVar2))
						{
							task_look_at_entity(iVar2, iVar0, -1, 0, 51, 0);
						}
					}
				}
			}
			func_286(iParam0, 4096);
		}
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = func_67(iParam0);
		func_128(&iVar0, iParam1);
	}
	switch (iParam0)
	{
		case 0:
			func_289(57, 0, iVar0);
			break;
		case 1:
			func_290(57, 0, iVar0);
			break;
	}
}

char* func_137(int iParam0)
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

void func_138(int iParam0, int iParam1)
{
	if (!func_176(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_139(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_291(iParam0, iParam1);
}

void func_140(int iParam0, bool bParam1)
{
	if (func_139(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_292(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_141(var uParam0, var uParam1)
{
	if (func_62(uParam0->f_3, 16777216))
	{
		if (func_293(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_142(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

void func_143(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_139(iParam0, 0, 1)))
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
			fVar2 = func_107(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_294(&iParam0);
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

void func_144(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_295(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_296(uParam0);
	func_297(uParam0);
	func_298(uParam0);
	if (!func_299(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_300(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_301();
	}
	if (!func_153(uParam0->f_3) && !func_62(uParam0->f_3, 256))
	{
		func_302(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_42(uParam0->f_173);
	func_42(uParam0->f_172);
}

void func_145(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

void func_146(var uParam0, int iParam1)
{
	vVar0 = { func_19(uParam0) };
	iVar3 = func_147(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_147(int iParam0, int iParam1)
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
				Jump @5428; //curOff = 3713
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
				Jump @5428; //curOff = 3746
				return -334565466;
				Jump @5428; //curOff = 3757
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
				Jump @5428; //curOff = 3804
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
				Jump @5428; //curOff = 3851
				return -1752276745;
				Jump @5428; //curOff = 3862
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
				Jump @5428; //curOff = 3909
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
				Jump @5428; //curOff = 3956
				return 1417655457;
				Jump @5428; //curOff = 3967
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
				Jump @5428; //curOff = 4014
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
				Jump @5428; //curOff = 4061
				return -69702063;
				Jump @5428; //curOff = 4072
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
				Jump @5428; //curOff = 4105
				return -331264815;
				Jump @5428; //curOff = 4116
				return -1217205534;
				Jump @5428; //curOff = 4127
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
				Jump @5428; //curOff = 4174
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
				Jump @5428; //curOff = 4249
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
				Jump @5428; //curOff = 4282
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
				Jump @5428; //curOff = 4413
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
				Jump @5428; //curOff = 4460
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
				Jump @5428; //curOff = 4506
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
				Jump @5428; //curOff = 4581
				return -307424281;
				Jump @5428; //curOff = 4592
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
				Jump @5428; //curOff = 4639
				return -1979014350;
				Jump @5428; //curOff = 4650
				return 2096137174;
				Jump @5428; //curOff = 4661
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
				Jump @5428; //curOff = 4722
				return 1152564685;
				Jump @5428; //curOff = 4733
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
				Jump @5428; //curOff = 4878
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
				Jump @5428; //curOff = 4925
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
				Jump @5428; //curOff = 4972
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
				Jump @5428; //curOff = 5019
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
				Jump @5428; //curOff = 5065
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
				Jump @5428; //curOff = 5154
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
				Jump @5428; //curOff = 5187
				return 1487351956;
				Jump @5428; //curOff = 5198
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
				Jump @5428; //curOff = 5273
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
				Jump @5428; //curOff = 5320
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
				Jump @5428; //curOff = 5367
				return -689015496;
				Jump @5428; //curOff = 5378
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

void func_148(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_182() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_149(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_150(int* iParam0, var uParam1)
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
	func_303(iParam0, uParam1, 1);
	func_304(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_151(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_153(int iParam0)
{
	if (!func_176(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_154(int iParam0)
{
	if (func_176(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_155(int iParam0)
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

void func_156(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_302(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_157(int iParam0, bool bParam1, float fParam2)
{
	func_305(iParam0, bParam1, fParam2);
}

void func_158(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_306(iParam0, iParam1, bParam2, fParam3);
}

bool func_159(int iParam0)
{
	if (((func_160(iParam0, 1) && func_160(iParam0, 2)) && func_160(iParam0, 8)) && func_160(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_161(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_176(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_307(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_308(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_162(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_62(iParam0, 32))
	{
		if (func_309(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_310(Global_35, &(uParam1->f_12)) };
				if (!func_80(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_311(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_312(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_313());
		if (func_152(Global_1310750[iParam0], 33554432))
		{
			func_315(iVar0, func_314(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_315(iVar0, func_314(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_62(iParam0, 1))
		{
			func_316(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_317(iParam0);
}

bool func_163(int iParam0, int iParam1)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

bool func_164(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_318(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_163(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_319(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_319(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_165(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_320(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_62(iParam0, 1))
			{
				if (func_163(iParam0, 2))
				{
				}
			}
			func_321(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_322(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_322(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_273(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_166(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_307(iParam1))
	{
		if (!func_323(iParam1, iVar0))
		{
			vVar4 = { func_161(iParam1, iVar0) };
			if (!func_80(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_171(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_324(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_80(vVar4))
	{
	}
	return vVar1;
}

int func_167(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_168(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_307(iParam0))
	{
		vVar1 = { func_161(iParam0, iVar0) };
		if (func_325(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_169(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_170(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_24(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_326(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_80(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_327(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_167(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_171(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_165(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_62(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_172(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_173(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_328(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_329(iParam0, uParam2))
	{
		return false;
	}
	if (!func_330(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_108(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_174(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_175(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_178(int iParam0, int iParam1)
{
	if (func_331(iParam0))
	{
		return;
	}
	if (func_332(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_179(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_127(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_180(int iParam0, int iParam1)
{
	iVar0 = func_333(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
{
	iVar0 = func_333(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_2;
	}
	return 0;
}

int func_182()
{
	return Global_1572887->f_12;
}

void func_183(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_334(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_334(uParam0))
		{
		}
	}
}

int func_184(int iParam0)
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

int func_185(bool bParam0)
{
	if (bParam0)
	{
		return func_335(Global_1359489->f_4);
	}
	get_group_size(func_336(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_336(), iVar3);
		if (func_337(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_186(var uParam0)
{
	func_338(uParam0, 256);
}

void func_187(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (iParam7 == 0)
	{
		iParam7 = func_339(997958153, 1);
	}
	if (iParam7 == 0)
	{
		iParam7 = -1038436471;
	}
	uParam0->f_12 = iParam7;
	uParam0->f_15 = { vParam1 };
	uParam0->f_18 = fParam4;
	uParam0->f_13 = iParam5;
	uParam0->f_19 = iParam6;
}

void func_188(var uParam0)
{
	func_340(&(uParam0->f_1));
	func_340(&(uParam0->f_12));
}

int func_189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -652951640;
				case 1:
					return -652951640;
				case 2:
					return 1780629707;
				case 3:
					return 1780629707;
				case 4:
					return -652951640;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return 1780629707;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return -652305938;
				case 2:
					return -652305938;
				case 3:
					return -652305938;
				case 4:
					return -652305938;
				case 5:
					return -652305938;
				case 6:
					return -652305938;
				case 7:
					return -652305938;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1031399461;
				case 1:
					return -1031399461;
				case 2:
					return -1031399461;
				case 3:
					return -1031399461;
				case 4:
					return -1031399461;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1031399461;
				case 1:
					return -1031399461;
				case 2:
					return -1031399461;
				case 3:
					return -1031399461;
				case 4:
					return -1031399461;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1780629707;
				case 1:
					return 1780629707;
				case 2:
					return 1780629707;
				case 3:
					return 1780629707;
				case 4:
					return 1780629707;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return 1780629707;
				case 8:
					return 1780629707;
				case 9:
					return 1780629707;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return -652305938;
				case 2:
					return -652305938;
				case 3:
					return -652305938;
				case 4:
					return -652305938;
				case 5:
					return -652305938;
				case 6:
					return -652305938;
				case 7:
					return -652305938;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1780629707;
				case 1:
					return -652951640;
				case 2:
					return 1780629707;
				case 3:
					return -652951640;
				case 4:
					return -652951640;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return 1780629707;
				case 8:
					return 1780629707;
				case 9:
					return -652951640;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return -652305938;
				case 2:
					return 1780629707;
				case 3:
					return 1780629707;
				case 4:
					return -652305938;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return -652305938;
				case 8:
					return -652305938;
				case 9:
					return -652305938;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 319326044;
				case 1:
					return 319326044;
				case 2:
					return 319326044;
				case 3:
					return 319326044;
				case 4:
					return 319326044;
				case 5:
					return 319326044;
				case 6:
					return 319326044;
				case 7:
					return -498929802;
				case 8:
					return -498929802;
				case 9:
					return 319326044;
				case 10:
					return 319326044;
				case 11:
					return 319326044;
				case 12:
					return 319326044;
				case 13:
					return 319326044;
				case 14:
					return 319326044;
				case 15:
					return -498929802;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1904245695;
				case 1:
					return -1904245695;
				case 2:
					return 9264690;
				case 3:
					return -1904245695;
				case 4:
					return 9264690;
				case 5:
					return 9264690;
				case 6:
					return 9264690;
				case 7:
					return 9264690;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return 1780629707;
				case 2:
					return -652305938;
				case 3:
					return 1780629707;
				case 4:
					return -652305938;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return -652305938;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 9264690;
				case 1:
					return 9264690;
				case 2:
					return 9264690;
				case 3:
					return -652305938;
				case 4:
					return -652305938;
				case 5:
					return -1031399461;
				case 6:
					return -1031399461;
				case 7:
					return -1031399461;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1780629707;
				case 1:
					return 1780629707;
				case 2:
					return -652305938;
				case 3:
					return -652305938;
				case 4:
					return 1780629707;
				case 5:
					return -652305938;
				case 6:
					return -652305938;
				case 7:
					return -652305938;
				case 8:
					return 1780629707;
				case 9:
					return -652305938;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 9264690;
				case 1:
					return 9264690;
				case 2:
					return 9264690;
				case 3:
					return 9264690;
				case 4:
					return 9264690;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return 1780629707;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -1232841278;
				case 1:
					return -1232841278;
				case 2:
					return -1232841278;
				case 3:
					return 1780629707;
				case 4:
					return 1780629707;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return 1780629707;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return -652305938;
				case 2:
					return -652305938;
				case 3:
					return -652305938;
				case 4:
					return -652305938;
				case 5:
					return -652305938;
				case 6:
					return -652305938;
				case 7:
					return -652305938;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1780629707;
				case 1:
					return -652951640;
				case 2:
					return -652951640;
				case 3:
					return 1780629707;
				case 4:
					return 1780629707;
				case 5:
					return 1780629707;
				case 6:
					return 1780629707;
				case 7:
					return -652951640;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return 1780629707;
				case 2:
					return 1780629707;
				case 3:
					return -652305938;
				case 4:
					return 1780629707;
				case 5:
					return -652305938;
				case 6:
					return 1780629707;
				case 7:
					return -652305938;
				case 8:
					return -652305938;
				case 9:
					return 1780629707;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -652305938;
				case 1:
					return 1780629707;
				case 2:
					return 1780629707;
				case 3:
					return -652305938;
				case 4:
					return 1780629707;
				case 5:
					return -652305938;
				case 6:
					return -652305938;
				case 7:
					return 1780629707;
				case 8:
					return -652305938;
				case 9:
					return 1780629707;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2030804811;
				case 1:
					return 2030804811;
				case 2:
					return 2030804811;
				case 3:
					return 2030804811;
				case 4:
					return 2030804811;
				case 5:
					return 2030804811;
				case 6:
					return 2030804811;
				case 7:
					return 2030804811;
				case 8:
					return 2030804811;
				case 9:
					return 2030804811;
				case 10:
					return 2030804811;
				case 11:
					return 2030804811;
				case 12:
					return 2030804811;
				case 13:
					return 2030804811;
				case 14:
					return 2030804811;
				case 15:
					return 2030804811;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 989669666;
				case 1:
					return 989669666;
				case 2:
					return 989669666;
				case 3:
					return 989669666;
				case 4:
					return 989669666;
				case 5:
					return 989669666;
				case 6:
					return 989669666;
				case 7:
					return 989669666;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -930822792;
				case 1:
					return -930822792;
				case 2:
					return -930822792;
				case 3:
					return -930822792;
				case 4:
					return -930822792;
				case 5:
					return -930822792;
				case 6:
					return -930822792;
				case 7:
					return -930822792;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 98537260;
				case 1:
					return 98537260;
				case 2:
					return 98537260;
				case 3:
					return 98537260;
				case 4:
					return 98537260;
				case 5:
					return 98537260;
				case 6:
					return 98537260;
				case 7:
					return 98537260;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_RE@SHARP_SHOOTER";
		case 1:
			return "SCRIPT_RE@SHARP_SHOOTER@SWAMP";
		case 2:
			return "SCRIPT_RE@SHARP_SHOOTER@ALT_INTROS_BIRDS";
		case 3:
			return "SCRIPT_RE@SHARP_SHOOTER@ALT_INTROS_NON_SPEC";
		default:
			break;
	}
	return func_341("[RESS]", "RESS_ANIM_DICTIONARY_NAME: Invalid Dictionary.");
}

bool func_192(int iParam0)
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

int func_193(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_189(iParam0, iParam1) != 0)
	{
		iVar1 = func_342(iParam0, iParam1);
		vVar2 = { func_70(iParam0, iParam1) };
		vVar5 = { func_343(iParam0, iParam1) };
		iVar8 = func_189(iParam0, iParam1);
		iVar0 = create_object(iVar8, vVar2, true, true, false, false, true);
		set_entity_rotation(iVar0, vVar5, 2, true);
		freeze_entity_position(iVar0, is_bit_set(iVar1, 0));
		set_entity_collision(iVar0, !is_bit_set(iVar1, 1), false);
		set_object_targettable(iVar0, !is_bit_set(iVar1, 2));
	}
	return iVar0;
}

Vector3 func_194(vector3 vParam0)
{
	vVar0 = { func_344(vParam0) };
	fVar3 = atan2(vVar0.y, vVar0.x);
	fVar4 = -atan2(vVar0.z, sqrt(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

Vector3 func_195(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_196(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_345((fParam0 + fParam1));
}

int func_197(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_346(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_347(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_348(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_348(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_349(iVar0))
		{
			func_202(iVar0, &(uParam1->f_23), 0);
		}
		if (func_349(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_350(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_351(&(uParam1->f_22)));
			func_353(iVar0, func_352(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_354(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_355(&(uParam1->f_22)))
		{
			func_356(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_357(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_207(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_349(iVar0))
		{
			func_359(iVar0, !func_358(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_360(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_361(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_361(&(uParam1->f_22)));
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

bool func_198(int iParam0, int iParam1)
{
	if (func_362(iParam0) != -1)
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

void func_199(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_363(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_200(var uParam0)
{
	return func_207(*uParam0, 32);
}

int func_201(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_202(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_139(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

Vector3 func_203(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 47.095f;
				case 1:
					return 0f, 0f, 57.6f;
				case 2:
					return 0f, 0f, 43.92f;
				case 3:
					return 0f, 0f, 46.8f;
				case 4:
					return 0f, 0f, 41.04f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 47.52f;
				case 1:
					return 0f, 0f, 47.52f;
				case 2:
					return 0f, 0f, 42.48f;
				case 3:
					return 0f, 0f, 39.6f;
				case 4:
					return 0f, 0f, 47.52f;
				case 5:
					return 0f, 0f, 33.84f;
				case 6:
					return 0f, 0f, 39.6f;
				case 7:
					return 0f, 0f, 30.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -66.96f;
				case 1:
					return 0f, 0f, -77.04f;
				case 2:
					return 0f, 0f, 86.4f;
				case 3:
					return 0f, 0f, -132.48f;
				case 4:
					return 0f, 0f, -44.64f;
				case 5:
					return 0f, 0f, 90.72f;
				case 6:
					return 0f, 0f, 176.4f;
				case 7:
					return 0f, 0f, 245.52f;
				case 8:
					return 0f, 0f, 299.52f;
				case 9:
					return 0f, 0f, -103.68f;
				case 10:
					return 0f, 0f, 184.32f;
				case 11:
					return 0f, 0f, -46.16f;
				case 12:
					return 0f, 0f, -218.88f;
				case 13:
					return 0f, 0f, -134.64f;
				case 14:
					return 0f, 0f, 115.2f;
				case 15:
					return 0f, 0f, -98.64f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 230.4f;
				case 1:
					return 0f, 0f, 250.56f;
				case 2:
					return 0f, 0f, 241.92f;
				case 3:
					return 0f, 0f, 241.92f;
				case 4:
					return 0f, 0f, 230.4f;
				case 5:
					return 0f, 0f, 261.36f;
				case 6:
					return 0f, 0f, 255.6f;
				case 7:
					return 0f, 0f, 239.04f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 63.36f;
				case 1:
					return 0f, 0f, 77.76f;
				case 2:
					return 0f, 0f, 66.24f;
				case 3:
					return 0f, 0f, 52.56f;
				case 4:
					return 0f, 0f, 66.24f;
				case 5:
					return 0f, 0f, 83.52f;
				case 6:
					return 0f, 0f, 54.72f;
				case 7:
					return 0f, 0f, 54.72f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 84.24f;
				case 1:
					return 0f, 0f, 84.24f;
				case 2:
					return 0f, 0f, 87.12f;
				case 3:
					return 0f, 0f, 90f;
				case 4:
					return 0f, 0f, 92.88f;
				case 5:
					return 0f, 0f, 109.44f;
				case 6:
					return 0f, 0f, 81.36f;
				case 7:
					return 0f, 0f, 98.64f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -111.6f;
				case 1:
					return 0f, 0f, -97.2f;
				case 2:
					return 0f, 0f, -102.96f;
				case 3:
					return 0f, 0f, -97.2f;
				case 4:
					return 0f, 0f, -97.2f;
				case 5:
					return 0f, 0f, -100.08f;
				case 6:
					return 0f, 0f, -114.48f;
				case 7:
					return 0f, 0f, -94.32f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -94.32f;
				case 1:
					return 0f, 0f, -94.32f;
				case 2:
					return 0f, 0f, -94.32f;
				case 3:
					return 0f, 0f, -86.4f;
				case 4:
					return 0f, 0f, -89.28f;
				case 5:
					return 0f, 0f, -66.24f;
				case 6:
					return 0f, 0f, -89.28f;
				case 7:
					return 0f, 0f, -97.2f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -229.68f;
				case 1:
					return 0f, 0f, -244.08f;
				case 2:
					return 0f, 0f, -244.08f;
				case 3:
					return 0f, 0f, -246.96f;
				case 4:
					return 0f, 0f, -263.52f;
				case 5:
					return 0f, 0f, -232.56f;
				case 6:
					return 0f, 0f, -249.12f;
				case 7:
					return 0f, 0f, -252f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 117.36f;
				case 1:
					return 0f, 0f, 151.2f;
				case 2:
					return 0f, 0f, 131.04f;
				case 3:
					return 0f, 0f, 128.16f;
				case 4:
					return 0f, 0f, 131.04f;
				case 5:
					return 0f, 0f, -233.28f;
				case 6:
					return 0f, 0f, 94.32f;
				case 7:
					return 0f, 0f, 105.84f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -182.16f;
				case 1:
					return 0f, 0f, -179.28f;
				case 2:
					return 0f, 0f, -182.16f;
				case 3:
					return 0f, 0f, -185.04f;
				case 4:
					return 0f, 0f, -182.16f;
				case 5:
					return 0f, 0f, -182.16f;
				case 6:
					return 0f, 0f, -190.8f;
				case 7:
					return 0f, 0f, -185.04f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 172.8f;
				case 1:
					return 0f, 0f, 184.32f;
				case 2:
					return 0f, 0f, 184.32f;
				case 3:
					return 0f, 0f, 190.08f;
				case 4:
					return 0f, 0f, 172.8f;
				case 5:
					return 0f, 0f, 178.56f;
				case 6:
					return 0f, 0f, 172.8f;
				case 7:
					return 0f, 0f, 184.32f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -87.12f;
				case 1:
					return 0f, 0f, -112.32f;
				case 2:
					return 0f, 0f, -123.84f;
				case 3:
					return 0f, 0f, -106.56f;
				case 4:
					return 0f, 0f, -95.76f;
				case 5:
					return 0f, 0f, -104.4f;
				case 6:
					return 0f, 0f, -98.64f;
				case 7:
					return 0f, 0f, -104.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_204(int iParam0)
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

int func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_364(iParam3, 1);
	bVar1 = func_364(iParam3, 2);
	bVar2 = !func_364(iParam3, 4);
	bVar3 = func_364(iParam3, 8);
	bVar4 = !func_364(iParam3, 16);
	bVar5 = func_364(iParam3, 32);
	bVar6 = func_364(iParam3, 64);
	return func_365(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_206()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_101(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_207(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_208(int iParam0, int iParam1)
{
	if (func_101(iParam0, 1, 1))
	{
		func_338((*Global_1955500)[iParam0], iParam1);
	}
}

int func_209(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

float func_211(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_212(int iParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = 2;
	if (is_entity_dead(iParam2))
	{
		return -1;
	}
	func_366(iParam1, &iVar2, &iVar3);
	if (iVar2 != -1 && iVar3 >= iVar2)
	{
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			if (func_367(uParam3, iVar1))
			{
				iVar0 = func_368(iParam1, iVar1, iParam0);
				if (iVar0 != 2)
				{
					if (func_369(iParam1, iVar1))
					{
						if (has_anim_event_fired(Global_35, iVar0))
						{
							func_370(Global_35, iParam2, iParam0, iParam1, iVar1);
							return iVar1;
						}
					}
					else if (has_anim_event_fired(iParam2, iVar0))
					{
						func_370(iParam2, Global_35, iParam0, iParam1, iVar1);
						return iVar1;
					}
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_213()
{
	if (has_anim_event_fired(Global_35, 1532492241) || has_anim_event_fired(Global_35, 1055269014))
	{
		attach_entity_to_entity(iVar694, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		set_entity_visible(iVar694, true);
	}
	if (has_anim_event_fired(iVar282, 1532492241) || has_anim_event_fired(iVar282, 1055269014))
	{
		attach_entity_to_entity(iVar694, iVar282, get_ped_bone_index(iVar282, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		set_entity_visible(iVar694, true);
		if (has_anim_event_fired(iVar282, 1055269014))
		{
			iLocal_358 = 1;
		}
	}
	if (has_anim_event_fired(Global_35, -31477066) || has_anim_event_fired(iVar282, -31477066))
	{
		if (has_anim_event_fired(iVar282, -31477066))
		{
			func_104(iVar282, (get_random_int_in_range(75, 250) + func_21(&Local_216, func_48(21), 0)));
		}
		if (does_entity_exist(iVar694))
		{
			delete_object(&iLocal_696);
		}
		iLocal_358 = 0;
	}
}

void func_214()
{
	func_56(!func_223(Global_35, iVar824, 1, 0));
}

void func_215()
{
	if (func_48(47))
	{
		return;
	}
	func_371();
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	if (bVar357 && !bVar358)
	{
		if (!is_entity_dead(iVar282))
		{
			if (_0xe33f98bd76490abc(iVar282, player_id(), 0))
			{
				func_372(2, 0, 0, "RE_HONOR_ROB", iVar282, 0, 1065353216, 0);
				iLocal_360 = 1;
				iLocal_359 = 0;
			}
		}
	}
	if (!Local_14.f_46)
	{
		bVar26 = false;
		iVar27 = func_373(&bVar26);
		if (iVar27 != 0)
		{
			func_374();
			func_241();
			if (!bVar359)
			{
				if (bVar26 && func_48(5))
				{
				}
				iLocal_361 = 1;
			}
			if (!is_entity_dead(iVar282))
			{
				switch (iVar27)
				{
					case 1:
					case 2:
					case 4:
					case 5:
						func_219(&iLocal_285, iVar282, 0);
						iVar25 = -1;
						if (iVar27 == 4)
						{
							iVar25 = 117;
						}
						else if (iVar27 == 5)
						{
							iVar25 = 117;
						}
						else if (iVar27 == 2)
						{
							func_82(30);
						}
						else
						{
							iVar25 = 118;
						}
						if (iVar25 != -1)
						{
							if (!func_263(iVar282, Global_35, iVar25))
							{
								func_375(iVar282, 750);
							}
						}
						else
						{
							func_375(iVar282, 750);
						}
						func_376(iVar27 == 1);
						Local_14.f_46 = 1;
						func_50(iVar282);
						iLocal_273 = 12;
						break;
					case 3:
						set_ped_using_action_mode(iVar282, true, -1, 0);
						task_turn_ped_to_face_entity(iVar282, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_377(&Var0, Global_35, 0, 5000, 1, 1, 2, 1, 0, 0, 0, 0);
						_0x66f9eb44342bb4c5(iVar282, &Var0);
						if (func_51(Global_35, iVar282, 20f, 1))
						{
							func_263(iVar282, Global_35, 120);
						}
						else
						{
							func_263(iVar282, Global_35, 121);
						}
						iLocal_273 = 12;
						break;
					case 6:
					case 7:
						if (iVar27 == 6)
						{
							func_263(iVar282, Global_35, 123);
						}
						else
						{
							func_263(iVar282, Global_35, 120);
						}
						set_blocking_of_non_temporary_events(iVar282, false);
						_0x2e1d6d87346bb7d2(iVar282, Global_35, 1, 0);
						_task_smart_flee_style_ped(iVar282, Global_35, 4, 0, -1f, -1, Local_287.f_11);
						Local_14.f_46 = 1;
						iLocal_273 = 12;
						break;
				}
			}
		}
	}
}

void func_216()
{
	if (bVar349 && !bVar353)
	{
		if (func_378())
		{
			iLocal_355 = 1;
		}
	}
}

void func_217()
{
	if (!Local_14.f_46)
	{
		if (!func_48(31))
		{
			if (bVar723)
			{
				set_ped_reset_flag(Global_35, 5, true);
				set_ped_reset_flag(iVar282, 5, true);
				if (bVar827)
				{
					if (!func_379(iVar282, 0, 0, 0))
					{
						iLocal_829 = 0;
						func_304(&(Local_369.f_21), 0, 0, 1, 0);
					}
				}
			}
		}
	}
}

void func_218()
{
	if (bVar757)
	{
		if (func_229(&uLocal_769))
		{
			if (!func_380(&uLocal_769, 3f))
			{
				_0xc9caeaeec1256e54(-66088566);
			}
		}
	}
}

void func_219(int* iParam0, int iParam1, bool bParam2)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	func_381(iParam1, iParam0, 831283580, 580546400, 0, 0);
	if (bParam2)
	{
		func_382(iParam1, -1034486097, 1);
	}
	else
	{
		func_382(iParam1, 942020339, 1);
	}
}

void func_220(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_221()
{
	if (bVar826)
	{
		return false;
	}
	iVar1 = get_mount(Global_35);
	if (!does_entity_exist(iVar1))
	{
		iVar1 = _get_last_mount(Global_35);
	}
	bVar2 = is_ped_planting_bomb(Global_35);
	iVar0 = 0;
	while (iVar0 < iVar494)
	{
		if (does_entity_exist(&(uLocal_496[iVar0])))
		{
			if (!func_48(35) && !bVar355)
			{
				if (has_entity_been_damaged_by_entity(&(uLocal_496[iVar0]), Global_35, 1, 1))
				{
					return true;
				}
			}
			if (is_entity_touching_entity(Global_35, &(uLocal_496[iVar0])))
			{
				freeze_entity_position(&(uLocal_496[iVar0]), false);
				activate_physics(&(uLocal_496[iVar0]));
				return true;
			}
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_touching_entity(iVar1, &(uLocal_496[iVar0])))
				{
					activate_physics(&(uLocal_496[iVar0]));
					return true;
				}
			}
			if (bVar2)
			{
				if (vdist(Global_36, get_entity_coords(&(uLocal_496[iVar0]), true, false)) < 20f)
				{
					func_82(48);
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_222(var uParam0)
{
	func_383(uParam0, 0f);
}

bool func_223(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_224(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_384(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_225(int iParam0, struct<2> Param1, var uParam3)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		set_entity_heading(iParam0, get_heading_from_vector_2d((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

void func_226()
{
	vVar0 = { func_385() };
	if (!func_386(iVar282, 329066242))
	{
		task_aim_at_coord(iVar282, vVar0, -1, get_ped_reset_flag(iVar282, 0), 0);
	}
}

void func_227()
{
	if (!func_48(4))
	{
		start_audio_scene("RE_Sharpshooter_Approach_Blip_Scene");
		func_82(4);
	}
}

bool func_228()
{
	if (func_387(&Local_14, &uLocal_208, 1077936128, 60f, 28f, 1500, 1065353216, 1065353216, 1, 0, 1, -1082130432, 1, 0, 0))
	{
		if (func_51(Global_35, iVar282, 35f, 1))
		{
			return has_entity_clear_los_to_entity(iVar282, Global_35, 17);
		}
	}
	return false;
}

bool func_229(var uParam0)
{
	return func_388(*uParam0, 1);
}

void func_230(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_231(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 0:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 1581.451f, -727.5561f, 43.2309f, 0f, 0f, -35.8488f, 17.7223f, 4.5265f, 4.7155f);
					break;
			}
			break;
		case 1:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x5b7d7bf36d2de18b(uParam0->f_173, -1147.695f, 143.0182f, 45.5213f, 0.0712f, 3.4252f, -244.8f, 5.2465f, 2.8903f, 7.4125f);
					_0x39816f6f94f385ad(uParam0->f_173, -1153.927f, 140.3847f, 43.4271f, 0f, -10.08f, 18.725f, 10.875f, 4.6f, 10.875f);
					break;
				case 1:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -1700.136f, 101.0481f, 146.8555f, 0f, 0f, 131.09f, 8.88f, 5.1785f, 15.484f);
					_0x5b7d7bf36d2de18b(uParam0->f_173, -1695.589f, 95.7537f, 148.9923f, 0f, 0f, 121.68f, 4.45f, 2.625f, 2.95f);
					_0x39816f6f94f385ad(uParam0->f_173, -1691.115f, 92.362f, 145.6757f, 0f, 0f, -12.475f, 16.15f, 2.25f, 8f);
					_0x39816f6f94f385ad(uParam0->f_173, -1695.183f, 97.6553f, 145.9543f, 0f, 0f, -35.17f, 27.825f, 3.25f, 7.4f);
					_0x39816f6f94f385ad(uParam0->f_173, -1692.634f, 96.225f, 148.2868f, 0f, 0f, 0f, 4.4f, 3.175f, 2.8f);
					break;
				case 2:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -2164.048f, -76.4587f, 232.9373f, 0f, 0f, 23.87f, 17.975f, 8.1f, 5.9f);
					_0x39816f6f94f385ad(uParam0->f_173, -2161.216f, -75.7063f, 234.0108f, 0f, 0f, 23.275f, 8.975f, 10.925f, 12.65f);
					break;
			}
			break;
		case 9:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 966.6167f, 986.5777f, 144.0865f, 0f, 0f, -114.27f, 13.15f, 6.975f, 11.85f);
					_0x39816f6f94f385ad(uParam0->f_173, 962.8311f, 976.1946f, 138.2772f, 0f, 0f, -28.775f, 5.225f, 12.875f, 13f);
					_0x39816f6f94f385ad(uParam0->f_173, 958.598f, 994.5651f, 140.8359f, 0f, -7.15f, -19.95f, 20.325f, 4f, 11.75f);
					_0x39816f6f94f385ad(uParam0->f_173, 959.4639f, 984.9128f, 140.5379f, 0f, 0f, -69.84f, 21.525f, 5.6f, 8.95f);
					_0x39816f6f94f385ad(uParam0->f_173, 962.4002f, 989.1908f, 142.5937f, 0f, 0f, 0f, 10.05f, 7.975f, 7.2f);
					_0x39816f6f94f385ad(uParam0->f_173, 955.0737f, 990.9766f, 140.35f, 0f, 0f, 34.1f, 3f, 13.3f, 5.1f);
					break;
				case 1:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 161.9591f, 166.5186f, 108.274f, 0.971f, -0.181f, -147.6f, 3.524f, 12.536f, 14.4f);
					_0x39816f6f94f385ad(uParam0->f_173, 148.8218f, 171.1245f, 114.6219f, 0f, 0f, 23.575f, 5.375f, 10.625f, 10.075f);
					_0x39816f6f94f385ad(uParam0->f_173, 153.9224f, 172.1847f, 111.196f, 0f, 0f, 126.73f, 11.1f, 8.575f, 11.1f);
					_0x39816f6f94f385ad(uParam0->f_173, 159.2676f, 170.8861f, 107.4327f, 0f, 0f, 6.115f, 11.675f, 15.675f, 11.775f);
					_0x39816f6f94f385ad(uParam0->f_173, 163.5354f, 161.1789f, 110.2139f, 0f, 0f, 144.72f, 26.875f, 10.025f, 11.225f);
					_0x39816f6f94f385ad(uParam0->f_173, 151.5048f, 161.2527f, 111.6734f, 0f, 0f, -32.4f, 13.8f, 9.5f, 12.25f);
					break;
				case 2:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 1194.528f, 556.5005f, 89.0708f, 0f, 0f, -25.825f, 9.3453f, 2.9321f, 8.8316f);
					_0x39816f6f94f385ad(uParam0->f_173, 1201.072f, 561.8675f, 86.8417f, -8f, 0f, -29.7f, 2.55f, 15.975f, 10.95f);
					_0x39816f6f94f385ad(uParam0->f_173, 1197.785f, 563.7752f, 86.8195f, -8f, 0f, -52.805f, 1.625f, 16.575f, 10.95f);
					_0x39816f6f94f385ad(uParam0->f_173, 1197.198f, 560.9935f, 86.8191f, -8f, 0f, -41.9f, 2.35f, 12.3f, 10.95f);
					_0x39816f6f94f385ad(uParam0->f_173, 1195.524f, 558.9304f, 87.432f, -8f, 0f, -49.68f, 4.775f, 7.75f, 11.35f);
					break;
				case 3:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -73.245f, -311.4503f, 91.8131f, 0f, 0f, -293.915f, 5.7247f, 10.2255f, 9.4568f);
					_0x39816f6f94f385ad(uParam0->f_173, -69.1762f, -304.6959f, 92.4613f, 0f, 0f, -4.55f, 4.25f, 12.925f, 8.125f);
					_0x39816f6f94f385ad(uParam0->f_173, -72.1834f, -305.0329f, 92.1594f, 0f, 0f, -31.175f, 5.525f, 9.775f, 8.7f);
					_0x39816f6f94f385ad(uParam0->f_173, -70.9184f, -299.2454f, 92.9159f, 0f, 0f, -42.39f, 1.375f, 1.925f, 7.2f);
					break;
			}
			break;
		case 11:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 1734.862f, -1676.866f, 48.5642f, 0f, 0f, 58.54f, 8.9244f, 6.1729f, 5.314f);
					_0xbce668aaf83608be(uParam0->f_173, 1733.115f, -1679.696f, 47.503f, 0f, 0f, 56.925f, 6f, 3.15f, 4f);
					break;
				case 1:
					uParam0->f_173 = _create_volume_aggregate();
					_0x5b7d7bf36d2de18b(uParam0->f_173, 1185.649f, -601.7785f, 68.2668f, 0f, 0f, -21.25f, 10.6195f, 4.5859f, 5.5982f);
					_0x5b7d7bf36d2de18b(uParam0->f_173, 1194.419f, -600.6198f, 66.8179f, 0f, 0f, 26.325f, 5.675f, 3.5f, 2.95f);
					_0x5b7d7bf36d2de18b(uParam0->f_173, 1187.025f, -595.3335f, 66.3036f, 0f, 0f, 0f, 4.625f, 4.4f, 4.075f);
					_0x39816f6f94f385ad(uParam0->f_173, 1191.491f, -594.624f, 65.4655f, 0f, 0f, -9.4f, 8.3f, 16.625f, 5.8f);
					_0x39816f6f94f385ad(uParam0->f_173, 1196.132f, -594.3842f, 65.4655f, 0f, 0f, 8.2f, 3.7f, 14.25f, 5.7f);
					_0x39816f6f94f385ad(uParam0->f_173, 1190.17f, -588.8965f, 65.4642f, 0f, 0f, -28.525f, 6.55f, 11.7f, 4.725f);
					_0xbce668aaf83608be(uParam0->f_173, 1193.907f, -583.9496f, 65.4798f, 0f, 0f, 61.85f, 4.375f, 4.2f, 5.225f);
					break;
				case 2:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 956.3665f, -1032.747f, 59.4146f, 0f, 0f, 18.175f, 9.45f, 8.075f, 11f);
					_0xbce668aaf83608be(uParam0->f_173, 955.0429f, -1029.011f, 59.1623f, 0f, 0f, 18.325f, 4.7f, 9.1f, 5.425f);
					_0xbce668aaf83608be(uParam0->f_173, 952.1093f, -1021.789f, 58.4125f, 0f, 0f, -54.75f, 3.2f, 2.625f, 9.925f);
					break;
			}
			break;
		case 13:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -5600.245f, -3553.576f, -23.58f, 0f, 0f, 20.15f, 16.425f, 4.65f, 7.825f);
					_0x39816f6f94f385ad(uParam0->f_173, -5602.375f, -3552.836f, -23.6634f, 0f, 0f, 29.275f, 13.375f, 3.475f, 10.9f);
					_0x39816f6f94f385ad(uParam0->f_173, -5599.93f, -3554.729f, -23.6258f, 0f, 0f, 10.8f, 16.025f, 4.825f, 10.8f);
					_0xbce668aaf83608be(uParam0->f_173, -5593.082f, -3549.854f, -23.1261f, 0f, 0f, 23.675f, 5.825f, 9.95f, 5.825f);
					break;
			}
			break;
		case 14:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0xbce668aaf83608be(uParam0->f_173, -4628.887f, -3336.797f, 23.3816f, 0f, 0f, 14.7f, 10.125f, 6.1f, 4.85f);
					_0x39816f6f94f385ad(uParam0->f_173, -4625.121f, -3345.03f, 20.9322f, 0f, 0f, 14f, 10.225f, 18.825f, 5.35f);
					break;
			}
			break;
		case 15:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -4041.435f, -3049.843f, -10.3839f, 0f, 0f, -18.95f, 21.025f, 7.325f, 6.2f);
					_0xbce668aaf83608be(uParam0->f_173, -4036.895f, -3050.904f, -4.5047f, 0f, 0f, 71.28f, 13.3f, 7.775f, 6.825f);
					break;
			}
			break;
	}
}

bool func_232(int iParam0, int iParam1, var uParam2)
{
	func_42(*uParam2);
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, 966.6548f, 995.6918f, 137.5537f, 0f, 0f, -25.75f, 20.5f, 12f, 18.75f, "RESS_CHALLENGE_AREA");
					break;
				case 1:
					func_389(uParam2, 163.7425f, 159.5828f, 107.2344f, 0f, 0f, -45f, 10.90119f, 12.7705f, 10.14313f, "RESS_CHALLENGE_AREA");
					break;
				case 2:
					func_389(uParam2, 1199.138f, 562.7507f, 91.83619f, 0f, 0f, -47f, 9.470318f, 16.20708f, 8.206607f, "RESS_CHALLENGE_AREA");
					break;
				case 3:
					func_389(uParam2, -71.17002f, -308.1253f, 91.81315f, 7.623108f, -0.5300486f, -17.20157f, 5.724657f, 10.22554f, 7.831842f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, 1732.737f, -1678.716f, 51.11424f, 0f, 0f, 66f, 8.17444f, 6.422899f, 8.788971f, "RESS_CHALLENGE_AREA");
					break;
				case 1:
					func_389(uParam2, 1191.274f, -591.6787f, 69.89084f, 0f, 0f, -21.25f, 12.71953f, 16.81088f, 5.598246f, "RESS_CHALLENGE_AREA");
					break;
				case 2:
					func_389(uParam2, 954.9057f, -1030.315f, 60.76045f, 0f, 0f, 15.5f, 16f, 20.75f, 11f, "RESS_CHALLENGE_AREA");
					break;
				case 3:
					func_389(uParam2, 1438.093f, -1943.177f, 50.27119f, 0f, 0f, 14.39175f, 17.238f, 8.134909f, 5.952628f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					func_390(uParam2, 1581.851f, -727.8561f, 47.90592f, 0f, 0f, -36.57376f, 17.72234f, 6.07649f, 13.26552f, "RESS_CHALLENGE_AREA");
					break;
				case 1:
					func_389(uParam2, 2150.05f, -1259.756f, 43.07419f, 0f, 0f, -19.25f, 8.647827f, 12.06849f, 8.308363f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, -1149.595f, 143.0182f, 45.52128f, 0.071232f, 3.425237f, -178.8079f, 12.84648f, 8.090261f, 9.812469f, "RESS_CHALLENGE_AREA");
					break;
				case 1:
					func_389(uParam2, -1692.011f, 96.26418f, 148.6309f, 0f, 0f, -16.25f, 17.27998f, 10.05352f, 11.70896f, "RESS_CHALLENGE_AREA");
					break;
				case 2:
					func_389(uParam2, -2170.684f, -83.34738f, 238.8326f, 0f, 0f, 14.25f, 17.28376f, 15.67632f, 11.78309f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, -5599.317f, -3554.674f, -19.00344f, 0f, 0f, 22.75f, 22.29105f, 12.00386f, 9.343032f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, -4629.35f, -3344.529f, 24.41866f, 0f, 0f, 19.25f, 8.297122f, 14.88162f, 6.95891f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_389(uParam2, -4042.647f, -3050.24f, -6.400399f, 0f, 0f, -102f, 13.62024f, 14.64571f, 7.079018f, "RESS_CHALLENGE_AREA");
					break;
			}
			break;
		default:
			return false;
	}
	return _does_volume_exist(*uParam2);
}

void func_233()
{
	if (func_51(Global_35, iVar282, 120f, 0))
	{
		if (!func_229(&uLocal_778) || func_380(&uLocal_778, fVar759))
		{
			func_391();
			func_222(&uLocal_778);
			fLocal_761 = get_random_float_in_range(3f, 6f);
		}
		if (is_ped_shooting(iVar282))
		{
			if (!bVar345)
			{
				iLocal_347 = 1;
				func_392(&Local_14, iVar282, 0);
			}
			else
			{
				func_393(1066055203, iVar282, 1);
			}
			if (func_51(iVar282, Global_35, 75f, 1))
			{
				if (!func_48(32))
				{
					func_263(iVar282, iVar282, 1);
					func_82(32);
					func_222(&uLocal_322);
				}
				else if (!func_48(33))
				{
					if (func_380(&uLocal_322, 12f))
					{
						func_263(iVar282, iVar282, 0);
						func_82(33);
					}
				}
			}
			iLocal_747 = 1;
		}
		else if (!func_386(iVar282, 1237250926))
		{
			task_aim_gun_at_coord(iVar282, func_385(), -1, false, false);
		}
	}
}

void func_234(bool bParam0)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	func_377(&Var0, Global_35, 0, 0, 3, 1, 1, 2, 0, 0, 0, 0);
	_0x66f9eb44342bb4c5(iVar281, &Var0);
	if (bParam0)
	{
		if (func_51(Global_35, iVar281, 20f, 1))
		{
			func_377(&Var0, iVar281, 0, 0, 3, 1, 1, 2, 0, 0, 0, 0);
			_0x66f9eb44342bb4c5(Global_35, &Var0);
		}
	}
}

bool func_235()
{
	switch (iVar272)
	{
		case 0:
			if (!func_394(&uLocal_284))
			{
				set_ped_accuracy(iVar282, 100);
				set_object_targettable(&(uLocal_496[Local_216.f_5]), false);
				func_395(iVar282, &(uLocal_496[Local_216.f_5]), -1, 1566631136);
				func_222(&uLocal_763);
				iLocal_274 = 1;
			}
			break;
		case 1:
			func_396();
			bVar0 = has_entity_been_damaged_by_any_ped(&(uLocal_496[Local_216.f_5]));
			if (bVar0 || func_380(&uLocal_763, 1f))
			{
				func_397();
				func_398(&Local_216, &uLocal_284, 0, 0, &Local_211, 0);
				set_ped_using_action_mode(iVar282, false, -1, 0);
				if (!bVar0)
				{
					if (does_entity_exist(&(uLocal_496[Local_216.f_5])))
					{
						delete_object(uLocal_496[Local_216.f_5]);
					}
				}
				task_look_at_entity(iVar282, Global_35, -1, 0, 51, 1);
				if (func_229(&uLocal_763))
				{
					func_230(&uLocal_763);
				}
				iLocal_274 = 2;
			}
			break;
		case 2:
			if (has_anim_event_fired(iVar282, -455911057))
			{
				iLocal_758 = 1;
			}
			func_212(&Local_216, 1, iVar282, &uLocal_268);
			func_234(1);
			if (func_399(iVar282, 0, 1, "CALLOVER_IDLE", "CALLOVER_IDLE_SHOOTER"))
			{
				if (!func_400(iVar282, 1))
				{
					if (!func_229(&uLocal_763))
					{
						func_222(&uLocal_763);
					}
					else if (func_380(&uLocal_763, 3f) || func_51(Global_35, iVar282, (28f * 0.5f), 1))
					{
						func_381(iVar282, &iLocal_285, -89429847, 580546400, 0, 0);
						set_blip_name_from_text_file(iVar283, "RE_INTER_STRANGER");
						return true;
					}
				}
			}
			else if (bVar756)
			{
				if (func_401(iVar282, Global_35, 0.707f) != 0)
				{
					func_402(iVar282, Global_35, 0, 1, "CALLOVER_IDLE", "CALLOVER_IDLE_SHOOTER", -1, 1082130432, -1065353216, 1);
					iLocal_758 = 0;
				}
			}
			break;
	}
	return false;
}

bool func_236()
{
	switch (iVar273)
	{
		case 0:
			if (func_403(-5f, 1, 0, 0))
			{
				if (func_51(iVar282, Global_35, 35f, 1))
				{
					open_sequence_task(&iVar0);
					func_402(0, Global_35, 0, 1, "CALLOVER_LINE_A", func_404("CHALLENGE_01_SHOOTER", "CHALLENGE_02_SHOOTER"), -1, 1082130432, -1065353216, 0);
					func_257(Global_35, Local_216, -1, 1082130432, -1065353216, 1);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					func_129(40);
					iLocal_275 = 1;
				}
			}
			break;
		case 1:
			func_212(&Local_216, 1, iVar282, &uLocal_268);
			if (func_399(iVar282, 0, 1, "CALLOVER_IDLE", "CALLOVER_IDLE_SHOOTER") || func_405())
			{
				func_406();
				iLocal_359 = 1;
				iLocal_275 = 2;
			}
			break;
		case 2:
			switch (func_407(1073741824, 1))
			{
				case 0:
					func_46(1);
					func_82(5);
					func_408(iVar282, 0, 1);
					func_409(iVar282, 2);
					iLocal_357 = 1;
					iLocal_275 = 5;
					break;
				case 1:
					func_408(iVar282, 0, 1);
					iLocal_357 = 1;
					iLocal_275 = 3;
					break;
				case -1:
					if (!func_410())
					{
						if (func_411())
						{
							func_412(1);
							iLocal_357 = 1;
							func_408(iVar282, 0, 1);
							iLocal_273 = 12;
							return false;
						}
					}
					break;
			}
			break;
		case 5:
			if (!func_400(Global_35, 1))
			{
				if (Local_216 == 1)
				{
					open_sequence_task(&iVar0);
					func_256(0, Global_35, 1, "CHALLENGE_03_SHOOTER", -1, 1082130432, -1065353216, 0);
					func_257(Global_35, Local_216, -1, 1082130432, -1065353216, 1);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
				}
				func_129(40);
				func_412(1);
				iLocal_275 = 6;
			}
			break;
		case 6:
			func_212(&Local_216, 2, iVar282, &uLocal_268);
			if (Local_216 == 1)
			{
				if (get_sequence_progress(iVar282) == 1 || func_405())
				{
					return true;
				}
			}
			else if (func_403(-5.5f, 1, 0, 0))
			{
				func_263(iVar282, Global_35, 7);
				return true;
			}
			break;
		case 3:
			if (!func_400(Global_35, 1))
			{
				if (Local_216 == 1)
				{
					open_sequence_task(&iVar0);
					func_256(0, Global_35, 1, "DECLINE_SHOOTER", -1, 1082130432, -1065353216, 0);
					func_257(Global_35, Local_216, -1, 1082130432, -1065353216, 1);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
				}
				func_129(40);
				func_412(1);
				func_6(&uLocal_268, 96, 1);
				func_6(&uLocal_268, 97, 0);
				iLocal_275 = 4;
			}
			break;
		case 4:
			func_212(&Local_216, 2, iVar282, &uLocal_268);
			if (Local_216 == 1)
			{
				if (get_sequence_progress(iVar282) == 1 || func_405())
				{
					return true;
				}
			}
			else if (func_403(-5.5f, 1, 0, 0))
			{
				func_263(iVar282, Global_35, 9);
				return true;
			}
			break;
	}
	return false;
}

void func_237()
{
	iLocal_613 = 0;
	if (func_229(&uLocal_614))
	{
		func_230(&uLocal_614);
	}
}

void func_238()
{
	Global_1905944->f_5695 = 1;
}

bool func_239()
{
	if (iVar722 >= 18)
	{
	}
	func_212(&Local_216, 3, iVar282, &uLocal_268);
	func_212(&Local_216, 4, iVar282, &uLocal_268);
	switch (iVar722)
	{
		case 0:
			func_413(Local_216.f_7, Local_216, -1, 1082130432, -1065353216, 0);
			func_414();
			iLocal_724 = 1;
			break;
		case 1:
			if (func_415(iVar282, Local_216.f_7, 0.5f))
			{
				if (is_ped_still(iVar282))
				{
					open_sequence_task(&iVar0);
					task_aim_gun_at_coord(0, Local_216.f_7, 1000, false, true);
					task_aim_gun_at_coord(0, Local_216.f_7, -1, false, true);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					iLocal_724 = 2;
				}
			}
			break;
		case 2:
			if (!is_scripted_speech_playing(iVar282) && get_sequence_progress(iVar282) == 1)
			{
				switch (Local_216)
				{
					case 1:
						func_416();
						break;
					case 0:
						func_263(iVar282, Global_35, 11);
						break;
				}
				func_129(40);
				iLocal_724 = 3;
			}
			break;
		case 3:
			if (func_417())
			{
				iLocal_724 = 4;
			}
			break;
		case 4:
			switch (func_418())
			{
				case 0:
					if (!func_48(14))
					{
						func_419();
					}
					func_420();
					iLocal_724 = 18;
					break;
				case 1:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(9))
						{
							func_263(iVar282, Global_35, 18);
							func_82(9);
						}
						iLocal_724 = 5;
					}
					break;
				case 2:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(8))
						{
							func_263(iVar282, Global_35, 17);
							func_82(8);
						}
						iLocal_724 = 6;
					}
					break;
				case 3:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(11))
						{
							func_263(iVar282, Global_35, 19);
							func_82(11);
						}
						iLocal_724 = 10;
					}
					break;
				case 4:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(10))
						{
							func_263(iVar282, Global_35, 20);
							func_82(10);
						}
						iLocal_724 = 8;
					}
					break;
				case 5:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(7))
						{
							func_263(iVar282, Global_35, 16);
							func_82(7);
						}
						iLocal_724 = 12;
					}
					break;
				case 6:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(12))
						{
							func_263(iVar282, Global_35, 21);
							func_82(12);
						}
						iLocal_724 = 15;
					}
					break;
				case 7:
					func_421();
					if (!is_scripted_speech_playing(iVar282))
					{
						if (!func_48(13))
						{
							switch (Local_216)
							{
								case 1:
									func_252(iVar282, Global_35, "PLAYER_LOITERING", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								default:
									func_252(iVar282, Global_35, "BUMP", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							func_82(13);
						}
						func_422("RESS_OBJ_GOTO", 7500, 0, 0, -1, -1, 0);
						iLocal_724 = 17;
					}
					break;
			}
			break;
		case 5:
			if (!is_scripted_speech_playing(iVar282))
			{
				iLocal_724 = 4;
			}
			break;
		case 6:
			if (!is_scripted_speech_playing(iVar282))
			{
				if (!func_423(2))
				{
					iLocal_724 = 4;
				}
				else
				{
					func_422("RESS_OBJ_GOTO", 7500, 0, 0, -1, -1, 0);
					iLocal_724 = 7;
				}
			}
			break;
		case 17:
			if (!func_423(7))
			{
				iLocal_724 = 4;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 7:
			if (!func_423(2))
			{
				iLocal_724 = 4;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 8:
			if (!is_scripted_speech_playing(iVar282))
			{
				if (!func_423(4))
				{
					iLocal_724 = 4;
				}
				else
				{
					func_422("RESS_OBJ_VEHICLE", 7500, 0, 0, -1, -1, 0);
					iLocal_724 = 9;
				}
			}
			break;
		case 9:
			if (!func_423(4))
			{
				iLocal_724 = 4;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 10:
			if (!is_scripted_speech_playing(iVar282))
			{
				if (!func_423(3))
				{
					iLocal_724 = 4;
				}
				else
				{
					func_422("RESS_OBJ_MOUNT", 7500, 0, 0, -1, -1, 0);
					iLocal_724 = 11;
				}
			}
			break;
		case 11:
			if (!func_423(3))
			{
				iLocal_724 = 4;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 12:
			if (!is_scripted_speech_playing(iVar282))
			{
				if (!func_423(5))
				{
					iLocal_724 = 4;
				}
				else
				{
					func_422("RESS_OBJ_CLEAR", 7500, 0, 0, -1, -1, 0);
					iLocal_724 = 13;
				}
			}
			break;
		case 13:
			if (!func_423(5))
			{
				func_222(&uLocal_721);
				iLocal_724 = 14;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 14:
			if (func_380(&uLocal_721, 3f))
			{
				if (!is_scripted_speech_playing(iVar282))
				{
					iLocal_724 = 4;
				}
			}
			break;
		case 15:
			if (!is_scripted_speech_playing(iVar282))
			{
				if (!func_423(6))
				{
					iLocal_724 = 4;
				}
				else
				{
					func_422("RESS_OBJ_WEAPON", 7500, 0, 0, -1, -1, 0);
					iLocal_724 = 16;
				}
			}
			break;
		case 16:
			if (!func_423(6))
			{
				iLocal_724 = 4;
			}
			else if (func_424())
			{
				iLocal_724 = 20;
			}
			break;
		case 18:
			if (func_48(14) || func_425())
			{
				func_420();
				func_422("RESS_OBJ_AIM", 7500, 0, 0, -1, -1, 0);
				if (!func_48(14))
				{
					func_82(14);
				}
				iLocal_724 = 19;
			}
			break;
		case 19:
			if (func_426())
			{
				if (!is_ped_shooting(Global_35))
				{
					func_427();
				}
				else
				{
					iLocal_753 = 1;
					func_82(16);
				}
				if (!func_287(iVar695, 1))
				{
					func_208(iVar695, 1);
				}
				func_420();
				func_222(&uLocal_715);
				func_222(&uLocal_718);
				func_50(iVar282);
				_0x873c792e07a32c8b(iVar282, 0);
				iLocal_828 = 1;
				func_428();
				func_241();
				iLocal_724 = 21;
			}
			else if (func_418() == 0)
			{
				if (func_424())
				{
					iLocal_828 = 1;
					iLocal_724 = 20;
				}
			}
			else
			{
				iLocal_724 = 4;
			}
			break;
		case 20:
			if (func_424())
			{
				iLocal_273 = 12;
			}
			break;
		case 21:
			func_429();
			if (!bVar751)
			{
				if (is_ped_shooting(Global_35))
				{
					iLocal_753 = 1;
				}
				else if (!func_229(&uLocal_775))
				{
					if (!func_400(iVar282, 0))
					{
						func_222(&uLocal_775);
					}
				}
				else if (func_380(&uLocal_775, 2f))
				{
					func_422("RESS_OBJ_SHOOT_01", 7500, 0, 0, -1, -1, 0);
					iLocal_753 = 1;
				}
			}
			if (func_48(15))
			{
				if (!func_48(16))
				{
					if (func_430() || is_ped_shooting(Global_35))
					{
						func_82(16);
					}
				}
			}
			if (func_48(16))
			{
				if (func_431(&uLocal_496, &uLocal_479, (func_66(Local_216.f_4) - 1), 0))
				{
					if (iVar579 > iVar580)
					{
						func_82(19);
						func_129(38);
						iLocal_606 = 1;
					}
					else
					{
						func_82(44);
						iLocal_606 = 0;
					}
					func_241();
					func_286(iVar695, 1);
					return true;
				}
				else
				{
					if (func_229(&uLocal_715))
					{
						if (func_380(&uLocal_715, 180f))
						{
							func_114(8, 0, 0);
							return false;
						}
					}
					if (func_229(&uLocal_718))
					{
						if (func_394(&Global_35))
						{
							func_222(&uLocal_718);
						}
						else if (func_380(&uLocal_718, 60f))
						{
							func_114(4, 0, 0);
							return false;
						}
					}
					if (is_player_free_aiming(player_id()))
					{
						switch (func_432(Global_35, 0, 1, 0))
						{
							case -1504859554:
							case 1885857703:
								func_114(5, 0, 0);
								return false;
						}
					}
					if (func_433(0))
					{
						if (!func_229(&uLocal_772))
						{
							func_222(&uLocal_772);
						}
						if (!is_scripted_speech_playing(iVar282))
						{
							if (is_ped_shooting(Global_35) || func_380(&uLocal_772, 3f))
							{
								func_114(10, 0, 0);
								return false;
							}
						}
					}
					else
					{
						if (func_229(&uLocal_772))
						{
							func_230(&uLocal_772);
						}
						if (!bVar347)
						{
							if (!func_434(7f, 0))
							{
								func_263(iVar282, Global_35, 89);
								iLocal_349 = 1;
							}
						}
					}
					if (is_ped_on_mount(Global_35) || is_ped_in_any_vehicle(Global_35, false))
					{
						func_114(9, 0, 0);
						return false;
					}
				}
			}
			break;
	}
	if (!bVar826)
	{
		if (iVar722 < 21)
		{
			if (is_ped_shooting(Global_35))
			{
				if (!func_48(2))
				{
					func_114(0, 0, 0);
					return false;
				}
				else
				{
					func_82(37);
					func_82(35);
					func_82(16);
					func_240(1, 0f);
					func_263(iVar282, Global_35, 14);
					iLocal_724 = 21;
				}
			}
		}
		else
		{
			if (func_435())
			{
				func_114(2, 0, 0);
				return false;
			}
			if (!func_434(1098907648, 0))
			{
				func_114(1, 0, 0);
				return false;
			}
			if (func_113())
			{
				func_114(3, 0, 0);
				return false;
			}
			if (!func_436(1))
			{
				if (is_ped_shooting(Global_35) || func_386(Global_35, -1388855549))
				{
					func_114(5, 0, 0);
					return false;
				}
			}
		}
	}
	return false;
}

void func_240(int iParam0, float fParam1)
{
	if (iVar655 != iParam0)
	{
		if (fParam1 <= 0f)
		{
			func_437(iParam0);
			if (func_229(&uLocal_655))
			{
				func_230(&uLocal_655);
			}
		}
		else
		{
			func_222(&uLocal_655);
			iLocal_660 = iParam0;
			fLocal_658 = fParam1;
		}
	}
}

void func_241()
{
	_uilog_clear_cached_objective();
}

bool func_242()
{
	func_212(&Local_216, 4, iVar282, &uLocal_268);
	func_212(&Local_216, 5, iVar282, &uLocal_268);
	switch (iVar275)
	{
		case 0:
			open_sequence_task(&iVar0);
			if (func_48(19))
			{
				func_438(0, 0, 3, "SHOOTER_LOSE", "WIN_EXIT_SHOOTER", -1, 1082130432, -1065353216, 0);
			}
			else
			{
				func_438(0, 0, 3, "SHOOTER_WIN", "LOST_EXIT_SHOOTER", -1, 1082130432, -1065353216, 0);
			}
			func_257(Global_35, 2, -1, 1082130432, -1065353216, 1);
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			func_129(40);
			iLocal_277 = 1;
			break;
		case 1:
			if (get_sequence_progress(iVar282) == 1 || func_405())
			{
				if (func_51(iVar282, Global_35, 20f, 1))
				{
					if (func_48(19))
					{
						func_263(Global_35, iVar282, 28);
					}
					else
					{
						func_263(Global_35, iVar282, 30);
					}
				}
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				iLocal_277 = 2;
			}
			break;
		case 2:
			if (!func_400(Global_35, 1))
			{
				if (Local_251 == 0)
				{
					open_sequence_task(&iVar0);
					if (func_48(19))
					{
						func_256(0, Global_35, 3, func_258(1), -1, 1082130432, -1065353216, 1);
					}
					else
					{
						func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(0), -1, 1082130432, -1065353216, 1);
					}
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					func_46(0);
					func_264();
					iLocal_277 = 3;
				}
				else
				{
					return true;
				}
			}
			break;
		case 3:
			if (func_48(19) || get_sequence_progress(iVar282) == 1)
			{
				if (!func_400(iVar282, 1))
				{
					if (func_48(19))
					{
						open_sequence_task(&iVar0);
						func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(1), -1, 1082130432, -1065353216, 1);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
					}
					iLocal_277 = 4;
				}
			}
			break;
		case 4:
			if (func_439(iVar282, 3, func_258(iVar604)) || has_anim_event_fired(iVar282, 261077547))
			{
				iLocal_273 = 10;
				return false;
			}
			break;
	}
	return false;
}

bool func_243()
{
	func_212(&Local_216, 5, iVar282, &uLocal_268);
	func_212(&Local_216, 6, iVar282, &uLocal_268);
	switch (Local_251)
	{
		case 1:
			switch (Local_251.f_5)
			{
				case 0:
					func_212(&Local_216, 8, iVar282, &uLocal_268);
					func_212(&Local_216, 12, iVar282, &uLocal_268);
					break;
				case 1:
					func_212(&Local_216, 9, iVar282, &uLocal_268);
					func_212(&Local_216, 13, iVar282, &uLocal_268);
					break;
				case 2:
					func_212(&Local_216, 10, iVar282, &uLocal_268);
					func_212(&Local_216, 14, iVar282, &uLocal_268);
					break;
			}
			break;
	}
	switch (iVar276)
	{
		case 0:
			open_sequence_task(&iVar0);
			if (func_48(19))
			{
				func_256(0, Global_35, 3, "WIN_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
			}
			else
			{
				func_256(0, Global_35, 3, "LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
			}
			func_257(Global_35, 2, -1, 1082130432, -1065353216, 1);
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			func_129(40);
			iLocal_278 = 1;
			break;
		case 1:
			if (get_sequence_progress(iVar282) == 1 || func_405())
			{
				func_440();
				func_46(0);
				iLocal_278 = 2;
			}
			break;
		case 2:
			switch (func_407(1073741824, 1))
			{
				case 0:
					func_46(1);
					func_441(0);
					func_408(iVar282, 0, 1);
					func_82(49);
					iLocal_278 = 3;
					break;
				case 1:
					func_408(iVar282, 0, 1);
					func_264();
					iLocal_278 = 6;
					break;
				case -1:
					if (func_442())
					{
						iLocal_738 = -1;
						open_sequence_task(&iVar0);
						if (func_48(19))
						{
							func_256(0, Global_35, 3, "CHALL_WON_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
							iLocal_738 = iVar736 + 1;
							func_257(Global_35, 2, 2000, 1082130432, -1065353216, 1);
							iLocal_738 = iVar736 + 1;
							func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
							iLocal_738 = iVar736 + 1;
							func_256(0, Global_35, 3, func_258(1), -1, 1082130432, -1065353216, 1);
							iLocal_738 = iVar736 + 1;
						}
						else
						{
							func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
							iLocal_738 = iVar736 + 1;
							func_256(0, Global_35, 3, func_258(0), -1, 1082130432, -1065353216, 1);
							iLocal_738 = iVar736 + 1;
						}
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
						func_408(iVar282, 0, 1);
						func_82(28);
						func_46(0);
						func_412(1);
						iLocal_278 = 8;
					}
					break;
			}
			break;
		case 3:
			if (!func_400(Global_35, 1))
			{
				open_sequence_task(&iVar0);
				func_256(0, Global_35, 3, "CHALL_ACCEPT_SHOOTER", -1, 1082130432, -1065353216, 0);
				func_413(func_443(), 2, -1, 1082130432, -1065353216, 1);
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				func_412(1);
				func_82(6);
				func_409(iVar282, 2);
				iLocal_278 = 4;
			}
			break;
		case 4:
			if (get_sequence_progress(iVar282) == 1)
			{
				if (is_ped_still(iVar282))
				{
					if (func_415(iVar282, func_443(), 0.5f))
					{
						open_sequence_task(&iVar0);
						func_255(0, 3, "INTO_POSITION_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						func_255(0, 3, "READY_BASE_SHOOTER", -1, 1082130432, -1065353216, 1, 0);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
						func_441(0);
						iLocal_278 = 5;
					}
				}
			}
			break;
		case 5:
			if (get_sequence_progress(iVar282) == 1)
			{
				return true;
			}
			break;
		case 6:
			if (!func_400(Global_35, 1))
			{
				iLocal_738 = -1;
				open_sequence_task(&iVar0);
				if (func_48(19))
				{
					func_256(0, Global_35, 3, "CHALL_WON_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
					iLocal_738 = iVar736 + 1;
					func_256(0, Global_35, 3, func_258(0), -1, 1082130432, -1065353216, 1);
					iLocal_738 = iVar736 + 1;
				}
				else
				{
					func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
					iLocal_738 = iVar736 + 1;
					func_256(0, Global_35, 3, func_258(0), -1, 1082130432, -1065353216, 1);
					iLocal_738 = iVar736 + 1;
				}
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				func_46(0);
				func_6(&uLocal_268, 96, 1);
				func_6(&uLocal_268, 97, 0);
				func_412(1);
				if (func_48(19))
				{
					iLocal_278 = 7;
				}
				else
				{
					iLocal_278 = 8;
				}
			}
			break;
		case 7:
			func_212(&Local_216, 16, iVar282, &uLocal_268);
			if (get_sequence_progress(iVar282) > 0 && !func_400(iVar282, 1))
			{
				open_sequence_task(&iVar0);
				iLocal_738 = -1;
				if (func_48(19))
				{
					func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
					iLocal_738 = iVar736 + 1;
					func_256(0, Global_35, 3, func_258(1), -1, 1082130432, -1065353216, 1);
					iLocal_738 = iVar736 + 1;
				}
				else
				{
					func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
					iLocal_738 = iVar736 + 1;
					func_256(0, Global_35, 3, func_258(0), -1, 1082130432, -1065353216, 1);
					iLocal_738 = iVar736 + 1;
				}
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				iLocal_278 = 8;
			}
			break;
		case 8:
			func_212(&Local_216, 16, iVar282, &uLocal_268);
			if (!func_400(iVar282, 1))
			{
				if (get_sequence_progress(iVar282) == iVar736 || has_anim_event_fired(iVar282, 261077547))
				{
					if (func_439(iVar282, 3, func_258(iVar604)) || has_anim_event_fired(iVar282, 261077547))
					{
						iLocal_273 = 10;
						return false;
					}
				}
			}
			break;
	}
	if (iVar274 > 1)
	{
		if (func_394(&Global_35))
		{
			func_114(0, 1, 0);
			func_46(0);
		}
	}
	return false;
}

bool func_244()
{
	func_212(&Local_216, 15, iVar282, &uLocal_268);
	func_212(&Local_216, 16, iVar282, &uLocal_268);
	switch (Local_251)
	{
		case 1:
			switch (Local_251.f_5)
			{
				case 0:
					func_212(&Local_216, 8, iVar282, &uLocal_268);
					func_212(&Local_216, 12, iVar282, &uLocal_268);
					break;
				case 1:
					func_212(&Local_216, 9, iVar282, &uLocal_268);
					func_212(&Local_216, 13, iVar282, &uLocal_268);
					break;
				case 2:
					func_212(&Local_216, 10, iVar282, &uLocal_268);
					func_212(&Local_216, 14, iVar282, &uLocal_268);
					break;
			}
			break;
	}
	if (iVar277 < 5)
	{
		func_234(1);
	}
	switch (Local_251)
	{
		case 1:
			if (func_444())
			{
				return true;
			}
			break;
	}
	if (iVar277 != 4)
	{
		if (iVar277 < 5)
		{
			if (func_394(&Global_35))
			{
				if (!func_445())
				{
					func_114(0, 1, 0);
				}
			}
		}
		else if (!func_434(7f, 1))
		{
			if (!func_51(Global_35, iVar282, 20f, 1))
			{
				func_114(1, 1, 0);
			}
		}
	}
	return false;
}

bool func_245()
{
	func_212(&Local_216, 15, iVar282, &uLocal_268);
	func_212(&Local_216, 16, iVar282, &uLocal_268);
	if (func_229(&uLocal_739))
	{
		if (func_446(&uLocal_739, 3f))
		{
			_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		}
	}
	switch (iVar278)
	{
		case 0:
			func_222(&uLocal_739);
			func_264();
			open_sequence_task(&iVar0);
			iLocal_738 = -1;
			if (func_48(20))
			{
				func_255(0, 3, "PLAYER_WINS_REACT_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				iLocal_738 = iVar736 + 2;
			}
			else
			{
				func_255(0, 3, "PLAYER_LOSE_REACT_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
				func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
				iLocal_738 = iVar736 + 2;
			}
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			iLocal_280 = 1;
			break;
		case 1:
			if (!func_400(iVar282, 1))
			{
				if (get_sequence_progress(iVar282) == iVar736)
				{
					open_sequence_task(&iVar0);
					iLocal_738 = -1;
					if (func_48(20))
					{
						func_256(0, Global_35, 3, "PLAYER_WINS_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
						iLocal_738 = iVar736 + 2;
					}
					else
					{
						func_256(0, Global_35, 3, "PLAYER_LOSE_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
						iLocal_738 = iVar736 + 2;
					}
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					iLocal_280 = 2;
				}
			}
			break;
		case 2:
			if (!func_400(iVar282, 1))
			{
				if (get_sequence_progress(iVar282) == iVar736)
				{
					open_sequence_task(&iVar0);
					iLocal_738 = -1;
					if (func_48(20))
					{
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						iLocal_738 = iVar736 + 1;
					}
					else
					{
						func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
						iLocal_738 = iVar736 + 2;
					}
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					iLocal_280 = 3;
				}
			}
			break;
		case 3:
			if (!func_400(iVar282, 1))
			{
				if (get_sequence_progress(iVar282) == iVar736)
				{
					func_129(49);
					iLocal_280 = 4;
				}
			}
			break;
		case 4:
			if (get_sequence_progress(iVar282) == iVar736)
			{
				if (!func_400(iVar282, 1))
				{
					if (func_48(20))
					{
						open_sequence_task(&iVar0);
						func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
					}
					iLocal_280 = 5;
				}
			}
			break;
		case 5:
			if (func_439(iVar282, 3, func_258(iVar604)) || has_anim_event_fired(iVar282, 261077547))
			{
				func_46(0);
				return true;
			}
			break;
	}
	return false;
}

void func_246()
{
	iLocal_350 = 1;
}

int func_247()
{
	if (has_anim_event_fired(iVar282, func_368(17, 88, &Local_216)))
	{
		switch (iVar652)
		{
			case 0:
				func_263(iVar282, Global_35, 88);
				break;
		}
	}
	if (func_48(45))
	{
		if (func_386(iVar282, 242628503))
		{
			if (get_sequence_progress(iVar282) == 1)
			{
				func_129(45);
				func_263(iVar282, Global_35, 87);
			}
		}
	}
	if (func_48(34))
	{
		if (func_439(iVar282, 3, func_258(iVar604)) || has_anim_event_fired(iVar282, 261077547))
		{
			func_46(0);
			if (func_447(iVar652))
			{
				func_372(1, 0, 0, "RE_HONOR_CHEATED", iVar282, 0, 1065353216, 0);
			}
			func_82(37);
			iLocal_273 = 10;
			return 0;
		}
	}
	else if (func_403(-3f, 1, 0, 0))
	{
		func_220(&iLocal_285);
		if (func_447(iVar652))
		{
			func_372(1, 0, 0, "RE_HONOR_CHEATED", iVar282, 0, 1065353216, 0);
		}
		func_82(37);
		iLocal_273 = 12;
		return 0;
	}
	return 0;
}

bool func_248()
{
	if (iVar604 == 1)
	{
		if (iVar279 > 0)
		{
			func_448(Local_369.f_21[2]);
		}
	}
	switch (iVar279)
	{
		case 0:
			func_82(37);
			func_264();
			if (!does_blip_exist(iVar283))
			{
				func_381(iVar282, &iLocal_285, -89429847, 580546400, 0, 0);
				set_blip_name_from_text_file(iVar283, "RE_INTER_STRANGER");
			}
			iLocal_281 = 1;
			break;
		case 1:
			if (func_449(&Local_585))
			{
				func_450(&Local_585, "player", Global_35, 0);
				func_450(&Local_585, "SharpShooter", iVar282, 0);
				func_451(!func_48(44), func_48(21));
				func_408(iVar282, 1, 1);
				iLocal_281 = 2;
			}
			break;
		case 2:
			func_452();
			switch (func_407(0f, 1))
			{
				case 0:
					func_412(1);
					func_408(iVar282, 0, 1);
					_hide_ped_weapons(Global_35, 2, false);
					func_129(44);
					iLocal_281 = 5;
					break;
				case 1:
					if (func_453())
					{
						func_252(Global_35, iVar282, func_454("MONEY_ANTAG"), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_252(Global_35, iVar282, func_454("NO_MONEY_P"), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_412(1);
					func_408(iVar282, 0, 1);
					iLocal_281 = 6;
					break;
				case -1:
					if (func_455())
					{
						func_412(1);
						func_408(iVar282, 0, 1);
						switch (iVar604)
						{
							case 0:
								open_sequence_task(&iVar0);
								func_256(0, Global_35, 3, "MONEY_LOST_AGGRO_SHOOTER", -1, 1082130432, -1065353216, 0);
								task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
								func_52(iVar282, &iVar0, 0, 0, 1, 1);
								iLocal_281 = 3;
								break;
							case 1:
								open_sequence_task(&iVar0);
								func_256(0, Global_35, 3, "MONEY_WON_WAIT_C_SHOOTER", -1, 1082130432, -1065353216, 0);
								task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
								func_52(iVar282, &iVar0, 0, 0, 1, 1);
								func_220(&iLocal_285);
								iLocal_281 = 3;
								break;
						}
					}
					break;
			}
			break;
		case 6:
			if (!func_400(Global_35, 1))
			{
				open_sequence_task(&iVar0);
				func_256(0, Global_35, 3, "MONEY_LOST_AGGRO_SHOOTER", -1, 1082130432, -1065353216, 0);
				task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				iLocal_281 = 3;
			}
			break;
		case 3:
			if (get_sequence_progress(iVar282) == 1)
			{
				switch (iVar604)
				{
					case 0:
						func_374();
						Local_14.f_50 = 1;
						Local_14.f_46 = 1;
						func_372(3, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iVar282, 0, 1065353216, 0);
						clear_ped_tasks(iVar282, 1, 0);
						clear_ped_secondary_task(iVar282);
						func_219(&iLocal_285, iVar282, 0);
						task_combat_ped(iVar282, Global_35, 0, 0);
						set_player_control(player_id(), true, 0, false);
						break;
				}
				iLocal_273 = 12;
				return false;
			}
			break;
		case 5:
			func_452();
			Local_781.f_1 = Global_35;
			StringCopy(&(Local_781.f_30), "player", 24);
			StringCopy(&(Local_781.f_26), "PBL_HANDOVER", 32);
			Local_781.f_25 = Local_585.f_1;
			func_128(&(Local_781.f_23), 8192);
			func_128(&(Local_781.f_23), 1024);
			func_456();
			iLocal_281 = 7;
			break;
		case 7:
			func_452();
			if (func_456())
			{
				_hide_ped_weapons(Global_35, 2, false);
				func_457(&Local_585);
				iLocal_281 = 4;
			}
			break;
		case 4:
			if (!func_48(23))
			{
				switch (iVar604)
				{
					case 0:
						if (has_anim_event_fired(Global_35, -1898385492))
						{
							func_458(func_21(&Local_216, func_48(21), 0), 0, 0, 1, 1);
							func_459(iVar282, func_21(&Local_216, func_48(21), 0));
							func_372(12, 0, 0, "RE_HONOR_KEPT_AGREEMENT", iVar282, 0, 1065353216, 0);
							func_82(23);
						}
						break;
					case 1:
						if (has_anim_event_fired(iVar282, -1898385492))
						{
							func_460(func_21(&Local_216, func_48(21), 0), 0, 1065353216, 1, 0, 0, 1, 752097756);
							func_461(iVar282, func_21(&Local_216, func_48(21), 0));
							func_82(23);
						}
						break;
				}
			}
			if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
			{
				clear_ped_tasks(Global_35, 1, 0);
				func_220(&iLocal_285);
				return true;
			}
			break;
	}
	return false;
}

int func_249()
{
	if (!is_entity_dead(iVar282))
	{
		if (!Local_14.f_46)
		{
			switch (iVar280)
			{
				case 0:
					if (!func_48(31) || !func_386(iVar282, 2121492476))
					{
						if (!is_scripted_speech_playing(iVar282))
						{
							func_82(37);
							func_41();
							if (!Local_14.f_46)
							{
								func_220(&iLocal_285);
								if (func_48(31))
								{
									set_blocking_of_non_temporary_events(iVar282, false);
								}
								func_462(0);
								if (func_48(31))
								{
									set_ped_keep_task(iVar282, true);
								}
								if (!func_48(31))
								{
									if (func_48(28))
									{
										func_263(iVar282, Global_35, 115);
									}
									else if (func_48(5))
									{
										switch (iVar604)
										{
											case 0:
												func_263(iVar282, Global_35, 113);
												break;
											case 1:
												func_263(iVar282, Global_35, 114);
												break;
										}
									}
									else
									{
										func_263(iVar282, Global_35, 113);
									}
								}
								else
								{
									func_263(iVar282, Global_35, 115);
								}
							}
							iLocal_282 = 2;
							return 0;
						}
					}
					else if (func_386(iVar282, 2121492476))
					{
						func_234(1);
					}
					break;
				case 2:
					func_463();
					if (!func_51(Global_35, iVar282, 80f, 1))
					{
						return 1;
					}
					break;
			}
		}
		else if (!bVar746)
		{
			if (is_ped_in_combat(iVar282, 0) || is_ped_fleeing(iVar282))
			{
				_0xa3db37edf9a74635(player_id(), iVar282, 7, 2, 0);
				_0xa3db37edf9a74635(player_id(), iVar282, 19, 2, 0);
				_0xa3db37edf9a74635(player_id(), iVar282, 20, 2, 0);
				_0xa3db37edf9a74635(player_id(), iVar282, 3, 2, 0);
				_0xa3db37edf9a74635(player_id(), iVar282, 4, 2, 0);
				iLocal_748 = 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	return func_464(uParam0, iParam1, iParam1->f_74, &(iParam1->f_21), uParam2, fParam3, iParam4, iParam5, sParam6, iParam7, iParam8, iParam9, iParam10, iParam11, fParam12, 0);
}

void func_251(int iParam0, bool bParam1, bool bParam2)
{
	func_465(&(iParam0->f_21), bParam1, bParam2);
}

bool func_252(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_466(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_253(var uParam0)
{
	*uParam0 = 41;
	uParam0->f_2 = 1285527742;
	uParam0->f_3 = 2;
}

void func_254(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_467(uParam0, uParam1, iParam2, &(iParam2->f_21), iParam3);
}

void func_255(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	sVar0 = func_191(iParam1);
	task_play_anim(iParam0, sVar0, sParam2, fParam4, fParam5, iParam3, iParam6, 0f, false, iParam7, false, 0, false);
}

void func_256(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	sVar0 = func_191(iParam2);
	if (iParam4 < 1 && !func_30(iParam7, 1))
	{
		iParam4 = func_468(sVar0, sParam3);
	}
	task_play_upper_anim_facing_entity(iParam0, sVar0, sParam3, iParam1, iParam4, fParam5, fParam6, iParam7 | 67108864 | 512 | 16384, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
}

void func_257(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5)
{
	iVar0 = func_469(bParam5, 0, iVar276);
	if (iParam1 == 2)
	{
		sVar1 = "SCRIPT_RE@SHARP_SHOOTER@ALT_INTROS_NON_SPEC";
		sVar2 = "WAITING_BASE_SHOOTER";
	}
	else
	{
		sVar1 = func_470(iParam1 == 0, "SCRIPT_RE@SHARP_SHOOTER", "SCRIPT_RE@SHARP_SHOOTER@SWAMP");
		sVar2 = func_470(iParam1 == 0, "CALLOVER_IDLE", "CALLOVER_IDLE_SHOOTER");
	}
	task_play_upper_anim_facing_entity(iVar0, sVar1, sVar2, iParam0, iParam2, fParam3, fParam4, 67125761, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MONEY_WON_BASE_SHOOTER";
		case 0:
			return "MONEY_LOST_BASE_SHOOTER";
		default:
			break;
	}
	return func_341("[RESS]", "RESS_PAYMENT_IDLE - Invalid Reward Type.");
}

void func_259(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_220((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_260()
{
	if (func_48(3))
	{
		func_259(&uLocal_462);
		func_259(&uLocal_479);
		func_129(3);
	}
}

void func_261()
{
	func_471(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
}

void func_262()
{
	if (!bVar710)
	{
		iVar0 = 0;
		while (iVar0 < iVar494)
		{
			if (does_entity_exist(&(uLocal_496[iVar0])))
			{
				freeze_entity_position(&(uLocal_496[iVar0]), false);
			}
			iVar0++;
		}
		iLocal_712 = 1;
	}
}

bool func_263(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_472(iParam2);
	if (iVar0 != -1)
	{
		return func_370(iParam0, iParam1, &Local_216, iVar0, iParam2);
	}
	return false;
}

void func_264()
{
	if (!bVar758)
	{
		if (!func_476(&Local_585, func_473(iVar604), 105803, 105835, 0, 64, 0, 0, 0))
		{
		}
		iLocal_760 = 1;
	}
}

void func_265(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_266(var uParam0)
{
	func_35(uParam0, 1);
	func_477(uParam0, 20);
}

void func_267(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_176(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_478())
	{
		func_479(1);
	}
	func_480(iParam2, uParam0->f_43);
	func_481(iParam2, 0, 0, 0, 0);
	if (func_482(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_137(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_483(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_268(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_269(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_484())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_163(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_267(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_268(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_223(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_485(uParam0, bVar0);
		func_486(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_487(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_267(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_268(&(uParam0->f_121));
		}
	}
}

bool func_270(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_62(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_488())
			{
				fVar0 = 15f;
			}
		}
		if (func_489(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_490(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_489(uParam2, fVar1))
		{
			if (!func_491((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_492(uParam2->f_3, 2) && func_493(2))
		{
			return false;
		}
		if (func_62(iParam0, 4194304) || func_62(iParam0, 33554432))
		{
			if (func_494(1))
			{
				return false;
			}
		}
	}
	if (func_495(Global_35))
	{
		return false;
	}
	if (func_496(0, 1, 1) && !func_497(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_62(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_498(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_490(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_499())
		{
			return false;
		}
		iVar2 = func_501(func_500());
		if (func_502(iVar2))
		{
			if (func_503(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_504(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_505(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_271(var uParam0, int iParam1)
{
	if (func_506(uParam0->f_51))
	{
		func_300(uParam0->f_51, 0);
		fVar0 = func_312(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_313());
		bVar1 = func_107(!func_62(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_315(iVar2, func_314(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_272()
{
	if (!func_507(Global_1395482->f_1))
	{
		return false;
	}
	return func_508(Global_1395482->f_1, 32);
}

bool func_273(int iParam0)
{
	if (func_62(iParam0, 1))
	{
		return false;
	}
	return (1 == func_509(iParam0) || 2 == func_509(iParam0));
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

char* func_275(char* sParam0)
{
	return sParam0;
}

char* func_276(int iParam0)
{
	if (func_510(iParam0))
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

void func_277(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_511(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_512(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_513(iParam0->f_6, iParam0->f_5, 0);
			}
			func_514(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_515(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_278(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_279(iParam0, 13))
	{
		func_281(iParam0, 0);
	}
	else
	{
		func_282(iParam0, 0);
	}
	if (func_511(iParam0->f_6))
	{
		if (bParam2)
		{
			func_280(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_279(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_280(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_511(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_516(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_517(iVar0);
	*uParam0 = 0;
}

void func_281(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_282(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_283(int iParam0, bool bParam1)
{
	iVar0 = func_288();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_284(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_288();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_283(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_287(iVar2, 512))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
			}
		}
		task_clear_look_at(iVar0);
		_0xaac0ee3b4999abb5(iVar0, 0);
		enable_control_action(0, -128997553, true);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!is_entity_dead(iVar3))
				{
					task_clear_look_at(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_285(var uParam0, int iParam1)
{
	if (func_334(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_286(int iParam0, int iParam1)
{
	if (func_101(iParam0, 1, 1))
	{
		func_518((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_287(int iParam0, int iParam1)
{
	if (func_101(iParam0, 1, 1))
	{
		return func_207(Global_1955500[iParam0], iParam1);
	}
	return false;
}

int func_288()
{
	switch (func_182())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_519(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_519(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

bool func_291(int iParam0, int iParam1)
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
	if (func_207(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_207(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_207(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_292(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
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

int func_293(int iParam0)
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

void func_294(int* iParam0)
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

void func_295(int iParam0)
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

void func_296(var uParam0)
{
	if (func_511(uParam0->f_162))
	{
		func_280(&(uParam0->f_162), 1, 1);
	}
	if (func_511(uParam0->f_163))
	{
		func_280(&(uParam0->f_163), 1, 1);
	}
	if (func_511(uParam0->f_164))
	{
		func_280(&(uParam0->f_164), 1, 1);
	}
	if (func_511(uParam0->f_165))
	{
		func_280(&(uParam0->f_165), 1, 1);
	}
}

void func_297(var uParam0)
{
	if (uParam0->f_170)
	{
		func_520();
	}
}

void func_298(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_521(32);
		func_302(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_299(var uParam0)
{
	if (func_522(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_523(uParam0->f_3);
		func_483(uParam0, 0, 1);
		func_524(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_525(0, 0);
		return true;
	}
	return false;
}

void func_300(vector3 vParam0, int iParam3)
{
	if (func_80(vParam0))
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
			if (func_325(vVar2, vParam0, 2f, 1))
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

void func_301()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_302(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_509(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_182() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_303(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_280(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_134(iParam0, 0);
		}
	}
}

void func_304(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_511((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_280(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_305(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_526(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_527(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_528();
		}
		else
		{
			func_529(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_530();
	}
}

void func_306(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_526(iParam1);
	if (iVar0 == -1)
	{
		func_531(iParam0, iParam1, fParam3);
		func_529(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_527(iVar0);
		func_531(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_529(bParam2, fParam3);
		return;
	}
}

int func_307(int iParam0)
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

int func_308(int iParam0)
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

bool func_309(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_310(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_80(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_311(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

float func_312(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0f;
	}
	if (!func_532(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_313()
{
	return "unnamed";
}

char* func_314(int iParam0)
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

int func_315(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_316(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_316(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_80(vParam0))
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
		if (func_506(vParam0))
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
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_533(iVar0, bParam8);
	return iVar0;
}

void func_317(int iParam0)
{
	if (!func_176(iParam0))
	{
		return;
	}
	func_534(iParam0);
}

void func_318(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_319(int iParam0)
{
	if (func_163(iParam0, 2))
	{
		return 200;
	}
	if (func_163(iParam0, 4))
	{
		return 70;
	}
	if (func_163(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_320(int iParam0)
{
	if (func_62(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_535() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_62(iParam0, 2);
		bVar1 = func_62(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_488())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_321(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_163(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_322(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_163(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_163(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_323(int iParam0, int iParam1)
{
	iVar0 = (func_308(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_324(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_80(vParam1))
	{
		return false;
	}
	if (func_328(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_273(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_325(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_326(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_109() - *uParam0) >= iParam1;
	}
	return false;
}

int func_327(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_80(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_328(int iParam0, vector3 vParam1)
{
	if (!func_62(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_536(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_62(iParam0, 33554432))
	{
		if (func_537(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_329(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_163(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_62(iParam0, 1) && !func_62(iParam0, 2))
	{
		if (func_62(iParam0, 4096) || func_62(iParam0, 2048))
		{
			if (func_538(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_330(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_29(&uParam0);
	if (!func_539())
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_332(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_333(int iParam0, int iParam1)
{
	iVar1 = func_540(iParam0, iParam1);
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

bool func_334(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_335(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_541(&iVar1, -2147483648);
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

int func_336()
{
	return get_player_group(get_player_index());
}

bool func_337(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_182() != -1)
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

void func_338(var uParam0, int iParam1)
{
	func_542(uParam0, iParam1);
}

int func_339(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

void func_340(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

char* func_341(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_343(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 230.4f;
				case 1:
					return 0f, 7.9f, 236.16f;
				case 2:
					return 0f, 0f, 227.52f;
				case 3:
					return 0f, 0f, 247.68f;
				case 4:
					return 12.5f, 8.8f, 233.28f;
				case 5:
					return 4.9f, 7f, -109.44f;
				case 6:
					return 13.5f, 5f, 270f;
				case 7:
					return 0f, 6.5f, 247.68f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 7f;
				case 1:
					return 0f, 0f, 6f;
				case 2:
					return 0f, 0f, 7.5f;
				case 3:
					return 0f, 0f, 7f;
				case 4:
					return 0f, 0f, 8f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 210.24f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 250.56f;
				case 4:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 178.56f;
				case 1:
					return 0f, 0f, 178.56f;
				case 2:
					return 0f, 0f, 155.52f;
				case 3:
					return 0f, 0f, 144f;
				case 4:
					return 0f, 0f, 132.48f;
				case 5:
					return 0f, 0f, 126.72f;
				case 6:
					return 0f, 0f, 140.4f;
				case 7:
					return 0f, 0f, 123.84f;
				case 8:
					return 0f, 0f, 92.16f;
				case 9:
					return 0f, 0f, 80.64f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 59.04f;
				case 1:
					return 0f, 0f, 50.4f;
				case 2:
					return 0f, 0f, 39.6f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 3.7f, 8.9f, 33.84f;
				case 5:
					return 0f, 0f, 53.28f;
				case 6:
					return 0f, 0f, 53.28f;
				case 7:
					return 0f, 1.8f, 47.52f;
				case 8:
					return 0f, 0f, 61.92f;
				case 9:
					return 0f, 0f, 87.12f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f, -13.5f, 172.8f;
				case 1:
					return 0f, 0f, 113.04f;
				case 2:
					return 10.4f, -1.6f, 126.72f;
				case 3:
					return 12.1f, -8.64f, 137.52f;
				case 4:
					return 13.7f, 0f, 110.88f;
				case 5:
					return 9.9f, -8.64f, 146.16f;
				case 6:
					return 5.76f, -11.52f, 129.6f;
				case 7:
					return 0f, 0f, 102.24f;
				case 8:
					return 5.86f, -8.64f, 132.48f;
				case 9:
					return 0f, 0f, 156.24f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				case 8:
					return 0f, 0f, 0f;
				case 9:
					return 0f, 0f, 0f;
				case 10:
					return 0f, 0f, 0f;
				case 11:
					return 0f, 0f, 0f;
				case 12:
					return 0f, 0f, 0f;
				case 13:
					return 0f, 0f, 0f;
				case 14:
					return 0f, 0f, 0f;
				case 15:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 150.48f;
				case 1:
					return 0f, 0f, 161.28f;
				case 2:
					return 0f, 0f, 121.68f;
				case 3:
					return 0f, 0f, 161.28f;
				case 4:
					return 0f, 0f, 121.68f;
				case 5:
					return 0f, 0f, 147.6f;
				case 6:
					return 0f, 0f, 153.36f;
				case 7:
					return 0f, 0f, 144.72f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 206.64f;
				case 1:
					return 0f, 0f, 214.56f;
				case 2:
					return 0f, 0f, 186.48f;
				case 3:
					return 0f, 0f, 200.16f;
				case 4:
					return 0f, 0f, 217.44f;
				case 5:
					return 0f, 0f, 211.68f;
				case 6:
					return 0f, 0f, -164.16f;
				case 7:
					return 0f, 0f, 180.72f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2.6f, -8.7f, 0f;
				case 1:
					return 0f, -3.5f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, -10.2f, 0f;
				case 6:
					return 0f, -9.8f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1.5f, 0f, -47.52f;
				case 1:
					return 7.3f, 3.7f, -48.24f;
				case 2:
					return 0f, 10.2f, -105.12f;
				case 3:
					return 0f, 6.1f, -93.6f;
				case 4:
					return 7.4f, 5.6f, -61.92f;
				case 5:
					return 0f, 11.8f, -113.04f;
				case 6:
					return 0f, 9f, -105.12f;
				case 7:
					return 0f, 3.6f, -84.96f;
				case 8:
					return 4.5f, 7.1f, -75.6f;
				case 9:
					return 0f, 13.2f, -108f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 4.3f, -0.5f, 78.48f;
				case 4:
					return 0f, 0f, 78.48f;
				case 5:
					return 0f, 0f, 56.16f;
				case 6:
					return 0f, -3.2f, 50.4f;
				case 7:
					return 0f, 0f, 81.36f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 22.4f, 4.7f, 98.64f;
				case 1:
					return 19.5f, 2f, 103.44f;
				case 2:
					return 12.1f, 3.4f, -258.48f;
				case 3:
					return 0f, 0f, 131.04f;
				case 4:
					return 0f, 0f, 117.36f;
				case 5:
					return 0f, 0f, 112.32f;
				case 6:
					return 0f, 0f, 103.68f;
				case 7:
					return 15.2f, -5.6f, 106.56f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -61.92f;
				case 1:
					return 0f, 0f, 32.4f;
				case 2:
					return 0f, 0f, -73.44f;
				case 3:
					return 0f, 0f, -78.48f;
				case 4:
					return 0f, 0f, -50.4f;
				case 5:
					return 0f, 0f, -64.8f;
				case 6:
					return 0f, 0f, -78.48f;
				case 7:
					return 0f, 0f, -73.44f;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 36.72f;
				case 1:
					return 0f, 0f, 22.32f;
				case 2:
					return 0f, 0f, 47.52f;
				case 3:
					return 0f, 0f, 36.72f;
				case 4:
					return 0f, 0f, 25.2f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 33.84f;
				case 7:
					return 0f, 0f, 39.6f;
				case 8:
					return 0f, 0f, 36.72f;
				case 9:
					return 0f, 0f, 61.92f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -98.64f;
				case 1:
					return 0f, 0f, -95.76f;
				case 2:
					return 0f, 0f, -112.32f;
				case 3:
					return 0f, 0f, -109.44f;
				case 4:
					return 0f, 0f, -109.44f;
				case 5:
					return 0f, 0f, -109.44f;
				case 6:
					return 0f, 0f, -56.16f;
				case 7:
					return 0f, 0f, -64.8f;
				case 8:
					return 0f, 0f, -129.6f;
				case 9:
					return 0f, 0f, -157.68f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_344(vector3 vParam0)
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

float func_345(float fParam0)
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

int func_346(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_543(&uParam1))
	{
		return 1;
	}
	if (!func_544(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_347(var uParam0)
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

int func_348(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_545(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_349(int iParam0)
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

bool func_350(var uParam0)
{
	return func_207(*uParam0, 4);
}

bool func_351(var uParam0)
{
	return func_207(*uParam0, 64);
}

bool func_352(var uParam0)
{
	return func_207(*uParam0, 8);
}

void func_353(int iParam0, bool bParam1, bool bParam2)
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

bool func_354(var uParam0)
{
	return func_207(*uParam0, 128);
}

bool func_355(var uParam0)
{
	return func_207(*uParam0, 2048);
}

void func_356(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_357(var uParam0)
{
	return func_207(*uParam0, 1024);
}

bool func_358(var uParam0)
{
	return func_207(*uParam0, 256);
}

void func_359(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_360(var uParam0)
{
	return func_207(*uParam0, 512);
}

bool func_361(var uParam0)
{
	return func_207(*uParam0, 4096);
}

int func_362(int iParam0)
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

int func_363(int iParam0)
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

bool func_364(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_546(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_546(iVar4) && iVar4 != iVar0)
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
	if (func_182() == -1 && !func_204(iVar0))
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
				if (func_204(-183018591))
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
		if (iParam0 != Global_35 && func_546(iVar0))
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
		func_547(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_548(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_549(iVar0))
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

void func_366(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 1;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 3;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 10;
			break;
		case 3:
			*iParam1 = 11;
			*iParam2 = 24;
			break;
		case 4:
			*iParam1 = 25;
			*iParam2 = 31;
			break;
		case 5:
			*iParam1 = 32;
			*iParam2 = 33;
			break;
		case 6:
			*iParam1 = 34;
			*iParam2 = 40;
			break;
		case 7:
			*iParam1 = 41;
			*iParam2 = 41;
			break;
		case 8:
			*iParam1 = 42;
			*iParam2 = 42;
			break;
		case 9:
			*iParam1 = 43;
			*iParam2 = 43;
			break;
		case 10:
			*iParam1 = 44;
			*iParam2 = 44;
			break;
		case 11:
			*iParam1 = 45;
			*iParam2 = 54;
			break;
		case 12:
			*iParam1 = 55;
			*iParam2 = 62;
			break;
		case 13:
			*iParam1 = 63;
			*iParam2 = 70;
			break;
		case 14:
			*iParam1 = 71;
			*iParam2 = 78;
			break;
		case 15:
			*iParam1 = 79;
			*iParam2 = 84;
			break;
		case 16:
			*iParam1 = 85;
			*iParam2 = 87;
			break;
		case 17:
			*iParam1 = 88;
			*iParam2 = 95;
			break;
		case 18:
			*iParam1 = 96;
			*iParam2 = 112;
			break;
		case 19:
			*iParam1 = 113;
			*iParam2 = 115;
			break;
		case 20:
			*iParam1 = 116;
			*iParam2 = 123;
			break;
	}
}

bool func_367(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return !is_bit_set(uParam0[iVar0], iVar1);
}

int func_368(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 2:
					return 1536423253;
				case 3:
					return -1229317367;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 4:
					return 1116678447;
				case 7:
					return 1618681949;
				case 9:
					return 1134932435;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 11:
					return 1614795789;
				case 12:
					return -997340910;
				case 13:
					return -1969163846;
				case 14:
					return 959511983;
				case 22:
					return 1870924045;
				case 23:
					return -1581126264;
				case 24:
					return 1484098970;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 27:
					return 1621360457;
				case 29:
					return 1758191503;
				case 31:
					return 1820232379;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 32:
					return 1779372485;
				case 33:
					return -1663178882;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 34:
					return 1618681949;
				case 36:
					return 1134932435;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 42:
					if (*iParam2 != 1)
					{
						return 1699634685;
					}
					if (iParam2->f_2 == 0 || iParam2->f_2 == 1)
					{
						return -62156941;
					}
					else
					{
						return 1699634685;
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 43:
					return -62156941;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 44:
					return -62156941;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 41:
					return -1304435441;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 55:
					if ((iParam2->f_2 == 0 || iParam2->f_2 == 1) || *iParam2 != 1)
					{
						return 1699634685;
					}
					break;
				case 56:
					return 1607707100;
				case 57:
					return -1549120881;
				case 58:
					return -1285644336;
				case 59:
					return 1981302623;
				case 60:
					return -2106007520;
				case 61:
					return 1492028676;
				case 62:
					return -477310627;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 81:
					return 1555489523;
				case 82:
					return -1000306202;
				case 83:
					return 1157947840;
				case 84:
					return -1139102731;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 88:
					return -1676687059;
				case 90:
					return -1676687059;
				case 91:
					return -1676687059;
				case 92:
					return -1676687059;
				case 93:
					return -1676687059;
				case 94:
					return -1676687059;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 96:
					return -675757954;
				case 97:
					return -675757954;
				case 98:
					return 964399389;
				case 99:
					return 1201515873;
				case 101:
					return -1617568457;
				case 102:
					return 1668664283;
				case 103:
					return 260532378;
				case 104:
					return -1578431137;
				case 107:
					return -1879303787;
				case 108:
					return 1242815517;
				case 109:
					return 306498823;
				case 110:
					return 594706069;
				case 111:
					return 900197999;
				case 112:
					if (*iParam2 != 1)
					{
						return 458817772;
					}
					break;
			}
			break;
	}
	return 2;
}

bool func_369(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 18:
			switch (iParam1)
			{
				case 108:
					return true;
				case 111:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 > -1 && iParam3 < 21)
	{
		if (iParam4 != -1)
		{
			return func_252(iParam0, iParam1, func_550(iParam2, iParam3, iParam4), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
	}
	return false;
}

void func_371()
{
	if (func_229(&uLocal_655))
	{
		if (func_446(&uLocal_655, fVar656))
		{
			func_437(iVar658);
			func_230(&uLocal_655);
		}
	}
}

void func_372(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_182() != -1)
	{
		return;
	}
	if ((Global_36616 && func_363(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_551(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_552(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_553(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_552(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_373(bool bParam0)
{
	*bParam0 = 0;
	bVar2 = false;
	bVar3 = func_554(iVar281, &uLocal_626, &uVar1, 0);
	bVar4 = func_555(bVar3);
	bVar5 = (_is_ped_lassoed(Local_287.f_11) && _get_lassoed_entity(Global_35) == Local_287.f_11);
	bVar6 = (iVar656 == 1 || func_556());
	if (bVar4 && bVar3)
	{
		return 5;
	}
	if (bVar5 || has_entity_been_damaged_by_entity(Local_287.f_11, Global_35, 1, 1))
	{
		return 1;
	}
	if (_0x29fce825613fefca(iVar281, 1000))
	{
		return 1;
	}
	if (func_557(&iVar0, &bVar2))
	{
		return 1;
	}
	if (func_558(iVar281, 0, &(Local_14.f_5), &iVar0, 1, 0))
	{
		if (iVar0 != 2)
		{
			*bParam0 = func_559(iVar0);
			if (iVar0 == 4 || iVar0 == 256)
			{
				if (!bVar6)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iVar0 == 8)
			{
				return 1;
			}
			if (iVar0 == 1024)
			{
				return 4;
			}
			if (bVar2)
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (iVar0 == 16)
		{
			if (!func_48(31) && !func_48(38))
			{
				func_82(31);
				func_222(&uLocal_620);
				return 3;
			}
			else if (func_229(&uLocal_620))
			{
				if (func_380(&uLocal_620, 3f))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (func_560(iVar0))
		{
			if (iVar0 == 16384 && bVar3)
			{
				if (func_490(player_id(), 0, 0, 1))
				{
					if (func_561(func_19(&Local_14), 40f))
					{
						return 6;
					}
				}
			}
			if (func_562())
			{
				return 1;
			}
			if (iVar0 == 8192 && bVar3)
			{
				return 7;
			}
			if (iVar0 == 256)
			{
				bVar7 = func_48(49);
				if (bVar7)
				{
					func_222(&uLocal_340);
				}
				if ((bVar7 || (func_229(&uLocal_340) && !func_446(&uLocal_340, 3f))) || (iVar656 == 1 || func_556()))
				{
					return 0;
				}
			}
			if (!func_48(29))
			{
				if (func_48(31))
				{
					if (func_380(&uLocal_623, 3f))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_82(31);
					func_222(&uLocal_623);
					return 3;
				}
			}
			else
			{
				return 0;
			}
		}
		return 1;
	}
	else if (func_563())
	{
		if (!func_229(&uLocal_343) || func_380(&uLocal_343, 3f))
		{
			func_222(&uLocal_343);
			return 3;
		}
	}
	return 0;
}

void func_374()
{
	func_262();
	func_259(&uLocal_462);
	func_259(&uLocal_479);
	func_43();
	func_46(0);
	func_398(&Local_216, &uLocal_284, 0, 0, &Local_211, 0);
	func_47();
	if (does_entity_exist(iVar694))
	{
		if (is_entity_attached_to_entity(iVar694, iVar282))
		{
			func_57(iVar694, 1, 1);
		}
		if (bVar356)
		{
			iVar0 = func_21(&Local_216, func_48(21), 0);
			_0x78b4567e18b54480(iVar694);
			_0x8bb99b85444544d9(iVar694, iVar0);
			func_104(iVar282, get_random_int_in_range(75, 350));
		}
	}
}

void func_375(int iParam0, int iParam1)
{
	stop_current_playing_ambient_speech(iParam0, iParam1);
	stop_current_playing_speech(iParam0, iParam1);
}

void func_376(bool bParam0)
{
	if (!is_entity_dead(iVar281))
	{
		if (func_48(19) || func_48(20))
		{
			func_564(iVar281);
		}
		func_46(0);
		set_ped_accuracy(iVar281, 60);
		set_ped_shoot_rate(iVar281, 55);
		set_ped_config_flag(iVar281, 253, false);
		func_219(&iLocal_285, iVar281, 0);
		clear_ped_tasks(iVar281, 1, 0);
		clear_ped_secondary_task(iVar281);
		set_player_control(player_id(), true, 0, false);
		set_ped_combat_attributes(iVar281, 17, false);
		set_ped_combat_attributes(iVar281, 5, true);
		set_ped_combat_attributes(iVar281, 30, false);
		set_ped_combat_attributes(iVar281, 46, true);
		func_54(&uLocal_284, &Local_369, &(Local_369.f_21), 1, 1);
		set_ped_config_flag(iVar281, 178, false);
		open_sequence_task(&iVar0);
		task_look_at_entity(iVar281, Global_35, 5000, 0, 51, 1);
		if (((((!bParam0 && !_is_ped_lassoed(iVar281)) && !_is_ped_hogtied(iVar281)) && !is_ped_ragdoll(iVar281)) && !has_entity_been_damaged_by_entity(iVar281, Global_35, 1, 1)) && _0xd0b7aeb56229d317(Global_35) != iVar281)
		{
			if (func_48(30))
			{
				func_256(0, Global_35, 3, "MONEY_LOST_AGGRO_SHOOTER", -1, 1082130432, -1065353216, 0);
			}
			else
			{
				task_aim_at_entity(0, Global_35, 1500, 0, 0);
			}
		}
		task_stand_still(0, 250);
		task_combat_ped(0, Global_35, 0, 16);
		func_52(iVar281, &iVar0, 0, 0, 1, 1);
		set_ped_keep_task(iVar281, true);
		_0xa3db37edf9a74635(player_id(), iVar281, 7, 2, 1);
		_0xa3db37edf9a74635(player_id(), iVar281, 19, 2, 1);
		_0xa3db37edf9a74635(player_id(), iVar281, 20, 2, 1);
		_0xa3db37edf9a74635(player_id(), iVar281, 3, 2, 1);
		_0xa3db37edf9a74635(player_id(), iVar281, 4, 2, 1);
		set_ped_config_flag(iVar281, 113, true);
		Local_14.f_50 = 1;
		func_82(46);
	}
	if (!is_entity_dead(Local_287.f_11))
	{
		set_blocking_of_non_temporary_events(Local_287.f_11, false);
		set_ped_config_flag(Local_287.f_11, 253, false);
		set_ped_combat_attributes(iVar281, 38, false);
		set_ped_combat_attributes(iVar281, 16, true);
		set_ped_combat_attributes(iVar281, 26, false);
	}
}

void func_377(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_378()
{
	if (Local_251 == 1)
	{
		if (iVar319 < iVar443)
		{
			iVar0 = iVar319;
			if (func_190(Local_251.f_2, iVar0) != 0)
			{
				iLocal_445[iVar0] = func_565(Local_251.f_2, iVar0);
				switch (Local_251.f_5)
				{
					case 0:
						func_566(iVar0);
						break;
					case 1:
						func_567(iVar0);
						func_568(iVar0, bVar354);
						break;
					case 2:
						func_568(iVar0, bVar354);
						break;
				}
			}
			uLocal_321 = iVar319 + 1;
			return false;
		}
	}
	return true;
}

bool func_379(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_569(16))
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
					func_570(16);
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

bool func_380(var uParam0, float fParam1)
{
	if (!func_229(uParam0))
	{
		return false;
	}
	if (func_571(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_381(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_382(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _blip_set_modifier(iVar0, iParam1);
}

void func_383(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_572() - fParam1);
	func_573(uParam0, 1);
	func_574(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_384(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_385()
{
	if (does_entity_exist(&(uLocal_496[Local_216.f_5])))
	{
		vVar0 = { get_entity_coords(&(uLocal_496[Local_216.f_5]), true, false) };
	}
	else
	{
		vVar0 = { Local_216.f_7 };
	}
	return vVar0;
}

bool func_386(int iParam0, int iParam1)
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

bool func_387(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	func_24(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_326(uParam1, iParam5))
	{
		if (_is_ped_getting_into_a_mount_seat(Global_35, true) || is_ped_in_any_vehicle(Global_35, false))
		{
			fVar0 = (get_entity_speed(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (get_entity_speed(Global_35) * fParam6);
		}
	}
	if (func_575(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return true;
	}
	return false;
}

bool func_388(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_389(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_390(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_391()
{
	vVar0 = { func_385() };
	if (!func_386(iVar282, 329066242))
	{
		task_aim_at_coord(iVar282, vVar0, -1, get_ped_reset_flag(iVar282, 0), 0);
	}
	_0x4c57f27d1554e6b0(iVar282, vVar0, 0, -1082130432, 0, 0f);
}

void func_392(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (does_entity_exist(iParam1))
		{
			uParam0->f_183 = _blip_add_for_entity(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_394(var uParam0)
{
	if (!func_291(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3)
{
	task_shoot_at_coord(iParam0, func_576(iParam1, 0), iParam2, iParam3, 0);
}

void func_396()
{
	if (is_ped_shooting(iVar282))
	{
		if (!func_229(&uLocal_334) || func_380(&uLocal_334, 3f))
		{
			func_393(1066055203, iVar282, 1);
			func_222(&uLocal_334);
		}
	}
}

void func_397()
{
	iVar1 = Global_35;
	if (is_ped_on_mount(iVar1))
	{
		if (does_entity_exist(get_mount(iVar1)))
		{
			iVar1 = get_mount(iVar1);
		}
	}
	vVar2 = { get_entity_coords(iVar282, true, false) };
	vVar5 = { func_577(vVar2, Local_216.f_7, 1065353216) };
	vVar8 = { get_entity_coords(iVar1, true, false) };
	iVar11 = func_578(vVar2, vVar5, vVar8, 1060437492);
	vVar8 = { vVar8 + get_entity_forward_vector(iVar1) * FtoV(get_entity_speed(iVar1)) };
	iVar12 = func_578(vVar2, vVar5, vVar8, 1060437492);
	iVar13 = iVar12;
	if (!func_579(iVar12, iVar11))
	{
		iVar13 = iVar11;
	}
	task_look_at_entity(iVar282, Global_35, 20000, 0, 51, 1);
	open_sequence_task(&iVar0);
	switch (Local_216)
	{
		case 0:
			func_255(0, 0, func_580(iVar282, Global_35, "CALLOVER_FORWARD", "CALLOVER_LEFT", "CALLOVER_RIGHT", "CALLOVER_LB", "CALLOVER_RB"), -1, 1082130432, -1065353216, 0, 0);
			break;
		case 1:
			func_255(0, 1, func_581(iVar13, "CALLOVER_F_PT1_SHOOTER", "CALLOVER_L_PT1_SHOOTER", "CALLOVER_R_PT1_SHOOTER", "CALLOVER_B_PT1_SHOOTER"), -1, 1082130432, -1065353216, 0, 0);
			func_256(0, Global_35, 1, func_581(iVar13, "CALLOVER_F_PT2_SHOOTER", "CALLOVER_L_PT2_SHOOTER", "CALLOVER_R_PT2_SHOOTER", "CALLOVER_B_PT2_SHOOTER"), -1, 1082130432, -1065353216, 0);
			break;
	}
	func_402(0, Global_35, 0, 1, "CALLOVER_IDLE", "CALLOVER_IDLE_SHOOTER", -1, 1082130432, -1065353216, 1);
	func_52(iVar282, &iVar0, 0, 0, 1, 1);
}

void func_398(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = 50;
	iVar1 = 40;
	if (!is_entity_dead(*uParam1))
	{
		switch (iParam0->f_2)
		{
			case 0:
			case 1:
				iVar0 = 45;
				iVar1 = 30;
				break;
			case 2:
				iVar0 = 55;
				iVar1 = 40;
				break;
			case 3:
				iVar0 = 65;
				iVar1 = 50;
				break;
		}
		switch (*iParam4)
		{
			case 0:
				switch (iParam4->f_1)
				{
					case 0:
						iVar0 = (iVar0 - 7);
						break;
				}
				break;
			case 9:
				switch (iParam4->f_1)
				{
					case 0:
						iVar0 += 10;
						break;
				}
				break;
		}
		iVar0 = (iVar0 + func_582(iParam5));
		iVar1 = (iVar1 + func_583(iParam5));
		if (iVar0 > 100)
		{
			iVar0 = 100;
		}
		if (iVar1 > 100)
		{
			iVar1 = 100;
		}
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (iVar1 < 0)
		{
			iVar1 = 0;
		}
		iVar2 = 1;
		if (iParam5 != 0)
		{
			iVar2 = 0;
		}
		bVar3 = (iParam2 - iParam3) > iVar2;
		set_ped_accuracy(*uParam1, iVar0);
		set_ped_shoot_rate(*uParam1, iVar1);
		_0x8acc0506743a8a5c(*uParam1, -862612626, 0, -1082130432);
		if (bVar3)
		{
			set_ped_combat_attributes(*uParam1, 27, true);
			set_combat_float(*uParam1, 6, 1f);
		}
		else
		{
			set_ped_combat_attributes(*uParam1, 27, false);
			set_combat_float(*uParam1, 6, (to_float(iVar0) * 0.01f));
		}
	}
}

bool func_399(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	switch (Local_216)
	{
		case 0:
			return func_439(iParam0, iParam1, sParam3);
		case 1:
			return func_439(iParam0, iParam2, sParam4);
		default:
			break;
	}
	return true;
}

bool func_400(int iParam0, bool bParam1)
{
	if (func_139(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_584(iParam0, vVar0, iParam2);
}

void func_402(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, float fParam7, float fParam8, int iParam9)
{
	switch (Local_216)
	{
		case 0:
			func_256(iParam0, iParam1, iParam2, sParam4, iParam6, fParam7, fParam8, iParam9);
			break;
		case 1:
			func_256(iParam0, iParam1, iParam3, sParam5, iParam6, fParam7, fParam8, iParam9);
			break;
	}
}

bool func_403(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_400(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_585(fParam0))
	{
		return false;
	}
	return true;
}

char* func_404(char* sParam0, char* sParam1)
{
	if (Local_216.f_2 > 1)
	{
		return sParam1;
	}
	return sParam0;
}

bool func_405()
{
	if (has_anim_event_fired(iVar282, 1274278744))
	{
		func_82(40);
		return true;
	}
	return false;
}

void func_406()
{
	switch (Local_216.f_2)
	{
		case 2:
			if (Local_216 == 1)
			{
				func_586(&Local_369, 0, "RE_SS_BYN_V1_INTRO_ACCEPT_02P", 0);
				func_586(&Local_369, 1, "RE_SS_BYN_V1_INTRO_DECLINE_02P", 0);
			}
			else if (Local_216 == 0)
			{
				func_586(&Local_369, 0, "RE_SS_HTL_V1_INTRO_ACCEPT_02P", 0);
				func_586(&Local_369, 1, "RE_SS_HTL_V1_INTRO_DECLINE_02P", 0);
			}
			break;
		case 3:
			if (Local_216 == 1)
			{
				func_586(&Local_369, 0, "RE_SS_BYN_V1_INTRO_ACCEPT_03P", 0);
				func_586(&Local_369, 1, "RE_SS_BYN_V1_INTRO_DECLINE_03P", 0);
			}
			else if (Local_216 == 0)
			{
				func_586(&Local_369, 0, "RE_SS_HTL_V1_INTRO_ACCEPT_03P", 0);
				func_586(&Local_369, 1, "RE_SS_HTL_V1_INTRO_DECLINE_03P", 0);
			}
			break;
		default:
			if (Local_216 == 1)
			{
				func_586(&Local_369, 0, "RE_SS_BYN_V1_INTRO_ACCEPT_01P", 0);
				func_586(&Local_369, 1, "RE_SS_BYN_V1_INTRO_DECLINE_01P", 0);
			}
			else if (Local_216 == 0)
			{
				func_586(&Local_369, 0, "RE_SS_HTL_V1_INTRO_ACCEPT_01P", 0);
				func_586(&Local_369, 1, "RE_SS_HTL_V1_INTRO_DECLINE_01P", 0);
			}
			break;
	}
	func_587(&Local_369, 0, 1, 0);
	func_587(&Local_369, 1, 1, 0);
	func_587(&Local_369, 2, 1, 0);
	func_588(&Local_369, 0, "BEAT_CON_ACCEPT_WAGER", func_21(&Local_216, 0, 0));
	func_589(&Local_369, 1, "BEAT_CON_DECLINE_CHAL");
	func_281(Local_369.f_21[0], 2);
	func_590(func_32(2, 0, 0));
	func_591(Local_369.f_21[2], 28f);
	func_591(Local_369.f_21[1], 28f);
	func_591(Local_369.f_21[0], 28f);
}

int func_407(int iParam0, bool bParam1)
{
	if (bParam1 != get_ped_config_flag(iVar280, 317, true))
	{
		set_ped_config_flag(iVar280, 317, bParam1);
	}
	return uVar440;
}

void func_408(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

void func_409(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = func_551(iParam1);
		decor_set_int(iParam0, "honor_override", absi(iVar0));
	}
}

bool func_410()
{
	return func_229(&uLocal_366);
}

bool func_411()
{
	if (func_592() && iVar611 < 5)
	{
		func_383(&uLocal_614, 6f);
		iLocal_613 = 5;
	}
	switch (iVar611)
	{
		case 0:
			func_222(&uLocal_614);
			iLocal_613 = iVar611 + 1;
			break;
		case 1:
			if (func_593(6f))
			{
				open_sequence_task(&iVar0);
				switch (Local_216)
				{
					case 0:
						func_256(0, Global_35, 0, "CALLOVER_LINE_B", -1, 1082130432, -1065353216, 67108864);
						break;
					case 1:
						func_256(0, Global_35, 1, "WAITING_01_SHOOTER", -1, 1082130432, -1065353216, 67108864);
						break;
				}
				func_257(Global_35, Local_216, -1, 1082130432, -1065353216, 1);
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 2:
			if (Local_216 == 1)
			{
				if (has_anim_event_fired(iVar282, 2037922215))
				{
					func_263(iVar282, Global_35, 4);
				}
			}
			if (!func_439(iVar282, 0, "CALLOVER_LINE_B"))
			{
				if (!func_439(iVar282, 1, "WAITING_01_SHOOTER"))
				{
					func_222(&uLocal_614);
					iLocal_613 = iVar611 + 1;
				}
			}
			break;
		case 3:
			if (func_593(6f))
			{
				switch (Local_216)
				{
					case 0:
						func_263(iVar282, Global_35, 5);
						break;
					case 1:
						open_sequence_task(&iVar0);
						func_256(0, Global_35, 1, "WAITING_02_SHOOTER", -1, 1082130432, -1065353216, 67108864);
						func_257(Global_35, Local_216, -1, 1082130432, -1065353216, 1);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
						break;
				}
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 4:
			switch (Local_216)
			{
				case 0:
					if (!is_scripted_speech_playing(iVar282))
					{
						func_222(&uLocal_614);
						iLocal_613 = iVar611 + 1;
					}
					break;
				case 1:
					if (has_anim_event_fired(iVar282, 349204553))
					{
						func_263(iVar282, Global_35, 5);
					}
					if (!func_439(iVar282, 1, "WAITING_02_SHOOTER"))
					{
						func_222(&uLocal_614);
						iLocal_613 = iVar611 + 1;
					}
					break;
			}
			break;
		case 5:
			if (func_593(6f))
			{
				switch (Local_216)
				{
					case 0:
						func_263(iVar282, Global_35, 6);
						break;
					case 1:
						func_256(iVar282, Global_35, 1, "GIVES_UP_SHOOTER", -1, 1082130432, -1065353216, 67108864);
						break;
				}
				iLocal_613 = iVar611 + 1;
				func_82(37);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_412(bool bParam0)
{
	if (!bParam0)
	{
		func_31(&Local_369, "", "", "");
	}
	else
	{
		func_465(&(Local_369.f_21), 0, 0);
		Local_369.f_21[2]->f_13 = "";
		Local_369.f_21[0]->f_13 = "";
		Local_369.f_21[1]->f_13 = "";
	}
	func_590(func_32(3, 0, 0));
}

void func_413(vector3 vParam0, int iParam3, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	set_entity_coords(iVar276, vParam0, true, false, true, true);
	freeze_entity_position(iVar276, true);
	func_257(iVar276, iParam3, iParam4, fParam5, fParam6, bParam7);
}

void func_414()
{
	if (!bVar757)
	{
		uLocal_742 = _databinding_add_data_container_from_path("", "helperTextfields");
		if (func_69())
		{
			_databinding_add_data_string(uVar740, "rawLabel0", _get_label_text_2("COMP_JOHN"));
		}
		else
		{
			_databinding_add_data_string(uVar740, "rawLabel0", _get_label_text_2("PLYR_ARTHUR"));
		}
		_databinding_add_data_string(uVar740, "rawLabel1", _get_label_text_2("RESS_UI_SHOOTER"));
		uLocal_743 = _databinding_add_data_string(uVar740, "rawValue0", "0");
		uLocal_744 = _databinding_add_data_string(uVar740, "rawValue1", "0");
		iLocal_759 = 1;
	}
}

bool func_415(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_416()
{
	open_sequence_task(&iVar0);
	if (Local_216.f_2 <= 1)
	{
		if (func_594(iVar282, Global_35))
		{
			func_255(0, 1, "CHALLENGE_04_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
		}
		else
		{
			func_255(0, 1, "CHALLENGE_04_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
		}
	}
	else if (func_594(iVar282, Global_35))
	{
		func_255(0, 1, "CHALLENGE_06_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
	}
	else
	{
		func_255(0, 1, "CHALLENGE_06_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
	}
	task_aim_gun_at_coord(0, Local_216.f_7, -1, false, false);
	func_52(iVar282, &iVar0, 0, 0, 1, 1);
}

bool func_417()
{
	switch (Local_216)
	{
		case 1:
			if (func_405() || get_sequence_progress(iVar282) == 1)
			{
				func_129(40);
				return true;
			}
			break;
		case 0:
			return !is_scripted_speech_playing(iVar282);
	}
	return false;
}

int func_418()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_423(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_419()
{
	switch (Local_216)
	{
		case 1:
			open_sequence_task(&iVar0);
			if (func_594(iVar282, Global_35))
			{
				func_255(0, 1, "DIRECT_ACTION_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
			}
			else
			{
				func_255(0, 1, "DIRECT_ACTION_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
			}
			task_force_motion_state(0, 1063765679, false);
			task_aim_at_coord(0, Local_216.f_7, -1, false, 0);
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			break;
		case 0:
			func_263(iVar282, Global_35, 13);
			break;
	}
}

void func_420()
{
	if (!func_48(2))
	{
		func_259(&uLocal_479);
		iVar0 = 0;
		while (iVar0 < (func_66(Local_216.f_4) - 1))
		{
			if (!is_entity_dead(&(uLocal_496[iVar0])))
			{
				func_381(&(uLocal_496[iVar0]), uLocal_479[iVar0], 203020899, 580546400, 0, "RESS_TARGET");
			}
			iVar0++;
		}
		func_82(37);
		func_82(35);
		func_240(1, 0f);
		func_82(2);
	}
}

void func_421()
{
	if (func_48(2))
	{
		func_259(&uLocal_479);
		func_129(2);
		func_129(37);
		func_129(35);
	}
}

void func_422(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_28(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_423(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!func_48(9))
			{
				if (!is_ped_still(Global_35))
				{
					if (!func_51(Global_35, iVar281, 15f, 1))
					{
						if (!is_ped_facing_ped(Global_35, iVar281, 45f))
						{
							if (func_595(&uLocal_208, 1000))
							{
								return true;
							}
						}
					}
				}
			}
			break;
		case 2:
			return !func_434(1098907648, 0);
		case 3:
			if (is_ped_on_mount(Global_35))
			{
				if (func_434(1098907648, 0))
				{
					return true;
				}
			}
			break;
		case 4:
			if (is_ped_in_any_vehicle(Global_35, true))
			{
				if (func_51(Global_35, iVar281, 20f, 1))
				{
					return true;
				}
			}
			break;
		case 5:
			return func_596();
		case 6:
			return !func_436(0);
		case 7:
			return func_433(1);
	}
	return false;
}

bool func_424()
{
	if (func_592() && iVar611 < 5)
	{
		func_383(&uLocal_322, 6f);
		iLocal_613 = 5;
	}
	switch (iVar611)
	{
		case 0:
			func_222(&uLocal_614);
			iLocal_613 = iVar611 + 1;
			break;
		case 1:
			if (func_403(-3f, 1, 0, 0))
			{
				if (func_380(&uLocal_614, 10f))
				{
					if (Local_216 == 1)
					{
						open_sequence_task(&iVar0);
						if (func_594(iVar282, Global_35))
						{
							func_255(0, 1, "PLAYER_WAITS_01_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
						else
						{
							func_255(0, 1, "PLAYER_WAITS_01_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
						task_aim_gun_at_coord(0, Local_216.f_7, -1, false, false);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
					}
					else
					{
						func_263(iVar282, Global_35, 22);
					}
					iLocal_613 = iVar611 + 1;
				}
			}
			break;
		case 2:
			if (Local_216 == 0 || (Local_216 == 1 && get_sequence_progress(iVar282) == 1))
			{
				if (!is_scripted_speech_playing(iVar282))
				{
					func_222(&uLocal_614);
					iLocal_613 = iVar611 + 1;
				}
			}
			break;
		case 3:
			if (func_403(-3f, 1, 0, 0))
			{
				if (func_380(&uLocal_614, 6f))
				{
					if (Local_216 == 1)
					{
						open_sequence_task(&iVar0);
						if (func_594(iVar282, Global_35))
						{
							func_255(0, 1, "PLAYER_WAITS_02_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
						else
						{
							func_255(0, 1, "PLAYER_WAITS_02_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
						task_aim_gun_at_coord(0, Local_216.f_7, -1, false, false);
						func_52(iVar282, &iVar0, 0, 0, 1, 1);
					}
					else
					{
						func_263(iVar282, Global_35, 23);
					}
					iLocal_613 = iVar611 + 1;
				}
			}
			break;
		case 4:
			if (Local_216 == 0 || (Local_216 == 1 && get_sequence_progress(iVar282) == 1))
			{
				if (func_403(-3f, 1, 0, 0))
				{
					func_222(&uLocal_614);
					iLocal_613 = iVar611 + 1;
				}
			}
			break;
		case 5:
			if (func_403(-3f, 1, 0, 0))
			{
				if (func_380(&uLocal_614, 6f))
				{
					open_sequence_task(&iVar0);
					if (Local_216 == 1)
					{
						if (func_594(iVar282, Global_35))
						{
							func_255(0, 1, "GIVEUP_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
						else
						{
							func_255(0, 1, "GIVEUP_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
						}
					}
					else
					{
						func_263(iVar282, Global_35, 24);
					}
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					func_220(&iLocal_285);
					func_421();
					func_241();
					func_82(37);
					iLocal_613 = iVar611 + 1;
					return true;
				}
			}
			break;
		case 6:
			if ((Local_216 == 1 && get_sequence_progress(iVar282) == 1) || (Local_216 == 0 && func_403(-3f, 1, 0, 0)))
			{
				func_82(28);
				return true;
			}
			break;
	}
	return false;
}

bool func_425()
{
	switch (Local_216)
	{
		case 1:
			if (func_405() || get_sequence_progress(iVar282) == 1)
			{
				func_129(40);
				return true;
			}
			break;
		case 0:
			if (!is_scripted_speech_playing(iVar282))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_426()
{
	if (func_434(1098907648, 0))
	{
		if (is_player_free_aiming(player_id()) || is_ped_shooting(Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_427()
{
	switch (Local_216)
	{
		case 1:
			open_sequence_task(&iVar0);
			if (func_594(iVar282, Global_35))
			{
				func_255(0, 1, "GO_L_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
			}
			else
			{
				func_255(0, 1, "GO_R_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
			}
			task_aim_gun_at_coord(0, Local_216.f_7, -1, false, false);
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			break;
		case 0:
			func_263(iVar282, Global_35, 14);
			break;
	}
	func_82(15);
}

void func_428()
{
	if (func_597())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

void func_429()
{
	if (bVar757)
	{
		func_222(&uLocal_769);
	}
}

bool func_430()
{
	switch (Local_216)
	{
		case 1:
			if (func_405() || get_sequence_progress(iVar282) == 1)
			{
				func_129(40);
				return true;
			}
			break;
		case 0:
			if (func_403(-5.5f, 1, 0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_431(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bVar1 = false;
	iVar2 = func_598(uParam0, uParam1, iVar575, iVar576, bParam3);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (does_blip_exist(uParam1[iVar0]))
			{
				if (has_entity_been_damaged_by_entity(uParam0[iVar0], Global_35, 1, 1))
				{
					bVar1 = true;
					func_220((*uParam1)[iVar0]);
					iLocal_581 = iVar575 + 1;
					set_object_targettable(uParam0[iVar0], false);
				}
				else if (has_entity_been_damaged_by_entity(uParam0[iVar0], iVar278, 1, 1))
				{
					bVar1 = true;
					func_220((*uParam1)[iVar0]);
					iLocal_582 = iVar576 + 1;
					set_object_targettable(uParam0[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if ((iVar575 + iVar576) >= iParam2 || iVar2 == 3)
	{
		func_599(1);
		return true;
	}
	else
	{
		func_600(iVar2);
	}
	func_599(bVar1);
	return false;
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_433(bool bParam0)
{
	if (bParam0 || does_entity_exist(iVar580))
	{
		if (bParam0)
		{
			vVar0 = { func_601(iVar281, Local_216.f_7, 1065353216) };
		}
		else
		{
			vVar0 = { func_602(iVar281, iVar580, 1065353216) };
		}
		if (func_578(get_entity_coords(iVar281, true, false), vVar0, Global_36, 0.85f) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_434(float fParam0, bool bParam1)
{
	vVar0 = { get_entity_coords(iVar280, true, false) };
	if (func_603(vVar0, Global_36) <= fParam0)
	{
		fVar3 = func_603(vVar0, Local_216.f_7);
		fVar4 = func_603(Global_36, Local_216.f_7);
		if (!bParam1 && (fVar3 - fVar4) > 2f)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_435()
{
	vVar0 = { get_entity_coords(iVar282, true, false) };
	fVar3 = func_603(vVar0, Local_216.f_7);
	fVar4 = func_603(Global_36, Local_216.f_7);
	if ((fVar3 - fVar4) > 1f)
	{
		return true;
	}
	return false;
}

bool func_436(bool bParam0)
{
	iVar0 = func_432(Global_35, 0, 1, 0);
	if (iVar0 == -1569615261)
	{
		return true;
	}
	if (!_0x705be297eebdb95d(iVar0))
	{
		return false;
	}
	if (!bParam0)
	{
		if (_is_weapon_melee(iVar0))
		{
			return false;
		}
	}
	switch (iVar0)
	{
		case -2002235300:
		case 115405099:
			return false;
		default:
			break;
	}
	switch (get_ped_ammo_type_from_weapon(Global_35, -1))
	{
		case -1841822177:
		case -1040876935:
		case 126245522:
		case 296901449:
		case 954660191:
		case 990323211:
			return false;
		default:
			break;
	}
	return true;
}

void func_437(int iParam0)
{
	func_27(&(Local_14.f_5));
	func_34(&uLocal_626);
	func_36(&(Local_14.f_5), 1);
	func_37(&(Local_14.f_5), 1);
	func_38(&(Local_14.f_5), 1);
	switch (iParam0)
	{
		case 0:
			func_129(29);
			break;
		case 1:
			func_39(&(Local_14.f_5), 0);
			func_35(&(Local_14.f_5), 0);
			func_82(29);
			func_46(1);
			break;
	}
	iLocal_659 = iParam0;
}

void func_438(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, float fParam6, float fParam7, int iParam8)
{
	switch (Local_216)
	{
		case 0:
			func_255(iParam0, iParam1, sParam3, iParam5, fParam6, fParam7, iParam8, 0);
			break;
		case 1:
			func_255(iParam0, iParam2, sParam4, iParam5, fParam6, fParam7, iParam8, 0);
			break;
	}
}

bool func_439(int iParam0, int iParam1, char* sParam2)
{
	return is_entity_playing_anim(iParam0, func_191(iParam1), sParam2, 1);
}

void func_440()
{
	if (Local_216 == 1)
	{
		func_586(&Local_369, 0, "RE_SS_BYN_V1_MG_ACCEPT_P", 0);
		func_586(&Local_369, 1, "RE_SS_BYN_V1_MG_DECLINE_P", 0);
	}
	else if (Local_216 == 0)
	{
		func_586(&Local_369, 0, "RE_SS_HTL_V1_MG_ACCEPT_P", 0);
		func_586(&Local_369, 1, "RE_SS_HTL_V1_MG_DECLINE_P", 0);
	}
	func_587(&Local_369, 0, 1, 0);
	func_587(&Local_369, 1, 1, 0);
	func_587(&Local_369, 2, 1, 0);
	func_588(&Local_369, 0, "BEAT_CON_ACCEPT_WAGER", func_21(&Local_216, 1, 0));
	func_589(&Local_369, 1, "BEAT_CON_DECLINE_CHAL");
	func_281(Local_369.f_21[0], 2);
	func_590(func_32(2, 0, 0));
}

void func_441(int iParam0)
{
	if (bVar348)
	{
		return;
	}
	iLocal_351 = 1;
	iLocal_356 = iParam0;
}

bool func_442()
{
	if (func_592() && iVar611 < 5)
	{
		func_383(&uLocal_322, 6f);
		iLocal_613 = 5;
	}
	switch (iVar611)
	{
		case 0:
			func_222(&uLocal_614);
			iLocal_613 = iVar611 + 1;
			break;
		case 1:
			if (func_380(&uLocal_614, 6f))
			{
				func_263(iVar282, Global_35, 38);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 2:
			if (!is_scripted_speech_playing(iVar282))
			{
				func_222(&uLocal_614);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 3:
			if (func_380(&uLocal_614, 6f))
			{
				func_263(iVar282, Global_35, 39);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 4:
			if (!is_scripted_speech_playing(iVar282))
			{
				func_222(&uLocal_614);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 5:
			if (func_380(&uLocal_614, 6f))
			{
				func_263(iVar282, Global_35, 40);
				func_82(37);
				iLocal_613 = iVar611 + 1;
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

Vector3 func_443()
{
	switch (Local_251.f_5)
	{
		case 0:
			vVar0 = { func_79(0, Local_251.f_6) };
			if (!func_80(vVar0))
			{
				return vVar0;
			}
			break;
	}
	return Local_251.f_8;
}

bool func_444()
{
	if (!bVar750)
	{
		if (has_anim_event_fired(iVar282, 1607707100))
		{
			iLocal_752 = 1;
		}
	}
	if (iVar277 >= 3)
	{
	}
	if (iVar277 <= 3)
	{
		if (func_445())
		{
			func_246();
		}
	}
	switch (iVar277)
	{
		case 0:
			open_sequence_task(&iVar0);
			if (Local_216 == 1)
			{
				if (Local_216.f_2 == 0 || Local_216.f_2 == 1)
				{
					func_255(0, 2, "BIRD_PURPOSE_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
				}
			}
			func_255(0, 3, "READY_BASE_SHOOTER", -1, 1082130432, -1065353216, 1, 0);
			func_52(iVar282, &iVar0, 0, 0, 1, 1);
			func_129(0);
			func_129(1);
			func_129(40);
			func_222(&uLocal_325);
			iLocal_581 = 0;
			iLocal_582 = 0;
			func_604();
			func_605();
			iLocal_279 = 1;
			break;
		case 1:
			if (bVar750 && is_ped_shooting(Global_35))
			{
				if (!has_anim_event_fired(iVar282, -875576053))
				{
					if (func_434(10f, 1))
					{
						func_606(0, 0);
					}
				}
			}
			else if (func_607() || func_405())
			{
				if (func_434(10f, 1))
				{
					if (Local_251.f_5 == 0)
					{
						func_608();
					}
					func_609();
					iLocal_279 = 3;
					return false;
				}
				else if (!func_48(1))
				{
					func_422("RESS_OBJ_MG_POS", 7500, 0, 0, -1, -1, 0);
					func_82(1);
				}
				if (func_610())
				{
					open_sequence_task(&iVar0);
					func_255(0, 2, "BIRD_EXIT_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
					if (func_48(19))
					{
						func_256(0, Global_35, 3, "CHALL_WON_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
						func_257(Global_35, 2, 2000, 1082130432, -1065353216, 1);
						func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
					}
					else
					{
						func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
					}
					func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
					func_52(iVar282, &iVar0, 0, 0, 1, 1);
					iLocal_279 = 4;
				}
			}
			break;
		case 3:
			func_611();
			if (!bVar344)
			{
				if (Local_251.f_5 != 0)
				{
					if (!func_229(&uLocal_328))
					{
						if (!func_400(iVar282, 1))
						{
							switch (Local_251.f_5)
							{
								case 2:
									func_263(iVar282, Global_35, 77);
									break;
								case 1:
									func_263(iVar282, Global_35, 69);
									break;
							}
							func_222(&uLocal_328);
						}
					}
					else if (func_380(&uLocal_328, 1f))
					{
						iLocal_346 = 1;
					}
				}
				else
				{
					iLocal_346 = 1;
				}
			}
			if (((func_612() || has_anim_event_fired(iVar282, -378530341)) || has_anim_event_fired(iVar282, -1126401914)) || ((bVar344 && !func_439(iVar282, 2, "BIRD_START_SHOOTER")) && !func_439(iVar282, 2, "BIRD_RULES_SHOOTER")))
			{
				func_606(0, 0);
			}
			else if (func_434(7f, 1))
			{
				if (func_48(1))
				{
					func_129(1);
				}
			}
			else if (!func_48(1))
			{
				func_422("RESS_OBJ_MG_POS", 7500, 0, 0, -1, -1, 0);
				func_82(1);
			}
			break;
		case 4:
			if (func_439(iVar282, 3, func_258(iVar604)) || has_anim_event_fired(iVar282, 261077547))
			{
				func_46(0);
				func_240(0, 1094713344);
				func_260();
				iLocal_273 = 10;
				return false;
			}
			break;
		case 5:
			func_611();
			func_429();
			set_ped_reset_flag(Global_35, 5, true);
			if (!func_287(iVar695, 1))
			{
				func_208(iVar695, 1);
			}
			if (func_613())
			{
				func_614();
				func_260();
				return true;
			}
			else
			{
				func_615();
			}
			break;
	}
	return false;
}

bool func_445()
{
	return uVar349;
}

bool func_446(var uParam0, float fParam1)
{
	if (func_380(uParam0, fParam1))
	{
		func_230(uParam0);
		return true;
	}
	return false;
}

bool func_447(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return false;
		default:
			break;
	}
	return true;
}

void func_448(int* iParam0)
{
	func_281(iParam0, 9);
}

bool func_449(var uParam0)
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

void func_450(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_616(uParam0, 0, 0, 0))
	{
		set_anim_scene_entity(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_451(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_588(&Local_369, 0, "BEAT_CON_TAKE_MONEY", func_21(&Local_216, bParam1, 0));
		func_281(Local_369.f_21[0], 2);
		func_587(&Local_369, 1, 0, 0);
	}
	else
	{
		func_588(&Local_369, 0, "BEAT_CON_GIVE_MONEY", func_21(&Local_216, bParam1, 0));
		func_281(Local_369.f_21[0], 1);
		func_282(Local_369.f_21[0], 2);
		func_587(&Local_369, 1, 1, 0);
		func_589(&Local_369, 1, func_276(10));
	}
	func_587(&Local_369, 0, 1, 0);
	func_587(&Local_369, 2, 1, 0);
	func_617(Local_369.f_21[0], 1, 0);
	func_590(func_32(2, 0, 0));
}

void func_452()
{
	func_618(&Local_585, get_entity_coords(iVar282, true, false) - Vector(1f, 0f, 0f), get_entity_rotation(iVar282, 2), 2);
}

bool func_453()
{
	return func_619(1) >= func_21(&Local_216, func_48(21), 0);
}

char* func_454(char[4] cParam0)
{
	return func_620(&Local_216, cParam0);
}

bool func_455()
{
	func_24(Global_35, get_entity_coords(iVar282, true, false), &uLocal_208, 1061158912, 0, 0);
	bVar1 = func_595(&uLocal_208, 2000);
	fVar2 = func_621(Global_35, iVar282, 1, 1);
	bVar3 = fVar2 <= 8f;
	bVar4 = fVar2 <= 4f;
	bVar5 = !func_51(Global_35, iVar282, 17f, 1);
	if (iVar610 != 6 && !func_48(24))
	{
		if (bVar1 && !bVar4)
		{
			iLocal_611 = iVar610;
			iLocal_612 = 6;
			if (func_229(&uLocal_608))
			{
				func_230(&uLocal_608);
				iLocal_607 = 1;
			}
			else
			{
				iLocal_607 = 0;
			}
		}
	}
	if (iVar610 != 7)
	{
		if (!bVar3)
		{
			if (func_48(24))
			{
				iLocal_611 = iVar610;
				iLocal_612 = 7;
				if (func_229(&uLocal_608))
				{
					func_230(&uLocal_608);
					iLocal_607 = 1;
				}
				else
				{
					iLocal_607 = 0;
				}
			}
		}
	}
	if (bVar5)
	{
		return true;
	}
	switch (iVar610)
	{
		case 0:
			func_222(&uLocal_608);
			iLocal_612 = 1;
			break;
		case 1:
			if (func_446(&uLocal_608, 10f))
			{
				open_sequence_task(&iVar0);
				if (iVar604 == 0)
				{
					func_256(0, Global_35, 3, "MONEY_LOST_WAIT_A_SHOOTER", -1, 1082130432, -1065353216, 0);
				}
				else
				{
					func_256(0, Global_35, 3, "MONEY_WON_WAIT_A_SHOOTER", -1, 1082130432, -1065353216, 0);
				}
				func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				iLocal_612 = 2;
			}
			break;
		case 2:
			if (get_sequence_progress(iVar282) == 1)
			{
				func_222(&uLocal_608);
				iLocal_612 = 3;
			}
			break;
		case 3:
			if (func_446(&uLocal_608, 10f))
			{
				open_sequence_task(&iVar0);
				if (iVar604 == 0)
				{
					func_256(0, Global_35, 3, "MONEY_LOST_WAIT_B_SHOOTER", -1, 1082130432, -1065353216, 0);
				}
				else
				{
					func_256(0, Global_35, 3, "MONEY_WON_WAIT_B_SHOOTER", -1, 1082130432, -1065353216, 0);
				}
				func_256(0, Global_35, 3, func_258(iVar604), -1, 1082130432, -1065353216, 1);
				func_52(iVar282, &iVar0, 0, 0, 1, 1);
				iLocal_612 = 4;
			}
			break;
		case 4:
			if (get_sequence_progress(iVar282) == 1)
			{
				func_222(&uLocal_608);
				iLocal_612 = 5;
			}
			break;
		case 5:
			if (func_380(&uLocal_608, 10f))
			{
				func_82(37);
				return true;
			}
			break;
		case 6:
			if (!func_48(24))
			{
				switch (iVar604)
				{
					case 1:
						func_263(iVar282, Global_35, 106);
						break;
					case 0:
						func_263(iVar282, Global_35, 100);
						break;
				}
				func_82(24);
			}
			else if (func_403(-3f, 1, 0, 0))
			{
				iLocal_612 = iVar609;
				if (bVar605)
				{
					func_222(&uLocal_608);
				}
				return false;
			}
			break;
		case 7:
			if (!func_48(25))
			{
				switch (iVar604)
				{
					case 1:
						func_263(iVar282, Global_35, 105);
						break;
					case 0:
						return true;
				}
				func_82(25);
			}
			else
			{
				if (func_403(-3f, 1, 0, 0))
				{
					if (!bVar3)
					{
						iLocal_612 = iVar609;
						if (bVar605)
						{
							func_222(&uLocal_608);
						}
						return false;
					}
				}
				if (func_403(2f, 1, 0, 0) && !bVar3)
				{
					func_82(37);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_456()
{
	if (!bVar753)
	{
		if (func_622(&Local_781, 106))
		{
			set_player_control(player_id(), true, 0, false);
			iLocal_755 = 1;
		}
	}
	return bVar753;
}

void func_457(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		start_anim_scene(uParam0->f_1);
	}
}

void func_458(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_623(iParam0);
	if (bParam3)
	{
		func_624(iParam0, sParam1, iParam2);
	}
}

void func_459(int iParam0, int iParam1)
{
	func_22(iParam0, (func_625(iParam0) + iParam1));
}

void func_460(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_626(iParam0, sParam4, iParam5);
	}
	func_627(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_461(int iParam0, int iParam1)
{
	func_22(iParam0, (func_625(iParam0) - iParam1));
}

void func_462(bool bParam0)
{
	set_ped_config_flag(iVar281, 355, true);
	if (!bParam0)
	{
		open_sequence_task(&iVar0);
	}
	if (!is_entity_dead(Local_287.f_11))
	{
		func_628();
		task_mount_animal(0, Local_287.f_11, -1, -1, 1f, 1, 0, 0);
		_task_move_in_traffic(0, -1082130432, 0, 0);
		task_wander_standard(0, 40000f, 0);
	}
	else
	{
		func_628();
		task_wander_standard(0, 40000f, 0);
	}
	if (!bParam0)
	{
		func_52(iVar281, &iVar0, 0, 0, 1, 1);
	}
}

void func_463()
{
	if (Local_14.f_46)
	{
		return;
	}
	switch (iVar734)
	{
		case 0:
			func_629();
			if (iVar733 == 3)
			{
				func_630();
				func_82(46);
				func_54(&uLocal_284, &Local_369, &(Local_369.f_21), 1, 1);
				iLocal_736 = 4;
			}
			else
			{
				func_631();
				iLocal_736 = 1;
			}
			break;
		case 1:
			switch (iVar442)
			{
				case 0:
					func_632(2);
					if (bVar729)
					{
						func_230(&uLocal_727);
						func_633(Global_35, iVar282, "DEFUSE");
					}
					else
					{
						func_633(Global_35, iVar282, "ENCOURAGE_01");
					}
					break;
				case 1:
					func_632(3);
					if (bVar729 && !bVar749)
					{
						func_633(Global_35, iVar282, "THREAT");
					}
					else if (!bVar728)
					{
						func_633(Global_35, iVar282, "ANTAG_01");
					}
					else if (!bVar747)
					{
						func_633(Global_35, iVar282, "ANTAG_02");
					}
					else
					{
						func_633(Global_35, iVar282, "ANTAG_FINAL");
					}
					break;
				case -1:
					if (bVar729 && !bVar749)
					{
						if (func_229(&uLocal_727) && func_380(&uLocal_727, 4f))
						{
							func_632(2);
							iLocal_737 = 3;
							func_222(&uLocal_732);
							func_587(&Local_369, 1, 1, 0);
							func_587(&Local_369, 0, 0, 0);
							func_230(&uLocal_727);
							func_633(iVar282, Global_35, "DEFUSE_RESP");
						}
					}
					break;
			}
			break;
		case 2:
			switch (func_634())
			{
				case 1:
					if (bVar729)
					{
						func_633(iVar282, Global_35, "DEFUSE_RESP");
					}
					else
					{
						func_633(iVar282, Global_35, "ENCOURAGE_01_RESP");
					}
					break;
				case 2:
					func_587(&Local_369, 2, 1, 0);
					func_587(&Local_369, 1, 1, 0);
					func_587(&Local_369, 0, 0, 0);
					func_589(&Local_369, 1, func_276(10));
					iLocal_751 = 1;
					func_635(1);
					break;
			}
			break;
		case 3:
			switch (func_634())
			{
				case 1:
					if (!bVar728)
					{
						func_633(iVar282, Global_35, "ANTAG_01_RESP");
					}
					else if (bVar729)
					{
						func_633(iVar282, Global_35, "THREAT_RESP");
						task_go_to_entity_while_aiming_at_entity(iVar282, Global_35, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, -687903391, 0);
					}
					else if (!bVar747)
					{
						func_633(iVar282, Global_35, "ANTAG_02_RESP");
					}
					else
					{
						iLocal_750 = 1;
						func_633(iVar282, Global_35, "ANTAG_FINAL_RESP");
						task_go_to_entity_while_aiming_at_entity(iVar282, Global_35, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, -687903391, 0);
					}
					break;
				case 2:
					func_587(&Local_369, 2, 1, 0);
					if (!bVar728)
					{
						func_587(&Local_369, 1, 1, 0);
						func_587(&Local_369, 0, 0, 0);
						if (!bVar728)
						{
							iLocal_730 = 1;
						}
					}
					else if (!bVar729 && !bVar748)
					{
						func_636();
						if (!bVar747)
						{
							iLocal_749 = 1;
						}
						iLocal_731 = 1;
						func_222(&uLocal_727);
					}
					else
					{
						func_376(1);
						Local_14.f_46 = 1;
						if (func_48(5))
						{
							func_372(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iVar282, 0, 1065353216, 0);
						}
					}
					func_635(1);
					break;
			}
			break;
	}
}

int func_464(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_637(&iVar0);
	if (func_30(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_638(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_30(iVar0, 134217728))
	{
		func_639(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_640(558))
				{
					func_641(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_465(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_278((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

int func_466(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_488())
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
				if (func_642(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_621(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_222(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_643(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_103(func_644(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_467(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	func_54(uParam0, iParam2, uParam3, 1, 1);
	func_645(*uParam0, uParam1, iParam4);
}

int func_468(char* sParam0, char* sParam1)
{
	return ceil((1000f * get_anim_duration(sParam0, sParam1)));
}

int func_469(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_470(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_471(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

int func_472(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_366(iVar0, &iVar1, &iVar2);
		if (iParam0 >= iVar1 && iParam0 <= iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char[] func_473(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scenario@randomEvent@SHARP_SHOOTER@WIN";
		case 0:
			return "scenario@randomEvent@SHARP_SHOOTER@LOSE";
		default:
			break;
	}
	return func_341("[RESS]", "RESS_PAYMENT_SCENE_NAME - Invalid Reward Type.");
}

char* func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_HANDOVER";
		default:
			break;
	}
	return "";
}

void func_475(var uParam0)
{
}

bool func_476(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
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

void func_477(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_478()
{
	return &Global_1935436 == 2;
}

void func_479(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_480(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_62(iParam0, 2))
	{
		func_647(iParam0, func_646(iParam1));
	}
	else
	{
		func_648(iParam0, func_535());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_156(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_649(iParam0, 0);
	func_650(iParam0);
	func_651(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_62(iParam0, 16))
	{
		func_481(iParam0, 0, 0, 0, 0);
	}
}

void func_481(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_652() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_176(iVar1) && !func_62(iVar1, iParam2)) && (!bParam3 || !func_497(iVar1))) && (!bParam4 || !func_653(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_654(iVar0);
			}
		}
		iVar0++;
	}
}

int func_482(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_483(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_152(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_62(uParam0->f_3, 1073741824))
			{
				func_655(2, -1, 0, 0, 0);
			}
			else
			{
				func_655(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_655(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_656(1, uParam0->f_177))
				{
					func_657(16, uParam0->f_177);
					func_658(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_659(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_655(8, -1, 0, 0, 0);
	}
}

int func_484()
{
	if (func_546(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_660())
		{
			return 1;
		}
	}
	return 0;
}

float func_485(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_62(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_62(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_62(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_62(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_62(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_62(uParam0->f_3, 1))
		{
		}
		else if (func_62(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_486(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_661(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_662(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_572() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_487(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_268(uParam0);
	return true;
}

bool func_488()
{
	return (Global_1894899 & 1 != 0 && func_500() != -1);
}

bool func_489(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_490(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_663(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_491(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_665(func_664());
	if (func_30(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_30(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_30(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_30(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_30(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_30(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_30(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_30(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_30(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_30(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_30(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_30(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_30(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_30(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_492(int iParam0, int iParam1)
{
	return (func_482(iParam0) && iParam1) != 0;
}

bool func_493(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_666(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_667(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_668(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_669(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_670(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_671(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_672(iVar3))
	{
		return true;
	}
	return false;
}

bool func_494(bool bParam0)
{
	if (func_673(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_495(int iParam0)
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

bool func_496(int iParam0, bool bParam1, bool bParam2)
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
		if (func_674())
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
		iVar0 = func_675(&(Global_1898164->f_1[0]));
		if (func_676(iVar0) && func_677((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_678(&(Global_1898164->f_1[0])))
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

bool func_497(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	if (func_679(64) && func_680(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_498(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_681(iVar0) || func_682(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_499()
{
	return Global_1894899 & 4 != 0;
}

int func_500()
{
	return Global_1894899->f_2;
}

int func_501(int iParam0)
{
	if (!func_683(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_502(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_503(vector3 vParam0, int iParam3)
{
	if (!func_502(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_504(vector3 vParam0)
{
	if (func_80(vParam0))
	{
		return false;
	}
	fVar0 = func_107(func_488(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_505(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_222(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_222(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_229(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_380(uParam0, fParam2))
		{
			return true;
		}
		if (func_229(uParam0))
		{
			func_230(uParam0);
		}
	}
	return false;
}

bool func_506(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

bool func_507(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_508(int iParam0, int iParam1)
{
	if (!func_507(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_509(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_510(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_511(int iParam0)
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

void func_512(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_513(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_514(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (bParam1)
	{
		func_684(iParam0, 4);
		func_685(iVar0, 1);
		func_686(iVar0, 1);
	}
	else
	{
		func_687(iParam0, 4);
		func_686(iVar0, 0);
	}
}

void func_515(int* iParam0, char* sParam1)
{
	if (func_511(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_513(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_282(iParam0, 1);
}

int func_516(int iParam0)
{
	return iParam0;
}

void func_517(int iParam0)
{
	if (!func_688(iParam0))
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

void func_518(int iParam0, int iParam1)
{
	func_541(iParam0, iParam1);
}

int func_519(int iParam0, int iParam1)
{
	iVar1 = func_540(iParam0, iParam1);
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

void func_520()
{
	func_689(23);
}

void func_521(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_522(var uParam0)
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

void func_523(int iParam0)
{
	iVar0 = func_690(iParam0);
	if (iVar0 != 0)
	{
		func_691(-1, 24, 0, iVar0);
	}
}

void func_524(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_693(func_692(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_62(iParam0, 2))
	{
		func_694(iParam0, func_646(iParam3));
	}
	if (func_62(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_535();
		}
		func_695(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_163(iParam0, 65536))
	{
		func_696(iParam0, iParam1);
		func_697(iParam0, func_161(iParam0, iParam1));
		func_521(128);
	}
	func_156(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_649(iParam0, 1);
	if (!bParam2)
	{
		func_521(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_698(524288);
	}
	if (func_699(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_699(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_525(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_700(&Global_0, 8);
	}
	if (!func_701() || func_182() != -1)
	{
		return;
	}
	func_700(&Global_0, 1);
}

int func_526(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_527(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_528()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_529(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_530();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_702(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_530()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_703(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_531(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765->f_337 >= 6)
	{
		return;
	}
	Global_1934765->f_318[Global_1934765->f_337] = iParam0;
	Global_1934765->f_318[Global_1934765->f_337]->f_1 = iParam1;
	Global_1934765->f_318[Global_1934765->f_337]->f_2 = fParam2;
	Global_1934765->f_337++;
}

bool func_532(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

int func_533(int iParam0, bool bParam1)
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

void func_534(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

int func_535()
{
	return Global_1897952->f_41;
}

bool func_536(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_80(vParam0))
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

bool func_537(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_80(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_538(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_80(*Global_1310750->f_16043[iVar0]))
		{
			if (func_274(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_539()
{
	iVar0 = func_704(func_500());
	if (iVar0 == 8)
	{
		iVar1 = func_501(func_500());
		if (func_503(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_706(func_705(0)))
	{
		return false;
	}
	if (func_707())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

int func_540(int iParam0, int iParam1)
{
	if (!func_176(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

void func_541(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_542(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_543(var uParam0)
{
	return func_207(*uParam0, 1);
}

bool func_544(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_708(*uParam0, 0f, 0f, 0f))
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

void func_545(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_709(iParam1))
		{
			func_710(iParam0, 41788943);
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
			func_711(iParam0, 0, 1);
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
			func_712(iParam0, 0);
			bVar0 = true;
		}
		func_713(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_546(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_547(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_714(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_715((386 + iVar28), 1);
			if (func_716(iParam0, &Var0, iVar5, 0))
			{
				if (func_717(iParam0, &Var6, iVar5))
				{
					Var29 = { func_718(iParam0, Var0, iVar5, 0) };
					func_719(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_720(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_721(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_722(iParam0, iParam1);
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

void func_548(int iParam0, int iParam1, float fParam2)
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

bool func_549(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

char* func_550(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return func_620(iParam0, "PRACTICE_BAD");
				case 1:
					return func_620(iParam0, "PRACTICE_GOOD");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 2:
					return func_723(iParam0);
				case 3:
					return func_724(iParam0);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return func_725(iParam0, "CHALLENGE_01A", "CHALLENGE_02A", "CHALLENGE_03A", 0, 0);
				case 5:
					return func_725(iParam0, "CHALLENGE_01B", "CHALLENGE_02B", "CHALLENGE_03B", 0, 0);
				case 6:
					return func_725(iParam0, "INTRO_EXIT_01", "INTRO_EXIT_02", "INTRO_EXIT_03", 0, 0);
				case 7:
					return func_725(iParam0, "INTRO_ACCEPT_01", "INTRO_ACCEPT_02", "INTRO_ACCEPT_03", 0, 0);
				case 8:
					return func_725(iParam0, "INTRO_ACCEPT_01P", "INTRO_ACCEPT_02P", "INTRO_ACCEPT_03P", 0, 0);
				case 9:
					return func_725(iParam0, "INTRO_DECLINE_01", "INTRO_DECLINE_02", "INTRO_DECLINE_03", 0, 0);
				case 10:
					return func_725(iParam0, "INTRO_DECLINE_01P", "INTRO_DECLINE_02P", "INTRO_DECLINE_03P", 0, 0);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 11:
					return func_725(iParam0, "RULES_01", "RULES_02", "RULES_03", 0, 0);
				case 12:
					return func_620(iParam0, "DIRECT");
				case 13:
					return func_620(iParam0, "DRAW_GUN");
				case 14:
					return func_620(iParam0, "COMMENCE");
				case 15:
					return func_620(iParam0, "COMMENCE_EARLY");
				case 16:
					return func_620(iParam0, "RANGE_CLEAR");
				case 17:
					return func_620(iParam0, "POSITION");
				case 18:
					return func_620(iParam0, "LEAVING");
				case 19:
					return func_620(iParam0, "MOUNTED");
				case 20:
					return func_620(iParam0, "IN_VEHICLE");
				case 21:
					return func_620(iParam0, "BAD_WEAPON");
				case 22:
					return func_620(iParam0, "COMP_WAIT_PRE_01");
				case 23:
					return func_620(iParam0, "COMP_WAIT_PRE_02");
				case 24:
					return func_620(iParam0, "COMP_WAIT_PRE_EXIT");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 25:
					return func_620(iParam0, "COMP_HIT");
				case 26:
					return func_620(iParam0, "COMP_MISS");
				case 27:
					return func_725(iParam0, "COMP_WIN_01", "COMP_WIN_02", "COMP_WIN_03", 0, 1);
				case 28:
					return func_725(iParam0, "COMP_WIN_01P", "COMP_WIN_02P", "COMP_WIN_03P", 0, 0);
				case 29:
					return func_725(iParam0, "COMP_LOSE_01", "COMP_LOSE_02", "COMP_LOSE_03", 0, 0);
				case 30:
					return func_725(iParam0, "COMP_LOSE_01P", "COMP_LOSE_02P", "COMP_LOSE_03P", 0, 0);
				case 31:
					return func_725(iParam0, "TAUNT_01", "TAUNT_02", "TAUNT_03", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 949
			switch (iParam2)
			{
				case 32:
					return func_725(iParam0, "MG_PROPOSE_WIN_01", "MG_PROPOSE_WIN_02", "MG_PROPOSE_WIN_03", 0, 0);
				case 33:
					return func_725(iParam0, "MG_PROPOSE_LOSE_01", "MG_PROPOSE_LOSE_02", "MG_PROPOSE_LOSE_03", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 1018
			switch (iParam2)
			{
				case 34:
					return func_620(iParam0, "MG_ACCEPT");
				case 35:
					return func_620(iParam0, "MG_ACCEPT_P");
				case 36:
					return func_620(iParam0, "MG_DECLINE");
				case 37:
					return func_620(iParam0, "MG_DECLINE_P");
				case 38:
					return func_620(iParam0, "MG_INPUT_WAIT_01");
				case 39:
					return func_620(iParam0, "MG_INPUT_WAIT_02");
				case 40:
					return func_620(iParam0, "MG_INPUT_WAIT_EXIT");
				default:
					break;
			}
			Jump @2976; //curOff = 1162
			switch (iParam2)
			{
				case 42:
					return func_725(iParam0, "BIRD_INTRO_01", "BIRD_INTRO_02", "BIRD_INTRO_02", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 1202
			switch (iParam2)
			{
				case 43:
					return func_725(iParam0, "FROG_INTRO_01", "FROG_INTRO_02", "FROG_INTRO_02", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 1242
			switch (iParam2)
			{
				case 44:
					return func_725(iParam0, "RAT_INTRO_01", "RAT_INTRO_02", "RAT_INTRO_02", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 1282
			switch (iParam2)
			{
				case 41:
					return func_725(iParam0, "SNIPER_INTRO_01", "SNIPER_INTRO_02", "SNIPER_INTRO_02", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 1322
			switch (iParam2)
			{
				case 55:
					return func_620(iParam0, "BIRD_RULES");
				case 56:
					return func_620(iParam0, "BIRD_INSTRUCT");
				case 57:
					return func_620(iParam0, "BIRD_WAIT");
				case 58:
					return func_620(iParam0, "BIRD_COMMENCE");
				case 59:
					return func_620(iParam0, "BIRD_WAIT_01");
				case 60:
					return func_620(iParam0, "BIRD_WAIT_02");
				case 61:
					return func_620(iParam0, "BIRD_WAIT_03");
				case 62:
					return func_620(iParam0, "BIRD_EXIT");
				default:
					break;
			}
			Jump @2976; //curOff = 1485
			switch (iParam2)
			{
				case 63:
					return func_620(iParam0, "FROG_RULES");
				case 64:
					return func_620(iParam0, "FROG_INSTRUCT");
				case 65:
					return func_620(iParam0, "FROG_WAIT");
				case 66:
					return func_620(iParam0, "FROG_COMMENCE");
				case 67:
					return func_620(iParam0, "FROG_WAIT_01");
				case 68:
					return func_620(iParam0, "FROG_WAIT_02");
				case 69:
					return func_620(iParam0, "FROG_WAIT_03");
				case 70:
					return func_620(iParam0, "FROG_EXIT");
				default:
					break;
			}
			Jump @2976; //curOff = 1648
			switch (iParam2)
			{
				case 71:
					return func_620(iParam0, "RAT_RULES");
				case 72:
					return func_620(iParam0, "RAT_INSTRUCT");
				case 73:
					return func_620(iParam0, "RAT_WAIT");
				case 74:
					return func_620(iParam0, "RAT_COMMENCE");
				case 75:
					return func_620(iParam0, "RAT_WAIT_01");
				case 76:
					return func_620(iParam0, "RAT_WAIT_02");
				case 77:
					return func_620(iParam0, "RAT_WAIT_03");
				case 78:
					return func_620(iParam0, "RAT_EXIT");
				default:
					break;
			}
			Jump @2976; //curOff = 1811
			switch (iParam2)
			{
				case 45:
					return func_620(iParam0, "SNIPER_RULES");
				case 46:
					return func_620(iParam0, "SNIPER_TAUNT");
				case 47:
					return func_620(iParam0, "SNIPER_READY");
				case 48:
					return func_620(iParam0, "SNIPER_COUNT_01");
				case 49:
					return func_620(iParam0, "SNIPER_COUNT_02");
				case 50:
					return func_620(iParam0, "SNIPER_COMMENCE");
				case 51:
					return func_620(iParam0, "SNIPER_WAIT_01");
				case 52:
					return func_620(iParam0, "SNIPER_WAIT_02");
				case 53:
					return func_620(iParam0, "SNIPER_POSITION");
				case 54:
					return func_620(iParam0, "SNIPER_EXIT");
				default:
					break;
			}
			Jump @2976; //curOff = 2012
			switch (iParam2)
			{
				case 79:
					return func_620(iParam0, "MG_HIT");
				case 80:
					return func_620(iParam0, "MG_MISS");
				case 81:
					return func_620(iParam0, "MG_REACT_LOSE");
				case 82:
					return func_725(iParam0, "MG_LOSE_PLAYER_01", "MG_LOSE_PLAYER_02", "MG_LOSE_PLAYER_03", 0, 0);
				case 83:
					return func_620(iParam0, "MG_REACT_WIN");
				case 84:
					return func_725(iParam0, "MG_WIN_PLAYER_01", "MG_WIN_PLAYER_02", "MG_WIN_PLAYER_03", 0, 0);
				default:
					break;
			}
			Jump @2976; //curOff = 2157
			switch (iParam2)
			{
				case 85:
					return func_620(iParam0, "MG_GIVEUP_NO_BIRDS");
				case 86:
					return func_620(iParam0, "MG_GIVEUP_TIMEOUT");
				case 87:
					return func_620(iParam0, "MG_GIVEUP_WAGER");
				default:
					break;
			}
			Jump @2976; //curOff = 2225
			switch (iParam2)
			{
				case 89:
					return func_620(iParam0, "CHEAT_MOVING_AWAY");
				case 88:
					return func_620(iParam0, "CHEAT_SHOT_EARLY");
				case 90:
					return func_620(iParam0, "CHEAT_TERMS_BROKE");
				case 91:
					return func_620(iParam0, "CHEAT_APPROACHING");
				case 92:
					return func_620(iParam0, "CHEAT_TRYING");
				case 93:
					return func_620(iParam0, "CHEAT_WEAPON");
				case 94:
					return func_620(iParam0, "CHEAT_TARGETS");
				case 95:
					return func_620(iParam0, "BOTTLES");
				default:
					break;
			}
			Jump @2976; //curOff = 2388
			switch (iParam2)
			{
				case 96:
					return func_620(iParam0, "PAY_REMIND_LOST");
				case 97:
					return func_620(iParam0, "PAY_REMIND_LOST_B");
				case 98:
					return func_620(iParam0, "PAY_LOST_WAIT_01");
				case 99:
					return func_620(iParam0, "PAY_LOST_WAIT_02");
				case 100:
					return func_620(iParam0, "PAY_LOST_LEAVING");
				case 101:
					return func_620(iParam0, "PAY_LOST_AGGRO");
				case 102:
					return func_620(iParam0, "PAY_REMIND_WON");
				case 103:
					return func_620(iParam0, "PAY_WON_WAIT_01");
				case 104:
					return func_620(iParam0, "PAY_WON_WAIT_02");
				case 105:
					return func_620(iParam0, "PAY_WON_LEAVING");
				case 106:
					return func_620(iParam0, "PAY_WON_LEAVE");
				case 107:
					return func_620(iParam0, "PAY_WON_EXIT");
				case 108:
					return func_620(iParam0, "HAND_MONEY_P");
				case 109:
					if (*iParam0 != 1)
					{
						return func_620(iParam0, "TAKE_MONEY");
					}
					break;
				case 110:
					return func_620(iParam0, "PRESENT_MONEY");
				case 111:
					return func_620(iParam0, "TAKE_MONEY_P");
				case 112:
					if (*iParam0 != 1)
					{
						return func_620(iParam0, "GIVE_MONEY");
					}
					break;
			}
			Jump @2976; //curOff = 2742
			switch (iParam2)
			{
				case 113:
					return func_620(iParam0, "EXIT");
				case 114:
					return func_620(iParam0, "EXIT_LOST");
				case 115:
					return func_620(iParam0, "EXIT_AGITATED");
				default:
					break;
			}
			Jump @2976; //curOff = 2810
			switch (iParam2)
			{
				case 116:
					return func_620(iParam0, "HORSE_STOLEN");
				case 117:
					return func_620(iParam0, "HORSE_THEFT");
				case 118:
					return func_620(iParam0, "AGGRO");
				case 119:
					return func_620(iParam0, "ATTACKED");
				case 120:
					return func_620(iParam0, "MINOR");
				case 121:
					return func_620(iParam0, "DISTANCE");
				case 122:
					return func_620(iParam0, "MINOR_AGGRO");
				case 123:
					return func_620(iParam0, "CRIMINAL");
				default:
					break;
			}
			return "";
		}

int func_551(int iParam0)
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

void func_552(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_726();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_727(iParam0);
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
	if (func_728(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_69())
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
	Global_40.f_11095.f_35 = func_729(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_726();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_730(iVar1);
		func_732(func_731(), 0, 4000);
		func_733(Global_40.f_11095.f_35);
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
		func_734(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_693(func_692(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_551(14))
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
					sParam4 = func_735(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_736(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_736(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_693(func_692(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_551(4))
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
					sParam4 = func_735(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_736(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_736(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_692(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_737(10, 1);
	}
}

void func_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_554(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_738(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_739(iParam1, 4000))
				{
					if ((func_740(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_741(iParam1, iParam0)) && func_742(iParam1, iParam0))
					{
						func_743();
						*uParam2 = 2;
						func_744(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_739(iParam1, 4000))
				{
					if ((func_740(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_741(iParam1, iParam0)) && func_742(iParam1, iParam0))
					{
						func_743();
						*uParam2 = 2;
						func_744(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_745(iParam0, Global_1935630->f_41))
							{
								func_743();
								*uParam2 = 2;
								func_744(iParam0, iParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_745(iParam0, Global_1935630->f_41))
						{
							func_743();
							*uParam2 = 2;
							func_744(iParam0, iParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_746())
					{
						if (func_745(iParam0, Global_1935630->f_42))
						{
							func_743();
							*uParam2 = 2;
							func_744(iParam0, iParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_747(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_748(Global_35, iParam0, iParam1))
					{
						func_743();
						*uParam2 = 4;
						func_744(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_749(Global_35, iParam0, iParam1))
					{
						func_743();
						*uParam2 = 256;
						func_744(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_750(iParam0, iParam1))
			{
				func_743();
				*uParam2 = 131072;
				func_744(iParam0, iParam1, *uParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_751(iParam0, iParam1))
			{
				func_743();
				*uParam2 = 262144;
				func_744(iParam0, iParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_555(bool bParam0)
{
	if (bParam0 && func_752(Global_35, Local_287.f_11, 0))
	{
		return 1;
	}
	return 0;
}

bool func_556()
{
	return uVar348;
}

bool func_557(int iParam0, bool bParam1)
{
	if (func_753(0))
	{
		if (!func_754())
		{
			func_755(&(Local_14.f_5), iParam0);
			*bParam1 = 1;
			return false;
		}
		return true;
	}
	return false;
}

bool func_558(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_738(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_756(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_744(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_757(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_758(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_759(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_490(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_744(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_747(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_748(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_749(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_760(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_760(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_744(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_761(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_762(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_739(iParam2, 4000))
				{
					if ((func_740(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_741(iParam2, iParam0)) && func_742(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_740(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_741(iParam2, iParam0)) && func_742(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_745(iParam0, Global_1935630->f_41))
							{
								func_743();
								*iParam3 = 2;
								func_744(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_745(iParam0, Global_1935630->f_41))
						{
							func_743();
							*iParam3 = 2;
							func_744(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_763(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_109() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_743();
						*iParam3 = 2;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_746())
					{
						if (func_745(iParam0, Global_1935630->f_42))
						{
							func_743();
							*iParam3 = 2;
							func_744(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_764(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_744(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_765(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_766(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_767(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_768(iParam2, 4000))
				{
					if (func_769(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_744(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_770(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_744(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_771(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_744(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_560(int iParam0)
{
	bVar0 = ((func_48(29) || func_48(38)) || iVar656 == 1);
	if (func_772(iParam0, bVar0, 1, 0, 0))
	{
		if (iParam0 != 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_561(vector3 vParam0, float fParam3)
{
	bVar0 = false;
	if (func_490(player_id(), 0, 1, 1))
	{
		iVar1 = create_itemset(false);
		_0x0c392db374655176(vParam0, fParam3, iVar1);
		bVar0 = get_itemset_size(iVar1) > 0;
		_0x20a4bf0e09bee146(iVar1);
		clean_itemset(iVar1);
		destroy_itemset(iVar1);
	}
	return bVar0;
}

bool func_562()
{
	if (func_48(44))
	{
		return true;
	}
	return false;
}

bool func_563()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case 1034611035:
				get_event_data(0, iVar0, &Var1, 9);
				if (is_entity_a_ped(Var1))
				{
					if (is_entity_a_ped(Var1.f_1))
					{
						iVar10 = get_ped_index_from_entity_index(Var1);
						iVar11 = get_ped_index_from_entity_index(Var1.f_1);
						if (iVar10 == iVar282 && (iVar11 == Global_35 || iVar11 == get_mount(Global_35)))
						{
							return true;
						}
					}
				}
				break;
		}
		iVar0++;
	}
	return false;
}

void func_564(int iParam0)
{
	set_ped_accuracy(iParam0, 100);
	set_ped_combat_range(iParam0, 0);
	set_ped_combat_attributes(iParam0, 0, false);
	set_ped_combat_movement(iParam0, 1);
	set_combat_float(iParam0, 12, 0.2f);
}

int func_565(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_190(iParam0, iParam1) != 0)
	{
		iVar1 = func_773(iParam0, iParam1);
		vVar2 = { func_74(iParam0, iParam1) };
		vVar5 = { func_203(iParam0, iParam1) };
		iVar8 = func_190(iParam0, iParam1);
		iVar0 = func_348(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iVar0, true);
		set_entity_rotation(iVar0, vVar5, 2, true);
		freeze_entity_position(iVar0, is_bit_set(iVar1, 0));
		set_entity_collision(iVar0, !is_bit_set(iVar1, 1), false);
		set_ped_can_be_targetted(iVar0, !is_bit_set(iVar1, 2));
	}
	return iVar0;
}

void func_566(int iParam0)
{
	vVar1 = { func_79(Local_251.f_1, Local_251.f_6) };
	if (!is_entity_dead(&(iLocal_445[iParam0])))
	{
		freeze_entity_position(&(iLocal_445[iParam0]), false);
		set_ped_can_be_targetted(&(iLocal_445[iParam0]), true);
		open_sequence_task(&iVar0);
		task_fly_to_coord(0, 2.75f, func_774(), 0, 0);
		task_flying_circle(0, 2f, vVar1, 0f, 15f);
		func_52(&(iLocal_445[iParam0]), &iVar0, 0f, (to_float(iParam0) * 1.5f), 1, 1);
	}
}

void func_567(int iParam0)
{
	if (!is_entity_dead(&(iLocal_445[iParam0])))
	{
		set_ped_config_flag(&(iLocal_445[iParam0]), 260, true);
		set_ped_config_flag(&(iLocal_445[iParam0]), 265, false);
		set_ped_config_flag(&(iLocal_445[iParam0]), 266, false);
		set_ped_max_time_in_water(&(iLocal_445[iParam0]), ((60f * 60f) * 7f));
		set_ped_max_time_underwater(&(iLocal_445[iParam0]), ((60f * 60f) * 4f));
		_0x7fb0088e8769cddb(&(iLocal_445[iParam0]), 1);
		_0xd05ad61f242c626b(&(iLocal_445[iParam0]), 1000f);
	}
}

void func_568(int iParam0, bool bParam1)
{
	if (!func_48(26))
	{
		vVar1 = { func_79(Local_251.f_1, Local_251.f_7) };
		if (!is_entity_dead(&(iLocal_445[iParam0])))
		{
			freeze_entity_position(&(iLocal_445[iParam0]), false);
			set_ped_can_be_targetted(&(iLocal_445[iParam0]), true);
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, vVar1, 3f, -1, 7f, 0, 40000f);
			task_wander_in_area(0, vVar1, 5f, 0.5f, 1.5f, 0);
			if (!bParam1)
			{
				func_52(&(iLocal_445[iParam0]), &iVar0, 0, 0, 1, 1);
			}
			else
			{
				func_52(&(iLocal_445[iParam0]), &iVar0, 3f, 5f, 1, 1);
			}
		}
	}
}

bool func_569(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_570(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

float func_571(var uParam0)
{
	if (!func_229(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_775(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_572() - uParam0->f_1);
}

float func_572()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_573(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_574(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_575(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_485(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_484())
	{
		bVar1 = true;
		fVar3 = func_107(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_486(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_486(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_487(&(uParam0->f_121), iParam4, fParam1))
		{
			func_268(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_147(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_267(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_268(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_147(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_576(int iParam0, bool bParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) + func_776() };
	if (bParam1)
	{
		vVar0 = { vVar0 + Vector(get_random_float_in_range(0.35f, 0.25f), get_random_float_in_range(0.35f, 0.25f), get_random_float_in_range(0.35f, 0.25f)) };
	}
	return vVar0;
}

Vector3 func_577(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_344(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_578(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vVar0 = { vParam6 - vParam0 };
	fVar3 = func_777(vParam3, vVar0);
	if (absf(fVar3) > fParam9)
	{
		if (fVar3 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_778(vParam0, vParam0 + vParam3, vParam6))
	{
		return 3;
	}
	return 2;
}

bool func_579(int iParam0, int iParam1)
{
	if ((((iParam0 == 0 && iParam1 == 1) || (iParam0 == 1 && iParam1 == 0)) || (iParam0 == 3 && iParam1 == 2)) || (iParam0 == 2 && iParam1 == 3))
	{
		return false;
	}
	return true;
}

char* func_580(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	switch (func_401(iParam0, iParam1, 1060437492))
	{
		case 0:
			return sParam2;
		case 3:
			return sParam3;
		case 2:
			return sParam4;
		case 1:
			return func_470(func_594(iParam0, iParam1), sParam5, sParam6);
		default:
			break;
	}
	return sParam2;
}

char* func_581(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 0:
			return sParam1;
		case 3:
			return sParam2;
		case 2:
			return sParam3;
		case 1:
			return sParam4;
		default:
			break;
	}
	return sParam1;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 20;
		default:
			break;
	}
	return 0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -10;
		default:
			break;
	}
	return 0;
}

int func_584(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_777(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_778(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_585(float fParam0)
{
	if (func_779(1))
	{
		return true;
	}
	if (func_229(&uLocal_0) && !func_446(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_586(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam1 > -1 && iParam1 < 3)
	{
		iParam0->f_21[iParam1]->f_13 = sParam2;
		iParam0->f_21[iParam1]->f_15 = iParam3;
	}
}

void func_587(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_278(iParam0->f_21[iParam1], bParam2, bParam3);
}

void func_588(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	func_780(iParam0->f_21[iParam1], sParam2, sParam3);
}

void func_589(int iParam0, int iParam1, char* sParam2)
{
	func_515(iParam0->f_21[iParam1], sParam2);
}

void func_590(int iParam0)
{
	iLocal_726 = iParam0;
	func_134(&Local_369, 0);
}

void func_591(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_281(iParam0, 7);
}

bool func_592()
{
	if (func_326(&uLocal_208, 2000))
	{
		return false;
	}
	if (func_595(&uLocal_208, 4000) && !func_51(Global_35, iVar282, 35f, 1))
	{
		if (!func_229(&uLocal_362))
		{
			func_222(&uLocal_362);
		}
		else if (func_775(&uLocal_362))
		{
			func_781(&uLocal_362);
		}
		else
		{
			return func_380(&uLocal_362, 3f);
		}
	}
	else if (func_229(&uLocal_362))
	{
		if (!func_775(&uLocal_362))
		{
			func_782(&uLocal_362);
		}
	}
	return false;
}

bool func_593(float fParam0)
{
	if (func_229(&uLocal_614))
	{
		if (func_783())
		{
			if (!func_775(&uLocal_614))
			{
				func_782(&uLocal_614);
			}
		}
		else if (func_775(&uLocal_614))
		{
			func_781(&uLocal_614);
		}
		else if (func_380(&uLocal_614, fParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_594(int iParam0, int iParam1)
{
	return func_784(iParam0, get_entity_coords(iParam1, true, false));
}

bool func_595(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (func_109() - *uParam0) >= iParam1;
	}
	return false;
}

int func_596()
{
	iVar0 = 0;
	iVar1 = create_itemset(true);
	if (is_itemset_valid(iVar1))
	{
		iVar3 = _0x886171a12f400b89(iVar696, iVar1, 1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				iVar4 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
				if (does_entity_exist(iVar4))
				{
					if (is_entity_a_ped(iVar4))
					{
						if (func_349(iVar4))
						{
							iVar0 = 1;
						}
						else
						{
							iVar2++;
						}
						destroy_itemset(iVar1);
						return iVar0;
					}
				}
			}
		}
	}
}

bool func_597()
{
	return func_785(_0xc17f69e1418cd11f(3));
}

int func_598(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = Local_251;
	}
	if (func_433(0))
	{
		if (iVar707 > 0)
		{
			if (does_entity_exist(iVar576))
			{
				task_aim_at_entity(iVar277, iVar576, -1, 0, 0);
			}
			else
			{
				vVar1 = { func_79(Local_251.f_1, Local_251.f_6) };
				task_aim_at_coord(iVar277, vVar1, -1, false, 0);
			}
			iLocal_714 = 0;
		}
	}
	switch (iVar707)
	{
		case 0:
			if (!func_433(0))
			{
				switch (func_786(uParam0))
				{
					case 0:
					case 2:
						func_787(&Local_216, &fLocal_713, iParam2, iParam3, iVar0);
						if (!bVar704)
						{
							iLocal_711 = 1;
							func_383(&uLocal_703, fVar706);
						}
						else
						{
							func_222(&uLocal_703);
						}
						iLocal_714 = 1;
						break;
					case 1:
						iLocal_714 = 5;
						break;
				}
			}
			break;
		case 1:
			switch (func_786(uParam0))
			{
				case 2:
					if (func_446(&uLocal_703, fVar706))
					{
						func_398(&Local_216, &uLocal_284, iParam2, iParam3, &Local_211, iVar0);
						_add_ammo_to_ped(iVar277, -1, 1, 752097756);
						func_395(iVar277, iVar576, -1, 0);
						iLocal_348 = 0;
						func_230(&uLocal_706);
						func_222(&uLocal_331);
						iLocal_714 = 2;
					}
					break;
				case 0:
					func_788();
					break;
				case 1:
					iLocal_714 = 5;
					break;
			}
			break;
		case 2:
			if (!bVar341)
			{
				if (is_ped_shooting(iVar277))
				{
					iLocal_348 = 1;
				}
			}
			if (!does_entity_exist(iVar576))
			{
				task_aim_at_coord(iVar277, Local_216.f_7, -1, get_ped_reset_flag(iVar277, 0), 0);
				iLocal_714 = 0;
			}
			else if (has_entity_been_damaged_by_entity(iVar576, iVar277, 1, 1))
			{
				iLocal_714 = 0;
				return 2;
			}
			else if (func_380(&uLocal_331, 3f))
			{
				iLocal_714 = 0;
				return 1;
			}
			break;
		case 5:
			return 3;
	}
	return 0;
}

void func_599(bool bParam0)
{
	if (bParam0)
	{
		func_604();
		func_605();
	}
}

void func_600(int iParam0)
{
	if (func_403(-2f, 1, 0, 0))
	{
		switch (iParam0)
		{
			case 2:
				if (iVar270 == 4)
				{
					switch (iVar706)
					{
						case 0:
							func_263(iVar281, iVar281, 25);
							break;
						case 1:
							func_263(iVar281, iVar281, 25);
							break;
						case 2:
							func_263(iVar281, iVar281, 25);
							break;
					}
				}
				else if (iVar270 == 7)
				{
					switch (iVar706)
					{
						case 0:
							func_263(iVar281, iVar281, 79);
							break;
						case 1:
							func_263(iVar281, iVar281, 79);
							break;
					}
				}
				uLocal_709 = iVar706 + 1;
				break;
			case 1:
				if (iVar270 == 4)
				{
					if (bVar345)
					{
						switch (iVar707)
						{
							case 0:
								func_263(iVar281, iVar281, 26);
								break;
							case 1:
								func_263(iVar281, iVar281, 26);
								break;
							case 2:
								func_263(iVar281, iVar281, 26);
								break;
						}
					}
				}
				else if (iVar270 == 7)
				{
					if (bVar345)
					{
						switch (iVar707)
						{
							case 0:
								func_263(iVar281, iVar281, 80);
								break;
							case 1:
								func_263(iVar281, iVar281, 80);
								break;
						}
					}
				}
				uLocal_710 = iVar707 + 1;
				break;
		}
	}
}

Vector3 func_601(int iParam0, vector3 vParam1, int iParam4)
{
	return func_577(get_entity_coords(iParam0, true, false), vParam1, iParam4);
}

Vector3 func_602(int iParam0, int iParam1, int iParam2)
{
	return func_577(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false), iParam2);
}

float func_603(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_604()
{
	if (bVar757)
	{
		_databinding_write_data_string(uVar741, func_789(iVar579));
	}
}

void func_605()
{
	if (bVar757)
	{
		_databinding_write_data_string(uVar742, func_789(iVar580));
	}
}

void func_606(bool bParam0, bool bParam1)
{
	if (func_434(30f, 1))
	{
		func_261();
		func_790();
		if (Local_251.f_5 != 0)
		{
			func_608();
		}
		if (!bParam0)
		{
			if (func_394(&Global_35))
			{
				bParam0 = true;
				if (bParam1)
				{
					iLocal_581 = iVar577 + 1;
				}
			}
		}
		if (!bParam0)
		{
			switch (Local_251.f_5)
			{
				case 0:
					func_422("RESS_OBJ_BIRD_START", 7500, 0, 0, -1, -1, 0);
					break;
				case 1:
					func_422("RESS_OBJ_FROG_START", 7500, 0, 0, -1, -1, 0);
					func_263(iVar280, Global_35, 66);
					break;
				case 2:
					func_422("RESS_OBJ_RAT_START", 7500, 0, 0, -1, -1, 0);
					func_263(iVar280, Global_35, 74);
					break;
			}
		}
		else
		{
			func_252(iVar280, Global_35, func_454("COMMENCE_EARLY_MG"), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			if (func_791(Global_35))
			{
				iLocal_581 = iVar577 + 1;
			}
		}
		iVar0 = func_792();
		open_sequence_task(&iVar1);
		task_force_motion_state(0, 1063765679, false);
		if (!is_entity_dead(iVar0))
		{
			task_aim_at_entity(0, iVar0, -1, 1, 0);
		}
		else
		{
			task_aim_at_coord(0, Local_216.f_7, -1, true, 0);
		}
		func_52(iVar280, &iVar1, 0, 0, 1, 1);
		func_82(36);
		func_240(1, 0f);
		func_398(&Local_216, &uLocal_284, iVar577, iVar578, &Local_211, Local_251);
		func_222(&uLocal_715);
		func_222(&uLocal_718);
		func_50(iVar280);
		_0x873c792e07a32c8b(iVar280, 0);
		iLocal_279 = 5;
	}
	else
	{
		open_sequence_task(&iVar1);
		func_255(0, 2, "BIRD_EXIT_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
		if (func_48(19))
		{
			func_256(0, Global_35, 3, "CHALL_WON_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
			func_257(Global_35, 2, 2000, 1082130432, -1065353216, 1);
			func_256(0, Global_35, 3, "MONEY_WON_GIVE_SHOOTER", -1, 1082130432, -1065353216, 0);
		}
		else
		{
			func_256(0, Global_35, 3, "CHALL_LOST_DIA_SHOOTER", -1, 1082130432, -1065353216, 0);
		}
		func_256(0, Global_35, 3, func_258(iVar602), -1, 1082130432, -1065353216, 1);
		func_52(iVar280, &iVar1, 0, 0, 1, 1);
		iLocal_279 = 4;
	}
}

bool func_607()
{
	if (!is_entity_dead(iVar282))
	{
		return func_439(iVar282, 3, "READY_BASE_SHOOTER");
	}
	return false;
}

void func_608()
{
	if (!func_48(3))
	{
		func_259(&uLocal_462);
		func_259(&uLocal_479);
		switch (Local_251)
		{
			case 1:
				if (Local_251.f_5 != 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar443)
					{
						if (!is_entity_dead(&(iLocal_445[iVar0])))
						{
							func_381(&(iLocal_445[iVar0]), uLocal_462[iVar0], 203020899, 580546400, 0, "RESS_TARGET");
						}
						iVar0++;
					}
				}
				break;
		}
		func_82(3);
	}
}

void func_609()
{
	if (func_48(1))
	{
		func_129(1);
	}
	open_sequence_task(&iVar0);
	switch (Local_251)
	{
		case 1:
			if (Local_251.f_5 == 0)
			{
				func_255(0, 2, "BIRD_RULES_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
			}
			break;
	}
	switch (Local_251)
	{
		case 1:
			switch (Local_251.f_5)
			{
				case 0:
					func_255(0, 2, "BIRD_START_SHOOTER", -1, 1082130432, -1065353216, 0, 0);
					break;
				case 2:
					func_263(iVar282, Global_35, 64);
					task_aim_at_coord(0, Local_251.f_8, 3000, get_ped_reset_flag(iVar282, 0), 0);
					task_aim_at_coord(0, Local_251.f_8, -1, true, 0);
					break;
				case 1:
					func_263(iVar282, Global_35, 72);
					task_aim_at_coord(0, Local_251.f_8, 3000, get_ped_reset_flag(iVar282, 0), 0);
					task_aim_at_coord(0, Local_251.f_8, -1, true, 0);
					break;
			}
			break;
	}
	func_52(iVar282, &iVar0, 0, 0, 1, 1);
}

bool func_610()
{
	if (func_592())
	{
		if (Local_251 == 1 && iVar611 < 7)
		{
			func_383(&uLocal_322, 6f);
			iLocal_613 = 7;
		}
	}
	switch (iVar611)
	{
		case 0:
			func_222(&uLocal_614);
			iLocal_613 = iVar611 + 1;
			break;
		case 1:
			if (func_380(&uLocal_614, 6f))
			{
				func_793("BIRD_WAIT_A_SHOOTER", "SNIPER_WAIT_A_SHOOTER", 0);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 2:
			if (get_sequence_progress(iVar282) == 1)
			{
				func_222(&uLocal_614);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 3:
			if (func_380(&uLocal_614, 6f))
			{
				func_793("BIRD_WAIT_B_SHOOTER", "SNIPER_WAIT_B_SHOOTER", 0);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 4:
			if (get_sequence_progress(iVar282) == 1)
			{
				func_222(&uLocal_614);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 5:
			if (func_380(&uLocal_614, 6f))
			{
				func_793("BIRD_WAIT_C_SHOOTER", "SNIPER_EXIT_SHOOTER", 0);
				iLocal_613 = iVar611 + 1;
			}
			break;
		case 6:
			switch (Local_251)
			{
				case 1:
					if (get_sequence_progress(iVar282) == 1)
					{
						func_222(&uLocal_614);
						iLocal_613 = iVar611 + 1;
					}
					break;
			}
			break;
		case 7:
			switch (Local_251)
			{
				case 1:
					if (func_380(&uLocal_614, 6f))
					{
						func_793("BIRD_EXIT_SHOOTER", "", 1);
						func_82(37);
						iLocal_613 = iVar611 + 1;
						return true;
					}
					break;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_611()
{
	iVar0 = 0;
	while (iVar0 < iVar443)
	{
		if (!is_entity_dead(&(iLocal_445[iVar0])))
		{
			set_ped_min_move_blend_ratio(&(iLocal_445[iVar0]), 2f);
		}
		iVar0++;
	}
}

bool func_612()
{
	if (bVar750 && is_ped_shooting(Global_35))
	{
		if (!has_anim_event_fired(iVar282, -875576053))
		{
			if (func_434(10f, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_613()
{
	bVar0 = false;
	if (func_794(Global_35))
	{
		iLocal_581 = iVar579 + 1;
		bVar0 = true;
	}
	if (func_794(iVar282))
	{
		iLocal_582 = iVar580 + 1;
		bVar0 = true;
	}
	iVar1 = func_795();
	if (iVar579 >= iVar1 || iVar580 >= iVar1)
	{
		func_599(1);
		return true;
	}
	if (func_796())
	{
		func_599(1);
		return true;
	}
	func_599(bVar0);
	return false;
}

void func_614()
{
	if (iVar579 >= iVar580)
	{
		func_82(20);
		func_129(44);
		iLocal_606 = 1;
	}
	else
	{
		func_82(44);
		func_129(28);
		iLocal_606 = 0;
	}
	func_241();
	func_43();
	func_82(21);
	func_286(iVar695, 1);
}

void func_615()
{
	if (func_229(&uLocal_715))
	{
		if (func_380(&uLocal_715, 180f))
		{
			func_114(8, 1, 1);
			return;
		}
	}
	if (func_229(&uLocal_718))
	{
		if (func_394(&Global_35))
		{
			func_222(&uLocal_718);
		}
		else if (func_380(&uLocal_718, (180f * 0.5f)))
		{
			func_114(4, 1, 1);
			return;
		}
	}
}

bool func_616(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (bParam1 && !_is_anim_scene_started(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam2 && !_is_anim_scene_finished(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam3 && !_is_anim_scene_metadata_loaded(uParam0->f_1, false))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_617(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		set_bit(iParam0, 20);
		if (bParam2)
		{
			set_bit(iParam0, 21);
		}
		else
		{
			clear_bit(iParam0, 21);
		}
	}
	else
	{
		clear_bit(iParam0, 20);
		clear_bit(iParam0, 21);
	}
}

void func_618(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	if (func_616(uParam0, 0, 0, 0))
	{
		set_anim_scene_origin(uParam0->f_1, vParam1, vParam4, uParam7);
	}
}

int func_619(int iParam0)
{
	return _money_get_cash_balance();
}

var func_620(int iParam0, char* sParam1)
{
	if (*iParam0 == 1)
	{
		return func_797("SS", "BYN", sParam1, 1);
	}
	return func_797("SS", "HTL", sParam1, 1);
}

float func_621(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_622(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_30(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_222(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_30(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_30(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_30(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_798(uParam0->f_1))
					{
						func_799(uParam0->f_1);
						iVar0 = func_584(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						task_dismount_animal(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (is_ped_in_any_vehicle(uParam0->f_1, true))
					{
						iVar2 = get_vehicle_ped_is_in(uParam0->f_1, true);
						bring_vehicle_to_halt(iVar2, 5f, -1, false);
						iVar3 = func_584(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						task_leave_any_vehicle(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_128(&(uParam0->f_23), 2);
					}
				}
				if (func_80(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_800(uParam0, 1, iParam1);
			}
			else
			{
				func_800(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_801(uParam0, iParam1))
			{
				func_222(&(uParam0->f_5));
				if (!func_802(uParam0, iParam1))
				{
					func_803();
				}
				func_800(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_802(uParam0, iParam1))
			{
				func_222(&(uParam0->f_5));
				if (!func_30(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_30(uParam0->f_23, 512), 0, 0);
				}
				func_800(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_804(uParam0, iParam1))
			{
				func_222(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_128(&(uParam0->f_23), 256);
				}
				if (func_30(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_128(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_621(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_805(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_30(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_800(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_806(uParam0, iParam1))
			{
				func_222(&(uParam0->f_5));
				if (func_30(uParam0->f_23, 8192))
				{
					if (func_30(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					task_enter_anim_scene(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_80(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_30(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_80(uParam0->f_11))
					{
						if (func_30(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_103(!func_30(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_103(!func_30(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_30(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_103(!func_30(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_103(!func_30(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_30(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_52(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_800(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_30(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_30(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_30(uParam0->f_23, 128) && func_446(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_30(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_80(uParam0->f_11) || !func_386(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_807(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_30(uParam0->f_23, 8)) && (!func_30(uParam0->f_23, 64) || absf(func_808(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_30(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_230(&(uParam0->f_5));
				func_800(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_623(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_619(1) < iParam0)
	{
		iParam0 = func_619(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_692(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_624(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_736(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_625(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_809(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	return 0;
}

void func_626(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_736(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_627(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_810())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_736(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_811(iVar0);
			func_812(iVar0, 0, 0);
		}
		func_736(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_693(func_692(1644987397), iVar1);
	}
}

void func_628()
{
	switch (Local_211)
	{
		case 0:
			switch (Local_211.f_1)
			{
				case 0:
					task_follow_nav_mesh_to_coord(0, 1568.106f, -717.2793f, 42.06759f, 1f, -1, 3f, 1, func_813(1568.106f, -717.2793f, 42.06759f, get_entity_coords(Local_287.f_11, true, false), 1));
					break;
				case 2:
					task_follow_nav_mesh_to_coord(0, 2452.526f, -815.6995f, 42.6498f, 1f, -1, 0.25f, 1, 4.5582f);
					_task_jump_2(0, 2452.365f, -814.3772f, 40.71862f, 0);
					break;
			}
			break;
	}
}

void func_629()
{
	if (func_48(31))
	{
		iLocal_735 = 3;
	}
	else if (!func_48(5) || func_48(22))
	{
		iLocal_735 = 0;
	}
	else if (!func_48(6))
	{
		if (!func_48(19))
		{
			iLocal_735 = 2;
		}
		else
		{
			iLocal_735 = 1;
		}
	}
	else if (!func_48(20))
	{
		iLocal_735 = 2;
	}
	else
	{
		iLocal_735 = 1;
	}
}

void func_630()
{
	if (Local_14.f_46 || func_48(31))
	{
		if (!is_entity_dead(iVar282))
		{
			_0x15f4732c357b1d6d(iVar282, player_id(), 6);
			_0x15f4732c357b1d6d(iVar282, player_id(), 7);
			if (func_48(31))
			{
				_0x15f4732c357b1d6d(iVar282, player_id(), 14);
			}
			else if (has_entity_been_damaged_by_entity(iVar282, Global_35, 1, 1))
			{
				_0x15f4732c357b1d6d(iVar282, player_id(), 3);
			}
			else
			{
				_0x15f4732c357b1d6d(iVar282, player_id(), 2);
			}
		}
	}
}

void func_631()
{
	func_251(&Local_369, 1, 0);
	func_814(&Local_369, 0);
	func_33(&Local_369, 2, 1);
	func_589(&Local_369, 2, func_276(12));
	func_589(&Local_369, 1, func_276(10));
	func_589(&Local_369, 0, func_276(7));
	func_815(&uVar0, "ENCOURAGE_01");
	func_586(&Local_369, 0, &uVar0, 0);
	func_815(&uVar0, "ANTAG_01");
	func_586(&Local_369, 1, &uVar0, 0);
}

void func_632(int iParam0)
{
	func_222(&uLocal_732);
	iLocal_736 = iParam0;
	iLocal_737 = 1;
}

void func_633(int iParam0, int iParam1, char[4] cParam2)
{
	func_815(&uVar0, cParam2);
	if (!is_string_null_or_empty(&uVar0))
	{
		func_252(iParam0, iParam1, &uVar0, 0, -1082130432, 0, 0, 0, 1, 1, 0, -417894478, 1, 0, 0);
	}
}

int func_634()
{
	switch (iVar735)
	{
		case 0:
			break;
		case 1:
			if (func_380(&uLocal_732, 1f))
			{
				func_222(&uLocal_732);
				iLocal_737 = 2;
			}
			break;
		case 2:
			func_234(1);
			if (func_380(&uLocal_732, 1f))
			{
				if (!func_400(Global_35, 1))
				{
					iLocal_737 = 3;
					func_222(&uLocal_732);
					return 1;
				}
			}
			break;
		case 3:
			func_234(1);
			if (func_380(&uLocal_732, 1f))
			{
				if (!func_400(iVar282, 1))
				{
					iLocal_737 = 0;
					return 2;
				}
			}
			break;
	}
	return 0;
}

void func_635(int iParam0)
{
	if (func_229(&uLocal_732))
	{
		func_230(&uLocal_732);
	}
	iLocal_736 = iParam0;
}

void func_636()
{
	func_222(&uLocal_727);
	func_251(&Local_369, 1, 0);
	func_589(&Local_369, 0, func_276(8));
	func_589(&Local_369, 1, func_276(11));
	func_815(&uVar0, "DEFUSE");
	func_586(&Local_369, 0, &uVar0, 0);
	func_815(&uVar0, "THREAT");
	func_586(&Local_369, 1, &uVar0, 0);
}

void func_637(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_638(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_637(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_107(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_222(&(iParam1->f_13));
		}
		if (func_816(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_817(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_638(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_149(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_408(*uParam0, 1, 1);
						}
					}
					else if (func_818(iParam1, 22))
					{
						func_408(*uParam0, 0, 1);
					}
				}
				if (func_819(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_820(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_821(iParam8);
					if (func_822(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_823(uParam3);
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
					func_824(iParam1, uParam3, fVar8);
					if (func_825(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_304(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_826(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_819(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_827(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_822(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_820(uParam0, func_819(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_821(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_304(uParam3, 0, 0, 1, 1);
					}
					func_828(iParam1, 1);
				}
				func_824(iParam1, uParam3, fVar8);
				if (func_826(uParam0, iParam1, fParam4, bVar6))
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
			func_150(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_639(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_829(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_252(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_640(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_182() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_641(int iParam0, bool bParam1)
{
	func_830(iParam0, &iVar0, &iVar1);
	if (!func_831(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_832(iVar0, iVar1);
}

float func_642(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_621(Global_35, iParam0, bParam1, bParam2);
}

bool func_643(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_644(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_833(iParam0, &Var0);
}

void func_645(int iParam0, var uParam1, int iParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (*uParam1 != 0)
		{
			func_151(iParam0, 1, 1);
			if (does_entity_exist(iParam2))
			{
				if (!is_entity_dead(iParam2))
				{
					if (uParam1->f_5)
					{
						set_blocking_of_non_temporary_events(iParam2, false);
					}
					if (uParam1->f_6)
					{
						clear_ped_tasks(iParam2, 1, 0);
					}
					_0x931b241409216c1f(iParam0, iParam2, 0);
					set_ped_config_flag(iParam0, 167, true);
					set_ped_config_flag(iParam0, 321, true);
					set_ped_config_flag(iParam2, 178, true);
				}
			}
			func_834(iParam0, uParam1, iParam2);
			if (uParam1->f_2 != 493038497)
			{
				_0x24c82ef607105faa(iParam0, uParam1->f_2);
			}
			if (uParam1->f_4 == 0)
			{
				iVar0 = Global_35;
				iVar1 = iParam0;
			}
			else
			{
				iVar0 = iParam0;
				iVar1 = Global_35;
			}
			_0x7c511e91738a0828(iVar0, iVar1, *uParam1, 0);
		}
	}
}

int func_646(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_705(1);
	}
	else
	{
		iVar0 = func_835(iParam0);
	}
	return iVar0;
}

void func_647(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_836(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_837(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_648(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_163(iParam0, 8192))
	{
		iVar0 = func_837(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_649(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_62(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_55(262144, iVar0, 0, 1);
		}
	}
	if (func_62(iParam0, 128))
	{
		func_55(128, iVar0, 0, 1);
	}
	else if (func_62(iParam0, 524288))
	{
		func_55(524288, iVar0, 0, 1);
	}
	else if (func_62(iParam0, 536870912))
	{
		func_55(536870912, iVar0, 0, 1);
	}
	else if (func_62(iParam0, 4194304))
	{
		func_55(4194304, iVar0, 0, 1);
	}
	else if (func_62(iParam0, 8388608))
	{
		func_55(8388608, iVar0, 0, 1);
	}
}

void func_650(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_651(bool bParam0)
{
	if (!bParam0 && func_838(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_652()
{
	return Global_1310750->f_16037;
}

bool func_653(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_654(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_176(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_839(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_655(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_840(Global_1393447, 1);
	func_841();
	func_842();
	func_843((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_109() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_844();
		if (iParam1 == -1)
		{
			if (func_30(iParam0, 1))
			{
				func_55(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_30(iParam0, 2))
			{
				func_55(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_30(iParam0, 4))
			{
				func_55(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_845(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_846(to_float(iVar0), 1, 0);
	}
	else
	{
		func_846((to_float(200) / 3f), 1, 0);
	}
}

bool func_656(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_657(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_658(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_659(int iParam0)
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

bool func_660()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_661(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_662(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_661(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_572() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_663(bool bParam0, bool bParam1, bool bParam2)
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

int func_664()
{
	return &Global_1899515;
}

int func_665(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_666(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_667(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_668(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_669(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_670(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_671(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_672(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_673(bool bParam0, int iParam1, int iParam2)
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

bool func_674()
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

int func_675(int iParam0)
{
	if (!func_678(iParam0))
	{
		return -1;
	}
	return func_848(func_847(iParam0));
}

bool func_676(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_677(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_678(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_679(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_680(int iParam0)
{
	return func_62(iParam0, Global_1310750->f_16072 | 64);
}

int func_681(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_682(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_683(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_684(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_685(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_849(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_686(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_687(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_688(int iParam0)
{
	return func_849(iParam0, 2);
}

void func_689(int iParam0)
{
	if (func_182() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_291(func_850(iVar0), 0))
		{
			if (is_ped_group_member(func_850(iVar0), func_336(), 1))
			{
				func_851(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_690(int iParam0)
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

void func_691(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_852() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_852();
					}
					func_853(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_127(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_692(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_693(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_694(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_836(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_837(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_695(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_163(iParam0, 8192))
	{
		iVar0 = func_837(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_696(int iParam0, int iParam1)
{
	iVar0 = (func_308(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_697(int iParam0, vector3 vParam1)
{
	if (func_62(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_80(vParam1))
	{
		return;
	}
	if (!func_176(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_80(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_325(vVar2, vParam1, 1f, 1))
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

void func_698(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_854(iVar0, iParam0);
		iVar0++;
	}
}

int func_699(int iParam0)
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

void func_700(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_701()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_702(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return 0;
	}
	iVar0 = func_855(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_856(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_857(iParam0, bParam1, fParam2);
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_704(int iParam0)
{
	if (!func_683(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_705(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_858(1, 0, 0);
	}
	else
	{
		iVar0 = func_500();
	}
	return func_835(iVar0);
}

bool func_706(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_707()
{
	return Global_1894899 & 2 != 0;
}

bool func_708(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_709(int iParam0)
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

void func_710(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_859(iParam0, iParam1))
		{
			if (func_860(iParam0, iParam1))
			{
				if (func_861(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_862(iParam0);
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

void func_711(int iParam0, int iParam1, bool bParam2)
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

void func_712(int iParam0, bool bParam1)
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

void func_713(int iParam0, int iParam1)
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

struct<5> func_714(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_863(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_864(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_718(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_865(bParam1) };
			if (bParam2 && func_866(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_716(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_716(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_717(iParam0, &Var5, 1728382685))
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
			Var0 = { func_867(bParam1) };
			switch (func_868(iParam0))
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
			if (func_869(iParam0, -1823706425))
			{
				Var0 = { func_718(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_869(iParam0, -1483207246))
			{
				Var0 = { func_718(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_870(Var0, &Var27, bParam1, 0))
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

int func_715(int iParam0, int iParam1)
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

bool func_716(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_871(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_717(int iParam0, var uParam1, int iParam2)
{
	if (func_872(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_718(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_873(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_874(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_719(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_875(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_870(*uParam1, &Var0, bParam6, 0))
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
	if (!func_720(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_874(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_720(bool bParam0)
{
	if (func_182() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_874(bParam0));
}

int func_721(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_876(iParam0))
	{
		return 0;
	}
	if (!func_720(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_722(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_877(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

var func_723(int iParam0)
{
	if (iParam0->f_10)
	{
		return func_620(iParam0, "CALL_AGGRO");
	}
	switch (iParam0->f_2)
	{
		case 2:
			if (iParam0->f_1 == 1)
			{
				return func_620(iParam0, "CALL_02A");
			}
			else if (iParam0->f_1 == 2)
			{
				return func_620(iParam0, "CALL_02B");
			}
			break;
		case 3:
			if (iParam0->f_1 == 1)
			{
				return func_620(iParam0, "CALL_03A");
			}
			else if (iParam0->f_1 == 2)
			{
				return func_620(iParam0, "CALL_03B");
			}
			break;
	}
	return func_620(iParam0, "CALL_01");
}

var func_724(int iParam0)
{
	if (iParam0->f_10)
	{
		return func_620(iParam0, "INTRO_AGGRO");
	}
	switch (iParam0->f_2)
	{
		case 2:
			return func_620(iParam0, "INTRO_02");
		case 3:
			return func_620(iParam0, "INTRO_03");
		default:
			break;
	}
	return func_620(iParam0, "INTRO_01");
}

var func_725(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5)
{
	if (!is_string_null_or_empty(sParam4))
	{
		if (iParam0->f_10)
		{
			return func_620(iParam0, sParam4);
		}
	}
	switch (iParam0->f_2)
	{
		case 2:
			return func_620(iParam0, sParam2);
		case 3:
			return func_620(iParam0, sParam3);
		default:
			break;
	}
	if (bParam5 && *iParam0 == 1)
	{
		return func_620(iParam0, sParam2);
	}
	return func_620(iParam0, sParam1);
}

int func_726()
{
	iVar0 = func_878();
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

int func_727(int iParam0)
{
	if (func_182() != -1)
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
	fVar1 = func_107(absf(fVar1) < 1f, func_107(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_728(int iParam0)
{
	if (!func_879(iParam0))
	{
		return false;
	}
	return func_880(iParam0);
}

int func_729(int iParam0, int iParam1, int iParam2)
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

int func_730(int iParam0)
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

int func_731()
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

void func_732(int iParam0, bool bParam1, int iParam2)
{
	func_881((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_882(iParam0);
}

void func_733(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_883(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_734(bool bParam0)
{
	bVar3 = false;
	if (func_884(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_885(iVar5, &iVar2, &iVar0))
			{
				if (!func_873(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_886(iVar2);
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
							if (func_864(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_726() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_726() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_887();
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

char* func_735(int iParam0)
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

var func_736(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_888(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_737(int iParam0, int iParam1)
{
	if (!func_889(iParam0))
	{
		return 0;
	}
	if (!func_701())
	{
		return 0;
	}
	if (!func_890(iParam0, &iVar0, &uVar1))
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

void func_738(int iParam0, bool bParam1, int iParam2)
{
	func_891(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_892(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_128(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_494(1))
						{
							func_128(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_494(1) || *iParam0 & 8192 != 0))
				{
					func_127(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_893(iParam0))
			{
				iParam0->f_15 = func_109();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_109() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_894(iParam0);
}

bool func_739(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_740(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_895(iVar0, &iVar2))
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
	if (func_896(iVar0, iParam0))
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

int func_741(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_742(int iParam0, int iParam1)
{
	if (func_897(iParam0))
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

void func_743()
{
}

void func_744(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_898(iParam2, 1, 1, 1, 0))
	{
		func_128(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_899(iParam1, 1);
	func_301();
}

bool func_745(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_621(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_746()
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
	if ((func_109() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_747(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_748(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_900(iParam2);
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
			if (func_742(iParam2, iParam1))
			{
				func_899(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_749(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_901(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_742(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_899(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_750(int iParam0, int iParam1)
{
	fVar0 = func_902(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_903(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_904())
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

bool func_751(int iParam0, int iParam1)
{
	if (func_495(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
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

bool func_752(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_753(int iParam0)
{
	fVar0 = 0.85f;
	vVar1 = { Global_36 };
	vVar4 = { get_entity_forward_vector(Global_35) };
	vVar7 = { get_entity_coords(iVar281, true, false) };
	if (func_578(vVar1, vVar4, vVar7, fVar0) == 0)
	{
		return true;
	}
	return false;
}

bool func_754()
{
	vVar0 = { get_ped_bone_coords(iVar282, 0, 0f, 0f, 0.5f) };
	vVar3 = { get_ped_bone_coords(iVar282, 0, 0f, 0f, 0f) };
	vVar6 = { get_ped_bone_coords(iVar282, 0, 0f, 0f, -0.5f) };
	fVar9 = func_107(_is_weapon_shotgun(func_432(Global_35, 0, 1, 0)), 0.35f, 0f);
	fVar10 = (0.5f + fVar9);
	fVar11 = (0.75f + fVar9);
	fVar12 = (0.75f + fVar9);
	if (((((is_bullet_in_area(vVar0, fVar10, true) || is_bullet_in_area(vVar3, fVar11, true)) || is_bullet_in_area(vVar6, fVar12, true)) || has_bullet_impacted_in_area(vVar0, fVar10, true, true)) || has_bullet_impacted_in_area(vVar3, fVar11, true, true)) || has_bullet_impacted_in_area(vVar6, fVar12, true, true))
	{
		return true;
	}
	return false;
}

void func_755(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_109();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_899(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

bool func_756(int iParam0, int iParam1)
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
			if (!func_905(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_906(iParam0, iVar2) <= func_907(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_757(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_908(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_909(iParam1);
			if (func_910(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_911(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_899(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_899(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_758(int iParam0, int iParam1, int iParam2)
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
	if (func_912(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_909(iParam2);
		if (func_910(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_911(iParam2)
				{
					func_899(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_759(int iParam0, int iParam1)
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
	if (func_905(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_911(iParam1)
		{
			fVar3 = func_909(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_760(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_913(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_899(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_899(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_914(iParam1, vVar0, vVar4))
					{
						func_899(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_899(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_914(iParam1, vVar0, vVar7))
					{
						func_899(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_761(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_905(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_915(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_916(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_917(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_918(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_919(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_762(int iParam0, int iParam1)
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

bool func_763(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_920(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_109();
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
						if (func_110(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_109();
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

bool func_764(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_907(iParam0);
	if (iParam0->f_12 > func_921(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_922(iParam1);
	iVar1 = func_923(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_765(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_924(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_766(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_925(iParam0, iParam1, 1))
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
					if (!func_926(iParam1, iParam0))
					{
						if (func_110(iVar4, Global_36, 1) < 7f)
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

bool func_767(int iParam0, int iParam1)
{
	if (!func_927(0))
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

bool func_768(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_769(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_770(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_109();
	}
	else if (func_109() - iParam1->f_4) > func_928(iParam1)
	{
		return func_929(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_771(int iParam0, int iParam1)
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

bool func_772(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	return !func_898(iParam0, bParam1, iParam2, iParam3, iParam4);
}

int func_773(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 4;
				case 2:
					return 4;
				case 3:
					return 4;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 4;
				case 2:
					return 4;
				case 3:
					return 4;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_774()
{
	vVar0 = { func_79(Local_251.f_1, Local_251.f_6) };
	vVar4 = { get_random_float_in_range(0f, 1f), get_random_float_in_range(0f, 1f), get_random_float_in_range(0f, 1f) };
	fVar7 = get_random_float_in_range(7f, 20f);
	return vVar0 + vVar4 * Vector(fVar7, fVar7, fVar7);
}

bool func_775(var uParam0)
{
	return func_388(*uParam0, 2);
}

Vector3 func_776()
{
	return 0f, 0f, 0.12f;
}

float func_777(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_778(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_779(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_780(int* iParam0, char* sParam1, char* sParam2)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (func_511(iParam0->f_6))
		{
			func_512(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		func_281(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

void func_781(var uParam0)
{
	if (!func_229(uParam0))
	{
	}
	if (func_775(uParam0))
	{
		uParam0->f_1 = (func_572() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_574(uParam0, 2);
	}
}

void func_782(var uParam0)
{
	if (!func_229(uParam0))
	{
	}
	if (!func_775(uParam0))
	{
		uParam0->f_2 = (func_572() - uParam0->f_1);
		func_573(uParam0, 2);
	}
}

bool func_783()
{
	return Global_1935496->f_10;
}

bool func_784(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_778(vVar0, vVar3, vParam1);
}

bool func_785(int iParam0)
{
	return iParam0 != 0;
}

int func_786(var uParam0)
{
	bVar0 = does_entity_exist(iVar580);
	bVar1 = (bVar0 && (((has_entity_been_damaged_by_any_ped(iVar580) || has_entity_been_damaged_by_any_object(iVar580)) || has_entity_been_damaged_by_any_vehicle(iVar580)) || is_entity_dead(iVar580)));
	if (!bVar0 || bVar1)
	{
		iLocal_583 = func_930(uParam0);
		if (does_entity_exist(iVar580))
		{
			task_aim_gun_at_entity(iVar281, iVar580, -1, 0, 1);
			return 0;
		}
		else
		{
			task_aim_gun_at_coord(iVar281, Local_216.f_7, -1, false, false);
			return 1;
		}
	}
	return 2;
}

void func_787(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if ((iParam2 - iParam3) > 2)
	{
		*fParam1 = 1f;
		return;
	}
	fVar0 = func_931(iParam4);
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			*fParam1 = get_random_float_in_range(2.5f, 4f);
			break;
		case 2:
			*fParam1 = get_random_float_in_range(2f, 3.2f);
			break;
		case 3:
			*fParam1 = get_random_float_in_range(1.75f, 2.75f);
			break;
	}
	*fParam1 = (*fParam1 + fVar0);
}

void func_788()
{
	func_230(&uLocal_703);
	func_230(&uLocal_706);
	iLocal_714 = 0;
}

var func_789(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_790()
{
	iLocal_581 = 0;
	iLocal_582 = 0;
}

bool func_791(int iParam0)
{
	iVar0 = func_932(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (_0xc346a546612c49a9(iVar0))
		{
			if (!decor_exist_on(iVar0, "TargetHit"))
			{
				if (get_ped_config_flag(iVar0, 508, true))
				{
					decor_set_bool(iVar0, "TargetHit", true);
					return true;
				}
			}
		}
	}
	return false;
}

int func_792()
{
	if (Local_251.f_5 == 0)
	{
		return func_933();
	}
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { get_entity_coords(iVar282, true, false) };
	iVar7 = 0;
	iVar0 = 0;
	while (iVar0 < iVar443)
	{
		if (!is_entity_dead(&(iLocal_445[iVar0])))
		{
			if (is_entity_dead(iVar7) || vdist2(vVar4, get_entity_coords(&(iLocal_445[iVar0]), true, false)) < vdist2(vVar4, vVar1))
			{
				if (has_entity_clear_los_to_entity(iVar282, &(iLocal_445[iVar0]), 17))
				{
					iVar7 = &iLocal_445[iVar0];
					vVar1 = { get_entity_coords(iVar7, true, false) };
				}
			}
		}
		iVar0++;
	}
	return iVar7;
}

void func_793(char* sParam0, char* sParam1, bool bParam2)
{
	open_sequence_task(&iVar0);
	switch (Local_251)
	{
		case 1:
			func_255(0, 2, sParam0, -1, 1082130432, -1065353216, 0, 0);
			break;
	}
	if (!bParam2)
	{
		func_255(0, 3, "READY_BASE_SHOOTER", -1, 1082130432, -1065353216, 1, 0);
	}
	else
	{
		task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
	func_52(iVar279, &iVar0, 0, 0, 1, 1);
}

int func_794(int iParam0)
{
	if (Local_251.f_5 == 0)
	{
		return func_791(iParam0);
	}
	return func_934(func_932(iParam0));
}

int func_795()
{
	switch (Local_251.f_5)
	{
		case 0:
			return 4;
		case 1:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_796()
{
	switch (iVar281)
	{
		case 0:
			if (func_935(&iVar0, (5f * 0.5f)))
			{
				func_936(iVar0);
				fLocal_365 = func_621(iVar282, iVar581, 1, 1);
				iLocal_283 = 1;
			}
			break;
		case 1:
			if ((!does_entity_exist(iVar581) || is_entity_dead(iVar581)) || !has_entity_clear_los_to_entity(iVar282, iVar581, 17))
			{
				if (func_229(&uLocal_617))
				{
					func_230(&uLocal_617);
				}
				iLocal_283 = 0;
			}
			else if ((func_621(iVar282, iVar581, 1, 1) - fVar363) > 10f)
			{
				if (func_935(&iVar0, 1084227584))
				{
					if (func_621(iVar282, iVar0, 1, 1) < func_621(iVar282, iVar581, 1, 1))
					{
						func_936(iVar0);
					}
				}
			}
			break;
	}
	return false;
}

var func_797(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_937(cVar0);
}

bool func_798(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_799(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!is_ped_on_mount(iParam0))
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	clear_ped_tasks(iVar0, 1, 0);
	task_stand_still(iVar0, -1);
}

void func_800(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_801(var uParam0, int iParam1)
{
	if (func_446(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_30(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_798(uParam0->f_1) && !func_386(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_386(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_802(var uParam0, int iParam1)
{
	if (func_446(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_30(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_938(&uVar0))
	{
		return true;
	}
	return false;
}

int func_803()
{
	if (!func_939())
	{
		return 0;
	}
	if (!func_940(&iVar0))
	{
		return 0;
	}
	if (!func_941(iVar0))
	{
		return 0;
	}
	return func_942(iVar0, 0);
}

bool func_804(var uParam0, int iParam1)
{
	if (func_446(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_30(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_30(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_805(int iParam0)
{
	iVar0 = func_943(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_806(var uParam0, int iParam1)
{
	if (func_446(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_30(uParam0->f_23, 4096) && func_386(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_30(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_807(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_345(get_entity_heading(iParam0));
	fParam4 = func_345(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_808(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_809(int iParam0, var uParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		return _0xba2a089e60ed1163(uParam1, iParam0, 2084597891, 0, 0);
	}
	if (!decor_exist_on(iParam0, "loot_money"))
	{
		return false;
	}
	*uParam1 = decor_get_int(iParam0, "loot_money");
	return true;
}

bool func_810()
{
	if (func_944())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_811(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_945((Global_40.f_4283.f_325 + iParam0));
}

void func_812(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_810())
	{
		func_736(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_736(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

float func_813(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_814(int iParam0, bool bParam1)
{
	func_946(&(iParam0->f_21), bParam1);
}

void func_815(char* sParam0, char* sParam1)
{
	switch (iVar731)
	{
		case 0:
			switch (Local_216)
			{
				case 0:
					StringCopy(sParam0, "RE_SS_HTL_V1_POST_", 64);
					break;
				case 1:
					StringCopy(sParam0, "RE_SS_BYN_V1_POST_", 64);
					break;
			}
			break;
		case 1:
			switch (Local_216)
			{
				case 0:
					StringCopy(sParam0, "RE_SS_HTL_V1_WON_", 64);
					break;
				case 1:
					StringCopy(sParam0, "RE_SS_BYN_V1_WON_", 64);
					break;
			}
			break;
		case 2:
			switch (Local_216)
			{
				case 0:
					StringCopy(sParam0, "RE_SS_HTL_V1_LOST_", 64);
					break;
				case 1:
					StringCopy(sParam0, "RE_SS_BYN_V1_LOST_", 64);
					break;
			}
			break;
	}
	StringConCat(sParam0, sParam1, 64);
}

bool func_816(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_947(iParam0, iParam1))
		{
			if (!func_30(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_304(uParam2, 0, 0, 1, 0);
				func_128(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_30(iParam1->f_10, 1))
		{
			func_948(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_127(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_817(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_30(iParam4, 32);
		func_303(iParam1, uParam2, 0);
		iVar5 = func_949(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_304(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_30(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_30(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_30(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_30(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_30(iParam4, 8388608) || func_30(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_30(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_30(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_818(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_818(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_30(iParam4, 67108864))
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
				iParam6 = func_950(uParam0);
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
			if (func_30(iParam4, 268435456))
			{
				iVar8 = func_951(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_952(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_818(iParam1, 23))
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
			if (func_30(iParam4, 2) || func_30(iParam4, 16))
			{
				func_408(*uParam0, 1, 1);
			}
			else
			{
				func_408(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_818(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_819(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_379(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_820(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_953(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_30(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_821(int iParam0)
{
	if (func_30(iParam0, 4))
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
	if (func_30(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_30(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_822(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_619(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_954(Global_35)) || func_955(Global_35)) || func_956(Global_35));
	fVar12 = -1f;
	if (func_229(&(iParam1->f_13)))
	{
		fVar12 = func_571(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_511((*uParam4)[iVar0]->f_6);
		func_957(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_958(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_959(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_304(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_465(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_303(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_960(iParam1, fParam6, iParam1->f_9))
					{
						func_222(&(iParam1->f_18));
						if (bVar6)
						{
							func_465(uParam4, 0, 0);
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
		func_961(iParam1, fParam2);
	}
	return bVar5;
}

void func_823(var uParam0)
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

void func_824(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_962((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_961(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_825(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_963(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_964(iParam1, 0);
				func_303(iParam1, uParam2, func_818(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_826(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_222(&(iParam1->f_18));
			return false;
		}
		else if (func_229(&(iParam1->f_18)))
		{
			func_230(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_229(&(iParam1->f_18)))
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
	return func_446(&(iParam1->f_18), fParam2);
	return true;
}

void func_827(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_957(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_828(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_829(int* iParam0)
{
	if (func_818(iParam0, 0))
	{
		if (func_965(iParam0))
		{
			func_828(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_830(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_831(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_966(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_967(iParam0))
	{
		return false;
	}
	if (func_968(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_969(iParam0, 1)) || func_970(32768))
	{
		if (!func_969(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_971())
	{
		return false;
	}
	return true;
}

void func_832(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_833(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_834(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 != 0)
	{
		open_sequence_task(&iVar0);
		if (uParam1->f_5)
		{
			task_set_blocking_of_non_temporary_events(0, false);
		}
		if (!is_ped_active_in_scenario(iParam0, 0))
		{
			task_turn_ped_to_face_entity(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
		}
		if (does_entity_exist(iParam2))
		{
			if (!is_entity_dead(iParam2))
			{
				if (uParam1->f_3 != 3)
				{
					task_mount_animal(0, iParam2, 20000, -1, 1f, 1, 0, 0);
				}
			}
		}
		switch (uParam1->f_3)
		{
			case 1:
				task_wander_standard(0, 40000f, 0);
				break;
			case 2:
				_task_move_in_traffic(0, -1082130432, 0, 0);
				break;
			case 3:
				set_ped_flee_attributes(iParam0, 16, true);
				_task_smart_flee_style_ped(0, Global_35, uParam1->f_1, 0, 80f, -1, iParam2);
				break;
		}
		func_52(iParam0, &iVar0, 0, 0, 1, 1);
		set_ped_keep_task(iParam0, true);
	}
}

int func_835(int iParam0)
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

int func_836(int iParam0)
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

int func_837(int iParam0, int iParam1)
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

bool func_838(int iParam0)
{
	iVar0 = func_972(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_839(int iParam0)
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

void func_840(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_841()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_973(iVar0, 128))
		{
			func_974(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_842()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_973(iVar0, 128) && func_973(iVar0, 1))
		{
			func_974(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_843(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_844()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_62(iVar0, 16777216))
		{
			if (!func_975(iVar0))
			{
				func_854(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_845(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_302(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_302(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_302(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_302(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_302(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_302(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_302(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_846(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_572();
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

int func_847(int iParam0)
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

int func_848(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_849(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_850(int iParam0)
{
	if (!func_976(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_851(int iParam0, int iParam1)
{
	if (!func_977(iParam0))
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

int func_852()
{
	return &Global_1899515;
}

void func_853(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_978(*uParam0);
	iVar1 = func_979(*uParam0);
	iVar2 = func_980(*uParam0);
	iVar3 = func_665(*uParam0);
	iVar4 = func_981(*uParam0);
	iVar5 = func_982(*uParam0);
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
	iVar6 = func_983(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_983(iVar1, iVar0);
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
	func_984(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_854(int iParam0, int iParam1)
{
	if (!func_176(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_855(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		case -1324765740:
			return 4;
		case -1119640448:
			return 6;
		case -1015925347:
			return 8;
		case -857562377:
			return 7;
		case -579939614:
			return 10;
		case -193557170:
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case 54488187:
			return 2;
		case 100010212:
			return 11;
		case 679418883:
			return 0;
		case 880414984:
			return 12;
		case 1077154516:
			return 1;
		case 1620037762:
			return 5;
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

int func_856(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_857(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_855(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_985(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_985(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_985(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_856(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

int func_858(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_986(iVar2))
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

bool func_859(int iParam0, int iParam1)
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

bool func_860(int iParam0, int iParam1)
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

bool func_861(int iParam0, int iParam1)
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
	if (!func_859(iParam0, iVar0))
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

void func_862(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_863(bool bParam0)
{
	return func_718(1328661203, func_987(), -1591664384, bParam0);
}

int func_864(int iParam0)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_865(bool bParam0)
{
	iVar0 = func_874(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_718(923904168, func_863(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_718(923904168, func_863(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_718(923904168, func_863(bParam0), -740156546, 0);
}

bool func_866(int iParam0, bool bParam1)
{
	if (func_868(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_728(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_867(bool bParam0)
{
	iVar0 = func_874(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_718(271701509, func_863(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_718(271701509, func_863(bParam0), 12999093, 0);
}

int func_868(int iParam0)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_869(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_868(iParam0);
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

bool func_870(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_874(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_871(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_718(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_874(bParam6), &Var0, 0);
	return uVar4;
}

bool func_872(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_874(0);
	*uParam1 = { func_718(iParam0, func_865(0), iParam3, 0) };
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

bool func_873(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_874(bool bParam0)
{
	if (func_182() == -1)
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

bool func_875(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_876(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_877(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_878()
{
	return Global_40.f_11095.f_35;
}

bool func_879(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_880(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_881(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_988(bParam1);
	}
}

void func_882(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_883(int iParam0)
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

bool func_884(int iParam0)
{
	if (!func_989(23, &vVar0))
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

bool func_885(int iParam0, int iParam1, int iParam2)
{
	if (!func_989(23, &Var0))
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

int func_886(int iParam0)
{
	return iParam0;
}

int func_887()
{
	iVar0 = func_726();
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

void func_888(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_889(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_890(int iParam0, int iParam1, var uParam2)
{
	if (!func_889(iParam0))
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

void func_891(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_990();
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
			func_991(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_892(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_893(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_182() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_992(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_992(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_923(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_894(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_993(iParam0);
	}
}

bool func_895(int iParam0, int iParam1)
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

bool func_896(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_994(iParam0, 1, 0, 0) != 2055893578)
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

bool func_897(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_898(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return bParam1;
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

void func_899(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_128(iParam0, 134217728);
	}
	else
	{
		func_127(iParam0, 134217728);
	}
}

float func_900(int iParam0)
{
	return iParam0->f_23;
}

int func_901(int iParam0)
{
	return iParam0->f_21;
}

float func_902(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_921(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_995(iParam0);
	}
	return func_921(iParam0);
}

float func_903(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_904()
{
	iVar0 = func_665(func_664());
	iVar1 = func_981(func_664());
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

bool func_905(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_923(iParam2);
	}
	else
	{
		iVar1 = func_922(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_923(iParam0);
	}
	else
	{
		iVar0 = func_922(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_30(*iParam1, 8388608))
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

float func_906(int iParam0, int iParam1)
{
	return func_621(iParam0, iParam1, 1, 1);
}

float func_907(int iParam0)
{
	return iParam0->f_26;
}

bool func_908(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_621(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_996(iVar0, 0)))
		{
			if (func_997(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_909(int iParam0)
{
	return iParam0->f_17;
}

bool func_910(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_30(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_911(int iParam0)
{
	return iParam0->f_18;
}

bool func_912(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_996(iVar0, 0)))
		{
			if (func_998(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_913(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_914(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_415(iParam0, vParam4, 0.5f))
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

int func_915(int iParam0)
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
	if (func_999(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_916(int iParam0)
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

bool func_917(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_495(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_918(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_495(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_919(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_495(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_920(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_110(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_921(int iParam0)
{
	return iParam0->f_24;
}

int func_922(int iParam0)
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

int func_923(int iParam0)
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

int func_924(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_895(Global_35, &iVar1))
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
		fVar2 = func_621(iParam0, player_ped_id(), 0, 1);
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
		if (func_621(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_925(int iParam0, int iParam1, bool bParam2)
{
	func_673(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_926(iParam1, iVar0))
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
				if (!bParam2 || !func_926(iParam1, iVar1))
				{
					if (func_110(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_926(int iParam0, int iParam1)
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

bool func_927(int iParam0)
{
	if (func_69())
	{
		return false;
	}
	return func_1000((*Global_1347702)[58]->f_15, 1);
}

int func_928(int iParam0)
{
	return iParam0->f_20;
}

int func_929(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
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

int func_930(var uParam0)
{
	vVar1 = { get_entity_coords(iVar281, true, false) };
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_entity_dead(uParam0[iVar0]) && !has_entity_been_damaged_by_any_ped(uParam0[iVar0]))
		{
			if (iVar4 == 0 || func_603(vVar1, get_entity_coords(iVar4, true, false)) > func_603(vVar1, get_entity_coords(uParam0[iVar0], true, false)))
			{
				iVar4 = uParam0[iVar0];
			}
		}
		iVar0++;
	}
	return iVar4;
}

float func_931(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1f;
		default:
			break;
	}
	return 0f;
}

int func_932(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case 402722103:
			case 2145012826:
				get_event_data(0, iVar0, &Var1, 9);
				if (is_entity_a_ped(Var1))
				{
					if (is_entity_a_ped(Var1.f_1))
					{
						iVar10 = get_ped_index_from_entity_index(Var1);
						iVar11 = get_ped_index_from_entity_index(Var1.f_1);
						if (!func_139(iVar10, 0, 0))
						{
							if (iVar11 == iParam0)
							{
								return iVar10;
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

int func_933()
{
	fVar0 = (45f * 45f);
	iVar1 = 0;
	vVar36 = { func_79(Local_251.f_1, Local_251.f_6) };
	iVar41 = func_1001(&uVar2, &uVar35, 32, vVar36, 80f, 35f, 0);
	vVar42 = { 0f, 0f, 0f };
	vVar45 = { get_entity_coords(iVar282, true, false) };
	iVar40 = 0;
	while (iVar40 < iVar41)
	{
		if ((!is_entity_dead(&(uVar2[iVar40])) && func_1002(&(uVar2[iVar40]), 0)) && is_entity_in_air(&(uVar2[iVar40]), 1))
		{
			if (is_entity_dead(iVar1) || vdist2(vVar45, get_entity_coords(&(uVar2[iVar40]), true, false)) < vdist2(vVar45, vVar42))
			{
				if (has_entity_clear_los_to_entity(iVar282, &(uVar2[iVar40]), 17))
				{
					if (!bVar351 || vdist2(vVar36, get_entity_coords(&(uVar2[iVar40]), true, false)) < fVar0)
					{
						iVar1 = &uVar2[iVar40];
						vVar42 = { get_entity_coords(iVar1, true, false) };
					}
				}
			}
		}
		iVar40++;
	}
	if (!does_entity_exist(iVar1))
	{
		if (bVar350)
		{
			iLocal_352 = 0;
		}
		else if (bVar351)
		{
			if (func_229(&uLocal_337))
			{
				if (func_380(&uLocal_337, 5f))
				{
					func_230(&uLocal_337);
					iLocal_353 = 0;
				}
			}
			else
			{
				func_222(&uLocal_337);
			}
		}
	}
	else
	{
		if (!bVar350)
		{
			iLocal_352 = 1;
		}
		if (!bVar351)
		{
			iLocal_353 = 1;
		}
		if (func_229(&uLocal_337))
		{
			func_230(&uLocal_337);
		}
	}
	return iVar1;
}

int func_934(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar442)
		{
			if (iParam0 == &iLocal_445[iVar0])
			{
				if (!decor_exist_on(iParam0, "TargetHit"))
				{
					decor_set_bool(iParam0, "TargetHit", true);
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_935(int iParam0, float fParam1)
{
	if (!func_229(&uLocal_617) || func_380(&uLocal_617, fParam1))
	{
		*iParam0 = func_792();
		if (!is_entity_dead(*iParam0))
		{
			func_222(&uLocal_617);
			return true;
		}
	}
	return false;
}

void func_936(int iParam0)
{
	func_398(&Local_216, &uLocal_284, iVar578, iVar579, &Local_211, Local_251);
	iLocal_583 = iParam0;
	open_sequence_task(&iVar0);
	task_aim_at_entity(0, iVar580, 2000, get_ped_reset_flag(iVar281, 0), 0);
	task_shoot_at_entity(0, iVar580, -1, 0, 0);
	func_52(iVar281, &iVar0, 0, 0, 1, 1);
}

var func_937(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_938(int iParam0)
{
	if (-1829635046 == func_1003(81053684))
	{
		if (func_940(iParam0))
		{
			return true;
		}
	}
	else if (func_1004(-525676072, iParam0))
	{
		if (func_940(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_939()
{
	return Global_1946804->f_2792;
}

bool func_940(int iParam0)
{
	if (func_1004(81053684, iParam0))
	{
		return true;
	}
	if (func_1004(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_941(int iParam0)
{
	if (func_1005())
	{
		return false;
	}
	if (!func_873(iParam0, 0))
	{
		return false;
	}
	if (!func_1006(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_942(int iParam0, int iParam1)
{
	bVar3 = func_1007(iParam0);
	if (func_1008(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_938(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1009();
			}
			else
			{
				iVar0 = func_1010();
			}
		}
		else if (func_207(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1011();
		}
		else
		{
			iVar0 = func_1012();
		}
	}
	else if (func_940(&iVar2))
	{
		if (func_1008(iVar2, -1303648999))
		{
			iVar0 = func_1009();
		}
		else
		{
			iVar0 = func_1010();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1011();
	}
	else
	{
		iVar0 = func_1012();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_943(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_944()
{
	return _unlock_is_unlocked(-121456797);
}

void func_945(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_692(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_946(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_123((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

bool func_947(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_469((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_948(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_962((*uParam0)[iVar0]))
		{
			func_281((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_949(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1013(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_511((*uParam2)[iVar0]->f_6))
		{
			func_281((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_950(var uParam0)
{
	iVar0 = func_293(*uParam0);
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

int func_951(var uParam0, int iParam1)
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

void func_952(int* iParam0, int* iParam1)
{
	if (!func_818(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_281(iParam1, 19);
			func_964(iParam0, 23);
			func_1014(iParam1, 2);
		}
	}
}

void func_953(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1013(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_954(int iParam0)
{
	return (func_1015(iParam0, 4) || func_1015(iParam0, 5));
}

int func_955(int iParam0)
{
	return func_1015(iParam0, 7);
}

int func_956(int iParam0)
{
	return func_1015(iParam0, 6);
}

void func_957(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_962(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1013(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_958(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1016(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1017(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_514(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_514(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1018(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_959(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1019(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1020(iParam1, 1))
	{
		func_1021(iParam1, 1);
		return true;
	}
	return false;
}

bool func_960(int* iParam0, float fParam1, bool bParam2)
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

void func_961(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_962(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_963(int iParam0)
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

void func_964(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_965(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_966(int iParam0, int iParam1)
{
	if (func_182() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_967(int iParam0)
{
	if (func_182() != -1)
	{
		if (func_969(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_969(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_968(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_969(iParam0, 65536) && !func_969(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_969(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_969(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_969(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_970(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_971()
{
	return Global_1905944->f_5694;
}

int func_972(int iParam0, int iParam1)
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

bool func_973(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_974(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_975(int iParam0)
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

bool func_976(int iParam0)
{
	return iParam0 > -1;
}

bool func_977(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_978(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_103(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_979(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_980(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_981(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_982(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_983(int iParam0, int iParam1)
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

void func_984(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1022(uParam0, iParam6);
	func_1023(uParam0, iParam5);
	func_1024(uParam0, iParam4);
	func_1025(uParam0, iParam3);
	func_1026(uParam0, iParam2);
	func_1027(uParam0, iParam1);
}

int func_985(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		case -1439599467:
			return 23;
		case -1317052143:
			return 12;
		case -1233681761:
			return 19;
		case -1148613331:
			return 9;
		case -702816767:
			return 3;
		case -416908843:
			return 13;
		case -273223690:
			return 15;
		case -173507739:
			return 6;
		case 0:
			return 22;
		case 212278652:
			return 14;
		case 433385945:
			return 10;
		case 603685163:
			return 17;
		case 669657108:
			return 0;
		case 725623432:
			return 21;
		case 821931868:
			return 1;
		case 839715153:
			return 7;
		case 1420204096:
			return 11;
		case 1500834021:
			return 8;
		case 1632247697:
			return 18;
		case 1679686673:
			return 16;
		case 1974067816:
			return 5;
		case 2082228755:
			return 20;
		case 2137137442:
			return 4;
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

bool func_986(int iParam0)
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

struct<4> func_987()
{
	return Var0;
}

void func_988(bool bParam0)
{
	func_1028(bParam0);
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

bool func_989(int iParam0, var uParam1)
{
	if (!func_1029(iParam0))
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

bool func_990()
{
	if (func_1030())
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

void func_991(var uParam0, var uParam1)
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

int func_992(int iParam0)
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
	if (iParam0->f_6 == 3)
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

void func_993(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_127(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_128(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

int func_994(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

var func_995(int iParam0)
{
	return iParam0->f_25;
}

var func_996(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_997(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_998(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_998(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_999(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1000(int iParam0, bool bParam1)
{
	switch (func_1031(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_1001(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, bool bParam8)
{
	iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam7);
	iVar1 = func_1032(uParam0, uParam1, iParam2, iVar0, bParam8);
	func_42(iVar0);
	return iVar1;
}

bool func_1002(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (get_animal_tuning_bool_param(iParam0, 58))
	{
		if (bParam1)
		{
			return is_entity_in_air(iParam0, 1);
		}
		return true;
	}
	return false;
}

int func_1003(int iParam0)
{
	iVar0 = func_1034(func_1033(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1004(int iParam0, int iParam1)
{
	iVar1 = func_1034(func_1033(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_868(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1005()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1035())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1006(int iParam0, int iParam1, bool bParam2)
{
	if (!func_873(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_864(iParam0);
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
		if (!func_1036(iParam0, 1))
		{
			return false;
		}
	}
	return func_1037(iParam0, 0, bParam2) >= iParam1;
}

int func_1007(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_940(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1008(int iParam0, int iParam1)
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

int func_1009()
{
	iVar0 = 1549701178;
	switch (func_1038())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1010()
{
	iVar0 = 614608656;
	switch (func_1038())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1011()
{
	iVar0 = -1832677570;
	switch (func_1038())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1012()
{
	iVar0 = 1623252156;
	switch (func_1038())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_1013(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_511(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_280(&(iParam1->f_6), 0, 1);
	}
	if (!func_511(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_962(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1039(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_511(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1018(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1040(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1041(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_512(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1040(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_514(iParam1->f_6, 0, 1);
				}
				else
				{
					func_514(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1014(int* iParam0, int iParam1)
{
	if (!func_279(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_281(iParam0, 14);
		}
	}
}

int func_1015(int iParam0, int iParam1)
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

bool func_1016(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_1017(int iParam0, bool bParam1)
{
	if (bParam1 && !func_511(iParam0))
	{
		return false;
	}
	return !func_849(iParam0, 4);
}

void func_1018(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_511(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	func_1040(iParam0, 18, 0, 1);
	func_1040(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1019(int iParam0, bool bParam1)
{
	if (bParam1 && !func_511(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_1020(int iParam0, bool bParam1)
{
	if (bParam1 && !func_511(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1021(int iParam0, bool bParam1)
{
	if (bParam1 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_1022(var uParam0, int iParam1)
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

void func_1023(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_1024(var uParam0, int iParam1)
{
	iVar0 = func_979(*uParam0);
	iVar1 = func_978(*uParam0);
	if (iParam1 < 1 || iParam1 > func_983(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_1025(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_1026(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_1027(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_1028(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1029(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_1030()
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

int func_1031(int iParam0)
{
	if (!func_678(iParam0))
	{
		return -1;
	}
	return func_1042(iParam0);
}

int func_1032(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	Var3.f_10 = 7;
	iVar0 = create_itemset(true);
	iVar16 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar16 > iParam2)
	{
	}
	if (func_1043() != -1)
	{
		if (func_291(func_1044(), 0))
		{
			if (is_ped_on_mount(func_1044()))
			{
				iVar17 = get_mount(func_1044());
			}
		}
	}
	iVar15 = 0;
	while (iVar15 < iVar16)
	{
		iVar1 = get_indexed_item_in_itemset(iVar15, iVar0);
		iVar2 = iVar1;
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if ((!is_ped_human(iVar2) && iVar2 != func_1045(uParam1, &Var3)) && iVar17 != iVar2)
				{
					if (bParam4)
					{
						set_entity_as_mission_entity(iVar2, true, true);
					}
					if (iVar14 >= *uParam0)
					{
						Jump @209; //curOff = 180
					}
					else
					{
						(*uParam0)[iVar14] = iVar2;
						iVar14++;
					}
				}
			}
		}
		iVar15++;
	}
	destroy_itemset(iVar0);
	return iVar14;
}

int func_1033(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1046(iVar0);
}

int func_1034(int iParam0, int iParam1)
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

bool func_1035()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

bool func_1036(int iParam0, int iParam1)
{
	if (!func_873(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1047(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1048("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1049(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_546(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1050(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1050(iVar1);
	}
	return false;
}

int func_1037(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_864(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1047(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1051(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_874(bParam2), iParam0, 0);
	return uVar2;
}

int func_1038()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1052(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1052(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_1039(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_849(iVar0, 2))
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
				func_1053(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1040(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1041(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_511(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1042(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1054(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_1043()
{
	return func_1055(0);
}

int func_1044()
{
	iVar0 = func_1043();
	if (!func_977(iVar0))
	{
		return 0;
	}
	return Global_1360165[iVar0];
}

int func_1045(var uParam0, var uParam1)
{
	uParam1->f_10 = func_1056(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_80(uParam1->f_6))
		{
		}
	}
	bVar0 = func_701();
	if (*uParam1)
	{
		if (bVar0 && !func_1000((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1057(5))
			{
				func_1058(5);
				func_1059(5);
				func_1060(0);
				func_1061(0);
			}
		}
	}
	if (func_1062(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_1000((*Global_1835011)[37]->f_1, 1)) && !func_1000((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_1000((*Global_1835011)[43]->f_1, 1)) && !func_1000((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1063(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1064(iVar1))
	{
		bVar3 = true;
		if (func_1065(iVar1))
		{
			bVar4 = true;
		}
		if (func_1066(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_1067(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1057(0) && func_1057(1))
			{
				func_1068(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1069())
			{
				func_1070();
			}
			func_1060(0);
			func_1061(0);
			func_1071(uParam1->f_6);
		}
	}
	if (!func_1064(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1072(uParam1->f_10) == 0 || func_1073(uParam1->f_10) == 0) || func_1074(uParam1->f_10) == 0)
			{
				func_1075(uParam1->f_10);
			}
			func_1076(uParam1->f_10);
			func_1077(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1063(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1064(iVar1))
	{
		bVar3 = true;
		if (func_1065(iVar1))
		{
			bVar4 = true;
		}
		if (func_1066(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_80(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1078(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1079(uParam1->f_10) };
			Var10 = { func_1080() };
			func_1081(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_1082(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1083(uParam1->f_10);
		if (uParam1->f_2 && !func_80(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_1084(uParam1->f_10);
	if (func_1082(uParam1->f_10))
	{
		iVar16 = func_1085(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_1046(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1086(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1047(int iParam0, int iParam1)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_864(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1008(iParam0, 1399091007))
	{
		func_1087(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_1048(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_874(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1049(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1050(int iParam0)
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

int func_1051(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1088(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1089(&Var0, func_865(0));
	}
	if (!func_1090(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1050(iVar14);
	return uVar15;
}

bool func_1052(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_1053(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_685(iParam0, 1);
	func_686(iParam0, 1);
	func_687(iParam0, 128);
}

int func_1054(int iParam0)
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

int func_1055(int iParam0)
{
	if (!func_976(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_185(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_1056(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_1057(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1074(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1058(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1064(iParam0))
	{
		return;
	}
	iVar0 = func_1063(iParam0);
	func_1091(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1092(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1093(iParam0, 0);
	func_1094(iParam0);
}

void func_1059(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_1095(&Var0);
	func_1096(iParam0, Var0);
	func_1097(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1098(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1099(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1100(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1101(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1102(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1103(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1104(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1105(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_1060(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1061(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1062(vector3 vParam0)
{
	return func_1106(_get_map_zone_at_coords(vParam0, 10));
}

int func_1063(int iParam0)
{
	iParam0 = func_1056(iParam0);
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

bool func_1064(int iParam0)
{
	iParam0 = func_1056(iParam0);
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

bool func_1065(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1064(iParam0))
	{
		return false;
	}
	iVar0 = func_1063(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1066(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1064(iParam0))
	{
		return false;
	}
	iVar0 = func_1063(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_1067(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1064(iParam0))
	{
		return;
	}
	iVar0 = func_1063(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1068(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1107(iParam0);
	func_1107(iParam0);
	func_1108(iParam0, iParam1);
	func_1109(iParam0, iParam1);
	func_1110(iParam0, iParam1);
	iVar1 = func_1063(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1111(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_1063(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1111(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_1112();
}

bool func_1069()
{
	iVar0 = func_1113();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1070()
{
	iVar0 = func_1113();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1114(0);
}

void func_1071(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1072(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_1073(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_1074(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_1075(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1115(&uVar0, &uVar1, &uVar2);
	func_1116(iParam0, uVar0);
	func_1117(iParam0, uVar1);
	func_1118(iParam0, uVar2);
	func_1119(iParam0, 1);
	func_1120(iParam0, 1);
}

void func_1076(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1121(iParam0, 1);
}

void func_1077(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_1078(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1122(iParam0, 1);
}

struct<2> func_1079(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1123(iParam0, &uVar2))
	{
	}
	if (!func_1124(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1080()
{
	if (func_1125(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1125(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1125(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1125(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1125(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1125(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1081(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_1126(iParam0);
	func_1127(iParam0, uParam1);
	func_1128(iParam0);
	func_1129(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1130(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_1082(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_1083(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_1084(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1085(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_1094(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_1094(iParam0);
	}
}

int func_1085(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

int func_1086(int iParam0, int iParam1)
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

void func_1087(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1088(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1089(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1090(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_874(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_1091(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1063(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1131(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1092(int iParam0)
{
	if (!func_1132(iParam0))
	{
		return false;
	}
	if (!func_1133())
	{
		return true;
	}
	return false;
}

void func_1093(int iParam0, int iParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_1094(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

void func_1095(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1096(int iParam0, struct<2> Param1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1134(iParam0, Param1))
	{
	}
	if (!func_1135(iParam0, Param1.f_1))
	{
	}
}

void func_1097(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1136((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1098(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1099(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_1100(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1101(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1102(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1103(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1104(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1105(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1106(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1107(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

void func_1108(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1109(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1110(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1137(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1137(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1138(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1139(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1140(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1111(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_1141(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_1142(iParam0))
	{
		iVar3 = func_1143(iParam0);
		if (func_1144(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

void func_1112()
{
	if (func_1064(0))
	{
		func_1145(0);
	}
	if (func_1064(1))
	{
		func_1145(1);
	}
	if (func_1064(5))
	{
		func_1145(5);
	}
	if (func_1064(6))
	{
		func_1107(6);
	}
}

int func_1113()
{
	return Global_1900383->f_393;
}

void func_1114(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1115(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_701())
	{
		if (func_1146())
		{
			bVar0 = false;
			if (!func_1000((*Global_1835011)[15]->f_1, 1) && !func_728(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1147();
				*iParam1 = func_1148();
				*uParam2 = func_1149();
				return 1;
			}
			else
			{
				*uParam0 = func_1150();
				*iParam1 = func_1151();
				*uParam2 = func_1152();
				return 1;
			}
		}
		else if (func_69())
		{
			if (!func_1000((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1153();
				*iParam1 = func_1154();
				*uParam2 = func_1155();
				return 1;
			}
			else
			{
				*uParam0 = func_1156();
				*iParam1 = func_1157();
				*uParam2 = func_1158();
				return 1;
			}
		}
	}
	else if (func_1146())
	{
		*uParam0 = func_1159();
		*iParam1 = func_1160();
		*uParam2 = func_1161();
		return 1;
	}
	else if (func_69())
	{
		*uParam0 = func_1162();
		*iParam1 = func_1163();
		*uParam2 = func_1164();
		return 1;
	}
	return 0;
}

void func_1116(int iParam0, var uParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = uParam1;
}

void func_1117(int iParam0, var uParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = uParam1;
}

void func_1118(int iParam0, var uParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = uParam1;
}

void func_1119(int iParam0, int iParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_1120(int iParam0, int iParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1072(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1115(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1165(iParam1);
	iVar5 = func_1063(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_1121(int iParam0, int iParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_1122(int iParam0, int iParam1)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

bool func_1123(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1137(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1166(Var0, 1415981582, 0);
	if (!func_873(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1124(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1137(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1166(Var0, -2119169513, 0);
	if (!func_873(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1125(int iParam0, var uParam1)
{
	if (!func_1167(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1168() };
	*uParam1 = func_1166(Var0, iParam0, 0);
	if (!func_873(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1126(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, 0);
}

void func_1127(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1169(iParam0, *uParam1);
	func_1169(iParam0, uParam1->f_1);
}

void func_1128(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
}

void func_1129(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1169(iParam0, *uParam1);
	func_1169(iParam0, uParam1->f_1);
	func_1169(iParam0, uParam1->f_2);
	func_1169(iParam0, uParam1->f_3);
	func_1169(iParam0, uParam1->f_4);
	func_1169(iParam0, uParam1->f_5);
}

int func_1130(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

int func_1131(int iParam0)
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

bool func_1132(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_1133()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1134(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1137(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_718(iParam1, Var0, 1415981582, 0) };
	return func_1170(Var29, 1);
}

bool func_1135(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1137(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_718(iParam1, Var0, -2119169513, 0) };
	return func_1170(Var29, 1);
}

void func_1136(var uParam0)
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

bool func_1137(int iParam0, var uParam1)
{
	if (!func_1171(iParam0))
	{
		return false;
	}
	iVar0 = func_1138(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_863(0) };
	if (!func_1172(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1173(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_1139(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_720(bParam10))
	{
		return func_1174(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_870(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1175(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_874(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1170(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1140(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_720(bParam9))
	{
		return func_1176(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1175(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_870(Param0, &Var0, bParam9, 1) || !func_870(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1175(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_874(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_1141(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1177(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1142(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_1143(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_1143(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1144(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_1145(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_1063(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_1122(iParam0, 64))
	{
		func_1107(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_728(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1178(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_1107(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1179(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1180(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1122(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1181(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_603(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1182(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1183((*Global_1900383)[iParam0]->f_26);
		func_1184((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_1185(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_1179(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

bool func_1146()
{
	if (func_182() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_1147()
{
	return 1342496140;
}

int func_1148()
{
	return 446670976;
}

int func_1149()
{
	return 1;
}

int func_1150()
{
	return -868094182;
}

int func_1151()
{
	return 1074477367;
}

int func_1152()
{
	return 1;
}

int func_1153()
{
	return -997197050;
}

int func_1154()
{
	return -2063289686;
}

int func_1155()
{
	return 2;
}

int func_1156()
{
	return -868094182;
}

int func_1157()
{
	return 1074477367;
}

int func_1158()
{
	return 1;
}

int func_1159()
{
	return 1235275977;
}

int func_1160()
{
	return 2030804811;
}

int func_1161()
{
	return 1;
}

int func_1162()
{
	return 1974379573;
}

int func_1163()
{
	return 2024948086;
}

int func_1164()
{
	return 1;
}

void func_1165(int iParam0)
{
	if (func_1186() < iParam0)
	{
		func_1187(iParam0);
	}
}

int func_1166(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1188(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1167(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_868(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1189(iParam0);
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

struct<4> func_1168()
{
	Var0 = { func_863(0) };
	return func_718(856287005, Var0, -218846335, 0);
}

void func_1169(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, false, false);
}

bool func_1170(struct<4> Param0, int iParam4)
{
	if (!func_720(0))
	{
		return func_1190(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_870(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_874(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1171(int iParam0)
{
	iVar0 = func_1138(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_863(0) };
	if (func_1191(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1172(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_874(bParam7);
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

bool func_1173(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_874(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1174(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_870(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1175(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_871(Var0.f_4, Param4, iParam8, 0);
	iVar15 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1192(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1193(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1175(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1176(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1175(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_870(Param0, &Var0, 1, 0) || !func_870(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1175(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1192(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1192(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
		{
			if (_cashinventory_transaction_add_item(iVar60, &Var28, 16) && _cashinventory_transaction_add_item(iVar60, &Var44, 16))
			{
				if (_cashinventory_transaction_checkout(iVar60))
				{
					func_1194(iVar60, 1);
				}
				else
				{
					_cashinventory_transaction_delete(iVar60);
					return -1;
				}
			}
			else
			{
				_cashinventory_transaction_delete(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1193(1168099063, &Var28, 0);
		iVar60 = func_1193(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1177(int iParam0)
{
	switch (iParam0)
	{
		case -1760684159:
		case -1718100160:
		case -1642485146:
		case -1486704931:
		case -1391147923:
		case -1356425746:
		case -1181161469:
		case -1084397164:
		case -1053639984:
		case -941733863:
		case -646460384:
		case -575759638:
		case -548014618:
		case 291878635:
		case 979093383:
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return true;
	}
	return false;
}

void func_1178(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1196(func_1195(255), 109029619));
	}
	else if (func_1146())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_69();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1179(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_1180(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1196(func_1195(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1146())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_69())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1181(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_1182(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1072(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1179(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1179(iParam0) + 1;
	fVar6 = func_1197(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1198(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1183(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_1184(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1185(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

int func_1186()
{
	return Global_40.f_1095.f_3135;
}

void func_1187(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1188(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_874(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_870(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1189(int iParam0)
{
	if (!func_873(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_868(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_1190(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_870(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_864(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1199(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1200(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1201(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1202(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1192(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1193(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1191(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_874(bParam2), uParam0, iParam1);
}

struct<16> func_1192(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1193(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1194(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1194(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1194(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1194(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1203(iParam0, iParam1);
}

char* func_1195(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1204(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1204(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1196(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1205(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1197(int iParam0)
{
	iParam0 = func_1056(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_1198(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<28> func_1199(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_874(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1192(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1200(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1194(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1194(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1194(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1201(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_874(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1192(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1202(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1194(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1194(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1194(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1203(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

bool func_1204(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1206(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1207())
	{
		return func_1206(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1206(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_1205(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1206(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1207()
{
	return Global_1109400->f_245;
}

