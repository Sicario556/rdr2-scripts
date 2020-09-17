void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_15 = 675980447;
	bLocal_30 = true;
	Var0.f_8 = 2;
	Var0.f_8.f_1.f_11 = 2;
	Var0.f_8.f_1.f_18 = 2;
	Var0.f_8.f_1.f_39 = -1;
	Var0.f_8.f_1.f_40.f_11 = 2;
	Var0.f_8.f_1.f_40.f_18 = 2;
	Var0.f_8.f_1.f_40.f_39 = -1;
	Var0.f_89 = 4;
	Var0.f_89.f_1.f_8 = -1;
	Var0.f_89.f_1.f_11 = -1;
	Var0.f_89.f_1.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_150 = 6;
	Var0.f_150.f_1.f_9 = -1;
	Var0.f_150.f_1.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_229 = 2;
	Var0.f_229.f_1.f_1 = 4;
	Var0.f_229.f_1.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1 = 4;
	Var0.f_229.f_1.f_27.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_287 = -1;
	Var0.f_287.f_1 = -1;
	Var0.f_307 = -1;
	Var0.f_326 = -1;
	Var0.f_304 = Local_31;
	Var0 = Local_31.f_1;
	func_1();
	func_2(&Var0);
	while (bLocal_30)
	{
		bLocal_30 = !func_3(&Var0);
		if (func_4(&Var0))
		{
			bLocal_30 = false;
		}
		wait(0);
	}
	func_5(&Var0);
	terminate_this_thread();
}

void func_1()
{
	set_this_script_can_be_paused(false);
}

void func_2(var uParam0)
{
}

bool func_3(var uParam0)
{
	if (func_6(1, 1))
	{
		return true;
	}
	if (func_8(func_7(), 256, 0))
	{
		func_9(951, 1);
		return true;
	}
	if (!func_10(*uParam0))
	{
		if (func_12(func_11()))
		{
			return true;
		}
		if (func_13())
		{
			return true;
		}
	}
	if (func_14(uParam0))
	{
		func_15(0);
		return true;
	}
	if (func_16() >= 13)
	{
		return true;
	}
	if (func_17(uParam0) != 3 && func_17(uParam0) != 4)
	{
		if (!network_is_game_in_progress())
		{
			return true;
		}
	}
	if (func_18() == 9)
	{
		return true;
	}
	if (func_12(func_19(0)))
	{
		return true;
	}
	return false;
}

