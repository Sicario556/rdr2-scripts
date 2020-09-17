void __EntryFunction__()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0 = { func_1(iVar473) };
	func_2(&Local_13, Var0.f_2, Var0.f_5, 0f, 0f, Var0.f_8);
	func_4(&Local_13, 388);
	func_6(&Local_13, 762);
	func_8(&Local_13, 953);
	func_10(&Local_13, 1185);
	func_12(&Local_13, 1507);
	func_14(&Local_13, 1589);
	func_16(&Local_13, 1730);
	func_18(&Local_13, 1754);
	func_19(&uScriptParam_0);
	if (network_is_host_of_this_script())
	{
		func_20(&Local_13, 2, iVar473);
	}
	Local_13.f_160[network_player_id_to_int()] = 1;
	while (true)
	{
		if (!func_21(&Local_13))
		{
			func_22(&uScriptParam_0);
		}
		wait(0);
	}
	func_22(&uScriptParam_0);
	func_23();
}

struct<10> func_1(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_25(func_24(iParam0), &Var0);
	return Var0;
}

void func_2(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { vParam5 };
	uParam0->f_7 = func_26(iParam1);
	uParam0->f_289 = 3644;
	uParam0->f_292 = 3653;
	uParam0->f_293 = 3653;
	uParam0->f_295 = 3653;
	uParam0->f_294 = 3653;
	uParam0->f_291 = 3644;
	uParam0->f_290 = 3644;
	uParam0->f_296 = 3644;
	uParam0->f_297 = 3644;
}

int func_3()
{
	func_29(Local_13.f_8.f_4[0], 0);
	func_29(Local_13.f_8.f_4[1], 2);
	func_29(Local_13.f_8.f_4[2], 4);
	clear_area(Local_13.f_1, 2f, 512);
	set_random_seed(Local_13.f_8);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_30(2, Local_13.f_1, Local_13.f_4.f_2, &(Local_13.f_8.f_4[iVar0]), &vVar2, 0);
		func_31(2, Local_13.f_4.f_2, &(Local_13.f_8.f_4[iVar0]), &vVar5);
		func_32(Local_13.f_8.f_93[iVar0], 0, vVar2, vVar5.z, 0, 1);
		iVar0++;
	}
	uVar8 = 52;
	set_random_seed(Local_13.f_8);
	func_33(&uVar8);
	func_34(&uVar8);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_35(&uVar8, &Var115);
		func_36(&uVar117, Var115, Local_13.f_7, 0);
		iVar118 = func_37(&(Local_13.f_8.f_4[iVar0]), 0);
		iVar1 = func_38(iVar0, 0);
		func_39(Local_13.f_8.f_20[iVar1], uVar117, iVar118, 1, 0);
		func_35(&uVar8, &Var115);
		func_36(&uVar117, Var115, Local_13.f_7, 0);
		iVar118 = func_37(&(Local_13.f_8.f_4[iVar0]), 1);
		iVar1 = func_38(iVar0, 1);
		func_39(Local_13.f_8.f_20[iVar1], uVar117, iVar118, 1, 0);
		iVar0++;
	}
	return 1;
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_289 = iParam1;
}

int func_5(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	iVar6 = net_to_ped(Local_13.f_8.f_4[iParam0]->f_2);
	request_anim_dict("MINI_GAMES@POKER_MG@BASE");
	if (!has_anim_dict_loaded("MINI_GAMES@POKER_MG@BASE"))
	{
		return 0;
	}
	func_40(2, Local_13.f_1, Local_13.f_4.f_2, &(Local_13.f_8.f_4[iParam0]), &vVar0);
	func_31(2, Local_13.f_4.f_2, &(Local_13.f_8.f_4[iParam0]), &vVar3);
	set_ped_leg_ik_mode(iVar6, 0);
	task_play_anim_advanced(iVar6, "MINI_GAMES@POKER_MG@BASE", "HOLD_CARDS_IDLE_A", vVar0, vVar3, 1000f, -8f, -1, 33153, 0.75f, 2, 1, 0);
	_0x2208438012482a1a(iVar6, false, false);
	remove_anim_dict("MINI_GAMES@POKER_MG@BASE");
	return 1;
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_292 = iParam1;
}

int func_7()
{
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Local_13.f_8.f_93[iVar0] == 3)
		{
			iVar2 = _net_to_anim_scene(Local_13.f_8.f_93[iVar0]->f_4);
			if (_does_anim_scene_exist(iVar2) && _is_anim_scene_loaded(iVar2, true, false))
			{
				if (func_41(&Local_13, iVar0, iVar0, "SEAT_01"))
				{
					iVar1 = func_38(iVar0, 0);
					func_42(&Local_13, Local_13.f_8.f_20[iVar1], iVar0, "SEAT_01_CARD_01");
					iVar1 = func_38(iVar0, 1);
					func_42(&Local_13, Local_13.f_8.f_20[iVar1], iVar0, "SEAT_01_CARD_02");
					if (func_43(Local_13.f_8.f_93[iVar0]))
					{
						func_44(Local_13.f_8.f_4[iVar0], 2);
					}
					else
					{
						iVar3 = 0;
					}
				}
			}
			else
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_8(var uParam0, int iParam1)
{
	uParam0->f_296 = iParam1;
}

int func_9()
{
	func_45(&uVar2, Local_13.f_7);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_46(iVar0);
		iVar3 = func_47(&(Local_13.f_8.f_4[iVar0]));
		func_39(Local_13.f_305[iVar1], uVar2, iVar3, 0, get_random_int_in_range(1, 400));
		iVar1 = func_48(iVar0);
		iVar3 = func_49(&(Local_13.f_8.f_4[iVar0]));
		func_39(Local_13.f_305[iVar1], uVar2, iVar3, 0, get_random_int_in_range(1, 200));
		iVar0++;
	}
	uVar4 = 52;
	set_random_seed(Local_13.f_8);
	func_33(&uVar4);
	func_34(&uVar4);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_35(&uVar4, &Var111);
		func_35(&uVar4, &Var111);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar3 = func_50(iVar0);
		iVar1 = func_51(iVar0);
		func_35(&uVar4, &Var111);
		func_36(&uVar2, Var111, Local_13.f_7, 0);
		func_39(Local_13.f_305[iVar1], uVar2, iVar3, 0, 0);
		iVar0++;
	}
	func_52(&uVar2, Local_13.f_7);
	func_39(Local_13.f_305[0], uVar2, 0, 0, 0);
	return 1;
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_297 = iParam1;
}

int func_11(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	iVar0 = func_38(iParam0, 0);
	func_53(Local_13.f_8.f_20[iVar0]);
	iVar0 = func_38(iParam0, 1);
	func_53(Local_13.f_8.f_20[iVar0]);
	return 1;
}

void func_12(var uParam0, int iParam1)
{
	uParam0->f_293 = iParam1;
}

int func_13(int iParam0)
{
	iVar0 = func_38(iParam0, 0);
	func_54(Local_13.f_8.f_20[iVar0]);
	iVar0 = func_38(iParam0, 1);
	func_54(Local_13.f_8.f_20[iVar0]);
	if (network_does_network_id_exist(Local_13.f_8.f_4[iParam0]->f_2) && network_has_control_of_network_id(Local_13.f_8.f_4[iParam0]->f_2))
	{
		func_55(&(Local_13.f_8.f_4[iParam0]->f_2));
	}
	func_44(Local_13.f_8.f_4[iParam0], 3);
	return 1;
}

void func_14(var uParam0, int iParam1)
{
	uParam0->f_294 = iParam1;
}

int func_15()
{
	return 1;
}

void func_16(var uParam0, int iParam1)
{
	uParam0->f_290 = iParam1;
}

int func_17()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (network_has_control_of_network_id(Local_13.f_8.f_93[iVar0]->f_4))
		{
			iVar1 = _net_to_anim_scene(Local_13.f_8.f_93[iVar0]->f_4);
			if (_does_anim_scene_exist(iVar1) && _is_anim_scene_started(iVar1, false))
			{
				uLocal_463[iVar0] = _0x8d81e7824b7753f7(iVar1, "HoldCardsLoopA", 1);
				bVar2 = get_anim_scene_bool(iVar1, "BREAKLOOP");
				iVar3 = func_56(Local_13.f_8.f_4[iVar0]);
				if (iVar3 == 2)
				{
					if (&uLocal_463[iVar0])
					{
						if (&uLocal_467[iVar0] == 0)
						{
							fLocal_471[iVar0] = get_random_float_in_range(12f, 30f);
						}
						fLocal_471[iVar0] = (&fLocal_471[iVar0] - get_frame_time());
						if (&fLocal_471[iVar0] < 0f)
						{
							if (bVar2 == 0)
							{
								set_anim_scene_bool(iVar1, "BREAKLOOP", true, false);
							}
						}
					}
					else if (&uLocal_467[iVar0] == 1)
					{
						set_anim_scene_bool(iVar1, "BREAKLOOP", false, false);
						fLocal_471[iVar0] = get_random_float_in_range(12f, 30f);
					}
				}
			}
		}
		uLocal_467[iVar0] = &uLocal_463[iVar0];
		iVar0++;
	}
	return 1;
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_291 = iParam1;
}

void func_19(var uParam0)
{
	network_set_script_is_safe_for_network_game();
	func_57(32, uParam0->f_1);
	func_58();
	network_register_host_broadcast_variables(&(Local_13.f_8), 152, 17);
	func_59(_0xba24095ea96dfe17(&(Local_13.f_8)), 152, "TG_P SceneHostData");
	network_register_player_broadcast_variables(&(Local_13.f_160), 129, 18);
	func_60(_0x690806bc83bc8ca2(Local_13.f_160[0]), 129, "TG_P SceneClientData");
	reserve_network_mission_peds(3);
	reserve_network_mission_objects(6);
	func_61(0);
	set_this_script_can_be_paused(false);
}

void func_20(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8.f_2 = iParam1;
	uParam0->f_8.f_1 = iParam2;
	uParam0->f_8 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_8.f_4[iVar0]->f_1 = iVar0;
		iVar0++;
	}
	func_62(uParam0, 1);
}

