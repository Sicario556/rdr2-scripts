void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_788 = -1181541851;
	iLocal_867 = 5;
	fLocal_879 = 2.5f;
	iLocal_880 = 100;
	iLocal_889 = 1;
	iLocal_997 = 10;
	fLocal_1005 = 15f;
	iLocal_1012 = 1;
	iLocal_1027 = 1;
	iLocal_1079 = func_1(3, 0, 0);
	Local_15.f_3 = func_2(&vScriptParam_0);
	if (has_force_cleanup_occurred(523))
	{
		func_3();
	}
	Local_15.f_161 = func_4(vScriptParam_0.z, 2);
	func_5(&Local_15, 1);
	func_6();
	func_7(27);
	while (true)
	{
		switch (iVar1010)
		{
			case 1:
				if (func_8(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_9();
					func_10(&Local_15, &uLocal_1038, &uLocal_1037);
					iLocal_1012 = 0;
				}
				else if (Local_15.f_160)
				{
					func_3();
				}
				break;
			case 0:
				if (func_11())
				{
					iLocal_1012 = 3;
				}
				break;
			case 3:
				if (func_12())
				{
					iLocal_1012 = 4;
				}
				break;
			case 4:
				if (!func_13(&Local_15, &uLocal_412, iVar400, 0, 1, 0, 1, 0))
				{
					func_3();
				}
				func_14();
				if (func_15())
				{
					func_3();
				}
				if (func_16(&Local_15, &uLocal_412, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
				{
					func_3();
				}
				break;
		}
		wait(Local_15.f_158);
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
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

var func_2(var uParam0)
{
	return *uParam0;
}

void func_3()
{
	func_17();
	func_18();
	stop_audio_scene("Horse_Race_Beat_Train_scene");
	if (does_entity_exist(iVar409))
	{
		if (func_19(iVar409, 1, 0) >= 100f)
		{
			delete_mission_train(&uLocal_411);
		}
		else
		{
			set_mission_train_as_no_longer_needed(&uLocal_411, false);
		}
	}
	if (!is_string_null_or_empty(&(sLocal_529[iVar1014])))
	{
		if (get_is_waypoint_recording_loaded(&(sLocal_529[iVar1014])))
		{
			remove_waypoint_recording(&(sLocal_529[iVar1014]));
		}
	}
	if (!is_string_null_or_empty(&(sLocal_529[iVar1015])))
	{
		if (get_is_waypoint_recording_loaded(&(sLocal_529[iVar1015])))
		{
			remove_waypoint_recording(&(sLocal_529[iVar1015]));
		}
	}
	remove_shocking_event(iVar783);
	if (bVar782)
	{
		func_20(1);
	}
	if (_0x91a5f9cbebb9d936(uVar789))
	{
		clear_ped_non_creation_area();
		remove_scenario_blocking_area(uVar789, true);
	}
	func_21(&Local_15, &uLocal_412, &uLocal_419, iVar400, uVar1036, uVar1035, 0, 1, 0, 1);
	if (does_entity_exist(&(uLocal_412[1])))
	{
		set_ped_as_no_longer_needed(uLocal_412[1]);
	}
	display_radar(true);
	if (does_blip_exist(iVar424))
	{
		remove_blip(&iLocal_426);
	}
	clear_gps_custom_route();
	clear_gps_multi_route();
	if (!is_entity_dead(&(uLocal_412[0])))
	{
		func_22(&(uLocal_412[0]), 1);
		_0xba8818212633500a(&(uLocal_412[1]), 0, 0);
	}
	func_23(Global_1935630, 4);
	func_24(27);
	trigger_music_event("REHR_END");
	stop_audio_scene("horse_race_scene");
	_0x96c7b659854de629(Global_35, &(uLocal_412[0]));
	_0x96c7b659854de629(Global_35, &(uLocal_412[1]));
	terminate_this_thread();
}

bool func_4(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_5(var uParam0, bool bParam1)
{
	func_25(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_26("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_6()
{
}

void func_7(int iParam0)
{
	if (!func_27(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 1;
}

bool func_8(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_28(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_29(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_30(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_31(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_32(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_9()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			iLocal_402 = 1;
			break;
		case 5:
		case 6:
		case 7:
			iLocal_402 = 0;
			break;
		case 0:
		case 8:
		case 9:
		case 10:
			iLocal_402 = 2;
			break;
	}
	iLocal_786 = func_33(Local_15.f_3, iVar400);
	if (!func_34())
	{
		if (func_33(Local_15.f_3, 4) == 3 || func_33(Local_15.f_3, 4) == 4)
		{
			iLocal_786 = 0;
		}
	}
	else if (func_33(Local_15.f_3, 4) == 1 || func_33(Local_15.f_3, 4) == 2)
	{
		iLocal_786 = 0;
	}
	if (iVar400 == 1)
	{
		Local_209[0]->f_1 = 1824544608;
		StringCopy(&(Local_209[0]->f_23), "0702_A_M_M_RhdUpperClass_01_WHITE_02", 64);
		Local_209[0] = 4;
		Local_209[0]->f_3 = 2001844695;
		Local_209[0]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_1 = -1261814606;
		if (iVar784 == 0)
		{
			sLocal_525[1] = "PBL_WIN_01";
			sLocal_525[2] = "PBL_LOSS_01";
		}
		else if (iVar784 == 1 || iVar784 >= 2)
		{
			sLocal_525[1] = "PBL_WIN_02";
			sLocal_525[2] = "PBL_LOSS_02";
		}
	}
	else if (iVar400 == 2)
	{
		Local_209[0]->f_1 = -184379555;
		StringCopy(&(Local_209[0]->f_23), "0847_A_F_M_Civ_Black_AVOID_02", 64);
		Local_209[0] = 5;
		Local_209[0]->f_3 = -1918933390;
		Local_209[0]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_1 = -526169133;
		if (Local_15.f_51.f_4 == 0)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 8)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 9)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 10)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 1487.71f, -1073.46f, 52.89f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 1488.52f, -1074.72f, 52.67f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 1489.27f, -1071.28f, 52.32f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 1490.31f, -1072.75f, 52.03f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 1525.97f, -1078.12f, 45.96f };
			iLocal_787 = 25;
		}
		if (iVar784 == 0)
		{
			sLocal_525[1] = "confident_win_01";
			sLocal_525[2] = "confident_loss_01";
		}
		else if (iVar784 == 1 || iVar784 >= 2)
		{
			sLocal_525[1] = "confident_win_02";
			sLocal_525[2] = "confident_loss_02";
		}
	}
	else if (iVar400 == 0)
	{
		Local_209[0]->f_1 = 1824544608;
		StringCopy(&(Local_209[0]->f_23), "1034_S_M_M_CoachTaxiDriver_01_WHITE_06", 64);
		Local_209[0] = 4;
		Local_209[0]->f_3 = -2146022560;
		Local_209[0]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_6 = { Local_15.f_51 };
		Local_209[1]->f_1 = -1250098797;
		if (Local_15.f_51.f_4 == 5)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 509.3f, 2035.51f, 223.31f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 508.34f, 2033.83f, 223.05f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 510.14f, 2034.91f, 222.82f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 510.38f, 2036.51f, 223.28f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 468.75f, 2010.6f, 222.98f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 6)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 1763.27f, 1285.63f, 184.86f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 1761.29f, 1287.18f, 184.31f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 1762.03f, 1283.59f, 184.95f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 1763.98f, 1284.55f, 185.14f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 1772.33f, 1247.69f, 189.73f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 7)
		{
			Local_209[2]->f_1 = 1110710183;
			Local_209[2]->f_6 = { 2682.34f, 628.54f, 78.63f };
			Local_209[2]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[3]->f_1 = 1110710183;
			Local_209[3]->f_6 = { 2680.21f, 628.79f, 78.64f };
			Local_209[3]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[4]->f_1 = 1110710183;
			Local_209[4]->f_6 = { 2680.78f, 630.64f, 78.63f };
			Local_209[4]->f_9 = to_float(get_random_int_in_range(0, 361));
			Local_209[5]->f_1 = 1110710183;
			Local_209[5]->f_6 = { 2679.53f, 629.84f, 78.58f };
			Local_209[5]->f_9 = to_float(get_random_int_in_range(0, 361));
			vLocal_833 = { 2653.11f, 622.68f, 81.43f };
			iLocal_787 = 30;
		}
		if (iVar784 == 0)
		{
			sLocal_525[1] = "weird_win_01";
			sLocal_525[2] = "weird_loss_01";
		}
		else if (iVar784 == 1 || iVar784 >= 2)
		{
			sLocal_525[1] = "weird_win_02";
			sLocal_525[2] = "weird_loss_02";
		}
	}
	func_35(&Local_209);
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 3:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		case 5:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

bool func_11()
{
	switch (iVar1012)
	{
		case 0:
			if (func_36(&Local_15))
			{
				func_37();
				func_38();
				func_39();
				func_40();
				func_41();
				iLocal_1014 = 1;
			}
			break;
		case 1:
			switch (iVar400)
			{
				case 1:
					if (!has_anim_dict_loaded(&(Local_737[0])))
					{
						return false;
					}
					break;
				case 2:
					if (!has_anim_dict_loaded(&(Local_737[14])))
					{
						return false;
					}
					break;
				case 0:
					if (!has_anim_dict_loaded(&(Local_737[7])))
					{
						return false;
					}
					break;
			}
			if (!get_is_waypoint_recording_loaded(&(sLocal_529[func_42()])))
			{
				return false;
			}
			if (!get_is_waypoint_recording_loaded(&(sLocal_529[func_43()])))
			{
				return false;
			}
			if (!func_44(&Local_209))
			{
				return false;
			}
			if (!has_ptfx_asset_loaded())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12()
{
	switch (iVar1011)
	{
		case 0:
			if (func_45(Local_15.f_51, Local_15.f_51.f_3, &Local_209, &uLocal_412, 1, 0, -1, 1))
			{
				iLocal_1013 = 1;
			}
			break;
		case 1:
			func_46();
			func_47();
			func_48();
			func_49();
			func_50();
			func_51(Local_15, &uLocal_1018, &uLocal_427);
			func_52();
			iLocal_1013 = 6;
			break;
		case 6:
			switch (Local_15.f_51.f_4)
			{
				case 2:
				case 5:
				case 7:
					break;
			}
			return true;
	}
	return false;
}

bool func_13(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_53(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_54(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_55(&(uParam0->f_5));
			}
			func_56(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_57(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_58(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_59(&(uParam0->f_121));
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
					func_60(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_61(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_30(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_62(uParam0, uParam1[0]);
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

void func_14()
{
	if (is_ped_on_mount(Global_35))
	{
		iLocal_1010 = get_mount(Global_35);
		set_ped_reset_flag(iVar1008, 154, true);
		set_ped_reset_flag(iVar1008, 243, true);
	}
	if (iVar1031 == 1)
	{
		Local_15.f_45 = 1;
	}
	else
	{
		Local_15.f_45 = 0;
	}
	func_63();
	func_64();
	if (iVar1009 <= 7 && iVar1009 >= 2)
	{
		func_65();
	}
	if (is_entity_at_coord(Global_35, *vLocal_501[iVar1016], 15f, 15f, 10f, false, true, 0))
	{
		func_66();
	}
	if (_is_anim_scene_started(iVar401, false))
	{
		fLocal_1003 = _get_anim_scene_progress(iVar401);
	}
	if (is_ped_dead_or_dying(&(uLocal_412[0]), true))
	{
		func_67(15);
	}
	func_68();
}

bool func_15()
{
	switch (iVar1009)
	{
		case 0:
			func_69();
			break;
		case 1:
			func_70();
			break;
		case 2:
			func_71();
			break;
		case 3:
			func_72();
			break;
		case 4:
			func_73();
			break;
		case 5:
			func_74();
			break;
		case 6:
			func_75();
			break;
		case 7:
			func_76();
			break;
		case 8:
			func_77();
			break;
		case 9:
			func_78();
			break;
		case 10:
			func_79();
			break;
		case 11:
			func_80();
			break;
		case 13:
			func_81();
			break;
		case 14:
			if (iVar885 == 0)
			{
				if (!is_ped_ragdoll(&(uLocal_412[0])))
				{
					if (func_83(&(uLocal_412[0]), Global_35, func_82(16), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_887 = 1;
					}
				}
			}
			if (func_19(&(uLocal_412[0]), 1, 0) >= 80f)
			{
				set_ped_keep_task(&(uLocal_412[0]), true);
				return true;
			}
			break;
		case 12:
			func_84(Global_35, &(uLocal_412[0]), &uLocal_836, -1, 15);
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 15);
			if (iVar888 == 0)
			{
				if (func_85(0f, 1, &(uLocal_412[0]), 1) && func_85(0f, 1, Global_35, 1))
				{
					func_86(Local_449[0], 1, 0);
					func_86(Local_449[1], 1, 0);
					iLocal_890 = 1;
				}
			}
			func_87();
			func_88();
			freeze_entity_position(&(uLocal_412[1]), false);
			if (does_blip_exist(&(uLocal_419[0])))
			{
				remove_blip(uLocal_419[0]);
				func_23(Global_1935630, 4);
			}
			if (!is_entity_dead(&(uLocal_412[0])))
			{
				set_ped_max_move_blend_ratio(&(uLocal_412[0]), 1.5f);
			}
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 1.5f, 1, -1f, 0);
			}
			if (func_19(&(uLocal_412[0]), 1, 0) >= 100f)
			{
				set_ped_keep_task(&(uLocal_412[0]), true);
				return true;
			}
			break;
		case 15:
			if (!is_ped_dead_or_dying(&(uLocal_412[0]), true))
			{
				clear_sequence_task(&uLocal_1009);
				open_sequence_task(&uLocal_1009);
				if (!is_ped_on_mount(&(uLocal_412[0])) && !is_entity_dead(&(uLocal_412[1])))
				{
					task_mount_animal(0, &(uLocal_412[1]), -1, -1, 2f, 1, 0, 0);
				}
				_task_move_in_traffic(0, -1f, 1536, 0);
				close_sequence_task(iVar1007);
				task_perform_sequence(&(uLocal_412[0]), iVar1007);
				clear_sequence_task(&uLocal_1009);
			}
			set_ped_keep_task(&(uLocal_412[0]), true);
			func_23(Global_1935630, 4);
			if (does_blip_exist(&(uLocal_419[0])))
			{
				remove_blip(uLocal_419[0]);
			}
			if (does_blip_exist(iVar424))
			{
				remove_blip(&iLocal_426);
			}
			clear_gps_custom_route();
			clear_gps_multi_route();
			Local_15.f_160 = 1;
			return true;
		case 16:
			clear_sequence_task(&uLocal_1009);
			open_sequence_task(&uLocal_1009);
			if (!is_ped_on_mount(&(uLocal_412[0])) && !is_entity_dead(&(uLocal_412[1])))
			{
				task_mount_animal(0, &(uLocal_412[1]), -1, -1, 2f, 1, 0, 0);
			}
			_task_move_in_traffic(0, -1f, 1536, 0);
			close_sequence_task(iVar1007);
			task_perform_sequence(&(uLocal_412[0]), iVar1007);
			clear_sequence_task(&uLocal_1009);
			set_ped_keep_task(&(uLocal_412[0]), true);
			func_23(Global_1935630, 4);
			if (does_blip_exist(&(uLocal_419[0])))
			{
				remove_blip(uLocal_419[0]);
			}
			if (does_blip_exist(iVar424))
			{
				remove_blip(&iLocal_426);
			}
			clear_gps_custom_route();
			clear_gps_multi_route();
			func_23(Global_1935630, 4);
			set_ped_keep_task(&(uLocal_412[0]), true);
			return true;
	}
	return false;
}

bool func_16(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_89())
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
			else if (func_90(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_30(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_30(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_30(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_91(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_91(Global_36, vVar1) > fVar0)
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

void func_17()
{
	_uilog_clear_cached_objective();
}

void func_18()
{
	if (iLocal_14 == 0)
	{
		if (iVar1031 == 1)
		{
			if (func_92(Local_15.f_3, iVar400) == 0)
			{
				func_93(Local_15.f_3, iVar400, 1);
				return;
			}
			if (func_92(Local_15.f_3, iVar400) == 1)
			{
				func_93(Local_15.f_3, iVar400, 2);
				return;
			}
			if (func_92(Local_15.f_3, iVar400) == 2)
			{
				func_93(Local_15.f_3, iVar400, 3);
				Local_15.f_44 = 1;
				return;
			}
		}
	}
}

float func_19(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_94(Global_35, iParam0, bParam1, bParam2);
}

void func_20(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_95(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_96() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_21(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_97(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_98(uParam0->f_3, 524288);
		}
	}
	if (func_99(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_99(uParam1[iVar0], 0, 0))
			{
				func_100(uParam1[iVar0], bVar3);
				if (func_101(uParam0, (*uParam1)[iVar0]))
				{
					func_102((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_99(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(uParam1[iVar0]))
						{
							set_ped_stealth_movement(uParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(uParam1[iVar0]))
						{
							_set_ped_crouch_movement(uParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_104(uParam1[iVar0], 1073741824, func_103(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_105(uParam0);
	}
	func_106(uParam0);
	if (!uParam0->f_186)
	{
		func_53(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_107(uParam0->f_3, uParam0->f_185);
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
		func_108(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_22(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_24(int iParam0)
{
	if (!func_27(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_25(int iParam0)
{
	func_109(iParam0, 0);
	func_110(iParam0, 0);
	func_111(iParam0, 1);
	func_112(iParam0, 1);
	func_113(iParam0, 0);
	func_114(iParam0, 1);
	func_115(iParam0, 1, 1, 1);
}

var func_26(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_116(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_117(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_116(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_27(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_28(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_118(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_119(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_57(iParam0, 128))
			{
				if (!func_120(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_121(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_122(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_123(*uParam1))
				{
					return func_124(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_125(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_4(Param4.f_2, 8))
				{
					func_119(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_126(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_127(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_128(vdist(Global_36, *uParam1), iParam0))
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
			if (func_57(iParam0, 128))
			{
				if (!func_129(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_124(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_121(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_126(uParam1))
					{
						return func_124(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_130(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_119(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_124(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_26("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_26("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	if (func_30(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_132(iParam1, func_131(uParam0), &(uParam0->f_172)))
		{
			if (func_99(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_30(int iParam0, int iParam1)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_31(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_133(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_30(uParam0->f_3, 1) && !func_30(uParam0->f_3, 32))
	{
		func_133(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_30(uParam0->f_3, 2) && !func_30(uParam0->f_3, 32))
	{
		func_133(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_134(uParam0->f_171, 1);
	}
	if (func_30(uParam0->f_3, 1))
	{
		func_133(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_135(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_32(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_33(int iParam0, int iParam1)
{
	iVar0 = func_136(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

bool func_34()
{
	if (func_96() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_35(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_137(&((*iParam0)[iVar0]->f_1));
		func_137(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

bool func_36(var uParam0)
{
	iVar0 = func_138(uParam0->f_3);
	iVar1 = func_139(1);
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

void func_37()
{
	switch (iVar400)
	{
		case 0:
			Local_403.f_4 = "script@beat@wilderness@horseRace@weird";
			break;
		case 2:
			Local_403.f_4 = "script@beat@wilderness@horseRace@confident";
			break;
		case 1:
			Local_403.f_4 = "script@beat@wilderness@horseRace@novice";
			break;
	}
}

void func_38()
{
	if (iVar400 == 1)
	{
		Local_737[0] = "script_re@horse_racer@novice";
		Local_737[0]->f_1 = "base";
		Local_737[1] = "script_re@horse_racer@novice";
		Local_737[1]->f_1 = "streaming_01";
		Local_737[2] = "script_re@horse_racer@novice";
		Local_737[2]->f_1 = "streaming_02";
		Local_737[3] = "script_re@horse_racer@novice";
		Local_737[3]->f_1 = "streaming_03";
		Local_737[4] = "script_re@horse_racer@novice";
		Local_737[4]->f_1 = "adjust_stirrup";
		Local_737[5] = "script_re@horse_racer@novice";
		Local_737[5]->f_1 = "streaming_03";
		Local_737[6] = "script_re@horse_racer@novice";
		Local_737[6]->f_1 = "struggle_lean_fwd";
		Local_737[18] = "script_re@horse_racer@novice";
		Local_737[18]->f_1 = "struggle_lean_back";
		Local_737[19] = "script_re@horse_racer@novice";
		Local_737[19]->f_1 = "struggle_lean_left";
		Local_737[20] = "script_re@horse_racer@novice";
		Local_737[20]->f_1 = "struggle_lean_left_m";
		Local_737[21] = "script_re@horse_racer@novice";
		Local_737[21]->f_1 = "struggle_lean_right";
		Local_737[22] = "script_re@horse_racer@novice";
		Local_737[22]->f_1 = "struggle_lean_right_m";
		func_140(&(Local_737[0]), &uLocal_552);
	}
	else if (iVar400 == 0)
	{
		Local_737[7] = "script_re@horse_racer@weird";
		Local_737[7]->f_1 = "base";
		Local_737[8] = "script_re@horse_racer@weird";
		Local_737[8]->f_1 = "streaming_01";
		Local_737[9] = "script_re@horse_racer@weird";
		Local_737[9]->f_1 = "streaming_02";
		Local_737[10] = "script_re@horse_racer@weird";
		Local_737[10]->f_1 = "streaming_03";
		Local_737[11] = "script_re@horse_racer@weird";
		Local_737[11]->f_1 = "streaming_01_horse";
		Local_737[12] = "script_re@horse_racer@weird";
		Local_737[12]->f_1 = "streaming_02_horse";
		Local_737[13] = "script_re@horse_racer@weird";
		Local_737[13]->f_1 = "streaming_03_horse";
		func_140(&(Local_737[7]), &uLocal_552);
	}
	else if (iVar400 == 2)
	{
		Local_737[14] = "script_re@horse_racer@confident";
		Local_737[14]->f_1 = "base";
		Local_737[15] = "script_re@horse_racer@confident";
		Local_737[15]->f_1 = "idle_a";
		Local_737[16] = "script_re@horse_racer@confident";
		Local_737[16]->f_1 = "pats_horse_left";
		Local_737[17] = "script_re@horse_racer@confident";
		Local_737[17]->f_1 = "pats_horse_right";
		func_140(&(Local_737[14]), &uLocal_552);
	}
}

void func_39()
{
	request_ptfx_asset();
}

void func_40()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			sLocal_529[12] = "rehor_scarlett_a_1";
			request_waypoint_recording(&(sLocal_529[12]));
			sLocal_529[1] = "rehor_scarlett_shortcut_a_1";
			request_waypoint_recording(&(sLocal_529[1]));
			break;
		case 1:
			sLocal_529[19] = "rehor_big_valley_a";
			request_waypoint_recording(&(sLocal_529[19]));
			sLocal_529[8] = "rehor_big_valley_a";
			request_waypoint_recording(&(sLocal_529[8]));
			break;
		case 2:
			sLocal_529[16] = "rehor_heartlands_a";
			request_waypoint_recording(&(sLocal_529[16]));
			sLocal_529[5] = "rehor_heartlands_shortcut_a";
			request_waypoint_recording(&(sLocal_529[5]));
			break;
		case 3:
			sLocal_529[20] = "rehor_big_valley_b";
			request_waypoint_recording(&(sLocal_529[20]));
			sLocal_529[9] = "rehor_big_valley_shortcut_b";
			request_waypoint_recording(&(sLocal_529[9]));
			break;
		case 4:
			sLocal_529[21] = "rehor_big_valley_c";
			request_waypoint_recording(&(sLocal_529[21]));
			sLocal_529[10] = "rehor_big_valley_shortcut_c";
			request_waypoint_recording(&(sLocal_529[10]));
			break;
		case 5:
			sLocal_529[18] = "rehor_cumberland_a";
			request_waypoint_recording(&(sLocal_529[18]));
			sLocal_529[7] = "rehor_cumberland_shortcut_a";
			request_waypoint_recording(&(sLocal_529[7]));
			break;
		case 6:
			sLocal_529[17] = "rehor_heartlands_b";
			request_waypoint_recording(&(sLocal_529[17]));
			sLocal_529[6] = "rehor_heartlands_shortcut_b";
			request_waypoint_recording(&(sLocal_529[6]));
			break;
		case 7:
			sLocal_529[15] = "rehor_roanoke_a";
			request_waypoint_recording(&(sLocal_529[15]));
			sLocal_529[4] = "rehor_roanoke_shortcut_a";
			request_waypoint_recording(&(sLocal_529[4]));
			break;
		case 8:
			sLocal_529[11] = "rehor_scarlett_a";
			request_waypoint_recording(&(sLocal_529[11]));
			sLocal_529[0] = "rehor_scarlett_shortcut_a";
			request_waypoint_recording(&(sLocal_529[0]));
			break;
		case 9:
			sLocal_529[13] = "rehor_scarlett_a_2";
			request_waypoint_recording(&(sLocal_529[13]));
			sLocal_529[2] = "rehor_scarlett_shortcut_a_2";
			request_waypoint_recording(&(sLocal_529[2]));
			break;
		case 10:
			sLocal_529[14] = "rehor_scarlett_b";
			request_waypoint_recording(&(sLocal_529[14]));
			sLocal_529[3] = "rehor_scarlett_shortcut_b";
			request_waypoint_recording(&(sLocal_529[3]));
			break;
	}
}

void func_41()
{
	func_141(Local_449[0], "RE_INTER_POS", func_82(18), -163964935, 0, 0, 0, 1, 0);
	func_141(Local_449[1], "RE_INTER_ANTAGONIZE", func_82(19), 648122183, 0, 0, 0, 1, 0);
	func_86(Local_449[0], 0, 0);
	func_86(Local_449[1], 0, 0);
}

int func_42()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
			return 8;
		case 5:
			return 7;
		case 2:
			return 5;
		case 6:
			return 6;
		case 7:
			return 4;
		case 8:
			return 0;
		case 0:
			return 1;
		case 9:
			return 2;
		case 10:
			return 3;
		case 3:
			return 9;
		case 4:
			return 10;
	}
	return 3;
}

int func_43()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
			return 19;
		case 5:
			return 18;
		case 2:
			return 16;
		case 6:
			return 17;
		case 7:
			return 15;
		case 8:
			return 11;
		case 0:
			return 12;
		case 9:
			return 13;
		case 10:
			return 14;
		case 3:
			return 20;
		case 4:
			return 21;
	}
	return 14;
}

bool func_44(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_142((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_45(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_143() || !func_144((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_46()
{
	func_145(&(Local_15.f_5), 1);
	func_112(&(Local_15.f_5), 1);
	func_110(&(Local_15.f_5), 1);
	func_109(&(Local_15.f_5), 1);
	func_146(&(Local_15.f_5), 1);
	func_114(&(Local_15.f_5), 1);
	func_147(&(Local_15.f_5), 1);
	func_148(&(Local_15.f_5), &(uLocal_412[0]), &(uLocal_412[1]), 0);
}

void func_47()
{
	fLocal_790 = 300f;
	switch (Local_15.f_51.f_4)
	{
		case 5:
			*vLocal_802[0] = { 558.49f, 1724.74f, 186.8f };
			*vLocal_802[1] = { 610.31f, 2152.29f, 223.45f };
			*vLocal_802[2] = { 875.88f, 2207.67f, 249.1f };
			*vLocal_802[3] = { 755.82f, 2425.93f, 268.88f };
			break;
		case 6:
			*vLocal_802[0] = { 1679.39f, 1190.44f, 219.18f };
			break;
		case 7:
			*vLocal_802[0] = { 2249.151f, 678.073f, 86.4426f };
			*vLocal_802[1] = { 2394.62f, 721.75f, 66.5f };
			*vLocal_802[2] = { 2614.56f, 724.03f, 86.93f };
			*vLocal_802[3] = { 2659.66f, 651.76f, 76.25f };
			*vLocal_802[4] = { 2809.33f, 448.56f, 63.15f };
			break;
		case 10:
			create_model_hide(1564.39f, -1198.77f, 49.34f, 1f, -1138338597, true);
			break;
	}
}

void func_48()
{
	Local_403 = _create_anim_scene(Local_403.f_4, 64, 0, false, true);
	set_anim_scene_entity(iVar401, "racer", &(uLocal_412[0]), 0);
	set_anim_scene_entity(iVar401, "HORSE", &(uLocal_412[1]), 0);
	if (!_is_anim_scene_loaded(iVar401, true, false))
	{
		load_anim_scene(iVar401);
	}
}

void func_49()
{
	*vLocal_501[3] = { -1030.82f, -303.08f, 82.94f };
	*vLocal_501[4] = { 1557.9f, 1543.5f, 145.05f };
	*vLocal_501[0] = { 2975.25f, 409.11f, 49.44f };
	*vLocal_501[2] = { 1408.11f, -2286.16f, 40.87f };
	*vLocal_501[1] = { 1563.09f, -1433.79f, 60.32f };
	*vLocal_501[5] = { 585.92f, 2339.94f, 231.22f };
	*vLocal_501[6] = { -2315.48f, -455.95f, 143.09f };
}

void func_50()
{
	set_ped_config_flag(&(uLocal_412[1]), 316, true);
	set_ped_config_flag(&(uLocal_412[1]), 390, true);
	set_ped_config_flag(&(uLocal_412[0]), 316, true);
	set_ped_config_flag(&(uLocal_412[0]), 390, true);
	set_ped_config_flag(&(uLocal_412[0]), 347, true);
	_set_entity_coords_and_heading(&(uLocal_412[0]), Local_209[0]->f_6, 0f, true, false, true);
	_set_entity_coords_and_heading(&(uLocal_412[1]), Local_209[1]->f_6, 0f, true, false, true);
	add_entity_to_audio_mix_group(&(uLocal_412[0]), "horse_race_group", 0f);
	add_entity_to_audio_mix_group(&(uLocal_412[0]), "HORSE_RACE_GROUP", 0f);
	_request_ped_emotional_preset(&(uLocal_412[0]), "Default_Scared");
	switch (iVar400)
	{
		case 2:
			_set_entity_coords_and_heading(&(uLocal_412[2]), Local_209[2]->f_6, Local_209[2]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[3]), Local_209[3]->f_6, Local_209[3]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[4]), Local_209[4]->f_6, Local_209[4]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[5]), Local_209[5]->f_6, Local_209[5]->f_9, true, false, true);
			_0xf1c03a5352243a30(&(uLocal_412[2]));
			_0xf1c03a5352243a30(&(uLocal_412[3]));
			_0xf1c03a5352243a30(&(uLocal_412[4]));
			_0xf1c03a5352243a30(&(uLocal_412[5]));
			func_149(&(uLocal_412[0]), 100);
			func_150(&(uLocal_412[0]), -1831458922, 1, 0);
			func_150(&(uLocal_412[0]), -951828978, 1, 0);
			break;
		case 0:
			_set_entity_coords_and_heading(&(uLocal_412[2]), Local_209[2]->f_6, Local_209[2]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[3]), Local_209[3]->f_6, Local_209[3]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[4]), Local_209[4]->f_6, Local_209[4]->f_9, true, false, true);
			_set_entity_coords_and_heading(&(uLocal_412[5]), Local_209[5]->f_6, Local_209[5]->f_9, true, false, true);
			_0xf1c03a5352243a30(&(uLocal_412[2]));
			_0xf1c03a5352243a30(&(uLocal_412[3]));
			_0xf1c03a5352243a30(&(uLocal_412[4]));
			_0xf1c03a5352243a30(&(uLocal_412[5]));
			func_149(&(uLocal_412[0]), 50);
			func_150(&(uLocal_412[0]), 998010398, 1, 0);
			func_150(&(uLocal_412[0]), 1533677103, 1, 0);
			break;
		case 1:
			_0x89f5e7adecccb49c(&(uLocal_412[0]), "agitated");
			func_151(&(uLocal_412[0]));
			func_149(&(uLocal_412[0]), 300);
			func_150(&(uLocal_412[0]), -885810591, 1, 0);
			func_150(&(uLocal_412[0]), 785091089, 1, 0);
			break;
	}
	remove_all_ped_weapons(&(uLocal_412[0]), true, true);
	_set_ped_on_mount(&(uLocal_412[0]), &(uLocal_412[1]), -1, true);
	set_ped_config_flag(&(uLocal_412[0]), 498, true);
	_set_entity_something(&(uLocal_412[1]), false);
	_set_entity_something(&(uLocal_412[0]), false);
	func_152(&(uLocal_412[0]), &Local_15, 0);
	_0x53ba7d96b9a421d9(Global_35, &(uLocal_412[0]));
	_0x53ba7d96b9a421d9(Global_35, &(uLocal_412[1]));
	fVar0 = func_153(&(uLocal_412[1]), Global_35, 1);
	set_entity_heading(&(uLocal_412[1]), fVar0);
	clear_sequence_task(&iVar1);
	open_sequence_task(&iVar1);
	if (get_closest_vehicle_node(get_entity_coords(Global_35, true, false), &vVar2, 0, 3f, 0f))
	{
		_task_move_in_traffic_2(0, vVar2, 5f, 1.25f, 8704, 0);
	}
	_task_move_in_traffic(0, 1.25f, 8704, 0);
	close_sequence_task(iVar1);
	task_perform_sequence(&(uLocal_412[0]), iVar1);
	clear_sequence_task(&iVar1);
}

void func_51(struct<52> Param0, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195)
{
	switch (Param0.f_51.f_4)
	{
		case 1:
		case 3:
			*uParam194 = 6;
			break;
		case 5:
			*uParam194 = 5;
			break;
		case 2:
		case 4:
			*uParam194 = 3;
			break;
		case 6:
			*uParam194 = 4;
			break;
		case 7:
			*uParam194 = 0;
			break;
		case 0:
		case 8:
		case 9:
			*uParam194 = 2;
			break;
		case 10:
			*uParam194 = 1;
			break;
	}
	func_154(*uParam194, uParam195);
}

void func_52()
{
	vVar0 = { (Local_15.f_51 - 5f), (Local_15.f_51.f_1 - 5f), (Local_15.f_51.f_2 - 5f) };
	vVar3 = { (Local_15.f_51 + 5f), (Local_15.f_51.f_1 + 5f), (Local_15.f_51.f_2 + 5f) };
	vVar6 = { Local_15.f_51, Local_15.f_51.f_1, Local_15.f_51.f_2 };
	fLocal_792 = 20f;
	iLocal_791 = func_155(vVar0, vVar3, vVar6, uVar790, 0, 0);
}

void func_53(var uParam0, int iParam1)
{
	vVar0 = { func_156(uParam0) };
	iVar3 = func_107(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_54(var uParam0, var uParam1)
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

void func_55(var uParam0)
{
	func_111(uParam0, 1);
	func_157(uParam0, 20);
}

void func_56(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_57(int iParam0, int iParam1)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_58(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_27(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_158())
	{
		func_159(1);
	}
	func_160(iParam2, uParam0->f_43);
	func_161(iParam2, 0, 0, 0, 0);
	if (func_162(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_97(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_163(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_59(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_60(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_164())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_57(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_58(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_59(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_165(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_166(uParam0, bVar0);
		func_167(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_168(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_58(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_59(&(uParam0->f_121));
		}
	}
}

bool func_61(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_30(uParam2->f_3, 1))
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
			if (func_169())
			{
				fVar0 = 15f;
			}
		}
		if (func_170(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_171(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_170(uParam2, fVar1))
		{
			if (!func_172((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_173(uParam2->f_3, 2) && func_174(2))
		{
			return false;
		}
		if (func_30(iParam0, 4194304) || func_30(iParam0, 33554432))
		{
			if (func_175(1))
			{
				return false;
			}
		}
	}
	if (func_176(Global_35))
	{
		return false;
	}
	if (func_177(0, 1, 1) && !func_178(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_30(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_179(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_171(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_180())
		{
			return false;
		}
		iVar2 = func_182(func_181());
		if (func_183(iVar2))
		{
			if (func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_185(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_186(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_62(var uParam0, int iParam1)
{
	if (func_187(uParam0->f_51))
	{
		func_188(uParam0->f_51, 0);
		fVar0 = func_189(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_190());
		bVar1 = func_103(!func_30(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_192(iVar2, func_191(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_63()
{
	iVar0 = -1;
	if (iVar887 == 1)
	{
		iVar0 = func_193(uLocal_412[0], &iLocal_428, fVar1003, &Local_449, &(Local_15.f_192), 0f, 1, 0, 0, iVar1077, 0, 0, 2, 1, -1082130432, 0);
	}
	switch (iVar865)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					stop_current_playing_speech(&(uLocal_412[0]), 1);
					fLocal_1005 = 30f;
					func_86(Local_449[1], 0, 0);
					func_86(Local_449[0], 0, 0);
					func_194(&iLocal_428, 0);
					iLocal_1079 = func_1(3, 0, 0);
					iLocal_1034 = 1;
					func_67(6);
					break;
				case 1:
					stop_current_playing_speech(&(uLocal_412[0]), 1);
					fLocal_1005 = 30f;
					func_194(&iLocal_428, 0);
					iLocal_1079 = func_1(3, 0, 0);
					func_67(5);
					break;
			}
			break;
		case 1:
			func_86(Local_449[1], 1, 0);
			if (is_ped_on_mount(Global_35))
			{
				if (func_195(5))
				{
					if (func_196())
					{
						func_86(Local_449[1], 0, 0);
					}
					else if (iVar0 == 1)
					{
						func_83(Global_35, &(uLocal_412[0]), Local_449[1]->f_13, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_984 = iVar982 + 1;
						func_197(&uLocal_900);
						iLocal_867 = 5;
					}
				}
				else if (iVar0 == 1)
				{
					func_83(Global_35, &(uLocal_412[0]), Local_449[1]->f_13, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_985 = iVar983 + 1;
					func_197(&uLocal_900);
					iLocal_867 = 5;
				}
			}
			else
			{
				func_86(Local_449[1], 0, 0);
			}
			break;
		case 2:
			switch (iVar866)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_868 = 1;
							break;
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 1:
					if (func_85(-4f, 1, Global_35, 1))
					{
						switch (iVar400)
						{
							case 1:
							case 2:
								func_83(&(uLocal_412[0]), Global_35, func_82(67), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								func_83(&(uLocal_412[0]), Global_35, func_82(67), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						iLocal_868 = 3;
					}
					break;
				case 2:
					if (func_85(-4f, 1, Global_35, 1))
					{
						switch (iVar400)
						{
							case 2:
								func_83(&(uLocal_412[0]), Global_35, func_82(68), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								func_83(&(uLocal_412[0]), Global_35, func_82(68), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						func_194(&iLocal_428, 0);
						iLocal_1079 = func_1(3, 0, 0);
						func_86(Local_449[0], 0, 0);
						func_86(Local_449[1], 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 3:
					if (func_85(-4f, 1, &(uLocal_412[0]), 1))
					{
						func_86(Local_449[0], 0, 0);
						func_86(Local_449[1], 1, 0);
						iLocal_868 = iVar866;
						iLocal_867 = 3;
					}
					break;
				case 5:
					break;
			}
			break;
		case 3:
			switch (iVar866)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 2:
					if (func_85(-4f, 1, Global_35, 1))
					{
						func_83(&(uLocal_412[0]), Global_35, func_82(68), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_86(Local_449[0], 0, 0);
						func_86(Local_449[1], 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 5:
					break;
			}
			break;
		case 4:
			switch (iVar866)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_868 = 1;
							break;
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 1:
					if (func_85(0f, 1, &(uLocal_412[0]), 1) && func_85(0f, 1, Global_35, 1))
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(63), 0f, 0))
						{
							func_194(&iLocal_428, 0);
							iLocal_1079 = func_1(3, 0, 0);
							func_86(Local_449[0], 0, 0);
							func_86(Local_449[1], 0, 0);
							iLocal_868 = 5;
						}
					}
					break;
				case 2:
					if (func_85(0f, 1, &(uLocal_412[0]), 1) && func_85(0f, 1, Global_35, 1))
					{
						switch (iVar400)
						{
							case 1:
							case 2:
								func_83(&(uLocal_412[0]), Global_35, func_82(64), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								func_83(&(uLocal_412[0]), Global_35, func_82(64), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						func_194(&iLocal_428, 0);
						iLocal_1079 = func_1(3, 0, 0);
						func_86(Local_449[0], 0, 0);
						func_86(Local_449[1], 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 5:
					break;
			}
			break;
		case 5:
			func_86(Local_449[0], 0, 0);
			func_86(Local_449[1], 0, 0);
			func_86(Local_449[2], 0, 0);
			break;
	}
}

void func_64()
{
}

void func_65()
{
	if (iVar990 >= 3)
	{
		if (func_99(&(uLocal_412[0]), 0, 1))
		{
			if (is_ped_on_mount(&(uLocal_412[0])))
			{
				if (!func_199(&(uLocal_412[0])))
				{
					iVar0 = func_200();
					if (iVar0 != 9)
					{
						task_play_anim(&(uLocal_412[0]), &(Local_737[iVar0]), Local_737[iVar0]->f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
						if (func_201(iVar0))
						{
							task_play_anim(&(uLocal_412[1]), &(Local_737[func_202(iVar0)]), Local_737[func_202(iVar0)]->f_1, 1.5f, -1.5f, -1, 0, 0f, false, 0, false, "HORSE_HEAD_AND_NECK", false);
						}
					}
				}
			}
		}
	}
}

void func_66()
{
	if (!is_entity_dead(iVar1008))
	{
		set_ped_max_move_blend_ratio(iVar1008, 1.5f);
	}
}

void func_67(int iParam0)
{
	iLocal_1011 = iParam0;
}

void func_68()
{
	if (iVar1009 >= 7)
	{
		switch (Local_15.f_51.f_4)
		{
			case 5:
				switch (iVar872)
				{
					case 0:
						if (is_entity_at_coord(&(uLocal_412[0]), vLocal_796, vLocal_799, false, true, 0))
						{
							if (iVar1030 == 0)
							{
								iLocal_1032 = 1;
								set_train_cruise_speed(iVar409, fVar787);
								_0xdd100ce1ebbf37e3(iVar409, 1);
								iLocal_874 = 2;
							}
						}
						else if (is_entity_at_coord(Global_35, vLocal_796, vLocal_799, false, true, 0))
						{
							if (iVar1030 == 0)
							{
								iLocal_1032 = 1;
								set_train_cruise_speed(iVar409, fVar787);
								_0xdd100ce1ebbf37e3(iVar409, 1);
								iLocal_874 = 2;
							}
						}
						break;
					case 2:
						if (is_entity_at_coord(Global_35, 476.58f, 1777.57f, 186.62f, 5f, 5f, 5f, false, true, 0) && !is_entity_at_coord(iVar409, 413.02f, 1787.81f, 186.59f, 5f, 5f, 5f, false, true, 0))
						{
							set_train_cruise_speed(iVar409, 20f);
						}
						if (is_entity_at_coord(Global_35, 476.58f, 1777.57f, 186.62f, 5f, 5f, 5f, false, true, 0))
						{
							iLocal_886 = 1;
						}
						if (is_entity_at_coord(iVar409, 413.02f, 1787.81f, 186.59f, 5f, 5f, 5f, false, true, 0))
						{
							set_train_cruise_speed(iVar409, 0f);
							iLocal_874 = 1;
						}
						break;
					case 1:
						if (iVar884 == 1)
						{
							if (func_94(&(uLocal_412[0]), iVar409, 1, 0) >= 70f && func_94(Global_35, iVar409, 1, 0) >= 70f)
							{
								set_train_cruise_speed(iVar409, 5f);
								iLocal_874 = 3;
							}
						}
						break;
				}
				break;
			case 2:
				if (is_entity_at_coord(Global_35, vLocal_796, vLocal_799, false, true, 0))
				{
					if (iVar1030 == 0)
					{
						iLocal_1032 = 1;
						if (does_entity_exist(iVar409))
						{
							set_train_cruise_speed(iVar409, fVar787);
						}
					}
				}
				break;
			case 7:
				if (is_entity_at_coord(&(uLocal_412[0]), vLocal_796, vLocal_799, false, true, 0))
				{
					if (iVar1030 == 0)
					{
						iLocal_1032 = 1;
						if (does_entity_exist(iVar409))
						{
							set_train_cruise_speed(iVar409, fVar787);
						}
					}
				}
				break;
		}
		if (func_19(iVar409, 1, 0) <= 70f && iVar1022 == 0)
		{
			if (!is_entity_dead(iVar409))
			{
				iLocal_1024 = 1;
				_0xcfe122ec635cc2b2(iVar409, "DANGER", 0, 0);
			}
		}
	}
}

void func_69()
{
	add_navmesh_blocking_object(-1772.75f, 362.62f, 113.6f, 40f, 15f, 10f, -9f, false, 7);
	iLocal_1016 = func_42();
	iLocal_1017 = func_43();
	switch (Local_15.f_51.f_4)
	{
		case 2:
		case 5:
		case 7:
			start_audio_scene("Horse_Race_Beat_Train_scene");
			add_entity_to_audio_mix_group(iVar409, "Horse_Race_Train_group", 0f);
			break;
	}
	func_67(1);
}

void func_70()
{
	func_203();
	func_204();
	func_87();
	func_205();
	if (func_206(Global_35) || get_is_task_active(Global_35, 8))
	{
		if ((func_99(&(uLocal_412[1]), 0, 1) && func_99(&(uLocal_412[0]), 0, 1)) && func_99(Global_35, 0, 1))
		{
			if (func_207(&Local_15, 1f, 100f, 60f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				if (func_208())
				{
					if (!does_blip_exist(&(uLocal_419[0])))
					{
						func_209(&(uLocal_412[0]), uLocal_419[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
					}
					func_67(2);
				}
			}
		}
	}
}

void func_71()
{
	func_204();
	func_203();
	func_87();
	func_210();
	func_211();
	func_212();
	func_213(&uLocal_1088, &uLocal_1080, &(uLocal_412[0]), 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680);
	if (func_99(Global_35, 0, 1))
	{
		func_214();
	}
}

void func_72()
{
	func_87();
	func_203();
	func_210();
	func_211();
	func_212();
	func_213(&uLocal_1088, &uLocal_1080, &(uLocal_412[0]), 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680);
	if (func_85(-3f, 1, &(uLocal_412[0]), 1))
	{
		if (func_94(&(uLocal_412[0]), Global_35, 1, 0) <= 12f)
		{
			if (iVar400 != 2 && iVar400 != 1)
			{
				if (func_85(-4f, 1, &(uLocal_412[0]), 1) && func_215())
				{
					func_83(&(uLocal_412[0]), Global_35, func_82(2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_216(&uLocal_523, 2);
					func_197(&uLocal_975);
					func_67(4);
				}
			}
			else
			{
				func_216(&uLocal_523, 2);
				func_67(4);
			}
		}
		else
		{
			if (func_217())
			{
				func_83(&(uLocal_412[0]), Global_35, func_82(4), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_218(1515458263, &(uLocal_412[0]), 1);
				func_216(&uLocal_523, 4);
			}
			func_67(4);
		}
	}
}

void func_73()
{
	func_87();
	func_210();
	func_203();
	func_211();
	func_88();
	func_212();
	func_213(&uLocal_1088, &uLocal_1080, &(uLocal_412[0]), 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680);
	if (!func_219(iVar521, 4))
	{
		if (func_94(&(uLocal_412[0]), Global_35, 1, 0) > 12f && func_217())
		{
			if (func_85(-4f, 1, 0, 0))
			{
				func_83(&(uLocal_412[0]), Global_35, func_82(4), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_218(1515458263, &(uLocal_412[0]), 1);
				func_216(&uLocal_523, 4);
			}
		}
	}
	if (!func_219(iVar521, 32))
	{
		if (((func_85(-4f, 1, &(uLocal_412[0]), 1) && func_215()) && func_220()) && (func_221(&uLocal_975) > 4.5f || iVar400 != 0))
		{
			func_83(&(uLocal_412[0]), Global_35, func_82(8), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_216(&uLocal_523, 32);
		}
	}
	else
	{
		if (func_85(-4f, 1, &(uLocal_412[0]), 1))
		{
			if (!func_222(&uLocal_891))
			{
				func_197(&uLocal_891);
				func_197(&uLocal_894);
				func_194(&iLocal_428, 0);
				iLocal_1079 = func_1(2, 0, 0);
				func_223(Local_449[0], 0);
				func_223(Local_449[1], 0);
				func_86(Local_449[0], 1, 0);
				func_86(Local_449[1], 1, 0);
				func_224(Local_449[0], "BEAT_GRT_POS");
				func_224(Local_449[1], "BEAT_GRT_NEG");
				iLocal_867 = 0;
			}
		}
		if (func_221(&uLocal_891) >= 7f)
		{
			func_225();
		}
	}
}

void func_74()
{
	func_87();
	func_210();
	func_203();
	if (func_85(0f, 1, &(uLocal_412[0]), 1) && func_85(0f, 1, Global_35, 1))
	{
		if (func_198(&(uLocal_412[0]), Global_35, func_82(11), 0.5f, 1))
		{
			func_226();
			func_194(&iLocal_428, 0);
			iLocal_1079 = func_1(3, 0, 0);
			func_86(Local_449[0], 0, 0);
			func_86(Local_449[1], 0, 0);
			func_224(Local_449[0], "RE_INTER_POS");
			func_224(Local_449[1], "RE_INTER_ANTAGONIZE");
			Local_449[0]->f_13 = func_82(61);
			Local_449[1]->f_13 = func_82(62);
			iLocal_867 = 4;
			func_67(12);
		}
	}
}

void func_75()
{
	func_87();
	func_210();
	func_203();
	func_20(0);
	iLocal_784 = 1;
	func_227(Global_1935630, 4);
	fLocal_1002 = (func_228(player_ped_id(), *vLocal_501[iVar1016], 1) / 2f);
	func_67(7);
}

void func_76()
{
	func_87();
	func_210();
	func_203();
	iVar0 = 0;
	switch (iVar988)
	{
		case 0:
			if (func_85(-4f, 1, &(uLocal_412[0]), 1) && func_85(-4f, 1, Global_35, 1))
			{
				if (func_19(&(uLocal_412[0]), 1, 0) >= 12f)
				{
					func_83(&(uLocal_412[0]), Global_35, func_82(39), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_990 = iVar988 + 1;
				}
				else
				{
					func_83(&(uLocal_412[0]), Global_35, func_82(10), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_990 = iVar988 + 1;
				}
			}
			break;
		case 1:
			clear_ped_tasks(&(uLocal_412[1]), 1, 0);
			clear_ped_secondary_task(&(uLocal_412[0]));
			func_229("HORSE_RACE_OBJ");
			if (!does_blip_exist(iVar424))
			{
				iLocal_426 = _blip_add_for_coord(408396114, *vLocal_501[iVar1016]);
			}
			start_gps_multi_route(-1777836132, true, false);
			waypoint_recording_get_num_points(&(sLocal_529[iVar1015]), &iVar1);
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1015]), Global_36, &iVar2);
			_start_gps_custom_route_from_waypoint_recording_route(&(sLocal_529[iVar1015]), iVar2, iVar1, -1777836132, false, true);
			set_gps_multi_route_render(true);
			func_230();
			func_197(&uLocal_906);
			trigger_music_event("REHR_START");
			iLocal_785 = add_shocking_event_for_entity(-1905235087, Global_35, -1f, 30f, 20f, 0f, -1f, 180f, false, false, -1, -1);
			_0x89f5e7adecccb49c(&(uLocal_412[1]), "agitated");
			_0x06d26a96ca1bca75(&(uLocal_412[1]), 3, 1f, 0);
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(Global_35, true, false), &iVar0);
			waypoint_recording_get_coord(&(sLocal_529[iVar1014]), iVar0, &vLocal_1006);
			fLocal_1004 = get_distance_between_coords(get_entity_coords(Global_35, true, false), vLocal_1006, true);
			func_231();
			start_audio_scene("horse_race_scene");
			func_86(Local_449[0], 0, 0);
			func_86(Local_449[1], 0, 0);
			func_223(Local_449[0], 0);
			func_86(Local_449[1], 0, 0);
			func_224(Local_449[1], "RE_INTER_ANTAGONIZE");
			func_224(Local_449[0], "RE_INTER_POS");
			set_ped_reset_flag(&(uLocal_412[1]), 91, true);
			func_67(8);
			break;
	}
}

void func_77()
{
	func_196();
	func_87();
	func_232();
	func_233();
	func_234();
	func_235();
	if (is_scripted_speech_playing(Global_35) || is_scripted_speech_playing(&(uLocal_412[0])))
	{
		func_84(&(uLocal_412[0]), Global_35, &uLocal_836, 1000, 15);
		func_84(Global_35, &(uLocal_412[0]), &uLocal_836, 1000, 15);
	}
	if (iVar982 > 0 || iVar983 > 0)
	{
		if (iVar400 == 1)
		{
			func_236();
		}
	}
	if (iVar400 == 0)
	{
		func_237();
		func_238();
	}
	else if (iVar400 == 2)
	{
		func_237();
	}
	if (iVar1016 == 3)
	{
		func_239();
	}
	if (!is_shocking_event_in_sphere(-1905235087, get_entity_coords(Global_35, true, false), 5f))
	{
		iLocal_785 = add_shocking_event_for_entity(-1905235087, Global_35, -1f, 40f, 20f, 0f, -1f, 180f, false, false, -1, -1);
	}
	if (iVar1026 == 0)
	{
		switch (iVar999)
		{
			case 0:
				if (!func_240(&(uLocal_412[0]), &(uLocal_412[1]), 0) && !is_ped_ragdoll(&(uLocal_412[0])))
				{
					set_entity_proofs(&(uLocal_412[0]), 0, false);
					_0xaab050da48b57978(&(uLocal_412[0]), "Default_Scared", 0, 15000, 4);
					task_mount_animal(&(uLocal_412[0]), &(uLocal_412[1]), -1, -1, 2f, 1, 0, 0);
					iLocal_1001 = iVar999 + 1;
				}
				break;
			case 1:
				if (func_240(&(uLocal_412[0]), &(uLocal_412[1]), 0))
				{
					task_follow_waypoint_recording(&(uLocal_412[0]), &(sLocal_529[iVar1014]), 0, 67139080, -1, 0, 0, -1);
					iLocal_1001 = 0;
				}
				break;
		}
	}
	if (func_221(&uLocal_906) >= 10f && !is_entity_at_coord(Global_35, *vLocal_501[iVar1016], 85f, 85f, 100f, false, true, 0))
	{
		if (_is_ped_getting_into_a_mount_seat(&(uLocal_412[0]), true))
		{
			func_241();
			func_242();
		}
		func_88();
		if (iVar1017 == 0)
		{
			iLocal_1019 = 1;
			func_197(&uLocal_903);
			func_197(&uLocal_900);
		}
	}
	if (is_entity_at_coord(Global_35, *vLocal_501[iVar1016], 60f, 60f, 100f, false, true, 0))
	{
		if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
		{
			waypoint_playback_override_speed(&(uLocal_412[0]), 1.75f, 1, 0.4f, 0);
		}
	}
	else
	{
		switch (iVar400)
		{
			case 2:
				func_243(15f, 25f, 45f, 30, 5, 3, 1, 1);
				break;
			case 0:
				if (iVar1024 == 0)
				{
					func_243(1101004800, 1101004800, 1108082688, 18, 4, 4, 1, 1);
				}
				else if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_412[0]), 3f, 1, 0.4f, 0);
				}
				break;
			case 1:
				if (iVar1026 == 0)
				{
					func_243(20f, 20f, 30f, 5, 4, 3, 1, 0);
					if (iVar1017 == 1)
					{
						func_244();
					}
				}
				if (func_245())
				{
					if (iVar1026 == 0)
					{
						func_246();
					}
				}
				func_247();
				break;
		}
	}
	if (func_165(Global_35, iVar425, 1, 0))
	{
		Local_15.f_44 = 1;
		func_248(1);
		func_17();
		trigger_music_event("STOP_MUSIC_8S");
		stop_audio_scene("horse_race_scene");
		func_23(Global_1935630, 4);
		if (does_blip_exist(iVar424))
		{
			remove_blip(&iLocal_426);
		}
		clear_gps_custom_route();
		clear_gps_multi_route();
		func_194(&iLocal_428, 0);
		func_86(Local_449[0], 0, 0);
		func_86(Local_449[1], 0, 0);
		func_224(Local_449[0], "RE_INTER_POS");
		func_224(Local_449[1], "RE_INTER_ANTAGONIZE");
		iLocal_867 = 5;
		_0x96c7b659854de629(Global_35, &(uLocal_412[0]));
		_0x96c7b659854de629(Global_35, &(uLocal_412[1]));
	}
	else if (func_165(&(uLocal_412[0]), iVar425, 1, 0))
	{
		Local_15.f_44 = 1;
		trigger_music_event("STOP_MUSIC_8S");
		stop_audio_scene("horse_race_scene");
		func_17();
		func_249("HORSE_RACE_LOST", 7500, 0, 0, -1, -1, 0);
		func_194(&iLocal_428, 0);
		func_86(Local_449[0], 0, 0);
		func_86(Local_449[1], 0, 0);
		func_224(Local_449[0], "RE_INTER_POS");
		func_224(Local_449[1], "RE_INTER_ANTAGONIZE");
		iLocal_867 = 5;
		_0x96c7b659854de629(Global_35, &(uLocal_412[0]));
		_0x96c7b659854de629(Global_35, &(uLocal_412[1]));
		func_67(10);
	}
}

void func_78()
{
	iLocal_14 = 2;
	func_87();
	func_250();
	if (does_blip_exist(iVar424))
	{
		remove_blip(&iLocal_426);
	}
	clear_gps_multi_route();
	clear_gps_multi_route();
	if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
	{
		waypoint_playback_override_speed(&(uLocal_412[0]), 2.5f, 1, 0.4f, 0);
	}
	waypoint_recording_get_num_points(&(sLocal_529[iVar1014]), &iVar0);
	waypoint_recording_get_coord(&(sLocal_529[iVar1014]), (iVar0 - 1), &vVar1);
	if (is_entity_at_coord(&(uLocal_412[0]), vVar1, 20f, 20f, 10f, false, true, 0))
	{
		if (!is_entity_dead(&(uLocal_412[1])))
		{
			set_ped_max_move_blend_ratio(&(uLocal_412[1]), 1.5f);
		}
	}
	switch (iVar871)
	{
		case 0:
			func_84(Global_35, &(uLocal_412[0]), &uLocal_836, -1, 25);
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 25);
			if (func_228(&(uLocal_412[0]), vVar1, 1) <= 5f)
			{
				task_stand_still(&(uLocal_412[1]), -1);
				task_stand_still(&(uLocal_412[0]), -1);
				_set_anim_scene_playback_list_bool(iVar401, &(sLocal_525[2]), true);
				_0xba8818212633500a(&(uLocal_412[1]), 0, 1);
				_0xbdda142759307528(&(uLocal_412[1]));
				_0xbdda142759307528(&(uLocal_412[0]));
				func_216(&uLocal_523, 8);
				func_197(&uLocal_960);
				iLocal_873 = 1;
			}
			break;
		case 1:
			func_84(Global_35, &(uLocal_412[0]), &uLocal_836, 2000, 25);
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, 2000, 25);
			if (func_221(&uLocal_960) >= 5f || (get_entity_speed(&(uLocal_412[1])) <= 0.1f && is_ped_still(&(uLocal_412[1]))))
			{
				if (func_251())
				{
				}
				func_252();
				_0xdf94844d474f31e5(&(uLocal_412[1]));
				start_anim_scene(iVar401);
				func_197(&uLocal_897);
				iLocal_873 = 2;
			}
			break;
		case 2:
			if (func_221(&uLocal_897) >= func_253(1))
			{
			}
			if (_0x9aae3c1148a09bca(iVar401) || func_221(&uLocal_897) >= func_253(1))
			{
				if (iVar400 == 0)
				{
					func_254(0);
					func_83(&(uLocal_412[0]), Global_35, func_82(5), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				switch (iVar784)
				{
					case 0:
						if (!func_255())
						{
							func_256(1);
							func_257("HORSE_RACE_SPRINT_HELP", 10000, 0, 0, 0, 1);
						}
						break;
					case 1:
						if (!func_258())
						{
							func_259(1);
							func_257("HORSE_RACE_SPEED_HELP", 10000, 0, 0, 0, 1);
						}
						break;
					case 2:
						break;
				}
				func_67(11);
				iLocal_873 = 3;
			}
			break;
	}
}

void func_79()
{
	iLocal_14 = 1;
	func_84(Global_35, &(uLocal_412[0]), &uLocal_836, 1000, 50);
	func_87();
	func_250();
	if (does_blip_exist(iVar424))
	{
		remove_blip(&iLocal_426);
	}
	clear_gps_custom_route();
	clear_gps_multi_route();
	waypoint_recording_get_num_points(&(sLocal_529[iVar1014]), &iVar0);
	waypoint_recording_get_coord(&(sLocal_529[iVar1014]), (iVar0 - 1), &vVar1);
	if (is_entity_at_coord(&(uLocal_412[0]), vVar1, 20f, 20f, 10f, false, true, 0))
	{
		if (!is_entity_dead(&(uLocal_412[1])))
		{
			set_ped_max_move_blend_ratio(&(uLocal_412[1]), 1.5f);
		}
	}
	switch (iVar871)
	{
		case 0:
			func_84(Global_35, &(uLocal_412[0]), &uLocal_836, -1, 25);
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 25);
			if (func_228(&(uLocal_412[0]), vVar1, 1) <= 5f)
			{
				task_stand_still(&(uLocal_412[1]), -1);
				task_stand_still(&(uLocal_412[0]), -1);
				_set_anim_scene_playback_list_bool(iVar401, &(sLocal_525[1]), true);
				_0xba8818212633500a(&(uLocal_412[1]), 0, 1);
				_0xbdda142759307528(&(uLocal_412[0]));
				_0xbdda142759307528(&(uLocal_412[1]));
				func_216(&uLocal_523, 16);
				func_197(&uLocal_960);
				func_197(&uLocal_978);
				iLocal_873 = 1;
			}
			break;
		case 1:
			func_84(Global_35, &(uLocal_412[0]), &uLocal_836, 2000, 25);
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, 2000, 25);
			if (func_221(&uLocal_960) >= 8f || (get_entity_speed(&(uLocal_412[1])) <= 0.1f && is_ped_still(&(uLocal_412[1]))))
			{
				if (func_221(&uLocal_978) > 2f)
				{
					if (func_251())
					{
					}
					func_252();
					_0xdf94844d474f31e5(&(uLocal_412[1]));
					start_anim_scene(iVar401);
					func_197(&uLocal_897);
					iLocal_873 = 2;
				}
			}
			else
			{
				func_197(&uLocal_978);
			}
			break;
		case 2:
			if (func_221(&uLocal_897) >= func_253(0))
			{
				func_254(0);
				func_83(&(uLocal_412[0]), Global_35, func_82(6), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				_0xbdda142759307528(&(uLocal_412[1]));
				_0xbdda142759307528(&(uLocal_412[0]));
				func_67(11);
				iLocal_873 = 3;
			}
			break;
	}
}

void func_80()
{
	func_87();
	switch (iVar867)
	{
		case 0:
			iLocal_869 = 1;
			break;
		case 1:
			func_260();
			func_261();
			if (fVar1001 >= 0.91f)
			{
				remove_all_ped_weapons(&(uLocal_412[0]), true, true);
			}
			if (fVar1001 >= 0.99f)
			{
				_0xba8818212633500a(&(uLocal_412[1]), 0, 0);
			}
			if (_is_anim_scene_finished(iVar401, false))
			{
				func_194(&iLocal_428, 0);
				if (iVar886 == 0)
				{
					iLocal_1079 = func_1(3, 0, 0);
					func_223(Local_449[0], 0);
					func_223(Local_449[1], 0);
					func_86(Local_449[0], 1, 0);
					func_86(Local_449[1], 1, 0);
					Local_449[0]->f_13 = func_82(65);
					Local_449[1]->f_13 = func_82(66);
				}
				else
				{
					func_86(Local_449[0], 0, 0);
					func_86(Local_449[1], 0, 0);
				}
				iLocal_867 = 2;
				iLocal_869 = 2;
				set_ped_keep_task(&(uLocal_412[0]), true);
				func_262();
				freeze_entity_position(&(uLocal_412[1]), false);
				func_23(Global_1935630, 4);
				if (does_blip_exist(&(uLocal_419[0])))
				{
					remove_blip(uLocal_419[0]);
				}
			}
			break;
		case 2:
			if (!is_entity_dead(&(uLocal_412[0])))
			{
				set_ped_max_move_blend_ratio(&(uLocal_412[0]), 1.5f);
			}
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 1.5f, 1, -1f, 0);
			}
			if (func_19(&(uLocal_412[0]), 1, 0) <= 25f)
			{
				if (func_85(-4f, 1, &(uLocal_412[0]), 1) && func_85(-4f, 1, Global_35, 1))
				{
					if (func_198(&(uLocal_412[0]), Global_35, func_82(69), 3f, 0))
					{
						func_67(12);
					}
				}
			}
			else
			{
				func_67(12);
			}
			break;
	}
}

void func_81()
{
	iLocal_1033 = 1;
	func_17();
	func_23(Global_1935630, 4);
	clear_gps_custom_route();
	clear_gps_multi_route();
	remove_shocking_event(iVar783);
	display_radar(true);
	func_24(27);
	trigger_music_event("REHR_END");
	_0x96c7b659854de629(Global_35, &(uLocal_412[0]));
	_0x96c7b659854de629(Global_35, &(uLocal_412[1]));
	freeze_entity_position(&(uLocal_412[1]), false);
	if (does_blip_exist(&(uLocal_419[0])))
	{
		remove_blip(uLocal_419[0]);
	}
	if (does_blip_exist(iVar424))
	{
		remove_blip(&iLocal_426);
	}
	func_263(uLocal_412[0], &iLocal_428, &Local_449, 1, 1);
	func_194(&iLocal_428, 0);
	iLocal_1079 = func_1(3, 0, 0);
	iLocal_889 = 0;
	if (func_99(&(uLocal_412[1]), 0, 1))
	{
		_0xba8818212633500a(&(uLocal_412[1]), 0, 0);
	}
	if (!func_264())
	{
		if (_does_anim_scene_exist(iVar401))
		{
			if (_is_anim_scene_started(iVar401, false))
			{
				if (_0x3ab6c7b0bb0df4b1(&(uLocal_412[0]), iVar401))
				{
					set_anim_scene_rate(iVar401, 1.6f);
					stop_current_playing_speech(&(uLocal_412[0]), 0);
				}
			}
		}
	}
	if ((func_264() || fVar1001 >= 0.98f) || !_0x3ab6c7b0bb0df4b1(&(uLocal_412[0]), iVar401))
	{
		if (!is_ped_dead_or_dying(&(uLocal_412[0]), true))
		{
			if (iVar885 == 0)
			{
				if (!is_ped_ragdoll(&(uLocal_412[0])))
				{
					iLocal_887 = 1;
					func_254(0);
					func_83(&(uLocal_412[0]), Global_35, func_82(16), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			clear_ped_tasks(&(uLocal_412[0]), 1, 0);
			clear_ped_secondary_task(&(uLocal_412[0]));
			remove_anim_scene_entity(iVar401, "HORSE", &(uLocal_412[1]));
			if (func_265() == 0 && fVar1001 >= 0.98f)
			{
				if (!is_ped_on_mount(&(uLocal_412[0])))
				{
					_set_ped_on_mount(&(uLocal_412[0]), &(uLocal_412[1]), -1, true);
				}
			}
			clear_sequence_task(&uLocal_1009);
			open_sequence_task(&uLocal_1009);
			if (!func_240(&(uLocal_412[0]), &(uLocal_412[1]), 0))
			{
				task_mount_animal(0, &(uLocal_412[1]), -1, -1, 2f, 1, 0, 0);
			}
			_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, &(uLocal_412[1]));
			close_sequence_task(iVar1007);
			task_perform_sequence(&(uLocal_412[0]), iVar1007);
			clear_sequence_task(&uLocal_1009);
		}
		if (bVar1032)
		{
			if (iVar1033 == 0)
			{
				if (is_ped_dead_or_dying(&(uLocal_412[0]), true))
				{
					func_266(3, 0, 0, 0, &(uLocal_412[0]), 0, 1065353216, 0);
					iLocal_1035 = 1;
				}
			}
		}
		func_67(14);
	}
}

char* func_82(int iParam0)
{
	switch (iVar399)
	{
		case 1:
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_B";
					default:
						break;
				}
			}
			else if (iVar783 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_B";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_WON_B";
					case 7:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN_2ND_B_RESP";
					default:
						break;
				}
			}
			else if (iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_B";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V1_NOVICE_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V1_NOVICE_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iVar783 == 1 || iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V1_NOVICE_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V1_NOVICE_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 1:
				case 3:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V1_NOVICE_GOAL_C";
						case 9:
							return "RE_HR_UNI_V1_NOVICE_GOAL_B";
						default:
							break;
					}
					break;
				case 2:
				case 4:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V1_NOVICE_GOAL_A";
						case 9:
							return "RE_HR_UNI_V1_NOVICE_GOAL_D";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_B";
					case 67:
						return "VICTIMIZED_REACT";
					case 68:
						return "GENERIC_INSULT_MED_MALE";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_LOST_B";
					case 67:
						return "RESPONSE_C";
					case 68:
						return "RESPONSE_IDLING";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V1_NOVICE_LETS_GO";
				case 11:
					return "RE_HR_UNI_V1_NOVICE_OUTRO";
				case 12:
					return "RE_HR_UNI_V1_NOVICE_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_A";
				case 14:
					return "CUT_THAT_OUT";
				case 15:
					return "DEFUSE_RESPONSE";
				case 16:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_B";
				case 17:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V1_NOVICE_PASS_A";
				case 29:
					return "RE_HR_UNI_V1_NOVICE_PASS_B";
				case 30:
					return "RE_HR_UNI_V1_NOVICE_PASS_C";
				case 31:
					return "RE_HR_UNI_V1_NOVICE_PASS_D";
				case 32:
					return "RE_HR_UNI_V1_NOVICE_PASS_E";
				case 33:
					return "RE_HR_UNI_V1_NOVICE_PASS_F";
				case 34:
					return "RE_HR_UNI_V1_NOVICE_PASS_G";
				case 35:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V1_NOVICE_REACT_START";
				case 57:
					return "SHAME_ON_YOU";
				case 58:
					return "GENERIC_SHOCKED_MED";
				case 59:
					return "PLAYER_LOITERING";
				case 60:
					return "PLAYER_LOITERING";
				case 53:
					return "BLOCKED_GENERIC";
				case 54:
					return "PLAYER_ACTING_WEIRD";
				case 55:
					return "GENERIC_CURSE_HIGH";
				case 56:
					return "STOP_THAT";
				case 70:
					return "GENERIC_CURSE_MED";
				case 71:
					return "GENERIC_CURSE_HIGH";
				case 61:
					return "RE_HR_UNI_V1_NOVICE_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V1_NOVICE_ILO_REFUSE_B";
				case 63:
					return "GENERIC_THANKS_RESPONSE";
				case 64:
					return "RESPONSE_GENERIC";
				case 65:
					return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_B";
				case 67:
					return "VICTIMIZED_REACT";
				case 68:
					return "GENERIC_INSULT_MED_MALE";
				case 69:
					return "MINIGAME_LEAVE_NEUTRAL_GAME";
				case 72:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V1_NOVICE_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V1_NOVICE_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V1_NOVICE_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V1_NOVICE_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
		case 2:
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_B";
					default:
						break;
				}
			}
			else if (iVar783 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_B";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_WON_B";
					default:
						break;
				}
			}
			else if (iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_B";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iVar783 == 1 || iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 0:
				case 8:
				case 9:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_A_ALT";
						case 9:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_C";
						default:
							break;
					}
					break;
				case 10:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_B";
						case 9:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_D";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_B";
					case 67:
						return "RESPONSE_A";
					case 68:
						return "GENERIC_CURSE_MED";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_LOST_B";
					case 67:
						return "RESPONSE_C";
					case 68:
						return "RESPONSE_E";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V2_CONFIDENT_LETS_GO";
				case 11:
					return "RE_HR_UNI_V2_CONFIDENT_OUTRO";
				case 12:
					return "RE_HR_UNI_V2_CONFIDENT_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_B";
				case 14:
					return "PLAYER_WEAPON_EQUIPPED";
				case 16:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_A";
				case 17:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_A";
				case 29:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_B";
				case 30:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_C";
				case 31:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_D";
				case 32:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_E";
				case 33:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_F";
				case 34:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_G";
				case 35:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V2_CONFIDENT_REACT_START";
				case 57:
					return "STOP_THAT";
				case 58:
					return "CUT_THAT_OUT";
				case 59:
					return "SHAME_ON_YOU";
				case 60:
					return "PLAYER_LOITERING";
				case 53:
					return "BLOCKED_GENERIC";
				case 54:
					return "GENERIC_CURSE_MED";
				case 55:
					return "GENERIC_CURSE_HIGH";
				case 56:
					return "INSULT_RESPONSE";
				case 70:
					return "GENERIC_CURSE_MED";
				case 71:
					return "GENERIC_CURSE_HIGH";
				case 61:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_REFUSE_B";
				case 63:
					return "GENERIC_THANKS_RESPONSE";
				case 64:
					return "RESPONSE_GENERIC";
				case 65:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_B";
				case 67:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_C";
				case 68:
					return "GENERIC_CURSE_MED";
				case 69:
					return "GENERIC_GOODBYE";
				case 72:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
		case 0:
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_B";
					default:
						break;
				}
			}
			else if (iVar783 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_WON_B";
					default:
						break;
				}
			}
			else if (iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER_LOST";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iVar783 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V3_WEIRD_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V3_WEIRD_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iVar783 == 1 || iVar783 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V3_WEIRD_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V3_WEIRD_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 5:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_E";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_F";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_A";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_B";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_C";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_D";
						default:
							break;
					}
					break;
			}
			switch (Local_15.f_51.f_4)
			{
				case 5:
					switch (iParam0)
					{
						case 43:
							return "";
						case 44:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_B";
						case 45:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_C";
						case 46:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_D";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 47:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_E";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 48:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_F";
						case 49:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_G";
						case 50:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_H";
						case 51:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_I";
						case 52:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_J";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_B";
					case 67:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_C";
					case 68:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_D";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_B";
					case 67:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_C";
					case 68:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_D";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V3_WEIRD_LETS_GO";
				case 11:
					return "RE_HR_UNI_V3_WEIRD_OUTRO";
				case 12:
					return "RE_HR_UNI_V3_WEIRD_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_A";
				case 14:
					return "GUN_AVOID";
				case 16:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_B";
				case 17:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V3_WEIRD_PASS_A";
				case 29:
					return "RE_HR_UNI_V3_WEIRD_PASS_B";
				case 30:
					return "RE_HR_UNI_V3_WEIRD_PASS_C";
				case 31:
					return "RE_HR_UNI_V3_WEIRD_PASS_D";
				case 32:
					return "RE_HR_UNI_V3_WEIRD_PASS_E";
				case 33:
					return "RE_HR_UNI_V3_WEIRD_PASS_F";
				case 34:
					return "RE_HR_UNI_V3_WEIRD_PASS_G";
				case 35:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V3_WEIRD_REACT_START";
				case 57:
					return "RE_HR_UNI_V3_WEIRD_BUMP_A";
				case 58:
					return "RE_HR_UNI_V3_WEIRD_BUMP_B";
				case 59:
					return "RE_HR_UNI_V3_WEIRD_BUMP_C";
				case 60:
					return "RE_HR_UNI_V3_WEIRD_BUMP_D";
				case 53:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_A";
				case 54:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_B";
				case 55:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_C";
				case 56:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_D";
				case 70:
					return "";
				case 71:
					return "";
				case 61:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_B";
				case 63:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_C";
				case 64:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_D";
				case 65:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_B";
				case 67:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_C";
				case 68:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_D";
				case 69:
					return "GENERIC_GOODBYE";
				case 72:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V3_WEIRD_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V3_WEIRD_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V3_WEIRD_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V3_WEIRD_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
	}
	return "No dialogue line";
}

bool func_83(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_267(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_84(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_94(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		task_look_at_entity(iParam0, iParam1, iParam3, 2108, 51, 1);
	}
	else
	{
		task_clear_look_at(iParam0);
	}
}

bool func_85(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_268(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_269(fParam0))
	{
		return false;
	}
	return true;
}

void func_86(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_270(iParam0, 13))
	{
		func_271(iParam0, 0);
	}
	else
	{
		func_272(iParam0, 0);
	}
	if (func_273(iParam0->f_6))
	{
		if (bParam2)
		{
			func_274(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_87()
{
	if (iVar1009 < 7)
	{
		if (func_275(&(uLocal_412[0]), 0, &(Local_15.f_5), &uLocal_1015, 0, 0))
		{
			if (iVar1013 == 8)
			{
				if (iVar1027 == 0)
				{
					iLocal_1029 = 1;
					if (func_219(iVar521, 32))
					{
						iVar0 = 13;
					}
					else
					{
						iVar0 = 14;
					}
					func_254(0);
					clear_ped_secondary_task(&(uLocal_412[0]));
					func_83(&(uLocal_412[0]), Global_35, func_82(iVar0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1020 = 1;
					func_197(&uLocal_909);
				}
			}
			else
			{
				func_67(13);
			}
		}
		if (has_entity_been_damaged_by_entity(&(uLocal_412[1]), Global_35, 1, 1))
		{
			func_67(13);
		}
	}
	if (((_is_ped_lassoed(&(uLocal_412[0])) || _is_ped_hogtied(&(uLocal_412[0]))) || _is_ped_lassoed(&(uLocal_412[1]))) || _is_ped_hogtied(&(uLocal_412[1])))
	{
		func_67(13);
	}
	if (iVar1009 >= 7 || iVar1018 == 1)
	{
		if (!func_234())
		{
			if (!Local_15.f_46)
			{
				if (func_222(&uLocal_909))
				{
					if (func_221(&uLocal_909) >= 3f || iVar1013 != 8)
					{
						if (func_275(&(uLocal_412[0]), 0, &(Local_15.f_5), &uLocal_1015, 0, 0))
						{
							Local_15.f_46 = 1;
							if (iVar1013 == 2048 || iVar1013 == 2)
							{
								func_83(&(uLocal_412[0]), Global_35, func_82(42), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_67(13);
						}
						if (iVar1034 == 0)
						{
							func_83(&(uLocal_412[0]), Global_35, func_82(15), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1036 = 1;
						}
					}
				}
				else if (func_275(&(uLocal_412[0]), 0, &(Local_15.f_5), &uLocal_1015, 0, 0))
				{
					if (iVar1013 == 2048 || iVar1013 == 2)
					{
						func_83(&(uLocal_412[0]), Global_35, func_82(42), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					Local_15.f_46 = 1;
					func_67(13);
				}
			}
		}
	}
}

void func_88()
{
	if (is_entity_dead(&(uLocal_412[0])) || is_entity_dead(&(uLocal_412[1])))
	{
		return;
	}
	if (iVar1023 == 0 && iVar1009 == 8)
	{
		if ((_0x947e43f544b6ab34(&(uLocal_412[0]), player_id(), 1, 800) || _0x947e43f544b6ab34(&(uLocal_412[1]), player_id(), 1, 800)) && func_19(&(uLocal_412[0]), 1, 0) <= 2f)
		{
			if (!func_222(&uLocal_939) && (func_221(&uLocal_942) >= 3f || !func_222(&uLocal_942)))
			{
				func_276(&uLocal_939);
				func_197(&uLocal_942);
				func_277();
			}
		}
	}
	if (_0x947e43f544b6ab34(&(uLocal_412[0]), player_id(), 10, 800) || _0x947e43f544b6ab34(&(uLocal_412[1]), player_id(), 10, 800))
	{
		if (!func_222(&uLocal_936) && (func_221(&uLocal_933) >= 3f || !func_222(&uLocal_933)))
		{
			func_276(&uLocal_936);
			func_197(&uLocal_933);
			func_278();
		}
	}
}

bool func_89()
{
	if (!func_279(Global_1395482->f_1))
	{
		return false;
	}
	return func_280(Global_1395482->f_1, 32);
}

bool func_90(int iParam0)
{
	if (func_30(iParam0, 1))
	{
		return false;
	}
	return (1 == func_281(iParam0) || 2 == func_281(iParam0));
}

float func_91(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_92(int iParam0, int iParam1)
{
	iVar0 = func_136(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_2;
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

float func_94(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_95(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

int func_96()
{
	return Global_1572887->f_12;
}

char* func_97(int iParam0)
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

void func_98(int iParam0, int iParam1)
{
	if (!func_27(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_99(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_284(iParam0, iParam1);
}

void func_100(int iParam0, bool bParam1)
{
	if (func_99(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_285(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_101(var uParam0, var uParam1)
{
	if (func_30(uParam0->f_3, 16777216))
	{
		if (func_286(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_102(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_104(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_99(iParam0, 0, 1)))
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
			fVar2 = func_103(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_287(&iParam0);
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

void func_105(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_288(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_289(uParam0);
	func_290(uParam0);
	func_291(uParam0);
	if (!func_292(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_188(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_293();
	}
	if (!func_294(uParam0->f_3) && !func_30(uParam0->f_3, 256))
	{
		func_295(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_296(uParam0->f_173);
	func_296(uParam0->f_172);
}

void func_106(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_107(int iParam0, int iParam1)
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
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
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
			case 82:
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
			case 83:
				return -1752276745;
			case 84:
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
			case 85:
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
			case 86:
				return 1417655457;
			case 87:
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
			case 88:
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
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
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
			case 94:
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
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
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
			case 97:
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
			case 98:
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
			case 99:
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
			case 100:
				return -307424281;
			case 101:
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
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
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
			case 105:
				return 1152564685;
			case 106:
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
			case 107:
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
			case 108:
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
			case 109:
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
			case 110:
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
			case 111:
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
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
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
			case 115:
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
			case 116:
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
			case 117:
				return -689015496;
			case 118:
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

void func_108(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_96() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 16384);
	}
	else
	{
		func_56(&(uParam0->f_1), 16384);
	}
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 2048);
	}
	else
	{
		func_56(&(uParam0->f_1), 2048);
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 256);
	}
	else
	{
		func_56(&(uParam0->f_1), 256);
	}
}

void func_112(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 16);
	}
	else
	{
		func_297(iParam0, 67108864);
		func_297(iParam0, 16);
	}
}

void func_113(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(iParam0->f_1), 128);
	}
	else
	{
		func_56(&(iParam0->f_1), 128);
	}
}

void func_114(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 256);
	}
	else
	{
		func_297(iParam0, 256);
	}
}

void func_115(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_56(iParam0, 268435456);
	}
	else
	{
		func_297(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_56(iParam0, 1073741824);
	}
	else
	{
		func_297(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_56(iParam0, 536870912);
	}
	else
	{
		func_297(iParam0, 536870912);
	}
}

var func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_117(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_298(sParam1));
}

Vector3 func_118(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_27(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_299(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_300(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_119(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_30(iParam0, 32))
	{
		if (func_301(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_302(Global_35, &(uParam1->f_12)) };
				if (!func_123(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_303(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_189(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_190());
		if (func_304(Global_1310750[iParam0], 33554432))
		{
			func_192(iVar0, func_191(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_192(iVar0, func_191(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_30(iParam0, 1))
		{
			func_305(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_306(iParam0);
}

bool func_120(int iParam0, var uParam1)
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
			func_307(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_57(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_308(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_308(iParam0));
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

void func_121(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_309(iParam0))
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
			if (!func_30(iParam0, 1))
			{
				if (func_57(iParam0, 2))
				{
				}
			}
			func_310(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_311(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_311(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_90(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_122(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_299(iParam1))
	{
		if (!func_312(iParam1, iVar0))
		{
			vVar4 = { func_118(iParam1, iVar0) };
			if (!func_123(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_128(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_313(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_123(vVar4))
	{
	}
	return vVar1;
}

bool func_123(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_26("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_125(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_299(iParam0))
	{
		vVar1 = { func_118(iParam0, iVar0) };
		if (func_314(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_126(var uParam0)
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

bool func_127(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_315(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_316(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_123(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_317(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return true;
				}
			}
			iVar0++;
		}
	}
	return func_124(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_128(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_121(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_30(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_129(var uParam0, bool bParam1)
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

bool func_130(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_318(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_319(iParam0, uParam2))
	{
		return false;
	}
	if (!func_320(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_321(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_131(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_132(int iParam0, int iParam1, var uParam2)
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

void func_133(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_134(int iParam0, int iParam1)
{
	if (func_322(iParam0))
	{
		return;
	}
	if (func_323(iParam0) == iParam1)
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

void func_135(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_297(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_136(int iParam0, int iParam1)
{
	iVar1 = func_324(iParam0, iParam1);
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

void func_137(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

int func_138(int iParam0)
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

int func_139(bool bParam0)
{
	if (bParam0)
	{
		return func_325(Global_1359489->f_4);
	}
	get_group_size(func_326(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_326(), iVar3);
		if (func_327(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_140(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

void func_141(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_273(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_328(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_329(iParam0->f_6, iParam0->f_5, 0);
			}
			func_330(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_224(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_142(var uParam0)
{
	if (!func_331(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_331(uParam0->f_12))
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

bool func_143()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_144(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_332(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_333(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_334(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_335(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_336(uParam0->f_11, 0);
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
					Var2 = { func_332(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_333(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_337(&(uParam0->f_22)));
					Var2 = { func_332(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_333(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_334(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_338(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_339(*uParam1, &(uParam0->f_23), 0);
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

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 8);
	}
	else
	{
		func_56(&(uParam0->f_1), 8);
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 2);
	}
	else
	{
		func_56(&(uParam0->f_1), 2);
	}
}

void func_147(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 524288);
	}
	else
	{
		func_297(iParam0, 524288);
	}
}

void func_148(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_340(uParam0, iParam1, iParam3);
	func_341(uParam0, iParam2, iParam3);
}

bool func_149(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_342(iParam0);
		return func_343(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_342(iParam0);
		func_343(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_151(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_152(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_344(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

float func_153(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_345(vVar0, vVar3, iParam2);
}

void func_154(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 3:
			*uParam1 = _create_volume_box(*vLocal_501[3], 0f, 0f, 47f, 26f, 12f, 13f);
			break;
		case 4:
			*uParam1 = _create_volume_box(*vLocal_501[4], 0f, 0f, 20f, 36f, 13f, 6f);
			break;
		case 0:
			*uParam1 = _create_volume_box(*vLocal_501[0], 0f, 0f, -35f, 20.75f, 10.25f, 13.5f);
			break;
		case 2:
			*uParam1 = _create_volume_box(*vLocal_501[2], 0f, 0f, 0f, 18f, 18f, 10f);
			break;
		case 1:
			*uParam1 = _create_volume_box(*vLocal_501[1], 0f, 0f, 0f, 18f, 18f, 10f);
			break;
		case 5:
			*uParam1 = _create_volume_box(*vLocal_501[5], 0f, 0f, 0f, 18f, 18f, 5f);
			break;
		case 6:
			*uParam1 = _create_volume_box(*vLocal_501[6], 0f, 0f, 0f, 18f, 18f, 5f);
			break;
	}
}

int func_155(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9, int iParam10, int iParam11)
{
	vVar1 = { func_346(vParam0, vParam3, iParam10) };
	vVar4 = { func_347(vParam0, vParam3, iParam10) };
	func_348(vParam6, uParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

Vector3 func_156(var uParam0)
{
	return uParam0->f_51;
}

void func_157(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_158()
{
	return &Global_1935436 == 2;
}

void func_159(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_160(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_30(iParam0, 2))
	{
		func_350(iParam0, func_349(iParam1));
	}
	else
	{
		func_352(iParam0, func_351());
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
	func_353(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_354(iParam0, 0);
	func_355(iParam0);
	func_356(1);
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
	if (!func_30(iParam0, 16))
	{
		func_161(iParam0, 0, 0, 0, 0);
	}
}

void func_161(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_357() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_27(iVar1) && !func_30(iVar1, iParam2)) && (!bParam3 || !func_178(iVar1))) && (!bParam4 || !func_358(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_359(iVar0);
			}
		}
		iVar0++;
	}
}

int func_162(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_163(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_304(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_30(uParam0->f_3, 1073741824))
			{
				func_360(2, -1, 0, 0, 0);
			}
			else
			{
				func_360(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_360(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_361(1, uParam0->f_177))
				{
					func_362(16, uParam0->f_177);
					func_363(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_364(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_360(8, -1, 0, 0, 0);
	}
}

int func_164()
{
	if (func_365(Global_1935630->f_44))
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
		else if (func_366())
		{
			return 1;
		}
	}
	return 0;
}

bool func_165(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_166(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_30(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_30(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_30(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_30(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_30(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_30(uParam0->f_3, 1))
		{
		}
		else if (func_30(uParam0->f_3, 2))
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

int func_167(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_367(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_368(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_369() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_168(var uParam0, int iParam1, float fParam2)
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
	func_59(uParam0);
	return true;
}

bool func_169()
{
	return (Global_1894899 & 1 != 0 && func_181() != -1);
}

bool func_170(var uParam0, float fParam1)
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

bool func_171(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_370(bParam1, bParam2, bParam3);
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

bool func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_372(func_371());
	if (func_4(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_4(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_4(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_4(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_4(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_4(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_4(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_4(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_4(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_4(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_4(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_4(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_4(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_4(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_4(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_4(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_4(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_173(int iParam0, int iParam1)
{
	return (func_162(iParam0) && iParam1) != 0;
}

bool func_174(int iParam0)
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
	if (iParam0 & 1 == 1 && func_373(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_374(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_375(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_376(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_377(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_378(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_379(iVar3))
	{
		return true;
	}
	return false;
}

bool func_175(bool bParam0)
{
	if (func_380(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_176(int iParam0)
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

bool func_177(int iParam0, bool bParam1, bool bParam2)
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
		if (func_381())
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
		iVar0 = func_382(&(Global_1898164->f_1[0]));
		if (func_383(iVar0) && func_384((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_385(&(Global_1898164->f_1[0])))
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

bool func_178(int iParam0)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	if (func_386(64) && func_387(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_179(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_388(iVar0) || func_389(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_180()
{
	return Global_1894899 & 4 != 0;
}

int func_181()
{
	return Global_1894899->f_2;
}

int func_182(int iParam0)
{
	if (!func_390(iParam0))
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

bool func_183(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_184(vector3 vParam0, int iParam3)
{
	if (!func_183(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_185(vector3 vParam0)
{
	if (func_123(vParam0))
	{
		return false;
	}
	fVar0 = func_103(func_169(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_186(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_197(uParam0);
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
		func_197(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_222(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_391(uParam0, fParam2))
		{
			return true;
		}
		if (func_222(uParam0))
		{
			func_276(uParam0);
		}
	}
	return false;
}

bool func_187(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_188(vector3 vParam0, int iParam3)
{
	if (func_123(vParam0))
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
			if (func_314(vVar2, vParam0, 2f, 1))
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

float func_189(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 0f;
	}
	if (!func_392(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_190()
{
	return "unnamed";
}

char* func_191(int iParam0)
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

int func_192(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_305(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_393(&iVar0);
	if (func_4(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_394(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_4(iVar0, 134217728))
	{
		func_395(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_396(558))
				{
					func_397(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_194(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_276(&(iParam0->f_18));
}

bool func_195(int iParam0)
{
	if (absi((iVar996 - iVar995)) > iParam0)
	{
		return true;
	}
	return false;
}

bool func_196()
{
	if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
	{
		waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(Global_35, true, false), &uLocal_998);
		waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(&(uLocal_412[0]), true, false), &uLocal_999);
		if (iVar996 >= iVar997)
		{
			return true;
		}
	}
	return false;
}

void func_197(var uParam0)
{
	func_398(uParam0, 0f);
}

bool func_198(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	if (!func_222(&uLocal_924))
	{
		func_197(&uLocal_924);
	}
	else if (func_221(&uLocal_924) > fParam3)
	{
		func_254(0);
		if (bParam4)
		{
			func_83(iParam0, iParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			func_83(iParam0, iParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_276(&uLocal_924);
		return true;
	}
	return false;
}

bool func_199(int iParam0)
{
	if (iVar399 == 1)
	{
		if ((((((is_entity_playing_anim(iParam0, &(Local_737[0]), Local_737[0]->f_1, 1) || is_entity_playing_anim(iParam0, &(Local_737[1]), Local_737[1]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[2]), Local_737[2]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[3]), Local_737[3]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[4]), Local_737[4]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[5]), Local_737[5]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[6]), Local_737[6]->f_1, 1))
		{
			return true;
		}
	}
	else if (iVar399 == 0)
	{
		if (((is_entity_playing_anim(iParam0, &(Local_737[7]), Local_737[7]->f_1, 1) || is_entity_playing_anim(iParam0, &(Local_737[8]), Local_737[8]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[9]), Local_737[9]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[10]), Local_737[10]->f_1, 1))
		{
			return true;
		}
	}
	else if (iVar399 == 2)
	{
		if (((is_entity_playing_anim(iParam0, &(Local_737[14]), Local_737[14]->f_1, 1) || is_entity_playing_anim(iParam0, &(Local_737[15]), Local_737[15]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[16]), Local_737[16]->f_1, 1)) || is_entity_playing_anim(iParam0, &(Local_737[17]), Local_737[17]->f_1, 1))
		{
			return true;
		}
	}
	return false;
}

int func_200()
{
	if (iVar400 == 1)
	{
		iVar0 = get_random_int_in_range(0, 7);
	}
	else if (iVar400 == 0)
	{
		iVar0 = get_random_int_in_range(7, 11);
	}
	else if (iVar400 == 2)
	{
		iVar0 = get_random_int_in_range(14, 18);
	}
	return iVar0;
}

bool func_201(int iParam0)
{
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

int func_202(int iParam0)
{
	if (iParam0 == 8)
	{
		return 11;
	}
	else if (iParam0 == 9)
	{
		return 12;
	}
	else if (iParam0 == 10)
	{
		return 13;
	}
	return 8;
}

void func_203()
{
	if (is_scripted_speech_playing(Global_35) || is_scripted_speech_playing(&(uLocal_412[0])))
	{
		func_84(&(uLocal_412[0]), Global_35, &uLocal_836, 1000, 15);
		func_84(Global_35, &(uLocal_412[0]), &uLocal_836, 1000, 15);
	}
	else
	{
		func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 15);
	}
}

void func_204()
{
	if ((has_entity_clear_los_to_entity_in_front(&(uLocal_412[0]), Global_35, 17) || is_ped_facing_ped(&(uLocal_412[0]), Global_35, 100f)) || func_19(&(uLocal_412[0]), 1, 1) <= 10f)
	{
		func_399(&(Local_15.f_5), 1);
		func_400(&(Local_15.f_5), 1);
	}
}

void func_205()
{
	iVar0 = 0;
	waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(&(uLocal_412[0]), true, false), &iVar0);
	waypoint_recording_get_coord(&(sLocal_529[iVar1014]), iVar0, &vVar1);
	if (get_distance_between_coords(get_entity_coords(&(uLocal_412[0]), true, false), vVar1, true) >= 145f)
	{
		func_67(15);
	}
}

bool func_206(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_207(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_166(uParam0, bVar1);
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
	if (uParam0->f_178 && func_164())
	{
		bVar1 = true;
		fVar3 = func_103(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_167(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_167(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_168(&(uParam0->f_121), iParam4, fParam1))
		{
			func_59(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_107(uParam0->f_3, uParam0->f_185), 0);
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
						func_58(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_59(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_107(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_208()
{
	switch (iVar861)
	{
		case 0:
			if (func_19(&(uLocal_412[0]), 1, 0) <= func_401())
			{
				func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 50);
				iLocal_863 = 1;
			}
			break;
		case 1:
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, -1, 50);
			if (is_ped_facing_ped(&(uLocal_412[0]), Global_35, 100f))
			{
				iLocal_1021 = 1;
			}
			if (func_19(&(uLocal_412[0]), 1, 0) <= 12f && is_ped_headtracking_ped(&(uLocal_412[0]), Global_35))
			{
				iLocal_1021 = 1;
			}
			if (iVar1019 == 1)
			{
				if (!func_402(&(uLocal_412[0]), 1682639051))
				{
					func_403(&(uLocal_412[0]), Global_35, &uLocal_1039, 3f, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 3f, 4f, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				}
				if (!func_222(&uLocal_915))
				{
					func_197(&uLocal_915);
				}
				else if (func_221(&uLocal_915) >= 1f)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_209(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_210()
{
	if (func_99(&(uLocal_412[0]), 0, 1))
	{
		if (func_94(&(uLocal_412[0]), Global_35, 1, 0) < 6f || !func_404())
		{
			if (!func_402(&(uLocal_412[0]), -875674219))
			{
				task_turn_ped_to_face_entity(&(uLocal_412[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			if (!func_402(&(uLocal_412[0]), 1682639051))
			{
				func_403(&(uLocal_412[0]), Global_35, &uLocal_1039, -1082130432, 0, 0, -1082130432, 3f, 1, 512, 0, 0, 3f, 4f, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			}
			func_405(&(uLocal_412[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		}
	}
}

int func_211()
{
	if (func_219(iVar521, 4))
	{
		if (!func_222(&uLocal_963))
		{
			func_197(&uLocal_963);
		}
	}
	if (func_221(&uLocal_963) < 8f)
	{
		return 0;
	}
	if ((func_19(&(uLocal_412[0]), 1, 0) >= 30f && func_219(iVar521, 1)) && !is_ped_facing_ped(Global_35, &(uLocal_412[0]), 80f))
	{
		func_67(5);
		return 1;
	}
	return 0;
}

void func_212()
{
	if (!func_222(&uLocal_969) && func_219(iVar521, 1))
	{
		func_197(&uLocal_969);
	}
	if (func_221(&uLocal_969) >= 1f && func_221(&uLocal_969) <= 6f)
	{
		if (is_ped_on_mount(Global_35) && !is_entity_dead(iVar1008))
		{
			set_ped_max_move_blend_ratio(iVar1008, 1.5f);
		}
	}
}

void func_213(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		if (func_406(uParam0, 64))
		{
			func_274(&(uParam1->f_5), 1, 1);
			func_407(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!is_entity_on_screen(iParam2))
			{
				if (!func_406(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = func_408("BEAT_RESPOND", 1644850270, iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					}
					func_197(uParam1);
					func_409(uParam0, 64);
				}
			}
			else if (func_222(uParam1) && func_410(uParam1) > 6f)
			{
				if (func_406(uParam0, 64))
				{
					func_274(&(uParam1->f_5), 1, 1);
					func_407(uParam0, 64);
				}
			}
		}
		else if (!func_406(uParam0, 64))
		{
			func_409(uParam0, 64);
		}
	}
	else if (!func_406(uParam0, 64))
	{
		func_409(uParam0, 64);
	}
	if (func_406(uParam0, 64))
	{
		func_411(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

void func_214()
{
	switch (iVar990)
	{
		case 0:
			if (func_85(-4f, 1, 0, 0))
			{
				func_83(&(uLocal_412[0]), Global_35, func_82(0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_218(2001176446, &(uLocal_412[0]), 1);
				func_216(&uLocal_523, 1);
				func_197(&uLocal_975);
				iLocal_992 = 2;
			}
			break;
		case 1:
			break;
		case 2:
			if (((func_85(-4f, 1, &(uLocal_412[0]), 1) && func_85(-4f, 1, Global_35, 1)) && func_215()) && (func_221(&uLocal_975) > 3.5f || iVar400 != 0))
			{
				iLocal_1033 = 1;
				func_83(&(uLocal_412[0]), Global_35, func_82(1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_218(2001176446, &(uLocal_412[0]), 1);
				iLocal_992 = iVar990 + 1;
			}
			break;
		case 3:
			if (func_85(-4f, 1, &(uLocal_412[0]), 1))
			{
				func_67(3);
				iLocal_992 = iVar990 + 1;
			}
			break;
	}
}

bool func_215()
{
	if (iVar400 == 0)
	{
		fVar0 = 5.5f;
	}
	else if (iVar400 == 2)
	{
		fVar0 = 4f;
	}
	else if (iVar400 == 1)
	{
		fVar0 = 4f;
	}
	if (!func_222(&uLocal_909))
	{
		return true;
	}
	if (func_222(&uLocal_909))
	{
		if (func_221(&uLocal_909) >= fVar0)
		{
			return true;
		}
	}
	return false;
}

void func_216(var uParam0, int iParam1)
{
	func_412(uParam0, iParam1);
}

bool func_217()
{
	if (!is_ped_on_mount(Global_35))
	{
		_0xf60165e1d2c5370b(Global_35, &uVar0, &fVar1);
	}
	else
	{
		_0xf60165e1d2c5370b(get_mount(Global_35), &uVar0, &fVar1);
	}
	if (!is_ped_facing_ped(player_ped_id(), &(uLocal_412[0]), 80f) && fVar1 >= 1f)
	{
		return true;
	}
	return false;
}

void func_218(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_219(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_220()
{
	if (func_19(&(uLocal_412[0]), 1, 1) <= 15f)
	{
		return true;
	}
	if (!func_222(&uLocal_972))
	{
		func_197(&uLocal_972);
	}
	else if (func_221(&uLocal_972) >= 5f)
	{
		return true;
	}
	return false;
}

float func_221(var uParam0)
{
	if (!func_222(uParam0))
	{
		return 0f;
	}
	if (func_413(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_369() - uParam0->f_1);
}

bool func_222(var uParam0)
{
	return func_414(*uParam0, 1);
}

void func_223(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_270(iParam0, 4))
		{
			func_274(&(iParam0->f_6), 1, 1);
			func_271(iParam0, 4);
		}
	}
	else if (func_270(iParam0, 4))
	{
		func_272(iParam0, 4);
		func_271(iParam0, 14);
	}
}

void func_224(int* iParam0, char* sParam1)
{
	if (func_273(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_329(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_272(iParam0, 1);
}

void func_225()
{
	switch (iVar989)
	{
		case 0:
			if (func_85(-4f, 1, &(uLocal_412[0]), 1))
			{
				func_83(&(uLocal_412[0]), Global_35, func_82(40), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_991 = iVar989 + 1;
			}
			break;
		case 1:
			if (func_85(-4f, 1, &(uLocal_412[0]), 1))
			{
				if (!func_222(&uLocal_966))
				{
					func_197(&uLocal_966);
				}
			}
			if (func_221(&uLocal_966) >= 2f)
			{
				func_83(&(uLocal_412[0]), Global_35, func_82(41), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_276(&uLocal_966);
				uLocal_991 = iVar989 + 1;
			}
			break;
		case 2:
			if (func_85(-4f, 1, &(uLocal_412[0]), 1))
			{
				if (!func_222(&uLocal_966))
				{
					func_197(&uLocal_966);
				}
			}
			if (func_221(&uLocal_966) >= 3f)
			{
				uLocal_991 = iVar989 + 1;
				func_67(5);
			}
			break;
	}
}

void func_226()
{
	clear_sequence_task(&uLocal_1009);
	open_sequence_task(&uLocal_1009);
	if (!is_ped_on_mount(&(uLocal_412[0])))
	{
		task_mount_animal(0, &(uLocal_412[1]), -1, -1, 1f, 1, 0, 0);
	}
	_task_move_in_traffic(0, 0.8f, 1552, 0);
	close_sequence_task(iVar1007);
	task_perform_sequence(&(uLocal_412[0]), iVar1007);
	clear_sequence_task(&uLocal_1009);
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_228(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_229(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

void func_230()
{
	waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(&(uLocal_412[0]), true, false), &iVar6);
	waypoint_recording_get_coord(&(sLocal_529[iVar1014]), iVar6, &vVar0);
	get_closest_vehicle_node(vVar0, &vVar3, 1, 3f, 0f);
	clear_sequence_task(&uLocal_1009);
	open_sequence_task(&uLocal_1009);
	if (get_distance_between_coords(vVar3, get_entity_coords(&(uLocal_412[0]), true, false), true) > 10f)
	{
		task_follow_nav_mesh_to_coord(0, vVar3, 2f, -1, 0.25f, 1048576, 40000f);
	}
	task_follow_waypoint_recording(0, &(sLocal_529[iVar1014]), 0, 67139080, -1, 0, 0, -1);
	close_sequence_task(iVar1007);
	task_perform_sequence(&(uLocal_412[0]), iVar1007);
	clear_sequence_task(&uLocal_1009);
}

void func_231()
{
	switch (iVar400)
	{
		case 0:
			_0xdf7b5144e25cd3fe(uVar401, "weird_win_01");
			_0xdf7b5144e25cd3fe(uVar401, "weird_loss_01");
			_0xdf7b5144e25cd3fe(uVar401, "weird_win_02");
			_0xdf7b5144e25cd3fe(uVar401, "weird_loss_02");
			break;
		case 2:
			_0xdf7b5144e25cd3fe(uVar401, "confident_loss_01");
			_0xdf7b5144e25cd3fe(uVar401, "confident_win_01");
			_0xdf7b5144e25cd3fe(uVar401, "confident_loss_02");
			_0xdf7b5144e25cd3fe(uVar401, "confident_win_02");
			break;
		case 1:
			_0xdf7b5144e25cd3fe(uVar401, "PBL_LOSS_01");
			_0xdf7b5144e25cd3fe(uVar401, "PBL_LOSS_02");
			_0xdf7b5144e25cd3fe(uVar401, "PBL_WIN_01");
			_0xdf7b5144e25cd3fe(uVar401, "PBL_WIN_02");
			break;
	}
}

void func_232()
{
	iVar0 = 0;
	waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(Global_35, true, false), &iVar0);
	waypoint_recording_get_coord(&(sLocal_529[iVar1014]), iVar0, &vLocal_1006);
	if (get_distance_between_coords(get_entity_coords(Global_35, true, false), vLocal_1006, true) >= (fVar1002 + 100f) && !is_ped_heading_towards_position(Global_35, *vLocal_501[iVar1016], 80f))
	{
		func_249("HORSE_RACE_DISTANCE_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (is_entity_dead(iVar1008))
	{
		func_249("HORSE_RACE_HORSE1_DEAD_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (is_entity_dead(&(uLocal_412[1])))
	{
		func_249("HORSE_RACE_HORSE2_DEAD_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (!func_222(&uLocal_918))
	{
		func_197(&uLocal_918);
	}
	else if (func_221(&uLocal_918) >= fVar788)
	{
		func_249("HORSE_RACE_TIMEOUT_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
}

void func_233()
{
	switch (Local_15.f_51.f_4)
	{
		case 5:
			if (iVar993 != 4)
			{
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[0], 3f, 3f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_1026 = 1;
					iLocal_995 = 0;
					iLocal_996 = 0;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[1], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 1;
					iLocal_996 = 1;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[2], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 2;
					iLocal_996 = 2;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[3], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 3;
					iLocal_996 = 3;
				}
			}
			switch (iVar993)
			{
				case 0:
					if (iVar1020 == 1)
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(43), 4.5f, 0))
						{
							iLocal_1022 = 0;
							iLocal_1026 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 1:
					if (iVar1020 == 1)
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(44), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 2:
					if (iVar1020 == 1)
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(45), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 3:
					if (iVar1020 == 1)
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(46), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 4:
					if (iVar994 < 10)
					{
						if (!is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[iVar994], 6f, 6f, 5f, false, true, 0))
						{
							iLocal_995 = 0;
						}
					}
					break;
			}
			break;
		case 6:
			switch (iVar993)
			{
				case 0:
					if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[0], 5f, 5f, 5f, false, true, 0))
					{
						iLocal_1022 = 1;
					}
					if (iVar1020 == 1)
					{
						if (func_198(&(uLocal_412[0]), Global_35, func_82(47), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = iVar993 + 1;
						}
					}
					break;
			}
			break;
		case 7:
			if (iVar993 != 5)
			{
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[0], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 0;
					iLocal_996 = 0;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[1], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 1;
					iLocal_996 = 1;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[2], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 2;
					iLocal_996 = 2;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[3], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 3;
					iLocal_996 = 3;
				}
				if (is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[4], 5f, 5f, 5f, false, true, 0) && is_entity_at_coord(iVar409, *vLocal_802[4], 15f, 15f, 10f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 4;
					iLocal_996 = 4;
				}
			}
			switch (iVar993)
			{
				case 0:
					if (iVar1020 == 1)
					{
						if (func_85(-4f, 1, &(uLocal_412[0]), 1))
						{
							if (func_83(&(uLocal_412[0]), Global_35, func_82(48), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 1:
					if (iVar1020 == 1)
					{
						if (func_85(-4f, 1, &(uLocal_412[0]), 1))
						{
							if (func_83(&(uLocal_412[0]), Global_35, func_82(49), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 2:
					if (iVar1020 == 1)
					{
						if (func_85(-4f, 1, &(uLocal_412[0]), 1))
						{
							if (func_83(&(uLocal_412[0]), Global_35, func_82(50), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 3:
					if (iVar1020 == 1)
					{
						if (func_85(-4f, 1, &(uLocal_412[0]), 1))
						{
							if (func_83(&(uLocal_412[0]), Global_35, func_82(51), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 4:
					if (iVar1020 == 1)
					{
						if (func_85(-4f, 1, &(uLocal_412[0]), 1))
						{
							if (func_83(&(uLocal_412[0]), Global_35, func_82(52), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 5:
					if (iVar994 < 10)
					{
						if (!is_entity_at_coord(&(uLocal_412[0]), *vLocal_802[iVar994], 5f, 5f, 5f, false, true, 0))
						{
							iLocal_995 = 0;
						}
					}
					break;
			}
			break;
	}
}

bool func_234()
{
	switch (iVar869)
	{
		case 0:
			if (is_ped_on_mount(Global_35))
			{
				if (get_melee_target_for_ped(Global_35) == &uLocal_412[0])
				{
					if (_0x6127f25ed21c533c(Global_35) >= 0.6f)
					{
						func_254(0);
						if (iVar400 == 1)
						{
							func_83(&(uLocal_412[0]), Global_35, func_82(56), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iVar400 == 2)
						{
							func_83(&(uLocal_412[0]), Global_35, func_82(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iVar400 == 0)
						{
							func_83(&(uLocal_412[0]), Global_35, func_82(57), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						set_ped_reset_flag(&(uLocal_412[1]), 91, false);
						func_197(&uLocal_954);
						clear_ped_tasks(&(uLocal_412[0]), 1, 0);
						func_230();
						if (is_ped_dead_or_dying(&(uLocal_412[0]), true))
						{
							if (iVar1033 == 0)
							{
								func_266(3, 0, 0, 0, &(uLocal_412[0]), 0, 1065353216, 0);
								iLocal_1035 = 1;
							}
						}
						else
						{
							func_266(1, 0, 0, "RE_HONOR_CHEATED", &(uLocal_412[0]), 0, 1065353216, 0);
						}
						iLocal_871 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_221(&uLocal_954) >= 4f)
			{
				if (is_ped_on_mount(Global_35))
				{
					if (get_melee_target_for_ped(Global_35) == &uLocal_412[0])
					{
						if (_0x6127f25ed21c533c(Global_35) >= 0.6f)
						{
							func_254(0);
							func_83(&(uLocal_412[0]), Global_35, func_82(42), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_871 = 2;
							func_67(13);
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_235()
{
	set_ped_reset_flag(&(uLocal_412[1]), 317, true);
	if (!func_222(&uLocal_981))
	{
		if (is_ped_on_mount(&(uLocal_412[0])) && get_entity_speed(&(uLocal_412[0])) < 0.5f)
		{
			func_197(&uLocal_981);
		}
	}
	else if (get_entity_speed(&(uLocal_412[0])) < 0.5f)
	{
		if (func_391(&uLocal_981, 10f) && is_ped_on_mount(&(uLocal_412[0])))
		{
			clear_ped_tasks(&(uLocal_412[0]), 1, 0);
			clear_ped_tasks(&(uLocal_412[1]), 1, 0);
			task_follow_waypoint_recording(&(uLocal_412[0]), &(sLocal_529[iVar1014]), 0, 67139080, -1, 0, 0, -1);
			func_276(&uLocal_981);
		}
	}
	else
	{
		func_276(&uLocal_981);
	}
}

void func_236()
{
	switch (iVar870)
	{
		case 0:
			func_84(&(uLocal_412[0]), Global_35, &uLocal_836, 3000, 50);
			if (!func_222(&uLocal_957))
			{
				func_197(&uLocal_957);
			}
			else if (func_221(&uLocal_957) >= 2f)
			{
				if (!func_196())
				{
					iLocal_872 = 1;
				}
			}
			break;
		case 1:
			func_83(&(uLocal_412[0]), Global_35, func_82(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iVar0 = get_random_int_in_range(18, 23);
			iVar1 = get_random_int_in_range(0, 101);
			if (iVar1 <= 25)
			{
				iVar0 = 18;
			}
			if (iVar1 <= 50 && iVar1 > 25)
			{
				if (func_415() == 1)
				{
					iVar0 = 20;
				}
				else
				{
					iVar0 = 22;
				}
			}
			task_play_anim(&(uLocal_412[0]), &(Local_737[iVar0]), Local_737[iVar0]->f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
			func_197(&uLocal_957);
			iLocal_872 = 2;
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 1.5f, 1, 0.4f, 0);
			}
			if (func_221(&uLocal_957) >= 3f)
			{
				iLocal_872 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_237()
{
	switch (iVar862)
	{
		case 0:
			task_start_scenario_at_position(&(uLocal_412[2]), iVar786, get_entity_coords(&(uLocal_412[2]), true, false), get_entity_heading(&(uLocal_412[2])), 0, false, true, 0, -1f, false);
			task_start_scenario_at_position(&(uLocal_412[3]), iVar786, get_entity_coords(&(uLocal_412[3]), true, false), get_entity_heading(&(uLocal_412[3])), 0, false, true, 0, -1f, false);
			task_start_scenario_at_position(&(uLocal_412[4]), iVar786, get_entity_coords(&(uLocal_412[4]), true, false), get_entity_heading(&(uLocal_412[4])), 0, false, true, 0, -1f, false);
			task_start_scenario_at_position(&(uLocal_412[5]), iVar786, get_entity_coords(&(uLocal_412[5]), true, false), get_entity_heading(&(uLocal_412[5])), 0, false, true, 0, -1f, false);
			iLocal_864 = 1;
			break;
		case 1:
			if (func_94(&(uLocal_412[0]), &(uLocal_412[2]), 1, 0) <= IntToFloat(iVar785))
			{
				iLocal_864 = 2;
			}
			break;
		case 2:
			clear_sequence_task(uVar0[0]);
			open_sequence_task(uVar0[0]);
			task_follow_nav_mesh_to_coord(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			_task_smart_flee_style_ped(0, Global_35, 4, 512, -1082130432, -1, 0);
			close_sequence_task(&(uVar0[0]));
			task_perform_sequence(&(uLocal_412[2]), &(uVar0[0]));
			clear_sequence_task(uVar0[0]);
			clear_sequence_task(uVar0[1]);
			open_sequence_task(uVar0[1]);
			task_follow_nav_mesh_to_coord(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			_task_smart_flee_style_ped(0, Global_35, 4, 512, -1082130432, -1, 0);
			close_sequence_task(&(uVar0[1]));
			task_perform_sequence(&(uLocal_412[3]), &(uVar0[1]));
			clear_sequence_task(uVar0[1]);
			clear_sequence_task(uVar0[2]);
			open_sequence_task(uVar0[2]);
			task_follow_nav_mesh_to_coord(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			_task_smart_flee_style_ped(0, Global_35, 4, 512, -1082130432, -1, 0);
			close_sequence_task(&(uVar0[2]));
			task_perform_sequence(&(uLocal_412[4]), &(uVar0[2]));
			clear_sequence_task(uVar0[2]);
			clear_sequence_task(uVar0[3]);
			open_sequence_task(uVar0[3]);
			task_follow_nav_mesh_to_coord(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			_task_smart_flee_style_ped(0, Global_35, 4, 512, -1082130432, -1, 0);
			close_sequence_task(&(uVar0[3]));
			task_perform_sequence(&(uLocal_412[5]), &(uVar0[3]));
			clear_sequence_task(uVar0[3]);
			iLocal_864 = 3;
			break;
		case 3:
			if (((func_94(&(uLocal_412[0]), &(uLocal_412[2]), 1, 0) <= 10f || func_94(&(uLocal_412[0]), &(uLocal_412[3]), 1, 0) <= 10f) || func_94(&(uLocal_412[0]), &(uLocal_412[4]), 1, 0) <= 10f) || func_94(&(uLocal_412[0]), &(uLocal_412[5]), 1, 0) <= 10f)
			{
				if (!func_196())
				{
					task_horse_action(&(uLocal_412[1]), 1, &(uLocal_412[2]), 0);
					func_254(0);
					func_83(&(uLocal_412[0]), Global_35, func_82(55), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					func_197(&uLocal_951);
					iLocal_864 = 4;
				}
				else
				{
					iLocal_864 = 5;
				}
			}
			break;
		case 4:
			if (!func_196())
			{
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_412[0]), 1.5f, 1, 0.4f, 0);
				}
				if (!is_entity_dead(&(uLocal_412[1])))
				{
					set_ped_max_move_blend_ratio(&(uLocal_412[1]), 1.5f);
				}
			}
			if (func_221(&uLocal_951) >= 8f)
			{
				iLocal_864 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_238()
{
	if (is_entity_at_coord(iVar409, 2817.42f, 457.66f, 55.66f, 5f, 5f, 15f, false, true, 0) && iVar1028 == 0)
	{
		iLocal_1030 = 1;
		start_particle_fx_non_looped_at_coord("scr_beat_horse_race_bridge_smk", 2814.21f, 452.12f, 63.7f, 0f, 0f, 0f, 1f, false, false, false);
	}
}

void func_239()
{
	if (!func_416())
	{
		func_417();
	}
	else if (!func_418() && is_entity_at_coord(Global_35, -1383.91f, -134.25f, 93.26f, 30f, 30f, 10f, false, true, 0))
	{
		func_419();
	}
}

bool func_240(int iParam0, int iParam1, bool bParam2)
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

void func_241()
{
	if (func_196())
	{
		switch (iVar400)
		{
			case 1:
			case 2:
				switch (iVar985)
				{
					case 0:
						if (func_221(&uLocal_903) >= 5f)
						{
							if (func_85(-4f, 1, 0, 0))
							{
								func_83(&(uLocal_412[0]), Global_35, func_82(70), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = get_random_int_in_range(10, 20);
								uLocal_987 = iVar985 + 1;
							}
						}
						break;
					case 1:
						if (func_221(&uLocal_903) >= IntToFloat(iVar995) && func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 + 200f))
						{
							if (func_85(-4f, 1, 0, 0))
							{
								func_83(&(uLocal_412[0]), Global_35, func_82(71), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = get_random_int_in_range(10, 20);
								uLocal_987 = iVar985 + 1;
							}
						}
						break;
					case 2:
						if (func_221(&uLocal_903) >= IntToFloat(iVar995) && func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 + 200f))
						{
							if (func_85(-4f, 1, 0, 0))
							{
								func_83(&(uLocal_412[0]), Global_35, func_82(70), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = get_random_int_in_range(10, 20);
								uLocal_987 = iVar985 + 1;
							}
						}
						break;
					case 3:
						if (func_221(&uLocal_903) >= IntToFloat(iVar995) && func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 + 200f))
						{
							if (func_85(-4f, 1, 0, 0))
							{
								func_83(&(uLocal_412[0]), Global_35, func_82(71), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = get_random_int_in_range(10, 20);
								uLocal_987 = iVar985 + 1;
							}
						}
						break;
				}
				break;
		}
	}
	else if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
	{
		switch (iVar984)
		{
			case 0:
				if (func_221(&uLocal_903) >= IntToFloat(iVar995))
				{
					if (func_85(-4f, 1, 0, 0))
					{
						func_83(&(uLocal_412[0]), Global_35, func_82(28), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = get_random_int_in_range(20, 40);
						uLocal_986 = iVar984 + 1;
					}
				}
				break;
			case 1:
				if (func_221(&uLocal_903) >= IntToFloat(iVar995) && func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 + 200f))
				{
					if (func_85(-4f, 1, 0, 0))
					{
						func_83(&(uLocal_412[0]), Global_35, func_82(29), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = get_random_int_in_range(20, 40);
						uLocal_986 = iVar984 + 1;
					}
				}
				break;
			case 2:
				if (func_221(&uLocal_903) >= IntToFloat(iVar995) && func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 - 200f))
				{
					if (func_85(-4f, 1, 0, 0))
					{
						func_83(&(uLocal_412[0]), Global_35, func_82(30), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = get_random_int_in_range(20, 40);
						uLocal_986 = iVar984 + 1;
					}
				}
				break;
		}
		if (func_195(5))
		{
			switch (iVar982)
			{
				case 0:
					if (func_221(&uLocal_900) >= 5f)
					{
						Local_449[1]->f_13 = func_82(72);
						iLocal_867 = 1;
					}
					break;
				case 1:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(73);
						iLocal_867 = 1;
					}
					break;
				case 2:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(74);
						iLocal_867 = 1;
					}
					break;
				case 3:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(75);
						iLocal_867 = 1;
					}
					break;
				case 4:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(76);
						iLocal_867 = 1;
					}
					break;
				case 5:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(77);
						iLocal_867 = 1;
					}
					break;
				case 6:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(78);
						iLocal_867 = 1;
					}
					break;
				case 7:
					if (func_221(&uLocal_900) >= 10f)
					{
						Local_449[1]->f_13 = func_82(79);
						iLocal_867 = 1;
					}
					break;
				case 8:
					iLocal_984 = 0;
					break;
			}
		}
	}
	if (!func_195(5))
	{
		switch (iVar983)
		{
			case 0:
				if (func_221(&uLocal_900) >= 5f)
				{
					Local_449[1]->f_13 = func_82(80);
					iLocal_867 = 1;
				}
				break;
			case 1:
				if (func_221(&uLocal_900) >= 10f)
				{
					Local_449[1]->f_13 = func_82(81);
					iLocal_867 = 1;
				}
				break;
			case 2:
				if (func_221(&uLocal_900) >= 10f)
				{
					Local_449[1]->f_13 = func_82(82);
					iLocal_867 = 1;
				}
				break;
			case 3:
				if (func_221(&uLocal_900) >= 10f)
				{
					Local_449[1]->f_13 = func_82(83);
					iLocal_867 = 1;
				}
				break;
			case 4:
				if (func_221(&uLocal_900) >= 10f)
				{
					Local_449[1]->f_13 = func_82(84);
					iLocal_867 = 1;
				}
				break;
			case 5:
				iLocal_985 = 0;
				break;
		}
	}
	switch (iVar860)
	{
		case 0:
			if (func_196())
			{
				iLocal_862 = 1;
			}
			else
			{
				func_197(&uLocal_903);
				iLocal_862 = 1;
			}
			break;
		case 1:
			if (func_196() && func_221(&uLocal_900) >= 10f)
			{
				func_197(&uLocal_903);
				iLocal_862 = 0;
			}
			if (!func_196() && func_221(&uLocal_903) >= 10f)
			{
				iLocal_862 = 0;
			}
			break;
	}
}

void func_242()
{
	if (func_196() && iVar880 == 0)
	{
		iLocal_882 = 1;
		iLocal_883 = 0;
		if (iVar883 == 1)
		{
			iLocal_881 = 1;
		}
		iLocal_885 = 1;
	}
	if (!func_196() && iVar881 == 0)
	{
		iLocal_882 = 0;
		iLocal_883 = 1;
		if (iVar883 == 1)
		{
			iLocal_881 = 1;
		}
		iLocal_885 = 1;
	}
	if (iVar879 == 1)
	{
		if (!func_222(&uLocal_927))
		{
			func_197(&uLocal_927);
			bLocal_1023 = func_196();
		}
		else if (func_221(&uLocal_927) >= 2f)
		{
			if (func_195(2))
			{
				if (iVar1021 == func_196())
				{
					iLocal_881 = 0;
					iLocal_884 = 1;
					func_197(&uLocal_912);
					func_276(&uLocal_927);
				}
				else
				{
					iLocal_881 = 0;
					iLocal_884 = 0;
				}
			}
		}
	}
	if (iVar1020 == 0 || func_420())
	{
		if (!func_222(&uLocal_930))
		{
			if (func_85(-4f, 1, 0, 0))
			{
				func_197(&uLocal_930);
			}
		}
		else if (func_221(&uLocal_930) >= 1.5f)
		{
			iLocal_1027 = 1;
			func_276(&uLocal_930);
		}
	}
	else
	{
		func_276(&uLocal_930);
		iLocal_1027 = 0;
	}
	if (iVar882 == 1 && iVar1025 == 1)
	{
		if (iVar880 == 1)
		{
			switch (iVar987)
			{
				case 0:
					if (func_85(-4f, 1, 0, 0))
					{
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(35), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989 = iVar987 + 1;
					}
					break;
				case 1:
					if (func_85(-4f, 1, 0, 0))
					{
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(36), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989 = iVar987 + 1;
					}
					break;
				case 2:
					if (func_85(-4f, 1, 0, 0))
					{
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(37), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989 = iVar987 + 1;
					}
					break;
				case 3:
					if (func_85(-4f, 1, 0, 0))
					{
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(38), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989 = 0;
					}
					break;
			}
		}
		else
		{
			switch (iVar986)
			{
				case 0:
					if (func_85(0f, 1, &(uLocal_412[0]), 1))
					{
						func_197(&uLocal_903);
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(31), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988 = iVar986 + 1;
					}
					break;
				case 1:
					if (func_85(0f, 1, &(uLocal_412[0]), 1))
					{
						func_197(&uLocal_903);
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(32), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988 = iVar986 + 1;
					}
					break;
				case 2:
					if (func_85(0f, 1, &(uLocal_412[0]), 1))
					{
						func_197(&uLocal_903);
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(33), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988 = iVar986 + 1;
					}
					break;
				case 3:
					if (func_85(0f, 1, &(uLocal_412[0]), 1))
					{
						func_197(&uLocal_903);
						func_254(0);
						func_83(&(uLocal_412[0]), Global_35, func_82(34), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988 = 0;
					}
					break;
			}
		}
	}
}

void func_243(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	switch (iVar851)
	{
		case 0:
			func_197(&uLocal_875);
			iLocal_880 = get_random_int_in_range(0, 101);
			if (iVar870 <= iParam3)
			{
			}
			iLocal_861 = 1;
			break;
		case 1:
			if (func_221(&uLocal_875) >= IntToFloat(iParam4))
			{
				iLocal_878 = 0;
				iLocal_861 = 0;
			}
			break;
	}
	if (bParam6 == 1)
	{
		if (iVar870 <= iParam3)
		{
			iLocal_878 = 1;
		}
		else
		{
			iLocal_878 = 0;
		}
	}
	if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
	{
		if (func_196())
		{
			if (iVar868 == 1)
			{
				fLocal_879 = 3f;
			}
			else
			{
				fLocal_879 = 2.5f;
				if (bParam6 && func_19(&(uLocal_412[0]), 1, 0) >= fParam0)
				{
					fLocal_879 = 3f;
				}
			}
		}
		else
		{
			if (func_19(&(uLocal_412[0]), 1, 0) <= IntToFloat(iParam5))
			{
				fLocal_879 = 2.001f;
			}
			if (func_19(&(uLocal_412[0]), 1, 0) >= fParam1 && func_19(&(uLocal_412[0]), 1, 0) < fParam2)
			{
				fLocal_879 = 2.001f;
			}
			if (func_19(&(uLocal_412[0]), 1, 0) >= fParam2)
			{
				fLocal_879 = 1.501f;
			}
		}
		waypoint_playback_override_speed(&(uLocal_412[0]), fVar869, iParam7, 0.4f, 0);
	}
}

void func_244()
{
	if (!func_222(&uLocal_921))
	{
		func_197(&uLocal_921);
		iVar0 = func_415();
		if (iVar0 == 1)
		{
			iLocal_1077 = 3;
			iLocal_1078 = 4;
		}
		else
		{
			iLocal_1077 = 2;
			iVar1 = get_random_int_in_range(0, 101);
			if (iVar1 <= 40)
			{
				iLocal_1078 = 7;
			}
			else
			{
				iLocal_1078 = 4;
			}
		}
	}
	else
	{
		if (func_221(&uLocal_921) >= 2f && func_221(&uLocal_921) < 4f)
		{
			_0x23bde06596a22cec(&(uLocal_412[1]), uVar1075, 1f, &(uLocal_412[0]));
		}
		if (func_221(&uLocal_921) >= 15f && !func_402(&(uLocal_412[1]), 1041577989))
		{
			task_horse_action(&(uLocal_412[1]), iVar1076, &(uLocal_412[0]), 0);
			func_276(&uLocal_921);
		}
	}
}

bool func_245()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
			switch (iVar998)
			{
				case 0:
					vVar0 = { -1753.42f, 173.62f, 140.61f };
					vVar3 = { -1770.39f, 116.89f, 156.66f };
					break;
				case 1:
					vVar0 = { -1688.88f, -88.15f, 171.9f };
					vVar3 = { -1671.45f, -279.32f, 168.22f };
					break;
				case 2:
					vVar0 = { -1872.31f, -201.09f, 190.47f };
					vVar3 = { -2094.99f, -185.84f, 203.06f };
					break;
				case 3:
					vVar0 = { -2281.85f, -309.16f, 157.64f };
					vVar3 = { -2294.07f, -338.88f, 155.49f };
					break;
			}
			break;
		case 2:
			switch (iVar998)
			{
				case 0:
					vVar0 = { -1040.01f, 426.66f, 54.01f };
					vVar3 = { -1041.45f, 402.55f, 52.7f };
					break;
				case 1:
					vVar0 = { -1112.46f, 71.13f, 52.79f };
					vVar3 = { -1138.48f, 24.17f, 42.98f };
					break;
				case 2:
					vVar0 = { -1305.49f, -2.13f, 59.16f };
					vVar3 = { -1330.12f, -18.37f, 64.86f };
					break;
				case 3:
					vVar0 = { -1387.13f, -225.66f, 99.33f };
					vVar3 = { -1375.54f, -268.18f, 98.14f };
					break;
			}
			break;
		case 3:
			switch (iVar998)
			{
				case 0:
					vVar0 = { -1897.62f, -709.75f, 112.63f };
					vVar3 = { -1944.99f, -686.92f, 114.15f };
					break;
				case 1:
					vVar0 = { -2004.63f, -735.49f, 105.83f };
					vVar3 = { -2048.28f, -762.51f, 88.79f };
					break;
				case 2:
					vVar0 = { -2181.08f, -810.46f, 110.94f };
					vVar3 = { -2242.41f, -687.13f, 140.43f };
					break;
				case 3:
					vVar0 = { -2284.94f, -580.29f, 162.07f };
					vVar3 = { -2302.84f, -533.31f, 153.16f };
					break;
			}
			break;
		case 4:
			switch (iVar998)
			{
				case 0:
					vVar0 = { -1353.76f, 148.13f, 75.84f };
					vVar3 = { -1312.21f, 122.79f, 72.1f };
					break;
				case 1:
					vVar0 = { -1146.66f, -84.25f, 42.23f };
					vVar3 = { -1099.12f, -192.73f, 84.36f };
					break;
				case 2:
					vVar0 = { -1080.5f, -246f, 83.21f };
					vVar3 = { -1060.06f, -276.41f, 81.46f };
					break;
				case 3:
					vVar0 = { -1045.42f, -288.77f, 81.64f };
					vVar3 = { -1045.42f, -288.77f, 81.64f };
					break;
			}
			break;
	}
	switch (iVar868)
	{
		case 0:
			if (is_entity_at_coord(&(uLocal_412[0]), vVar0, 3f, 3f, 3f, false, true, 0))
			{
				iLocal_1031 = 0;
				iLocal_870 = 1;
			}
			break;
		case 1:
			if (is_entity_at_coord(&(uLocal_412[0]), vVar3, 3f, 3f, 3f, false, true, 0))
			{
				uLocal_1000 = iVar998 + 1;
				func_197(&uLocal_945);
				iLocal_1031 = 1;
				iLocal_870 = 0;
			}
			return false;
	}
	return true;
}

void func_246()
{
	switch (iVar864)
	{
		case 0:
			if (func_221(&uLocal_945) >= 1f && iVar1029 == 1)
			{
				iLocal_866 = 1;
			}
			break;
		case 1:
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(Global_35, true, false), &iVar0);
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(&(uLocal_412[0]), true, false), &iVar1);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 3f, 1, 0.4f, 0);
			}
			if (iVar0 <= iVar1 && func_19(&(uLocal_412[0]), 1, 0) >= 10f)
			{
				iLocal_866 = 2;
			}
			break;
		case 2:
			clear_ped_secondary_task(&(uLocal_412[0]));
			func_83(&(uLocal_412[0]), Global_35, func_82(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iVar2 = get_random_int_in_range(18, 23);
			iVar3 = get_random_int_in_range(0, 101);
			if (iVar3 <= 25)
			{
				iVar2 = 18;
			}
			if (iVar3 <= 50 && iVar3 > 25)
			{
				if (func_415() == 1)
				{
					iVar2 = 20;
				}
				else
				{
					iVar2 = 22;
				}
			}
			task_play_anim(&(uLocal_412[0]), &(Local_737[iVar2]), Local_737[iVar2]->f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
			func_197(&uLocal_948);
			iLocal_866 = 3;
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 1.5f, 1, 0.4f, 0);
			}
			if (!is_entity_dead(&(uLocal_412[1])))
			{
				set_ped_max_move_blend_ratio(&(uLocal_412[1]), 1.5f);
			}
			if (func_221(&uLocal_948) >= 5f)
			{
				func_276(&uLocal_945);
				iLocal_866 = 0;
			}
			break;
	}
}

void func_247()
{
	switch (iVar863)
	{
		case 0:
			if (func_228(Global_35, *vLocal_501[iVar1016], 1) < (fVar1000 + (fVar1000 / 4f)))
			{
				iLocal_1028 = 1;
				iLocal_865 = 1;
			}
			break;
		case 1:
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(Global_35, true, false), &iVar0);
			waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1014]), get_entity_coords(&(uLocal_412[0]), true, false), &iVar1);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_412[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_412[0]), 3f, 1, 0.4f, 0);
			}
			if (!func_421(&(uLocal_412[0])))
			{
				iLocal_1028 = 0;
				iLocal_865 = 3;
			}
			if (iVar0 <= iVar1 && func_19(&(uLocal_412[0]), 1, 0) >= 35f)
			{
				iLocal_865 = 2;
			}
			break;
		case 2:
			clear_ped_secondary_task(&(uLocal_412[0]));
			set_entity_proofs(&(uLocal_412[0]), 8, false);
			task_horse_action(&(uLocal_412[1]), 2, &(uLocal_412[0]), 0);
			task_horse_action(uVar1008, 4, &(uLocal_412[0]), 0);
			iLocal_1028 = 0;
			iLocal_865 = 3;
			break;
		case 3:
			break;
	}
}

void func_248(int iParam0)
{
	iVar5 = 0;
	switch (iVar1013)
	{
		case 0:
			iVar5 = 450;
			break;
		case 1:
			iVar5 = 577;
			break;
		case 2:
			iVar5 = 596;
			break;
		case 3:
			iVar5 = 551;
			break;
		case 4:
			iVar5 = 715;
			break;
		case 5:
			iVar5 = 731;
			break;
		case 6:
			iVar5 = 571;
			break;
		case 7:
			iVar5 = 507;
			break;
		case 8:
			iVar5 = 980;
			break;
		case 9:
			iVar5 = 545;
			break;
		case 10:
			iVar5 = 413;
			break;
	}
	waypoint_recording_get_closest_waypoint(&(sLocal_529[iVar1013]), get_entity_coords(&(uLocal_412[0]), true, false), &iVar0);
	if (iVar0 < iVar5)
	{
		waypoint_recording_get_coord(&(sLocal_529[iVar1013]), iVar5, &vVar1);
		fVar4 = func_422(vVar1, *vLocal_501[iVar1015]);
		_set_entity_coords_and_heading(&(uLocal_412[1]), vVar1, fVar4, false, true, true);
		task_follow_waypoint_recording(&(uLocal_412[0]), &(sLocal_529[iVar1013]), iVar5, 26120, -1, 0, 0, -1);
	}
	if (iParam0 == 1)
	{
		func_249("HORSE_RACE_WON", 7500, 0, 0, -1, -1, 0);
		if (iVar783 == 0)
		{
			func_83(Global_35, &(uLocal_412[0]), func_82(85), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_83(Global_35, &(uLocal_412[0]), func_82(87), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_67(9);
	}
	else
	{
		if (iVar783 == 0)
		{
			func_83(Global_35, &(uLocal_412[0]), func_82(86), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_83(Global_35, &(uLocal_412[0]), func_82(88), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_67(10);
	}
}

void func_249(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_26(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_250()
{
	if (!func_219(iVar522, 4))
	{
		func_216(&uLocal_524, 4);
		if (iVar784 == 0)
		{
			if (iLocal_14 == 1)
			{
				func_423(Local_15.f_3, iVar400, 2);
			}
			else
			{
				func_423(Local_15.f_3, iVar400, 1);
			}
		}
		if (iVar784 == 1 || iVar784 == 2)
		{
			func_423(Local_15.f_3, iVar400, 3);
		}
		if (!func_34())
		{
			if (iVar784 == 0)
			{
				if (iLocal_14 == 1)
				{
					func_423(Local_15.f_3, 4, 1);
				}
				else
				{
					func_423(Local_15.f_3, 4, 2);
				}
			}
			if (iVar784 == 1 || iVar784 == 2)
			{
				func_423(Local_15.f_3, 4, 3);
			}
		}
		else
		{
			if (iVar784 == 0)
			{
				if (iLocal_14 == 1)
				{
					func_423(Local_15.f_3, 4, 3);
				}
				else
				{
					func_423(Local_15.f_3, 4, 4);
				}
			}
			if (iVar784 == 1 || iVar784 == 2)
			{
				func_423(Local_15.f_3, 4, 5);
			}
		}
	}
}

bool func_251()
{
	switch (iVar400)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iVar784 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					return true;
				}
				else
				{
					return true;
				}
			}
			else if (iVar784 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
		case 0:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					return true;
				}
				else
				{
					return true;
				}
			}
			else if (iVar784 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_252()
{
	vVar0 = { get_entity_coords(&(uLocal_412[1]), true, false) };
	get_ground_z_for_3d_coord(get_entity_coords(&(uLocal_412[1]), true, false), &(vVar0.f_2), false);
	if (_does_anim_scene_exist(iVar401))
	{
		if (func_99(&(uLocal_412[1]), 0, 1))
		{
			set_anim_scene_origin(iVar401, vVar0, get_entity_rotation(&(uLocal_412[1]), 2), 2);
		}
	}
}

float func_253(int iParam0)
{
	if (iVar399 == 1)
	{
		if (iParam0 == 1)
		{
			if (iVar783 == 0)
			{
				return 0f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 2f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iVar783 == 0)
			{
				return 2f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 0f;
			}
		}
	}
	else if (iVar399 == 2)
	{
		if (iParam0 == 1)
		{
			if (iVar783 == 0)
			{
				return 2f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 0f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iVar783 == 0)
			{
				return 2f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 0f;
			}
		}
	}
	else if (iVar399 == 0)
	{
		if (iParam0 == 1)
		{
			if (iVar783 == 0)
			{
				return 0f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 0f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iVar783 == 0)
			{
				return 0f;
			}
			else if (iVar783 == 1 || iVar783 == 2)
			{
				return 0f;
			}
		}
	}
	return 0f;
}

void func_254(int iParam0)
{
	func_276(&uLocal_0);
	func_424(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_425();
}

bool func_255()
{
	return Global_40.f_1095.f_3140;
}

void func_256(int iParam0)
{
	Global_40.f_1095.f_3140 = iParam0;
}

var func_257(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_258()
{
	return Global_40.f_1095.f_3140.f_1;
}

void func_259(int iParam0)
{
	Global_40.f_1095.f_3140.f_1 = iParam0;
}

void func_260()
{
	if ((iVar400 == 1 && iLocal_14 == 2) && (iVar784 == 1 || iVar784 == 2))
	{
		if (fVar1001 >= 0.58f && fVar1001 <= 0.7f)
		{
			if (!_0xf29a186ed428b552(&(uLocal_412[0]), 379542007))
			{
				_give_weapon_to_ped_2(&(uLocal_412[0]), 379542007, 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
	}
}

void func_261()
{
	if (iVar886 == 0)
	{
		if ((iVar400 == 1 && iLocal_14 == 2) && (iVar784 == 1 || iVar784 == 2))
		{
			if (fVar1001 >= 0.73f)
			{
				func_83(Global_35, &(uLocal_412[0]), func_82(7), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_888 = 1;
			}
		}
	}
}

void func_262()
{
	clear_sequence_task(&uLocal_1009);
	open_sequence_task(&uLocal_1009);
	if (!is_ped_on_mount(&(uLocal_412[0])) || func_265() == 1)
	{
		if (!is_entity_dead(&(uLocal_412[1])))
		{
			task_mount_animal(0, &(uLocal_412[1]), -1, -1, 1f, 1, 0, 0);
		}
	}
	task_follow_waypoint_recording(0, &(sLocal_529[iVar1014]), 0, 161288, -1, 0, 0, -1);
	_task_move_in_traffic(0, 0.8f, 1552, 0);
	close_sequence_task(iVar1007);
	task_perform_sequence(&(uLocal_412[0]), iVar1007);
	clear_sequence_task(&uLocal_1009);
}

void func_263(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_426(uParam0);
		func_427(iParam1, uParam2);
	}
	func_428(*uParam0, 1, bParam4);
}

bool func_264()
{
	switch (iVar400)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					return true;
				}
				else
				{
					if (fVar1001 <= 0.7f)
					{
						return true;
					}
					if (fVar1001 >= 0.23f && fVar1001 <= 0.71f)
					{
						return true;
					}
				}
			}
			else if (iVar784 > 0)
			{
				if (fVar1001 <= 0.68f)
				{
					return true;
				}
				if (fVar1001 >= 0.23f && fVar1001 <= 0.68f)
				{
					return true;
				}
			}
			else
			{
				if (fVar1001 <= 0.73f)
				{
					return true;
				}
				if (fVar1001 >= 0.2f && fVar1001 <= 0.73f)
				{
					return true;
				}
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					if (fVar1001 <= 0.6f)
					{
						return true;
					}
					if (fVar1001 >= 0.21f && fVar1001 <= 0.6f)
					{
						return true;
					}
				}
				else
				{
					if (fVar1001 <= 0.51f)
					{
						return true;
					}
					if (fVar1001 >= 0.21f && fVar1001 <= 0.51f)
					{
						return true;
					}
				}
			}
			else if (iVar784 > 0)
			{
				if (fVar1001 >= 0.34f)
				{
					return true;
				}
			}
			else if (fVar1001 >= 0.35f)
			{
				return true;
			}
			break;
		case 0:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					if (fVar1001 >= 0.55f)
					{
						return true;
					}
				}
				else if (fVar1001 >= 0.44f)
				{
					return true;
				}
			}
			else if (iVar784 > 0)
			{
				if (fVar1001 >= 0.3f)
				{
					return true;
				}
			}
			else if (fVar1001 >= 0.46f)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_265()
{
	switch (iVar400)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iVar784 > 0)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (iLocal_14 == 2)
			{
				return 0;
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				return 0;
			}
			else if (iLocal_14 == 2)
			{
				return 1;
			}
			break;
		case 0:
			if (iLocal_14 == 1 || iLocal_14 == 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_266(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_96() != -1)
	{
		return;
	}
	if ((Global_36616 && func_429(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_430(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_431(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_432(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_431(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_267(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_169())
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
				if (func_19(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_94(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_197(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_433(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_435(func_434(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_268(int iParam0, bool bParam1)
{
	if (func_99(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_269(float fParam0)
{
	if (func_436(1))
	{
		return true;
	}
	if (func_222(&uLocal_0) && !func_437(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_270(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_271(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_272(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_273(int iParam0)
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

void func_274(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_273(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_438(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_439(iVar0);
	*uParam0 = 0;
}

bool func_275(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_440(iParam2, 1, iVar0);
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
			if (func_441(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_442(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_443(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_444(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_445(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_171(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_442(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_446(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_447(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_448(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_449(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_449(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_442(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_450(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_451(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_452(iParam2, 4000))
				{
					if ((func_453(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_454(iParam2, iParam0)) && func_455(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_453(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_454(iParam2, iParam0)) && func_455(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_456(iParam0, Global_1935630->f_41))
							{
								func_457();
								*uParam3 = 2;
								func_442(iParam0, iParam2, *uParam3);
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
						if (func_456(iParam0, Global_1935630->f_41))
						{
							func_457();
							*uParam3 = 2;
							func_442(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_458(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_459() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_457();
						*uParam3 = 2;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_460())
					{
						if (func_456(iParam0, Global_1935630->f_42))
						{
							func_457();
							*uParam3 = 2;
							func_442(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_461(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_442(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_462(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_463(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_464(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_465(iParam2, 4000))
				{
					if (func_466(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_442(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_467(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_442(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_468(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_442(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_276(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_277()
{
	switch (iVar992)
	{
		case 0:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(53), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994 = iVar992 + 1;
			break;
		case 1:
			func_254(0);
			switch (iVar400)
			{
				case 2:
					func_83(&(uLocal_412[0]), Global_35, func_82(54), 0, -1082130432, 1, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
				default:
					func_83(&(uLocal_412[0]), Global_35, func_82(54), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
			}
			iLocal_994 = iVar992 + 1;
			break;
		case 2:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(55), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994 = iVar992 + 1;
			break;
		case 3:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(56), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994 = 0;
			break;
	}
}

void func_278()
{
	switch (iVar991)
	{
		case 0:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(57), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993 = iVar991 + 1;
			break;
		case 1:
			func_254(0);
			switch (iVar400)
			{
				case 1:
					func_83(&(uLocal_412[0]), Global_35, func_82(58), 0, -1082130432, 1, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
				default:
					func_83(&(uLocal_412[0]), Global_35, func_82(58), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
			}
			iLocal_993 = iVar991 + 1;
			break;
		case 2:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(59), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993 = iVar991 + 1;
			break;
		case 3:
			func_254(0);
			func_83(&(uLocal_412[0]), Global_35, func_82(60), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993 = 0;
			break;
	}
}

bool func_279(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_280(int iParam0, int iParam1)
{
	if (!func_279(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_281(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_282(int iParam0, int iParam1)
{
	iVar1 = func_324(iParam0, iParam1);
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

bool func_283(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_284(int iParam0, int iParam1)
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
	if (func_219(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_219(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_219(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_219(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_219(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_219(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_219(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_219(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_285(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_286(int iParam0)
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

void func_287(int* iParam0)
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

void func_288(int iParam0)
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

void func_289(var uParam0)
{
	if (func_273(uParam0->f_162))
	{
		func_274(&(uParam0->f_162), 1, 1);
	}
	if (func_273(uParam0->f_163))
	{
		func_274(&(uParam0->f_163), 1, 1);
	}
	if (func_273(uParam0->f_164))
	{
		func_274(&(uParam0->f_164), 1, 1);
	}
	if (func_273(uParam0->f_165))
	{
		func_274(&(uParam0->f_165), 1, 1);
	}
}

void func_290(var uParam0)
{
	if (uParam0->f_170)
	{
		func_469();
	}
}

void func_291(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_470(32);
		func_295(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_292(var uParam0)
{
	if (func_471(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_472(uParam0->f_3);
		func_163(uParam0, 0, 1);
		func_473(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_474(0, 0);
		return true;
	}
	return false;
}

void func_293()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_294(int iParam0)
{
	if (!func_27(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_295(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_281(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_96() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_296(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_297(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_298(char* sParam0)
{
	return sParam0;
}

int func_299(int iParam0)
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

int func_300(int iParam0)
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

bool func_301(int iParam0, int iParam1, var uParam2)
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

Vector3 func_302(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_123(*(*uParam1)[iVar0]))
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

void func_303(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_26("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_304(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_305(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_123(vParam0))
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
		if (func_187(vParam0))
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
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_475(iVar0, bParam8);
	return iVar0;
}

void func_306(int iParam0)
{
	if (!func_27(iParam0))
	{
		return;
	}
	func_476(iParam0);
}

void func_307(var uParam0, vector3 vParam1)
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

int func_308(int iParam0)
{
	if (func_57(iParam0, 2))
	{
		return 200;
	}
	if (func_57(iParam0, 4))
	{
		return 70;
	}
	if (func_57(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_309(int iParam0)
{
	if (func_30(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_351() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_30(iParam0, 2);
		bVar1 = func_30(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_169())
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

void func_310(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_57(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_311(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_57(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_57(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_312(int iParam0, int iParam1)
{
	iVar0 = (func_300(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_313(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_123(vParam1))
	{
		return false;
	}
	if (func_318(iParam0, vParam1))
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
	if (func_90(iParam0))
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

bool func_314(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_315(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_103(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_321(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_459();
			iParam4->f_2 = func_228(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_321(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_459();
		iParam4->f_2 = func_228(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_316(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_459() - *uParam0) >= iParam1;
	}
	return false;
}

int func_317(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_123(*uParam0->f_12[iVar0]))
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

bool func_318(int iParam0, vector3 vParam1)
{
	if (!func_30(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_477(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_30(iParam0, 33554432))
	{
		if (func_478(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_319(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_57(iParam0, 128))
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
	if (func_30(iParam0, 1) && !func_30(iParam0, 2))
	{
		if (func_30(iParam0, 4096) || func_30(iParam0, 2048))
		{
			if (func_479(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_320(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_2(&uParam0);
	if (!func_480())
	{
		return false;
	}
	return true;
}

bool func_321(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_481(vVar0, vParam0) > func_481(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_322(int iParam0)
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

int func_323(int iParam0)
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

int func_324(int iParam0, int iParam1)
{
	if (!func_27(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_325(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_482(&iVar1, -2147483648);
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

int func_326()
{
	return get_player_group(get_player_index());
}

bool func_327(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_96() != -1)
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

void func_328(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_329(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_330(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (bParam1)
	{
		func_483(iParam0, 4);
		func_484(iVar0, 1);
		func_485(iVar0, 1);
	}
	else
	{
		func_486(iParam0, 4);
		func_485(iVar0, 0);
	}
}

bool func_331(int iParam0)
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

Vector3 func_332(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_333(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_487((fParam0 + fParam1));
}

int func_334(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_488(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_489(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_490(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_490(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_491(iVar0))
		{
			func_339(iVar0, &(uParam1->f_23), 0);
		}
		if (func_491(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_492(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_493(&(uParam1->f_22)));
			func_495(iVar0, func_494(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_496(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_497(&(uParam1->f_22)))
		{
			func_498(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_499(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_219(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_491(iVar0))
		{
			func_501(iVar0, !func_500(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_502(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_503(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_503(&(uParam1->f_22)));
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

bool func_335(int iParam0, int iParam1)
{
	if (func_504(iParam0) != -1)
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

void func_336(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_429(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_337(var uParam0)
{
	return func_219(*uParam0, 32);
}

int func_338(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_339(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_99(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_340(var uParam0, int iParam1, int iParam2)
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

void func_341(var uParam0, int iParam1, int iParam2)
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

int func_342(int iParam0)
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

var func_343(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_344(int iParam0, var uParam1)
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

float func_345(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

Vector3 func_346(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_347(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_348(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_349(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_505(1);
	}
	else
	{
		iVar0 = func_506(iParam0);
	}
	return iVar0;
}

void func_350(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_507(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_508(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_351()
{
	return Global_1897952->f_41;
}

void func_352(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_57(iParam0, 8192))
	{
		iVar0 = func_508(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_353(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_295(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_354(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_30(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_509(262144, iVar0, 0, 1);
		}
	}
	if (func_30(iParam0, 128))
	{
		func_509(128, iVar0, 0, 1);
	}
	else if (func_30(iParam0, 524288))
	{
		func_509(524288, iVar0, 0, 1);
	}
	else if (func_30(iParam0, 536870912))
	{
		func_509(536870912, iVar0, 0, 1);
	}
	else if (func_30(iParam0, 4194304))
	{
		func_509(4194304, iVar0, 0, 1);
	}
	else if (func_30(iParam0, 8388608))
	{
		func_509(8388608, iVar0, 0, 1);
	}
}

void func_355(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_356(bool bParam0)
{
	if (!bParam0 && func_510(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_357()
{
	return Global_1310750->f_16037;
}

bool func_358(int iParam0)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_359(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_27(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_511(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_512(Global_1393447, 1);
	func_513();
	func_514();
	func_515((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_459() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_516();
		if (iParam1 == -1)
		{
			if (func_4(iParam0, 1))
			{
				func_509(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_4(iParam0, 2))
			{
				func_509(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_4(iParam0, 4))
			{
				func_509(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_517(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_518(to_float(iVar0), 1, 0);
	}
	else
	{
		func_518((to_float(200) / 3f), 1, 0);
	}
}

bool func_361(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_362(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_363(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_364(int iParam0)
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

bool func_365(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_366()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_367(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_368(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_367(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_369() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_369()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_370(bool bParam0, bool bParam1, bool bParam2)
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

int func_371()
{
	return &Global_1899515;
}

int func_372(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_373(int iParam0)
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

bool func_374(int iParam0)
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

bool func_375(int iParam0)
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

bool func_376(int iParam0)
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

bool func_377(int iParam0)
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

bool func_378(int iParam0)
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

bool func_379(int iParam0)
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

bool func_380(bool bParam0, int iParam1, int iParam2)
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

bool func_381()
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

int func_382(int iParam0)
{
	if (!func_385(iParam0))
	{
		return -1;
	}
	return func_520(func_519(iParam0));
}

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_385(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_386(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_387(int iParam0)
{
	return func_30(iParam0, Global_1310750->f_16072 | 64);
}

int func_388(int iParam0)
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

int func_389(int iParam0)
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

bool func_390(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_391(var uParam0, float fParam1)
{
	if (!func_222(uParam0))
	{
		return false;
	}
	if (func_410(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_393(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_394(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_393(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_103(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_197(&(iParam1->f_13));
		}
		if (func_521(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_522(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_394(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_426(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_523(*uParam0, 1, 1);
						}
					}
					else if (func_524(iParam1, 22))
					{
						func_523(*uParam0, 0, 1);
					}
				}
				if (func_525(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_526(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_527(iParam8);
					if (func_528(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_529(uParam3);
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
					func_530(iParam1, uParam3, fVar8);
					if (func_531(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_532(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_533(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_525(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_534(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_528(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_526(uParam0, func_525(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_527(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_532(uParam3, 0, 0, 1, 1);
					}
					func_535(iParam1, 1);
				}
				func_530(iParam1, uParam3, fVar8);
				if (func_533(uParam0, iParam1, fParam4, bVar6))
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
			func_427(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_395(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_536(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_83(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_396(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_96() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_397(int iParam0, bool bParam1)
{
	func_537(iParam0, &iVar0, &iVar1);
	if (!func_538(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_539(iVar0, iVar1);
}

void func_398(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_369() - fParam1);
	func_540(uParam0, 1);
	func_541(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 16);
	}
	else
	{
		func_56(&(uParam0->f_1), 16);
	}
}

void func_400(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_297(&(uParam0->f_1), 4);
	}
	else
	{
		func_56(&(uParam0->f_1), 4);
	}
}

float func_401()
{
	_0xf60165e1d2c5370b(get_mount(Global_35), &uVar2, &fVar3);
	if (is_ped_on_mount(Global_35))
	{
		fVar0 = fVar3;
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 30f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 35f;
		}
		else
		{
			fVar1 = 45f;
		}
	}
	return fVar1;
}

bool func_402(int iParam0, int iParam1)
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

void func_403(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_542(iParam0, iParam1, iParam18);
	}
}

bool func_404()
{
	if (func_543(Global_36, &vVar0, 1f, 1, 0))
	{
		if (func_544(Global_35, vVar0, 8f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_545(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

bool func_406(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_407(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_408(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_546(iVar0, 2))
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
				func_547(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_409(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_410(var uParam0)
{
	if (!func_222(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_413(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_369() - uParam0->f_1);
}

void func_411(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (uParam0->f_3 == 5)
	{
		if (is_gameplay_hint_active())
		{
			func_548();
		}
		if (bParam10)
		{
			uParam0->f_3 = 0;
		}
		return;
	}
	if (uParam0->f_3 > 0 && uParam0->f_3 < 5)
	{
		vVar0 = { _get_object_offset_from_coords(get_entity_coords(iParam1, true, false), fParam5, vParam2) };
		if (func_549(uParam0, vVar0, iParam7, iParam6))
		{
			func_548();
			func_276(uParam0);
			uParam0->f_3 = 5;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!is_gameplay_hint_active())
			{
				if (func_550(uParam0, iParam1, vParam2, iParam6, iParam7, iParam8, iParam9))
				{
					uParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			func_551(&(uParam0->f_4), *uParam0);
			if (func_552(uParam0) >= iParam7)
			{
				uParam0->f_3 = 2;
			}
			break;
	}
}

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_413(var uParam0)
{
	return func_414(*uParam0, 2);
}

bool func_414(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_415()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

bool func_416()
{
	return func_553(0, 536870912);
}

void func_417()
{
	func_554(0, 536870912);
}

bool func_418()
{
	return func_553(0, 1073741824);
}

void func_419()
{
	func_554(0, 1073741824);
}

bool func_420()
{
	if (((((is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[6]), Local_737[6]->f_1, 1) || is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[18]), Local_737[18]->f_1, 1)) || is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[19]), Local_737[19]->f_1, 1)) || is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[20]), Local_737[20]->f_1, 1)) || is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[21]), Local_737[21]->f_1, 1)) || is_entity_playing_anim(&(uLocal_412[0]), &(Local_737[22]), Local_737[22]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_421(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_422(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

void func_423(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_424(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_425()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_426(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_427(int* iParam0, var uParam1)
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
	func_555(iParam0, uParam1, 1);
	func_532(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_428(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_429(int iParam0)
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

int func_430(int iParam0)
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

void func_431(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_556();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_557(iParam0);
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
	if (func_558(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_34())
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
	Global_40.f_11095.f_35 = func_559(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_556();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_560(iVar1);
		func_562(func_561(), 0, 4000);
		func_563(Global_40.f_11095.f_35);
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
		func_564(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_566(func_565(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_430(14))
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
					sParam4 = func_567(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_568(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_568(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_566(func_565(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_430(4))
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
					sParam4 = func_567(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_568(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_568(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_565(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_569(10, 1);
	}
}

void func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_433(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_434(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_570(iParam0, &Var0);
}

int func_435(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_436(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_437(var uParam0, float fParam1)
{
	if (func_391(uParam0, fParam1))
	{
		func_276(uParam0);
		return true;
	}
	return false;
}

int func_438(int iParam0)
{
	return iParam0;
}

void func_439(int iParam0)
{
	if (!func_571(iParam0))
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

void func_440(int iParam0, bool bParam1, int iParam2)
{
	func_572(iParam2);
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
		iParam0->f_13 = func_573(0);
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
							func_56(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_175(1))
						{
							func_56(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_175(1) || *iParam0 & 8192 != 0))
				{
					func_297(iParam0, 33554432);
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
			if (func_574(iParam0))
			{
				iParam0->f_15 = func_459();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_459() - iParam0->f_15) > 500)
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
	func_575(iParam0);
}

bool func_441(int iParam0, int iParam1)
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
			if (!func_576(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_577(iParam0, iVar2) <= func_578(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_442(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_579(iParam2, 1, 1, 1, 0))
	{
		func_56(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_580(iParam1, 1);
	func_293();
}

bool func_443(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_581(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_582(iParam1);
			if (func_583(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_584(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_580(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_580(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_444(int iParam0, int iParam1, int iParam2)
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
	if (func_585(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_582(iParam2);
		if (func_583(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_584(iParam2)
				{
					func_580(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1)
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
	if (func_576(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_584(iParam1)
		{
			fVar3 = func_582(iParam1);
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

bool func_446(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_459();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_447(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_586(iParam2);
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
			if (func_455(iParam2, iParam1))
			{
				func_580(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_448(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_587(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_455(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_580(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_449(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_588(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_580(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_580(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_589(iParam1, vVar0, vVar4))
					{
						func_580(iParam2, 1);
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
					func_580(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_589(iParam1, vVar0, vVar7))
					{
						func_580(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_450(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_576(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_590(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_591(&(Global_1935630->f_34[iVar0])))
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
			if (func_592(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_593(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_594(iParam1, iParam0, fVar1, iVar0))
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

bool func_451(int iParam0, int iParam1)
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

bool func_452(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_459();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_453(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_595(iVar0, &iVar2))
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
	if (func_596(iVar0, iParam0))
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

int func_454(int iParam0, int iParam1)
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

bool func_455(int iParam0, int iParam1)
{
	if (func_597(iParam0))
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

bool func_456(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_94(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_457()
{
}

bool func_458(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_598(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_459();
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
						if (func_228(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_459();
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

int func_459()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_460()
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
	if ((func_459() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_578(iParam0);
	if (iParam0->f_12 > func_599(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_600(iParam1);
	iVar1 = func_601(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_462(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_602(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_463(int iParam0, int iParam1)
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
		if (func_603(iParam0, iParam1, 1))
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
					if (!func_604(iParam1, iParam0))
					{
						if (func_228(iVar4, Global_36, 1) < 7f)
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

bool func_464(int iParam0, int iParam1)
{
	if (!func_605(0))
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

bool func_465(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_459();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_466(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_467(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_459();
	}
	else if (func_459() - iParam1->f_4) > func_606(iParam1)
	{
		return func_607(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_468(int iParam0, int iParam1)
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

void func_469()
{
	func_608(23);
}

void func_470(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_471(var uParam0)
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

void func_472(int iParam0)
{
	iVar0 = func_609(iParam0);
	if (iVar0 != 0)
	{
		func_610(-1, 24, 0, iVar0);
	}
}

void func_473(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_566(func_565(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_30(iParam0, 2))
	{
		func_611(iParam0, func_349(iParam3));
	}
	if (func_30(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_351();
		}
		func_612(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_57(iParam0, 65536))
	{
		func_613(iParam0, iParam1);
		func_614(iParam0, func_118(iParam0, iParam1));
		func_470(128);
	}
	func_353(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_354(iParam0, 1);
	if (!bParam2)
	{
		func_470(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_615(524288);
	}
	if (func_616(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_616(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_474(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_617(&Global_0, 8);
	}
	if (!func_618() || func_96() != -1)
	{
		return;
	}
	func_617(&Global_0, 1);
}

int func_475(int iParam0, bool bParam1)
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

void func_476(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_477(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_123(vParam0))
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

bool func_478(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_123(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_479(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_123(*Global_1310750->f_16043[iVar0]))
		{
			if (func_91(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_480()
{
	iVar0 = func_619(func_181());
	if (iVar0 == 8)
	{
		iVar1 = func_182(func_181());
		if (func_184(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_620(func_505(0)))
	{
		return false;
	}
	if (func_621())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_481(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_482(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_483(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_484(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_546(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_485(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_486(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_487(float fParam0)
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

int func_488(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_622(&uParam1))
	{
		return 1;
	}
	if (!func_623(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_489(var uParam0)
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

int func_490(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_624(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_491(int iParam0)
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

bool func_492(var uParam0)
{
	return func_219(*uParam0, 4);
}

bool func_493(var uParam0)
{
	return func_219(*uParam0, 64);
}

bool func_494(var uParam0)
{
	return func_219(*uParam0, 8);
}

void func_495(int iParam0, bool bParam1, bool bParam2)
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

bool func_496(var uParam0)
{
	return func_219(*uParam0, 128);
}

bool func_497(var uParam0)
{
	return func_219(*uParam0, 2048);
}

void func_498(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_499(var uParam0)
{
	return func_219(*uParam0, 1024);
}

bool func_500(var uParam0)
{
	return func_219(*uParam0, 256);
}

void func_501(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_502(var uParam0)
{
	return func_219(*uParam0, 512);
}

bool func_503(var uParam0)
{
	return func_219(*uParam0, 4096);
}

int func_504(int iParam0)
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

int func_505(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_625(1, 0, 0);
	}
	else
	{
		iVar0 = func_181();
	}
	return func_506(iVar0);
}

int func_506(int iParam0)
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

int func_507(int iParam0)
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

int func_508(int iParam0, int iParam1)
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

void func_509(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_304(Global_1310750[iVar0], iParam0))
		{
			if (!func_294(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_626(iVar0) < func_627(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_353(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_510(int iParam0)
{
	iVar0 = func_628(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_511(int iParam0)
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

void func_512(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_513()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_629(iVar0, 128))
		{
			func_630(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_514()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_629(iVar0, 128) && func_629(iVar0, 1))
		{
			func_630(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_515(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_516()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_30(iVar0, 16777216))
		{
			if (!func_631(iVar0))
			{
				func_632(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_517(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_295(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_295(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_295(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_295(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_295(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_295(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_295(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_518(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_369();
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

int func_519(int iParam0)
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

int func_520(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_521(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_633(iParam0, iParam1))
		{
			if (!func_4(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_532(uParam2, 0, 0, 1, 0);
				func_56(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_4(iParam1->f_10, 1))
		{
			func_634(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_297(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_522(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_4(iParam4, 32);
		func_555(iParam1, uParam2, 0);
		iVar5 = func_635(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_532(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_4(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_4(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_4(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_4(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_4(iParam4, 8388608) || func_4(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_4(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_4(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_524(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_524(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_4(iParam4, 67108864))
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
				iParam6 = func_636(uParam0);
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
			if (func_4(iParam4, 268435456))
			{
				iVar8 = func_637(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_638(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_524(iParam1, 23))
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
			if (func_4(iParam4, 2) || func_4(iParam4, 16))
			{
				func_523(*uParam0, 1, 1);
			}
			else
			{
				func_523(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_523(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_524(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_525(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_639(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_526(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_640(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_4(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_527(int iParam0)
{
	if (func_4(iParam0, 4))
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
	if (func_4(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_4(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_528(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_641(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_642(Global_35)) || func_643(Global_35)) || func_644(Global_35));
	fVar12 = -1f;
	if (func_222(&(iParam1->f_13)))
	{
		fVar12 = func_410(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_273((*uParam4)[iVar0]->f_6);
		func_645(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_646(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_647(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_532(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_648(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_555(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_649(iParam1, fParam6, iParam1->f_9))
					{
						func_197(&(iParam1->f_18));
						if (bVar6)
						{
							func_648(uParam4, 0, 0);
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
		func_650(iParam1, fParam2);
	}
	return bVar5;
}

void func_529(var uParam0)
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

void func_530(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_651((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_650(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_531(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_652(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_653(iParam1, 0);
				func_555(iParam1, uParam2, func_524(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_532(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_273((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_274(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_533(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_197(&(iParam1->f_18));
			return false;
		}
		else if (func_222(&(iParam1->f_18)))
		{
			func_276(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_222(&(iParam1->f_18)))
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
	return func_437(&(iParam1->f_18), fParam2);
	return true;
}

void func_534(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_645(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_535(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_536(int* iParam0)
{
	if (func_524(iParam0, 0))
	{
		if (func_654(iParam0))
		{
			func_535(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_537(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_538(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_655(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_656(iParam0))
	{
		return false;
	}
	if (func_657(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_658(iParam0, 1)) || func_659(32768))
	{
		if (!func_658(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_660())
	{
		return false;
	}
	return true;
}

void func_539(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_540(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_541(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_542(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

bool func_543(vector3 vParam0, int iParam3, float fParam4, int iParam5, bool bParam6)
{
	if (get_closest_road(vParam0, fParam4, iParam5, &vVar3, &vVar0, &uVar10, &uVar9, &uVar11, bParam6))
	{
		vVar6 = { func_661(vVar3 - vVar0) };
		*iParam3 = { vVar0 + vVar6 * FtoV((0.5f * get_distance_between_coords(vVar0, vVar3, true))) };
		return true;
	}
	return false;
}

bool func_544(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_91(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_545(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_662(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

bool func_546(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_547(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_484(iParam0, 1);
	func_485(iParam0, 1);
	func_486(iParam0, 128);
}

void func_548()
{
	_0x88544c0e3291dcae(1);
	func_293();
}

bool func_549(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_123(vParam1))
	{
		return true;
	}
	if (!func_663(*uParam0, iParam4))
	{
		return false;
	}
	if (func_664(1092616192, 1085276160, 0))
	{
		return true;
	}
	if (func_665(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 == 2)
	{
		if (iParam5 == -1)
		{
			iParam5 = 2000;
		}
		if (func_552(uParam0) >= (iParam5 + iParam4))
		{
			return true;
		}
	}
	else if (uParam0->f_4 == 1)
	{
		if (!func_666(uParam0->f_5, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_550(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_273(uParam0->f_5))
	{
		return false;
	}
	if (func_666(uParam0->f_5, 1))
	{
		func_667(uParam0, 1);
		uParam0->f_6 = func_668(uParam0->f_5, 1);
		uParam0->f_7 = func_669(uParam0->f_5, 1);
		if (bParam8)
		{
			func_274(&(uParam0->f_5), 1, 1);
		}
		set_gameplay_entity_hint(iParam1, vParam2, true, iParam5, iParam6, iParam7, 0);
		set_gameplay_hint_fov(30f);
		return true;
	}
	return false;
}

void func_551(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (func_552(&uParam1) < 500)
		{
			if (is_disabled_control_just_released(0, -416594956))
			{
				*uParam0 = 2;
			}
		}
		else if (is_disabled_control_pressed(0, -416594956))
		{
			*uParam0 = 1;
		}
	}
}

int func_552(var uParam0)
{
	if (!func_222(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_413(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_459() - round((uParam0->f_1 * 1000f)));
}

bool func_553(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

void func_554(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	if (func_553(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

void func_555(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_274(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_194(iParam0, 0);
		}
	}
}

int func_556()
{
	iVar0 = func_670();
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

int func_557(int iParam0)
{
	if (func_96() != -1)
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
	fVar1 = func_103(absf(fVar1) < 1f, func_103(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_558(int iParam0)
{
	if (!func_671(iParam0))
	{
		return false;
	}
	return func_672(iParam0);
}

int func_559(int iParam0, int iParam1, int iParam2)
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

int func_560(int iParam0)
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

int func_561()
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

void func_562(int iParam0, bool bParam1, int iParam2)
{
	func_673((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_674(iParam0);
}

void func_563(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_675(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_564(bool bParam0)
{
	bVar3 = false;
	if (func_676(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_677(iVar5, &iVar2, &iVar0))
			{
				if (!func_678(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_679(iVar2);
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
							if (func_680(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_556() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_556() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_681();
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

struct<2> func_565(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_566(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_567(int iParam0)
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

var func_568(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_682(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_569(int iParam0, int iParam1)
{
	if (!func_683(iParam0))
	{
		return 0;
	}
	if (!func_618())
	{
		return 0;
	}
	if (!func_684(iParam0, &iVar0, &uVar1))
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

bool func_570(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_571(int iParam0)
{
	return func_546(iParam0, 2);
}

void func_572(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_685();
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
			func_686(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_573(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_574(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_96() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_687(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_687(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_601(iVar0) == -1)
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

void func_575(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_688(iParam0);
	}
}

bool func_576(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_601(iParam2);
	}
	else
	{
		iVar1 = func_600(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_601(iParam0);
	}
	else
	{
		iVar0 = func_600(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_4(*iParam1, 8388608))
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

float func_577(int iParam0, int iParam1)
{
	return func_94(iParam0, iParam1, 1, 1);
}

float func_578(int iParam0)
{
	return iParam0->f_26;
}

bool func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_580(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 134217728);
	}
	else
	{
		func_297(iParam0, 134217728);
	}
}

bool func_581(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_94(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_689(iVar0, 0)))
		{
			if (func_690(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_582(int iParam0)
{
	return iParam0->f_17;
}

bool func_583(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_4(*iParam0, 4194304))
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

int func_584(int iParam0)
{
	return iParam0->f_18;
}

bool func_585(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_689(iVar0, 0)))
		{
			if (func_691(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_586(int iParam0)
{
	return iParam0->f_23;
}

int func_587(int iParam0)
{
	return iParam0->f_21;
}

int func_588(int iParam0)
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

bool func_589(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_692(iParam0, vParam4, 0.5f))
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

int func_590(int iParam0)
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
	if (func_693(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_591(int iParam0)
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

bool func_592(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_176(iParam1))
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

bool func_593(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_176(iParam1))
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

bool func_594(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_176(iParam1))
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

bool func_595(int iParam0, int iParam1)
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

bool func_596(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_694(iParam0, 1, 0, 0) != 2055893578)
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

bool func_597(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_598(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_228(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_599(int iParam0)
{
	return iParam0->f_24;
}

int func_600(int iParam0)
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

int func_601(int iParam0)
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

int func_602(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_595(Global_35, &iVar1))
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
		fVar2 = func_94(iParam0, player_ped_id(), 0, 1);
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
		if (func_94(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_603(int iParam0, int iParam1, bool bParam2)
{
	func_380(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_604(iParam1, iVar0))
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
				if (!bParam2 || !func_604(iParam1, iVar1))
				{
					if (func_228(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_604(int iParam0, int iParam1)
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

int func_605(int iParam0)
{
	if (func_34())
	{
		return 0;
	}
	return func_695((*Global_1347702)[58]->f_15, 1);
}

int func_606(int iParam0)
{
	return iParam0->f_20;
}

int func_607(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_608(int iParam0)
{
	if (func_96() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_284(func_696(iVar0), 0))
		{
			if (is_ped_group_member(func_696(iVar0), func_326(), 1))
			{
				func_697(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_609(int iParam0)
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

void func_610(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_698() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_698();
					}
					func_699(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_297(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_611(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_507(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_508(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_612(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_57(iParam0, 8192))
	{
		iVar0 = func_508(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_613(int iParam0, int iParam1)
{
	iVar0 = (func_300(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_614(int iParam0, vector3 vParam1)
{
	if (func_30(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_123(vParam1))
	{
		return;
	}
	if (!func_27(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_123(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_314(vVar2, vParam1, 1f, 1))
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

void func_615(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_632(iVar0, iParam0);
		iVar0++;
	}
}

int func_616(int iParam0)
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

void func_617(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_618()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_619(int iParam0)
{
	if (!func_390(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_620(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_621()
{
	return Global_1894899 & 2 != 0;
}

bool func_622(var uParam0)
{
	return func_219(*uParam0, 1);
}

bool func_623(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_700(*uParam0, 0f, 0f, 0f))
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

void func_624(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_701(iParam1))
		{
			func_702(iParam0, 41788943);
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
			func_703(iParam0, 0, 1);
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
			func_704(iParam0, 0);
			bVar0 = true;
		}
		func_705(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_625(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_706(iVar2))
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

int func_626(int iParam0)
{
	if (func_27(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_627(int iParam0)
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

int func_628(int iParam0, int iParam1)
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

bool func_629(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_630(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_631(int iParam0)
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

void func_632(int iParam0, int iParam1)
{
	if (!func_27(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_633(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_707((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_634(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_651((*uParam0)[iVar0]))
		{
			func_271((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_635(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_708(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_273((*uParam2)[iVar0]->f_6))
		{
			func_271((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_636(var uParam0)
{
	iVar0 = func_286(*uParam0);
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

int func_637(var uParam0, int iParam1)
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

void func_638(int* iParam0, int* iParam1)
{
	if (!func_524(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_271(iParam1, 19);
			func_653(iParam0, 23);
			func_709(iParam1, 2);
		}
	}
}

bool func_639(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_710(16))
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
					func_711(16);
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

void func_640(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_708(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_641(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_642(int iParam0)
{
	return (func_712(iParam0, 4) || func_712(iParam0, 5));
}

int func_643(int iParam0)
{
	return func_712(iParam0, 7);
}

int func_644(int iParam0)
{
	return func_712(iParam0, 6);
}

void func_645(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_651(iParam1))
		{
			clear_bit(iParam1, 14);
			func_708(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_646(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_713(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_714(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_330(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_330(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_715(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_647(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_716(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_717(iParam1, 1))
	{
		func_718(iParam1, 1);
		return true;
	}
	return false;
}

void func_648(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_649(int* iParam0, float fParam1, bool bParam2)
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

void func_650(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_651(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0)
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

void func_653(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_654(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_655(int iParam0, int iParam1)
{
	if (func_96() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_656(int iParam0)
{
	if (func_96() != -1)
	{
		if (func_658(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_658(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_657(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_658(iParam0, 65536) && !func_658(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_658(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_658(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_658(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_659(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_660()
{
	return Global_1905944->f_5694;
}

Vector3 func_661(vector3 vParam0)
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

void func_662(bool bParam0)
{
	if (bParam0)
	{
		func_719(4);
	}
	func_719(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_663(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_222(&uParam0))
	{
		return false;
	}
	if (func_552(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_664(float fParam0, float fParam1, bool bParam2)
{
	func_720(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_721(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_665(var uParam0)
{
	if (uParam0->f_6 > 0f)
	{
		fVar0 = func_228(Global_35, func_722(uParam0->f_5), 1);
		if (fVar0 > (uParam0->f_6 + 0.5f))
		{
			return true;
		}
	}
	else if (_does_volume_exist(uParam0->f_7) && !is_entity_in_volume(Global_35, uParam0->f_7, true, 0))
	{
		return true;
	}
	return false;
}

bool func_666(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return false;
	}
	iVar0 = func_438(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_667(var uParam0, bool bParam1)
{
	if (bParam1 || !func_222(uParam0))
	{
		func_197(uParam0);
	}
}

float func_668(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return -1f;
	}
	iVar0 = func_438(iParam0);
	return (*Global_1945938)[iVar0]->f_9;
}

int func_669(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return 0;
	}
	iVar0 = func_438(iParam0);
	return (*Global_1945938)[iVar0]->f_10;
}

int func_670()
{
	return Global_40.f_11095.f_35;
}

bool func_671(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_672(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_673(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_723(bParam1);
	}
}

void func_674(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_675(int iParam0)
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

bool func_676(int iParam0)
{
	if (!func_724(23, &vVar0))
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

bool func_677(int iParam0, int iParam1, int iParam2)
{
	if (!func_724(23, &Var0))
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

bool func_678(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_679(int iParam0)
{
	return iParam0;
}

int func_680(int iParam0)
{
	if (!func_678(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_681()
{
	iVar0 = func_556();
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

void func_682(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_683(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_684(int iParam0, int iParam1, var uParam2)
{
	if (!func_683(iParam0))
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

bool func_685()
{
	if (func_725())
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

void func_686(var uParam0, var uParam1)
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

int func_687(int iParam0)
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

void func_688(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_297(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_56(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_689(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_690(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_691(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_691(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_692(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_693(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_694(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_695(int iParam0, bool bParam1)
{
	switch (func_726(iParam0))
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

int func_696(int iParam0)
{
	if (!func_727(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_697(int iParam0, int iParam1)
{
	if (!func_728(iParam0))
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

int func_698()
{
	return &Global_1899515;
}

void func_699(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_729(*uParam0);
	iVar1 = func_730(*uParam0);
	iVar2 = func_731(*uParam0);
	iVar3 = func_372(*uParam0);
	iVar4 = func_732(*uParam0);
	iVar5 = func_733(*uParam0);
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
	iVar6 = func_734(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_734(iVar1, iVar0);
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
	func_735(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_700(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_701(int iParam0)
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

void func_702(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_736(iParam0, iParam1))
		{
			if (func_737(iParam0, iParam1))
			{
				if (func_738(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_739(iParam0);
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

void func_703(int iParam0, int iParam1, bool bParam2)
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

void func_704(int iParam0, bool bParam1)
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

void func_705(int iParam0, int iParam1)
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

bool func_706(int iParam0)
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

int func_707(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_708(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_273(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_274(&(iParam1->f_6), 0, 1);
	}
	if (!func_273(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_651(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_408(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_273(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_715(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_740(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_741(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_328(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_740(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_330(iParam1->f_6, 0, 1);
				}
				else
				{
					func_330(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_709(int* iParam0, int iParam1)
{
	if (!func_270(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_271(iParam0, 14);
		}
	}
}

bool func_710(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_711(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_712(int iParam0, int iParam1)
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

bool func_713(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_714(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return false;
	}
	return !func_546(iParam0, 4);
}

void func_715(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_273(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	func_740(iParam0, 18, 0, 1);
	func_740(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_716(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return false;
	}
	iVar0 = func_438(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return false;
	}
	iVar0 = func_438(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_718(int iParam0, bool bParam1)
{
	if (bParam1 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_719(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_720(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

bool func_721(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

Vector3 func_722(int iParam0)
{
	iVar0 = func_438(iParam0);
	return func_742(iVar0);
}

void func_723(bool bParam0)
{
	func_743(bParam0);
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

bool func_724(int iParam0, var uParam1)
{
	if (!func_744(iParam0))
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

bool func_725()
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

int func_726(int iParam0)
{
	if (!func_385(iParam0))
	{
		return -1;
	}
	return func_745(iParam0);
}

bool func_727(int iParam0)
{
	return iParam0 > -1;
}

bool func_728(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_729(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_435(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_730(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_731(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_732(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_733(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_734(int iParam0, int iParam1)
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

void func_735(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_746(uParam0, iParam6);
	func_747(uParam0, iParam5);
	func_748(uParam0, iParam4);
	func_749(uParam0, iParam3);
	func_750(uParam0, iParam2);
	func_751(uParam0, iParam1);
}

bool func_736(int iParam0, int iParam1)
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

bool func_737(int iParam0, int iParam1)
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

bool func_738(int iParam0, int iParam1)
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
	if (!func_736(iParam0, iVar0))
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

void func_739(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_740(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_741(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_273(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

Vector3 func_742(int iParam0)
{
	if ((*Global_1945938)[iParam0]->f_5 == 1)
	{
		return _0xf70f00013a62f866((*Global_1945938)[iParam0]->f_10);
	}
	else if ((*Global_1945938)[iParam0]->f_5 == 2)
	{
		return (*Global_1945938)[iParam0]->f_6;
	}
	else if ((*Global_1945938)[iParam0]->f_5 == 3)
	{
		return get_offset_from_entity_in_world_coords((*Global_1945938)[iParam0]->f_11, (*Global_1945938)[iParam0]->f_12);
	}
	return 0f, 0f, 0f;
}

void func_743(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_744(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_745(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_752(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_746(var uParam0, int iParam1)
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

void func_747(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_748(var uParam0, int iParam1)
{
	iVar0 = func_730(*uParam0);
	iVar1 = func_729(*uParam0);
	if (iParam1 < 1 || iParam1 > func_734(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_749(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_750(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_751(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_752(int iParam0)
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

