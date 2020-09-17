void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	network_set_script_is_safe_for_network_game();
	while (func_1(&uLocal_19, &uLocal_180))
	{
		func_2(&uLocal_19, &uLocal_180);
		wait(0);
	}
	func_3(&uLocal_19, &uLocal_180);
	terminate_this_thread();
}

bool func_1(var uParam0, var uParam1)
{
	if (func_4(0, 0))
	{
		return false;
	}
	if (func_5(uParam1->f_1, 0, 0))
	{
		if (func_7(func_6()))
		{
			uParam0->f_3 |= 64;
		}
		return false;
	}
	if (uParam0->f_4.f_8 & 1 != 0)
	{
		return false;
	}
	if (*uParam0 == 5)
	{
		return false;
	}
	if (uParam0->f_4.f_8 & 4 == 4)
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, uParam1);
			break;
		case 1:
			func_9(uParam0, uParam1);
			break;
		case 2:
			func_10(uParam0, uParam1);
			break;
		case 3:
			func_11(uParam0, uParam1);
			break;
		case 4:
			func_12(uParam0, uParam1);
			break;
		case 5:
			break;
		default:
			break;
	}
}

void func_3(var uParam0, var uParam1)
{
	func_13(&(uParam0->f_32));
	func_14(&(uParam0->f_141));
	func_15(&(uParam0->f_141));
	func_16(uParam0);
	func_17(uParam0);
	if (uParam0->f_3 & 4 != 0)
	{
		uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 4);
		func_18(0);
		if (!func_19(255))
		{
			do_screen_fade_in(2000);
		}
	}
	func_20(uParam0);
	func_21();
	func_22(uParam0);
	if (func_23(uParam1->f_1))
	{
		func_24(uParam1->f_1, 0, 2, 0, 1);
	}
	if (_does_volume_exist(uParam0->f_159))
	{
		_0x74c2b3dc0b294102(uParam0->f_159);
		_delete_volume(uParam0->f_159);
	}
	_0x981c7d863980fa51();
	func_25();
	if (func_26())
	{
		if (func_27())
		{
			func_28(1);
			func_29(1);
			func_18(1);
			func_30(20);
		}
		else if (uParam0->f_3 & 4 == 4)
		{
			func_18(0);
		}
		func_32(func_31(player_id()), 0f, -1082130432, -1082130432, 1, 1, 1);
	}
	iVar0 = func_33();
	if (iVar0 != 0 && iVar0 != 4)
	{
		func_34(4);
	}
	if (iVar0 == 4)
	{
		uParam0->f_3 |= 64;
	}
	if (uParam0->f_3 & 64 == 64)
	{
		func_35(954, 1);
	}
	if (func_36(uParam0->f_146.f_1))
	{
		func_37(&(uParam0->f_146.f_1), 1, 1);
	}
	if (func_36(uParam0->f_146.f_2))
	{
		func_37(&(uParam0->f_146.f_2), 1, 1);
	}
}

bool func_4(bool bParam0, bool bParam1)
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

bool func_5(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_7(*Global_1051213) && !func_38(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
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
	if (func_41())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_7(*Global_1051213))
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

struct<2> func_6()
{
	return *Global_1051213;
}

bool func_7(struct<2> Param0)
{
	if (!func_42(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_43(Param0))
	{
		return false;
	}
	return true;
}

void func_8(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_45(func_44(*uParam1), &(uParam0->f_4)))
			{
				return;
			}
			func_46(uParam0, uParam1, 1);
			break;
		case 1:
			func_47(2);
			func_47(1);
			_0xd9130842d7226045("RDRO_Countdown_Sounds", 0);
			func_48(uParam0, uParam1, 1);
			break;
		default:
			break;
	}
}

void func_9(var uParam0, var uParam1)
{
	func_48(uParam0, uParam1, 2);
}

void func_10(var uParam0, var uParam1)
{
	func_49(uParam0);
	func_48(uParam0, uParam1, 3);
}

void func_11(var uParam0, var uParam1)
{
	func_50(uParam0, uParam1);
	func_51(&(uParam0->f_142));
	if (func_52(uParam0, uParam1))
	{
		func_48(uParam0, uParam1, 4);
	}
	func_53(*uParam1, &(uParam0->f_32), &(uParam0->f_36), &(uParam0->f_15), &(uParam0->f_4));
	func_54(&(uParam0->f_15), &uVar0);
}

void func_12(var uParam0, var uParam1)
{
	func_48(uParam0, uParam1, 5);
}

void func_13(var uParam0)
{
	if (func_55(uParam0, 1))
	{
		func_56(0);
	}
	if (func_55(uParam0, 2))
	{
		func_18(0);
	}
	if (func_55(uParam0, 4))
	{
		func_57(0);
	}
	if (!func_58(109, network_player_id_to_int()))
	{
		func_30(109);
	}
	func_59(5);
	func_60();
	_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_2, true);
}

void func_14(var uParam0)
{
	if (!func_61(uParam0, 1))
	{
		return;
	}
	if (!network_is_player_in_mp_cutscene(player_id()))
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
	func_62(uParam0, 1);
}

void func_15(var uParam0)
{
	if (!func_61(uParam0, 2))
	{
		return;
	}
	set_player_control(player_id(), true, 0, false);
	func_62(uParam0, 2);
}

void func_16(var uParam0)
{
	if (uParam0->f_3 & 1 == 0)
	{
		return;
	}
	if ((uParam0->f_2 != 6 && uParam0->f_2 != 7) && uParam0->f_3 & 8 != 0)
	{
		animpostfx_stop("MP_NaturalistAnimalTransformStart");
		_0x9428447ded71fc7e("NATAC_Screen_Overlay_Fade_From_Black");
		_0x0f2a2175734926d8("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
		uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 8);
	}
	_0xc5cb91d65852ed7e("MP_OutofAreaDirectional");
	_0x9428447ded71fc7e("out_of_bounds_scenes");
	_0x0f2a2175734926d8("out_of_bounds_animal_control", "RDRO_Countdown_Sounds");
	play_sound_frontend("OOB_return", "RDRO_Out_Of_Bounds_Sounds", true, 0);
	uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 1);
}

void func_17(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4.f_10))
	{
		_delete_volume(uParam0->f_4.f_10);
	}
}

void func_18(bool bParam0)
{
	if (!bParam0)
	{
		func_63(18);
	}
	else
	{
		func_30(18);
	}
}

bool func_19(int iParam0)
{
	return func_58(1, iParam0);
}

void func_20(var uParam0)
{
	if (uParam0->f_3 & 1 == 0)
	{
		return;
	}
	animpostfx_stop("MP_NaturalistAnimalTransformEnd");
	_0x9428447ded71fc7e("MP007_NATAC_Sceneset");
	uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 1);
}

void func_21()
{
	if (func_64())
	{
		remove_entity_from_audio_mix_group(Global_34, 0f);
	}
	_0x9428447ded71fc7e("RDRO_Animal_Essence_Scene");
	_0x9428447ded71fc7e("RDRO_Countdown_Sounds");
	_0x0f2a2175734926d8("out_of_bounds_animal_control", "RDRO_Countdown_Sounds");
	_0x531a78d6bf27014b("RDRO_Countdown_Sounds");
}

void func_22(var uParam0)
{
	if (uParam0->f_3 & 128 == 0 && Global_1071686->f_21689.f_257 == 0)
	{
		return;
	}
	iVar0 = &Global_1296859;
	Global_1071686->f_21689.f_257 = 0;
	func_65(iVar0, 0);
	func_66(iVar0, 2);
	uParam0->f_3 = (uParam0->f_3 - 128);
}