bool func_21(var uParam0)
{
	if (!func_63(uParam0))
	{
		return false;
	}
	if (uParam0->f_303 == 1)
	{
		uParam0->f_303 = 0;
	}
	uParam0->f_298 = get_distance_between_coords(uParam0->f_1, Global_35, false);
	if (network_is_host_of_this_script())
	{
		func_64(uParam0);
	}
	func_65(uParam0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_66(uParam0, uParam0->f_305[iVar0]);
		iVar0++;
	}
	return true;
}

void func_22(var uParam0)
{
	Local_13.f_160[network_player_id_to_int()] = 0;
	iVar0 = func_67(&Local_13);
	if (iVar0 == 0)
	{
		func_68(&Local_13, 1, 1);
	}
	else
	{
		func_68(&Local_13, 1, 0);
	}
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	func_23();
}

void func_23()
{
	terminate_this_thread();
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_25(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			iVar0 = 0;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 111:
			iVar0 = 3;
			break;
		case 80:
			iVar0 = 4;
			break;
		case 5:
			iVar0 = 5;
			break;
		case 81:
			iVar0 = 7;
			break;
		case 98:
			iVar0 = 8;
			break;
		case 121:
			iVar0 = 6;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_27()
{
	return 1;
}

int func_28(var uParam0)
{
	return 1;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_30(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!func_70(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (get_ground_z_for_3d_coord(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

int func_31(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!func_71(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	fVar1 = (fParam1 + fVar0);
	if (fVar1 > 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -360f)
	{
		fVar1 = (fVar1 + 360f);
	}
	*uParam3 = { 0f, 0f, fVar1 };
	return 1;
}

void func_32(var uParam0, int iParam1, vector3 vParam2, int iParam5, char* sParam6, int iParam7)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = { vParam2 };
	uParam0->f_8 = iParam5;
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_17 = iParam7;
	if (!is_string_null_or_empty(sParam6))
	{
		uParam0->f_9 = { func_72(sParam6) };
	}
	func_73(uParam0, 1);
}

void func_33(var uParam0)
{
	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				Var0.f_1 = iVar2;
				Var0 = iVar3;
				*(*uParam0)[iVar4] = { Var0 };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

void func_34(var uParam0)
{
	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = get_random_int_in_range(0, uParam0->f_106);
			Var0 = { *(*uParam0)[iVar2] };
			*(*uParam0)[iVar2] = { *(*uParam0)[iVar3] };
			*(*uParam0)[iVar3] = { Var0 };
			iVar2++;
		}
		iVar4++;
	}
}

int func_35(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return 0;
	}
	*uParam1 = { *(*uParam0)[uParam0->f_105] };
	uParam0->f_105++;
	return 1;
}

int func_36(var uParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1909758928;
							return 1;
						case 3:
							*uParam0 = 1162468676;
							return 1;
						case 4:
							*uParam0 = -1354372995;
							return 1;
						case 5:
							*uParam0 = 127662037;
							return 1;
						case 6:
							*uParam0 = -858857622;
							return 1;
						case 7:
							*uParam0 = -2062492572;
							return 1;
						case 8:
							*uParam0 = -542504583;
							return 1;
						case 9:
							*uParam0 = -1827263623;
							return 1;
						case 10:
							*uParam0 = -674570242;
							return 1;
						case 11:
							*uParam0 = 828828635;
							return 1;
						case 12:
							*uParam0 = 1774527635;
							return 1;
						case 13:
							*uParam0 = -880550872;
							return 1;
						case 14:
							*uParam0 = 1118659955;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1377685326;
							return 1;
						case 3:
							*uParam0 = 2122521996;
							return 1;
						case 4:
							*uParam0 = -905735271;
							return 1;
						case 5:
							*uParam0 = -2041734073;
							return 1;
						case 6:
							*uParam0 = 1336229167;
							return 1;
						case 7:
							*uParam0 = -142928476;
							return 1;
						case 8:
							*uParam0 = 1949899020;
							return 1;
						case 9:
							*uParam0 = -1016355603;
							return 1;
						case 10:
							*uParam0 = -2060997082;
							return 1;
						case 11:
							*uParam0 = 679836386;
							return 1;
						case 12:
							*uParam0 = 205850401;
							return 1;
						case 13:
							*uParam0 = -9762481;
							return 1;
						case 14:
							*uParam0 = -1889013498;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 490528894;
							return 1;
						case 3:
							*uParam0 = 1857377268;
							return 1;
						case 4:
							*uParam0 = 306779471;
							return 1;
						case 5:
							*uParam0 = -265576506;
							return 1;
						case 6:
							*uParam0 = 1764499352;
							return 1;
						case 7:
							*uParam0 = 343197067;
							return 1;
						case 8:
							*uParam0 = 611917374;
							return 1;
						case 9:
							*uParam0 = 1319922984;
							return 1;
						case 10:
							*uParam0 = 1496774356;
							return 1;
						case 11:
							*uParam0 = 241847248;
							return 1;
						case 12:
							*uParam0 = 1715260480;
							return 1;
						case 13:
							*uParam0 = -972291366;
							return 1;
						case 14:
							*uParam0 = -983269631;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = 890959011;
							return 1;
						case 3:
							*uParam0 = -1889927490;
							return 1;
						case 4:
							*uParam0 = 231465939;
							return 1;
						case 5:
							*uParam0 = 551112092;
							return 1;
						case 6:
							*uParam0 = -1081501637;
							return 1;
						case 7:
							*uParam0 = -1816049069;
							return 1;
						case 8:
							*uParam0 = 888381965;
							return 1;
						case 9:
							*uParam0 = -804165125;
							return 1;
						case 10:
							*uParam0 = -741495176;
							return 1;
						case 11:
							*uParam0 = -1801783288;
							return 1;
						case 12:
							*uParam0 = -2006996000;
							return 1;
						case 13:
							*uParam0 = -1114933352;
							return 1;
						case 14:
							*uParam0 = 1487250557;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 2003217523;
							return 1;
						case 3:
							*uParam0 = -399697037;
							return 1;
						case 4:
							*uParam0 = -1518699789;
							return 1;
						case 5:
							*uParam0 = -997552329;
							return 1;
						case 6:
							*uParam0 = 1652001878;
							return 1;
						case 7:
							*uParam0 = 186320325;
							return 1;
						case 8:
							*uParam0 = -1326803989;
							return 1;
						case 9:
							*uParam0 = 737551253;
							return 1;
						case 10:
							*uParam0 = 668030318;
							return 1;
						case 11:
							*uParam0 = 859105085;
							return 1;
						case 12:
							*uParam0 = -594986572;
							return 1;
						case 13:
							*uParam0 = -1754685568;
							return 1;
						case 14:
							*uParam0 = 570384605;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 496728947;
							return 1;
						case 3:
							*uParam0 = 1921848184;
							return 1;
						case 4:
							*uParam0 = -546878645;
							return 1;
						case 5:
							*uParam0 = -821118254;
							return 1;
						case 6:
							*uParam0 = -361944149;
							return 1;
						case 7:
							*uParam0 = -1874474629;
							return 1;
						case 8:
							*uParam0 = -318877148;
							return 1;
						case 9:
							*uParam0 = 932665613;
							return 1;
						case 10:
							*uParam0 = -2038176093;
							return 1;
						case 11:
							*uParam0 = -667785661;
							return 1;
						case 12:
							*uParam0 = 208099752;
							return 1;
						case 13:
							*uParam0 = -581256491;
							return 1;
						case 14:
							*uParam0 = 894832080;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1051290148;
							return 1;
						case 3:
							*uParam0 = -1005545109;
							return 1;
						case 4:
							*uParam0 = 1821478065;
							return 1;
						case 5:
							*uParam0 = 540188127;
							return 1;
						case 6:
							*uParam0 = -1480085904;
							return 1;
						case 7:
							*uParam0 = 825496160;
							return 1;
						case 8:
							*uParam0 = -628192245;
							return 1;
						case 9:
							*uParam0 = -215756895;
							return 1;
						case 10:
							*uParam0 = 793896324;
							return 1;
						case 11:
							*uParam0 = 1121466671;
							return 1;
						case 12:
							*uParam0 = 1834923532;
							return 1;
						case 13:
							*uParam0 = -1282408094;
							return 1;
						case 14:
							*uParam0 = 383127860;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = 684527193;
							return 1;
						case 3:
							*uParam0 = -263420923;
							return 1;
						case 4:
							*uParam0 = -249784185;
							return 1;
						case 5:
							*uParam0 = 1143187053;
							return 1;
						case 6:
							*uParam0 = 827657438;
							return 1;
						case 7:
							*uParam0 = -1102425647;
							return 1;
						case 8:
							*uParam0 = 853839925;
							return 1;
						case 9:
							*uParam0 = -1261345136;
							return 1;
						case 10:
							*uParam0 = -1516404361;
							return 1;
						case 11:
							*uParam0 = 1432174202;
							return 1;
						case 12:
							*uParam0 = 1131319157;
							return 1;
						case 13:
							*uParam0 = 186094910;
							return 1;
						case 14:
							*uParam0 = -1567460112;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 328068607;
							return 1;
						case 3:
							*uParam0 = -1306858058;
							return 1;
						case 4:
							*uParam0 = -1611982353;
							return 1;
						case 5:
							*uParam0 = 739756370;
							return 1;
						case 6:
							*uParam0 = 1801166233;
							return 1;
						case 7:
							*uParam0 = -644313522;
							return 1;
						case 8:
							*uParam0 = -832951172;
							return 1;
						case 9:
							*uParam0 = 1988315838;
							return 1;
						case 10:
							*uParam0 = -1001399461;
							return 1;
						case 11:
							*uParam0 = 583972710;
							return 1;
						case 12:
							*uParam0 = 854868500;
							return 1;
						case 13:
							*uParam0 = 629055820;
							return 1;
						case 14:
							*uParam0 = -833244723;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1280053851;
							return 1;
						case 3:
							*uParam0 = -633466200;
							return 1;
						case 4:
							*uParam0 = -1836575021;
							return 1;
						case 5:
							*uParam0 = -1110186928;
							return 1;
						case 6:
							*uParam0 = 1672340679;
							return 1;
						case 7:
							*uParam0 = 2003108760;
							return 1;
						case 8:
							*uParam0 = 1877192539;
							return 1;
						case 9:
							*uParam0 = -1703049832;
							return 1;
						case 10:
							*uParam0 = -1497400706;
							return 1;
						case 11:
							*uParam0 = 1971631392;
							return 1;
						case 12:
							*uParam0 = -2127206140;
							return 1;
						case 13:
							*uParam0 = -2048927458;
							return 1;
						case 14:
							*uParam0 = 1630107168;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = -949698496;
							return 1;
						case 3:
							*uParam0 = 355316014;
							return 1;
						case 4:
							*uParam0 = 1604154240;
							return 1;
						case 5:
							*uParam0 = -1789343904;
							return 1;
						case 6:
							*uParam0 = -50867196;
							return 1;
						case 7:
							*uParam0 = -1012504675;
							return 1;
						case 8:
							*uParam0 = -159578860;
							return 1;
						case 9:
							*uParam0 = 1097950533;
							return 1;
						case 10:
							*uParam0 = -1819094497;
							return 1;
						case 11:
							*uParam0 = 763417437;
							return 1;
						case 12:
							*uParam0 = -1643922980;
							return 1;
						case 13:
							*uParam0 = 1726242611;
							return 1;
						case 14:
							*uParam0 = -982898598;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = -597281244;
							return 1;
						case 3:
							*uParam0 = 1859837183;
							return 1;
						case 4:
							*uParam0 = -717777272;
							return 1;
						case 5:
							*uParam0 = -384065410;
							return 1;
						case 6:
							*uParam0 = -426226845;
							return 1;
						case 7:
							*uParam0 = -1560133449;
							return 1;
						case 8:
							*uParam0 = -1724719987;
							return 1;
						case 9:
							*uParam0 = -1506573666;
							return 1;
						case 10:
							*uParam0 = -833467841;
							return 1;
						case 11:
							*uParam0 = 1913040302;
							return 1;
						case 12:
							*uParam0 = -970236810;
							return 1;
						case 13:
							*uParam0 = 990091302;
							return 1;
						case 14:
							*uParam0 = 918658043;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = -403301546;
							return 1;
						case 3:
							*uParam0 = 1871423067;
							return 1;
						case 4:
							*uParam0 = 1337869136;
							return 1;
						case 5:
							*uParam0 = -1544981815;
							return 1;
						case 6:
							*uParam0 = 1935838007;
							return 1;
						case 7:
							*uParam0 = 1362450780;
							return 1;
						case 8:
							*uParam0 = -311392807;
							return 1;
						case 9:
							*uParam0 = 1979302072;
							return 1;
						case 10:
							*uParam0 = 527759776;
							return 1;
						case 11:
							*uParam0 = 972511286;
							return 1;
						case 12:
							*uParam0 = 866723984;
							return 1;
						case 13:
							*uParam0 = -1501906712;
							return 1;
						case 14:
							*uParam0 = 1657044585;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 696549872;
							return 1;
						case 3:
							*uParam0 = 1029329299;
							return 1;
						case 4:
							*uParam0 = -204176389;
							return 1;
						case 5:
							*uParam0 = -605490871;
							return 1;
						case 6:
							*uParam0 = -752686013;
							return 1;
						case 7:
							*uParam0 = -2098928623;
							return 1;
						case 8:
							*uParam0 = 673396831;
							return 1;
						case 9:
							*uParam0 = 61996838;
							return 1;
						case 10:
							*uParam0 = 707385061;
							return 1;
						case 11:
							*uParam0 = -1336887993;
							return 1;
						case 12:
							*uParam0 = 1986014158;
							return 1;
						case 13:
							*uParam0 = -1279519199;
							return 1;
						case 14:
							*uParam0 = -404939929;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1766621235;
							return 1;
						case 3:
							*uParam0 = 639465642;
							return 1;
						case 4:
							*uParam0 = 538279577;
							return 1;
						case 5:
							*uParam0 = 1589664504;
							return 1;
						case 6:
							*uParam0 = 1277241365;
							return 1;
						case 7:
							*uParam0 = 464078840;
							return 1;
						case 8:
							*uParam0 = 1382365335;
							return 1;
						case 9:
							*uParam0 = -1642414969;
							return 1;
						case 10:
							*uParam0 = 51231304;
							return 1;
						case 11:
							*uParam0 = 1283399627;
							return 1;
						case 12:
							*uParam0 = 1832068833;
							return 1;
						case 13:
							*uParam0 = -1516046037;
							return 1;
						case 14:
							*uParam0 = 663524178;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = -305746106;
							return 1;
						case 3:
							*uParam0 = -208088591;
							return 1;
						case 4:
							*uParam0 = 1937181298;
							return 1;
						case 5:
							*uParam0 = 707745297;
							return 1;
						case 6:
							*uParam0 = -318896190;
							return 1;
						case 7:
							*uParam0 = -954744024;
							return 1;
						case 8:
							*uParam0 = 930365499;
							return 1;
						case 9:
							*uParam0 = -1247282198;
							return 1;
						case 10:
							*uParam0 = 1370939361;
							return 1;
						case 11:
							*uParam0 = -753399062;
							return 1;
						case 12:
							*uParam0 = -977688234;
							return 1;
						case 13:
							*uParam0 = -1596094065;
							return 1;
						case 14:
							*uParam0 = -373053921;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1387954345;
							return 1;
						case 3:
							*uParam0 = -1354962655;
							return 1;
						case 4:
							*uParam0 = -804464549;
							return 1;
						case 5:
							*uParam0 = 1348814278;
							return 1;
						case 6:
							*uParam0 = 657062187;
							return 1;
						case 7:
							*uParam0 = 1510162208;
							return 1;
						case 8:
							*uParam0 = 2009701297;
							return 1;
						case 9:
							*uParam0 = 1853223245;
							return 1;
						case 10:
							*uParam0 = -1775176139;
							return 1;
						case 11:
							*uParam0 = 617703278;
							return 1;
						case 12:
							*uParam0 = -1298938137;
							return 1;
						case 13:
							*uParam0 = -1941521224;
							return 1;
						case 14:
							*uParam0 = -1676024061;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 391724922;
							return 1;
						case 3:
							*uParam0 = 671459626;
							return 1;
						case 4:
							*uParam0 = -1487277617;
							return 1;
						case 5:
							*uParam0 = -907221559;
							return 1;
						case 6:
							*uParam0 = -2131404875;
							return 1;
						case 7:
							*uParam0 = 1136582530;
							return 1;
						case 8:
							*uParam0 = -2120550211;
							return 1;
						case 9:
							*uParam0 = -281297502;
							return 1;
						case 10:
							*uParam0 = 892072825;
							return 1;
						case 11:
							*uParam0 = 1611660243;
							return 1;
						case 12:
							*uParam0 = -1248904689;
							return 1;
						case 13:
							*uParam0 = -2000963135;
							return 1;
						case 14:
							*uParam0 = -328923850;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 2037189536;
							return 1;
						case 3:
							*uParam0 = -2045530267;
							return 1;
						case 4:
							*uParam0 = 2045295050;
							return 1;
						case 5:
							*uParam0 = 1726116464;
							return 1;
						case 6:
							*uParam0 = 136818655;
							return 1;
						case 7:
							*uParam0 = 657382278;
							return 1;
						case 8:
							*uParam0 = 1404937476;
							return 1;
						case 9:
							*uParam0 = -1888826317;
							return 1;
						case 10:
							*uParam0 = 681653557;
							return 1;
						case 11:
							*uParam0 = -721735422;
							return 1;
						case 12:
							*uParam0 = 965390753;
							return 1;
						case 13:
							*uParam0 = 72733444;
							return 1;
						case 14:
							*uParam0 = 2080330127;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = -446539351;
							return 1;
						case 3:
							*uParam0 = -1722641930;
							return 1;
						case 4:
							*uParam0 = 243348692;
							return 1;
						case 5:
							*uParam0 = -2096430697;
							return 1;
						case 6:
							*uParam0 = 1941234074;
							return 1;
						case 7:
							*uParam0 = 990323913;
							return 1;
						case 8:
							*uParam0 = -1593509009;
							return 1;
						case 9:
							*uParam0 = -1941079438;
							return 1;
						case 10:
							*uParam0 = 948933843;
							return 1;
						case 11:
							*uParam0 = -1393933166;
							return 1;
						case 12:
							*uParam0 = 1865479666;
							return 1;
						case 13:
							*uParam0 = 1475987833;
							return 1;
						case 14:
							*uParam0 = 1464992706;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 940287542;
							return 1;
						case 3:
							*uParam0 = 790418313;
							return 1;
						case 4:
							*uParam0 = -2116754376;
							return 1;
						case 5:
							*uParam0 = 1317169409;
							return 1;
						case 6:
							*uParam0 = 1033660954;
							return 1;
						case 7:
							*uParam0 = 124978929;
							return 1;
						case 8:
							*uParam0 = -725520485;
							return 1;
						case 9:
							*uParam0 = -1172744195;
							return 1;
						case 10:
							*uParam0 = 1815096273;
							return 1;
						case 11:
							*uParam0 = 1304006097;
							return 1;
						case 12:
							*uParam0 = -1300766016;
							return 1;
						case 13:
							*uParam0 = -250573840;
							return 1;
						case 14:
							*uParam0 = -1824431250;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 80437487;
							return 1;
						case 3:
							*uParam0 = -11479234;
							return 1;
						case 4:
							*uParam0 = 1490589553;
							return 1;
						case 5:
							*uParam0 = -1110583329;
							return 1;
						case 6:
							*uParam0 = -1753679949;
							return 1;
						case 7:
							*uParam0 = 1137688840;
							return 1;
						case 8:
							*uParam0 = -1710863708;
							return 1;
						case 9:
							*uParam0 = 2130883601;
							return 1;
						case 10:
							*uParam0 = -1779427821;
							return 1;
						case 11:
							*uParam0 = -48560774;
							return 1;
						case 12:
							*uParam0 = -1378832890;
							return 1;
						case 13:
							*uParam0 = -1337061193;
							return 1;
						case 14:
							*uParam0 = -962473954;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = -140928778;
							return 1;
						case 3:
							*uParam0 = 1767974563;
							return 1;
						case 4:
							*uParam0 = 701349000;
							return 1;
						case 5:
							*uParam0 = -2012550923;
							return 1;
						case 6:
							*uParam0 = -802659006;
							return 1;
						case 7:
							*uParam0 = 1535788576;
							return 1;
						case 8:
							*uParam0 = -539132616;
							return 1;
						case 9:
							*uParam0 = -355413556;
							return 1;
						case 10:
							*uParam0 = 125575728;
							return 1;
						case 11:
							*uParam0 = 1392136522;
							return 1;
						case 12:
							*uParam0 = -1089443358;
							return 1;
						case 13:
							*uParam0 = 1496031634;
							return 1;
						case 14:
							*uParam0 = -1494400830;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = 877243702;
							return 1;
						case 3:
							*uParam0 = -30406831;
							return 1;
						case 4:
							*uParam0 = 1507721315;
							return 1;
						case 5:
							*uParam0 = 220923946;
							return 1;
						case 6:
							*uParam0 = 386780259;
							return 1;
						case 7:
							*uParam0 = 679225015;
							return 1;
						case 8:
							*uParam0 = -130832693;
							return 1;
						case 9:
							*uParam0 = -1857759931;
							return 1;
						case 10:
							*uParam0 = -1549381684;
							return 1;
						case 11:
							*uParam0 = -1306599616;
							return 1;
						case 12:
							*uParam0 = -1317905551;
							return 1;
						case 13:
							*uParam0 = -1489968742;
							return 1;
						case 14:
							*uParam0 = 274824986;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = 345349862;
							return 1;
						case 3:
							*uParam0 = 233738904;
							return 1;
						case 4:
							*uParam0 = 1509393818;
							return 1;
						case 5:
							*uParam0 = 60813080;
							return 1;
						case 6:
							*uParam0 = -1588867364;
							return 1;
						case 7:
							*uParam0 = -741971058;
							return 1;
						case 8:
							*uParam0 = -1901598027;
							return 1;
						case 9:
							*uParam0 = 216857924;
							return 1;
						case 10:
							*uParam0 = -1696859616;
							return 1;
						case 11:
							*uParam0 = 1250297936;
							return 1;
						case 12:
							*uParam0 = -1324063231;
							return 1;
						case 13:
							*uParam0 = 1618412160;
							return 1;
						case 14:
							*uParam0 = -628673108;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = -1336484459;
							return 1;
						case 3:
							*uParam0 = 776262968;
							return 1;
						case 4:
							*uParam0 = 1952745955;
							return 1;
						case 5:
							*uParam0 = -1067714914;
							return 1;
						case 6:
							*uParam0 = 251115602;
							return 1;
						case 7:
							*uParam0 = 1575451247;
							return 1;
						case 8:
							*uParam0 = -746735956;
							return 1;
						case 9:
							*uParam0 = 326673134;
							return 1;
						case 10:
							*uParam0 = 1872027280;
							return 1;
						case 11:
							*uParam0 = -1718732108;
							return 1;
						case 12:
							*uParam0 = -1092024524;
							return 1;
						case 13:
							*uParam0 = 2071887039;
							return 1;
						case 14:
							*uParam0 = -1106339162;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1066627194;
							return 1;
						case 3:
							*uParam0 = -799997502;
							return 1;
						case 4:
							*uParam0 = 398382432;
							return 1;
						case 5:
							*uParam0 = -766490354;
							return 1;
						case 6:
							*uParam0 = 834493370;
							return 1;
						case 7:
							*uParam0 = -627280631;
							return 1;
						case 8:
							*uParam0 = -1689944957;
							return 1;
						case 9:
							*uParam0 = -1081837586;
							return 1;
						case 10:
							*uParam0 = 1994269490;
							return 1;
						case 11:
							*uParam0 = 98506870;
							return 1;
						case 12:
							*uParam0 = 828661392;
							return 1;
						case 13:
							*uParam0 = -1902382615;
							return 1;
						case 14:
							*uParam0 = -1749931149;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = -1612375921;
							return 1;
						case 3:
							*uParam0 = -464036502;
							return 1;
						case 4:
							*uParam0 = -1734626244;
							return 1;
						case 5:
							*uParam0 = 1432065580;
							return 1;
						case 6:
							*uParam0 = -269373164;
							return 1;
						case 7:
							*uParam0 = -1462036161;
							return 1;
						case 8:
							*uParam0 = 9214594;
							return 1;
						case 9:
							*uParam0 = -449150372;
							return 1;
						case 10:
							*uParam0 = -676777548;
							return 1;
						case 11:
							*uParam0 = 2045572790;
							return 1;
						case 12:
							*uParam0 = 247170975;
							return 1;
						case 13:
							*uParam0 = 2011504438;
							return 1;
						case 14:
							*uParam0 = 1380910900;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = -1327784484;
							return 1;
						case 3:
							*uParam0 = -1496419081;
							return 1;
						case 4:
							*uParam0 = 769946245;
							return 1;
						case 5:
							*uParam0 = -744715350;
							return 1;
						case 6:
							*uParam0 = -1578164439;
							return 1;
						case 7:
							*uParam0 = 124531649;
							return 1;
						case 8:
							*uParam0 = 28598465;
							return 1;
						case 9:
							*uParam0 = 1620556079;
							return 1;
						case 10:
							*uParam0 = 1251463005;
							return 1;
						case 11:
							*uParam0 = -602401997;
							return 1;
						case 12:
							*uParam0 = -363611516;
							return 1;
						case 13:
							*uParam0 = -1631692560;
							return 1;
						case 14:
							*uParam0 = -771839452;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 729415757;
							return 1;
						case 3:
							*uParam0 = 946889695;
							return 1;
						case 4:
							*uParam0 = 1738209787;
							return 1;
						case 5:
							*uParam0 = 609774326;
							return 1;
						case 6:
							*uParam0 = -814389520;
							return 1;
						case 7:
							*uParam0 = -1586099842;
							return 1;
						case 8:
							*uParam0 = 1273393517;
							return 1;
						case 9:
							*uParam0 = -1140616583;
							return 1;
						case 10:
							*uParam0 = 675667608;
							return 1;
						case 11:
							*uParam0 = -359677198;
							return 1;
						case 12:
							*uParam0 = 1703181487;
							return 1;
						case 13:
							*uParam0 = -1127742830;
							return 1;
						case 14:
							*uParam0 = -1294625031;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = -238808491;
							return 1;
						case 3:
							*uParam0 = -610087366;
							return 1;
						case 4:
							*uParam0 = -2113376606;
							return 1;
						case 5:
							*uParam0 = -1658822997;
							return 1;
						case 6:
							*uParam0 = 458077008;
							return 1;
						case 7:
							*uParam0 = -1479991672;
							return 1;
						case 8:
							*uParam0 = -974205616;
							return 1;
						case 9:
							*uParam0 = -1915480358;
							return 1;
						case 10:
							*uParam0 = -1427302413;
							return 1;
						case 11:
							*uParam0 = 1297056981;
							return 1;
						case 12:
							*uParam0 = -1238217619;
							return 1;
						case 13:
							*uParam0 = 1844773640;
							return 1;
						case 14:
							*uParam0 = 1541545551;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = 461545493;
							return 1;
						case 3:
							*uParam0 = 760481963;
							return 1;
						case 4:
							*uParam0 = -1747528191;
							return 1;
						case 5:
							*uParam0 = 1706339276;
							return 1;
						case 6:
							*uParam0 = -787395957;
							return 1;
						case 7:
							*uParam0 = 1254414564;
							return 1;
						case 8:
							*uParam0 = -973839534;
							return 1;
						case 9:
							*uParam0 = 964732302;
							return 1;
						case 10:
							*uParam0 = 1965573369;
							return 1;
						case 11:
							*uParam0 = 1273174558;
							return 1;
						case 12:
							*uParam0 = -1366850746;
							return 1;
						case 13:
							*uParam0 = 640816886;
							return 1;
						case 14:
							*uParam0 = 1582547899;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*uParam0 = -1806179115;
							return 1;
						case 3:
							*uParam0 = 1395346866;
							return 1;
						case 4:
							*uParam0 = -109213256;
							return 1;
						case 5:
							*uParam0 = -1416742002;
							return 1;
						case 6:
							*uParam0 = -1615357250;
							return 1;
						case 7:
							*uParam0 = -486577432;
							return 1;
						case 8:
							*uParam0 = 1488031426;
							return 1;
						case 9:
							*uParam0 = -1158386201;
							return 1;
						case 10:
							*uParam0 = -685512585;
							return 1;
						case 11:
							*uParam0 = -545482240;
							return 1;
						case 12:
							*uParam0 = 1170207075;
							return 1;
						case 13:
							*uParam0 = 829062722;
							return 1;
						case 14:
							*uParam0 = 913568525;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1372376306;
							return 1;
						case 3:
							*uParam0 = -1994390239;
							return 1;
						case 4:
							*uParam0 = 1200601581;
							return 1;
						case 5:
							*uParam0 = -1632804958;
							return 1;
						case 6:
							*uParam0 = -470085637;
							return 1;
						case 7:
							*uParam0 = -53460943;
							return 1;
						case 8:
							*uParam0 = 793294898;
							return 1;
						case 9:
							*uParam0 = -525444146;
							return 1;
						case 10:
							*uParam0 = 1136760211;
							return 1;
						case 11:
							*uParam0 = -418497553;
							return 1;
						case 12:
							*uParam0 = -2106116472;
							return 1;
						case 13:
							*uParam0 = 677599687;
							return 1;
						case 14:
							*uParam0 = 150094641;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*uParam0 = 372300590;
							return 1;
						case 3:
							*uParam0 = -1894075093;
							return 1;
						case 4:
							*uParam0 = -807400872;
							return 1;
						case 5:
							*uParam0 = 850233799;
							return 1;
						case 6:
							*uParam0 = 1063877511;
							return 1;
						case 7:
							*uParam0 = -1378538896;
							return 1;
						case 8:
							*uParam0 = -125455747;
							return 1;
						case 9:
							*uParam0 = -111972905;
							return 1;
						case 10:
							*uParam0 = 861776066;
							return 1;
						case 11:
							*uParam0 = 1904627018;
							return 1;
						case 12:
							*uParam0 = -1833532042;
							return 1;
						case 13:
							*uParam0 = -1778822384;
							return 1;
						case 14:
							*uParam0 = 1868940630;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*uParam0 = 1059972971;
							return 1;
						case 3:
							*uParam0 = 1245102704;
							return 1;
						case 4:
							*uParam0 = 857443476;
							return 1;
						case 5:
							*uParam0 = -1967131166;
							return 1;
						case 6:
							*uParam0 = 2056035715;
							return 1;
						case 7:
							*uParam0 = 692065755;
							return 1;
						case 8:
							*uParam0 = 962251301;
							return 1;
						case 9:
							*uParam0 = 487320741;
							return 1;
						case 10:
							*uParam0 = 1501334946;
							return 1;
						case 11:
							*uParam0 = 820339735;
							return 1;
						case 12:
							*uParam0 = 285984845;
							return 1;
						case 13:
							*uParam0 = 1972352444;
							return 1;
						case 14:
							*uParam0 = 1101400672;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		default:
			return 0;
	}
	switch (iParam3)
	{
		case 0:
			*uParam0 = -1360732541;
			return 0;
		case 1:
			*uParam0 = 319638501;
			return 0;
		case 2:
			*uParam0 = -97213200;
			return 0;
		case 3:
			*uParam0 = 1884526773;
			return 0;
		case 4:
			*uParam0 = -1797228166;
			return 0;
		case 5:
			*uParam0 = -1385386118;
			return 0;
		case 6:
			*uParam0 = -2065276132;
			return 0;
		case 7:
			*uParam0 = -273401568;
			return 0;
		case 8:
			*uParam0 = 188870715;
			return 0;
		default:
			break;
	}
	return 0;
	if (bParam4)
	{
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	iVar0 = ((18 + iParam0 * 2) + iParam1);
	return iVar0;
}

int func_38(int iParam0, int iParam1)
{
	return ((0 + iParam0 * 2) + iParam1);
}

void func_39(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = uParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_7 = iParam3;
	if (iParam3 == 0)
	{
		*uParam0 = 1;
	}
	else
	{
		*uParam0 = 2;
	}
	uParam0->f_6 = iParam4;
}

int func_40(int iParam0, vector3 vParam1, var uParam4, var uParam5, float fParam6)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	if (!func_75(iParam0, vParam1, uParam4, uParam5, fParam6, &fVar0, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { _get_object_offset_from_coords(*fParam6, fVar0, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { _get_object_offset_from_coords(*fParam6, fVar0, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

bool func_41(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!network_does_network_id_exist(uParam0->f_8.f_4[iParam1]->f_2))
	{
		return false;
	}
	iVar0 = net_to_ped(uParam0->f_8.f_4[iParam1]->f_2);
	iVar1 = uParam0->f_8.f_93[iParam2]->f_4;
	if (!network_does_network_id_exist(iVar1))
	{
		return false;
	}
	if (!network_has_control_of_network_id(uParam0->f_8.f_4[iParam1]->f_2))
	{
		network_request_control_of_network_id(uParam0->f_8.f_4[iParam1]->f_2);
		return false;
	}
	_0x7182edda1ee7db5a(uParam0->f_8.f_4[iParam1]->f_2);
	if (!network_has_control_of_network_id(iVar1))
	{
		network_request_control_of_network_id(iVar1);
		return false;
	}
	_0x7182edda1ee7db5a(iVar1);
	iVar2 = _net_to_anim_scene(iVar1);
	if (does_entity_exist(iVar0) && _does_anim_scene_exist(iVar2))
	{
		set_anim_scene_entity(iVar2, sParam3, iVar0, 0);
		uParam0->f_8.f_4[iParam1]->f_3 = iVar1;
		if (network_is_host_of_this_script())
		{
			set_bit(&(uParam0->f_8.f_4[iParam1]->f_4), 3);
		}
	}
	return true;
}

void func_42(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!network_does_network_id_exist(uParam1->f_3))
	{
		return;
	}
	iVar0 = net_to_obj(uParam1->f_3);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = _net_to_anim_scene(uParam0->f_8.f_93[iParam2]->f_4);
	uVar2 = uParam0->f_8.f_93[iParam2]->f_4;
	if (does_entity_exist(iVar0) && _does_anim_scene_exist(iVar1))
	{
		set_anim_scene_entity(iVar1, sParam3, iVar0, 0);
		uParam1->f_4 = uVar2;
		StringCopy(&(uParam1->f_8), sParam3, 32);
	}
}

bool func_43(var uParam0)
{
	if (!network_has_control_of_network_id(uParam0->f_4))
	{
		network_request_control_of_network_id(uParam0->f_4);
		return false;
	}
	iVar0 = _net_to_anim_scene(uParam0->f_4);
	set_anim_scene_origin(iVar0, uParam0->f_5, 0f, 0f, uParam0->f_8, 2);
	start_anim_scene(iVar0);
	func_73(uParam0, 4);
	return true;
}

void func_44(var uParam0, int iParam1)
{
	iVar0 = 0;
	if (!network_does_network_id_exist(uParam0->f_2))
	{
		return;
	}
	iVar2 = net_to_ped(uParam0->f_2);
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (decor_exist_on(iVar2, "MiniScenePedData"))
	{
		iVar0 = decor_get_int(iVar2, "MiniScenePedData");
	}
	iVar1 = get_bits_in_range(iVar0, 0, 2);
	set_bits_in_range(&iVar0, 0, 2, iParam1);
	decor_set_int(iVar2, "MiniScenePedData", iVar0);
	if (iVar1 != iParam1)
	{
	}
}

int func_45(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = -1587988328;
			return 1;
		case 1:
			*uParam0 = -1993750510;
			return 1;
		case 2:
			*uParam0 = 1069538232;
			return 1;
		case 3:
			*uParam0 = 1590697544;
			return 1;
		case 4:
			*uParam0 = 335130626;
			return 1;
		case 5:
			*uParam0 = 855344262;
			return 1;
		case 6:
			*uParam0 = -1884742536;
			return 1;
		case 7:
			*uParam0 = -1499241424;
			return 1;
		case 8:
			*uParam0 = -1499241424;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_46(int iParam0)
{
	return (6 + iParam0);
}

int func_47(int iParam0)
{
	iVar0 = (6 + iParam0);
	return iVar0;
}

int func_48(int iParam0)
{
	return (9 + iParam0);
}

int func_49(int iParam0)
{
	iVar0 = (12 + iParam0);
	return iVar0;
}

int func_50(int iParam0)
{
	iVar0 = (1 + iParam0);
	return iVar0;
}

int func_51(int iParam0)
{
	return (1 + iParam0);
}

int func_52(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return 1;
		case 1:
			*uParam0 = -291109262;
			return 1;
		case 2:
			*uParam0 = 210029681;
			return 1;
		case 3:
			*uParam0 = 2037482211;
			return 1;
		case 4:
			*uParam0 = 877666613;
			return 1;
		case 5:
			*uParam0 = -1127201651;
			return 1;
		case 6:
			*uParam0 = 1941338030;
			return 1;
		case 7:
			*uParam0 = 181651164;
			return 1;
		case 8:
			*uParam0 = -1328475408;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_53(var uParam0)
{
	if (!network_does_network_id_exist(uParam0->f_3))
	{
		return;
	}
	iVar0 = net_to_obj(uParam0->f_3);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = _net_to_anim_scene(uParam0->f_4);
	remove_anim_scene_entity(iVar1, &(uParam0->f_8), iVar0);
	StringCopy(&(uParam0->f_8), "", 32);
}

void func_54(var uParam0)
{
	if (!network_does_network_id_exist(uParam0->f_3))
	{
		return;
	}
	if (network_has_control_of_network_id(uParam0->f_3))
	{
		iVar0 = net_to_obj(uParam0->f_3);
		if (!does_entity_exist(iVar0))
		{
			return;
		}
		if (is_entity_attached(iVar0))
		{
			func_76(iVar0, 1, 1);
		}
		freeze_entity_position(iVar0, false);
		set_entity_dynamic(iVar0, true);
		activate_physics(iVar0);
		set_entity_has_gravity(iVar0, true);
		apply_force_to_entity(iVar0, 1, 0f, 0f, -9.8f, 0f, 0f, 0f, 0, false, false, true, false, true);
		func_55(&(uParam0->f_3));
	}
}

void func_55(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		set_entity_as_no_longer_needed(&iVar0);
	}
}

int func_56(var uParam0)
{
	if (!network_does_network_id_exist(uParam0->f_2))
	{
		return 0;
	}
	iVar0 = net_to_ped(uParam0->f_2);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!decor_exist_on(iVar0, "MiniScenePedData"))
	{
		return 0;
	}
	iVar1 = decor_get_int(iVar0, "MiniScenePedData");
	return get_bits_in_range(iVar1, 0, 2);
}

void func_57(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_23();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_58()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_23();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_23();
					break;
				case 2:
					func_23();
					break;
				case 4:
					func_23();
					break;
				case 3:
					func_23();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_23();
		}
		if (!network_is_game_in_progress())
		{
			func_23();
		}
		if (!network_is_signed_online())
		{
			func_23();
		}
		if (func_77() == 0)
		{
			if (func_78())
			{
				func_23();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_23();
	}
	return 1;
}

int func_59(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_60(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_61(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_23();
					break;
				case 2:
					func_23();
					break;
				case 4:
					func_23();
					break;
				case 3:
					func_23();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_23();
			return;
		}
		wait(0);
	}
}

void func_62(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (uParam0->f_8.f_3 != iParam1)
	{
	}
	uParam0->f_8.f_3 = iParam1;
}

bool func_63(var uParam0)
{
	if (func_79(0, 0))
	{
		return false;
	}
	if (Global_1138962->f_1[uParam0->f_8.f_1]->f_1 == -1)
	{
		return false;
	}
	if (&Global_1138962->f_1[uParam0->f_8.f_1] == -1)
	{
		return false;
	}
	if (Global_1138962->f_1[uParam0->f_8.f_1]->f_14 == 0)
	{
		return false;
	}
	if (func_80(16))
	{
		return false;
	}
	if (func_81(&(Global_1138962->f_1[uParam0->f_8.f_1])))
	{
		return false;
	}
	if (func_82() || func_83())
	{
		if (func_84(uParam0))
		{
			return false;
		}
		return true;
	}
	if (func_85(Global_34, uParam0->f_1, 0) > func_86(uParam0->f_8.f_1))
	{
		return false;
	}
	if (func_87(uParam0->f_8.f_1))
	{
		return false;
	}
	return true;
}

void func_64(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_88(uParam0->f_8.f_93[iVar0]);
		iVar0++;
	}
	if (uParam0->f_8.f_3 > 2)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_66(uParam0, uParam0->f_8.f_20[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_89(uParam0, uParam0->f_8.f_4[iVar0]);
			iVar0++;
		}
	}
	switch (uParam0->f_8.f_3)
	{
		case 1:
			Call_Loc(uParam0->f_289);
			func_62(uParam0, 2);
			break;
		case 2:
			if (is_screen_faded_out())
			{
				func_62(uParam0, 3);
				return;
			}
			uParam0->f_302 = (uParam0->f_302 + get_frame_time());
			if (func_90(uParam0))
			{
				uParam0->f_302 = 0f;
				return;
			}
			if (uParam0->f_302 > 1f)
			{
				func_62(uParam0, 3);
			}
			break;
		case 3:
			if (!func_91(uParam0))
			{
				return;
			}
			if (!func_92(uParam0))
			{
				return;
			}
			if (!func_93(uParam0))
			{
				return;
			}
			Call_Loc(uParam0->f_296);
			if (StackVal)
			{
				func_62(uParam0, 4);
			}
			break;
		case 4:
			Call_Loc(uParam0->f_290);
			break;
	}
}

void func_65(var uParam0)
{
	if (uParam0->f_8.f_3 > 1)
	{
		if (uParam0->f_160[network_player_id_to_int()]->f_1 == 0)
		{
			Call_Loc(uParam0->f_297);
			uParam0->f_160[network_player_id_to_int()]->f_1 = 1;
		}
		if (uParam0->f_160[network_player_id_to_int()]->f_2 == 0)
		{
			if (func_94(uParam0->f_8.f_2, uParam0->f_1, 1073741824, 1))
			{
				uParam0->f_160[network_player_id_to_int()]->f_2 = 1;
			}
		}
	}
	Call_Loc(uParam0->f_291);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_95(uParam0, uParam0->f_8.f_4[iVar0]);
		iVar0++;
	}
	func_96(uParam0);
}

void func_66(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 1:
			if (uParam0->f_298 > 15f)
			{
				return;
			}
			request_model(uParam1->f_2, false);
			if (!has_model_loaded(uParam1->f_2))
			{
				return;
			}
			func_97(uParam0, uParam1->f_1, &vVar0, &vVar3);
			uParam1->f_5 = create_object(uParam1->f_2, vVar0, false, true, false, false, true);
			if (does_entity_exist(uParam1->f_5))
			{
				set_entity_coords_no_offset(uParam1->f_5, vVar0, false, true, true);
				set_entity_rotation(uParam1->f_5, vVar3, 2, true);
				set_model_as_no_longer_needed(uParam1->f_2);
				if (uParam1->f_6 > 0)
				{
					func_98(uParam1->f_5, uParam1->f_6, 4);
				}
				*uParam1 = 3;
			}
			break;
		case 2:
			func_97(uParam0, uParam1->f_1, &vVar0, &vVar3);
			if (func_99(&(uParam1->f_3), uParam1->f_2, vVar0, 1, 0))
			{
				iVar6 = net_to_obj(uParam1->f_3);
				if (does_entity_exist(iVar6))
				{
					set_entity_rotation(iVar6, vVar3, 2, true);
					set_model_as_no_longer_needed(uParam1->f_2);
					if (uParam1->f_6 > 0)
					{
						func_98(iVar6, uParam1->f_6, 4);
					}
					*uParam1 = 3;
				}
			}
			break;
		case 3:
			break;
	}
}

int func_67(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_160)
	{
		if (&uParam0->f_160[iVar0])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_68(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_8.f_1 != -1)
	{
		Global_1138962->f_1[uParam0->f_8.f_1]->f_24 = 0;
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_100(uParam0->f_8.f_4[iVar0]);
			iVar0++;
		}
	}
	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_101(uParam0->f_8.f_20[iVar0]);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_101(uParam0->f_8.f_20[iVar0]);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_102(uParam0->f_8.f_93[iVar0]);
				iVar0++;
			}
			func_94(uParam0->f_8.f_2, uParam0->f_1, 1073741824, 0);
		}
		iVar0 = 0;
		while (iVar0 < 12)
		{
			func_101(uParam0->f_305[iVar0]);
			iVar0++;
		}
	}
}

bool func_69(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_70(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_71(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 120f;
					return true;
				case 2:
					*fParam2 = 60f;
					return true;
				case 3:
					*fParam2 = 0f;
					return true;
				case 4:
					*fParam2 = -60f;
					return true;
				case 5:
					*fParam2 = -120f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return true;
				case 4:
					*fParam2 = 180f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 0f;
					return true;
				case 2:
					*fParam2 = 90f;
					return true;
				case 3:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return true;
				case 1:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

struct<8> func_72(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_73(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
	}
	*uParam0 = iParam1;
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_75(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, var uParam7, int iParam8)
{
	if (!func_69(iParam0))
	{
		return false;
	}
	if (!func_70(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (get_ground_z_for_3d_coord(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_71(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*uParam7 = (fParam4 + fVar3);
	if (*uParam7 > 360f)
	{
		*uParam7 = (*uParam7 - 360f);
	}
	if (*uParam7 < -360f)
	{
		*uParam7 = (*uParam7 + 360f);
	}
	return true;
}

void func_76(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_77()
{
	return Global_1572887->f_13;
}

bool func_78()
{
	return Global_1051252->f_8;
}

bool func_79(bool bParam0, bool bParam1)
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

bool func_80(int iParam0)
{
	return func_103(Global_1138962->f_145, iParam0);
}

bool func_81(int iParam0)
{
	if (Global_1138962->f_1[iParam0]->f_26 != 0)
	{
		if ((get_frame_count() - Global_1138962->f_1[iParam0]->f_26) <= 1)
		{
			return true;
		}
	}
	return false;
}

int func_82()
{
	if (!does_entity_exist(Global_34))
	{
		return 1;
	}
	else if (Global_1940258->f_6)
	{
		return 1;
	}
	else if (is_ped_fatally_injured(Global_34))
	{
		return 1;
	}
	else if (get_entity_health(Global_34) <= 0)
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		return 1;
	}
	return 0;
}

bool func_84(var uParam0)
{
	if (!func_104(&(uParam0->f_299)))
	{
		func_105(&(uParam0->f_299), 0);
	}
	if (func_106(&(uParam0->f_299)) >= 2000 || is_screen_faded_out())
	{
		return true;
	}
	return false;
}

float func_85(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_86(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 75f;
		case 3:
			return 75f;
		default:
			break;
	}
	return 100f;
}

bool func_87(int iParam0)
{
	if (!func_107(Global_1138962->f_1[iParam0]->f_4))
	{
		return false;
	}
	return func_103(Global_1138962->f_137.f_1, 1);
}

void func_88(var uParam0)
{
	iVar0 = _net_to_anim_scene(uParam0->f_4);
	sVar1 = func_108(uParam0->f_1);
	switch (*uParam0)
	{
		case 1:
			if (iVar0 == -1 || !_does_anim_scene_exist(iVar0))
			{
				if (is_string_null_or_empty(&(uParam0->f_9)))
				{
					iVar0 = _create_anim_scene(sVar1, 1, 0, true, true);
				}
				else
				{
					iVar0 = _create_anim_scene(sVar1, 1, &(uParam0->f_9), true, true);
				}
				load_anim_scene(iVar0);
				uParam0->f_4 = _anim_scene_to_net(iVar0);
				_0x7182edda1ee7db5a(uParam0->f_4);
				func_73(uParam0, 2);
			}
			break;
		case 2:
			iVar0 = _net_to_anim_scene(uParam0->f_4);
			_0x7182edda1ee7db5a(uParam0->f_4);
			if (_is_anim_scene_loaded(iVar0, true, false))
			{
				func_73(uParam0, 3);
			}
			break;
		case 3:
		case 4:
			if (uParam0->f_3 != -1)
			{
				func_109(uParam0, uParam0->f_3);
				if (uParam0->f_17)
				{
					if (func_110(uParam0))
					{
						func_111(uParam0);
					}
				}
			}
			break;
	}
}

void func_89(var uParam0, var uParam1)
{
	if (!is_bit_set(uParam1->f_4, 2))
	{
		func_112(uParam0, uParam1);
	}
}

bool func_90(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_113(uParam0, int_to_playerindex(iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_91(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (is_bit_set(uParam0->f_8.f_4[iVar0]->f_4, 0))
		{
			return false;
		}
		if (is_bit_set(uParam0->f_8.f_4[iVar0]->f_4, 1))
		{
			return false;
		}
		iVar1 = func_56(uParam0->f_8.f_4[iVar0]);
		if (iVar1 != 0 && iVar1 < 1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_92(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&uParam0->f_8.f_93[iVar0] != 0 && &uParam0->f_8.f_93[iVar0] < 3)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_93(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_8.f_20[iVar0] != 0 && &uParam0->f_8.f_20[iVar0] < 3)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_94(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_114(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!_does_volume_exist(iVar0))
	{
		return false;
	}
	iVar5 = create_itemset(true);
	if (is_itemset_valid(iVar5))
	{
		iVar2 = _0x886171a12f400b89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar3, iVar5));
			if (!is_entity_dead(iVar1))
			{
				if (func_115(iParam0, get_entity_model(iVar1)))
				{
					if (!is_entity_attached(iVar1))
					{
						if ((func_77() != -1 && network_has_control_of_entity(iVar1)) || func_77() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && is_entity_upright(iVar1, 90f))
							{
								if (!_0x083d497d57b7400f(iVar1))
								{
									set_entity_dynamic(iVar1, true);
									freeze_entity_position(iVar1, true);
									set_entity_can_be_damaged(iVar1, false);
									set_disable_frag_damage(iVar1, true);
									set_disable_breaking(iVar1, true);
								}
							}
							else if (_0x083d497d57b7400f(iVar1))
							{
								freeze_entity_position(iVar1, false);
								set_entity_can_be_damaged(iVar1, true);
								set_disable_frag_damage(iVar1, false);
								set_disable_breaking(iVar1, false);
							}
						}
					}
				}
			}
			iVar3++;
		}
		_0x20a4bf0e09bee146(iVar5);
		destroy_itemset(iVar5);
	}
	func_116(iVar0);
	if (iVar4 > 0)
	{
		return true;
	}
	return false;
}

void func_95(var uParam0, var uParam1)
{
	if (!network_does_network_id_exist(uParam1->f_2))
	{
		return;
	}
	if (!network_has_control_of_network_id(uParam1->f_2))
	{
		return;
	}
	if (!is_bit_set(uParam1->f_4, 2))
	{
		return;
	}
	if (uParam1->f_1 == -1)
	{
		return;
	}
	if (*uParam1 == -1)
	{
		return;
	}
	iVar2 = func_56(uParam1);
	switch (iVar2)
	{
		case 2:
			if (network_does_network_id_exist(uParam1->f_3))
			{
				iVar0 = _net_to_anim_scene(uParam1->f_3);
				iVar1 = net_to_ped(uParam1->f_2);
				if (_does_anim_scene_exist(iVar0) && _is_anim_scene_started(iVar0, false))
				{
					if (!_0x3ab6c7b0bb0df4b1(iVar1, iVar0))
					{
						_0xbc781d24aa11f179(iVar1);
						if (_0x083d497d57b7400f(iVar1))
						{
							freeze_entity_position(iVar1, false);
						}
						func_117(uParam1);
						func_44(uParam1, 3);
					}
				}
			}
			break;
	}
}

void func_96(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_bit_set(uParam0->f_304, iVar0))
		{
			iVar1 = func_56(uParam0->f_8.f_4[iVar0]);
			if (iVar1 == 3)
			{
				Stack.Push(iVar0);
				Call_Loc(uParam0->f_294);
				set_bit(&(uParam0->f_304), iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0, int iParam1, var uParam2, var uParam3)
{
	iVar1 = iParam1;
	switch (iVar1)
	{
		case 0:
			func_118(uParam0, 0, 0, uParam2, uParam3, 1);
			return 1;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			iVar0 = (iParam1 - 1);
			func_119(uParam0, iVar0, 0, uParam2, uParam3, 1);
			return 1;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = (iParam1 - 6);
			func_120(uParam0, iVar0, 0, uParam2, uParam3, 0, 1);
			return 1;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			iVar0 = (iParam1 - 12);
			func_121(uParam0, iVar0, 0, uParam2, uParam3, 0, 1);
			return 1;
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			*uParam2 = { uParam0->f_1 };
			*uParam3 = { uParam0->f_4 };
			return 1;
		default:
			break;
	}
	return 0;
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_122(iParam1);
	func_124(iParam0, func_123(iParam1, iParam2), 0);
	func_125(iParam0, iVar0);
}

bool func_99(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_126(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_100(var uParam0)
{
	if (!network_does_network_id_exist(uParam0->f_2))
	{
		return;
	}
	iVar0 = net_to_ped(uParam0->f_2);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0xbc781d24aa11f179(iVar0);
}

void func_101(var uParam0)
{
	if (uParam0->f_7)
	{
		func_127(&(uParam0->f_3), 0);
	}
	else
	{
		func_128(&(uParam0->f_5));
	}
	uParam0->f_7 = 0;
	uParam0->f_6 = 0;
	*uParam0 = 0;
}

void func_102(var uParam0)
{
	iVar0 = _net_to_anim_scene(uParam0->f_4);
	if (_does_anim_scene_exist(iVar0))
	{
		_delete_anim_scene(iVar0);
	}
	func_127(&(uParam0->f_4), 0);
	*uParam0 = 0;
	StringCopy(&(uParam0->f_9), "", 64);
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_104(var uParam0)
{
	return func_129(*uParam0, 1);
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1 || !func_104(uParam0))
	{
		func_130(uParam0);
	}
}

int func_106(var uParam0)
{
	if (!func_104(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_131(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_132() - round((uParam0->f_1 * 1000f)));
}

bool func_107(struct<2> Param0)
{
	iVar0 = func_133(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@POKER@MP_PREPOSTGAME_BASE";
		default:
			break;
	}
	return "";
}

void func_109(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (uParam0->f_18)
	{
		return;
	}
	if (!network_does_network_id_exist(uParam0->f_4))
	{
		return;
	}
	iVar0 = _net_to_anim_scene(uParam0->f_4);
	if (_does_anim_scene_exist(iVar0))
	{
		_0x7182edda1ee7db5a(uParam0->f_4);
		_0xdf7b5144e25cd3fe(iVar0, func_134(iParam1));
		uParam0->f_3 = iParam1;
		uParam0->f_18 = 1;
	}
}

bool func_110(var uParam0)
{
	if (uParam0->f_3 == -1)
	{
		return false;
	}
	if (!network_is_host_of_this_script())
	{
		return false;
	}
	if (!network_does_network_id_exist(uParam0->f_4))
	{
		return false;
	}
	iVar0 = _net_to_anim_scene(uParam0->f_4);
	if (_does_anim_scene_exist(iVar0))
	{
		_0x7182edda1ee7db5a(uParam0->f_4);
		return _0x23e33cb9f4a3f547(iVar0, func_134(uParam0->f_3));
	}
	return false;
}

void func_111(var uParam0)
{
	if (!func_110(uParam0))
	{
		return;
	}
	iVar1 = _net_to_anim_scene(uParam0->f_4);
	_0x7182edda1ee7db5a(uParam0->f_4);
	_set_anim_scene_playback_list_bool(iVar1, func_134(uParam0->f_3), true);
	sVar0 = func_134(uParam0->f_2);
	if (!is_string_null_or_empty(sVar0))
	{
		_0xae6ada8fe7e84acc(iVar1, sVar0);
	}
	uParam0->f_18 = 0;
	uParam0->f_2 = uParam0->f_3;
	uParam0->f_3 = -1;
}

int func_112(var uParam0, var uParam1)
{
	if (!network_is_host_of_this_script())
	{
		return 0;
	}
	iVar1 = func_135(uParam0->f_8.f_2, *uParam0, *uParam1);
	if (uParam0->f_303)
	{
		return 0;
	}
	if (uParam1->f_1 == -1)
	{
		return 0;
	}
	if (*uParam1 == -1)
	{
		return 0;
	}
	if (!network_does_network_id_exist(uParam1->f_2))
	{
		request_model(iVar1, false);
		if (!has_model_loaded(iVar1))
		{
			return 0;
		}
		func_30(uParam0->f_8.f_2, uParam0->f_1, uParam0->f_4.f_2, *uParam1, &vVar2, 1);
		func_31(uParam0->f_8.f_2, uParam0->f_4.f_2, *uParam1, &vVar5);
		if (!func_136(&(uParam1->f_2), iVar1, vVar2, vVar5.z, 1, 0, 1, 1, 1))
		{
			return 0;
		}
		uParam0->f_303 = 1;
		iVar0 = net_to_ped(uParam1->f_2);
		if (!func_137(iVar0))
		{
			func_138(iVar0, uParam0->f_8.f_2, *uParam0, *uParam1, 0);
		}
		set_model_as_no_longer_needed(iVar1);
	}
	iVar0 = net_to_ped(uParam1->f_2);
	_0x7182edda1ee7db5a(uParam1->f_2);
	if (!is_bit_set(uParam1->f_4, 0))
	{
		_0x7182edda1ee7db5a(uParam1->f_2);
		func_139(uParam1);
		decor_set_int(iVar0, "MiniScenePedData", 0);
		set_bit(&(uParam1->f_4), 0);
	}
	if (!is_bit_set(uParam1->f_4, 1))
	{
		Stack.Push(uParam1->f_1);
		Call_Loc(uParam0->f_292);
		if (!StackVal)
		{
			return 0;
		}
		set_bit(&(uParam1->f_4), 1);
	}
	if (does_entity_exist(iVar0) && !_0xa0bc8faed8cfeb3c(iVar0))
	{
		return 0;
	}
	clear_bit(&(uParam1->f_4), 0);
	clear_bit(&(uParam1->f_4), 1);
	set_bit(&(uParam1->f_4), 2);
	func_44(uParam1, 1);
	return 1;
}

bool func_113(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return false;
	}
	vVar0 = { get_entity_coords(get_player_ped(iParam1), true, false) };
	if (vdist2(vVar0, uParam0->f_1) < (10f * 10f))
	{
		return true;
	}
	if (is_sphere_visible_to_player(iParam1, uParam0->f_1, 2.5f, 50f))
	{
		return true;
	}
	return false;
}

void func_114(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_140());
	}
}

bool func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 325252933:
					return true;
				case -1740828633:
				case 1609095284:
					return true;
				case -1510839859:
				case 1407600554:
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == -1243444973)
			{
				return true;
			}
			if (iParam1 == -289651159)
			{
				return true;
			}
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == 325252933)
			{
				return true;
			}
			if (iParam1 == -1763848034)
			{
				return true;
			}
			if (iParam1 == 2096698905)
			{
				return true;
			}
			if (iParam1 == 375867283)
			{
				return true;
			}
			if (iParam1 == 1999055955)
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == -1025740342)
			{
				return true;
			}
			if (iParam1 == -1937484496)
			{
				return true;
			}
			if (iParam1 == 463271055)
			{
				return true;
			}
			if (iParam1 == 1186910594)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == 264425748)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == -1618805595)
			{
				return true;
			}
			if (iParam1 == 1230724566)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_116(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_117(var uParam0)
{
	iVar0 = net_to_ped(uParam0->f_2);
	if (!is_entity_dead(iVar0))
	{
		_0x949b2f9ed2917f5d(iVar0, 0);
		clear_ragdoll_blocking_flags(iVar0, 319488);
		set_ped_config_flag(iVar0, 453, false);
		set_ped_config_flag(iVar0, 130, false);
		set_ped_config_flag(iVar0, 168, true);
		set_ped_config_flag(iVar0, 458, true);
		set_ped_config_flag(iVar0, 26, false);
		set_ped_config_flag(iVar0, 29, false);
		set_ped_config_flag(iVar0, 146, true);
		set_ped_config_flag(iVar0, 521, false);
		set_ped_config_flag(iVar0, 374, false);
	}
}

int func_118(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam5)
	{
		func_141(uParam0->f_1, uParam0->f_4.f_2, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return 1;
}

int func_119(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1398f, 0.3457f, 0.803f };
			vVar4 = { 0f, 0f, 177.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.0686f, 0.3527f, 0.803f };
			vVar4 = { 0f, 0f, 179.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.0038f, 0.35f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.0748f, 0.3543f, 0.803f };
			vVar4 = { 0f, 0f, 178.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.1462f, 0.3533f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3693f, 0.0518f, 0.803f };
			vVar4 = { 0f, 0f, 117.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3397f, 0.1169f, 0.803f };
			vVar4 = { 0f, 0f, 119.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3012f, 0.1783f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.2694f, 0.2419f, 0.803f };
			vVar4 = { 0f, 0f, 118.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.2328f, 0.3032f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2295f, -0.2939f, 0.803f };
			vVar4 = { 0f, 0f, 57.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.2711f, -0.2358f, 0.803f };
			vVar4 = { 0f, 0f, 59.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.305f, -0.1717f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3442f, -0.1124f, 0.803f };
			vVar4 = { 0f, 0f, 58.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.379f, -0.05f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.1398f, -0.3457f, 0.803f };
			vVar4 = { 0f, 0f, -2.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.0686f, -0.3527f, 0.803f };
			vVar4 = { 0f, 0f, -0.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.0038f, -0.35f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.0748f, -0.3543f, 0.803f };
			vVar4 = { 0f, 0f, -1.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.1462f, -0.3533f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.3693f, -0.0518f, 0.803f };
			vVar4 = { 0f, 0f, -62.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3397f, -0.1169f, 0.803f };
			vVar4 = { 0f, 0f, -60.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.3012f, -0.1783f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2694f, -0.2419f, 0.803f };
			vVar4 = { 0f, 0f, -61.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.2328f, -0.3032f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2295f, 0.2939f, 0.803f };
			vVar4 = { 0f, 0f, -122.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2711f, 0.2358f, 0.803f };
			vVar4 = { 0f, 0f, -120.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.305f, 0.1717f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3442f, 0.1124f, 0.803f };
			vVar4 = { 0f, 0f, -121.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.379f, 0.05f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam5)
		{
			func_141(uParam0->f_1, uParam0->f_4.f_2, vVar1, vVar4, uParam3, uParam4);
		}
		else
		{
			*uParam3 = { vVar1 };
			*uParam4 = { vVar4 };
		}
		return 1;
	}
	return 0;
}

int func_120(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_141(uParam0->f_1, uParam0->f_4.f_2, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (to_float(iParam5) * 0.006f));
	return 1;
}

int func_121(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_141(uParam0->f_1, uParam0->f_4.f_2, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (to_float(iParam5) * 0.006f));
	return 1;
}

int func_122(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_142(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

int func_123(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_125(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			_set_object_texture_variation(iParam0, 3);
			break;
		case 1:
			_set_object_texture_variation(iParam0, 18);
			break;
		case 2:
			_set_object_texture_variation(iParam0, 21);
			break;
		case 3:
			_set_object_texture_variation(iParam0, 24);
			break;
		case 4:
			_set_object_texture_variation(iParam0, 27);
			break;
		case 5:
			_set_object_texture_variation(iParam0, 15);
			break;
		default:
			break;
	}
}

bool func_126(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

void func_127(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		delete_entity(&iVar0);
	}
}

void func_128(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
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
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130(var uParam0)
{
	func_143(uParam0, 0f);
}

bool func_131(var uParam0)
{
	return func_129(*uParam0, 2);
}

int func_132()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_133(struct<2> Param0)
{
	if (!func_144(Param0))
	{
		return -1;
	}
	iVar0 = func_145(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_HoldCardsLoop";
		case 1:
			return "PBL_HoldCardsIdleSubtle_A";
		case 2:
			return "PBL_HoldCardsIdleSubtle_B";
		case 3:
			return "PBL_HoldCardsIdleSubtle_C";
		case 4:
			return "PBL_HoldCardsIdleSubtle_D";
		case 5:
			return "PBL_HoldCardsIdleSubtle_E";
		default:
			break;
	}
	return "";
}

int func_135(var uParam0, var uParam1, var uParam2)
{
	return -951746023;
}

bool func_136(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_126(iParam1))
	{
		return false;
	}
	iVar0 = func_146(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_137(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -1766535683:
		case -1680931998:
		case -1486681919:
		case -669394275:
		case 964905443:
		case 1709294431:
		case 1818250007:
			return true;
		default:
			break;
	}
	return false;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_147(iParam1, iParam2, iParam3, bParam4);
	_set_ped_body_component(iParam0, iVar0);
	_update_ped_variation(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_139(var uParam0)
{
	iVar0 = net_to_ped(uParam0->f_2);
	if (!is_entity_dead(iVar0))
	{
		set_ped_relationship_group_hash(iVar0, -225988669);
		_0xb8de69d9473b7593(iVar0, 0);
		set_ragdoll_blocking_flags(iVar0, 319488);
		set_ped_config_flag(iVar0, 453, true);
		set_ped_config_flag(iVar0, 130, false);
		set_ped_config_flag(iVar0, 168, true);
		set_ped_config_flag(iVar0, 458, true);
		set_ped_config_flag(iVar0, 26, true);
		set_ped_config_flag(iVar0, 29, true);
		set_ped_config_flag(iVar0, 146, false);
		set_ped_config_flag(iVar0, 521, true);
		set_ped_config_flag(iVar0, 374, true);
		func_148(iVar0);
	}
}

char* func_140()
{
	return "unnamed";
}

void func_141(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vVar0.x = ((vParam4.x * cos(fParam3)) - (vParam4.y * sin(fParam3)));
	vVar0.f_1 = ((vParam4.x * sin(fParam3)) + (vParam4.y * cos(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

void func_143(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_149() - fParam1);
	func_150(uParam0, 1);
	func_151(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_144(struct<2> Param0)
{
	if (!func_152(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_153(Param0))
	{
		return false;
	}
	return true;
}

int func_145(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_154(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_154(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

int func_146(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 6);
		}
		switch (iParam1)
		{
			case 74:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 40:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 4);
		}
		switch (iParam1)
		{
			case 81:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 98:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (bParam3)
		{
			if (iParam2 == -1)
			{
				iParam2 = get_random_int_in_range(0, 8);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
						default:
							break;
					}
					return -1726696266;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
						default:
							break;
					}
					return 4921971;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
						default:
							break;
					}
					return 1469806260;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
						default:
							break;
					}
					return -1387257155;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
						default:
							break;
					}
					return -815574510;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
						default:
							break;
					}
					return -321409750;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
						default:
							break;
					}
					return 1032745865;
			}
		}
		else
		{
			if (iParam2 == -1)
			{
				iParam2 = get_random_int_in_range(0, 12);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
							return -1726696266;
						case 8:
							return -1978394955;
						case 9:
							return -820633060;
						case 10:
							return -44073298;
						case 11:
							return -342303967;
						default:
							break;
					}
					return 68127406;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
							return 4921971;
						case 8:
							return 251738079;
						case 9:
							return 478204342;
						case 10:
							return 777155929;
						case 11:
							return 1841389;
						default:
							break;
					}
					return 316456870;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
							return 1469806260;
						case 8:
							return 317713758;
						case 9:
							return 1934601404;
						case 10:
							return 487194674;
						case 11:
							return -1833636986;
						default:
							break;
					}
					return 2098938291;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
							return -1387257155;
						case 8:
							return -1087322498;
						case 9:
							return 2089668521;
						case 10:
							return 1791437852;
						case 11:
							return 1426194578;
						default:
							break;
					}
					return -435547108;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
							return -815574510;
						case 8:
							return 104710086;
						case 9:
							return -1562249180;
						case 10:
							return -1812506033;
						case 11:
							return -1431009331;
						default:
							break;
					}
					return 1194574257;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
							return -321409750;
						case 8:
							return -1233239944;
						case 9:
							return 1051251111;
						case 10:
							return -262949646;
						case 11:
							return -726499920;
						default:
							break;
					}
					return -1449777556;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
							return 1032745865;
						case 8:
							return 793499396;
						case 9:
							return 883482182;
						case 10:
							return 1123711721;
						case 11:
							return -903083698;
						default:
							break;
					}
					return -1600439903;
			}
		}
	}
	return 0;
}

void func_148(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "PedSeatedForMinigame", true);
}

float func_149()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_152(int iParam0)
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

int func_153(int iParam0)
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

bool func_154(struct<2> Param0, var uParam2)
{
	if (!func_144(Param0))
	{
		return false;
	}
	func_155(uParam2);
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

void func_155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