bool func_4(var uParam0)
{
	func_20(uParam0);
	switch (func_17(uParam0))
	{
		case 0:
			func_21(uParam0);
			break;
		case 1:
			if (!func_22(&(uParam0->f_1)))
			{
				func_23(uParam0);
			}
			func_24(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_26(uParam0);
			}
			break;
		case 2:
			if (!func_22(&(uParam0->f_1)))
			{
				func_27(uParam0);
			}
			func_28(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_29(uParam0);
			}
			break;
		case 3:
			if (!func_22(&(uParam0->f_1)))
			{
				func_30(uParam0);
			}
			func_31(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_32(uParam0);
			}
			break;
		case 4:
			if (!func_22(&(uParam0->f_1)))
			{
				func_33(uParam0);
			}
			func_34(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_35(uParam0);
			}
			break;
		case 5:
			if (!func_22(&(uParam0->f_1)))
			{
				func_36(uParam0);
			}
			func_37(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_38(uParam0);
			}
			break;
		case 6:
			if (!func_22(&(uParam0->f_1)))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_41(uParam0);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_5(var uParam0)
{
	if (func_17(uParam0) != 7)
	{
		func_42(uParam0);
	}
	if (Global_13)
	{
		Global_13 = 0;
	}
	if ((*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_14)
	{
		(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_14 = 0;
	}
	if ((*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_15)
	{
		(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_15 = 0;
	}
	if (uParam0->f_317)
	{
		func_43(uParam0, 0);
	}
	if (is_bit_set(uParam0->f_305, 7) && is_bit_set(uParam0->f_305, 19))
	{
		func_44(*uParam0, &uVar0, &uVar1);
		if (uParam0->f_327)
		{
			_0xb0b19b56697836f5(func_45(*uParam0), uVar0, 0, 0);
		}
		else if (uParam0->f_329)
		{
			_0xb0b19b56697836f5(func_45(*uParam0), uVar0, 0, 2);
		}
		else
		{
			_0xb0b19b56697836f5(func_45(*uParam0), uVar0, 0, 1);
		}
	}
	if (network_is_in_mp_cutscene())
	{
		_0x4b05b97ba46f419d(1);
		network_set_in_mp_cutscene(false, false, 32, true);
	}
	if (_does_volume_exist(uParam0->f_335))
	{
		_0x5b23dff8e0948bb2(uParam0->f_335, 0);
		_0xbe551c2cc421185d(uParam0->f_335, 0);
		_delete_volume(uParam0->f_335);
	}
	if (func_46(uParam0))
	{
		func_47(uParam0);
	}
	if (6 == *uParam0)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_8)
		{
			if (is_bit_set(uParam0->f_8[iVar2]->f_1, 6))
			{
				func_48();
			}
			iVar2++;
		}
	}
}

bool func_6(bool bParam0, bool bParam1)
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

struct<2> func_7()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_8(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_12(*Global_1051213) && !func_49(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_50(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_51(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_13())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_12(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

void func_9(int iParam0, bool bParam1)
{
	func_52(iParam0, &iVar0, &iVar1);
	if (!func_53(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_54(iVar0, iVar1);
}

bool func_10(var uParam0)
{
	return false;
}

struct<2> func_11()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_19(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_19(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_12(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return false;
	}
	return true;
}

bool func_13()
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
	if (!func_12(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_14(var uParam0)
{
	switch (func_57())
	{
		case 1:
			if (is_bit_set(uParam0->f_305, 5))
			{
				return true;
			}
			break;
		case 2:
			if (is_bit_set(uParam0->f_305, 4))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_15(int iParam0)
{
	Global_1293332->f_10 = iParam0;
}

int func_16()
{
	return Global_1572887->f_266;
}

int func_17(var uParam0)
{
	return uParam0->f_1;
}

int func_18()
{
	return Global_1915715->f_20241;
}

struct<2> func_19(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_20(var uParam0)
{
	if (uParam0->f_306 >= 3)
	{
		uParam0->f_306 = 0;
		return;
	}
	uParam0->f_306++;
}

void func_21(var uParam0)
{
	func_58(uParam0);
}

bool func_22(var uParam0)
{
	return is_bit_set(uParam0->f_4, *uParam0);
}

void func_23(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_60(uParam0, *uParam0);
	func_61(*uParam0);
	if (*uParam0 != 5 && *uParam0 != 8)
	{
		func_62(uParam0);
	}
	func_63(uParam0);
}

void func_24(var uParam0)
{
	if (*uParam0 == 5 || *uParam0 == 8)
	{
		func_62(uParam0);
	}
	if (!func_64(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

bool func_25(var uParam0)
{
	return is_bit_set(uParam0->f_5, *uParam0);
}

void func_26(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_27(var uParam0)
{
	func_59(&(uParam0->f_1));
}

void func_28(var uParam0)
{
	func_66(uParam0);
	func_67(uParam0);
	if (!func_68(uParam0))
	{
		return;
	}
	func_69(0);
	if (!func_70(uParam0))
	{
		return;
	}
	if (!func_71(uParam0))
	{
		return;
	}
	if (!func_72(uParam0))
	{
		return;
	}
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (_0xa2b1c7ef759a63ce() < 1f)
	{
		return;
	}
	func_58(uParam0);
}

void func_29(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_30(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_73(*uParam0);
	func_74(uParam0, 0);
	if (is_bit_set(uParam0->f_305, 6))
	{
		func_75(uParam0);
	}
}

void func_31(var uParam0)
{
	if (!is_bit_set(uParam0->f_305, 2))
	{
		func_76(uParam0);
		if (is_bit_set(uParam0->f_305, 2))
		{
			if (!uParam0->f_317)
			{
				func_43(uParam0, 1);
				func_77(uParam0);
				func_78(1);
			}
		}
		return;
	}
	func_79(uParam0);
	func_80(uParam0);
	if (is_bit_set(uParam0->f_305, 7))
	{
		func_81(uParam0);
	}
	if (!is_bit_set(uParam0->f_305, 3))
	{
		func_82(uParam0);
	}
	func_83(uParam0);
	if (func_46(uParam0))
	{
		func_47(uParam0);
	}
	func_84(0, 0, 1);
	if (!func_85(uParam0) && !func_86(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

void func_32(var uParam0)
{
	func_65(&(uParam0->f_1));
	func_87(*uParam0, &Var0, 0, 0);
	if (is_any_vehicle_near_point(Var0.f_3, 2f))
	{
		clear_bit(&(uParam0->f_305), 18);
	}
	func_43(uParam0, 0);
	func_88(&(uParam0->f_320));
	func_74(uParam0, 1);
	if (func_89(uParam0->f_319))
	{
		func_90(&(uParam0->f_319), 1, 1);
	}
	if (func_89(uParam0->f_324))
	{
		func_90(&(uParam0->f_324), 1, 1);
	}
	if (func_89(uParam0->f_325))
	{
		func_90(&(uParam0->f_325), 1, 1);
	}
	func_91(uParam0, 1);
}

void func_33(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_92(uParam0);
}

void func_34(var uParam0)
{
	func_84(0, 0, 1);
	func_93();
	if (!func_94(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

void func_35(var uParam0)
{
	func_65(&(uParam0->f_1));
	func_95(uParam0);
	clear_bit(&(uParam0->f_305), 2);
}

void func_36(var uParam0)
{
	func_59(&(uParam0->f_1));
}

void func_37(var uParam0)
{
	func_93();
	if (!is_bit_set(uParam0->f_305, 18))
	{
		func_58(uParam0);
		return;
	}
	if (!is_bit_set(uParam0->f_305, 2))
	{
		set_local_player_visible_in_cutscene(1, 0, 256);
		set_player_control(player_id(), false, 0, false);
		vVar0 = { func_96(*uParam0, 0, is_ped_male(Global_34)) };
		func_87(*uParam0, &Var3, 0, 0);
		set_anim_scene_entity(uParam0->f_316, &vVar0, Global_34, 0);
		set_anim_scene_origin(uParam0->f_316, Var3.f_3, 0f, 0f, Var3.f_7, 2);
		start_anim_scene(uParam0->f_316);
		set_bit(&(uParam0->f_305), 2);
	}
	else
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(500);
		}
		if (_is_anim_scene_active(uParam0->f_316) || !_is_anim_scene_started(uParam0->f_316, false))
		{
			set_player_control(player_id(), true, 0, false);
			func_58(uParam0);
		}
	}
}

void func_38(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_39(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_61(*uParam0);
	if (!is_bit_set(uParam0->f_305, 11))
	{
		func_91(uParam0, 0);
	}
	else if (!is_bit_set(uParam0->f_305, 10))
	{
		func_91(uParam0, 0);
	}
	else
	{
		func_97(1);
		Global_1293332->f_11 = 1;
	}
}

void func_40(var uParam0)
{
	func_84(0, 0, 1);
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
	}
	if (!is_bit_set(uParam0->f_305, 0))
	{
		if (!func_98(*uParam0))
		{
			bVar0 = false;
		}
	}
	func_99(uParam0);
	if (bVar0)
	{
		func_100(*uParam0, 0);
		func_101(*uParam0, 1);
		func_102(uParam0);
		func_103(uParam0);
		func_58(uParam0);
	}
}

void func_41(var uParam0)
{
	func_65(&(uParam0->f_1));
}

bool func_42(var uParam0)
{
	if (!func_104(uParam0))
	{
		return false;
	}
	if (!func_105(uParam0))
	{
		return false;
	}
	func_106(uParam0);
	func_107(uParam0);
	if (_0x62de46f061caa468() > 0)
	{
		_0x7d4e70a67a651c71(5);
	}
	return true;
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_108(1);
		func_109();
		_hide_ped_weapons(Global_1296859->f_8, 2, true);
		_0xf239400e16c23e08(0, 0);
		clear_ped_tasks_immediately(Global_1296859->f_8, false, true);
		_0xdd1232b332cbb9e7(7, 1, 0);
		if (func_110())
		{
			func_48();
		}
		func_111();
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
		if (func_112() || _0x50f124e6ef188b22(Global_1296859->f_8))
		{
			func_113(1);
			func_114();
			if (is_screen_faded_out() || is_screen_fading_out())
			{
				do_screen_fade_in(500);
			}
		}
		func_115();
		Global_13 = 1;
		func_116(Global_1296859->f_8);
		if (func_117(Global_1296859->f_8))
		{
			uParam0->f_323 = func_118(Global_1296859->f_8);
			clear_ped_tasks_immediately(Global_1296859->f_8, true, true);
		}
		func_119(0);
		uParam0->f_317 = 1;
		_hide_hud_component(-1319249689);
		_0x4b05b97ba46f419d(0);
		network_set_in_mp_cutscene(true, true, 32, true);
		func_120(0, 28);
	}
	else
	{
		set_entity_can_be_damaged(Global_1296859->f_8, true);
		_0xa0cefcea390aab9b(0);
		func_108(0);
		func_121();
		Global_13 = 0;
		func_119(1);
		uParam0->f_317 = 0;
		_display_hud_component(-1319249689);
		if (!is_bit_set(uParam0->f_305, 18))
		{
			_0x4b05b97ba46f419d(1);
			network_set_in_mp_cutscene(false, false, 32, true);
		}
		func_120(1, 2);
	}
}

bool func_44(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 3:
		default:
			*iParam2 = 0;
			return false;
			*iParam1 = 2103384153;
			*iParam2 = 1;
			return true;
		case 4:
			*iParam1 = -428390721;
			*iParam2 = 1;
			return true;
		case 5:
			*iParam1 = -1733092640;
			*iParam2 = 1;
			return true;
		case 6:
			*iParam1 = 1384535894;
			*iParam2 = 1;
			return true;
		case 7:
			*iParam1 = 273608212;
			*iParam2 = 1;
			return true;
	}
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

bool func_46(var uParam0)
{
	return uParam0->f_284 != 0;
}

void func_47(var uParam0)
{
	if (uParam0->f_284 == 0)
	{
		return;
	}
	_0x00a15b94cba4f76f(uParam0->f_284);
	uParam0->f_284 = 0;
}

void func_48()
{
	func_122(0);
}

bool func_49(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_50(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_51(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_123(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_124(iParam0))
	{
		return false;
	}
	if (func_125(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_126(iParam0, 1)) || func_127(32768))
	{
		if (!func_126(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_128())
	{
		return false;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57()
{
	iVar0 = int_to_playerindex(Global_1296859->f_16);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	if (func_129(Global_1296859->f_16))
	{
		return 1;
	}
	return 2;
}

void func_58(var uParam0)
{
	uParam0->f_1.f_1 = uParam0->f_1;
	set_bit(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	clear_bit(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	iVar0 = uParam0->f_1;
	iVar0++;
	uParam0->f_1 = iVar0;
	if (uParam0->f_1 == 8)
	{
		uParam0->f_1 = 7;
	}
	(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0] = uParam0->f_1;
}

void func_59(var uParam0)
{
	set_bit(&(uParam0->f_4), *uParam0);
}

int func_60(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		default:
			return 0;
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = _create_volume_box(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@mpgvo_int1", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "1-Male", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "2-Female", 24);
			uParam0->f_8[0]->f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			return 1;
		case 2:
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = _create_volume_box(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@mpgvo_int2a", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "1-Male", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "2-Female", 24);
			uParam0->f_8[0]->f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 3);
			StringCopy(&(uParam0->f_8[1]->f_3), "cutscene@mpgvo_int2b", 64);
			StringCopy(uParam0->f_8[1]->f_11[0], "1-Male", 24);
			StringCopy(uParam0->f_8[1]->f_11[1], "2-Female", 24);
			uParam0->f_8[1]->f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[1]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[1]->f_2 = 256;
			set_bit(&(uParam0->f_8[1]->f_1), 2);
			set_bit(&(uParam0->f_8[1]->f_1), 4);
			return 1;
		case 3:
			uParam0->f_298 = { 1352.95f, -1306.359f, 75.9113f };
			uParam0->f_297 = _create_volume_box(uParam0->f_298, 0f, 0f, 0f, 5f, 5f, 5f);
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@BHINT_INT", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { 1359.71f, -1305.96f, 76.768f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			StringCopy(uParam0->f_8[0]->f_18[0], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[0]->f_4), "payLater", 24);
			StringCopy(uParam0->f_8[0]->f_18[1], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[1]->f_4), "payNow", 24);
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 5);
			set_bit(&(uParam0->f_305), 7);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			uParam0->f_330 = 15000;
			return 1;
		case 4:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@TRINT_INT", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			StringCopy(uParam0->f_8[0]->f_18[0], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[0]->f_4), "payLater", 24);
			StringCopy(uParam0->f_8[0]->f_18[1], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[1]->f_4), "payNow", 24);
			uParam0->f_89[0] = 500320009;
			uParam0->f_89[0]->f_8 = func_130();
			uParam0->f_89[0]->f_2 = { -319.241f, 797.036f, 116.886f };
			uParam0->f_89[0]->f_11 = 0;
			StringCopy(&(uParam0->f_89[0]->f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0]->f_9 = 379542007;
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 5);
			set_bit(&(uParam0->f_305), 7);
			set_bit(&(uParam0->f_305), 9);
			set_bit(&(uParam0->f_305), 11);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			uParam0->f_330 = 15000;
			return 1;
		case 5:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@COINT_INT", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			StringCopy(uParam0->f_8[0]->f_18[0], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[0]->f_4), "payLater", 24);
			StringCopy(uParam0->f_8[0]->f_18[1], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[1]->f_4), "payNow", 24);
			switch (func_131())
			{
				case 135:
					uParam0->f_8[0]->f_39 = 0;
					break;
				case 136:
					uParam0->f_8[0]->f_39 = 1;
					break;
				case 137:
					uParam0->f_8[0]->f_39 = 2;
					break;
				case 138:
					uParam0->f_8[0]->f_39 = 3;
					break;
				case 139:
					uParam0->f_8[0]->f_39 = 4;
					break;
				case 140:
					uParam0->f_8[0]->f_39 = 5;
					break;
				case 141:
					uParam0->f_8[0]->f_39 = 6;
					break;
				case 142:
					uParam0->f_8[0]->f_39 = 7;
					break;
				case 143:
					uParam0->f_8[0]->f_39 = 8;
					break;
				case 144:
					uParam0->f_8[0]->f_39 = 9;
					break;
				case 145:
					uParam0->f_8[0]->f_39 = 10;
					break;
				case 146:
					uParam0->f_8[0]->f_39 = 11;
					break;
			}
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 5);
			set_bit(&(uParam0->f_305), 7);
			set_bit(&(uParam0->f_305), 9);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			set_bit(&(uParam0->f_305), 20);
			uParam0->f_150[0]->f_1 = 1287159687;
			StringCopy(&(uParam0->f_150[0]->f_9.f_1), "Pigeoncage", 24);
			uParam0->f_150[0]->f_2 = { -2.8f, 0.86f, 1.7f };
			uParam0->f_150[1]->f_1 = -895862876;
			StringCopy(&(uParam0->f_150[1]->f_9.f_1), "Nazar_Chair", 24);
			uParam0->f_150[1]->f_2 = { -0.66f, -4.02f, -0.07f };
			uParam0->f_150[2]->f_1 = 1935688926;
			StringCopy(&(uParam0->f_150[2]->f_9.f_1), "CollectorBox", 24);
			uParam0->f_150[2]->f_2 = { 0.26f, -1.98f, 1.04f };
			uParam0->f_150[3]->f_1 = -9088003;
			StringCopy(&(uParam0->f_150[3]->f_9.f_1), "Collector_Drawer_2", 24);
			uParam0->f_150[3]->f_2 = { -0.5f, -0.25f, 1.71f };
			uParam0->f_330 = 20000;
			return 1;
		case 6:
			uParam0->f_298 = { 1446.741f, 374.882f, 88.88737f };
			uParam0->f_297 = _create_volume_box(uParam0->f_298, 0f, 0f, 0f, 13.868f, 15.947f, 8.828f);
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@moon_int", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { 1447.91f, 371.75f, 88.933f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			StringCopy(uParam0->f_8[0]->f_18[0], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[0]->f_4), "refuse", 24);
			StringCopy(uParam0->f_8[0]->f_18[1], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[1]->f_4), "ACCEPT", 24);
			uParam0->f_89[0] = 500320009;
			uParam0->f_89[0]->f_11 = 0;
			StringCopy(&(uParam0->f_89[0]->f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0]->f_8 = func_130();
			uParam0->f_89[0]->f_9 = 379542007;
			uParam0->f_89[1] = -254133531;
			uParam0->f_89[1]->f_11 = 0;
			StringCopy(&(uParam0->f_89[1]->f_11.f_1), "MAGGIE", 24);
			uParam0->f_89[1]->f_8 = 41788943;
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 5);
			set_bit(&(uParam0->f_305), 7);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			set_bit(&(uParam0->f_305), 17);
			uParam0->f_330 = 15000;
			return 1;
		case 7:
			uParam0->f_298 = { -1810.2f, -370.5f, 162.9f };
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@nat_int", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { -1810.2f, -370.6f, 172.336f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			StringCopy(uParam0->f_8[0]->f_18[0], "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[0]->f_4), "decline", 24);
			StringCopy(uParam0->f_8[0]->f_18[1], "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0]->f_18[1]->f_4), "ACCEPT", 24);
			uParam0->f_332 = { -1813.943f, -369.0147f, 315.077f };
			if (!_does_volume_exist(uParam0->f_335))
			{
				uParam0->f_335 = _0x0eb78c2b156635b1(-1612834106, -1809.454f, -370.597f, 163.302f, 0f, 0f, -88.451f, 1.53f, 0.709f, 2.927f);
				_0x5b23dff8e0948bb2(uParam0->f_335, 1);
				_0xbe551c2cc421185d(uParam0->f_335, 1);
			}
			StringCopy(&(uParam0->f_308), "script@mp@naturalist@nat@ig1_getup", 64);
			set_bit(&(uParam0->f_305), 18);
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_8[0]->f_1), 5);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			set_bit(&(uParam0->f_305), 7);
			set_bit(&(uParam0->f_305), 17);
			uParam0->f_330 = 15000;
			return 1;
		case 8:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@har_mcs1", 64);
			StringCopy(uParam0->f_8[0]->f_11[0], "har_mcs1", 24);
			StringCopy(uParam0->f_8[0]->f_11[1], "", 24);
			uParam0->f_8[0]->f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0]->f_2 = 256;
			uParam0->f_150[0]->f_1 = -192353904;
			StringCopy(&(uParam0->f_150[0]->f_9.f_1), "Harriet_Tonic_Box", 24);
			uParam0->f_150[0]->f_2 = { Vector(73.58f, -2132.97f, -2182.84f) - Vector(73.1032f, -2132.664f, -2182.447f) };
			set_bit(&(uParam0->f_8[0]->f_1), 2);
			set_bit(&(uParam0->f_305), 12);
			set_bit(&(uParam0->f_305), 14);
			set_bit(&(uParam0->f_305), 9);
			set_bit(&(uParam0->f_305), 20);
			return 1;
	}
}

void func_61(int iParam0)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if ((*Global_1056141)[&Global_1296859]->f_41.f_1[iParam0]->f_2 != -1)
	{
		(*Global_1056141)[&Global_1296859]->f_41.f_1[iParam0]->f_2 = -1;
	}
}

int func_62(var uParam0)
{
	if (is_bit_set(uParam0->f_305, 9) && func_133(uParam0->f_298))
	{
		if (!func_134(*uParam0, &vVar0, &vVar3, 1))
		{
		}
		else
		{
			if (func_135(uParam0->f_298, vVar0))
			{
				return 0;
			}
			uParam0->f_298 = { vVar0 };
			uParam0->f_301 = { vVar3 };
			iVar6 = 0;
			while (iVar6 < 2)
			{
				uParam0->f_8[iVar6]->f_33 = { vVar0 };
				uParam0->f_8[iVar6]->f_36 = { vVar3 };
				iVar6++;
			}
			return 1;
		}
	}
	else if (func_133(uParam0->f_298))
	{
	}
	return 0;
}

void func_63(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
		default:
			break;
	}
	return;
	vVar0 = { func_136(&Global_1296859) };
	switch (vVar0.y)
	{
		case -987049424:
		case -682748:
		case 1538293636:
		case 1581179681:
		default:
			return;
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@TRINT_INT", 64);
			StringCopy(uParam0->f_8[0]->f_18[0], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(uParam0->f_8[0]->f_18[1], "TRINT_INT_P4_T01_Shot_1", 32);
			uParam0->f_89[0]->f_2 = { -319.241f, 797.036f, 116.886f };
		case -1992167326:
		case -1884014371:
		case -1554232707:
		case -724534761:
		case -215258135:
		case 892234183:
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@TRINT_INTB", 64);
			StringCopy(uParam0->f_8[0]->f_18[0], "TRINT_INT_P4B1_T01_Shot_1", 32);
			StringCopy(uParam0->f_8[0]->f_18[1], "TRINT_INT_P4B1_T01_Shot_1", 32);
			uParam0->f_89[0]->f_2 = { -3682.435f, -2622.561f, -14.402f };
			break;
		case -1871413878:
		case 1357161730:
		case 1483778247:
			StringCopy(&(uParam0->f_8[0]->f_3), "cutscene@TRINT_INTC", 64);
			StringCopy(uParam0->f_8[0]->f_18[0], "TRINT_INT_P4C1_T01_Shot_1", 32);
			StringCopy(uParam0->f_8[0]->f_18[1], "TRINT_INT_P4C1_T01_Shot_1", 32);
			uParam0->f_89[0]->f_2 = { 2823.36f, -1314.97f, 45.76f };
			break;
	}
}

bool func_64(var uParam0)
{
	switch (func_137(uParam0))
	{
		case 0:
			_0xed9582b3da8f02b4(5);
			func_138(uParam0, 1);
			break;
		case 1:
			if (func_139(uParam0))
			{
				func_138(uParam0, 2);
			}
			break;
		case 2:
			if (func_140(uParam0))
			{
				func_138(uParam0, 3);
			}
			break;
		case 3:
			func_141(uParam0);
			func_138(uParam0, 4);
			break;
		case 4:
			func_138(uParam0, 5);
			break;
		case 5:
			return true;
	}
	return false;
}

void func_65(var uParam0)
{
	set_bit(&(uParam0->f_5), *uParam0);
}

void func_66(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (is_bit_set(uParam0->f_8[iVar1]->f_1, 3) || is_bit_set(uParam0->f_8[iVar1]->f_1, 4))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!is_bit_set(uParam0->f_305, 4) && !is_bit_set(uParam0->f_305, 5))
		{
			switch (func_57())
			{
				case 2:
					set_bit(&(uParam0->f_305), 5);
					break;
				case 1:
					set_bit(&(uParam0->f_305), 4);
					break;
			}
		}
	}
}

void func_67(var uParam0)
{
	switch (func_142(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_143(uParam0) == 0)
			{
				func_144(uParam0, 0);
				return;
			}
			switch (func_143(uParam0))
			{
				case 1:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
				case 3:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
				case 2:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			}
			Var0.f_7.f_3 = 1;
			Var0.f_7 = -2122634935;
			func_145(uParam0, Var0, sVar19, sVar20);
			func_144(uParam0, 2);
			break;
		case 2:
			if (!func_46(uParam0))
			{
				return;
			}
			iVar21 = func_146();
			if (iVar21 != -1577439368)
			{
				iVar22 = get_mount(Global_1296859->f_8);
				if (does_entity_exist(iVar22))
				{
					func_147(iVar22, 1, 1);
				}
				func_148(Global_1296859->f_17, 0f, -1082130432, -1082130432, 1, 1, 1);
				func_47(uParam0);
				func_144(uParam0, 3);
			}
			break;
		case 3:
			if (func_149(255) == 1)
			{
				func_144(uParam0, 0);
				func_150(uParam0, 0);
			}
			break;
	}
}

bool func_68(var uParam0)
{
	if (!func_151(*uParam0))
	{
		bVar0 = true;
		if (func_152(*uParam0))
		{
			if (Global_1296859->f_16 != &Global_1296859)
			{
				bVar0 = false;
			}
		}
		if (func_153(uParam0) && bVar0)
		{
			if (func_154())
			{
				return true;
			}
		}
		return false;
	}
	if (Global_1296859->f_16 == &Global_1296859 || !_0x0f99f6436528a089(Global_1296859->f_15))
	{
		if (func_155(*uParam0) || func_153(uParam0))
		{
			if (func_154())
			{
				return true;
			}
		}
	}
	else if (_0x0f99f6436528a089(Global_1296859->f_15))
	{
		if (Global_1296859->f_16 >= 32 || Global_1296859->f_16 < 0)
		{
			return false;
		}
		if (func_156(*uParam0, int_to_playerindex(Global_1296859->f_16)) == 3)
		{
			if (!func_157(*uParam0))
			{
				return true;
			}
			else if (func_153(uParam0))
			{
				func_158(uParam0, 2);
			}
		}
		else if (func_153(uParam0))
		{
			if (!func_159())
			{
				if (!_is_ped_hogtied(Global_1296859->f_8))
				{
					func_158(uParam0, 1);
				}
			}
		}
	}
	return false;
}

void func_69(bool bParam0)
{
	if (func_160(bParam0))
	{
		func_161(func_18(), 0);
	}
}

bool func_70(var uParam0)
{
	if (!&Global_1296859->f_22[&Global_1296859])
	{
		return false;
	}
	if (func_162())
	{
		return false;
	}
	if (!func_163(255))
	{
		return false;
	}
	if (is_ped_injured(Global_1296859->f_8))
	{
		return false;
	}
	if (_is_ped_hogtied(Global_1296859->f_8))
	{
		_0x79559bad83ccd038(Global_1296859->f_8, 3, 0, 0, 0, 1090519040);
		return false;
	}
	if (func_164(Global_1296859->f_10, 1, 0, 1))
	{
		if (Global_1296859->f_16 == &Global_1296859)
		{
			func_158(uParam0, 3);
		}
		return false;
	}
	if (is_ped_in_any_vehicle(Global_1296859->f_8, true))
	{
		return false;
	}
	if (Global_1108365->f_935.f_28 == 6)
	{
		return false;
	}
	if (func_160(0))
	{
		return false;
	}
	if (func_149(255) != 1)
	{
		return false;
	}
	return true;
}

bool func_71(var uParam0)
{
	switch (func_165(uParam0))
	{
		case 0:
			func_166(uParam0);
			func_167(uParam0, 1);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!func_168(uParam0, iVar0))
				{
				}
				else
				{
					if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
					{
						switch (func_57())
						{
							case 2:
								Jump @353; //curOff = 144
								Jump @154; //curOff = 147
								return false;
							}
							else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
							{
								switch (func_57())
								{
									case 1:
										Jump @353; //curOff = 197
										Jump @207; //curOff = 200
										return false;
									}
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (!does_entity_exist(uParam0->f_89[iVar2]->f_1))
										{
										}
										else if (uParam0->f_89[iVar2]->f_11 == -1)
										{
										}
										else if (uParam0->f_89[iVar2]->f_11 != iVar0)
										{
										}
										else if (_0x375f5870a7b8bec1(&(uParam0->f_89[iVar2]->f_11.f_1)))
										{
										}
										else
										{
											freeze_entity_position(uParam0->f_89[iVar2]->f_1, false);
											set_anim_scene_entity(&(uParam0->f_8[iVar0]), &(uParam0->f_89[iVar2]->f_11.f_1), uParam0->f_89[iVar2]->f_1, 0);
										}
										iVar2++;
									}
								}
								iVar0++;
							}
							func_167(uParam0, 2);
							break;
						case 2:
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!func_168(uParam0, iVar0))
								{
								}
								else
								{
									if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
									{
										switch (func_57())
										{
											case 2:
												Jump @579; //curOff = 436
												Jump @446; //curOff = 439
												return false;
											}
											else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
											{
												switch (func_57())
												{
													case 1:
														Jump @579; //curOff = 489
														Jump @499; //curOff = 492
														return false;
													}
													if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 1))
													{
													}
													else if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 2))
													{
													}
													else
													{
														uParam0->f_229[iVar0] = func_169(*uParam0, iVar0);
														if (!_0x179a6f0ee2e79026(uParam0->f_229[iVar0]))
														{
														}
														else
														{
															iVar0++;
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_168(uParam0, iVar0))
																{
																}
																else
																{
																	iVar1 = 0;
																	while (iVar1 < 32)
																	{
																		if (!_0x72b2e00c9bac6789(uParam0->f_229[iVar0], iVar1))
																		{
																		}
																		else
																		{
																			iVar3++;
																		}
																		iVar1++;
																	}
																	uParam0->f_229[iVar0]->f_26 = iVar3;
																	iVar3 = 0;
																}
																iVar0++;
															}
															func_167(uParam0, 3);
															Jump @1791; //curOff = 689
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_168(uParam0, iVar0))
																{
																	iVar5[iVar0] = 1;
																}
																else if (!func_151(*uParam0))
																{
																	iVar8 = int_to_playerindex(&Global_1296859);
																	if (_0x72b2e00c9bac6789(uParam0->f_229[iVar0], iVar1))
																	{
																		if (func_170(uParam0, iVar8, iVar0, 0))
																		{
																			_0xd426e2e3288469d6(uParam0->f_229[iVar0], iVar1);
																		}
																		else
																		{
																			Jump @802; //curOff = 792
																			iVar5[iVar0] = 1;
																			Jump @1301; //curOff = 802
																			if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
																			{
																				switch (func_57())
																				{
																					case 2:
																						iVar5[iVar0] = 1;
																						Jump @1301; //curOff = 852
																						Jump @862; //curOff = 855
																						return false;
																					}
																					else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
																					{
																						switch (func_57())
																						{
																							case 1:
																								iVar5[iVar0] = 1;
																								Jump @1301; //curOff = 912
																								Jump @922; //curOff = 915
																								return false;
																							}
																							iVar2 = 0;
																							iVar1 = 0;
																							while (iVar1 < 4)
																							{
																								if (func_171(uParam0, iVar0, iVar1, 0))
																								{
																									if (func_172(uParam0, iVar0, iVar1))
																									{
																										if (!uParam0->f_229[iVar0]->f_1[iVar1]->f_1)
																										{
																											_set_ped_component_disabled(&(uParam0->f_229[iVar0]->f_1[iVar1]), -1229581779, 1);
																											_update_ped_variation(&(uParam0->f_229[iVar0]->f_1[iVar1]), false, true, true, true, false);
																											uParam0->f_229[iVar0]->f_1[iVar1]->f_1 = 1;
																										}
																										else
																										{
																											iVar2++;
																											Jump @1060; //curOff = 1054
																											Jump @1067; //curOff = 1057
																											iVar5[iVar0] = 1;
																										}
																										iVar1++;
																										if (iVar2 != uParam0->f_229[iVar0]->f_26)
																										{
																											iVar5[iVar0] = 0;
																										}
																										else
																										{
																											iVar5[iVar0] = 1;
																										}
																										else
																										{
																											iVar1 = 0;
																											while (iVar1 < 32)
																											{
																												if (!_0x72b2e00c9bac6789(uParam0->f_229[iVar0], iVar1))
																												{
																												}
																												else
																												{
																													iVar8 = int_to_playerindex(iVar1);
																													if (!_network_is_player_index_valid(iVar8))
																													{
																													}
																													else if (!network_is_player_active(iVar8))
																													{
																													}
																													else
																													{
																														iVar10 = -1;
																														if (!func_151(*uParam0))
																														{
																															iVar10 = 0;
																														}
																														else
																														{
																															iVar9 = 0;
																															while (iVar9 < 7)
																															{
																																if (&(*Global_1056141)[Global_1296859->f_16]->f_41.f_1[*uParam0]->f_3[iVar9] == iVar8)
																																{
																																	iVar10 = iVar9;
																																}
																																iVar9++;
																															}
																														}
																														if (iVar10 != -1)
																														{
																															if (func_170(uParam0, iVar8, iVar0, iVar10))
																															{
																																_0xd426e2e3288469d6(uParam0->f_229[iVar0], iVar1);
																															}
																															else
																															{
																																iVar1++;
																																iVar0++;
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!&iVar5[iVar0])
																																	{
																																		bVar11 = true;
																																	}
																																	iVar0++;
																																}
																																if (!bVar11)
																																{
																																	func_167(uParam0, 4);
																																}
																																Jump @1791; //curOff = 1354
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!func_168(uParam0, iVar0))
																																	{
																																	}
																																	else
																																	{
																																		if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
																																		{
																																			switch (func_57())
																																			{
																																				case 2:
																																					Jump @1650; //curOff = 1421
																																					Jump @1431; //curOff = 1424
																																					return false;
																																				}
																																				else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
																																				{
																																					switch (func_57())
																																					{
																																						case 1:
																																							Jump @1650; //curOff = 1474
																																							Jump @1484; //curOff = 1477
																																							return false;
																																						}
																																						iVar1 = 0;
																																						while (iVar1 < 4)
																																						{
																																							if (!func_171(uParam0, iVar0, iVar1, 1))
																																							{
																																							}
																																							else if (uParam0->f_229[iVar0]->f_1[iVar1]->f_2 != &uParam0->f_8[iVar0])
																																							{
																																							}
																																							else if (_0x375f5870a7b8bec1(&(uParam0->f_229[iVar0]->f_1[iVar1]->f_2.f_1)))
																																							{
																																							}
																																							else
																																							{
																																								freeze_entity_position(&(uParam0->f_229[iVar0]->f_1[iVar1]), false);
																																								set_anim_scene_entity(uParam0->f_229[iVar0]->f_1[iVar1]->f_2, &(uParam0->f_229[iVar0]->f_1[iVar1]->f_2.f_1), &(uParam0->f_229[iVar0]->f_1[iVar1]), 0);
																																							}
																																							iVar1++;
																																						}
																																					}
																																					iVar0++;
																																				}
																																				if (is_bit_set(uParam0->f_305, 20))
																																				{
																																					func_167(uParam0, 5);
																																				}
																																				else
																																				{
																																					func_167(uParam0, 6);
																																				}
																																				Jump @1791; //curOff = 1690
																																				iVar4 = 0;
																																				while (iVar4 <= 5)
																																				{
																																					if (!func_173(uParam0, iVar4))
																																					{
																																					}
																																					else if (!does_entity_exist(&(uParam0->f_150[iVar4])))
																																					{
																																					}
																																					else
																																					{
																																						set_anim_scene_entity(&(uParam0->f_8[0]), &(uParam0->f_150[iVar4]->f_9.f_1), &(uParam0->f_150[iVar4]), 0);
																																					}
																																					iVar4++;
																																				}
																																				func_167(uParam0, 6);
																																				Jump @1791; //curOff = 1784
																																				return true;
																																			}
																																			return false;
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			default:
																				break;
																	}
																}

bool func_72(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (is_ped_on_mount(Global_1296859->f_8))
			{
				func_174(&uVar0, 2);
				func_174(&uVar0, 256);
				if (func_175(Global_1296859->f_8, &uVar0, 32, 0, 0, 3f, 100, 0, 0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			return false;
	}
	return true;
}

void func_73(int iParam0)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if (Global_1296859->f_16 == &Global_1296859 && (*Global_1056141)[&Global_1296859]->f_41.f_1[iParam0]->f_2 == -1)
	{
		(*Global_1056141)[&Global_1296859]->f_41.f_1[iParam0]->f_2 = get_cloud_time_as_int();
	}
}

void func_74(var uParam0, int iParam1)
{
}

void func_75(var uParam0)
{
	iVar1 = 0;
	if (!func_44(*uParam0, &iVar0, &iVar1))
	{
		return;
	}
	iVar2 = func_176(iVar0, 0, 1, -1, 1);
	if (!func_177(iVar0, iVar2, 1))
	{
		return;
	}
	if (func_178(&(uParam0->f_287), iVar0, iVar1, 1, iVar2, -1, 1))
	{
		_0xca9e42f437625a85(uParam0->f_287.f_1, -1571441951, -1571441951);
		func_179(iVar0);
		Var3.f_7 = -142743235;
		Var3.f_16 = -1;
		Var3.f_6 = 1;
		if (func_180(iVar0))
		{
			uParam0->f_331 = func_182(func_181(iVar0, 1), iVar2, 0);
		}
		else
		{
			uParam0->f_331 = func_183(iVar0, iVar2, 0);
		}
		Var3.f_16 = func_184(uParam0->f_331);
		func_185(uParam0->f_287.f_1, Var3);
		set_bit(&(uParam0->f_305), 10);
	}
}

void func_76(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
			{
				if (func_57() != 1)
				{
				}
				else
				{
					Jump @90; //curOff = 58
					if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
					{
						if (func_57() != 2)
						{
						}
						else if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 1))
						{
						}
						else if (!_is_anim_scene_started(&(uParam0->f_8[iVar0]), false))
						{
							func_186(uParam0, iVar0);
							start_anim_scene(&(uParam0->f_8[iVar0]));
							return;
						}
						else
						{
							bVar1 = true;
							if (is_bit_set(uParam0->f_305, 15))
							{
								func_91(uParam0, 0);
							}
						}
						iVar0++;
						if (bVar1)
						{
							set_bit(&(uParam0->f_305), 2);
						}
					}
				}
			}
		}
	}
}

void func_77(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	func_187();
	vVar0 = { func_188(*uParam0) };
	if (func_189(vVar0))
	{
		func_190(vVar0, 0);
	}
}

void func_78(int iParam0)
{
	func_191(1);
}

void func_79(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!func_133(uParam0->f_332))
		{
			if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 9))
			{
				iVar1 = get_interior_at_coords(uParam0->f_332);
				if (is_valid_interior(iVar1))
				{
					_0x513f8aa5bf2f17cf(uParam0->f_332, 20f, 0);
					pin_interior_in_memory(iVar1);
					set_bit(&(uParam0->f_8[iVar0]->f_1), 9);
				}
			}
		}
		iVar0++;
	}
}

void func_80(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (is_bit_set(uParam0->f_305, 7))
		{
			if (6 == *uParam0)
			{
				func_192(uParam0, iVar0);
			}
			else
			{
				func_193(uParam0, iVar0);
			}
			func_194(uParam0);
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	iVar1 = 0;
	Var6 = -1;
	Var6.f_4.f_7 = -142743235;
	Var6.f_4.f_16 = -1;
	if (!func_44(*uParam0, &uVar0, &iVar1))
	{
		return;
	}
	if (uParam0->f_287.f_1 == -1)
	{
		return;
	}
	if (!is_bit_set(uParam0->f_305, 10))
	{
		return;
	}
	iVar27 = func_195(&(uParam0->f_287));
	switch (iVar27)
	{
		case 1:
		case 5:
			break;
		case 2:
		case 4:
			uParam0->f_287.f_1 = -1;
			break;
		case 3:
			if (uParam0->f_331 != 0 && func_196(uParam0->f_287.f_1, &uVar2))
			{
				func_197(uParam0->f_287.f_1, &Var6);
				_0x621d719c4836292b(&uVar2, func_198(uParam0->f_331), uParam0->f_331, Var6.f_4.f_16, uVar0, -1571441951);
			}
			uParam0->f_287.f_1 = -1;
			uParam0->f_331 = 0;
			func_199(1);
			break;
	}
}

void func_82(var uParam0)
{
	func_200(uParam0);
	func_201(uParam0);
	func_83(uParam0);
	set_bit(&(uParam0->f_305), 3);
}

void func_83(var uParam0)
{
	if (*uParam0 != 5)
	{
		return;
	}
	if (is_bit_set(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_202(38, &iVar0))
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	func_203(func_131(), 1);
	set_entity_visible(iVar0, false);
	set_bit(&(uParam0->f_305), 13);
}

void func_84(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_204(20f);
		}
	}
	Global_1071686->f_9 = Global_1296859->f_21;
	if (bParam0)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (network_has_control_of_entity(iVar1))
			{
				set_ped_reset_flag(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_205())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_206(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

bool func_85(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
			{
				switch (func_57())
				{
					case 2:
						Jump @306; //curOff = 69
						Jump @79; //curOff = 72
						return false;
					}
					else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
					{
						switch (func_57())
						{
							case 1:
								Jump @306; //curOff = 122
								Jump @132; //curOff = 125
								return false;
							}
							if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 1))
							{
							}
							else if (_is_anim_scene_started(&(uParam0->f_8[iVar0]), false))
							{
								if (!is_screen_fading_out() && !is_screen_faded_out())
								{
									if (is_bit_set(uParam0->f_305, 14))
									{
										if (!has_anim_event_fired(&(uParam0->f_229[iVar0]->f_1[0]), get_hash_key("NotFinalPlaylist")) && func_207(uParam0, iVar0))
										{
											fVar1 = _get_anim_scene_duration(&(uParam0->f_8[iVar0]));
											fVar2 = _get_anim_scene_time(&(uParam0->f_8[iVar0]));
											fVar3 = (fVar1 - fVar2);
											if (fVar3 < 1f)
											{
												do_screen_fade_out(500);
											}
										}
									}
								}
							}
							else
							{
								func_208(uParam0);
								return true;
							}
						}
						iVar0++;
					}
					return false;
				}

bool func_86(var uParam0)
{
	if (is_bit_set(uParam0->f_305, 12))
	{
		return false;
	}
	if (!func_209(&(uParam0->f_320)))
	{
		func_210(&(uParam0->f_320), 0);
		return false;
	}
	else if (func_211(&(uParam0->f_320)) < 5000)
	{
		return false;
	}
	if (func_151(*uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!network_is_player_active(&(Global_1296859->f_154[iVar1])))
			{
			}
			else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar1])))
			{
			}
			else
			{
				iVar3 = &Global_1296859->f_154[iVar1];
				if (iVar3 == Global_1296859->f_16 && (*Global_1056141)[iVar3]->f_41.f_1[*uParam0]->f_15)
				{
					bVar0 = true;
				}
				if (&(*Global_1056141)[iVar3]->f_41.f_1[*uParam0] == 3 || (*Global_1056141)[iVar3]->f_41.f_1[*uParam0]->f_15)
				{
					if ((*Global_1056141)[iVar3]->f_41.f_1[*uParam0]->f_14)
					{
						iVar4++;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar2 = 1;
		bVar0 = (*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_15;
	}
	sVar5 = "VOTE_SKIP_CONTEXT";
	if (iVar2 == 1)
	{
		sVar5 = "VOTE_SKIP_CONTEXT_SOLO";
	}
	if (!func_89(uParam0->f_319))
	{
		uParam0->f_319 = func_212(sVar5, -842734359, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		func_213(uParam0->f_319, 6, 1);
		func_214(uParam0->f_319, 19, 1, 1);
		if (iVar2 > 1)
		{
			func_215(uParam0->f_319, sVar5, iVar4, iVar2, 1);
		}
		if (iVar4 == 0)
		{
			func_214(uParam0->f_319, 21, 1, 1);
		}
		func_216(uParam0->f_319, 1, 1, 1);
	}
	else
	{
		if (iVar2 > 1)
		{
			if (bVar0)
			{
				func_215(uParam0->f_319, sVar5, iVar2, iVar2, 1);
			}
			else
			{
				func_215(uParam0->f_319, sVar5, iVar4, iVar2, 1);
			}
		}
		if ((!uParam0->f_318 && iVar4 > 0) && !(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_14)
		{
			func_90(&(uParam0->f_319), 1, 1);
			uParam0->f_318 = 1;
		}
		if (func_217(uParam0->f_319, 1))
		{
			(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_14 = 1;
			func_214(uParam0->f_319, 21, 0, 1);
			func_216(uParam0->f_319, 0, 1, 1);
			if (!func_151(*uParam0))
			{
				iVar4 = iVar2;
				bVar0 = true;
			}
		}
	}
	if (iVar4 == iVar2 && !(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_15)
	{
		(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_15 = 1;
	}
	if (bVar0)
	{
		if (!is_screen_faded_out() && !is_screen_fading_out())
		{
			do_screen_fade_out(500);
		}
		else if (is_screen_faded_out())
		{
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (_is_anim_scene_started(&(uParam0->f_8[iVar7]), false))
				{
					abort_anim_scene(&(uParam0->f_8[iVar7]), true);
					bVar6 = true;
				}
				iVar7++;
			}
		}
	}
	return (bVar0 && bVar6);
}

bool func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -873.1006f, -1261.776f, 42.6244f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.2726f, -1253.967f, 42.6373f };
							uParam1->f_6 = 83.2f;
							break;
						case 1:
							uParam1->f_3 = { -875.3077f, -1258.834f, 42.5703f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.0361f, -1251.312f, 42.6475f };
							uParam1->f_6 = 83.2f;
							break;
						case 2:
							uParam1->f_3 = { -870.6182f, -1259.352f, 42.572f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.5291f, -1246.509f, 42.677f };
							uParam1->f_6 = 83.2f;
							break;
						case 3:
							uParam1->f_3 = { -878.0989f, -1256.599f, 42.6036f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.4508f, -1243.889f, 42.6845f };
							uParam1->f_6 = 83.2f;
							break;
						case 4:
							uParam1->f_3 = { -872.9756f, -1257.088f, 42.5735f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.7613f, -1256.609f, 42.6236f };
							uParam1->f_6 = 83.2f;
							break;
						case 5:
							uParam1->f_3 = { -867.9123f, -1257.62f, 42.5442f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.1403f, -1240.715f, 42.7038f };
							uParam1->f_6 = 83.2f;
							break;
						case 6:
							uParam1->f_3 = { -872.8755f, -1254.01f, 42.5223f };
							uParam1->f_7 = 0f;
							*uParam1 = { -892.9855f, -1259.29f, 42.5953f };
							uParam1->f_6 = 52.8f;
							break;
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -852.5473f, -1247.14f, 42.3693f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -843.9141f, -1242.206f, 42.6034f };
							uParam1->f_6 = 176.8f;
							break;
						case 1:
							uParam1->f_3 = { -855.9294f, -1243.9f, 42.3176f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -841.25f, -1242.694f, 42.5649f };
							uParam1->f_6 = 176.8f;
							break;
						case 2:
							uParam1->f_3 = { -852.6059f, -1243.872f, 42.439f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -838.6961f, -1242.762f, 42.5183f };
							uParam1->f_6 = 176.8f;
							break;
						case 3:
							uParam1->f_3 = { -848.9722f, -1243.993f, 42.5525f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -835.7775f, -1243.111f, 42.5323f };
							uParam1->f_6 = 176.8f;
							break;
						case 4:
							uParam1->f_3 = { -854.2532f, -1241.536f, 42.393f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -832.4411f, -1242.565f, 42.5731f };
							uParam1->f_6 = 176.8f;
							break;
						case 5:
							uParam1->f_3 = { -850.7334f, -1241.698f, 42.5441f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -826.2964f, -1242.557f, 42.5382f };
							uParam1->f_6 = 176.8f;
							break;
						case 6:
							uParam1->f_3 = { -852.285f, -1239.152f, 42.5256f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -820.7101f, -1242.816f, 42.5536f };
							uParam1->f_6 = 176.8f;
							break;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -843.3099f, -1268.237f, 42.6019f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -837.5016f, -1278.386f, 42.553f };
							uParam1->f_6 = 179.6f;
							break;
						case 1:
							uParam1->f_3 = { -843.525f, -1264.899f, 42.6091f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -835.0971f, -1278.267f, 42.5779f };
							uParam1->f_6 = 179.6f;
							break;
						case 2:
							uParam1->f_3 = { -843.2772f, -1272.027f, 42.5937f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.6918f, -1278.378f, 42.5896f };
							uParam1->f_6 = 179.6f;
							break;
						case 3:
							uParam1->f_3 = { -840.6252f, -1266.123f, 42.5251f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -830.1432f, -1278.289f, 42.602f };
							uParam1->f_6 = 179.6f;
							break;
						case 4:
							uParam1->f_3 = { -840.4869f, -1269.868f, 42.4709f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -827.615f, -1278.281f, 42.612f };
							uParam1->f_6 = 179.6f;
							break;
						case 5:
							uParam1->f_3 = { -838.3458f, -1268.142f, 42.5456f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.3187f, -1270.027f, 42.5925f };
							uParam1->f_6 = 266.8f;
							break;
						case 6:
							uParam1->f_3 = { -838.4648f, -1264.728f, 42.5524f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.2508f, -1267.462f, 42.6008f };
							uParam1->f_6 = 266.8f;
							break;
					}
					break;
			}
			return true;
		case 3:
			switch (iParam2)
			{
				case 0:
					uParam1->f_3 = { 1342.391f, -1307.51f, 75.5794f };
					uParam1->f_7 = 67.1828f;
					*uParam1 = { 1339.217f, -1305.165f, 75.5944f };
					uParam1->f_6 = 336.17f;
					break;
				case 1:
					uParam1->f_3 = { 1337.586f, -1307.428f, 75.5462f };
					uParam1->f_7 = 66.7219f;
					*uParam1 = { 1313.53f, -1306.432f, 75.3049f };
					uParam1->f_6 = 133.7325f;
					break;
				case 2:
					uParam1->f_3 = { 1323.949f, -1299.458f, 75.2824f };
					uParam1->f_7 = 45.8223f;
					*uParam1 = { 1320.751f, -1286.52f, 75.348f };
					uParam1->f_6 = 265.4273f;
					break;
			}
			return true;
		case 4:
			vVar0 = { func_136(&Global_1296859) };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -326.39f, 789.19f, 115.667f };
							uParam1->f_7 = 284.1014f;
							*uParam1 = { -321.1662f, 790.267f, 116.0272f };
							uParam1->f_6 = 11.602f;
							break;
						case 1:
							uParam1->f_3 = { -323.692f, 782.932f, 115.776f };
							uParam1->f_7 = 281.4508f;
							*uParam1 = { -312.8937f, 784.9355f, 116.5868f };
							uParam1->f_6 = -168.4326f;
							break;
						case 2:
							uParam1->f_3 = { -314.569f, 792.093f, 116.573f };
							uParam1->f_7 = 282.0273f;
							*uParam1 = { -303.8615f, 793.8496f, 117.1205f };
							uParam1->f_6 = 11.602f;
							break;
					}
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -3678.909f, -2616.646f, -15.0037f };
							uParam1->f_7 = 91.0549f;
							*uParam1 = { -3682.761f, -2615.857f, -15.0603f };
							uParam1->f_6 = 173.9262f;
							break;
						case 1:
							uParam1->f_3 = { -3691.773f, -2608.01f, -14.7773f };
							uParam1->f_7 = 86.4678f;
							*uParam1 = { -3695.737f, -2608.751f, -14.7323f };
							uParam1->f_6 = 27.6929f;
							break;
						case 2:
							uParam1->f_3 = { -3689.26f, -2608.184f, -14.9935f };
							uParam1->f_7 = 90.7284f;
							*uParam1 = { -3698.199f, -2608.378f, -14.7322f };
							uParam1->f_6 = 2.1578f;
							break;
					}
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { 2815.196f, -1310.15f, 45.624f };
							uParam1->f_7 = 141.0373f;
							*uParam1 = { 2809.395f, -1316.526f, 45.504f };
							uParam1->f_6 = 310.8568f;
							break;
						case 1:
							uParam1->f_3 = { 2817.729f, -1308.707f, 45.558f };
							uParam1->f_7 = 80.7875f;
							*uParam1 = { 2807.212f, -1303.46f, 45.607f };
							uParam1->f_6 = 126.4258f;
							break;
						case 2:
							uParam1->f_3 = { 2806.232f, -1322.305f, 45.446f };
							uParam1->f_7 = 107.4473f;
							*uParam1 = { 2798.7f, -1312.359f, 45.412f };
							uParam1->f_6 = 127.8044f;
							break;
					}
					break;
			}
			return true;
		case 5:
			if (iParam2 < 0 || iParam2 > 2)
			{
				return false;
			}
			iVar3 = func_131();
			if (iVar3 == -1)
			{
				return false;
			}
			Var4 = 3;
			Var4.f_10 = 3;
			Var4.f_14 = 3;
			Var4.f_24 = 3;
			if (!func_218(iVar3, &Var4))
			{
				return false;
			}
			uParam1->f_3 = { *Var4[iParam2] };
			uParam1->f_7 = &Var4.f_10[iParam2];
			*uParam1 = { *Var4.f_14[iParam2] };
			uParam1->f_6 = &Var4.f_24[iParam2];
			return true;
		case 6:
			uParam1->f_3 = { 1442.626f, 369.0727f, 88.8836f };
			uParam1->f_7 = 69.9518f;
			return true;
		case 7:
			uParam1->f_3 = { -1715.891f, -309.4491f, 178.5556f };
			uParam1->f_7 = 150.5676f;
			return true;
		case 8:
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_7 = 0f;
			return false;
		default:
			break;
	}
	return false;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_90(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_89(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_219(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_220(iVar0);
	*uParam0 = 0;
}

void func_91(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		do_screen_fade_in(1000);
	}
	else
	{
		do_screen_fade_out(1000);
	}
}

void func_92(var uParam0)
{
	(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_1 = -1;
	uParam0->f_307 = -1;
}

void func_93()
{
	Global_1904651->f_8685 = 1;
}

bool func_94(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return false;
	}
	if (uParam0->f_307 != -1)
	{
		if (absi((get_cloud_time_as_int() - uParam0->f_307)) >= 2)
		{
			return true;
		}
		return false;
	}
	iVar12 = Global_1296859->f_10;
	bVar13 = Global_1296859->f_16 == iVar12;
	if (is_ped_on_mount(Global_1296859->f_8))
	{
		clear_ped_tasks_immediately(Global_1296859->f_8, true, true);
	}
	if (!func_87(*uParam0, &Var0, iVar9, iVar11))
	{
		return true;
	}
	if (!func_151(*uParam0))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		iVar11 = 1;
	}
	else
	{
		iVar9 = -1;
	}
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else
		{
			iVar10 = &Global_1296859->f_154[iVar8];
			if (bVar13)
			{
				if (iVar12 != iVar10)
				{
					if ((*Global_1056141)[iVar12]->f_41.f_1[*uParam0]->f_1 == -1)
					{
						if (_0x424b17a7dc5c90bc(&(Global_1296859->f_154[iVar8])))
						{
							if ((*Global_1056141)[iVar10]->f_41.f_1[*uParam0]->f_1 == iVar9)
							{
								iVar9++;
							}
						}
					}
					if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
					{
					}
					else
					{
						(*Global_1056141)[iVar12]->f_41.f_1[*uParam0]->f_3[iVar11] = &Global_1296859->f_154[iVar8];
						iVar11++;
						Jump @488; //curOff = 339
						if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
						{
						}
						else if (Global_1296859->f_16 == iVar10 && (*Global_1056141)[iVar10]->f_41.f_1[*uParam0]->f_1 != -1)
						{
							iVar15 = 0;
							while (iVar15 < 7)
							{
								if (&(*Global_1056141)[iVar10]->f_41.f_1[*uParam0]->f_3[iVar15] == Global_1296859->f_10)
								{
									iVar9 = (*Global_1056141)[iVar10]->f_41.f_1[*uParam0]->f_1;
									iVar11 = iVar15;
								}
								else
								{
									iVar15++;
								}
							}
						}
					}
					iVar8++;
					if (bVar13)
					{
						iVar11 = 0;
					}
					if (iVar9 >= 0 && iVar9 <= 2)
					{
						iVar16 = create_itemset(true);
						while (!bVar14)
						{
							if (!func_87(*uParam0, &Var0, iVar9, iVar11))
							{
								func_221(1, 0);
								func_148(Global_1296859->f_17, 0f, -1082130432, -1082130432, 1, 1, 1);
								bVar14 = true;
							}
							else
							{
								if ((does_entity_exist(uParam0->f_323) && _is_mount_seat_free(uParam0->f_323, -1)) && _is_mount_seat_free(uParam0->f_323, 0))
								{
									if (_0x59b57c4b06531e1e(Var0, 2f, iVar16, 2) == 0)
									{
										set_entity_coords(uParam0->f_323, Var0, true, false, true, true);
										set_entity_heading(uParam0->f_323, Var0.f_6);
									}
								}
								if (_0x59b57c4b06531e1e(Var0.f_3, 2f, iVar16, 2) == 0)
								{
									bVar14 = true;
									set_entity_coords(Global_1296859->f_8, Var0.f_3, true, false, true, true);
									set_entity_heading(Global_1296859->f_8, Var0.f_7);
									set_gameplay_cam_relative_heading(0f, 1f);
									if (iVar9 == 0 && *uParam0 != 7)
									{
										simulate_player_input_gait(Global_1296859->f_10, 1f, 2000, 0f, true, false);
									}
									if (bVar13)
									{
										(*Global_1056141)[iVar12]->f_41.f_1[*uParam0]->f_1 = iVar9;
									}
								}
								else
								{
									func_221(1, 0);
									func_148(Global_1296859->f_17, 0f, -1082130432, -1082130432, 1, 1, 1);
									bVar14 = true;
								}
							}
						}
					}
					else if (iVar9 > 2)
					{
						func_221(1, 0);
						func_148(Global_1296859->f_17, 0f, -1082130432, -1082130432, 1, 1, 1);
						bVar14 = true;
					}
					if (uParam0->f_307 == -1)
					{
						if (bVar14)
						{
							uParam0->f_307 = get_cloud_time_as_int();
						}
					}
					return false;
				}
			}
		}
	}
}

void func_95(var uParam0)
{
	uParam0->f_307 = -1;
}

Vector3 func_96(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "INVALID_HANDLE", 24);
	switch (iParam0)
	{
		case 1:
		default:
			break;
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
	}
	return cVar0;
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885656->f_1682)
		{
			Global_1885656->f_1682 = 1;
		}
	}
	else if (Global_1885656->f_1682)
	{
		Global_1885656->f_1682 = 0;
	}
}

bool func_98(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_45(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_222(iParam0))
	{
		iVar1 = func_223(3, iParam0);
		bVar2 = false;
	}
	else
	{
		iVar1 = func_223(1, iParam0);
		bVar2 = true;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	if (func_225(func_224(iParam0)))
	{
		switch (func_226(func_224(iParam0), 0))
		{
			case 1:
			default:
				return false;
				return false;
			case 2:
			}
			if (_unlock_is_unlocked(iVar0) && _unlock_is_visible(iVar0))
			{
				if (_0xfbe782b3165ac8ec(iVar1))
				{
					return false;
				}
				if (!func_225(func_224(iParam0)))
				{
					func_228(iParam0, func_227(iVar1, 0));
				}
				return false;
			}
			if (!_unlock_is_visible(iVar0) && _unlock_is_unlocked(iVar0))
			{
				if (bVar2)
				{
					if (!_0xfbe782b3165ac8ec(iVar1))
					{
						return true;
					}
				}
				func_229(iParam0);
				func_228(iParam0, -1);
				func_230();
				return true;
			}
			return false;
		}

void func_99(var uParam0)
{
	iVar0 = 0;
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!func_133(uParam0->f_332))
		{
			if (is_bit_set(uParam0->f_8[iVar0]->f_1, 9))
			{
				iVar1 = get_interior_at_coords(uParam0->f_332);
				if (is_valid_interior(iVar1))
				{
					unpin_interior(iVar1);
					clear_bit(&(uParam0->f_8[iVar0]->f_1), 9);
				}
			}
		}
		iVar0++;
	}
}

void func_100(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if (!func_231(iParam0))
	{
		Global_1293165->f_20[iParam0]->f_7 = 0;
		return;
	}
	Global_1293165->f_20[iParam0]->f_7 = iParam1;
}

void func_101(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	Global_1293165->f_120[iParam0]->f_4 = iParam1;
}

void func_102(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_327)
			{
				iVar0 = 847375033;
			}
			else
			{
				iVar0 = 936352856;
			}
			func_233(_create_var_string(0, iVar0, func_232(2)), 20000, 0, 0, 0, 1);
			break;
	}
}

void func_103(var uParam0)
{
	func_199(64);
	switch (*uParam0)
	{
		case 5:
			func_234(1);
			break;
		case 6:
			Global_1298378->f_44.f_1 = 1;
			if (func_235(player_id(), 1) == -1)
			{
				func_9(879, 0);
			}
			break;
		case 7:
			if (!func_236(273608212, 1))
			{
				func_9(911, 0);
			}
			func_237(-1654990742);
			break;
		case 8:
			func_203(149, 0);
			func_203(150, 0);
			func_203(151, 0);
			break;
	}
}

bool func_104(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!does_entity_exist(uParam0->f_89[iVar0]->f_1))
		{
		}
		else
		{
			delete_ped(&(uParam0->f_89[iVar0]->f_1));
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_105(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!_does_anim_scene_exist(&(uParam0->f_8[iVar0])))
		{
		}
		else
		{
			_delete_anim_scene(&(uParam0->f_8[iVar0]));
		}
		iVar0++;
	}
	return true;
}

void func_106(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!does_entity_exist(&(uParam0->f_229[iVar0]->f_1[iVar1])))
			{
			}
			else
			{
				set_entity_collision(&(uParam0->f_229[iVar0]->f_1[iVar1]), true, false);
				delete_ped(uParam0->f_229[iVar0]->f_1[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_107(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_150[iVar0]->f_8)
		{
			if (!func_133(uParam0->f_150[iVar0]->f_5))
			{
				vVar1 = { uParam0->f_150[iVar0]->f_5 };
			}
			else
			{
				vVar1 = { _get_object_offset_from_coords(uParam0->f_8[0]->f_33, uParam0->f_8[0]->f_36.f_2, uParam0->f_150[iVar0]->f_2) };
			}
			remove_model_hide(vVar1, 1f, uParam0->f_150[iVar0]->f_1, 0);
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	Global_1048585 = iParam0;
}

int func_109()
{
	if (!_is_app_active(29649618) && !_is_app_running(29649618))
	{
		return 0;
	}
	_close_app_by_hash(29649618);
	return 1;
}

bool func_110()
{
	return Global_1896738->f_382;
}

void func_111()
{
	if (Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 0;
}

bool func_112()
{
	return (func_238() || func_239());
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085->f_9 = 0f;
	}
	Global_1940085->f_8 = 0f;
	Global_1940085->f_15.f_1 = 0f;
	Global_1940085->f_15 = 0f;
	Global_1940085->f_15.f_9 = 0f;
	Global_1940085->f_15.f_8 = 0f;
	Global_1940085->f_15.f_10 = 0;
	if (does_entity_exist(Global_34))
	{
		_0x06d26a96ca1bca75(Global_34, 10, 0f, 0);
		set_ped_is_drunk(Global_34, false);
		_0x406ccf555b04fad3(Global_34, 0, 0f);
	}
	func_240(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_241();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_114()
{
	Global_1940085->f_28 = 0;
	Global_1940085->f_28.f_1 = 0;
	Global_1940085->f_28.f_2 = 0;
	Global_1940085->f_28.f_3 = 0;
	Global_1940085->f_28.f_4 = 0;
	Global_1940085->f_28.f_8 = 0;
}

void func_115()
{
	iVar0 = 0;
	while (iVar0 < Global_1146212->f_47689.f_1.f_42)
	{
		if (!func_242(&(Global_1146212->f_47689.f_1[iVar0])))
		{
		}
		iVar0++;
	}
	Global_1146212->f_47689.f_1.f_42 = 0;
}

void func_116(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_117(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_118(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

void func_119(int iParam0)
{
	if (_0xaaded99a6b268a27() != iParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0] = 15;
		_0x63246a24f5747510(iParam0, &Var0);
	}
}

void func_120(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_243(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_244(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_121()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

bool func_123(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_124(int iParam0)
{
	if (func_126(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_125(int iParam0)
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

bool func_126(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_127(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_128()
{
	if (!func_205())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_129(int iParam0)
{
	iVar0 = func_245(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_246(Global_1139381->f_11.f_3222.f_320[iVar0], 1);
}

int func_130()
{
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	iVar1 = func_247(iVar0);
	if (iVar1 == 0)
	{
		return 41788943;
	}
	iVar2 = func_248(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return 41788943;
	}
	iVar3 = func_249(iVar2);
	if (iVar3 == 0)
	{
		return 41788943;
	}
	return iVar3;
}

int func_131()
{
	if (_0x3aeabae3f3c7600c() && _0xa2e2bea4e83f6270(-92244418) > 0)
	{
		_0xb5e2eda2135e0fa1(-92244418, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_250(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_132(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

bool func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam2 = { func_251() };
	fVar2 = 0f;
	switch (iParam0)
	{
		case 4:
		default:
			return false;
			*uParam1 = { 0f, 0f, 0f };
			vVar3 = { func_136(&Global_1296859) };
			switch (vVar3.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					*uParam1 = { -319.3981f, 792.6552f, 116.3929f };
					*uParam2 = { 0f, 0f, -60f };
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = { -3677.246f, -2618.845f, -14.8654f };
					*uParam2 = { 0f, 0f, -119.15f };
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = { 2820.121f, -1310.931f, 45.7346f };
					*uParam2 = { 0f, 0f, -72.1f };
					break;
			}
			return true;
		case 5:
			iVar0 = func_131();
			if (iVar0 == -1)
			{
				return false;
			}
			if (!func_252(iVar0, uParam1, uParam2))
			{
				return false;
			}
			if (!bParam3)
			{
				return true;
			}
			iVar1 = func_253(1463940690, *uParam1, 5f);
			if (!does_entity_exist(iVar1))
			{
				*uParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return false;
			}
			*uParam1 = { get_entity_coords(iVar1, true, false) };
			*uParam2 = { get_entity_rotation(iVar1, 2) };
			return true;
		case 8:
			*uParam1 = { Global_1051439->f_3745[39]->f_1 };
			iVar0 = &Global_1051439->f_3745[39];
			if (!bParam3)
			{
				return true;
			}
			if (150 == iVar0)
			{
				*uParam1 = { -1576.556f, 488.0926f, 113.9523f };
				fVar2 = 139.99f;
			}
			else if (151 == iVar0)
			{
				*uParam1 = { 1964.966f, -529.8469f, 40.9596f };
				fVar2 = (139.99f + 90f);
			}
			else
			{
				*uParam1 = { -2182.447f, -2132.664f, 73.1032f };
				fVar2 = 0f;
			}
			*uParam2 = { 0f, 0f, fVar2 };
			return true;
	}
}

bool func_135(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_136(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_254()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

int func_137(var uParam0)
{
	return uParam0->f_1.f_2;
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_1.f_2 = iParam1;
}

bool func_139(var uParam0)
{
	iVar0 = 0;
	bVar1 = true;
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_entity_exist(uParam0->f_89[iVar0]->f_1))
		{
		}
		else
		{
			if (&uParam0->f_89[iVar0] != 0 && is_model_valid(&(uParam0->f_89[iVar0])))
			{
				request_model(&(uParam0->f_89[iVar0]), false);
				if (!has_model_loaded(&(uParam0->f_89[iVar0])))
				{
					bVar1 = false;
				}
				else
				{
					Jump @123; //curOff = 117
					Jump @942; //curOff = 120
					uParam0->f_89[iVar0]->f_1 = create_ped(&(uParam0->f_89[iVar0]), uParam0->f_89[iVar0]->f_2, uParam0->f_89[iVar0]->f_5.f_2, false, false, false, false);
					if (!does_entity_exist(uParam0->f_89[iVar0]->f_1) || is_entity_dead(uParam0->f_89[iVar0]->f_1))
					{
						bVar1 = false;
					}
					else
					{
						if (uParam0->f_89[iVar0]->f_8 > -1 && uParam0->f_89[iVar0]->f_8 < _0x10c70a515bc03707(uParam0->f_89[iVar0]->f_1))
						{
							_set_ped_outfit_preset(uParam0->f_89[iVar0]->f_1, uParam0->f_89[iVar0]->f_8, 0);
						}
						else if (uParam0->f_89[iVar0]->f_8 != -1 && _does_metaped_outfit_exist_for_ped_model(uParam0->f_89[iVar0]->f_8, &(uParam0->f_89[iVar0])))
						{
							_0x0bfa1bd465cdfefd(uParam0->f_89[iVar0]->f_1);
							_set_ped_body_component(uParam0->f_89[iVar0]->f_1, uParam0->f_89[iVar0]->f_8);
							_update_ped_variation(uParam0->f_89[iVar0]->f_1, false, true, true, true, false);
						}
						else if (uParam0->f_89[iVar0]->f_8 == -1)
						{
							_set_random_outfit_variation(uParam0->f_89[iVar0]->f_1, true);
						}
						if (uParam0->f_89[iVar0]->f_9 != 0)
						{
							_give_weapon_to_ped_2(uParam0->f_89[iVar0]->f_1, uParam0->f_89[iVar0]->f_9, 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						}
						func_255(uParam0->f_89[iVar0]->f_1, uParam0->f_89[iVar0]->f_2);
						set_entity_can_be_damaged(uParam0->f_89[iVar0]->f_1, false);
						set_entity_visible(uParam0->f_89[iVar0]->f_1, false);
						set_blocking_of_non_temporary_events(uParam0->f_89[iVar0]->f_1, true);
						set_ped_can_ragdoll_from_player_impact(uParam0->f_89[iVar0]->f_1, false);
						set_ped_can_ragdoll(uParam0->f_89[iVar0]->f_1, false);
						freeze_entity_position(uParam0->f_89[iVar0]->f_1, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 277, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 340, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 137, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 17, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 77, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 77, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 24, false);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 72, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 107, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 150, false);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 47, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 127, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 130, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 315, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 297, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 422, true);
						set_ped_config_flag(uParam0->f_89[iVar0]->f_1, 148, true);
						_0xae6004120c18df97(uParam0->f_89[iVar0]->f_1, 0, 0);
						set_entity_proofs(uParam0->f_89[iVar0]->f_1, 127, false);
						func_256(uParam0->f_89[iVar0], 2);
					}
				}
				iVar0++;
				if (bVar1)
				{
					if (!is_bit_set(uParam0->f_305, 1))
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (&uParam0->f_89[iVar0] != 0 && is_model_valid(&(uParam0->f_89[iVar0])))
							{
								if (has_model_loaded(&(uParam0->f_89[iVar0])))
								{
									set_model_as_no_longer_needed(&(uParam0->f_89[iVar0]));
								}
							}
							iVar0++;
						}
						set_bit(&(uParam0->f_305), 1);
					}
					return true;
				}
				return false;
			}
		}
	}
}

bool func_140(var uParam0)
{
	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (is_bit_set(uParam0->f_8[iVar0]->f_1, 3))
			{
				switch (func_57())
				{
					case 2:
						Jump @673; //curOff = 75
						Jump @85; //curOff = 78
						return false;
					}
					else if (is_bit_set(uParam0->f_8[iVar0]->f_1, 4))
					{
						switch (func_57())
						{
							case 1:
								Jump @673; //curOff = 128
								Jump @138; //curOff = 131
								return false;
							}
							if (is_bit_set(uParam0->f_8[iVar0]->f_1, 1))
							{
								Jump @673; //curOff = 156
							}
							else
							{
								iVar1 = 0;
							}
							if (!_0x375f5870a7b8bec1(uParam0->f_8[iVar0]->f_11[1]))
							{
								iVar2 = func_257();
							}
							if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 0))
							{
								if (_does_anim_scene_exist(&(uParam0->f_8[iVar0])))
								{
								}
								else if (_0x375f5870a7b8bec1(&(uParam0->f_8[iVar0]->f_3)))
								{
									set_bit(&(uParam0->f_8[iVar0]->f_1), 1);
								}
								else
								{
									uParam0->f_8[iVar0] = _create_anim_scene(&(uParam0->f_8[iVar0]->f_3), uParam0->f_8[iVar0]->f_2, uParam0->f_8[iVar0]->f_11[iVar2], false, false);
									if (is_bit_set(uParam0->f_305, 18))
									{
										uParam0->f_316 = _create_anim_scene(&(uParam0->f_308), 256, 0, false, true);
									}
									if (!_does_anim_scene_exist(&(uParam0->f_8[iVar0])))
									{
									}
									else
									{
										load_anim_scene(&(uParam0->f_8[iVar0]));
										if (is_bit_set(uParam0->f_305, 18))
										{
											load_anim_scene(uParam0->f_316);
										}
										set_bit(&(uParam0->f_8[iVar0]->f_1), 0);
										Jump @673; //curOff = 415
										if (!is_bit_set(uParam0->f_8[iVar0]->f_1, 1))
										{
											if (!_does_anim_scene_exist(&(uParam0->f_8[iVar0])))
											{
											}
											else if (!_is_anim_scene_metadata_loaded(&(uParam0->f_8[iVar0]), false))
											{
											}
											else if (!_is_anim_scene_loaded(&(uParam0->f_8[iVar0]), false, false))
											{
											}
											else
											{
												if (*uParam0 != 4)
												{
													if (*uParam0 == 5)
													{
														if (func_133(uParam0->f_8[iVar0]->f_33))
														{
														}
														else
														{
															set_anim_scene_origin(&(uParam0->f_8[iVar0]), uParam0->f_8[iVar0]->f_33, uParam0->f_8[iVar0]->f_36, 2);
															if (!is_string_null_or_empty(uParam0->f_8[iVar0]->f_11[iVar2]))
															{
																if (!_0x23e33cb9f4a3f547(&(uParam0->f_8[iVar0]), uParam0->f_8[iVar0]->f_11[iVar2]))
																{
																}
																else
																{
																	_set_anim_scene_playback_list_bool(&(uParam0->f_8[iVar0]), uParam0->f_8[iVar0]->f_11[iVar2], true);
																	set_bit(&(uParam0->f_8[iVar0]->f_1), 1);
																}
																iVar0++;
																return iVar1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}

void func_141(var uParam0)
{
	if (func_258(*uParam0, &iVar0, &cVar1))
	{
		set_anim_scene_int(&(uParam0->f_8[0]), &cVar1, iVar0, true);
	}
}

int func_142(var uParam0)
{
	return uParam0->f_284.f_1;
}

int func_143(var uParam0)
{
	return uParam0->f_284.f_2;
}

void func_144(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_1 != iParam1)
	{
		uParam0->f_284.f_1 = iParam1;
	}
}

void func_145(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_47(uParam0);
	uParam0->f_284 = func_259(&uParam1, cParam20, sParam21, 0, 0, 1);
}

int func_146()
{
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					_event_manager_pop_event(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		_event_manager_pop_event(iVar0);
	}
	return -1577439368;
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_260(68);
		Global_1102219->f_3804 = iParam0;
		Global_1102219->f_3805 = iParam1;
	}
	else
	{
		func_261(68);
	}
}

void func_148(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_262(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_263(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_149(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return Global_1100469[iParam0];
	}
	return 26;
}

void func_150(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_2 != iParam1)
	{
		uParam0->f_284.f_2 = iParam1;
	}
}

bool func_151(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_153(var uParam0)
{
	if (!func_264(uParam0))
	{
		return uParam0->f_1.f_6;
	}
	if (!_does_volume_exist(uParam0->f_297))
	{
		vVar0 = { func_265(uParam0) };
		uParam0->f_297 = _create_volume_sphere(uParam0->f_298, 0f, 0f, 0f, vVar0);
	}
	if (is_bit_set(uParam0->f_305, 16))
	{
		vVar4 = { _0x3e2a25b2416dd67e(uParam0->f_297) };
		if (func_266(uParam0->f_298, Global_35) < vVar4.x)
		{
			bVar3 = true;
		}
	}
	else if (is_entity_in_volume(Global_1296859->f_8, uParam0->f_297, true, 0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (!func_267(uParam0))
		{
			uParam0->f_1.f_6 = 1;
		}
		else
		{
			uParam0->f_1.f_6 = 0;
		}
	}
	else
	{
		uParam0->f_1.f_6 = 0;
	}
	return uParam0->f_1.f_6;
}

bool func_154()
{
	if (_is_ped_carrying(Global_1296859->f_8))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_1296859->f_8);
		bVar0 = true;
	}
	else if (func_268(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((does_entity_exist(iVar1) && is_entity_a_ped(iVar1)) && is_ped_a_player(get_ped_index_from_entity_index(iVar1)))
		{
			func_269(network_get_player_index_from_ped(get_ped_index_from_entity_index(iVar1)));
		}
		return false;
	}
	return true;
}

bool func_155(int iParam0)
{
	if (!func_132(iParam0))
	{
		return false;
	}
	return Global_1293165->f_20[iParam0]->f_7;
}

int func_156(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	if (!network_is_player_active(iParam1))
	{
		return -1;
	}
	return &((*Global_1056141)[iParam1]->f_41.f_1[iParam0]);
}

bool func_157(int iParam0)
{
	if (!func_132(iParam0))
	{
		return false;
	}
	if ((Global_1296859->f_16 < 32 && Global_1296859->f_16 > 0) && (*Global_1056141)[Global_1296859->f_16]->f_41.f_1[iParam0]->f_2 != -1)
	{
		iVar0 = absi((get_cloud_time_as_int() - (*Global_1056141)[Global_1296859->f_16]->f_41.f_1[iParam0]->f_2));
		if (iVar0 >= 30)
		{
			return true;
		}
	}
	return false;
}

void func_158(var uParam0, int iParam1)
{
	if (func_149(255) == 1)
	{
		if (func_142(uParam0) == 0 && func_143(uParam0) == 0)
		{
			func_150(uParam0, iParam1);
			func_144(uParam0, 1);
		}
	}
}

bool func_159()
{
	iVar0 = get_mount(Global_1296859->f_8);
	if (does_entity_exist(iVar0))
	{
		iVar1 = _0xffec4b0a1a3ed515(iVar0, -1);
		if (iVar1 == Global_1296859->f_8)
		{
			iVar1 = _0xffec4b0a1a3ed515(iVar0, 0);
		}
		if (does_entity_exist(iVar1) && is_ped_a_player(iVar1))
		{
			if (network_get_player_index_from_ped(iVar1) == Global_1296859->f_16)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_160(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_161(int iParam0, bool bParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if ((bParam1 && func_271(iParam0, 512)) || (!bParam1 && !func_271(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_272(iParam0, 512);
	}
	else
	{
		func_273(iParam0, 512);
	}
	if (func_274(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_162()
{
	return Global_1293332->f_12;
}

bool func_163(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

int func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_275(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

int func_165(var uParam0)
{
	return uParam0->f_1.f_3;
}

void func_166(var uParam0)
{
	if (!func_151(*uParam0))
	{
		_0x31010318ba9897ac(&uVar0, &Global_1296859);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_168(uParam0, iVar1))
			{
			}
			else
			{
				(*Global_1056141)[&Global_1296859]->f_41.f_1[*uParam0]->f_11[iVar1] = uVar0;
			}
			iVar1++;
		}
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	iVar5 = get_player_ped(int_to_playerindex(Global_1296859->f_16));
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_168(uParam0, iVar1))
		{
		}
		else
		{
			if (is_bit_set(uParam0->f_8[iVar1]->f_1, 3))
			{
				if (func_57() != 1)
				{
				}
				else
				{
					Jump @207; //curOff = 175
					if (is_bit_set(uParam0->f_8[iVar1]->f_1, 4))
					{
						if (func_57() != 2)
						{
						}
						else
						{
							iVar3 = 0;
							while (iVar3 < 32)
							{
								if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
								{
								}
								else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar3])))
								{
								}
								else
								{
									if (iVar2 >= 4)
									{
									}
									else
									{
										if (&Global_1296859->f_154[iVar3] != Global_1296859->f_10)
										{
											iVar6 = get_player_ped(&(Global_1296859->f_154[iVar3]));
											if (is_entity_dead(iVar6))
											{
											}
											else
											{
												fVar7 = vdist2(get_entity_coords(iVar6, true, false), get_entity_coords(iVar5, true, false));
												fVar8 = func_276(*uParam0, 0);
												if (fVar7 > (fVar8 * fVar8))
												{
												}
												else
												{
													iVar2++;
													_0x31010318ba9897ac(&uVar0, &(Global_1296859->f_154[iVar3]));
													(*Global_1056141)[Global_1296859->f_10]->f_41.f_1[*uParam0]->f_3[iVar4] = &Global_1296859->f_154[iVar3];
													iVar4++;
												}
											}
											iVar3++;
											iVar2 = 0;
											(*Global_1056141)[Global_1296859->f_16]->f_41.f_1[*uParam0]->f_11[iVar1] = uVar0;
											iVar1++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_167(var uParam0, int iParam1)
{
	uParam0->f_1.f_3 = iParam1;
}

bool func_168(var uParam0, int iParam1)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	return !_0x375f5870a7b8bec1(&(uParam0->f_8[iParam1]->f_3));
}

var func_169(int iParam0, int iParam1)
{
	if (iParam0 >= 9 || iParam0 <= 0)
	{
		return uVar0;
	}
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return uVar0;
	}
	if (Global_1296859->f_16 >= 32 || Global_1296859->f_16 < 0)
	{
		return uVar0;
	}
	if (!func_151(iParam0))
	{
		uVar0 = &(*Global_1056141)[&Global_1296859]->f_41.f_1[iParam0]->f_11[iParam1];
	}
	else
	{
		uVar0 = &(*Global_1056141)[Global_1296859->f_16]->f_41.f_1[iParam0]->f_11[iParam1];
	}
	return uVar0;
}

bool func_170(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 >= 2 || iParam2 < 0)
	{
		return false;
	}
	if (iParam3 >= 4 || iParam3 < 0)
	{
		return false;
	}
	iVar0 = get_player_ped(iParam1);
	iVar1 = clone_ped(iVar0, 0f, false, true);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	set_entity_collision(iVar1, false, false);
	set_entity_visible(iVar1, false);
	func_277(iVar0, iVar1);
	set_entity_coords(iVar1, uParam0->f_298, true, false, true, true);
	freeze_entity_position(iVar1, true);
	_0x7e8f9949b7aabbf0(iVar1, 1, 1);
	_hide_ped_weapons(iVar1, 2, true);
	if (is_bit_set(uParam0->f_305, 17))
	{
		_0x67e21acc5c0c970c(iVar1, 16, 0);
		_0x67e21acc5c0c970c(iVar1, 9, 0);
		_0x67e21acc5c0c970c(iVar1, 18, 0);
		_0x67e21acc5c0c970c(iVar1, 10, 0);
		_0x67e21acc5c0c970c(iVar1, 7, 0);
	}
	set_blocking_of_non_temporary_events(iVar1, true);
	vVar2 = { func_96(*uParam0, iParam3, is_ped_male(iVar1)) };
	uParam0->f_229[iParam2]->f_1[iParam3] = iVar1;
	uParam0->f_229[iParam2]->f_1[iParam3]->f_2.f_1 = { vVar2 };
	uParam0->f_229[iParam2]->f_1[iParam3]->f_2 = &uParam0->f_8[iParam2];
	return true;
}

bool func_171(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	if (!bParam3)
	{
		return does_entity_exist(&(uParam0->f_229[iParam1]->f_1[iParam2]));
	}
	else if (does_entity_exist(&(uParam0->f_229[iParam1]->f_1[iParam2])))
	{
		return !is_entity_dead(&(uParam0->f_229[iParam1]->f_1[iParam2]));
	}
	return false;
}

bool func_172(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	return _0xa0bc8faed8cfeb3c(&(uParam0->f_229[iParam1]->f_1[iParam2]));
}

bool func_173(var uParam0, int iParam1)
{
	if (uParam0->f_150[iParam1]->f_1 == 0)
	{
		return true;
	}
	if (does_entity_exist(&(uParam0->f_150[iParam1])))
	{
		return true;
	}
	if (!func_133(uParam0->f_150[iParam1]->f_5))
	{
		vVar0 = { uParam0->f_150[iParam1]->f_5 };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(uParam0->f_8[0]->f_33, uParam0->f_8[0]->f_36.f_2, uParam0->f_150[iParam1]->f_2) };
	}
	uParam0->f_150[iParam1] = func_253(uParam0->f_150[iParam1]->f_1, vVar0, 1f);
	if (uParam0->f_150[iParam1]->f_8)
	{
		create_model_hide(vVar0, 1f, uParam0->f_150[iParam1]->f_1, false);
	}
	return does_entity_exist(&(uParam0->f_150[iParam1]));
}

void func_174(var uParam0, int iParam1)
{
	func_278(uParam0, iParam1);
}

bool func_175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	bVar3 = is_ped_on_mount(iParam0);
	if (bVar3)
	{
		iVar2 = get_mount(iParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = is_ped_in_any_vehicle(iParam0, true);
		if (bVar4)
		{
			iVar1 = get_vehicle_ped_is_in(iParam0, true);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_279(*uParam1, 128))
	{
		if (!func_280(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_279(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_281(iVar2))
			{
				return false;
			}
			if (!func_280(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_282(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_279(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_283(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_174(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_279(*uParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return false;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_279(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_281(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_283(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_283(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_283(iParam2, 16384))
				{
					_display_hud_component(724769646);
				}
			}
		}
	}
	disable_control_action(0, -1879280170, false);
	if (bVar3)
	{
		if (is_entity_in_air(iVar2, 0))
		{
			return false;
		}
		if (func_279(*uParam1, 2336))
		{
			if (!func_281(iVar2))
			{
			}
			if (func_284(iVar2, *uParam1))
			{
				func_285(uParam1, 32);
				func_285(uParam1, 256);
				func_285(uParam1, 2048);
				func_174(uParam1, 512);
				func_174(uParam1, 1024);
				func_174(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_279(*uParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_281(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_285(uParam1, 64);
			}
		}
		if (func_283(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if ((((is_ped_sprinting(iVar2) && !func_283(iParam2, 8192)) || (is_ped_running(iVar2) && func_283(iParam2, 1024))) || func_283(iParam2, 8)) && !func_279(*uParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_174(uParam1, 32);
		}
		else if (((is_ped_running(iVar2) || (is_ped_sprinting(iVar2) && func_283(iParam2, 8192))) && func_283(iParam2, 4096)) && !func_279(*uParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_174(uParam1, 2048);
			func_174(uParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_283(iParam2, 32)) && !func_279(*uParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_174(uParam1, 256);
			func_174(uParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_174(uParam1, 64);
		}
		else if (!func_283(iParam2, 1))
		{
			if (!func_283(iParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_35.f_2;
				if (func_282(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_279(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_174(uParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_174(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_283(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_174(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_283(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_174(uParam1, 8);
	}
	return false;
}

bool func_176(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return func_288(func_181(iParam0, 0), bParam1, bParam2, iParam3, func_287(iParam0));
	}
	if (func_289(iParam0, bParam4) || func_290(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_287(iParam0) && (func_291(iParam0, &iVar0) || func_292(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_293(iParam0, -570078785);
		bVar2 = func_293(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_294())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_295(15) && func_293(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_177(int iParam0, int iParam1, bool bParam2)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_296(iParam0, 1) && !func_297(iParam0, 1))
	{
		return false;
	}
	if (bParam2 && func_298(iParam0, &iVar0))
	{
		if (func_299(iVar0, 997808187, 0) && !func_300(iVar0, 997808187))
		{
			return true;
		}
		else if (func_299(iVar0, -570078785, 0))
		{
			return func_301(iVar0, -570078785, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_176(iParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return false;
		}
		iVar7 = func_302(iParam0, iVar3, 0, 1, 1);
		if (iVar3 == -570078785)
		{
			return func_303(iVar7);
		}
		else if (iVar3 == -915411861)
		{
			return func_304(iVar7);
		}
		else if (iVar3 == 997808187)
		{
			return true;
		}
		else
		{
			return func_305(iParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

int func_178(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_306(&iParam1);
	if (func_180(iParam1))
	{
		return func_307(iParam0, func_181(iParam1, 1), 1, 1, iParam3, 0, iParam4, iParam5, func_287(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_308(iParam1, 1, 1) };
	if (func_298(iParam1, &iVar21))
	{
		return func_307(iParam0, iVar21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_309(iParam1))
	{
		if (!func_310(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, iParam3))
		{
			return 0;
		}
	}
	else if (!func_311(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, iParam3, iParam4, iParam5, iParam6))
	{
		return 0;
	}
	func_312(Var0);
	return 1;
}

void func_179(int iParam0)
{
	_unlock_set_new(func_313(iParam0), false);
}

bool func_180(int iParam0)
{
	if (func_314(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_181(int iParam0, bool bParam1)
{
	if (!func_286(iParam0, 0))
	{
		return func_316(func_315(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_182(int iParam0, int iParam1, bool bParam2)
{
	if (!func_317(iParam0, iParam1, &Var0, &iVar31, bParam2, 1))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_318(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	if (!func_319(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_318(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_184(int iParam0)
{
	iVar0 = -1;
	if (!func_318(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_308(iParam0, 0, 0) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, 0) };
	if (!func_321(&Var6))
	{
		return -1;
	}
	if (func_322(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_185(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_186(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 5:
			if (uParam0->f_8[iParam1]->f_39 == -1)
			{
			}
			else
			{
				set_anim_scene_int(&(uParam0->f_8[iParam1]), "location_variation", uParam0->f_8[iParam1]->f_39, false);
			}
			break;
		case 6:
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), "ifTrader", func_323(11) > 0, false);
			break;
		case 7:
			func_52(910, &iVar0, &iVar1);
			func_324(iVar0, iVar1);
			func_325(&iVar0, &iVar1);
			func_326(-1654990742);
			break;
		case 8:
			func_203(149, 1);
			func_203(150, 1);
			func_203(151, 1);
			break;
	}
}

void func_187()
{
	if (!func_327())
	{
		return;
	}
	Global_1211286->f_26 = 0;
}

Vector3 func_188(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.x = 1;
	vVar0.f_2 = uParam0;
	return vVar0;
}

bool func_189(vector3 vParam0)
{
	if (!func_328(vParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_329(Global_1211286->f_2[iVar0]->f_2, vParam0))
		{
		}
		else
		{
			return Global_1211286->f_2[iVar0]->f_1;
		}
		iVar0++;
	}
	return false;
}

void func_190(vector3 vParam0, int iParam3)
{
	if (!func_328(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_329(Global_1211286->f_2[iVar0]->f_2, vParam0))
		{
		}
		else
		{
			if (Global_1211286->f_2[iVar0]->f_1 != iParam3)
			{
				Global_1211286->f_24 = 1;
			}
			Global_1211286->f_2[iVar0]->f_1 = iParam3;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_191(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_192(var uParam0, int iParam1)
{
	fVar0 = _get_anim_scene_time(&(uParam0->f_8[iParam1]));
	func_44(*uParam0, &iVar1, &uVar2);
	set_bit(&(uParam0->f_305), 19);
	if ((_0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), "MOON_INT_P2A1_T01_Shot_1", 0) || _0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), "MOON_INT_P2A1_T01_Shot_2", 0)) || (_0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), "MOON_INT_P2_T10_Shot_2", 0) && fVar0 > 27.6f))
	{
		_0x5651516d947abc53();
		if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 7))
		{
			if (!func_330(uParam0))
			{
				uParam0->f_329 = 1;
				set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[0]->f_4), true, false);
				return;
			}
			set_bit(&(uParam0->f_8[iParam1]->f_1), 7);
		}
		if (get_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[0]->f_4)) || get_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[1]->f_4)))
		{
			return;
		}
		if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 6))
		{
			iVar3 = func_176(iVar1, 0, 1, -1, 1);
			_close_all_apps_immediate();
			func_121();
			func_331(3, 1);
			set_bit(&(uParam0->f_8[iParam1]->f_1), 6);
			return;
		}
		if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 8))
		{
			if (func_332() == 54)
			{
				set_bit(&(uParam0->f_8[iParam1]->f_1), 8);
			}
			return;
		}
		iVar4 = func_235(get_player_index(), 1);
		if (iVar4 != -1)
		{
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[1]->f_4), true, false);
			uParam0->f_327 = 1;
			play_sound_frontend("gold_spend", "Gold_Spend_Sounds", true, 0);
		}
		else if (!func_332() == 54)
		{
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[0]->f_4), true, false);
			uParam0->f_327 = 0;
			uParam0->f_328 = 1;
		}
	}
	else if (is_bit_set(uParam0->f_8[iParam1]->f_1, 6))
	{
		func_48();
		clear_bit(&(uParam0->f_8[iParam1]->f_1), 6);
	}
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	func_44(*uParam0, &iVar0, &uVar1);
	set_bit(&(uParam0->f_305), 19);
	if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 7))
	{
		if (!func_330(uParam0))
		{
			if (func_333(*uParam0, &uVar2, &bVar10))
			{
				set_anim_scene_bool(&(uParam0->f_8[iParam1]), &uVar2, bVar10, false);
				set_bit(&(uParam0->f_8[iParam1]->f_1), 7);
				uParam0->f_329 = 1;
				return;
			}
		}
		else if (func_333(*uParam0, &uVar2, &bVar10))
		{
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), &uVar2, !bVar10, false);
			set_bit(&(uParam0->f_8[iParam1]->f_1), 7);
		}
	}
	if (_0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), uParam0->f_8[iParam1]->f_18[0], 0) || _0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), uParam0->f_8[iParam1]->f_18[1], 0))
	{
		if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 6))
		{
			iVar11 = func_176(iVar0, 0, 1, -1, 1);
			if (func_293(iVar0, iVar11))
			{
				uParam0->f_326 = func_334(iVar0, iVar11, 1, 0, 1, 0);
				if (func_335(iVar0, 773203532, iVar11, 1, 1) > 0)
				{
					uParam0->f_326 = func_336(uParam0->f_326);
				}
			}
			else
			{
				set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[0]->f_4), true, false);
				return;
			}
			uParam0->f_324 = func_212("CUTSCENE_ACTION_PURCHASE", -163964935, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_213(uParam0->f_324, 6, 1);
			func_214(uParam0->f_324, 19, 0, 1);
			if (func_337(iVar11) || func_338(iVar11))
			{
				func_340(uParam0->f_324, "CUTSCENE_ACTION_PURCHASE_OFFER", func_339(iVar0), uParam0->f_326, 1);
			}
			else
			{
				func_340(uParam0->f_324, "CUTSCENE_ACTION_PURCHASE", func_339(iVar0), uParam0->f_326, 1);
			}
			uParam0->f_325 = func_212("CUTSCENE_ACTION_DONT_PURCHASE", 648122183, 6, 570, uParam0->f_330, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
			func_213(uParam0->f_325, 6, 1);
			func_214(uParam0->f_325, 19, 0, 1);
			set_bit(&(uParam0->f_8[iParam1]->f_1), 6);
		}
		if (!is_bit_set(uParam0->f_8[iParam1]->f_1, 6))
		{
			return;
		}
		if (func_217(uParam0->f_324, 1))
		{
			func_216(uParam0->f_325, 0, 1, 1);
			func_341(uParam0->f_325, 0, 1);
			func_216(uParam0->f_324, 0, 1, 1);
			func_341(uParam0->f_324, 0, 1);
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[1]->f_4), true, false);
			uParam0->f_327 = 1;
			func_75(uParam0);
			return;
		}
		if (func_217(uParam0->f_325, 1))
		{
			func_216(uParam0->f_325, 0, 1, 1);
			func_341(uParam0->f_325, 0, 1);
			func_216(uParam0->f_324, 0, 1, 1);
			func_341(uParam0->f_324, 0, 1);
			set_anim_scene_bool(&(uParam0->f_8[iParam1]), &(uParam0->f_8[iParam1]->f_18[0]->f_4), true, false);
			uParam0->f_327 = 0;
			uParam0->f_328 = 1;
			return;
		}
	}
	else if (is_bit_set(uParam0->f_8[iParam1]->f_1, 6))
	{
		func_216(uParam0->f_325, 0, 1, 1);
		func_341(uParam0->f_325, 0, 1);
		func_216(uParam0->f_324, 0, 1, 1);
		func_341(uParam0->f_324, 0, 1);
		clear_bit(&(uParam0->f_8[iParam1]->f_1), 6);
	}
}

void func_194(var uParam0)
{
	if ((uParam0->f_329 || uParam0->f_327) || uParam0->f_328)
	{
		if (!is_bit_set(uParam0->f_305, 0))
		{
			if (func_98(*uParam0))
			{
				func_101(*uParam0, 1);
				set_bit(&(uParam0->f_305), 0);
			}
		}
	}
}

int func_195(int* iParam0)
{
	return func_342(iParam0->f_1);
}

bool func_196(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_197(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			*uParam1 = { *Global_1293346->f_20.f_1[iVar0] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_198(int iParam0)
{
	return func_343(iParam0);
}

void func_199(int iParam0)
{
	func_344(iParam0);
}

void func_200(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!does_entity_exist(&(uParam0->f_229[iVar0]->f_1[iVar1])))
			{
			}
			else
			{
				set_entity_visible(&(uParam0->f_229[iVar0]->f_1[iVar1]), true);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_201(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!does_entity_exist(uParam0->f_89[iVar0]->f_1))
		{
		}
		else
		{
			set_entity_visible(uParam0->f_89[iVar0]->f_1, true);
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

bool func_202(int iParam0, var uParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return true;
	}
	if (func_345() != -1)
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			*uParam1 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1915715->f_3[iParam0]->f_23))
	{
		*uParam1 = get_ped_index_from_entity_index(Global_1915715->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_346(iParam0, 33554432);
	}
	else
	{
		func_347(iParam0, 33554432);
	}
}

void func_204(float fParam0)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	clear_area(vVar1, fParam0, 65536);
	remove_particle_fx_in_range(vVar1, fParam0);
}

bool func_205()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_206(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_207(var uParam0, int iParam1)
{
	if (6 == *uParam0)
	{
		if (_0x8d81e7824b7753f7(&(uParam0->f_8[iParam1]), "MOON_INT_P2A1_T01_Shot_2", 0))
		{
			return false;
		}
	}
	return true;
}

void func_208(var uParam0)
{
	if (*uParam0 != 5)
	{
		return;
	}
	if (!is_bit_set(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_202(38, &iVar0))
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	func_203(func_131(), 0);
	set_entity_visible(iVar0, true);
	clear_bit(&(uParam0->f_305), 13);
}

bool func_209(var uParam0)
{
	return func_348(*uParam0, 1);
}

void func_210(var uParam0, bool bParam1)
{
	if (bParam1 || !func_209(uParam0))
	{
		func_349(uParam0);
	}
}

int func_211(var uParam0)
{
	if (!func_209(uParam0))
	{
		return 0;
	}
	if (func_350(uParam0))
	{
		return uParam0->f_2;
	}
	return func_351(uParam0->f_1);
}

int func_212(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_352(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_353(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_214(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_215(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2, sParam3));
}

void func_216(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (bParam1)
	{
		func_354(iParam0, 4);
		if (bParam3)
		{
			func_355(iVar0, 1);
		}
		func_356(iVar0, 1);
	}
	else
	{
		func_357(iParam0, 4);
		func_356(iVar0, 0);
	}
}

bool func_217(int iParam0, bool bParam1)
{
	if (bParam1 && !func_89(iParam0))
	{
		return false;
	}
	iVar0 = func_219(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

bool func_218(int iParam0, var uParam1)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		vVar5 = { func_251() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vPlayerPos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = get_hash_key(&cVar10);
		_datafile_get_vector(&vVar5, &Var0);
		StringCopy(&cVar10, "fPlayerHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = get_hash_key(&cVar10);
		_datafile_get_float(&fVar8, &Var0);
		*(*uParam1)[iVar9] = { vVar5 };
		uParam1->f_10[iVar9] = fVar8;
		vVar5 = { func_251() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vHorsePos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = get_hash_key(&cVar10);
		_datafile_get_vector(&vVar5, &Var0);
		StringCopy(&cVar10, "fHorseHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = get_hash_key(&cVar10);
		_datafile_get_float(&fVar8, &Var0);
		*uParam1->f_14[iVar9] = { vVar5 };
		uParam1->f_24[iVar9] = fVar8;
		iVar9++;
	}
	return true;
}

int func_219(int iParam0)
{
	return iParam0;
}

void func_220(int iParam0)
{
	if (!func_359(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

void func_221(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_260(62);
		if (bParam1)
		{
			func_260(69);
		}
	}
	else
	{
		func_261(62);
		func_261(50);
		func_261(69);
	}
}

bool func_222(int iParam0)
{
	if (Global_1296859->f_16 == Global_1296859->f_10)
	{
		return true;
	}
	switch (iParam0)
	{
		case 2:
			iVar1 = 13;
			while (iVar1 <= 15)
			{
				iVar0 = func_360(2, iVar1);
				if (iVar0 == 0)
				{
					return false;
				}
				if (!_0xfbe782b3165ac8ec(iVar0))
				{
					return false;
				}
				iVar1++;
			}
			return true;
		default:
			break;
	}
	return true;
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	return Global_1293332[iParam0];
}

bool func_225(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_226(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_44[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_44[iVar0]->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1293346->f_458.f_1245[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_1245[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_1245[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_361();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_362();
	Var0.f_3 = iParam1;
	func_363(Var0, 0);
	return Var0;
}

void func_228(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	(*Global_1293332)[iParam0] = iParam1;
}

void func_229(int iParam0)
{
	if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])) && !func_222(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-413671895, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-413671895, 0, 0));
			}
			break;
		case 6:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-254133531, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-254133531, 0, 0));
			}
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-2117927593, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-2117927593, 0, 0));
			}
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(1351073489, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(1351073489, 0, 0));
			}
			break;
	}
}

void func_230()
{
	Global_1960071 = 0;
}

bool func_231(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

var func_232(int iParam0)
{
	return &(Global_1109804->f_260.f_5458[iParam0]);
}

var func_233(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_234(bool bParam0)
{
	if (Global_17411.f_3078.f_1 == -1)
	{
		return;
	}
	if (Global_17411.f_3078 == bParam0)
	{
		return;
	}
	Global_17411.f_3078 = bParam0;
	if (bParam0)
	{
		func_364(Global_17411.f_3078.f_1);
		Global_1051439->f_4661.f_7 = 1;
		func_365(1, 1017438712);
	}
}

int func_235(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

bool func_236(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_366(iParam0);
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
			if (!func_367(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_368(iParam0))
			{
				return true;
			}
			break;
	}
	return func_369(iParam0, 0, 0, 0) >= iParam1;
}

void func_237(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_370(iParam0);
	}
}

bool func_238()
{
	return &Global_1940085 == 1;
}

bool func_239()
{
	return &Global_1940085 == 2;
}

void func_240(float fParam0)
{
}

void func_241()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

bool func_242(int iParam0)
{
	if (!func_371(iParam0))
	{
		return false;
	}
	iVar0 = func_372(iParam0, 1);
	if (!func_373(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return true;
	}
	iVar3 = func_374(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_375(iParam0, iVar1))
		{
			case 0:
				func_376(iVar1, iParam0, iVar4);
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
						func_376(iVar1, iParam0, iVar4);
						func_377(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_377(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_378(iVar1, 1);
				func_379(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_380(iVar2, 0);
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
			func_381(Global_1146212->f_35859.f_919[iVar0]);
			return true;
		}

void func_243(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_382();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

int func_245(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_247(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_5;
}

int func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612:
			switch (iParam1)
			{
				case -811830793:
					return 159;
				case 1421598733:
					return 175;
				case -1281008453:
					return 183;
				case 1081855422:
					return 167;
				case -805084272:
					return 191;
				case 1429053594:
					return 199;
				case 1802123763:
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			break;
		case 226275223:
			switch (iParam1)
			{
				case -811830793:
					return 160;
				case 1421598733:
					return 176;
				case -1281008453:
					return 184;
				case 1081855422:
					return 168;
				case -805084272:
					return 192;
				case 1429053594:
					return 200;
				case 1802123763:
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			break;
		case -2146415538:
			switch (iParam1)
			{
				case -811830793:
					return 161;
				case 1421598733:
					return 177;
				case -1281008453:
					return 185;
				case 1081855422:
					return 169;
				case -805084272:
					return 193;
				case 1429053594:
					return 201;
				case 1802123763:
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			break;
		case -892962381:
			switch (iParam1)
			{
				case -811830793:
					return 162;
				case 1421598733:
					return 178;
				case -1281008453:
					return 186;
				case 1081855422:
					return 170;
				case -805084272:
					return 194;
				case 1429053594:
					return 202;
				case 1802123763:
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			break;
		case -1740150840:
			switch (iParam1)
			{
				case -811830793:
					return 163;
				case 1421598733:
					return 179;
				case -1281008453:
					return 187;
				case 1081855422:
					return 171;
				case -805084272:
					return 195;
				case 1429053594:
					return 203;
				case 1802123763:
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			break;
		case -332466661:
			switch (iParam1)
			{
				case -811830793:
					return 164;
				case 1421598733:
					return 180;
				case -1281008453:
					return 188;
				case 1081855422:
					return 172;
				case -805084272:
					return 196;
				case 1429053594:
					return 204;
				case 1802123763:
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			break;
		case -847503328:
			switch (iParam1)
			{
				case -811830793:
					return 165;
				case 1421598733:
					return 181;
				case -1281008453:
					return 189;
				case 1081855422:
					return 173;
				case -805084272:
					return 197;
				case 1429053594:
					return 205;
				case 1802123763:
					return 157;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			break;
	}
	switch (iParam3)
	{
		case 11:
			return 21;
		case 12:
			return 3;
		case 10:
			return 31;
		case 9:
			return 40;
		case 8:
			return 56;
		default:
			break;
	}
	switch (iParam1)
	{
		case -1411330704:
			return 60;
		case -428390721:
			return 61;
		case 2073294138:
			return 66;
		case -1490861779:
			return 62;
		case 1476279059:
			return 63;
		case 913131737:
			return 64;
		case 1642014154:
			return 65;
		case -1396511102:
			return 2;
		case -1991362080:
		case -1535250369:
		case 914789466:
			return 67;
		case 55994234:
		case 262209551:
		case 769866899:
			return 68;
		case -429885089:
		case -289273358:
		case 536669287:
			return 69;
		case 2139966690:
			return 70;
		case 952368108:
			return 71;
		case 1671341100:
			return 72;
		case -1336962048:
			return 73;
		case 1262519305:
			return 74;
		case -510449329:
			return 75;
		case -474096794:
			return 76;
		case 2022645972:
			return 77;
		case -1867469444:
			return 78;
		case 81790578:
			return 79;
		case 42875037:
			return 80;
		case 1321477211:
			return 81;
		case -1970354802:
			return 82;
		case 1915847437:
			return 83;
		case -418668047:
			return 84;
		case -1490747347:
			return 85;
		case 1853960588:
			return 86;
		case -669648504:
			return 87;
		case 2121739823:
			return 88;
		case -801482238:
			return 89;
		case -1535222926:
			return 90;
		case 1101681612:
			return 91;
		case 1687066518:
			return 92;
		case 846374071:
			return 93;
		case 1173221821:
			return 94;
		case -872063735:
			return 95;
		case 1659150076:
			return 96;
		case 495709860:
			return 97;
		case -1981287626:
			return 98;
		case -373605683:
			return 99;
		case -1030438211:
			return 100;
		case -1413081099:
			return 101;
		case -1291835985:
			return 102;
		case 1051756150:
			return 103;
		case -1568446057:
			return 104;
		case 271439292:
			return 105;
		case -132276375:
			return 106;
		case -908539768:
			return 107;
		case 1092029674:
			return 108;
		case -1958953278:
			return 109;
		case 733303292:
			return 110;
		case -144166169:
			return 111;
		case -492687949:
			return 112;
		case -874512337:
			return 113;
		case -415385882:
			return 114;
		case -797537960:
			return 115;
		case -941076000:
			return 120;
		case -1567174399:
			return 121;
		case -763924656:
			return 122;
		case 1928558912:
			return 123;
		case 524939438:
			return 124;
		case -1949362405:
			return 125;
		case 908640876:
			return 126;
		case 501275986:
			return 127;
		case 1257532163:
			return 128;
		case 1160088249:
			return 129;
		case -267422042:
			return 130;
		case 800085008:
			return 131;
		case 738479284:
			return 132;
		case 900620296:
			return 133;
		case 1054660175:
			return 116;
		case -2043878162:
			return 117;
		case 594616184:
			return 118;
		case -92189287:
			return 119;
		case -811830793:
			return 158;
		case 1421598733:
			return 174;
		case -1281008453:
			return 182;
		case 1081855422:
			return 166;
		case -805084272:
			return 190;
		case 1429053594:
			return 198;
		case 1802123763:
			return 150;
		default:
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return -2089344668;
		case 121:
			return 2050756334;
		case 122:
			return 1086496835;
		case 123:
			return 1461439733;
		case 124:
			return -942529833;
		case 125:
			return 2125074568;
		case 111:
			return 41788943;
		case 112:
			return -1359472568;
		case 113:
			return 309845830;
		case 114:
			return 472445608;
		case 115:
			return -302836163;
		case 126:
			return -827426745;
		case 127:
			return -1585799712;
		case 128:
			return -1378452636;
		case 129:
			return -273086735;
		case 130:
			return 75146260;
		case 131:
			return 1988797837;
		case 132:
			return -182115660;
		case 133:
			return -420968901;
		case 116:
			return -324004853;
		case 117:
			return -81940250;
		case 118:
			return 1363893568;
		case 119:
			return 1604450797;
		default:
			break;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 1056359525:
			return 0;
		case 89248012:
			return 1;
		case -100681112:
			return 2;
		case -1087814448:
			return 3;
		case -1265422428:
			return 4;
		case 2053061437:
			return 5;
		case -804198753:
			return 6;
		case 97833510:
			return 7;
		case -74793582:
			return 8;
		case -1585936017:
			return 9;
		case 792472748:
			return 10;
		case 140861179:
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_251()
{
	return 0f, 0f, 0f;
}

bool func_252(int iParam0, var uParam1, var uParam2)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key("vPropPos");
	_datafile_get_vector(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key("fPropHead");
	_datafile_get_float(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

int func_253(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = create_itemset(true);
	iVar5 = _0x59b57c4b06531e1e(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		uVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = _0x18013392501ce5dc(uVar1);
		if (!does_entity_exist(iVar2))
		{
		}
		else if (!is_entity_visible(iVar2))
		{
		}
		else if (iParam0 != get_entity_model(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	destroy_itemset(iVar0);
	return iVar3;
}

int func_254()
{
	return Global_1102219->f_3672;
}

void func_255(int iParam0, vector3 vParam1)
{
	if (does_entity_exist(iParam0))
	{
		vVar0 = { vParam1 };
		if (get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
		{
			set_entity_coords(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			set_entity_coords(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_256(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	IntToString(&cVar0, uParam0->f_1, 64);
	if (!add_relationship_group(&cVar0, &(uParam0->f_10)))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 <= 86)
	{
		set_relationship_between_groups(iParam1, uParam0->f_10, func_383(iVar8, 1));
		set_relationship_between_groups(iParam1, func_383(iVar8, 1), uParam0->f_10);
		iVar8++;
	}
	set_ped_relationship_group_hash(uParam0->f_1, uParam0->f_10);
}

int func_257()
{
	if ((Global_1296859->f_16 < 0 || Global_1296859->f_16 >= 32) || !_network_is_player_index_valid(&(Global_1296859->f_154[Global_1296859->f_16])))
	{
		return 0;
	}
	if (is_ped_male(get_player_ped(&(Global_1296859->f_154[Global_1296859->f_16]))))
	{
		return 0;
	}
	return 1;
}

bool func_258(int iParam0, var uParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 5:
		default:
			break;
	}
	return false;
	StringCopy(sParam2, "local_player_variation", 64);
	*uParam1 = 0;
	iVar0 = func_131();
	if (iVar0 == -1)
	{
		return true;
	}
	if (!func_384(iVar0, &iVar1))
	{
		return true;
	}
	switch (iVar1)
	{
		case 1253642035:
		default:
			return false;
			*uParam1 = 0;
			return true;
		case -1811487294:
			*uParam1 = 1;
			return true;
		case -1823109923:
			*uParam1 = 2;
			return true;
			return true;
	}
}

var func_259(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_260(int iParam0)
{
	if (func_385(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (func_386(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_262(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_387(vParam0)];
	iVar1 = func_388(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_389(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_263(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_390(255) == 4)
	{
		return;
	}
	if (func_133(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_391(0, 0, 0, 1);
	}
	func_260(0);
	func_260(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_392(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = fParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_393(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_394(Global_1102219->f_3849, 36);
	func_395(Global_1102219->f_3888, 36);
}

bool func_264(var uParam0)
{
	return uParam0->f_306 == 0;
}

Vector3 func_265(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			return 10f, 10f, 5f;
		case 3:
			return 5f, 5f, 5f;
		case 7:
			return 5f, 3.947f, 8.828f;
		default:
			break;
	}
	return 11.8675f, 12.9474f, 8.828214f;
}

float func_266(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_267(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_396())
			{
				return true;
			}
			if (Global_1296851->f_2.f_1 == 1 || func_397())
			{
				return true;
			}
			break;
		case 8:
			if (func_160(0))
			{
				return true;
			}
	}
	return false;
}

bool func_268(int iParam0)
{
	iVar0 = get_mount(Global_1296859->f_8);
	if (does_entity_exist(iVar0))
	{
		iVar1 = _get_first_entity_ped_is_carrying(iVar0);
		if ((does_entity_exist(iVar1) && is_entity_a_ped(iVar1)) && is_ped_a_player(get_ped_index_from_entity_index(iVar1)))
		{
			if (_is_ped_hogtied(get_ped_index_from_entity_index(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_269(int iParam0)
{
	vVar0.x = 196;
	vVar0.f_1 = player_id();
	vVar0.f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar4, iParam0);
	trigger_script_event(1, &vVar0, 4, 16, &uVar4);
}

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	if (func_345() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_272(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (func_345() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_273(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (func_345() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

bool func_274(int iParam0)
{
	if (func_398())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_275(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_276(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
		default:
			fVar0 = 0f;
			break;
			fVar0 = 100f;
			break;
		case 2:
			fVar0 = 100f;
			break;
		case 3:
			fVar0 = 100f;
			break;
		case 4:
			fVar0 = 100f;
			break;
		case 5:
			fVar0 = 100f;
			break;
		case 6:
			fVar0 = 100f;
			break;
		case 7:
			fVar0 = 100f;
			break;
		case 8:
			fVar0 = 100f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_277(int iParam0, int iParam1)
{
	func_399(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (get_current_ped_weapon(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != -1569615261)
			{
				if (iVar2 == 1)
				{
					set_ped_combat_attributes(iParam1, 116, true);
				}
				set_current_ped_weapon(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_34))
	{
		if (!is_entity_dead(Global_34) && !is_ped_injured(Global_34))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_34)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_280(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_400(vVar0, vVar3, vParam1);
}

bool func_283(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_284(int iParam0, var uParam1)
{
	if (!func_280(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_279(uParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_279(uParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_279(uParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_285(var uParam0, int iParam1)
{
	func_401(uParam0, iParam1);
}

bool func_286(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_287(int iParam0)
{
	if (!func_205() && func_402())
	{
		return true;
	}
	return func_314(iParam0, 1435272033);
}

bool func_288(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_403(iParam0))
	{
		return false;
	}
	bVar1 = func_283(iParam3, 2);
	bVar2 = func_299(iParam0, -570078785, bVar1);
	bVar3 = func_299(iParam0, -915411861, bVar1);
	if (func_299(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_404(iParam0, &iVar0) || func_405(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_294())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_295(15) && func_299(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_289(int iParam0, bool bParam1)
{
	return (func_293(iParam0, 997808187) && !func_406(iParam0, 997808187, bParam1));
}

bool func_290(int iParam0)
{
	iVar0 = func_181(iParam0, 1);
	if (iVar0 != 0 && func_299(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_291(int iParam0, int iParam1)
{
	*iParam1 = func_407(iParam0, 1);
	return *iParam1 != 0;
}

bool func_292(int iParam0, int iParam1)
{
	*iParam1 = func_408(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_293(int iParam0, bool bParam1)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return func_299(func_181(iParam0, 0), bParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, bParam1) > 0;
}

bool func_294()
{
	return Global_1915715->f_22477;
}

bool func_295(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_160(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_296(int iParam0, bool bParam1)
{
	if (!func_314(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_314(iParam0, -1090933859))
		{
			return func_181(iParam0, 1) != 0;
		}
		if ((func_406(iParam0, -915411861, 0) || func_406(iParam0, 600942249, 0)) || func_406(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_297(int iParam0, bool bParam1)
{
	iVar0 = func_409(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_300(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_301(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_298(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_410(iParam0))
	{
		return false;
	}
	if (func_314(iParam0, 81450561) || func_314(iParam0, 1342455455))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return false;
	}
	iVar0 = func_181(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_299(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_308(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_299(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_403(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_300(iParam0, bParam1);
	}
	return true;
}

bool func_300(int iParam0, bool bParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_0 < iLocal_475)
	{
		if (&Var0[iScriptParam_0] == bParam1)
		{
			iVar473 = Var0[iScriptParam_0]->f_35;
			iVar475 = 0;
			while (iScriptParam_1 < iLocal_477)
			{
				uVar472 = &Var0[iScriptParam_0]->f_36[iScriptParam_1];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iScriptParam_1 + 1;
			}
		}
		iVar474 = iScriptParam_0 + 1;
	}
	return false;
}

bool func_301(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_317(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_304(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_303(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_411(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_412(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_369(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_286(iParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_298(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_294() && bVar1) && iParam1 == 0))
	{
		if (func_299(iVar0, 997808187, 0) && !func_300(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
		else if (func_299(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_413(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_336(func_413(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_176(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_414(iParam0))
	{
		iVar4 = func_415(iParam0);
	}
	else if (func_416(iParam0))
	{
		iVar4 = func_417(iParam0);
	}
	else if (func_418(iParam0))
	{
		iVar4 = func_419(iParam0);
	}
	else if (func_420(iParam0))
	{
		iVar4 = func_421(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_413(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_338(iVar3))
		{
			if (func_422(iVar4, 773203532, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_336(iVar2);
		}
		Global_1051439->f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439->f_61 = iParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_334(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_338(iVar3))
		{
			if (func_335(iParam0, 773203532, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_336(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = iParam0;
		if (Global_1051439->f_62 != Global_1051439->f_61)
		{
			Global_1051439->f_62 = Global_1051439->f_61;
		}
		else
		{
			Global_1051439->f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439->f_46 = 0;
	return -1;
}

bool func_303(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

bool func_304(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_345() == 0)
	{
		return func_423(iParam0);
	}
	return iParam0 <= func_424();
}

bool func_305(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_180(iParam0))
	{
		return func_301(func_181(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_319(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_425(0)) && !func_426());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_304(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_303(iVar32)))
			{
			}
			else
			{
				iVar36 = func_411(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_412(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_369(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_427(&(Var0[iVar34])) || func_428(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_429(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_430(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_431(7, &(Var0[iVar34]))) + func_432(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_306(int iParam0)
{
	if (!func_286(*iParam0, 0))
	{
		return 0;
	}
	if (!func_433(*iParam0))
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

int func_307(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_434(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return 0;
	}
	func_435(Var0);
	return 1;
}

struct<5> func_308(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_436(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_366(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_320(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_437(bParam1) };
			if (bParam2 && func_438(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_439(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_439(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_440(iParam0, &Var6, 1728382685))
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
			Var0 = { func_441(bParam1) };
			switch (func_442(iParam0))
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
			if (func_443(iParam0, -1823706425))
			{
				Var0 = { func_320(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_443(iParam0, -1483207246))
			{
				Var0 = { func_320(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_320(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_443(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_444(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_443(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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

bool func_309(int iParam0)
{
	return func_314(iParam0, 1166200945);
}

bool func_310(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (!func_286(iParam1, 0))
	{
		return false;
	}
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_176(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_295(15))
	{
		bVar0 = true;
	}
	func_446(&iParam9, 32);
	func_446(&iParam9, 64);
	func_446(&iParam9, 4);
	func_446(&iParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_447(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, iParam9, 1))
	{
		return false;
	}
	Var1 = { func_448(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*iParam7 = { Var1 };
	if (!func_449(iParam0, 1702063850))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715->f_20241.f_49;
	iVar20 = Global_1915715->f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_286(&(Global_1051439->f_47[iVar55]), 0))
		{
		}
		else if (!func_450(&(Global_1051439->f_47[iVar55]), iVar19, &iVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_320(&(Global_1051439->f_47[iVar55]), Var31, iVar21, 0) };
			if (func_451(&(Global_1051439->f_47[iVar55])))
			{
				if (!func_439(&(Global_1051439->f_47[iVar55]), &Var31, iVar21, 0, 0))
				{
					if (!&Global_1051439->f_47.f_7[iVar55])
					{
					}
					else if (func_452(&(Global_1051439->f_47[iVar55])))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_293(&(Global_1051439->f_47[iVar55]), 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_453(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, 1, &Var1, 0, bVar40, iParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_454(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, !bVar0, &Var1, 0, bVar40, 0, iParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!&Global_1051439->f_47.f_7[iVar55])
							{
								iVar39 = func_455(Var31, iVar21, 0, -1);
								if (!func_286(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_320(iVar39, Var35, iVar21, 0) };
									if (!func_456(Var35, &(Global_1051439->f_47.f_7[iVar55]), 0))
									{
										if (!func_444(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == &Global_1051439->f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_444(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != &Global_1051439->f_47.f_7[iVar55])
											{
												if (!func_456(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_457(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_458(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = _0x46f032b8ddf46cde(iVar19);
														if (!is_bit_set(&(Global_1051439->f_4461[(func_459(iVar56, 1) / 32)]), (func_459(iVar56, 1) % 32)))
														{
															func_461(func_460(1137323725, 1914305383), 1);
															set_bit(Global_1051439->f_4461[(func_459(iVar56, 1) / 32)], (func_459(iVar56, 1) % 32));
														}
													}
												}
												return true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_311(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_176(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_447(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_448(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_366(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_462(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_463(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_312(struct<14> Param0, var uParam14, var uParam15)
{
	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_335(iVar0, 773203532, iVar1, 1, 0) > 0)
	{
		func_464("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (_0x2bae4880dcdd560b(iVar0, 0))
	{
		iVar2 = func_465(iVar0, 0);
		if (!_0x6df942c4179be5ab(iVar2, -41291407))
		{
			play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			_0xe8eaff7b41edd291(iVar2, -41291407, 0);
		}
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_313(int iParam0)
{
	return iParam0;
}

int func_314(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return func_466(func_315(iParam0), iParam1);
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

int func_315(int iParam0)
{
	return iParam0;
}

int func_316(int iParam0, bool bParam1)
{
	if (!func_467(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_317(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_403(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_468(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_318(int iParam0)
{
	if (func_442(iParam0) == -126813555 || func_442(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_319(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_469(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_320(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_470(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_321(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_322(struct<4> Param0)
{
	if (!func_321(&Param0))
	{
		return false;
	}
	if (func_471(&Param0))
	{
		return false;
	}
	return func_473(func_472(Param0));
}

int func_323(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	iVar0 = func_475(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_476(iParam0, 1);
	}
	return 0;
}

void func_324(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_325(int iParam0, int iParam1)
{
	uVar0 = &Global_17411.f_2565[*iParam0];
	set_bit(&uVar0, *iParam1);
	Global_17411.f_2565[*iParam0] = uVar0;
}

void func_326(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_477(iParam0);
	}
}

bool func_327()
{
	return Global_1211286->f_26;
}

bool func_328(vector3 vParam0)
{
	switch (vParam0.x)
	{
		case 0:
		default:
			return false;
			if (vParam0.y == -1)
			{
				return false;
			}
		case 1:
			if (vParam0.z == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_329(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	switch (vParam0.x)
	{
		case 0:
			if (vParam0.y != vParam3.y)
			{
				return false;
			}
			break;
		case 1:
			if (vParam0.z != vParam3.z)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_330(var uParam0)
{
	iVar1 = 0;
	if (!func_44(*uParam0, &iVar0, &iVar1))
	{
		return false;
	}
	return func_177(iVar0, func_176(iVar0, 0, 1, -1, 1), 1);
}

int func_331(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_478();
	}
	if (!func_479(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_480(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

int func_332()
{
	return Global_1940311->f_1433;
}

bool func_333(int iParam0, char* sParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 3:
		default:
			return false;
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 4:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 5:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 7:
			StringCopy(sParam1, "notEnoughMoney", 64);
			*bParam2 = 1;
			return true;
	}
}

int func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && bParam1 == -915411861) && func_293(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_180(iParam0))
	{
		return func_413(func_181(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_319(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

int func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_180(iParam0))
	{
		return func_422(func_181(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_319(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

int func_336(int iParam0)
{
	return (iParam0 / 100);
}

bool func_337(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

bool func_338(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

char* func_339(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_481(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_340(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	sVar1 = _create_var_string(0, sParam2);
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(10, sParam1, sVar1, sParam3));
}

void func_341(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_visible((*Global_1951255)[iVar0]->f_3, bParam1);
}

int func_342(int iParam0)
{
	iVar0 = func_482(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_483(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_483(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_343(int iParam0)
{
	if (!func_318(iParam0))
	{
		return 0;
	}
	if (func_484(iParam0))
	{
		return -1957466003;
	}
	if (func_314(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_314(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_314(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_314(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

void func_344(int iParam0)
{
	Global_1109804->f_260.f_5462 = (Global_1109804->f_260.f_5462 || iParam0);
}

int func_345()
{
	return Global_1572887->f_13;
}

void func_346(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (Global_1915715->f_17884[iParam0] || iParam1);
}

void func_347(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

bool func_348(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_349(var uParam0)
{
	func_486(uParam0, 0);
}

bool func_350(var uParam0)
{
	return func_348(*uParam0, 2);
}

int func_351(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_352(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_353(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
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
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_355(iParam0, 1);
	func_356(iParam0, 1);
	func_357(iParam0, 128);
}

void func_354(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_355(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_352(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_356(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_357(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_359(int iParam0)
{
	return func_352(iParam0, 2);
}

int func_360(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_361()
{
}

var func_362()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_363(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_487()] = { Param0 };
			func_488((func_487() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_489()] = { Param0 };
			func_490((func_489() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

void func_364(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915715->f_18246 = iParam0;
	}
}

int func_365(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_491())
	{
		return 0;
	}
	if (!func_205())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_492(&Global_0, 8);
	}
	func_492(&Global_0, 1);
	return 1;
}

int func_366(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_367(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_493(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_494("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_495(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_496(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_497(iVar1);
				return true;
			}
			iVar3++;
		}
		func_497(iVar1);
	}
	return false;
}

bool func_368(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_442(iParam0);
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
	iVar1 = func_498(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_499(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_500(iParam0);
	iVar2 = func_499(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_369(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_366(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_493(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_501(iParam0, 0);
	}
	if (func_502(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_470(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_503(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_470(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_370(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_504())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

bool func_371(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

int func_372(int iParam0, int iParam1)
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

bool func_373(int iParam0)
{
	iVar0 = func_374(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_374(int iParam0, int iParam1)
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

int func_375(int iParam0, int iParam1)
{
	iVar0 = func_505(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_378(iParam1, 1);
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

int func_376(int iParam0, int iParam1, int iParam2)
{
	if (!func_371(iParam1))
	{
		return 0;
	}
	if (!func_506(iParam0))
	{
		return 0;
	}
	iVar0 = func_378(iParam0, 1);
	func_507(iParam0, iParam1, iParam2);
	if (func_508(*Global_1146212->f_35859.f_3116[iVar0]) && func_509(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_510(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_511(vVar1))
		{
			if (func_512(vVar1.x, vVar1.y, vVar1.z))
			{
				func_513(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_514(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_514(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_377(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_378(int iParam0, int iParam1)
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

void func_379(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_380(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_381(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

void func_382()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1862763509;
		case 1:
			return -1976316465;
		case 2:
			return 841021282;
		case 3:
			return -350651841;
		case 4:
			return 707888648;
		case 5:
			return 623901053;
		case 6:
			return 1269650476;
		case 7:
			return -1538724068;
		case 8:
			return 1391706777;
		case 9:
			return -401180987;
		case 10:
			return -1247684992;
		case 11:
			return -767591988;
		case 12:
			return -989642646;
		case 13:
			return -1683752762;
		case 14:
			return 543319108;
		case 15:
			return -886193798;
		case 16:
			return 106566339;
		case 17:
			return -50399569;
		case 18:
			return 1622308690;
		case 19:
			return 1222652248;
		case 20:
			return -350226955;
		case 21:
			return 1030835986;
		case 22:
			return -1856989775;
		case 23:
			return -1535431934;
		case 24:
			return -1448293989;
		case 25:
			return 266218800;
		case 26:
			return 555364152;
		case 27:
			return -1663301869;
		case 28:
			return -1996978098;
		case 29:
			return 1078461828;
		case 30:
			return 1986610512;
		case 31:
			return 889541022;
		case 32:
			return -319516747;
		case 33:
			return -1329647920;
		case 34:
			return -225988669;
		case 35:
			return -1694487418;
		case 36:
			return 1878159675;
		case 37:
			return -1505548114;
		case 38:
			return 1856892754;
		case 39:
			return 1609284507;
		case 40:
			return 747813878;
		case 41:
			return -40378879;
		case 42:
			return -415798358;
		case 43:
			return 1733741057;
		case 44:
			return 886389029;
		case 45:
			return -2003007004;
		case 46:
			return 1965820175;
		case 47:
			return -1164995627;
		case 48:
			return -1406404850;
		case 49:
			return 892340488;
		case 50:
			return 570352286;
		case 51:
			return 1809249877;
		case 52:
			return 1185197041;
		case 53:
			return -1901478918;
		case 54:
			return 2097877918;
		case 55:
			return -1158905413;
		case 56:
			return 358397622;
		case 57:
			return 65999835;
		case 58:
			return 814443795;
		case 59:
			return 519621102;
		case 60:
			return -1628223003;
		case 61:
			return 1278256225;
		case 62:
			return 2038628101;
		case 63:
			return 1742494648;
		case 64:
			return -1010166918;
		case 65:
			return 660170868;
		case 66:
			return -1278312096;
		case 67:
			return -509158128;
		case 68:
			return -226656579;
		case 69:
			return 2115868159;
		case 70:
			return 1495813101;
		case 71:
			return 1197385818;
		case 72:
			return 1015780020;
		case 73:
			return -1286733825;
		case 74:
			return -1670393277;
		case 75:
			return -415733461;
		case 76:
			return -1207924036;
		case 77:
			return 497702414;
		case 78:
			return 719188085;
		case 79:
			return 43753457;
		case 80:
			return 771290791;
		case 81:
			return 20356387;
		case 82:
			return 309149584;
		case 83:
			return 1613781781;
		case 84:
			return 1693607065;
		case 85:
			return 1132176120;
		case 86:
			return 869270437;
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

bool func_384(int iParam0, var uParam1)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key("sHash");
	_datafile_get_hash(uParam1, &Var0);
	return true;
}

bool func_385(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_386(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_387(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_388(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_389(var uParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(fParam3, &Var0);
		return true;
	}
	return false;
}

int func_390(int iParam0)
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

void func_391(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_515(iParam0);
	if (!func_516(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_517(128) && !func_518(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_519() == 4)
	{
		func_261(18);
	}
	func_520(1024);
}

void func_392(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_393(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_394(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_395(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_396()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_521(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_397()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_398()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

void func_399(int iParam0, int iParam1)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = _inventory_get_ped_inventory_id(iParam1);
	if (!_0x886dfd3e185c8a89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	_0xc04f47d488ef9eba(iVar0, iVar1, &uVar2, 0);
}

bool func_400(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_401(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_402()
{
	return func_522(func_19(0));
}

bool func_403(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_404(int iParam0, int iParam1)
{
	*iParam1 = func_523(iParam0, 1);
	return *iParam1 != 0;
}

bool func_405(int iParam0, int iParam1)
{
	*iParam1 = func_524(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_406(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_286(iParam0, 0))
	{
		return func_525(func_315(iParam0), bParam1, bParam2);
	}
	if (func_180(iParam0))
	{
		return func_300(func_181(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_345() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_526(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_407(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_527(iVar0, 1, 0);
		if (!func_319(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_528(&(Var2[iVar34])))
				{
					if (!bParam1 || func_369(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @135; //curOff = 107
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_408(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_527(iVar0, 0, 1);
		if (!func_319(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(&(Var9[iVar41])))
				{
					if (!bParam1 || func_369(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_409(int iParam0, bool bParam1)
{
	if (!func_296(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_181(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_181(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_181(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_181(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_181(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_181(-611782825, 1);
	}
	return func_181(iParam0, 1);
}

bool func_410(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_345() == -1)
	{
		if (func_529(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

int func_411(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_314(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_436(0) };
	Var0.f_4 = func_530(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_470(0), &Var5, 0);
	return iVar9;
}

int func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_317(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_414(int iParam0)
{
	return func_442(iParam0) == -999503751;
}

int func_415(int iParam0)
{
	if (!func_414(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111:
			return -705751660;
		case -1871922677:
			return 1364634153;
		case -905031115:
			return -388301838;
		case 1928115537:
			return 208175031;
		case 453281150:
			return -98968806;
		case 153739721:
			return -402606360;
		case 1167678119:
			return -709946811;
		case 736667462:
			return -362300646;
		case -673644764:
			return -65380737;
		case -980133221:
			return 100758093;
		case -209930641:
			return -1740761400;
		case -1735897526:
			return -27480348;
		case -482614352:
			return -257977494;
		case -1258944731:
			return -582914898;
		case 1536480356:
			return -814067424;
		case 1827632921:
			return -1179212391;
		case -1483084691:
			return -1407415707;
		case -1855140882:
			return -9237745;
		case -1605932637:
			return 296464256;
		case 838274308:
			return -1849217095;
		case 1423463110:
			return 1698584232;
		case 1722021469:
			return 1996257828;
		case 1293960018:
			return 1186175379;
		case 1084020314:
			return -1332741910;
		case 1384905272:
			return -1632447184;
		case 166258931:
			return -1930088011;
		case -285691117:
			return 2065632777;
		case -1506238056:
			return 937854865;
		case -141245365:
			return -1520409981;
		case 962175652:
			return 1356000914;
		case 687079897:
			return -423388555;
		case 373021801:
			return -188959129;
		case 75839740:
			return -93765184;
		case -208529642:
			return 401046716;
		case -504466477:
			return -845387737;
		case -1896067425:
			return -229247533;
		case -1732419039:
			return 57481217;
		case 1620668890:
			return 383434460;
		case 2095557238:
			return 404275544;
		case -700719823:
			return 721381157;
		case -520949089:
			return 1027509151;
		case 783963696:
			return -1688869940;
		case 477409701:
			return -97312371;
		case 325427079:
			return -870234774;
		case -2127824110:
			return -573609786;
		case -478920799:
			return -1336767027;
		case -784753876:
			return 1125692243;
		case -1991069642:
			return 1599850951;
		case 1534579841:
			return 1505836690;
		case 1755770591:
			return 1007026972;
		case 852591413:
			return -1271696523;
		case -1269692868:
			return -1501734903;
		case -1638540740:
			return -466660528;
		case 1404368072:
			return -1675392330;
		case 561909851:
			return -1377882579;
		case 1369829534:
			return 2136592667;
		case 669687080:
			return -1849788956;
		case 908671397:
			return -1561028528;
		case -50313388:
			return -1268368589;
		case 896138350:
			return -655694620;
		case -1347489546:
			return -882128410;
		case -1127937242:
			return -27217981;
		case -821055557:
			return 513863747;
		case -666844643:
			return 272520062;
		case 1507149124:
			return 1115043821;
		case 1797068311:
			return 434380030;
		case 1509389260:
			return -1994163333;
		case 1196052082:
			return 1445336445;
		case 914074837:
			return -1000181256;
		case 599099209:
			return -1601951172;
		case 774216741:
			return -1900673376;
		case 180232641:
			return -1722245291;
		case -1597878813:
			return -1550994497;
		case -895311481:
			return -1654216923;
		case -2075290374:
			return -956892603;
		case -1349063796:
			return 2044551183;
		case 1649135863:
			return 1816380636;
		case 10498108:
			return -1216565419;
		case 317576407:
			return -997045888;
		case -803057859:
			return -622430680;
		case -229076051:
			return -1279023141;
		case -1445559642:
			return -1036761924;
		case -1140185331:
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515:
			return 1379601741;
		case -1160690408:
			return -245138056;
		case -1763097043:
			return 115504824;
		case 912572382:
			return -1399728874;
		case 73391061:
			return -1090192900;
		case 332495544:
			return -1893000631;
		case -501475506:
			return -1583759578;
		case -280579677:
			return -204905596;
		case -814845497:
			return -974747713;
		case -1610902814:
			return -701454253;
		case -1313261987:
			return 678546644;
		case -668402627:
			return -1643732782;
		case -1436966753:
			return -1879178047;
		case -1105410003:
			return 2033604402;
		case -792302208:
			return 729201588;
		case -1544547372:
			return 1695854319;
		case -1268599623:
			return -2040860293;
		case 1281867320:
			return 430601343;
		case -1699226913:
			return 528449577;
		case -1610553999:
			return 836052180;
		case -1909243438:
			return 1126483827;
		case -1551799186:
			return 1432546287;
		case -1999554802:
			return 1721339484;
		case 723981565:
			return 1684533498;
		case 963752338:
			return 1404424086;
		case 372402960:
			return 69611632;
		case 989901996:
			return -221377088;
		case -239754729:
			return 1613326453;
		case 142266273:
			return 1307853835;
		case 911761394:
			return 2176663;
		case 1676688161:
			return -292908182;
		case 1907906229:
			return 1638955448;
		case -1621282302:
			return 1374083621;
		case -1801773954:
			return -1218075359;
		case -1003029579:
			return -1516043876;
		case 165089723:
			return -726135810;
		case 395586869:
			return -458052621;
		case 623560802:
			return -926911473;
		case 888203246:
			return -1761242982;
		case 1123550204:
			return -1388135148;
		case 1862360078:
			return -1644486999;
		case -1320869011:
			return -688485759;
		case -1078345642:
			return -381735150;
		case -571278136:
			return 2046513300;
		case -856663353:
			return -1943603989;
		case -632654469:
			return -1635706465;
		case -380562552:
			return -1338786556;
		case 1911459413:
			return -1434447686;
		case -1606456586:
			return -675714260;
		case -1888892597:
			return 249321841;
		case 1154823199:
			return -1070777324;
		case 856068226:
			return 2065543650;
		case 1786380136:
			return 1826887023;
		case 1943475930:
			return -1810703525;
		case 1697315198:
			return -1226563331;
		case -1787340262:
			return -1466006414;
		case -1341845703:
			return 724273546;
		case -1632670578:
			return 1512859531;
		case -932593662:
			return 1266305575;
		case -499308854:
			return 1937278961;
		case -785677145:
			return 971478216;
		case -18849776:
			return 1202597973;
		case -806059467:
			return 507698559;
		case 91876671:
			return 746355186;
		case -199538046:
			return 523755373;
		case -1754780383:
			return 1219798516;
		case -2050586146:
			return -1568843392;
		case -1622000367:
			return 1824681487;
		case -1930520502:
			return 933561301;
		case 1689602008:
			return -614970571;
		case 1384162159:
			return -310186102;
		case -733625577:
			return 1209768883;
		case -370348443:
			return 1834280485;
		case -1205728560:
			return 329528021;
		case 459985248:
			return 1778442129;
		case 834207228:
			return 805432208;
		case 1230744937:
			return -25950091;
		case 1859098900:
			return 922505133;
		case -2137310037:
			return 120975393;
		case 1086995730:
			return 426742932;
		case -1962290800:
			return 2081118674;
		case 1736084082:
			return -1914569345;
		case 2038967949:
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_416(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	return func_442(iParam0) == 153430294;
}

int func_417(int iParam0)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1652808217:
			return 2113612788;
		case 475385282:
			return 1799751306;
		case -35942194:
			return 1444076568;
		case 48470838:
			return 1147680963;
		case 1997008874:
			return -2020336278;
		case 1729941524:
			return -1377900033;
		case -1856789375:
			return -1541941647;
		case -2086565603:
			return 1616727805;
		case -463888252:
			return -922666835;
		case -1967067820:
			return -855621461;
		case 2030324187:
			return -564862124;
		case 837041052:
			return 1955205056;
		case -351609819:
			return 1515886177;
		case -112363350:
			return 1212871226;
		case 1064633628:
			return 520003486;
		case 1811373600:
			return 214694713;
		case 293907485:
			return -1002555587;
		case 896201705:
			return -704816453;
		case -953837732:
			return -408748538;
		case -849861695:
			return 2080515794;
		case -1484084376:
			return -1438504284;
		case -1244280834:
			return -1663266855;
		case -939529134:
			return -977280609;
		case -302466993:
			return -1208924670;
		case -740134980:
			return 760352143;
		case -462384932:
			return 1528293658;
		case 1388866954:
			return 601619107;
		case 1124978197:
			return 309975007;
		case 773175735:
			return -1805872365;
		case -6365998:
			return 25128279;
		case 163836188:
			return -286209990;
		case -603318871:
			return 1269465524;
		case -866802112:
			return 66925801;
		case -1222804528:
			return -1897379743;
		case -2051565307:
			return 1963005075;
		case -1837321585:
			return -2037925984;
		case 973666748:
			return 1668961632;
		case 211230425:
			return 1358934123;
		case -1098349891:
			return -1141176732;
		case -801495520:
			return -1415813725;
		case -1186378964:
			return 11713414;
		case -1629350306:
			return 1307072000;
		case 245003725:
			return 1575941645;
		case -61091504:
			return 701926877;
		case -1579778179:
			return -766852067;
		case -1100138310:
			return -1076125889;
		case 271080495:
			return -1445170375;
		case -620695071:
			return -1685465452;
		case -724967739:
			return -1670121942;
		case -687545541:
			return 1790317231;
		case 1877447950:
			return 1889214097;
		case -2102805870:
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case -542471226:
			return 1570234737;
		case -185354664:
			return -288324636;
		case -1008937941:
			return 11282331;
		case -770543466:
			return 725318841;
		case 1382597333:
			return -949699437;
		case 1129882805:
			return 1306347914;
		case 883033928:
			return 1536910598;
		case -1225782302:
			return 1924797251;
		case 1377331935:
			return 9499074;
		case -136923555:
			return 483863122;
		case 98783862:
			return 237473007;
		case 363196923:
			return 1066004403;
		case 547298053:
			return 1559978137;
		case 796506298:
			return 1322239046;
		case -2078055928:
			return 1564631339;
		case 855162804:
			return -212824759;
		case -1550515886:
			return -274429432;
		case -699406649:
			return 570453695;
		case -1870177465:
			return 207242099;
		case 1121730546:
			return -1112267224;
		case -1606199964:
			return 1417685661;
		case -1366953495:
			return -2095478833;
		case 1493223136:
			return 1899947034;
		case 1732731757:
			return -1752321861;
		case -993297765:
			return 1413210443;
		case 1243186493:
			return 1182877142;
		case 1548003731:
			return -208887838;
		case 1853771270:
			return 21707615;
		case -456994495:
			return 857732585;
		case -1627994710:
			return 1087541582;
		case -2009556946:
			return 1451015330;
		case 849308921:
			return 1688754425;
		case 1779645445:
			return 1437777233;
		case 2112644023:
			return 1676958164;
		case -909575313:
			return -35123787;
		case 1534435018:
			return 195668280;
		case -83784299:
			return -2087370390;
		case 1681940497:
			return 888087567;
		case 1436861146:
			return 707399301;
		case 1192175023:
			return 1507847664;
		case -503349107:
			return -2018900297;
		case 424603435:
			return -626938711;
		case 1033779145:
			return -336900292;
		case 734729251:
			return -1124798132;
		case -1451110845:
			return 1051595054;
		case 1302861393:
			return 1338028883;
		case 2145483459:
			return 574052421;
		case 1916198766:
			return -1516904708;
		case 229873288:
			return -337288225;
		case 1056766234:
			return 432390051;
		case 1993402593:
			return 1094880924;
		case 1754221662:
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_418(int iParam0)
{
	return (func_531(iParam0) && func_314(iParam0, 1584357097));
}

int func_419(int iParam0)
{
	if (!func_418(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_420(int iParam0)
{
	return func_442(iParam0) == 1882579758;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case -756756912:
			return 174220197;
		case 380458460:
			return 468518590;
		case -1336702674:
			return -184567584;
		case -1481672726:
			return 140205975;
		case 1088924248:
			return 1664750935;
		case -1981006748:
			return 1960130701;
		case -1800252944:
			return 766061110;
		case -392037938:
			return 1364291974;
		case 2052037931:
			return 2076526201;
		case 683408729:
			return 292938556;
		default:
			break;
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_317(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_423(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_424()
{
	if (func_345() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_425(bool bParam0)
{
	if (func_345() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_470(bParam0));
}

bool func_426()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_427(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_314(iParam0, -887064662))
	{
		return true;
	}
	return func_428(iParam0);
}

bool func_428(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_314(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_533(iParam0))
	{
		return 0;
	}
	iVar0 = func_534(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_535(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_430(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_427(iParam0) && !func_428(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_536(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_537(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_538(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_539(iVar15, iVar1);
			if (func_286(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_540(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_412(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_542(iVar16, func_541(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_543(iVar1);
	}
	return iVar0;
}

int func_431(int iParam0, int iParam1)
{
	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_533(iParam0))
	{
		return 0;
	}
	iVar0 = func_534(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_432(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_433(int iParam0)
{
	return func_314(iParam0, 1279601681);
}

bool func_434(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_288(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_544(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_545(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_435(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_422(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_464("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

struct<4> func_436(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_470(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_320(1328661203, func_546(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_320(1328661203, func_546(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_320(1328661203, func_546(), -1591664384, bParam0);
}

struct<4> func_437(bool bParam0)
{
	iVar0 = func_470(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_320(923904168, func_436(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_320(923904168, func_436(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_320(923904168, func_436(bParam0), -740156546, 0);
}

bool func_438(int iParam0, bool bParam1)
{
	if (func_442(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_547();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_548(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_440(int iParam0, var uParam1, int iParam2)
{
	if (func_549(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_441(bool bParam0)
{
	iVar0 = func_470(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_320(271701509, func_436(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_320(271701509, func_436(bParam0), 12999093, 0);
}

int func_442(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_443(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_442(iParam0);
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
			if (func_550(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_444(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_551(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_445(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_552(iParam0))
		{
			return false;
		}
	}
	if (func_553(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

void func_446(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_447(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (func_283(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_444(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_550(iParam1, func_442(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 1))
	{
		if (!func_410(iParam1))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 2))
	{
		if (func_406(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_548(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_554(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_555(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_556(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_283(iParam9, 8))
	{
		return func_557(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_448(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_502(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_449(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_450(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_442(iParam1);
		iVar5 = func_558(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (func_550(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_308(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_320(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_470(0);
			Var37 = { func_308(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_320(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_442(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (func_550(iParam0, iVar1, iVar2))
							{
								if (func_559(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_451(int iParam0)
{
	iVar0 = func_366(iParam0);
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0)
{
	return func_314(iParam0, 1282106666);
}

bool func_453(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (!func_447(iParam0, iParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_448(iParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_560(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

bool func_454(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_176(iParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_561(iParam0, iParam1, Param2, iParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = iParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_502(iParam1, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_463(iParam0, Var0, 2113164098, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

int func_455(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_562(&uParam0, iParam4, bParam5, iParam6);
}

bool func_456(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_425(0))
	{
		return func_563(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_444(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_470(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_457(int* iParam0)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		_cashinventory_transaction_delete(*iParam0);
		func_483(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_458(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_483(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_483(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_483(*iParam0, 2, 0, 0);
		return false;
	}
	func_483(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_459(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case 1993361168:
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

struct<2> func_460(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_461(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_462(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_564(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_565(iParam0, iParam18))
	{
		return false;
	}
	if (func_566(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam19);
}

bool func_463(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_564(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_565(iParam0, iParam17))
	{
		return false;
	}
	if (func_568(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam18);
}

void func_464(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

int func_465(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!_0x2bae4880dcdd560b(iParam0, iParam1))
	{
		return 0;
	}
	return _0x2e1cdc1ff3b8473e(iParam0, iParam1);
}

int func_466(int iParam0, int iParam1)
{
	if (!func_467(iParam0, 2))
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

bool func_467(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_468(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_442(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_469(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_442(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_470(bool bParam0)
{
	if (func_345() == -1)
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

bool func_471(var uParam0)
{
	if (!func_321(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_472(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_321(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_473(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_569()) > iParam0;
}

bool func_474(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_475(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_476(int iParam0, bool bParam1)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_570(iParam0);
		if (func_286(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_571(255);
			}
			else
			{
				iVar1 = func_548(iVar0, func_436(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_572(iParam0);
		if (func_286(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_548(iVar0, func_436(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_504())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

void func_478()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_479(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_574(bParam2, func_573(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_480(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_481(int iParam0)
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

int func_482(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_575(iParam0, iParam1, iParam2, iParam3);
}

bool func_484(int iParam0)
{
	return func_442(iParam0) == -126813555;
}

bool func_485(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

void func_486(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_576(uParam0, 1);
	func_577(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_487()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_488(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_489()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_490(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

bool func_491()
{
	return !Global_1572887->f_9;
}

void func_492(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_493(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_314(iParam0, 1399091007))
	{
		func_578(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_494(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = _0x80d78bdc9d88ef07(func_470(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_495(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_496(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_497(int iParam0)
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

int func_498(int iParam0)
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

int func_499(var uParam0, int iParam1)
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

int func_500(int iParam0)
{
	iVar0 = func_442(iParam0);
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

int func_501(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_579(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_580(&Var0, func_437(0));
	}
	if (!func_581(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_497(iVar14);
	return uVar15;
}

int func_502(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_503(int iParam0, bool bParam1)
{
	Var0 = { func_308(iParam0, bParam1, 0) };
	return func_320(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_504()
{
	return func_519() == 4;
}

int func_505(int iParam0)
{
	if (func_582(iParam0))
	{
		return (func_583(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_506(int iParam0)
{
	iVar0 = func_378(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_507(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_372(iParam1, 1);
	iVar1 = func_378(iParam0, 1);
	iVar2 = func_374(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_584(iVar3, 1);
		if (!func_585(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_586(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_587(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_588(iVar6))
		{
		}
		else
		{
			iVar8 = func_589(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_590(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_508(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_509(int iParam0, int iParam1)
{
	if (!func_506(iParam0))
	{
		return false;
	}
	if (!func_591(iParam1))
	{
		return false;
	}
	iVar0 = func_592(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_510(int iParam0)
{
	iVar0 = func_593(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_511(vector3 vParam0)
{
	if (!func_506(vParam0.x))
	{
		return false;
	}
	if (!func_371(vParam0.y))
	{
		return false;
	}
	if (!func_594(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_512(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_372(iParam1, 1);
	iVar1 = func_378(iParam0, 1);
	iVar2 = func_374(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_584(iVar3, 1);
		if (!func_585(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_586(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_595(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_588(iVar6))
		{
		}
		else if (!func_596(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_589(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_597(iVar6);
			}
		}
		iVar7++;
	}
	func_598(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_591(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0, 1);
	if (!func_506(iParam1))
	{
		return;
	}
	if (!func_371(iParam2))
	{
		return;
	}
	if (!func_594(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_514(int iParam0)
{
	if (!func_591(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

void func_515(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_516(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_517(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_518(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_519()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_520(int iParam0)
{
	if (func_599(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_521(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	return &(Global_1940018->f_5[iParam0]);
}

bool func_522(struct<2> Param0)
{
	return func_601(Param0, 5, 8);
}

int func_523(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_527(iVar0, 1, 0);
		if (!func_317(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_528(&(Var2[iVar34])))
				{
					if (!bParam1 || func_369(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_527(iVar0, 0, 1);
		if (!func_317(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(&(Var9[iVar41])))
				{
					if (!bParam1 || func_369(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_525(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_467(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_345() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_602(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_526(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_527(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_528(int iParam0)
{
	return func_442(iParam0) == 1946043663;
}

bool func_529(int iParam0)
{
	return func_366(iParam0) == -427144552;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

bool func_531(int iParam0)
{
	return func_442(iParam0) == 1868067663;
}

int func_532(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_533(int iParam0)
{
	iParam0 = func_532(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

int func_534(int iParam0)
{
	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_535(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_536(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
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

struct<10> func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_538(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_539(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_540(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_541(int iParam0)
{
	if (func_314(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_314(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_314(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_286(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_543(int iParam0)
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

int func_544(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_299(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_283(iParam2, 2))
	{
		if (func_300(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_283(iParam2, 8))
	{
		return func_603(iParam0, iParam1);
	}
	return 1;
}

bool func_545(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_604(Param1))
	{
		return false;
	}
	if (!func_565(iParam0, iParam18))
	{
		return false;
	}
	if (func_605(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam19);
}

struct<4> func_546()
{
	return Var0;
}

bool func_547()
{
	return (func_606(-1185145312, 0, 0, 0) > 0 && func_455(func_320(889965687, func_436(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_548(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_502(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_320(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_470(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_470(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_549(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_470(0);
	*uParam1 = { func_320(iParam0, func_437(0), iParam3, 0) };
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

bool func_550(int iParam0, int iParam1, int iParam2)
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

bool func_551(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_470(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_552(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_195(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_553(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_554(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, 0) && !func_467(func_315(iParam0), 2))
	{
		return 0;
	}
	if (func_366(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_502(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_470(bParam3), iParam0);
}

bool func_555(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_286(iParam0, 0) && !func_467(func_315(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_556(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_557(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_296(iParam1, 1) && !func_297(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_607(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_334(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_303((iVar1 + func_608(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_607(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_334(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_304((iVar3 + func_608(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_607("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_467(func_315(iParam1), 2))
	{
		if (!func_609(func_315(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_286(iParam1, 0))
	{
		if (!func_305(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_558(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_442(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_559(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_610(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_560(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_319(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_611(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_612(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_613(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_614(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_615(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_616(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_617(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_618(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_619(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_620(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_621(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_622(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_623(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_624(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_625(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_561(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8)
{
	if (!func_447(iParam0, iParam1, Param2, iParam6, bParam7, 1, iParam8, 1))
	{
		return false;
	}
	if (func_283(iParam8, 4) && func_439(iParam1, &Param2, iParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_562(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_610(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_563(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_444(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_366(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_626(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_627(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_628(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_629(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_630(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_631(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_632(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_633(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_564(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_286(uParam1->f_8, 0) && !func_467(func_315(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_283(iParam2, 128))
	{
		if (func_442(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_283(iParam2, 16))
	{
		if (!func_634(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_565(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_449(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_458(iParam0))
		{
			return false;
		}
		if (!func_449(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_566(int iParam0, int iParam1, int iParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

bool func_567(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_458(iParam0);
	}
	return true;
}

bool func_568(int iParam0, int iParam1, int iParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, iParam2, 16, iParam2, 0);
}

int func_569()
{
	if (!network_does_tunable_exist(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!network_access_tunable_int(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_571(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_573()
{
	return Global_1915715->f_20643;
}

int func_574(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_635())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_636(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

void func_576(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_577(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_578(int iParam0, var uParam1, var uParam2)
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

struct<14> func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_580(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_581(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_470(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_582(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_583(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (func_582(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_637(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_638(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_639(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_640(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_641(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_642(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_584(int iParam0, int iParam1)
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

bool func_585(int iParam0)
{
	iVar0 = func_584(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_586(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_643(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_587(int iParam0)
{
	if (!func_585(iParam0))
	{
		return;
	}
	iVar0 = func_584(iParam0, 1);
	if (!func_644(&(Global_1146212->f_2169[iVar0])))
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
	if (!func_645(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_646(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_588(int iParam0)
{
	iVar0 = func_589(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_589(int iParam0, int iParam1)
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

void func_590(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_647();
			break;
		case -2103256604:
			func_648();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_649(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_649(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_649(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_9(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_649(iParam0));
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
			func_651(func_650(iParam0));
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
			func_652();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_644(17);
			break;
		case -824728332:
			func_644(16);
			break;
	}
}

bool func_591(int iParam0)
{
	iVar0 = func_592(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_592(int iParam0, int iParam1)
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

int func_593(int iParam0)
{
	iVar0 = func_653(iParam0);
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
		iVar64 = func_378(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_654(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_655(&(Global_1146212->f_35859.f_9503[iVar65])) };
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

bool func_594(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_595(int iParam0)
{
	if (!func_585(iParam0))
	{
		return;
	}
	iVar0 = func_584(iParam0, 1);
	if (!func_644(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_645(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_646(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_596(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_656(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_597(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_647();
			break;
		case -2103256604:
			func_648();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_649(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_649(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_649(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_9(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_649(iParam0));
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
			iVar2 = func_650(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_657(iParam0, 0));
			func_658(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_657(iParam0, 1));
			func_658(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_657(iParam0, 2));
			func_658(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_657(iParam0, 3));
			func_658(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_650(iParam0);
			func_658(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_650(iParam0);
			func_658(iVar2, 4, 1, -1, 0);
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
			func_659();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_644(17);
			break;
		case -824728332:
			func_644(16);
			break;
	}
}

void func_598(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_660(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_661(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_599(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_600(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_601(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_12(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_662(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_602(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_467(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_663(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_603(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_413(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_303(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_607(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_336(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_413(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_304(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_607("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_301(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_604(struct<17> Param0)
{
	if (!func_403(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_605(int iParam0, int iParam1, int iParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_606(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_664(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_470(bParam1), iParam0, iParam3);
}

void func_607(char* sParam0)
{
	Global_1915715->f_22470 = func_233(sParam0, 10000, 0, 0, 0, 1);
}

int func_608(int* iParam0, bool bParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_334(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_609(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	if (!func_665(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_425(0)) && !func_426());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && func_304(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_303(iVar32))
			{
			}
			else
			{
				iVar33 = func_369(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_610(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_470(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_551(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_611(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_612(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_613(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_614(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_615(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_616(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_617(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_618(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_619(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	iVar0 = 9;
	iVar0.f_1.f_1 = 10;
	iVar0.f_1.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, iVar0, &iVar0, bParam4, iParam5);
}

bool func_620(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_621(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_622(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_623(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_624(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_625(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<28> func_626(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_470(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_627(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_668(func_667(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_628(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_470(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_629(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_668(func_670(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_630(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_470(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_631(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_668(func_566(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_632(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_502(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_633(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_668(func_568(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_634(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_671(uParam1->f_8, iParam0, uVar0, 2048) || func_671(uParam1->f_8, iParam0, uVar0, 32768)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 4) || func_671(uParam1->f_8, iParam0, uVar0, 256)) || func_671(uParam1->f_8, iParam0, uVar0, 65536)) || func_671(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 1) || func_671(uParam1->f_8, iParam0, uVar0, 8)) || func_671(uParam1->f_8, iParam0, uVar0, 65536)) || func_671(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 1) || func_671(uParam1->f_8, iParam0, uVar0, 16)) || func_671(uParam1->f_8, iParam0, uVar0, 2)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_671(uParam1->f_8, iParam0, uVar0, 8) || func_671(uParam1->f_8, iParam0, uVar0, 4096)) || func_671(uParam1->f_8, iParam0, uVar0, 256)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_635()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

void func_636(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_672(&(uParam0->f_4));
}

bool func_637(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_638(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_639(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_640(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_642(int iParam0)
{
	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_643(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_673(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_644(int iParam0)
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

bool func_645(int iParam0)
{
	iVar0 = func_646(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_646(int iParam0, int iParam1)
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

void func_647()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_279((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_648()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_649(int iParam0)
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

int func_650(int iParam0)
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

void func_651(int iParam0)
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

void func_652()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_653(int iParam0)
{
	if (!func_591(iParam0))
	{
		return -1;
	}
	iVar0 = func_592(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_654(int iParam0, int iParam1)
{
	if (!func_506(iParam0))
	{
		return false;
	}
	iVar0 = func_378(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_508(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_592(iVar2, 1)];
		Var4 = { func_655(iVar3) };
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
			if (!func_674() && !func_675())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_674())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_505(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_505(iParam1);
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
			iVar1 = func_505(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_676(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_677(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_505(iParam1);
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

struct<31> func_655(int iParam0)
{
	iVar0 = func_378(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_656(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_673(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_657(int iParam0, int iParam1)
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

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_659()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_660(int iParam0)
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

char* func_661(int iParam0)
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

int func_662(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_678(Param0);
	}
	return -1;
}

bool func_663(int iParam0, bool bParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_664(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_665(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_467(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xb542632693d53408(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_679(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_666(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_680(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*iParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_681(iParam0, uParam1, iParam5, iParam2, bParam6, iParam7);
}

bool func_667(int iParam0, int iParam1, int iParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, iParam2, 28, iParam2, 0);
}

int func_668(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_483(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_483(iParam1, 2, 0, 0);
	return -1;
}

int func_669(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_483(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_670(int iParam0, int iParam1, int iParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, iParam2, 25, iParam2, 0);
}

int func_671(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_279(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_672(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_673(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_682(iVar7);
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

bool func_674()
{
	return Global_1572887->f_6;
}

bool func_675()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_12(func_19(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_683(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_676(int iParam0)
{
	if (func_684(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_685(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_677(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_678(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_686(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_679(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_442(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_680(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_160(0))
	{
		iVar5 = func_411(func_18(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_436(1) };
			Var0.f_4 = func_530(iVar5);
			*uParam2->f_1[0] = { func_320(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_502(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_687(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_320(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_308(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_320(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_681(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_564(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_565(iParam0, iParam3))
	{
		return false;
	}
	if (func_688(*iParam0, iParam3, uParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam4);
}

int func_682(int iParam0)
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

bool func_683(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_684(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_685(int iParam0)
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
		func_689(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_690(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_686(struct<2> Param0, var uParam2)
{
	if (!func_12(Param0))
	{
		return false;
	}
	func_691(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_687(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_502(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_692(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

bool func_688(int iParam0, int iParam1, var uParam2, int iParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, iParam3, *iParam3);
}

void func_689(int iParam0)
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
	func_690(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_690(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_691(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_692(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_471((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_546() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