bool func_23(struct<2> Param0)
{
	iVar0 = func_67(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_24(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_7(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_23(Param0) && !func_68(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_69(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_67(Param0) == 3)
		{
			func_70(1, -1706799532);
		}
		else if (func_67(Param0) == 4)
		{
			func_70(0, -1706799532);
		}
	}
	if ((func_67(Param0) == 3 || func_67(Param0) == 1) || ((bParam5 && func_67(Param0) == 4) && _0x01f4d242765c6b24(func_69(Param0))))
	{
		if (iParam3 != -1)
		{
			func_71(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_71(Param0, 2, iParam4, 255, 0);
		}
	}
	func_72(Param0, 0);
	if (func_38(func_73(0), Param0))
	{
		func_74(1);
		func_75(0);
		func_76(0);
		func_77(1);
	}
	func_78(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_79(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_25()
{
	Global_1913504 = 0;
}

bool func_26()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_27()
{
	return Global_1572887->f_106.f_75 != 1;
}

void func_28(bool bParam0)
{
	if (!bParam0)
	{
		func_63(25);
	}
	else
	{
		func_30(25);
	}
}

void func_29(bool bParam0)
{
	if (!bParam0)
	{
		func_63(19);
	}
	else
	{
		func_30(19);
	}
}

int func_30(int iParam0)
{
	if (func_80(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

Vector3 func_31(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_32(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_81(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_82(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_33()
{
	return Global_1301323->f_288;
}

void func_34(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_35(int iParam0, bool bParam1)
{
	func_83(iParam0, &iVar0, &iVar1);
	if (!func_84(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_85(iVar0, iVar1);
}

bool func_36(int iParam0)
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

void func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_36(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_86(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_87(iVar0);
	*uParam0 = 0;
}

bool func_38(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_39(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

bool func_41()
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
	if (!func_7(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
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

int func_43(int iParam0)
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

int func_44(int iParam0)
{
	return Global_1301323->f_1[iParam0]->f_4;
}

bool func_45(int iParam0, var uParam1)
{
	if (!func_88(&Var0))
	{
		return false;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 17, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = { func_90(Var0) };
	uParam1->f_3 = func_91(Var0);
	uParam1->f_6 = func_92(Var0);
	uParam1->f_7 = func_93(Var0);
	uParam1->f_8 |= 1073741824;
	return true;
}

void func_46(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_1 = iParam2;
}

void func_47(int iParam0)
{
	Global_1301323->f_288.f_2 = (Global_1301323->f_288.f_2 - (Global_1301323->f_288.f_2 && iParam0));
}

void func_48(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = iParam2;
}

void func_49(var uParam0)
{
	vVar0 = { uParam0->f_4 };
	vVar3 = { 0f, 0f, 0f };
	vVar6 = { uParam0->f_4.f_3, uParam0->f_4.f_3, (uParam0->f_4.f_3 / 4f) };
	uParam0->f_4.f_10 = _create_volume_by_hash_with_custom_name(-432403087, vVar0, vVar3, vVar6, "Mission Area");
}

void func_50(var uParam0, var uParam1)
{
	iVar1 = get_number_of_events(1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -507840394:
				if (!get_event_data(1, iVar0, &iVar2, 4))
				{
				}
				else
				{
					switch (iVar2)
					{
						case 11:
							break;
					}
				}
		}
		iVar0++;
	}
}

void func_51(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_94(uParam0);
	}
	else
	{
		func_95(uParam0);
	}
}

bool func_52(var uParam0, var uParam1)
{
	func_96();
	_0xc9caeaeec1256e54(946989305);
	func_97(uParam0);
	switch (uParam0->f_2)
	{
		case 0:
			if (func_19(255))
			{
				return false;
			}
			_0xb958d97a0dfaa0c2("MP_NaturalistAnimalTransformStart");
			func_98(uParam0, uParam1, 1);
			break;
		case 1:
			if (func_99(*uParam1, &(uParam0->f_91)) == 0)
			{
				return false;
			}
			func_100(func_44(*uParam1), -1940466179, uParam0->f_91.f_11, &Var0);
			func_101(uParam1->f_1, 1);
			func_102(uParam1->f_1, 1, 0, 1);
			func_104(func_103(*uParam1), 974042365);
			func_104(func_103(*uParam1), -2081031854);
			func_105(func_103(*uParam1));
			if (func_33() == 0)
			{
				func_18(1);
				uParam0->f_3 |= 4;
			}
			func_106(func_103(*uParam1), Var0, Var0.f_3);
			func_107(1);
			if (func_108(-1518504958, 1, 600942249, 0))
			{
				uParam0->f_3 |= 256;
			}
			func_98(uParam0, uParam1, 2);
			break;
		case 2:
			if (func_19(255))
			{
				return false;
			}
			if (uParam0->f_3 & 4 == 4)
			{
				func_109(Global_34);
				_set_entity_health(Global_34, get_entity_max_health(Global_34, true), 0);
				func_98(uParam0, uParam1, 3);
			}
			else
			{
				uParam0->f_4.f_5 = get_game_timer();
				func_98(uParam0, uParam1, 4);
			}
			break;
		case 3:
			if (Global_1301323->f_298 && uParam0->f_3 & 1024 != 1024)
			{
				uParam0->f_160 = get_game_timer();
				uParam0->f_3 |= 1024;
			}
			if (Global_1301323->f_298)
			{
				if (uParam0->f_3 & 1024 == 1024 && (get_game_timer() - uParam0->f_160) >= 3000)
				{
				}
				else if ((get_game_timer() - func_110()) < 3000)
				{
					return false;
				}
			}
			else if ((get_game_timer() - func_110()) < 3000)
			{
				return false;
			}
			uParam0->f_4.f_5 = get_game_timer();
			func_111(uParam0);
			do_screen_fade_in(1);
			func_112(&(uParam0->f_142), 4);
			func_112(&(uParam0->f_142), 8);
			func_98(uParam0, uParam1, 4);
			break;
		case 4:
			if ((Global_1301323->f_297 && is_screen_faded_out()) && uParam0->f_3 & 2048 != 2048)
			{
				uParam0->f_160 = get_game_timer();
				uParam0->f_3 |= 2048;
			}
			if (uParam0->f_3 & 4096 == 4096)
			{
				if (uParam0->f_3 & 2048 == 2048)
				{
					if (is_screen_faded_out())
					{
						if ((get_game_timer() - uParam0->f_160) >= 3000)
						{
							if (func_19(255))
							{
							}
							else if (func_27())
							{
							}
							else if (func_33() == 0)
							{
								if (uParam0->f_4.f_8 & 2 != 2)
								{
									do_screen_fade_in(1);
									uParam0->f_3 |= 4096;
								}
							}
						}
					}
					else
					{
						uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 2048);
					}
				}
			}
			if (get_game_timer() >= uParam0->f_4.f_5 + 10000)
			{
				func_25();
			}
			if (get_is_task_active(Global_34, 15))
			{
				func_113(uParam0);
			}
			else
			{
				func_22(uParam0);
			}
			func_114(uParam0, uParam1);
			if (get_game_timer() >= uParam0->f_4.f_5 + 5000 && uParam0->f_3 & 32 == 0)
			{
				_0x9428447ded71fc7e("MP007_NATAC_Sceneset");
				uParam0->f_3 |= 32;
			}
			else if (is_player_dead(player_id()))
			{
				func_98(uParam0, uParam1, 5);
			}
			else if ((uParam0->f_4.f_5 + uParam0->f_4.f_7) < get_game_timer() + 2000)
			{
				func_115(uParam0);
			}
			if (uParam0->f_4.f_5 + uParam0->f_4.f_7) < get_game_timer()
			{
				func_98(uParam0, uParam1, 7);
			}
			else if (func_33() != 0)
			{
				func_98(uParam0, uParam1, 8);
			}
			else
			{
				if (!func_116(&(uParam0->f_142), 16))
				{
					if ((uParam0->f_4.f_5 + uParam0->f_4.f_7) - 60000) <= get_game_timer()
					{
						func_112(&(uParam0->f_142), 16);
					}
				}
				if (func_117(Global_35, uParam0->f_4) >= uParam0->f_4.f_3)
				{
					func_118(uParam0, 1);
					if (uParam0->f_4.f_8 & 2 != 0)
					{
						func_118(uParam0, 0);
						if ((get_game_timer() - uParam0->f_4.f_4) >= (uParam0->f_4.f_6 - 2000) && uParam0->f_3 & 8 == 0)
						{
							func_115(uParam0);
						}
						else if ((get_game_timer() - uParam0->f_4.f_4) >= uParam0->f_4.f_6)
						{
							func_98(uParam0, uParam1, 6);
						}
					}
					else
					{
						uParam0->f_4.f_4 = get_game_timer();
						uParam0->f_4.f_8 |= 2;
						func_119(uParam0);
					}
				}
				else
				{
					if (uParam0->f_4.f_8 & 2 != 0)
					{
						func_16(uParam0);
					}
					uParam0->f_4.f_8 = (uParam0->f_4.f_8 - uParam0->f_4.f_8 & 2);
				}
			}
			break;
		case 5:
			func_120(uParam0, uParam1, 1);
			func_121(uParam0);
			func_98(uParam0, uParam1, 9);
			break;
		case 6:
			func_120(uParam0, uParam1, 2);
			func_98(uParam0, uParam1, 9);
			break;
		case 7:
			func_120(uParam0, uParam1, 0);
			func_98(uParam0, uParam1, 9);
			break;
		case 8:
			func_120(uParam0, uParam1, 2);
			switch (func_122())
			{
				case 2:
					uParam0->f_4.f_8 |= 4;
					break;
				default:
					func_98(uParam0, uParam1, 9);
					func_34(3);
					break;
			}
			break;
		case 9:
			if (!func_123(player_id(), 2))
			{
				func_124(get_network_time_accurate());
				func_125(get_game_timer());
				func_107(2);
			}
			if (get_game_timer() - func_126()) <= func_127()
			{
			}
			else
			{
				func_128(uParam0);
				func_22(uParam0);
				_0x0f2a2175734926d8("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
				play_sound_frontend("Animal_Control_Enter_Whoosh ", "Animal_Control_Screen_Overlay_Sounds", true, 0);
				_0x9428447ded71fc7e("MP007_NATAC_Sceneset");
				func_129(&(uParam0->f_141));
				func_130(&(uParam0->f_32));
				func_131(get_game_timer());
				func_98(uParam0, uParam1, 10);
				Jump @1774; //curOff = 1539
				if (uParam0->f_32 == 0)
				{
					func_98(uParam0, uParam1, 11);
				}
				Jump @1774; //curOff = 1560
				if (uParam0->f_32 == 5)
				{
					if (!func_19(255))
					{
						if (!_does_volume_exist(uParam0->f_159))
						{
							uParam0->f_159 = _create_volume_by_hash(-432403087, func_31(player_id()), 0f, 0f, 0f, 25f, 25f, 25f);
							_0xb56d41a694e42e86(uParam0->f_159, 2232351, 0, 0, -1, -1, 0);
						}
					}
				}
				if (uParam0->f_15 == -1)
				{
					func_132(4);
					func_14(&(uParam0->f_141));
					func_98(uParam0, uParam1, 12);
				}
				Jump @1774; //curOff = 1680
				func_112(&(Global_1301323->f_291), 2);
				if (func_23(uParam1->f_1))
				{
					func_24(uParam1->f_1, 0, uParam0->f_4.f_9, 0, 1);
				}
				if (func_33() != 0)
				{
					func_34(4);
				}
				if (_does_volume_exist(uParam0->f_159))
				{
					_0x74c2b3dc0b294102(uParam0->f_159);
					_delete_volume(uParam0->f_159);
				}
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_133(255))
	{
		func_56(1);
		func_134(uParam1, 1);
		func_135();
	}
	switch (*uParam1)
	{
		case 0:
			break;
		case 1:
			uParam1->f_2 = -1695769350;
			func_136(iParam0, uParam1, uParam2, uParam4);
			if (uParam1->f_3 > -1)
			{
				func_137(uParam1, 2);
			}
			break;
		case 2:
			func_138(iParam0, uParam1->f_2, uParam1->f_3, &Var0);
			if (func_19(255))
			{
				func_139(Var0, Var0.f_3, 0f, 0f, 0f, 0);
				func_137(uParam1, 4);
			}
			else
			{
				func_140(Var0, Var0.f_3, 1);
				func_137(uParam1, 3);
			}
			break;
		case 3:
			if (func_19(255))
			{
				func_137(uParam1, 4);
			}
			break;
		case 4:
			if (!func_19(255))
			{
				func_143(uParam3, func_141(uParam1->f_2), func_44(iParam0), func_142(iParam0));
				func_144(uParam1, 8);
				func_137(uParam1, 5);
				func_145();
				func_146(1);
				func_146(2);
			}
			break;
		case 5:
			if (*uParam3 == -1)
			{
				func_137(uParam1, 6);
			}
			break;
		case 6:
			uParam1->f_2 = 0;
			uParam1->f_3 = -1;
			func_137(uParam1, 0);
			break;
		default:
			break;
	}
}

int func_54(var uParam0, var uParam1)
{
	bVar0 = true;
	*uParam1 = uParam0->f_5;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_147(uParam0))
		{
			case -1:
				break;
			case 0:
				func_148(uParam0, 1);
				break;
			case 1:
				func_149(uParam0);
				break;
			case 2:
				func_150(uParam0);
				break;
			case 3:
				func_151(uParam0);
				break;
			case 4:
				func_152(uParam0);
				break;
			case 5:
				func_153(uParam0);
				break;
			case 6:
				func_154(uParam0);
				break;
			case 7:
				func_155(uParam0);
				break;
			case 8:
				func_156(uParam0);
				break;
			case 9:
				func_157(uParam0);
				break;
			case 10:
				func_158(uParam0);
				iVar1 = 1;
				func_158(uParam0);
				break;
			default:
				break;
		}
		bVar0 = func_159(uParam0);
	}
	return iVar1;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
		func_30(49);
	}
	else
	{
		func_63(49);
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		func_30(129);
	}
	else
	{
		func_63(129);
	}
}

bool func_58(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_160(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_161())
	{
		return func_160(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_160(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_59(int iParam0)
{
	if (func_162(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	func_163();
	func_164();
}

bool func_61(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_63(int iParam0)
{
	if (func_162(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	switch (func_165())
	{
		case -1009665394:
		case 1237752161:
			return true;
	}
	return false;
}

void func_65(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_3 != iParam1)
	{
		Global_1071686->f_21689[iParam0]->f_3 = iParam1;
		func_166(iParam0);
	}
}

void func_66(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_3 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_3 = iParam1;
		func_166(iParam0);
	}
}

int func_67(struct<2> Param0)
{
	if (!func_7(Param0))
	{
		return -1;
	}
	iVar0 = func_167(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_68(struct<2> Param0)
{
	iVar0 = func_67(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_69(struct<2> Param0)
{
	return func_168(Param0);
}

int func_70(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_169())
	{
		return 0;
	}
	if (!func_170())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_171(&Global_0, 8);
	}
	func_171(&Global_0, 1);
	return 1;
}

void func_71(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_172(func_79(Param0));
	iVar1 = func_69(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_173() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_174(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_72(struct<2> Param0, int iParam2)
{
	if (!func_7(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_175(Param0);
	}
	else
	{
		func_176(Param0, iParam2);
	}
	func_177();
}

struct<2> func_73(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_178(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_179(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_75(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_180(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_181(cVar2);
			}
			else
			{
				func_182();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_76(bool bParam0)
{
	if (!bParam0 && func_183(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_77(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_78(struct<2> Param0)
{
	return func_185(func_184(Param0));
}

int func_79(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_81(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_186(vParam0)];
	iVar1 = func_187(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_188(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_82(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_189(255) == 4)
	{
		return;
	}
	if (func_190(vParam0))
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
		func_191(0, 0, 0, 1);
	}
	func_30(0);
	func_30(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_192(&(Global_1102219->f_3849));
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
	func_193(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_194(Global_1102219->f_3849, 36);
	func_195(Global_1102219->f_3888, 36);
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_84(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_196(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_197(iParam0))
	{
		return false;
	}
	if (func_198(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_199(iParam0, 1)) || func_200(32768))
	{
		if (!func_199(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_201())
	{
		return false;
	}
	return true;
}

void func_85(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_86(int iParam0)
{
	return iParam0;
}

void func_87(int iParam0)
{
	if (!func_202(iParam0))
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

bool func_88(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 5);
	if (!func_203(1))
	{
		return false;
	}
	*uParam0 = Global_1071686->f_28448[51]->f_3;
	return true;
}

bool func_89(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

Vector3 func_90(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_204(&uParam0, 62, 1);
}

var func_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_205(&uParam0, 63, 1);
}

int func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_206(&uParam0, 75, 1, 0) * 1000;
}

int func_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_206(&uParam0, 76, 1, 0) * 1000;
}

void func_94(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_207())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!is_bit_set(*uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = floor(pow(2f, to_float(iVar0)));
			if (!func_208(uParam0, iVar1))
			{
			}
			else
			{
				func_209(uParam0, iVar1);
				func_210(uParam0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_95(var uParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0 || iVar0 != uParam0->f_3)
	{
		if (func_211(uParam0->f_1))
		{
			func_212(uParam0, uParam0->f_1);
		}
		func_213(uParam0, 0);
		func_214(uParam0, 0);
	}
}

void func_96()
{
	func_215(0);
}

void func_97(var uParam0)
{
	if (uParam0->f_3 & 16 == 0)
	{
		if (_0xfbf161fcfec8589e("MP_NaturalistAnimalTransformStart", 2, 0, &uVar0))
		{
			_0x0f2a2175734926d8("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
			play_sound_frontend("Animal_Control_Enter_Whoosh", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			_0xa201a3d0ac087c37("MP_NaturalistAnimalTransformStart");
			uParam0->f_3 |= 16;
		}
	}
}

void func_98(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = iParam2;
}

int func_99(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			uParam1->f_9 = func_216(iParam0, -1940466179);
			fVar9 = 100000f;
			iVar0 = 0;
			while (iVar0 < uParam1->f_9)
			{
				func_138(iParam0, -1940466179, iVar0, &vVar5);
				fVar3 = func_217(vVar5, Global_35);
				if (fVar3 < fVar9)
				{
					fVar9 = fVar3;
					uParam1->f_10 = iVar0;
				}
				iVar0++;
			}
			func_218(uParam1, 1);
			break;
		case 1:
			func_138(iParam0, -1940466179, 0, &vVar5);
			iVar10 = create_itemset(true);
			uParam1->f_49 = _0x59b57c4b06531e1e(vVar5, 20f, iVar10, 2);
			if (uParam1->f_49 > 0)
			{
				if (uParam1->f_49 <= uParam1->f_12)
				{
				}
				else
				{
					uParam1->f_49 = uParam1->f_12;
				}
				iVar2 = 0;
				iVar0 = 0;
				while (iVar0 < uParam1->f_49)
				{
					iVar11 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iVar10));
					if (does_entity_exist(iVar11))
					{
						*uParam1->f_12[iVar2] = { get_entity_coords(iVar11, false, false) };
						iVar2++;
					}
					iVar0++;
				}
				if (iVar0 > iVar2)
				{
					uParam1->f_49 = iVar2;
				}
				func_218(uParam1, 2);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < uParam1->f_9)
				{
					uParam1->f_1[iVar0] = (5f * 5f);
					iVar0++;
				}
				func_218(uParam1, 3);
			}
			destroy_itemset(iVar10);
			break;
		case 2:
			fVar4 = (5f * 5f);
			iVar1 = 0;
			while (iVar1 < uParam1->f_9)
			{
				func_138(iParam0, -1940466179, iVar1, &vVar5);
				uParam1->f_1[iVar1] = fVar4;
				iVar0 = 0;
				while (iVar0 < uParam1->f_49)
				{
					fVar3 = func_217(vVar5, *uParam1->f_12[iVar0]);
					if (fVar3 < &uParam1->f_1[iVar1])
					{
						uParam1->f_1[iVar1] = fVar3;
					}
					iVar0++;
				}
				iVar1++;
			}
			func_218(uParam1, 3);
			break;
		case 3:
			iVar12 = create_itemset(true);
			func_138(iParam0, -1940466179, 0, &vVar5);
			uParam1->f_49 = _0x59b57c4b06531e1e(vVar5, 20f, iVar12, 1);
			if (uParam1->f_49 > 0)
			{
				if (uParam1->f_49 <= uParam1->f_12)
				{
				}
				else
				{
					uParam1->f_49 = uParam1->f_12;
				}
				iVar2 = 0;
				iVar0 = 0;
				while (iVar0 < uParam1->f_49)
				{
					iVar13 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iVar12));
					if (does_entity_exist(iVar13) && get_ped_index_from_entity_index(iVar13) != Global_34)
					{
						*uParam1->f_12[iVar2] = { get_entity_coords(iVar13, false, false) };
						iVar2++;
					}
					iVar0++;
				}
				if (uParam1->f_49 > iVar2)
				{
					uParam1->f_49 = iVar2;
					if (uParam1->f_49 <= 0)
					{
						func_218(uParam1, 5);
					}
				}
				func_218(uParam1, 4);
			}
			else
			{
				func_218(uParam1, 5);
			}
			destroy_itemset(iVar12);
			break;
		case 4:
			iVar1 = 0;
			while (iVar1 < uParam1->f_9)
			{
				func_138(iParam0, -1940466179, iVar1, &vVar5);
				iVar0 = 0;
				while (iVar0 < uParam1->f_49)
				{
					fVar3 = func_217(vVar5, *uParam1->f_12[iVar0]);
					if (fVar3 < &uParam1->f_1[iVar1])
					{
						uParam1->f_1[iVar1] = fVar3;
					}
					iVar0++;
				}
				iVar1++;
			}
			func_218(uParam1, 5);
			break;
		case 5:
			fVar14 = (5f * 5f);
			iVar15 = get_unique_int_for_player(player_id());
			iVar16 = (iVar15 % uParam1->f_9);
			if (&uParam1->f_1[iVar16] >= fVar14)
			{
				uParam1->f_11 = iVar16;
				func_218(uParam1, 6);
				return 1;
			}
			if (&uParam1->f_1[uParam1->f_10] >= fVar14)
			{
				uParam1->f_11 = uParam1->f_10;
				func_218(uParam1, 6);
				return 1;
			}
			fVar17 = 0f;
			iVar18 = -1;
			iVar1 = 0;
			while (iVar1 < uParam1->f_9)
			{
				if (&uParam1->f_1[iVar1] >= fVar14)
				{
					uParam1->f_11 = iVar1;
					func_218(uParam1, 6);
					return 1;
				}
				else if (&uParam1->f_1[iVar1] > fVar17)
				{
					fVar17 = &uParam1->f_1[iVar1];
					iVar18 = iVar1;
				}
				iVar1++;
			}
			if (iVar18 > -1)
			{
				uParam1->f_11 = iVar18;
			}
			else
			{
				uParam1->f_11 = uParam1->f_10;
			}
			func_218(uParam1, 6);
			return 1;
		case 6:
			return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_88(&Var0))
	{
		return 0;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 18, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 19, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 21, iParam2, 0, 1))
	{
		return 0;
	}
	*uParam3 = { func_90(Var0) };
	uParam3->f_3 = func_219(Var0);
	return 1;
}

void func_101(struct<2> Param0, bool bParam2)
{
	if (!func_7(Param0))
	{
		return;
	}
	if (!func_220(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_221(Param0);
	}
	func_72(Param0, 1);
	bParam2 = bParam2;
}

void func_102(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_7(Param0))
	{
		return;
	}
	if (!func_68(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_222(Param0);
	}
	if (!func_7(func_73(0)))
	{
		func_72(Param0, 3);
		func_74(bParam3);
		func_75(!bParam4);
		func_223(Param0, -1);
		if (bParam2 && !func_200(2))
		{
			func_171(&Global_0, 1024);
		}
		func_77(1);
	}
	else
	{
		func_223(Param0, -1);
		func_72(Param0, 4);
		func_224(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_79(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_225(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_103(int iParam0)
{
	return Global_1301323->f_1[iParam0]->f_7;
}

void func_104(int iParam0, int iParam1)
{
	if (!func_226(iParam0, iParam1, &uVar0))
	{
		return;
	}
	if (!_stat_id_is_valid(&uVar0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uVar0, 1);
}

void func_105(int iParam0)
{
	if (!func_227(-728035156, &uVar0))
	{
		return;
	}
	if (!_stat_id_is_valid(&uVar0))
	{
		return;
	}
	stat_id_set_int(&uVar0, iParam0, true);
}

void func_106(int iParam0, vector3 vParam1, var uParam4)
{
	func_228(iParam0);
	func_140(vParam1, uParam4, 1);
}

void func_107(int iParam0)
{
	(*Global_1100469)[player_id()]->f_51.f_1 = ((*Global_1100469)[player_id()]->f_51.f_1 || iParam0);
}

bool func_108(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_229(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

void func_109(int iParam0)
{
	iVar0 = 100;
	switch (func_165())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	_0x7ff72de061df55e2(iParam0, 0, 1f);
	set_entity_max_health(iParam0, iVar0);
}

int func_110()
{
	return Global_1301323->f_295;
}

void func_111(var uParam0)
{
	if (uParam0->f_3 & 1 != 0)
	{
		return;
	}
	do_screen_fade_in(1);
	_0x6339c1ea3979b5f7("player", "RDRO_Animal_Essence_Scenes");
	if (func_64())
	{
		add_entity_to_audio_mix_group(Global_34, "RDRO_Animal_Essence_Small_Animal_group", 0f);
	}
	_0x0b787a37eedd226f(Global_34, -1);
	func_63(109);
	_0x6339c1ea3979b5f7("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
	play_sound_frontend("Animal_Control_Enter_Post", "Animal_Control_Screen_Overlay_Sounds", true, 0);
	animpostfx_play("MP_NaturalistAnimalTransformEnd");
	uParam0->f_3 |= 2;
	uParam0->f_3 = (uParam0->f_3 - uParam0->f_3 & 4);
}

void func_112(var uParam0, int iParam1)
{
	if (func_230(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_113(var uParam0)
{
	if (uParam0->f_3 & 128 != 0)
	{
		return;
	}
	iVar0 = &Global_1296859;
	Global_1071686->f_21689.f_257 = 1754506823;
	func_65(iVar0, 1877557666);
	func_66(iVar0, 0);
	uParam0->f_3 |= 128;
}

void func_114(var uParam0, var uParam1)
{
	bVar0 = uParam0->f_4.f_8 & 2 == 2;
	bVar1 = (uParam0->f_4.f_5 + uParam0->f_4.f_7) < get_game_timer() + 2000;
	bVar2 = func_33() != false;
	bVar3 = uParam0->f_2 < 4;
	if (((bVar1 || bVar2) || bVar3) && uParam0->f_146 != 5)
	{
		func_231(uParam0, uParam1, 4);
	}
	switch (uParam0->f_146)
	{
		case 0:
			if (get_game_timer() < (uParam0->f_4.f_5 + (uParam0->f_4.f_7 - 65000)))
			{
				return;
			}
			if (uParam0->f_3 & 256 != 256)
			{
				return;
			}
			func_231(uParam0, uParam1, 1);
			break;
		case 1:
			uParam0->f_146.f_3 = _uiprompt_get_group_id_for_target_entity(get_player_ped(player_id()));
			uParam0->f_146.f_4 = { func_232(func_103(*uParam1)) };
			uParam0->f_146.f_1 = func_233(&(uParam0->f_146.f_4), -1053137564, get_player_ped(player_id()), 3, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			uParam0->f_146.f_2 = func_233("ANIMAL_TRANSFORMATION_EXTEND", 1138488863, get_player_ped(player_id()), 3, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_234(uParam0->f_146.f_1), uParam0->f_146.f_3, 0);
			_uiprompt_set_group(func_234(uParam0->f_146.f_2), uParam0->f_146.f_3, 0);
			_uiprompt_set_active_group_this_frame(uParam0->f_146.f_3, "", 1, 0, 0, 0);
			func_235(uParam0->f_146.f_1, 1, 1);
			func_236(uParam0->f_146.f_1, 1, 1, 1);
			func_236(uParam0->f_146.f_2, 0, 1, 1);
			func_235(uParam0->f_146.f_2, 0, 1);
			func_231(uParam0, uParam1, 2);
			break;
		case 2:
			_uiprompt_set_active_group_this_frame(uParam0->f_146.f_3, "", 1, 0, 0, 0);
			if (get_game_timer() >= (uParam0->f_4.f_5 + (uParam0->f_4.f_7 - 5000)))
			{
				func_235(uParam0->f_146.f_1, 0, 1);
				func_236(uParam0->f_146.f_1, 0, 1, 1);
				func_236(uParam0->f_146.f_2, 0, 1, 1);
				func_235(uParam0->f_146.f_2, 0, 1);
				func_231(uParam0, uParam1, 4);
				return;
			}
			if (bVar0)
			{
				func_235(uParam0->f_146.f_1, 0, 1);
				func_236(uParam0->f_146.f_1, 0, 1, 1);
			}
			else
			{
				func_235(uParam0->f_146.f_1, 1, 1);
				func_236(uParam0->f_146.f_1, 1, 1, 1);
			}
			if (func_237(uParam0->f_146.f_1, 1))
			{
				func_235(uParam0->f_146.f_1, 0, 1);
				func_235(uParam0->f_146.f_2, 1, 1);
				func_236(uParam0->f_146.f_2, 1, 1, 1);
				_uiprompt_set_active_group_this_frame(uParam0->f_146.f_3, &(uParam0->f_146.f_4), 1, 0, 0, 0);
				func_231(uParam0, uParam1, 3);
			}
			break;
		case 3:
			_uiprompt_set_active_group_this_frame(uParam0->f_146.f_3, &(uParam0->f_146.f_4), 1, 0, 0, 0);
			if (get_game_timer() >= (uParam0->f_4.f_5 + (uParam0->f_4.f_7 - 5000)))
			{
				func_235(uParam0->f_146.f_1, 0, 1);
				func_236(uParam0->f_146.f_1, 0, 1, 1);
				func_236(uParam0->f_146.f_2, 0, 1, 1);
				func_235(uParam0->f_146.f_2, 0, 1);
				func_231(uParam0, uParam1, 4);
				return;
			}
			if (bVar0)
			{
				func_236(uParam0->f_146.f_2, 0, 1, 1);
				func_235(uParam0->f_146.f_2, 0, 1);
			}
			else
			{
				func_235(uParam0->f_146.f_2, 1, 1);
				func_236(uParam0->f_146.f_2, 1, 1, 1);
			}
			if (!func_238(uParam0->f_146.f_1, 1))
			{
				func_235(uParam0->f_146.f_1, 1, 1);
				func_236(uParam0->f_146.f_2, 0, 1, 1);
				func_235(uParam0->f_146.f_2, 0, 1);
				_uiprompt_set_active_group_this_frame(uParam0->f_146.f_3, "", 1, 0, 0, 0);
				func_231(uParam0, uParam1, 2);
			}
			if (func_237(uParam0->f_146.f_2, 1))
			{
				func_239(-1518504958, 600942249, 1, 0);
				func_236(uParam0->f_146.f_2, 0, 1, 1);
				func_235(uParam0->f_146.f_2, 0, 1);
				uParam0->f_3 |= 512;
				uParam0->f_4.f_7 = (uParam0->f_4.f_7 + Global_1901947->f_308.f_274);
				func_231(uParam0, uParam1, 4);
			}
			break;
		case 4:
			if (func_36(uParam0->f_146.f_1))
			{
				func_37(&(uParam0->f_146.f_1), 1, 1);
			}
			if (func_36(uParam0->f_146.f_2))
			{
				func_37(&(uParam0->f_146.f_2), 1, 1);
			}
			func_231(uParam0, uParam1, 5);
			break;
		case 5:
			break;
		default:
			break;
	}
}

void func_115(var uParam0)
{
	if (uParam0->f_3 & 8 != 0)
	{
		return;
	}
	play_sound_frontend("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds", true, 0);
	if (uParam0->f_3 & 1 == 0)
	{
		_0x6339c1ea3979b5f7("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
	}
	animpostfx_play("MP_NaturalistAnimalTransformStart");
	uParam0->f_158 = to_float(get_game_timer());
	uParam0->f_3 |= 8;
}

bool func_116(var uParam0, int iParam1)
{
	return ((func_240(uParam0, iParam1) || func_230(uParam0, iParam1)) || uParam0->f_1 == iParam1);
}

float func_117(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_118(var uParam0, bool bParam1)
{
	if (uParam0->f_3 & 8 != 0)
	{
		return;
	}
	_0x981c7d863980fa51();
	if (bParam1)
	{
		_0x48fe0db54045b975(1, _0xf70f00013a62f866(uParam0->f_4.f_10), uParam0->f_4.f_3, 1f, 0f);
	}
	else
	{
		_0x735762e8d7573e42(1, uParam0->f_4.f_10, 2.5f);
	}
}

void func_119(var uParam0)
{
	if (uParam0->f_3 & 1 != 0)
	{
		return;
	}
	animpostfx_play("MP_OutofAreaDirectional");
	if (_0xd9130842d7226045("RDRO_Countdown_Sounds", 0))
	{
		play_sound_frontend("out_of_bounds_animal_control", "RDRO_Countdown_Sounds", true, 0);
	}
	_0x6339c1ea3979b5f7("default", "out_of_bounds_scenes");
	uParam0->f_3 |= 1;
}

void func_120(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_4.f_9 = iParam2;
}

void func_121(var uParam0)
{
	if (uParam0->f_3 & 1 == 0)
	{
		return;
	}
	_0x981c7d863980fa51();
	_0x9428447ded71fc7e("out_of_bounds_scenes");
	_0x0f2a2175734926d8("out_of_bounds_animal_control", "RDRO_Countdown_Sounds");
}

int func_122()
{
	return Global_1301323->f_288.f_1;
}

bool func_123(int iParam0, int iParam1)
{
	return ((*Global_1100469)[iParam0]->f_51.f_1 && iParam1) != 0;
}

void func_124(int iParam0)
{
	(*Global_1100469)[player_id()]->f_51 = iParam0;
}

void func_125(int iParam0)
{
	Global_1301323->f_155.f_1 = iParam0;
}

int func_126()
{
	return Global_1301323->f_155.f_1;
}

int func_127()
{
	return 3000;
}

void func_128(var uParam0)
{
	if (uParam0->f_3 & 1 == 0)
	{
		return;
	}
	play_sound_frontend("OOB_animal_control_fade_to_black", "RDRO_Countdown_Sounds", true, 0);
}

void func_129(var uParam0)
{
	if (func_61(uParam0, 1))
	{
		return;
	}
	if (network_is_player_in_mp_cutscene(player_id()))
	{
		return;
	}
	set_local_player_visible_in_cutscene(1, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
	func_241(uParam0, 1);
}

void func_130(var uParam0)
{
	if (*uParam0 != 0)
	{
		return;
	}
	func_18(1);
	func_57(1);
	func_134(uParam0, 2);
	func_134(uParam0, 4);
	func_137(uParam0, 1);
}

void func_131(int iParam0)
{
	Global_1301323->f_296 = iParam0;
}

void func_132(int iParam0)
{
	func_242(&(Global_1051439->f_4674), iParam0);
}

bool func_133(int iParam0)
{
	return func_58(49, iParam0);
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_135()
{
	func_243(5);
	func_244();
	_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_2, false);
}

int func_136(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_117(Global_35, *uParam3) > uParam3->f_3)
			{
				vVar1 = { *uParam3, uParam3->f_1, 0f };
				vVar4 = { Global_35, Global_35.f_1, 0f };
				uParam2->f_2 = { vVar1 + func_245(vVar4 - vVar1) * Vector(uParam3->f_3, uParam3->f_3, uParam3->f_3) };
			}
			else
			{
				uParam2->f_2 = { Global_35 };
			}
			fVar11 = 1000000f;
			iVar0 = 0;
			while (iVar0 <= (func_216(iParam0, uParam1->f_2) - 1))
			{
				func_138(iParam0, uParam1->f_2, iVar0, &vVar7);
				fVar12 = func_217(vVar7, uParam2->f_2);
				if (fVar12 < (100f * 100f))
				{
					uParam2->f_5[uParam2->f_17] = iVar0;
					if (fVar12 < fVar11)
					{
						fVar11 = fVar12;
						uParam2->f_18 = uParam2->f_17;
					}
					uParam2->f_17++;
					if (uParam2->f_17 == 5)
					{
					}
					else
					{
						iVar0++;
					}
					if (uParam2->f_17 == 0)
					{
						uParam1->f_3 = 0;
						func_246(uParam2, 3);
						return 1;
					}
					else if (uParam2->f_17 == 1)
					{
						uParam1->f_3 = &uParam2->f_5[0];
						func_246(uParam2, 3);
						return 1;
					}
					else
					{
						func_246(uParam2, 1);
					}
					Jump @772; //curOff = 332
					fVar16 = ((100f + 12f) * (100f + 12f));
					iVar0 = 0;
					while (iVar0 < 32)
					{
						iVar17 = int_to_participantindex(iVar0);
						if (network_is_participant_active(iVar17))
						{
							iVar18 = network_get_player_index(iVar17);
							if (network_is_player_a_participant(iVar18) && iVar18 != get_player_index())
							{
								vVar13 = { get_entity_coords(get_player_ped(iVar18), false, false) };
								if (func_217(uParam2->f_2, vVar13) < fVar16)
								{
									uParam2->f_21[uParam2->f_54] = iVar0;
									uParam2->f_54++;
								}
							}
						}
						iVar0++;
					}
					func_246(uParam2, 2);
					Jump @772; //curOff = 490
					if (!uParam2->f_20)
					{
						if (func_247(iParam0, uParam2))
						{
							uParam2->f_20 = 1;
							if (&uParam2->f_11[uParam2->f_18] == (12f * 12f))
							{
								uParam1->f_3 = &uParam2->f_5[uParam2->f_18];
								func_246(uParam2, 3);
								return 1;
							}
						}
					}
					else if (uParam2->f_19 < uParam2->f_17)
					{
						if (uParam2->f_19 == uParam2->f_18)
						{
							uParam2->f_19++;
							if (uParam2->f_19 == uParam2->f_17)
							{
								return 0;
							}
						}
						if (func_247(iParam0, uParam2))
						{
							if (&uParam2->f_11[uParam2->f_19] == (12f * 12f))
							{
								uParam1->f_3 = &uParam2->f_5[uParam2->f_19];
								func_246(uParam2, 3);
								return 1;
							}
							uParam2->f_19++;
						}
					}
					else
					{
						fVar19 = 0f;
						iVar0 = 0;
						while (iVar0 < uParam2->f_17)
						{
							if (&uParam2->f_11[iVar0] > fVar19)
							{
								fVar19 = &uParam2->f_11[iVar0];
								uParam1->f_3 = &uParam2->f_5[iVar0];
							}
							iVar0++;
						}
						func_246(uParam2, 3);
						return 1;
					}
					Jump @772; //curOff = 762
					return 1;
					return 0;
				}
			}
			default:
				break;
	}
}

void func_137(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_138(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_88(&Var0))
	{
		return 0;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 18, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 19, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 21, iParam2, 0, 1))
	{
		return 0;
	}
	*uParam3 = { func_90(Var0) };
	uParam3->f_3 = func_219(Var0);
	return 1;
}

int func_139(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_248(255))
	{
		func_249(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_190(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_250(Global_1102219->f_3879, 36);
		func_30(4);
		func_63(48);
		return 1;
	}
	return 0;
}

void func_140(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_251(vParam0, uParam3))
	{
		func_252(1, bParam4);
	}
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case -1695769350:
			return -238690612;
		case 1969311166:
			return -956768978;
		default:
			break;
	}
	return 0;
}

int func_142(int iParam0)
{
	return Global_1301323->f_1[iParam0]->f_5;
}

int func_143(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_147(uParam0) != -1)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (iParam1 == -238690612)
	{
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	Var1 = { func_253(iParam2, iParam1, &uVar0) };
	if (_0x375f5870a7b8bec1(&Var1))
	{
		return 0;
	}
	iVar9 = func_254(iParam2, iParam1);
	if (iVar9 == 0)
	{
		return 0;
	}
	func_255(uParam0, iParam1);
	func_256(uParam0, iVar9);
	func_257(uParam0, iParam2);
	func_258(uParam0, iParam3);
	func_259(uParam0, uVar0);
	func_260(uParam0, Var1);
	func_148(uParam0, 0);
	return 1;
}

void func_144(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_145()
{
	_0x981c7d863980fa51();
	_0x9428447ded71fc7e("out_of_bounds_scenes");
	_0x0f2a2175734926d8("out_of_bounds_animal_control", "RDRO_Countdown_Sounds");
}

void func_146(int iParam0)
{
	(*Global_1100469)[player_id()]->f_51.f_1 = ((*Global_1100469)[player_id()]->f_51.f_1 - ((*Global_1100469)[player_id()]->f_51.f_1 && iParam0));
}

int func_147(var uParam0)
{
	return *uParam0;
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_149(var uParam0)
{
	iVar18 = func_261(uParam0);
	Var9 = { func_262(iVar18) };
	iVar17 = func_263(iVar18);
	Var1 = { func_264(uParam0) };
	iVar0 = _create_anim_scene(&Var9, iVar17, &Var1, false, true);
	if (iVar0 == -1)
	{
		return;
	}
	load_anim_scene(iVar0);
	_0xb958d97a0dfaa0c2(func_266(func_265(uParam0->f_6, uParam0->f_7)));
	func_267(uParam0, iVar0);
	func_148(uParam0, 2);
}

void func_150(var uParam0)
{
	if (func_268(Global_34, 0) || func_268(Global_34, 1))
	{
		if (!func_269(Global_34, 716706914))
		{
			set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
			set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
			_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 0);
			task_swap_weapon(Global_34, 0, 0, 0, 0);
		}
		return;
	}
	func_148(uParam0, 3);
}

void func_151(var uParam0)
{
	iVar0 = func_270(uParam0);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		return;
	}
	if (!_is_anim_scene_metadata_loaded(iVar0, false))
	{
		return;
	}
	func_148(uParam0, 4);
}

void func_152(var uParam0)
{
	switch (func_271(uParam0))
	{
		case -1435416169:
			break;
		case -956768978:
		case -238690612:
			if (func_19(255))
			{
				return;
			}
			break;
	}
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			func_148(uParam0, 5);
			break;
		default:
			func_148(uParam0, 6);
			break;
	}
}

void func_153(var uParam0)
{
	if ((get_game_timer() - func_272()) < 3000)
	{
		return;
	}
	func_148(uParam0, 6);
}

void func_154(var uParam0)
{
	if (!func_274(func_273(uParam0), func_271(uParam0), &Var0))
	{
		return;
	}
	switch (Var0)
	{
		case 1862763509:
			get_ground_z_for_3d_coord(get_entity_coords(get_player_ped(player_id()), true, false), &uVar21, false);
			vVar9 = { get_entity_coords(get_player_ped(player_id()), true, false) };
			vVar9.f_2 = uVar21;
			vVar12 = { 0f, 0f, get_entity_heading(get_player_ped(player_id())) };
			break;
		case 966099553:
			iVar22 = func_275(Var0.f_1, Var0.f_7, Var0.f_8);
			if (!does_entity_exist(iVar22))
			{
				return;
			}
			vVar9 = { get_entity_coords(iVar22, true, false) };
			vVar12.f_2 = get_entity_heading(iVar22);
			break;
		case 18243940:
			vVar9 = { Var0.f_1 };
			vVar12 = { Var0.f_4 };
			break;
		case -2135825642:
			vVar9 = { Var0.f_1 };
			vVar15 = { vVar9 - get_entity_coords(get_player_ped(player_id()), true, false) };
			vVar18 = { func_245(vVar15) };
			vVar12 = { 0f, 0f, get_heading_from_vector_2d(vVar18.x, vVar18.y) };
			break;
		default:
			break;
	}
	if (func_190(vVar9))
	{
		return;
	}
	iVar23 = func_270(uParam0);
	set_anim_scene_origin(iVar23, vVar9, vVar12, 2);
	func_148(uParam0, 7);
}

void func_155(var uParam0)
{
	func_276(uParam0);
	func_148(uParam0, 8);
}

void func_156(var uParam0)
{
	iVar0 = func_270(uParam0);
	start_anim_scene(iVar0);
	func_148(uParam0, 9);
}

void func_157(var uParam0)
{
	iVar0 = func_270(uParam0);
	fVar5 = _get_anim_scene_time(iVar0);
	fVar4 = _get_anim_scene_duration(iVar0);
	fVar6 = (fVar4 - fVar5);
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			if (!func_277(uParam0, 4))
			{
				animpostfx_play("MP_NaturalistAnimalTransformEnd");
				func_278(uParam0, 4);
			}
			if ((func_277(uParam0, 4) && !func_277(uParam0, 1)) && fVar5 > 1f)
			{
				do_screen_fade_in(1);
				func_278(uParam0, 1);
			}
			if (func_277(uParam0, 1))
			{
				animpostfx_stop("MP_NaturalistAnimalTransformStart");
				_0x0f2a2175734926d8("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
				_0x6339c1ea3979b5f7("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
				play_sound_frontend("Animal_Control_Exit", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			}
			if (!func_277(uParam0, 1))
			{
				if (fVar6 < (fVar4 / 2f))
				{
					do_screen_fade_in(1);
					func_278(uParam0, 1);
				}
			}
			break;
		case -1435416169:
			if (has_anim_event_fired(Global_34, 655141280))
			{
				if (!func_277(uParam0, 4) && !func_277(uParam0, 8))
				{
					_0x6339c1ea3979b5f7("NATAC_Screen_Overlay_Fade_To_Black", "MP007_NATAC_Sceneset");
					play_sound_frontend("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds", true, 0);
					uParam0->f_2 = fVar5;
					func_278(uParam0, 4);
				}
			}
			break;
	}
	_0xc9caeaeec1256e54(-1679307491);
	_uiprompt_enable_prompt_type_this_frame(6);
	func_96();
	func_279(0, 0, 1);
	if (!func_277(uParam0, 16))
	{
		if (_0xfbf161fcfec8589e(func_266(func_265(uParam0->f_6, uParam0->f_7)), 2, 0, &uVar7))
		{
			_0x0f2a2175734926d8("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
			play_sound_frontend("Animal_Control_Enter_Whoosh", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			func_278(uParam0, 16);
		}
	}
	bVar1 = _is_anim_scene_finished(iVar0, false);
	bVar2 = _is_anim_scene_active(iVar0);
	bVar3 = _is_anim_scene_started(iVar0, false);
	if ((bVar1 || bVar2) || !bVar3)
	{
		switch (uParam0->f_5)
		{
			case -956768978:
			case -238690612:
				if (func_277(uParam0, 4))
				{
					_0x9428447ded71fc7e("MP007_NATAC_Sceneset");
					func_278(uParam0, 8);
					func_280(uParam0, 4);
				}
				break;
			case -1435416169:
				do_screen_fade_out(1);
				_0x9428447ded71fc7e("MP007_NATAC_Sceneset");
				func_278(uParam0, 2);
				func_278(uParam0, 8);
				func_280(uParam0, 4);
				break;
		}
		if (_0xa24c1d341c6e0d53(1, 1, 0))
		{
			func_281(0, 0);
		}
		func_148(uParam0, 10);
	}
}

void func_158(var uParam0)
{
	Var1 = -1;
	Var1.f_1 = -1;
	func_148(uParam0, -1);
	iVar0 = func_270(uParam0);
	_0xa201a3d0ac087c37(func_266(func_265(uParam0->f_6, uParam0->f_7)));
	if (_does_anim_scene_exist(iVar0))
	{
		_delete_anim_scene(iVar0);
	}
	_copy_memory(uParam0, &Var1, 17);
}

int func_159(var uParam0)
{
	switch (func_147(uParam0))
	{
		case 0:
		case 6:
		case 7:
		case 8:
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_160(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_161()
{
	return Global_1102219->f_3672;
}

bool func_162(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_163()
{
	func_282(0);
	func_282(1);
	func_282(2);
	func_282(3);
}

void func_164()
{
	func_283(0);
	func_283(1);
	func_283(2);
	func_283(3);
}

int func_165()
{
	return Global_1952637->f_1;
}

void func_166(int iParam0)
{
	if (!func_284(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

int func_167(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_285(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_285(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_168(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_285(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_169()
{
	return !Global_1572887->f_9;
}

bool func_170()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_171(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

int func_173()
{
	return Global_1572887->f_13;
}

void func_174(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_79(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_287(func_286(Param0));
			iVar5 = func_288(iVar4);
			if (!func_289(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_175(struct<2> Param0)
{
	iVar0 = func_167(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_290(iVar0);
}

int func_176(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_285(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_285(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_291(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_177()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_285(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
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

void func_181(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_182()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_183(int iParam0)
{
	iVar0 = func_292(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_293(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_294(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_184(struct<2> Param0)
{
	if (!func_7(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_38(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_185(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_295(Global_1900736->f_1[0]);
		return 1;
	}
	func_295(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_296(iParam0, Global_1900736->f_66);
	return 1;
}

int func_186(vector3 vParam0)
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

int func_187(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_188(var uParam0, int iParam1, var uParam2, float fParam3)
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

int func_189(int iParam0)
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

bool func_190(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_191(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_297(iParam0);
	if (!func_298(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_299(128) && !func_300(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_301() == 4)
	{
		func_63(18);
	}
	func_302(1024);
}

void func_192(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_193(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_194(struct<29> Param0, var uParam29, int iParam30)
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

void func_195(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_196(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_197(int iParam0)
{
	if (func_199(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_198(int iParam0)
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

bool func_199(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_200(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_201()
{
	if (!func_170())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_202(int iParam0)
{
	return func_303(iParam0, 2);
}

bool func_203(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	return true;
}

Vector3 func_204(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_vector(&vVar0, uParam0))
	{
	}
	return vVar0;
}

var func_205(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_float(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_206(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_int(&iVar0, uParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

bool func_207()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

bool func_208(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			if (!func_304(uParam0->f_2, 4))
			{
				return false;
			}
			break;
	}
	if (_0x375f5870a7b8bec1(func_305(iParam1)))
	{
		return false;
	}
	return true;
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_210(var uParam0, int iParam1)
{
	uVar0 = func_306(func_305(iParam1), 10000, 0, 0, 0, 1);
	func_213(uParam0, iParam1);
	func_214(uParam0, uVar0);
}

bool func_211(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
		default:
			break;
	}
	return true;
}

void func_212(var uParam0, var uParam1)
{
	uParam0->f_2 = (uParam0->f_2 || uParam1);
}

void func_213(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_214(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_215(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

var func_216(int iParam0, int iParam1)
{
	if (!func_88(&uVar0))
	{
		return 0;
	}
	if (!func_89(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 18, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 19, iParam1, 0, 1))
	{
		return 0;
	}
	return func_307(&uVar0, 6);
}

float func_217(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_218(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

var func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_205(&uParam0, 65, 1);
}

bool func_220(struct<2> Param0)
{
	return func_67(Param0) == 0;
}

void func_221(struct<2> Param0)
{
	if (func_69(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_69(Param0)))
	{
		_0x99230691875fc218(func_79(Param0), func_69(Param0), Global_35);
	}
}

void func_222(struct<2> Param0)
{
	if (func_69(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_69(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_69(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_225(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_223(struct<2> Param0, int iParam2)
{
	iVar0 = func_184(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_308(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_296(iVar0, iParam2);
	return iParam2;
}

int func_224(struct<2> Param0, int iParam2)
{
	if (!func_7(Param0))
	{
		return 0;
	}
	iVar0 = func_184(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_309(Param0, func_73(0), iParam2))
	{
		func_72(func_73(0), 3);
		func_72(func_73(iVar0), 4);
		return 0;
	}
	func_296(iVar0, 0);
	func_72(func_73(0), 3);
	func_72(func_73(1), 4);
	return 1;
}

bool func_225(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_285(Param0, &vVar0);
	if (func_310(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_226(int iParam0, int iParam1, var uParam2)
{
	if (!func_88(&Var0))
	{
		return false;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 38, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 43, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 44, iParam1, 0, 1))
	{
		return false;
	}
	iVar5 = func_311(Var0);
	return func_227(iVar5, uParam2);
}

bool func_227(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &uVar5, 2);
	if (!func_88(&Var0))
	{
		return false;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 43, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 44, iParam0, 0, 1))
	{
		return false;
	}
	uParam1->f_1 = func_312(Var0, 0);
	*uParam1 = func_313(Var0, 0);
	return true;
}

void func_228(int iParam0)
{
	func_314(iParam0);
	set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
	func_315();
	func_316(8388608);
	if (func_317(iParam0, &iVar0))
	{
		func_319(func_318(iVar0));
	}
}

bool func_229(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_320(iParam0))
	{
		return func_322(func_321(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_323(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_324(0)) && !func_325());
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
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_326(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_327(iVar32)))
			{
			}
			else
			{
				iVar36 = func_328(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_329(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_330(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_331(&(Var0[iVar34])) || func_332(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_333(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_334(&(Var0[iVar34]), iVar36);
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
							if (bParam5 && ((iVar33 + func_335(7, &(Var0[iVar34]))) + func_336(&(Var0[iVar34]))) >= iVar32)
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

bool func_230(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_231(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_146 = iParam2;
}

struct<8> func_232(int iParam0)
{
	if (!func_88(&Var0))
	{
		return Var5;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 37, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 38, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 58, 0, 0, 1))
	{
		return Var5;
	}
	return func_337(Var0);
}

int func_233(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_303(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_338(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_234(var uParam0)
{
	iVar0 = func_86(uParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

void func_235(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_36(iParam0))
	{
		return;
	}
	iVar0 = func_86(iParam0);
	func_339(iVar0, bParam1);
}

void func_236(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_36(iParam0))
	{
		return;
	}
	iVar0 = func_86(iParam0);
	if (bParam1)
	{
		func_340(iParam0, 4);
		if (bParam3)
		{
			func_339(iVar0, 1);
		}
		func_341(iVar0, 1);
	}
	else
	{
		func_342(iParam0, 4);
		func_341(iVar0, 0);
	}
}

bool func_237(int iParam0, bool bParam1)
{
	if (bParam1 && !func_36(iParam0))
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_238(int iParam0, bool bParam1)
{
	if (bParam1 && !func_36(iParam0))
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_343(iParam0, 0))
	{
		return -1;
	}
	if (func_344(iParam0))
	{
		if (!func_322(func_345(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_346(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_347(iParam0, 1, 0) };
	if (func_348(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_349(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_350(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_344(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_351(&Var9, func_345(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_352(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_344(iParam0))
	{
		if (func_353(func_345(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_354(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_355(iVar7, Var52);
	_0x78c2e029db205a3a(iParam0, iParam1, iParam3);
	return iVar7;
}

bool func_240(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_243(int iParam0)
{
	if (func_80(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_244()
{
	func_356();
	func_357();
}

Vector3 func_245(vector3 vParam0)
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

void func_246(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
		*uParam0 = iParam1;
	}
}

bool func_247(int iParam0, var uParam1)
{
	switch (uParam1->f_1)
	{
		case 0:
			uParam1->f_11[uParam1->f_19] = (12f * 12f);
			if (uParam1->f_54 > 0)
			{
				func_138(iParam0, -1695769350, &(uParam1->f_5[uParam1->f_19]), &vVar3);
				iVar1 = 0;
				while (iVar1 < uParam1->f_54)
				{
					iVar10 = int_to_participantindex(&(uParam1->f_21[iVar1]));
					if (network_is_participant_active(iVar10))
					{
						iVar11 = network_get_player_index(iVar10);
						if (network_is_player_a_participant(iVar11))
						{
							vVar7 = { get_entity_coords(get_player_ped(iVar11), false, false) };
							fVar0 = func_217(vVar3, vVar7);
							if (fVar0 < &uParam1->f_11[uParam1->f_19])
							{
								uParam1->f_11[uParam1->f_19] = fVar0;
							}
						}
					}
					iVar1++;
				}
			}
			func_358(uParam1, 1);
			break;
		case 1:
			func_138(iParam0, -1695769350, &(uParam1->f_5[uParam1->f_19]), &vVar3);
			iVar12 = create_itemset(true);
			iVar2 = _0x59b57c4b06531e1e(vVar3, 5f, iVar12, 1);
			if (iVar2 > 0)
			{
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					iVar13 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar12));
					if (does_entity_exist(iVar13) && !is_ped_a_player(get_ped_index_from_entity_index(iVar13)))
					{
						fVar0 = func_217(vVar3, get_entity_coords(iVar13, false, false));
						if (fVar0 < &uParam1->f_11[uParam1->f_19])
						{
							uParam1->f_11[uParam1->f_19] = fVar0;
						}
					}
					iVar1++;
				}
			}
			destroy_itemset(iVar12);
			func_358(uParam1, 2);
			break;
		case 2:
			func_138(iParam0, -1695769350, &(uParam1->f_5[uParam1->f_19]), &vVar3);
			iVar2 = _0x59b57c4b06531e1e(vVar3, 5f, iVar14, 2);
			if (iVar2 > 0)
			{
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					iVar15 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar12));
					if (does_entity_exist(iVar15))
					{
						fVar0 = func_217(vVar3, get_entity_coords(iVar15, false, false));
						if (fVar0 < &uParam1->f_11[uParam1->f_19])
						{
							uParam1->f_11[uParam1->f_19] = fVar0;
						}
					}
					iVar1++;
				}
			}
			destroy_itemset(iVar14);
			func_358(uParam1, 0);
			return true;
	}
	return false;
}

bool func_248(int iParam0)
{
	return func_58(48, iParam0);
}

void func_249(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_250(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_251(vector3 vParam0, var uParam3)
{
	if (func_190(vParam0))
	{
		return false;
	}
	if (func_189(255) == 4)
	{
		return false;
	}
	if (func_58(4, 255))
	{
	}
	func_30(4);
	func_249(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_250(Global_1102219->f_3879, 36);
	return true;
}

void func_252(bool bParam0, bool bParam1)
{
	if (func_189(255) == 4)
	{
		return;
	}
	if (func_190(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_63(0);
	}
	else
	{
		if (bParam1)
		{
			func_191(0, 0, 0, 1);
		}
		func_30(0);
		func_192(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_193(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_194(Global_1102219->f_3849, 36);
	func_195(Global_1102219->f_3888, 36);
}

struct<8> func_253(int iParam0, int iParam1, var uParam2)
{
	if (!func_88(&Var0))
	{
		return Var9;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return Var9;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_89(&Var0, 23, iParam1, 0, 1))
	{
		return Var9;
	}
	if (!func_89(&Var0, 25, 0, 0, 1))
	{
		return Var9;
	}
	iVar6 = func_307(&Var0, 1);
	iVar8 = get_random_int_in_range(0, iVar6);
	iVar19 = get_player_ped(player_id());
	if (is_ped_male(iVar19))
	{
		iVar18 |= 1;
	}
	else
	{
		iVar18 |= 2;
	}
	if (_get_ped_crouch_movement(iVar19))
	{
		iVar18 |= 8;
	}
	else
	{
		iVar18 |= 4;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		iVar7 = ((iVar8 + iVar5) % iVar6);
		iVar17 = func_359(iParam0, iParam1, iVar7);
		if ((iVar18 && iVar17) != iVar18)
		{
		}
		else if (!func_89(&Var0, 26, iVar7, 0, 1))
		{
		}
		else
		{
			*uParam2 = func_360(Var0);
			return func_361(Var0);
		}
		iVar5++;
	}
	return Var9;
}

var func_254(int iParam0, int iParam1)
{
	if (!func_88(&Var0))
	{
		return 0;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_362(Var0);
}

void func_255(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_256(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_258(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_259(var uParam0, var uParam1)
{
	uParam0->f_7 = uParam1;
}

void func_260(var uParam0, struct<8> Param1)
{
	uParam0->f_8 = { Param1 };
}

var func_261(var uParam0)
{
	return uParam0->f_6;
}

struct<8> func_262(int iParam0)
{
	if (!func_88(&Var0))
	{
		return Var5;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	return func_337(Var0);
}

int func_263(int iParam0)
{
	if (!func_88(&Var0))
	{
		return 0;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 27, 0, 0, 1))
	{
		return 0;
	}
	return func_363(Var0, -783556459);
}

struct<8> func_264(var uParam0)
{
	return uParam0->f_8;
}

struct<8> func_265(int iParam0, int iParam1)
{
	if (!func_88(&Var0))
	{
		return Var5;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_89(&Var0, 57, iParam1, 0, 1))
	{
		return Var5;
	}
	return func_364(Var0);
}

var func_266(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_267(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_268(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &iVar0, true, iParam1, false);
	return func_365(iVar0);
}

bool func_269(int iParam0, int iParam1)
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

int func_270(var uParam0)
{
	return uParam0->f_1;
}

int func_271(var uParam0)
{
	return uParam0->f_5;
}

int func_272()
{
	return Global_1301323->f_296;
}

int func_273(var uParam0)
{
	return uParam0->f_3;
}

bool func_274(int iParam0, int iParam1, var uParam2)
{
	if (!func_88(&Var0))
	{
		return false;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 24, 0, 0, 1))
	{
		return false;
	}
	*uParam2 = func_366(Var0);
	switch (*uParam2)
	{
		case 1862763509:
			break;
		case 966099553:
			uParam2->f_1 = { func_90(Var0) };
			uParam2->f_7 = func_91(Var0);
			uParam2->f_8 = func_367(Var0);
			break;
		case 18243940:
			uParam2->f_1 = { func_90(Var0) };
			uParam2->f_4 = { func_368(Var0) };
			break;
		case -2135825642:
			uParam2->f_1 = { func_90(Var0) };
			break;
		default:
			break;
	}
	return true;
}

int func_275(vector3 vParam0, float fParam3, int iParam4)
{
	iVar2 = create_itemset(true);
	iVar1 = _0x59b57c4b06531e1e(vParam0, fParam3, iVar2, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = get_indexed_item_in_itemset(iVar0, iVar2);
		iVar5 = _get_entity_from_item(iVar3);
		if (!does_entity_exist(iVar5))
		{
		}
		else
		{
			iVar6 = get_entity_model(iVar5);
			if (iVar6 != iParam4)
			{
			}
			else
			{
				iVar4 = iVar5;
			}
			else
			{
				iVar0++;
			}
			destroy_itemset(iVar2);
			return iVar4;
		}
	}
}

void func_276(var uParam0)
{
	iVar2 = func_270(uParam0);
	iVar12 = func_261(uParam0);
	iVar1 = func_369(iVar12, 1862763509);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_370(iVar12, 1862763509, iVar0, &Var3))
		{
		}
		else
		{
			set_anim_scene_entity(iVar2, &Var3, get_player_ped(player_id()), Var3.f_8);
		}
		iVar0++;
	}
}

bool func_277(var uParam0, int iParam1)
{
	return (uParam0->f_16 && iParam1) != 0;
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 || iParam1);
}

void func_279(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_371(20f);
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
	if (func_170())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_372(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

void func_280(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 - (uParam0->f_16 && iParam1));
}

void func_281(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_282(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_373(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 2, -1);
	func_374(&Var0, iParam0, 0);
}

void func_283(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_376(func_375(iParam0, 1), &Var0, 0, -1);
	func_377(Var0, iParam0, 0);
}

bool func_284(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

bool func_285(struct<2> Param0, var uParam2)
{
	if (!func_7(Param0))
	{
		return false;
	}
	func_378(uParam2);
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

int func_286(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_285(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_287(int iParam0)
{
	iVar0 = -1;
	if (func_379(&Var1, iParam0))
	{
		iVar0 = ((func_380() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_288(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_290(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
			return 39;
			return 396;
			return 189;
			return 324;
			return 495;
			return 241;
			return 85;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

bool func_293(int iParam0)
{
	iVar0 = func_381(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_294(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_295(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_296(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_382((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_382(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_7(*Global_1900736->f_1[0]))
	{
		func_72(*Global_1900736->f_1[0], 3);
	}
}

void func_297(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_298(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_299(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_300(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_301()
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

void func_302(int iParam0)
{
	if (func_383(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_303(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_304(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ANIMAL_TRANSFORMATION_NOT_ENOUGH_HERBS";
		case 2:
			return "ANIMAL_TRANSFORMATION_EXIT_HELP";
		case 4:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_1";
		case 8:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_2";
		case 16:
			return "ANIMAL_TRANSFORMATION_TIME_RUNNING_OUT";
		case 32:
			return "ANIMAL_TRANSFORMATION_ABORT";
		case 64:
			return "ANIMAL_TRANSFORMATION_COOLDOWN";
		default:
			break;
	}
	return "";
}

var func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_307(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

void func_308(struct<2> Param0, int iParam2)
{
	if (!func_7(Param0))
	{
		func_295(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_384(Param0, 0, 1, -1);
}

bool func_309(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_7(Param0))
	{
		return false;
	}
	if (!func_7(Param2))
	{
		return true;
	}
	iVar0 = func_79(Param0);
	iVar1 = func_79(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_310(int iParam0, var uParam1, var uParam2)
{
	if (!func_385(iParam0))
	{
		return false;
	}
	if (func_386(iParam0, uParam1, &uVar0))
	{
		func_387(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_311(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 73, 1);
}

var func_312(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	return func_388(&uParam0, 78, iParam5);
}

var func_313(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	return func_388(&uParam0, 79, iParam5);
}

void func_314(var uParam0)
{
	Global_1952637->f_1 = uParam0;
}

void func_315()
{
	func_389(128);
}

void func_316(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

bool func_317(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2026485318:
			*uParam1 = -171876066;
			break;
		case 24043185:
			*uParam1 = -1481695040;
			break;
		default:
			iVar0 = func_390(0, iParam0);
			if (iVar0 != -1)
			{
				*uParam1 = func_391(iVar0);
			}
			else
			{
				*uParam1 = -171876066;
				return false;
			}
			break;
	}
	return true;
}

var func_318(int iParam0)
{
	if (!func_88(&Var2))
	{
		return 0;
	}
	if (!func_89(&Var2, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var2, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var2, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var2, 59, 0, 0, 1))
	{
		return 0;
	}
	iVar1 = func_307(&Var2, 12);
	iVar0 = get_random_int_in_range(0, iVar1);
	if (!func_89(&Var2, 60, iVar0, 0, 1))
	{
		return 0;
	}
	return func_392(Var2);
}

void func_319(var uParam0)
{
	Global_1952637->f_3 = uParam0;
}

bool func_320(int iParam0)
{
	if (func_393(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_321(int iParam0, bool bParam1)
{
	if (!func_343(iParam0, 0))
	{
		return func_395(func_394(iParam0), bParam1);
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

bool func_322(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_396(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_326(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_327(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_328(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_329(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_330(&(Var0[iVar32]), 0, bParam3, 1);
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

bool func_323(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
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
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
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
		func_397(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_324(bool bParam0)
{
	if (func_173() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_398(bParam0));
}

bool func_325()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_326(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_173() == 0)
	{
		return func_399(iParam0);
	}
	return iParam0 <= func_400();
}

bool func_327(int iParam0)
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

int func_328(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_393(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_401(0) };
	Var0.f_4 = func_402(iParam1);
	Var5 = { func_403(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_398(0), &Var5, 0);
	return iVar9;
}

int func_330(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_404(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_405(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_406(iParam0, 0);
	}
	if (func_407(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_398(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_408(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_398(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, -887064662))
	{
		return true;
	}
	return func_332(iParam0);
}

bool func_332(int iParam0)
{
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_333(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_409(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_343(iParam1, 0))
	{
		return 0;
	}
	if (!func_410(iParam0))
	{
		return 0;
	}
	iVar0 = func_411(iParam0);
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
		if (!func_412(iVar28))
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

int func_334(int iParam0, int iParam1)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	if (!func_331(iParam0) && !func_332(iParam0))
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
	iVar13 = func_413(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_414(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_415(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_416(iVar15, iVar1);
			if (func_343(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_417(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_329(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_419(iVar16, func_418(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_420(iVar1);
	}
	return iVar0;
}

int func_335(int iParam0, int iParam1)
{
	iParam0 = func_409(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_343(iParam1, 0))
	{
		return 0;
	}
	if (!func_410(iParam0))
	{
		return 0;
	}
	iVar0 = func_411(iParam0);
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

int func_336(int iParam0)
{
	if (!func_343(iParam0, 0))
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

struct<8> func_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_421(&uParam0, 69, 1);
}

void func_338(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_339(iParam0, 1);
	func_341(iParam0, 1);
	func_342(iParam0, 128);
}

void func_339(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_303(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_340(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_341(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_342(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_343(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_344(int iParam0)
{
	return (func_422(iParam0) && func_393(iParam0, 1584357097));
}

int func_345(int iParam0)
{
	if (!func_344(iParam0))
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

int func_346(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_323(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_324(0)) && !func_325());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715->f_20638)
	{
		iVar35 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_328(iVar35, &(Var0[iVar32]));
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_329(&(Var0[iVar32]), iVar36);
			}
			else
			{
				iVar37 = func_330(&(Var0[iVar32]), 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_331(&(Var0[iVar32])) || func_332(&(Var0[iVar32])))
				{
					iVar37 = (iVar37 + func_334(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_333(7, &(Var0[iVar32]), &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_335(7, &(Var0[iVar32])) + func_336(&(Var0[iVar32]))));
				}
			}
			if (iVar37 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

struct<5> func_347(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_401(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_404(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_403(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_423(bParam1) };
			if (bParam2 && func_424(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_425(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_425(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_426(iParam0, &Var6, 1728382685))
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
			Var0 = { func_427(bParam1) };
			switch (func_349(iParam0))
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
			if (func_428(iParam0, -1823706425))
			{
				Var0 = { func_403(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_428(iParam0, -1483207246))
			{
				Var0 = { func_403(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_403(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_428(iParam0, -1653629781))
			{
				Var0 = { func_403(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_429(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_428(iParam0, -1653629781))
			{
				Var0 = { func_403(1384535894, Var0, 1784584921, bParam1) };
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

bool func_348(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_430(&iParam0);
	if (!func_343(iParam0, 0) && !func_431(func_394(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_407(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_432(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_423(0) };
		Var4.f_9 = -1591664384;
		if (!func_425(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_426(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_424(iParam0, 1))
		{
			if (!func_425(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_426(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_433(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_434(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_349(int iParam0)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_350(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_343(iParam0, 0))
	{
		return -1;
	}
	if (func_404(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_325())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_435(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_435(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_323(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_330(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_324(0))
	{
		if (iVar0 > 0)
		{
			func_436(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_436(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_437(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_436(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_438(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_355(iVar52, Var53);
	}
	return iVar52;
}

bool func_351(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_439(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_440(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_441(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = -1883671814;
	}
	if (!func_442(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_352(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_439(iParam0, 0))
	{
		return false;
	}
	if (!func_443(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_444(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_445(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_353(int iParam0, int iParam1)
{
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = _0x12df9c58201dd19a(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (_0x1fc25aeb5f76b38d(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_354(int iParam0, int iParam1)
{
	if (func_320(iParam0))
	{
		return func_353(func_321(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_355(int iParam0, struct<17> Param1)
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

void func_356()
{
	func_446(0);
	func_446(1);
	func_446(2);
	func_446(3);
}

void func_357()
{
	func_447(0);
	func_447(1);
	func_447(2);
	func_447(3);
}

void func_358(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_1)
	{
		uParam0->f_1 = iParam1;
	}
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	if (!func_88(&Var0))
	{
		return 0;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 25, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 26, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_89(&Var0, 27, 0, 0, 0))
	{
		return -1;
	}
	return func_363(Var0, -1000179465);
}

var func_360(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 61, 1);
}

struct<8> func_361(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_421(&uParam0, 61, 1);
}

var func_362(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 66, 1);
}

int func_363(struct<5> Param0, int iParam5)
{
	if (!func_89(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_307(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_448(Param0, iVar0);
		switch (iParam5)
		{
			case -783556459:
				iVar3 = func_450(func_449(iVar2));
				break;
			case -952694274:
				iVar3 = func_450(func_451(iVar2));
				break;
			case -1564702706:
				iVar3 = func_450(func_452(iVar2));
				break;
			case -1000179465:
				iVar3 = func_450(func_453(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_364(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_421(&uParam0, 95, 1);
}

bool func_365(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

var func_366(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 73, 1);
}

var func_367(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 67, 1);
}

Vector3 func_368(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_204(&uParam0, 68, 1);
}

var func_369(int iParam0, int iParam1)
{
	if (!func_88(&uVar0))
	{
		return 0;
	}
	if (!func_89(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 31, 0, 0, 1))
	{
		return 0;
	}
	if (!func_89(&uVar0, 32, iParam1, 0, 1))
	{
		return 0;
	}
	return func_307(&uVar0, 4);
}

bool func_370(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_88(&Var0))
	{
		return false;
	}
	if (!func_89(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 23, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 31, 0, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 32, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_89(&Var0, 33, iParam2, 0, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 1862763509:
			if (is_ped_male(get_player_ped(player_id())))
			{
				iVar5 = 70;
			}
			else
			{
				iVar5 = 71;
			}
			break;
		default:
			iVar5 = 69;
			break;
	}
	*uParam3 = { func_421(&Var0, iVar5, 1) };
	if (func_89(&Var0, 27, 0, 0, 0))
	{
		uParam3->f_8 = func_363(Var0, -952694274);
	}
	return true;
}

void func_371(float fParam0)
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

void func_372(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_373(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_454())
	{
		return false;
	}
	return func_455(iParam0, uParam1, iParam2, iParam3);
}

int func_374(var uParam0, int iParam1, bool bParam2)
{
	if (!func_456(iParam1))
	{
		return 0;
	}
	if (func_457(uParam0))
	{
		func_458();
	}
	func_459(iParam1);
	if (bParam2 && func_460())
	{
		return 0;
	}
	func_461(iParam1);
	func_462(uParam0);
	func_463(iParam1, uParam0, 1);
	return 1;
}

int func_375(int iParam0, bool bParam1)
{
	Var0 = { func_401(bParam1) };
	return func_465(Var0, func_464(iParam0), 0, bParam1);
}

int func_376(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_454())
	{
		return 0;
	}
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	return func_455(func_466(iParam0), uParam1, iParam2, iParam3);
}

int func_377(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, int iParam34, bool bParam35)
{
	if (!func_456(iParam34))
	{
		return 0;
	}
	func_467(&uParam0, iParam34);
	if (bParam35 && func_460())
	{
		return 0;
	}
	func_468(&uParam0, iParam34);
	func_462(&uParam0);
	func_463(iParam34, &uParam0, 1);
	return 1;
}

void func_378(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_379(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_380()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_381(int iParam0)
{
	return func_469(iParam0) + 30;
}

void func_382(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_383(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_384(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_470(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_168(Param0);
	Var0.f_3 = iParam3;
	func_471(&Var0, bParam2, iParam4);
	return 1;
}

bool func_385(int iParam0)
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

bool func_386(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_472(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_387(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_473(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_474(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_475(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_476(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_477(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_478(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

var func_388(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

void func_389(int iParam0)
{
	func_479(Global_1301321, iParam0);
}

var func_390(int iParam0, int iParam1)
{
	iVar0 = func_480(iParam0, 0, Global_1301323->f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_481(iParam0, iVar0);
}

var func_391(int iParam0)
{
	return Global_1301323->f_52[iParam0]->f_1;
}

var func_392(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_388(&uParam0, 61, 0);
}

bool func_393(int iParam0, int iParam1)
{
	if (!func_343(iParam0, 0))
	{
		return func_482(func_394(iParam0), iParam1);
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

int func_394(int iParam0)
{
	return iParam0;
}

int func_395(int iParam0, bool bParam1)
{
	if (!func_431(iParam0, 2))
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

bool func_396(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_483(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
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
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
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
		func_484(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_397(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_349(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_398(bool bParam0)
{
	if (func_173() == -1)
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

bool func_399(int iParam0)
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

int func_400()
{
	if (func_173() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

struct<4> func_401(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_398(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_403(1328661203, func_485(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_403(1328661203, func_485(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_403(1328661203, func_485(), -1591664384, bParam0);
}

int func_402(int iParam0)
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

struct<4> func_403(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_343(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_398(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_404(int iParam0)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_405(int iParam0, int iParam1)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_404(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_393(iParam0, 1399091007))
	{
		func_486(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_406(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_487(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_488(&Var0, func_423(0));
	}
	if (!func_489(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_490(iVar14);
	return uVar15;
}

int func_407(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_408(int iParam0, bool bParam1)
{
	Var0 = { func_347(iParam0, bParam1, 0) };
	return func_403(iParam0, Var0, Var0.f_4, bParam1);
}

int func_409(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_410(int iParam0)
{
	iParam0 = func_409(iParam0);
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

int func_411(int iParam0)
{
	iParam0 = func_409(iParam0);
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

bool func_412(int iParam0)
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

int func_413(int iParam0, int iParam1)
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

struct<10> func_414(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_415(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_416(int iParam0, int iParam1)
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

int func_417(int iParam0)
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

int func_418(int iParam0)
{
	if (func_393(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_393(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_393(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_419(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_343(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_420(int iParam0)
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

struct<8> func_421(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

bool func_422(int iParam0)
{
	return func_349(iParam0) == 1868067663;
}

struct<4> func_423(bool bParam0)
{
	iVar0 = func_398(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_403(923904168, func_401(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_403(923904168, func_401(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_403(923904168, func_401(bParam0), -740156546, 0);
}

bool func_424(int iParam0, bool bParam1)
{
	if (func_349(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_491();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_425(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_434(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_426(int iParam0, var uParam1, int iParam2)
{
	if (func_492(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_427(bool bParam0)
{
	iVar0 = func_398(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_403(271701509, func_401(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_403(271701509, func_401(bParam0), 12999093, 0);
}

bool func_428(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_349(iParam0);
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
			if (func_493(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_429(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_494(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_430(int iParam0)
{
	if (!func_343(*iParam0, 0))
	{
		return 0;
	}
	if (!func_495(*iParam0))
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

bool func_431(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_432(int iParam0)
{
	return func_404(iParam0) == -427144552;
}

int func_433(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_343(iParam0, 0) && !func_431(func_394(iParam0), 2))
	{
		return 0;
	}
	if (func_404(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_407(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_398(bParam3), iParam0);
}

int func_434(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_343(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_407(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_403(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_398(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_398(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_496(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_320(iParam0))
	{
		return func_497(func_321(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_323(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_436(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_407(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_498(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_347(iParam0, bParam4, 0) };
	Var6 = { func_403(iParam0, Var1, Var1.f_4, bParam4) };
	return func_499(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_437(int iParam0)
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

int func_438(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_500(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_502(func_501(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_503(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_439(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_504(iParam0))
		{
			return false;
		}
	}
	if (func_505(&(iParam0->f_6)))
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

int func_440(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_483(iParam0))
	{
		return 0;
	}
	bVar1 = func_304(iParam3, 2);
	bVar2 = func_506(iParam0, -570078785, bVar1);
	bVar3 = func_506(iParam0, -915411861, bVar1);
	if (func_506(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_507(iParam0, &iVar0) || func_508(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_509())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_510(15) && func_506(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_441(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_506(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_304(iParam2, 2))
	{
		if (func_511(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_304(iParam2, 8))
	{
		return func_512(iParam0, iParam1);
	}
	return 1;
}

bool func_442(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_396(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_513(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_514(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_515(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_516(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_517(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_518(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_519(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_520(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_521(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_522(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_523(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_524(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_525(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_526(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_527(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_443(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_304(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_429(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_493(iParam1, func_349(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_304(iParam9, 1))
	{
		if (!func_528(iParam1))
		{
			return 0;
		}
	}
	if (func_304(iParam9, 2))
	{
		if (func_529(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_304(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_434(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_433(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_530(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_531(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
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
	if (func_304(iParam9, 8))
	{
		return func_532(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_444(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_403(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_407(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_485() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_445(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_323(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_533(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_534(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_535(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_536(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_537(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_538(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_539(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_540(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_541(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_542(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_543(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_544(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_545(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_546(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_547(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

void func_446(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_376(func_375(iParam0, 1), &Var0, 2, -1);
	func_374(&Var0, iParam0, 0);
}

void func_447(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_373(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 0, -1);
	func_377(Var0, iParam0, 0);
}

var func_448(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_89(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_388(&uParam0, 61, 1);
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case -1443098918:
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case -1584776041:
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_450(int iParam0)
{
	return iParam0;
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 1934013388:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case 472588819:
			return 1;
		case 1830115867:
			return 2;
		case 465284456:
			return 4;
		case -429839084:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_454()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_455(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_548() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_549(iParam0))
	{
		func_550(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_551(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_8;
	if (!func_343(uParam1->f_2, 0))
	{
		func_550(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_549(*uParam1))
	{
		func_550(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_460())
		{
			uParam1->f_19 = func_552(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_6;
			if (func_456(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_553(*uParam1);
			iVar3 = func_464(uParam1->f_19);
			uParam1->f_3 = { func_403(uParam1->f_2, func_401(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_554(uParam1);
			uParam1->f_13 = func_555(uParam1);
			uParam1->f_15 = func_556(uParam1);
			uParam1->f_20 = func_557(uParam1);
			uParam1->f_22 = func_558(uParam1);
			uParam1->f_14 = func_559(uParam1);
			uParam1->f_23 = func_560(uParam1);
			uParam1->f_24 = func_561(uParam1);
			uParam1->f_25 = func_562(uParam1);
			uParam1->f_26 = func_563(uParam1);
			uParam1->f_27 = func_564(uParam1);
			uParam1->f_29 = func_565(uParam1);
			uParam1->f_30 = func_566(uParam1);
			uParam1->f_31 = func_567(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_568((Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_569(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_568((Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_3;
				uParam1->f_10 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_6;
			}
			else
			{
				func_570(uParam1);
			}
		}
	}
	else
	{
		iVar5 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
		uParam1->f_9 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_3;
		uParam1->f_10 = (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_6;
		if (_network_is_player_index_valid(iVar5))
		{
			uParam1->f_19 = func_571(*uParam1, iVar5);
			if (func_456(uParam1->f_19))
			{
				vVar6 = { *(*Global_1145091)[iVar5]->f_10[uParam1->f_19] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_572(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_573(uParam1);
	uParam1->f_12 = func_574(*(Global_1139381->f_11.f_1562[func_551(iParam0, 1)]), uParam1);
	return 1;
}

bool func_456(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_457(var uParam0)
{
	return uParam0->f_1 == 304794100;
}

void func_458()
{
	_0xae4bcc79c587ebbf(&(Global_1296859->f_154[&Global_1296859]), 0f, 0);
	_0x4d1699543b1c023c(&(Global_1296859->f_154[&Global_1296859]), 0f);
	_0xb783f75940b23014(&(Global_1296859->f_154[&Global_1296859]), 0f);
	_0x6b5ddfb967e5073d(&(Global_1296859->f_154[&Global_1296859]), 0);
	if (_0xb16223cb7da965f0(&(Global_1296859->f_154[&Global_1296859])))
	{
		_0xae637bb8ef017875(&(Global_1296859->f_154[&Global_1296859]), 1);
	}
	_0x95ee1dee1dcd9070(&(Global_1296859->f_154[&Global_1296859]), 0);
}

void func_459(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_467(&Var0, iParam0);
}

bool func_460()
{
	return (func_575(0) && func_575(5));
}

void func_461(int iParam0)
{
	iVar0 = func_576(iParam0);
	func_577(iVar0);
}

void func_462(var uParam0)
{
	func_578(Global_1940311->f_1433.f_4189.f_37[func_551(*uParam0, 1)], uParam0);
	bVar0 = func_579(*uParam0);
	iVar1 = _0x96fd694fe5be55dc(-1641598689);
	if (bVar0)
	{
		if (iVar1 == 756463805)
		{
			func_580(*uParam0);
			return;
		}
		else
		{
			func_581(&(Global_1940311->f_1433.f_4189.f_1936), *uParam0);
			func_582(*uParam0);
		}
	}
}

void func_463(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = func_583(iParam0, 1);
	if (!func_373(iVar0, uParam1, 0, -1))
	{
		func_550(uParam1);
	}
	func_584(iParam0, Global_1940311->f_1433.f_4189.f_1579[iParam0], *uParam1);
	if (bParam2 && func_585(iParam0))
	{
		func_586(&(Global_1940311->f_1433.f_4189.f_1985), uParam1, iParam0);
	}
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

int func_465(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_587(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_466(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381->f_11.f_1562[iVar0]->f_2)
		{
			return &(Global_1139381->f_11.f_1562[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_467(var uParam0, int iParam1)
{
	Global_1139381->f_4621.f_36[iParam1] = *uParam0;
	Global_1139381->f_4621.f_36[iParam1]->f_1 = uParam0->f_13;
}

void func_468(var uParam0, int iParam1)
{
	if (!func_549(*uParam0))
	{
		return;
	}
	if (!func_588(uParam0->f_13))
	{
		return;
	}
	if (func_457(uParam0))
	{
		func_589(uParam0);
	}
	iVar0 = func_576(iParam1);
	iVar1 = ((Global_1139381->f_11.f_1562[func_551(*uParam0, 1)])->f_9[uParam0->f_13])->f_10;
	func_590(iVar0, iVar1);
}

int func_469(int iParam0)
{
	return iParam0 * 31;
}

int func_470(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_38((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_471(var uParam0, bool bParam1, int iParam2)
{
	func_591(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_592(func_470(uParam0->f_1));
	}
	else
	{
		func_593();
	}
}

int func_472(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_473(int iParam0, var uParam1)
{
	if (func_594(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

void func_479(var uParam0, int iParam1)
{
	func_595(uParam0, iParam1);
}

int func_480(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1301323->f_84[iParam0][iVar0])
	{
		return func_480(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1301323->f_84[iParam0][iVar0])
	{
		return func_480(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_481(int iParam0, int iParam1)
{
	return (*Global_1301323->f_84[iParam0])[iParam1]->f_1;
}

int func_482(int iParam0, int iParam1)
{
	if (!func_431(iParam0, 2))
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

bool func_483(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

void func_484(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_349(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<4> func_485()
{
	return Var0;
}

void func_486(int iParam0, var uParam1, var uParam2)
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

struct<14> func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_488(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_489(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_398(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_490(int iParam0)
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

bool func_491()
{
	return (func_596(-1185145312, 0, 0, 0) > 0 && func_597(func_403(889965687, func_401(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_492(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_398(0);
	*uParam1 = { func_403(iParam0, func_423(0), iParam3, 0) };
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

bool func_493(int iParam0, int iParam1, int iParam2)
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

bool func_494(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_398(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_495(int iParam0)
{
	return func_393(iParam0, 1279601681);
}

bool func_496(int iParam0, int iParam1)
{
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	if (func_320(iParam0))
	{
		return func_506(func_321(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

int func_497(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_396(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_498(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_598(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_407(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_324(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_599(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_600(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_438(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_355(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_398(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_499(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_598(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_429(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_324(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_173() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_438(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_355(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_398(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_500(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_601(uParam1->f_8, iParam0, uVar0, 2048) || func_601(uParam1->f_8, iParam0, uVar0, 32768)) || func_601(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_601(uParam1->f_8, iParam0, uVar0, 4) || func_601(uParam1->f_8, iParam0, uVar0, 256)) || func_601(uParam1->f_8, iParam0, uVar0, 65536)) || func_601(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_601(uParam1->f_8, iParam0, uVar0, 1) || func_601(uParam1->f_8, iParam0, uVar0, 8)) || func_601(uParam1->f_8, iParam0, uVar0, 65536)) || func_601(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_601(uParam1->f_8, iParam0, uVar0, 1) || func_601(uParam1->f_8, iParam0, uVar0, 16)) || func_601(uParam1->f_8, iParam0, uVar0, 2)) || func_601(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_601(uParam1->f_8, iParam0, uVar0, 8) || func_601(uParam1->f_8, iParam0, uVar0, 4096)) || func_601(uParam1->f_8, iParam0, uVar0, 256)) || func_601(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_501(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_502(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_602(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_602(iParam1, 2, 0, 0);
	return -1;
}

int func_503(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_602(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_504(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_603(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_505(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_506(int iParam0, int iParam1, bool bParam2)
{
	if (!func_483(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_511(iParam0, iParam1);
	}
	return true;
}

bool func_507(int iParam0, int iParam1)
{
	*iParam1 = func_604(iParam0, 1);
	return *iParam1 != 0;
}

bool func_508(int iParam0, int iParam1)
{
	*iParam1 = func_605(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_509()
{
	return Global_1915715->f_22477;
}

bool func_510(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_606(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
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
	while (iScriptParam_1 < iLocal_475)
	{
		if (&Var0[iScriptParam_1] == iParam1)
		{
			iVar473 = Var0[iScriptParam_1]->f_35;
			iVar475 = 0;
			while (iScriptParam_2 < iScriptParam_0)
			{
				uVar472 = &Var0[iScriptParam_1]->f_36[iScriptParam_2];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iScriptParam_2 + 1;
			}
		}
		iVar474 = iScriptParam_1 + 1;
	}
	return false;
}

int func_512(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_497(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_327(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_608(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_607(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_497(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_326(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_608("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_322(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_513(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_514(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_515(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_516(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_517(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_518(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_519(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_520(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_521(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_522(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_523(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_524(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_525(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_526(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_527(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
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
	return func_609(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_528(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_173() == -1)
	{
		if (func_432(iParam0))
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

bool func_529(int iParam0, int iParam1, bool bParam2)
{
	if (!func_343(iParam0, 0))
	{
		return func_610(func_394(iParam0), iParam1, bParam2);
	}
	if (func_320(iParam0))
	{
		return func_511(func_321(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_173() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_611(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_530(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_343(iParam0, 0) && !func_431(func_394(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
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

int func_531(int* iParam0, int iParam1)
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

int func_532(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_612(iParam1, 1) && !func_613(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_608(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_435(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_327((iVar1 + func_614(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_608(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_435(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_326((iVar3 + func_614(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_608("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_431(func_394(iParam1), 2))
	{
		if (!func_615(func_394(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_343(iParam1, 0))
	{
		if (!func_229(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_533(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_534(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_535(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_536(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_537(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_538(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_539(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_540(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_541(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_542(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_543(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_544(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_545(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_546(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_547(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
	return func_616(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

int func_548()
{
	return Global_1940311->f_1433.f_4189.f_2083;
}

bool func_549(int iParam0)
{
	iVar0 = func_551(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

void func_550(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_570(&Var0);
	*uParam0 = { Var0 };
}

int func_551(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

int func_552(int iParam0)
{
	if (!func_460())
	{
		return -1;
	}
	if (!func_549(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1139381->f_4796.f_34[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_553(int iParam0)
{
	if (!func_549(iParam0))
	{
		return -1;
	}
	iVar2 = func_617(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_464(iVar0);
		if (func_618(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_554(var uParam0)
{
	if (!func_619(*uParam0))
	{
		return false;
	}
	if (func_557(uParam0))
	{
		return true;
	}
	return _unlock_is_unlocked(uParam0->f_2);
}

int func_555(var uParam0)
{
	if (!func_549(*uParam0))
	{
		return -1;
	}
	if (!func_343(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_620(iVar1);
		Var2 = { func_403(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_556(var uParam0)
{
	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_549(*uParam0))
	{
		return -1;
	}
	if (!func_343(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_620(iVar2);
		Var3 = { func_403(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
		}
		else
		{
			iVar8 = func_621(iVar2);
			iVar0 = func_434(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_557(var uParam0)
{
	return func_622(uParam0->f_2, 1);
}

int func_558(var uParam0)
{
	if (!func_549(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_375(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_559(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_560(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_623(uParam0));
}

int func_561(var uParam0)
{
	return 0;
}

var func_562(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_563(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_624(uParam0)) && func_625(uParam0->f_2, &(uParam0->f_28)));
}

bool func_564(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_624(uParam0)) && func_626(uParam0->f_2, &(uParam0->f_28)));
}

bool func_565(var uParam0)
{
	return (((!uParam0->f_20 && func_624(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_566(var uParam0)
{
	return 0;
}

var func_567(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_568(int iParam0, int iParam1)
{
	return func_435(iParam0, iParam1, 1, 0, 1, 0);
}

int func_569(int iParam0, int iParam1)
{
	iVar0 = func_620(iParam0 + 1);
	return func_568(iVar0, iParam1);
}

void func_570(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_571(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	if (!func_549(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&(*Global_1145091)[iVar1]->f_10[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_572(var uParam0, int iParam1)
{
	return func_304(*uParam0, iParam1);
}

char* func_573(var uParam0)
{
	return _create_var_string(42, "MP_ABILITY_CARD_DISPLAY_STRING", _create_var_string(0, uParam0->f_8), _create_var_string(2, func_627(uParam0->f_13)));
}

char* func_574(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_588(uParam46->f_13))
	{
		return "NULL";
	}
	return _create_var_string(0, Param0.f_9[uParam46->f_13]->f_11);
}

bool func_575(int iParam0)
{
	return func_160(&(Global_1956200->f_1565), iParam0, 1);
}

int func_576(int iParam0)
{
	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (&Global_1296859 + iVar0);
	iVar1 = func_628(iVar0, 1);
	if (func_629(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_577(int iParam0)
{
	if (!func_629(iParam0))
	{
		return 0;
	}
	iVar0 = func_630(iParam0, 1);
	if (!func_631(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_632(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_633(iParam0, iVar1))
		{
			case 0:
				func_634(iVar1, iParam0, iVar4);
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
						func_634(iVar1, iParam0, iVar4);
						func_635(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_635(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_636(iVar1, 1);
				func_637(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_638(iVar2, 0);
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
			func_639(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

void func_578(var uParam0, var uParam1)
{
	_databinding_write_data_string(uParam0->f_2, uParam1->f_11);
	_databinding_write_data_string(uParam0->f_3, uParam1->f_12);
	_databinding_write_data_hash_string(uParam0->f_4, uParam1->f_9);
	_databinding_write_data_hash_string(uParam0->f_5, uParam1->f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_640(uParam1->f_1, uParam1->f_13));
	_databinding_write_data_hash_string(uParam0->f_6, *uParam1);
	_databinding_write_data_bool(uParam0->f_7, func_457(uParam1));
	_databinding_write_data_bool(uParam0->f_34, uParam1->f_22);
	_databinding_write_data_bool(uParam0->f_12, uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_13, !uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_35, func_641(uParam1));
	_databinding_write_data_bool(uParam0->f_14, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_15, uParam1->f_30);
	_databinding_write_data_bool(uParam0->f_16, uParam1->f_29);
	_databinding_write_data_bool(uParam0->f_17, uParam1->f_31);
	_databinding_write_data_string(uParam0->f_18, func_642(uParam1));
	_databinding_write_data_bool(uParam0->f_19, uParam1->f_24);
	_databinding_write_data_bool(uParam0->f_20, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_21, uParam1->f_25);
	_databinding_write_data_bool(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	_databinding_write_data_bool(uParam0->f_23, !uParam1->f_14);
	_databinding_write_data_bool(uParam0->f_24, (!uParam1->f_14 && func_643(4)));
	_databinding_write_data_string(uParam0->f_25, func_644(uParam1));
	_databinding_write_data_bool(uParam0->f_26, func_645(uParam1));
	_databinding_write_data_bool(uParam0->f_27, func_646(uParam1));
	_databinding_write_data_bool(uParam0->f_28, func_647(uParam1));
	_databinding_write_data_bool(uParam0->f_29, (uParam1->f_31 && func_647(uParam1)));
	_databinding_write_data_bool(uParam0->f_30, (uParam1->f_25 && func_647(uParam1)));
	if (uParam1->f_26)
	{
		_databinding_write_data_string(uParam0->f_31, func_648(0));
		_databinding_write_data_string(uParam0->f_32, func_649(0));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_31, func_648(func_650(uParam1->f_17)));
		_databinding_write_data_string(uParam0->f_32, func_649(func_651(uParam1->f_17)));
	}
	_databinding_write_data_int(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		_databinding_write_data_string(uParam0->f_43, func_652(uParam1->f_16));
	}
	_databinding_write_data_int(uParam0->f_36, uParam1->f_13);
	_databinding_write_data_int(uParam0->f_38, uParam1->f_15);
	_databinding_write_data_int(uParam0->f_40, func_653(uParam1->f_13));
	_databinding_write_data_bool(uParam0->f_10, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_11, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

bool func_579(int iParam0)
{
	return func_654() == iParam0;
}

void func_580(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_373(iParam0, &Var0, 2, iVar68);
		func_655(Global_1940311->f_1433.f_4189.f_1797[iVar68], Var0);
		if (func_656(iVar68))
		{
			func_657(&(Global_1940311->f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

void func_581(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_578(uParam0, &Param1);
	iVar0 = func_653(Param1.f_13);
	_databinding_write_data_string(uParam0->f_44, _create_var_string(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	_databinding_write_data_string(uParam0->f_45, func_658(&Param1));
	_databinding_write_data_string(uParam0->f_47, func_659(&Param1));
	_databinding_write_data_bool(uParam0->f_46, func_660(&Param1));
	_databinding_write_data_bool(uParam0->f_48, func_661(&Param1));
}

void func_582(struct<34> Param0)
{
	if (!func_662())
	{
		return;
	}
	iVar0 = func_548();
	if (func_460())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else if (iVar0 == 1)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, false);
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_4, func_663(Param0));
}

int func_583(int iParam0, bool bParam1)
{
	if (func_460())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_464(iParam0);
	Var1 = { func_401(bParam1) };
	iVar5 = func_465(Var1, iVar0, 0, bParam1);
	if (!func_664(iVar5))
	{
		return 0;
	}
	return func_466(iVar5);
}

void func_584(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bVar0 = func_665(iParam0);
	if (func_460())
	{
		_databinding_write_data_bool(uParam1->f_47, false);
		_databinding_write_data_bool(uParam1->f_46, false);
		_databinding_write_data_bool(uParam1->f_50, true);
		_databinding_write_data_bool(uParam1->f_49, false);
		_databinding_write_data_bool(uParam1->f_48, false);
		func_578(uParam1, &Param2);
		return;
	}
	func_578(uParam1, &Param2);
	if (bVar0)
	{
		func_666(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	else
	{
		func_667(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	_databinding_write_data_bool(uParam1->f_46, (bVar0 && func_668()));
	_databinding_write_data_bool(uParam1->f_47, ((bVar0 && func_668()) && func_643(0)));
	_databinding_write_data_bool(uParam1->f_48, (Param2.f_22 && func_668()));
	_databinding_write_data_bool(uParam1->f_49, ((Param2.f_22 && func_668()) && func_643(3)));
	_databinding_write_data_bool(uParam1->f_50, bVar0);
	_databinding_write_data_string(uParam1->f_51, func_652(func_669(iParam0)));
}

bool func_585(int iParam0)
{
	return Global_1940311->f_1433.f_4189.f_2086 == iParam0;
}

void func_586(var uParam0, var uParam1, int iParam2)
{
	func_670(iParam2, uParam1);
	func_578(uParam0, uParam1);
}

bool func_587(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_398(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_588(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

int func_589(var uParam0)
{
	if (!func_549(*uParam0))
	{
		return 0;
	}
	iVar0 = func_551(*uParam0, 1);
	func_458();
	_0x6b5ddfb967e5073d(&(Global_1296859->f_154[&Global_1296859]), &(Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]));
	if (_0x32348719dced2969(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (func_671(0))
		{
			_0x83fcd6921fc8fd05(&(Global_1296859->f_154[&Global_1296859]), 6);
		}
		else
		{
			_0x83fcd6921fc8fd05(&(Global_1296859->f_154[&Global_1296859]), 7);
		}
	}
	_0x7146cf430965927c(23, !Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_1);
	_0x7146cf430965927c(22, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_2);
	_0x7146cf430965927c(21, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_2);
	_0x7146cf430965927c(7, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_3);
	_0x7146cf430965927c(12, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_4);
	_0x7146cf430965927c(8, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_5);
	_0x7146cf430965927c(18, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_6);
	_0x7146cf430965927c(9, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_7);
	_0x7146cf430965927c(10, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_8);
	_0x7146cf430965927c(14, !Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_9);
	_0x95ee1dee1dcd9070(&(Global_1296859->f_154[&Global_1296859]), 1);
	return 1;
}

int func_590(int iParam0, int iParam1)
{
	if (!func_629(iParam0))
	{
		return 0;
	}
	iVar0 = func_630(iParam0, 1);
	if (!func_631(iParam1))
	{
		return 0;
	}
	iVar1 = func_632(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return 1;
	}
	if (func_631(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_577(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_636(iVar2, 1);
		switch (func_672(iParam0, iVar2))
		{
			case 0:
				func_673(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_637(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

void func_591(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_592(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_593()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_674(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_594(int iParam0, var uParam1, var uParam2)
{
	if (func_675(iParam0, uParam1, &uVar0))
	{
		func_676(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_595(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_596(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_677(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_398(bParam1), iParam0, iParam3);
}

int func_597(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_678(&uParam0, iParam4, bParam5, iParam6);
}

bool func_598(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_599(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_407(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_679(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_600(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_403(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_601(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_680(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_681(iParam0, iParam1, iParam2, iParam3);
}

int func_603(int* iParam0)
{
	return func_682(iParam0->f_1);
}

int func_604(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_683(iVar0, 1, 0);
		if (!func_396(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_684(&(Var2[iVar34])))
				{
					if (!bParam1 || func_330(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_605(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_683(iVar0, 0, 1);
		if (!func_396(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_685(&(Var9[iVar41])))
				{
					if (!bParam1 || func_330(&(Var9[iVar41]), 0, 1, 1) > 0)
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

bool func_606(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_607(int iParam0)
{
	return (iParam0 / 100);
}

void func_608(char* sParam0)
{
	Global_1915715->f_22470 = func_306(sParam0, 10000, 0, 0, 0, 1);
}

bool func_609(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_686(uParam3[iVar0], (*uParam3)[iVar0]->f_1, (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_687(iParam0, uParam1, uParam5, iParam2, bParam6);
}

int func_610(int iParam0, int iParam1, bool bParam2)
{
	if (!func_431(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_173() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_688(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_611(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_343(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
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

bool func_612(int iParam0, bool bParam1)
{
	if (!func_393(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_393(iParam0, -1090933859))
		{
			return func_321(iParam0, 1) != 0;
		}
		if ((func_529(iParam0, -915411861, 0) || func_529(iParam0, 600942249, 0)) || func_529(iParam0, -570078785, 0))
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

bool func_613(int iParam0, bool bParam1)
{
	iVar0 = func_689(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_511(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_322(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_614(int* iParam0, int iParam1)
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
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_435(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_615(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!func_690(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_324(0)) && !func_325());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_326(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_327(iVar32))
			{
			}
			else
			{
				iVar33 = func_330(&(Var0[iVar34]), 0, !bVar35, 0);
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

bool func_616(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	if (*uParam5 < iParam4)
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
		else if (!func_686(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_691(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

int func_617(int iParam0)
{
	if (!func_549(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_551(iParam0, 1)])->f_2;
}

bool func_618(int iParam0, int iParam1, bool bParam2)
{
	if (!func_664(iParam0))
	{
		return false;
	}
	Var0 = { func_401(bParam2) };
	if (func_434(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_619(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_393(vParam0.z, 216050813))
	{
		if (!_unlock_is_unlocked(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_620(int iParam0)
{
	iVar0 = iParam0;
	return func_692(iVar0);
}

int func_621(int iParam0)
{
	iVar0 = iParam0;
	return func_693(iVar0);
}

int func_622(int iParam0, bool bParam1)
{
	if (!func_664(iParam0))
	{
		return 0;
	}
	Var0 = { func_401(bParam1) };
	if (func_434(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_434(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_434(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_434(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_434(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_623(var uParam0)
{
	return uParam0->f_15 >= func_653(uParam0->f_13);
}

bool func_624(var uParam0)
{
	return _unlock_is_visible(uParam0->f_2);
}

bool func_625(int iParam0, var uParam1)
{
	*uParam1 = func_694(iParam0, 1);
	return *uParam1 != 0;
}

bool func_626(int iParam0, var uParam1)
{
	*uParam1 = func_695(iParam0, 1, 0);
	return *uParam1 != 0;
}

char* func_627(int iParam0)
{
	iVar0 = iParam0;
	return func_696(iVar0);
}

int func_628(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return 1547488310;
		case 162:
			return 1449867002;
		case 163:
			return -46116991;
		case 164:
			return 1281707602;
		case 165:
			return 1865781806;
		case 166:
			return -1631930150;
		case 167:
			return -2059285007;
		case 168:
			return 456199285;
		case 169:
			return -340578116;
		case 170:
			return 362862598;
		case 171:
			return -1391865428;
		case 172:
			return -1084890102;
		case 173:
			return -1857550353;
		case 174:
			return -1629969648;
		case 175:
			return 576694808;
		case 176:
			return -2006026692;
		case 177:
			return -161625840;
		case 178:
			return 1662680949;
		case 179:
			return 352539363;
		case 180:
			return -1196069774;
		case 181:
			return -1685270562;
		case 182:
			return -813902658;
		case 183:
			return 282858309;
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

bool func_629(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

int func_630(int iParam0, int iParam1)
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

bool func_631(int iParam0)
{
	iVar0 = func_632(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_632(int iParam0, int iParam1)
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

int func_633(int iParam0, int iParam1)
{
	iVar0 = func_697(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_636(iParam1, 1);
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

int func_634(int iParam0, int iParam1, int iParam2)
{
	if (!func_629(iParam1))
	{
		return 0;
	}
	if (!func_698(iParam0))
	{
		return 0;
	}
	iVar0 = func_636(iParam0, 1);
	func_699(iParam0, iParam1, iParam2);
	if (func_700(*Global_1146212->f_35859.f_3116[iVar0]) && func_701(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_702(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_703(vVar1))
		{
			if (func_704(vVar1.x, vVar1.y, vVar1.z))
			{
				func_705(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_706(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_706(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_635(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_636(int iParam0, int iParam1)
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

void func_637(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_638(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_639(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_640(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	return func_707(iParam0, iVar0);
}

bool func_641(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_642(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_643(int iParam0)
{
	iVar0 = func_708();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_644(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_645(var uParam0)
{
	return (uParam0->f_29 || uParam0->f_23);
}

bool func_646(var uParam0)
{
	return (!func_645(uParam0) && (uParam0->f_30 || uParam0->f_24));
}

int func_647(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_645(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_326(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_646(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_327(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

var func_648(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

var func_649(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_648(iParam0);
}

int func_650(int iParam0)
{
	return (iParam0 / 100);
}

int func_651(int iParam0)
{
	return (iParam0 % 100);
}

var func_652(int iParam0)
{
	if (iParam0 <= -1)
	{
		return "";
	}
	_int_to_string(iParam0, "%i", &Var0);
	return func_709(Var0);
}

int func_653(int iParam0)
{
	iVar0 = iParam0;
	return func_710(iVar0);
}

int func_654()
{
	return Global_1940311->f_1433.f_4189.f_2084;
}

void func_655(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_578(uParam0, &uParam1);
}

bool func_656(int iParam0)
{
	return func_711() == iParam0;
}

void func_657(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_578(uParam0, &uParam1);
	_databinding_write_data_string(uParam0->f_45, func_658(&uParam1));
	_databinding_write_data_string(uParam0->f_47, func_659(&uParam1));
	_databinding_write_data_bool(uParam0->f_46, func_660(&uParam1));
	_databinding_write_data_bool(uParam0->f_48, func_661(&uParam1));
}

char* func_658(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_659(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_660(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_661(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_662()
{
	return _is_app_active(-1641598689);
}

char* func_663(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	sVar0 = func_713(func_712(), 109029619);
	if (func_460())
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_548() == 1)
	{
		return _create_var_string(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_662())
	{
		return "INVALID";
	}
	iVar1 = _0x96fd694fe5be55dc(-1641598689);
	if (iVar1 == 1738917854)
	{
		return func_715(func_714());
	}
	else if (iVar1 == -477213344)
	{
		return func_716(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

bool func_664(int iParam0)
{
	iVar0 = func_404(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

bool func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _unlock_is_unlocked(-1815917332);
		case 1:
			return _unlock_is_unlocked(446771306);
		case 2:
			return _unlock_is_unlocked(214930631);
		case 3:
			return _unlock_is_unlocked(1057421621);
		default:
			break;
	}
	return false;
}

void func_666(var uParam0, int iParam1)
{
	func_242(uParam0, iParam1);
}

void func_667(var uParam0, int iParam1)
{
	func_717(uParam0, iParam1);
}

bool func_668()
{
	return func_548() == 0;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_670(int iParam0, var uParam1)
{
	if (!func_549(*uParam1))
	{
		uParam1->f_11 = func_718(iParam0);
		uParam1->f_12 = func_719(iParam0);
	}
}

bool func_671(int iParam0)
{
	return func_160(&(Global_1956200->f_1753), iParam0, 1);
}

int func_672(int iParam0, int iParam1)
{
	iVar0 = func_697(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_636(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
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

int func_673(int iParam0, int iParam1, int iParam2)
{
	if (!func_629(iParam1))
	{
		return 0;
	}
	if (!func_698(iParam0))
	{
		return 0;
	}
	iVar0 = func_636(iParam0, 1);
	if (!func_720(iParam2))
	{
		return 0;
	}
	bVar1 = func_700(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_721(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_722(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_699(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_704(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_705(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_674(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_675(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_472(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_676(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

bool func_677(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_678(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_723(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_679(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_724((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_485() };
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

bool func_680(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_681(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_725(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_682(int iParam0)
{
	iVar0 = func_726(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_602(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_602(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_683(int iParam0, bool bParam1, bool bParam2)
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

bool func_684(int iParam0)
{
	return func_349(iParam0) == 1946043663;
}

bool func_685(int iParam0)
{
	return func_349(iParam0) == -126813555;
}

bool func_686(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_606(0))
	{
		iVar5 = func_328(func_727(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_401(1) };
			Var0.f_4 = func_402(iVar5);
			*uParam2->f_1[0] = { func_403(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_407(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_599(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_403(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_347(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_403(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_687(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != -1883671814)
	{
		return false;
	}
	if (!func_728(*uParam1))
	{
		return false;
	}
	if (!func_729(iParam0, iParam3))
	{
		return false;
	}
	if (_0xa3b8d31c13cb4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_730(iParam0, bParam4);
}

bool func_688(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_431(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_731(iParam0, iParam1, &Var0))
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

int func_689(int iParam0, bool bParam1)
{
	if (!func_612(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_321(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_321(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_321(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_321(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_321(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_321(-611782825, 1);
	}
	return func_321(iParam0, 1);
}

bool func_690(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_431(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, iParam1);
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
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
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
		func_732(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_691(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_733(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_729(iParam0, iParam3))
	{
		return false;
	}
	if (func_734(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_730(iParam0, bParam4);
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_694(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_683(iVar0, 1, 0);
		if (!func_323(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_684(&(Var2[iVar34])))
				{
					if (!bParam1 || func_330(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_695(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_683(iVar0, 0, 1);
		if (!func_323(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_685(&(Var9[iVar41])))
				{
					if (!bParam1 || func_330(&(Var9[iVar41]), 0, 1, 1) > 0)
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

char* func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_697(int iParam0)
{
	if (func_735(iParam0))
	{
		return (func_736(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_698(int iParam0)
{
	iVar0 = func_636(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_699(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_630(iParam1, 1);
	iVar1 = func_636(iParam0, 1);
	iVar2 = func_632(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_737(iVar3, 1);
		if (!func_738(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_739(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_740(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_741(iVar6))
		{
		}
		else
		{
			iVar8 = func_742(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_743(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_700(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_701(int iParam0, int iParam1)
{
	if (!func_698(iParam0))
	{
		return false;
	}
	if (!func_744(iParam1))
	{
		return false;
	}
	iVar0 = func_745(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_702(int iParam0)
{
	iVar0 = func_746(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_703(vector3 vParam0)
{
	if (!func_698(vParam0.x))
	{
		return false;
	}
	if (!func_629(vParam0.y))
	{
		return false;
	}
	if (!func_720(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_704(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_630(iParam1, 1);
	iVar1 = func_636(iParam0, 1);
	iVar2 = func_632(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_737(iVar3, 1);
		if (!func_738(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_739(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_747(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_741(iVar6))
		{
		}
		else if (!func_748(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_742(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_749(iVar6);
			}
		}
		iVar7++;
	}
	func_750(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_705(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_744(iParam0))
	{
		return;
	}
	iVar0 = func_745(iParam0, 1);
	if (!func_698(iParam1))
	{
		return;
	}
	if (!func_629(iParam2))
	{
		return;
	}
	if (!func_720(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_706(int iParam0)
{
	if (!func_744(iParam0))
	{
		return;
	}
	iVar0 = func_745(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

int func_707(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 304794100:
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case 1467455271:
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case 1272538178:
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return 1105014447;
}

int func_708()
{
	return Global_1139381->f_4621.f_155;
}

var func_709(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1139381->f_11.f_1562.f_1647[0]);
		case 1:
			return &(Global_1139381->f_11.f_1562.f_1647[1]);
		default:
			break;
	}
	return -1;
}

int func_711()
{
	return Global_1940311->f_1433.f_4189.f_2087;
}

var func_712()
{
	return func_751(Global_1940311->f_1433.f_8.f_7);
}

char* func_713(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_752(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_714()
{
	return Global_1940311->f_1433.f_4189.f_2086;
}

char* func_715(int iParam0)
{
	if (!func_665(iParam0))
	{
		if (func_753(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_669(iParam0));
		}
	}
	else if (!func_754(iParam0, 1))
	{
		if (func_753(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_753(iParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_716(var uParam0)
{
	if (func_755(uParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_756(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

void func_717(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

bool func_720(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_721(int iParam0)
{
	if (!func_744(iParam0))
	{
		return false;
	}
	iVar0 = func_757(iParam0);
	if (!func_698(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_722(int iParam0)
{
	if (!func_744(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_745(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

bool func_723(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_398(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_494(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_724(var uParam0)
{
	if (!func_758(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

void func_725(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_759(&(uParam0->f_4));
}

int func_726(int iParam0)
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

int func_727()
{
	return Global_1915715->f_20241;
}

bool func_728(struct<17> Param0)
{
	if (!func_483(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_729(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_760(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_761(iParam0))
		{
			return false;
		}
		if (!func_760(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_730(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_761(iParam0);
	}
	return true;
}

bool func_731(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_732(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_349(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_733(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_343(uParam1->f_8, 0) && !func_431(func_394(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_304(iParam2, 128))
	{
		if (func_349(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_304(iParam2, 16))
	{
		if (!func_500(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_734(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

bool func_735(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_736(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (func_735(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_762(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_763(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_764(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_765(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_766(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_767(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_737(int iParam0, int iParam1)
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

bool func_738(int iParam0)
{
	iVar0 = func_737(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_739(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_768(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_740(int iParam0)
{
	if (!func_738(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0, 1);
	if (!func_769(&(Global_1146212->f_2169[iVar0])))
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
	if (!func_770(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_771(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_741(int iParam0)
{
	iVar0 = func_742(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_742(int iParam0, int iParam1)
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

void func_743(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_772();
			break;
		case -2103256604:
			func_773();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_774(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_774(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_774(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_35(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_774(iParam0));
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
			func_776(func_775(iParam0));
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
			func_777();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_769(17);
			break;
		case -824728332:
			func_769(16);
			break;
	}
}

bool func_744(int iParam0)
{
	iVar0 = func_745(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_745(int iParam0, int iParam1)
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

int func_746(int iParam0)
{
	iVar0 = func_757(iParam0);
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
		iVar64 = func_636(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_778(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_779(&(Global_1146212->f_35859.f_9503[iVar65])) };
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

void func_747(int iParam0)
{
	if (!func_738(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0, 1);
	if (!func_769(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_770(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_771(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_748(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_780(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_749(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_772();
			break;
		case -2103256604:
			func_773();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_774(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_774(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_774(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_35(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_774(iParam0));
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
			iVar2 = func_775(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_781(iParam0, 0));
			func_782(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_781(iParam0, 1));
			func_782(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_781(iParam0, 2));
			func_782(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_781(iParam0, 3));
			func_782(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_775(iParam0);
			func_782(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_775(iParam0);
			func_782(iVar2, 4, 1, -1, 0);
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
			func_783();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_769(17);
			break;
		case -824728332:
			func_769(16);
			break;
	}
}

void func_750(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_784(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_785(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

var func_751(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_752(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_753(int iParam0)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_754(int iParam0, bool bParam1)
{
	iVar0 = func_464(iParam0);
	Var1 = { func_401(bParam1) };
	iVar5 = func_786(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_755(var uParam0)
{
	return (!uParam0->f_20 && !func_624(uParam0));
}

int func_756(int iParam0, bool bParam1)
{
	if (!func_343(iParam0, 0))
	{
		return -1;
	}
	_0x7c1c2062cfad06fe(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_393(iParam0, 81450561) || func_393(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case -1399517481:
		case -999519443:
		case 128291088:
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case -55206167:
			return 1;
		case -697100746:
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

int func_757(int iParam0)
{
	if (!func_744(iParam0))
	{
		return -1;
	}
	iVar0 = func_745(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_758(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_759(var uParam0)
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

bool func_760(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_761(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_602(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_602(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_602(*iParam0, 2, 0, 0);
		return false;
	}
	func_602(*iParam0, 1, 0, 0);
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

bool func_762(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_764(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_765(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_766(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_767(int iParam0)
{
	iVar0 = func_630(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_768(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_787(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_769(int iParam0)
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

bool func_770(int iParam0)
{
	iVar0 = func_771(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_771(int iParam0, int iParam1)
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

void func_772()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_680((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_773()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_774(int iParam0)
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

int func_775(int iParam0)
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

void func_776(int iParam0)
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

void func_777()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

bool func_778(int iParam0, int iParam1)
{
	if (!func_698(iParam0))
	{
		return false;
	}
	iVar0 = func_636(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_700(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_745(iVar2, 1)];
		Var4 = { func_779(iVar3) };
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
			if (!func_788() && !func_789())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_788())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_697(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_697(iParam1);
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
			iVar1 = func_697(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_790(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_791(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_697(iParam1);
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

struct<31> func_779(int iParam0)
{
	iVar0 = func_636(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_780(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_787(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_781(int iParam0, int iParam1)
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

void func_782(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_783()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_784(int iParam0)
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

char* func_785(int iParam0)
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

int func_786(var uParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_398(bParam2), uParam0, bParam1);
}

bool func_787(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_792(iVar7);
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

bool func_788()
{
	return Global_1572887->f_6;
}

bool func_789()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_7(func_73(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_793(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_790(var uParam0)
{
	if (func_794(uParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) != 1)
		{
			func_795(uParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) == 1;
}

bool func_791(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_792(int iParam0)
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

bool func_793(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_794(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_795(var uParam0)
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
		func_796(uParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_797(iVar0);
	_0x51951de06c0d1c40(uParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_796(var uParam0)
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
	func_797(iVar0);
	_0x51951de06c0d1c40(uParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_797(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

